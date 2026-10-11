#include "ui/pc_menu.h"
/**
 * X-Men Legends - Recompiled code chunk 40
 * Functions: 250 (0x001B3860 - 0x001B8BE0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001B3860
 * Original: 0x001B3860 - 0x001B3867 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3860(void)
{

loc_001B3860: ;
    eax = MEM32(ecx + 0x2DC);
    esp += 4; return; /* ret */

}

/**
 * sub_001B3870
 * Original: 0x001B3870 - 0x001B3897 (39 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3870(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3870: ;
    SET_LO8(eax, MEM8(0x5BB3F3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B387D; /* je: equal / zero */

loc_001B3879: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_001B3881;

loc_001B387D: ;
    SET_LO8(eax, MEM8(esp + 4));

loc_001B3881: ;
    MEM8(ecx + 0x300) = LO8(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0035EB50(); return; /* tail jmp 0x0035EB50 */

}

/**
 * sub_001B38A0
 * Original: 0x001B38A0 - 0x001B38A7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B38A0(void)
{

loc_001B38A0: ;
    SET_LO8(eax, MEM8(ecx + 0x300));
    esp += 4; return; /* ret */

}

/**
 * sub_001B38B0
 * Original: 0x001B38B0 - 0x001B38CE (30 bytes, 6 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B38B0(void)
{

loc_001B38B0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x304) = eax;
    edx = MEM32(eax * 4 + 0x3E3FA8);
    ecx = 0x40354;
    PUSH32(esp, 0x001B38CBu); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_001B38CB: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B38D0
 * Original: 0x001B38D0 - 0x001B38D7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B38D0(void)
{

loc_001B38D0: ;
    eax = MEM32(ecx + 0x304);
    esp += 4; return; /* ret */

}

/**
 * sub_001B38E0
 * Original: 0x001B38E0 - 0x001B38FA (26 bytes, 6 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B38E0(void)
{

loc_001B38E0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x308) = LO8(eax);
    edx = ZX8(LO8(eax));
    ecx = 0x4035C;
    PUSH32(esp, 0x001B38F7u); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_001B38F7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B3900
 * Original: 0x001B3900 - 0x001B3907 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3900(void)
{

loc_001B3900: ;
    SET_LO8(eax, MEM8(ecx + 0x308));
    esp += 4; return; /* ret */

}

/**
 * sub_001B3910
 * Original: 0x001B3910 - 0x001B392A (26 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3910(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3910: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x30C) = eax;
    eax = MEM32(eax * 4 + 0x3E3FD0);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0035DFF0(); return; /* tail jmp 0x0035DFF0 */

}

/**
 * sub_001B3930
 * Original: 0x001B3930 - 0x001B3937 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3930(void)
{

loc_001B3930: ;
    eax = MEM32(ecx + 0x30C);
    esp += 4; return; /* ret */

}

/**
 * sub_001B3940
 * Original: 0x001B3940 - 0x001B3967 (39 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B3940: ;
    SET_LO8(eax, MEM8(0x5BB3F0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B394D; /* je: equal / zero */

loc_001B3949: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_001B3951;

loc_001B394D: ;
    SET_LO8(eax, MEM8(esp + 4));

loc_001B3951: ;
    MEM8(ecx + 0x2E4) = LO8(eax);
    edx = ZX8(LO8(eax));
    ecx = 0x40304;
    PUSH32(esp, 0x001B3964u); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_001B3964: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B3970
 * Original: 0x001B3970 - 0x001B3977 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3970(void)
{

loc_001B3970: ;
    SET_LO8(eax, MEM8(ecx + 0x2E4));
    esp += 4; return; /* ret */

}

/**
 * sub_001B3980
 * Original: 0x001B3980 - 0x001B399E (30 bytes, 6 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3980(void)
{

loc_001B3980: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x2E8) = eax;
    edx = MEM32(eax * 4 + 0x3E3FDC);
    ecx = 0x40344;
    PUSH32(esp, 0x001B399Bu); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_001B399B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B39A0
 * Original: 0x001B39A0 - 0x001B39A7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B39A0(void)
{

loc_001B39A0: ;
    eax = MEM32(ecx + 0x2E8);
    esp += 4; return; /* ret */

}

/**
 * sub_001B39B0
 * Original: 0x001B39B0 - 0x001B39CE (30 bytes, 6 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B39B0(void)
{

loc_001B39B0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x2EC) = eax;
    edx = MEM32(eax * 4 + 0x3E3FDC);
    ecx = 0x40348;
    PUSH32(esp, 0x001B39CBu); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_001B39CB: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B39D0
 * Original: 0x001B39D0 - 0x001B39D7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B39D0(void)
{

loc_001B39D0: ;
    eax = MEM32(ecx + 0x2EC);
    esp += 4; return; /* ret */

}

/**
 * sub_001B39E0
 * Original: 0x001B39E0 - 0x001B3A1B (59 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B39E0(void)
{

loc_001B39E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    MEM32(ecx + 0x2EC) = esi;
    MEM32(ecx + 0x2E8) = eax;
    edx = MEM32(eax * 4 + 0x3E3FDC);
    ecx = 0x40344;
    PUSH32(esp, 0x001B3A06u); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_001B3A06: ;
    edx = MEM32(esi * 4 + 0x3E3FDC);
    ecx = 0x40348;
    PUSH32(esp, 0x001B3A17u); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_001B3A17: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B3A20
 * Original: 0x001B3A20 - 0x001B3A36 (22 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3A20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3A20: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x310) = LO8(eax);
    eax = ZX8(LO8(eax));
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0035EBE0(); return; /* tail jmp 0x0035EBE0 */

}

/**
 * sub_001B3A40
 * Original: 0x001B3A40 - 0x001B3A47 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3A40(void)
{

loc_001B3A40: ;
    SET_LO8(eax, MEM8(ecx + 0x310));
    esp += 4; return; /* ret */

}

/**
 * sub_001B3A50
 * Original: 0x001B3A50 - 0x001B3A67 (23 bytes, 5 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3A50(void)
{

loc_001B3A50: ;
    edx = MEM32(esp + 4);
    MEM32(ecx + 0x314) = edx;
    ecx = 0x40368;
    PUSH32(esp, 0x001B3A64u); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_001B3A64: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B3A70
 * Original: 0x001B3A70 - 0x001B3A77 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3A70(void)
{

loc_001B3A70: ;
    eax = MEM32(ecx + 0x314);
    esp += 4; return; /* ret */

}

/**
 * sub_001B3A80
 * Original: 0x001B3A80 - 0x001B3A9E (30 bytes, 6 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3A80(void)
{

loc_001B3A80: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x320) = eax;
    edx = MEM32(eax * 4 + 0x3E3FA8);
    ecx = 0x40364;
    PUSH32(esp, 0x001B3A9Bu); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_001B3A9B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B3AA0
 * Original: 0x001B3AA0 - 0x001B3AA7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3AA0(void)
{

loc_001B3AA0: ;
    eax = MEM32(ecx + 0x320);
    esp += 4; return; /* ret */

}

/**
 * sub_001B3AB0
 * Original: 0x001B3AB0 - 0x001B3B10 (96 bytes, 21 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3AB0(void)
{

loc_001B3AB0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x324) = eax;
    MEM32(esi + 0x328) = ecx;
    MEM32(esi + 0x32C) = edx;
    eax = MEM32(eax * 4 + 0x3E4008);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B3ADEu); RECOMP_ABI_CALL(0x0035EC80u, sub_0035EC80); /* call 0x0035EC80 */

loc_001B3ADE: ;
    ecx = MEM32(esi + 0x328);
    edx = MEM32(ecx * 4 + 0x3E4008);
    ecx = 0x40378;
    PUSH32(esp, 0x001B3AF5u); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_001B3AF5: ;
    edx = MEM32(esi + 0x32C);
    edx = MEM32(edx * 4 + 0x3E4008);
    ecx = 0x40374;
    PUSH32(esp, 0x001B3B0Cu); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_001B3B0C: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B3B10
 * Original: 0x001B3B10 - 0x001B3B40 (48 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3B10(void)
{

loc_001B3B10: ;
    eax = MEM32(ecx + 0x324);
    edx = MEM32(esp + 4);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 0x328);
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 0x32C);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B3B40
 * Original: 0x001B3B40 - 0x001B3B57 (23 bytes, 5 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3B40(void)
{

loc_001B3B40: ;
    edx = MEM32(esp + 4);
    MEM32(ecx + 0x318) = edx;
    ecx = 0x4036C;
    PUSH32(esp, 0x001B3B54u); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_001B3B54: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B3B60
 * Original: 0x001B3B60 - 0x001B3B67 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3B60(void)
{

loc_001B3B60: ;
    eax = MEM32(ecx + 0x318);
    esp += 4; return; /* ret */

}

/**
 * sub_001B3B70
 * Original: 0x001B3B70 - 0x001B3B87 (23 bytes, 5 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3B70(void)
{

loc_001B3B70: ;
    edx = MEM32(esp + 4);
    MEM32(ecx + 0x31C) = edx;
    ecx = 0x40360;
    PUSH32(esp, 0x001B3B84u); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_001B3B84: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B3B90
 * Original: 0x001B3B90 - 0x001B3B97 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3B90(void)
{

loc_001B3B90: ;
    eax = MEM32(ecx + 0x31C);
    esp += 4; return; /* ret */

}

/**
 * sub_001B3BA0
 * Original: 0x001B3BA0 - 0x001B3BBA (26 bytes, 6 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3BA0(void)
{

loc_001B3BA0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x138) = LO8(eax);
    edx = ZX8(LO8(eax));
    ecx = 0x40310;
    PUSH32(esp, 0x001B3BB7u); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_001B3BB7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B3BC0
 * Original: 0x001B3BC0 - 0x001B3D2B (363 bytes, 139 insns)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3BC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3BC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3E797C);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x001B3BD6u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_001B3BD6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    PUSH32(esp, 0x3E7974);
    PUSH32(esp, esi);
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 0x001B3BE6u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_001B3BE6: ;
    ecx = MEM32(edi + 0x54C);
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B3C2E; /* je: equal / zero */

loc_001B3BFA: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B3C02; /* jne: not equal / not zero */

loc_001B3BFE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B3C2E; /* je: equal / zero */

loc_001B3C02: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x28);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x4C8); PUSH32(esp, 0x001B3C26u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B3C26: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001B3D23; /* jge: greater or equal (signed >=) */

loc_001B3C2E: ;
    eax = esi;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x10) = ebp;
    edx = eax + 1;
    goto loc_001B3C40;

    /* nop */

loc_001B3C40: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B3C40; /* jne: not equal / not zero */

loc_001B3C47: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    eax = eax - edx;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3E7964);
    PUSH32(esp, 0x001B3C65u); RECOMP_ABI_CALL(0x003A5DD0u, sub_003A5DD0); /* call 0x003A5DD0 */

loc_001B3C65: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B3CDD; /* je: equal / zero */

loc_001B3C69: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B3CAB; /* je: equal / zero */

loc_001B3C71: ;
    SET_LO8(ecx, MEM8(0x5BB5C5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B3CD8; /* jne: not equal / not zero */

loc_001B3C7B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B3C81u); RECOMP_ABI_CALL(0x0039E23Cu, sub_0039E23C); /* call 0x0039E23C */

loc_001B3C81: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E7938);
    PUSH32(esp, 0x001B3C8Cu); RECOMP_ABI_CALL(0x001F83B0u, sub_001F83B0); /* call 0x001F83B0 */

loc_001B3C8C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B3C9A; /* jne: not equal / not zero */

loc_001B3C94: ;
    /* int3: debug-trap slide byte, stepped over */
    esi = esi | 0xFFFFFFFFu;
    goto loc_001B3D13;

loc_001B3C9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B3CD8; /* jne: not equal / not zero */

loc_001B3C9F: ;
    MEM8(0x5BB5C5) = 1;
    esi = esi | 0xFFFFFFFFu;
    goto loc_001B3D13;

loc_001B3CAB: ;
    SET_LO8(eax, MEM8(0x5BB5C4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B3CD8; /* jne: not equal / not zero */

loc_001B3CB4: ;
    PUSH32(esp, 0x3E7918);
    PUSH32(esp, 0x001B3CBEu); RECOMP_ABI_CALL(0x001F83B0u, sub_001F83B0); /* call 0x001F83B0 */

loc_001B3CBE: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B3CCC; /* jne: not equal / not zero */

loc_001B3CC6: ;
    /* int3: debug-trap slide byte, stepped over */
    esi = esi | 0xFFFFFFFFu;
    goto loc_001B3D13;

loc_001B3CCC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B3CD8; /* jne: not equal / not zero */

loc_001B3CD1: ;
    MEM8(0x5BB5C4) = 1;

loc_001B3CD8: ;
    esi = esi | 0xFFFFFFFFu;
    goto loc_001B3D13;

loc_001B3CDD: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    esi = eax;
    PUSH32(esp, 0x001B3CE9u); RECOMP_ABI_CALL(0x0039E23Cu, sub_0039E23C); /* call 0x0039E23C */

loc_001B3CE9: ;
    edx = MEM32(esp + 0x20);
    ebx = MEM32(edi);
    ebp = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B3CFDu); RECOMP_ABI_CALL(0x0039E246u, sub_0039E246); /* call 0x0039E246 */

loc_001B3CFD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x4D0); PUSH32(esp, 0x001B3D07u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B3D07: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0x001B3D13u); RECOMP_ABI_CALL(0x003A1D8Du, sub_003A1D8D); /* call 0x003A1D8D */

loc_001B3D13: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B3D21; /* je: equal / zero */

loc_001B3D1B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B3D21u); RECOMP_ABI_CALL(0x003A1D8Du, sub_003A1D8D); /* call 0x003A1D8D */

loc_001B3D21: ;
    eax = esi;

loc_001B3D23: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001B3D30
 * Original: 0x001B3D30 - 0x001B3D58 (40 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3D30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3D30: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B3D48; /* je: equal / zero */

loc_001B3D38: ;
    eax = MEM32(ecx);
    MEM32(esp + 4) = 2;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x24C)); return; /* indirect tail jmp */

loc_001B3D48: ;
    edx = MEM32(ecx);
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x24C)); return; /* indirect tail jmp */

}

/**
 * sub_001B3D60
 * Original: 0x001B3D60 - 0x001B3D6F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B3D60: ;
    edx = MEM32(ecx + 0x524);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_001B3D70
 * Original: 0x001B3D70 - 0x001B3D87 (23 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3D70(void)
{

loc_001B3D70: ;
    MEM32(ecx + 0x160) = MEM32(ecx + 0x160) | 0x400;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x518) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B3D90
 * Original: 0x001B3D90 - 0x001B3D97 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3D90(void)
{

loc_001B3D90: ;
    eax = MEM32(ecx + 0x518);
    esp += 4; return; /* ret */

}

/**
 * sub_001B3DA0
 * Original: 0x001B3DA0 - 0x001B3DA8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3DA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3DA0: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x4E8)); return; /* indirect tail jmp */

}

/**
 * sub_001B3DB0
 * Original: 0x001B3DB0 - 0x001B3DB8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3DB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3DB0: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x4F0)); return; /* indirect tail jmp */

}

/**
 * sub_001B3DC0
 * Original: 0x001B3DC0 - 0x001B3DC5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3DC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B3DC0: ;
    g_seh_ebp = ebp; sub_00368F70(); return; /* tail jmp 0x00368F70 */

}

/**
 * sub_001B3DD0
 * Original: 0x001B3DD0 - 0x001B3EF5 (293 bytes, 69 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3DD0(void)
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

loc_001B3DD0: ;
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x188) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001B3EF2; /* je: equal / zero */

loc_001B3DE7: ;
    eax = MEM32(ecx + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x36C658);
    MEM32(esp + 0xC) = eax;
    eax = 0x100;
    esi = esi | eax;
    MEM32(0x36C658) = esi;
    esi = MEM32(esp + 0xC);
    ebx = MEM32(0x36C658);
    MEM32(0x36CA30) = esi;
    esi = MEM32(ecx + 0x18C);
    MEM32(0x36CA34) = esi;
    MEM32(esp + 0xC) = esi;
    esi = MEM32(0x36CA4C);
    ebx = ebx | eax;
    MEM32(0x36C658) = ebx;
    MEM32(ecx + 0x190) = esi;
    MEM32(esp + 0xC) = esi;
    esi = MEM32(ecx + 0x194);
    MEM32(esp + 0xC) = esi;
    MEM32(0x36C658) = MEM32(0x36C658) | eax;
    esi = MEM32(esp + 0xC);
    ebx = MEM32(0x36C658);
    MEM32(0x36CA40) = esi;
    esi = MEM32(ecx + 0x198);
    ebx = ebx | eax;
    MEM32(0x36CA44) = esi;
    MEM32(esp + 0xC) = esi;
    MEM32(0x36C658) = ebx;
    esi = MEM32(ecx + 0x19C);
    MEM32(esp + 0xC) = esi;
    esi = ebx;
    esi = esi | eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x36C658) = esi;
    MEM32(0x36CA48) = eax;
    eax = MEM32(ecx + 0x188);
    SET_LO8(ebx, MEM8(eax + 0x158));
    POP32(esp, esi);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    POP32(esp, ebx);
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_001B3EC4; /* jns: not sign (positive) */

loc_001B3EA2: ;
    eax = MEM32(eax + 0x148);
    fp_push(MEMF(eax + 0xB0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001B3EC4; /* jp: parity */

loc_001B3EBB: ;
    MEM8(ecx + 0x1A2) = 1;
    goto loc_001B3ECA;

loc_001B3EC4: ;
    MEM8(ecx + 0x1A2) = LO8(edx);

loc_001B3ECA: ;
    _fa = (uint32_t)(MEM8(ecx + 0x20)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x20), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B3ED7; /* je: equal / zero */

loc_001B3ECF: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x001B3ED4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B3ED4: ;
    esp += 8; return; /* ret 4 */

loc_001B3ED7: ;
    eax = MEM32(0x36C658);
    eax = eax | 0x900;
    MEM32(0x36CA38) = edx;
    MEM32(0x36C658) = eax;
    MEM32(0x36CA3C) = edx;

loc_001B3EF2: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B3F00
 * Original: 0x001B3F00 - 0x001B3F27 (39 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3F00(void)
{

loc_001B3F00: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x1C) = eax;
    ecx = eax;
    eax = MEM32(0x36C658);
    eax = eax | 0x100;
    edx = ecx;
    MEM32(esp + 4) = ecx;
    MEM32(0x36C658) = eax;
    MEM32(0x36CA30) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B3F30
 * Original: 0x001B3F30 - 0x001B3F65 (53 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B3F30: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    edx = eax;
    edx = edx >> 0x14;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B3F60; /* jne: not equal / not zero */

loc_001B3F40: ;
    edx = eax;
    edx = edx >> 0x10;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B3F60; /* jne: not equal / not zero */

loc_001B3F4A: ;
    SET_LO8(edx, MEM8(ecx + 0x1A2));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B3F60; /* jne: not equal / not zero */

loc_001B3F54: ;
    eax = eax >> 0x18;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B3F60; /* jne: not equal / not zero */

loc_001B3F5B: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_001B3F60: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B3F70
 * Original: 0x001B3F70 - 0x001B3F9A (42 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3F70(void)
{

loc_001B3F70: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x18C) = eax;
    ecx = eax;
    eax = MEM32(0x36C658);
    eax = eax | 0x100;
    edx = ecx;
    MEM32(esp + 4) = ecx;
    MEM32(0x36C658) = eax;
    MEM32(0x36CA34) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B3FA0
 * Original: 0x001B3FA0 - 0x001B3FA7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3FA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001B3FA0: ;
    fp_push(MEMF(ecx + 0x18C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B3FB0
 * Original: 0x001B3FB0 - 0x001B3FDA (42 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3FB0(void)
{

loc_001B3FB0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x190) = eax;
    ecx = eax;
    eax = MEM32(0x36C658);
    eax = eax | 0x100;
    edx = ecx;
    MEM32(esp + 4) = ecx;
    MEM32(0x36C658) = eax;
    MEM32(0x36CA4C) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B3FE0
 * Original: 0x001B3FE0 - 0x001B3FE7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3FE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001B3FE0: ;
    fp_push(MEMF(ecx + 0x190)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B3FF0
 * Original: 0x001B3FF0 - 0x001B4068 (120 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3FF0(void)
{

loc_001B3FF0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x194) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x198) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x19C) = edx;
    ecx = MEM32(eax);
    edx = MEM32(0x36C658);
    MEM32(esp + 4) = ecx;
    ecx = 0x100;
    edx = edx | ecx;
    MEM32(0x36C658) = edx;
    edx = MEM32(esp + 4);
    MEM32(0x36CA40) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 4) = edx;
    MEM32(0x36C658) = MEM32(0x36C658) | ecx;
    edx = MEM32(esp + 4);
    MEM32(0x36CA44) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 4) = eax;
    eax = MEM32(0x36C658);
    eax = eax | ecx;
    ecx = MEM32(esp + 4);
    MEM32(0x36C658) = eax;
    MEM32(0x36CA48) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B4070
 * Original: 0x001B4070 - 0x001B4091 (33 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4070(void)
{

loc_001B4070: ;
    edx = MEM32(ecx + 0x194);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x198);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x19C);
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B40A0
 * Original: 0x001B40A0 - 0x001B40A8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B40A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B40A0: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x40C)); return; /* indirect tail jmp */

}

/**
 * sub_001B40B0
 * Original: 0x001B40B0 - 0x001B40CF (31 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B40B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B40B0: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, 0); /* xor self */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3A (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001B40CC; /* ja: above (unsigned >) */

loc_001B40BC: ;
    ecx = ZX8(MEM8(ecx + 0x1B40D8));
    { uint32_t _jt = MEM32(ecx * 4 + 0x1B40D0); /* switch: 2 entries, 2 targets */
    if (_jt == 0x001B40CAu) goto loc_001B40CA;
    if (_jt == 0x001B40CCu) goto loc_001B40CC;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001B40CA: ;
    SET_LO8(eax, 1);

loc_001B40CC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B4120
 * Original: 0x001B4120 - 0x001B4220 (256 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4120(void)
{

loc_001B4120: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x40C); PUSH32(esp, 0x001B412Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B412D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B4130
 * Original: 0x001B4130 - 0x001B4220 (240 bytes, 54 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4130(void)
{

loc_001B4130: ;
    eax = MEM32(0x5BB438);
    ecx = MEM32(0x5BB43C);
    edx = MEM32(0x5BB3A0);
    MEM32(0x5BB3F8) = eax;
    eax = MEM32(0x5BB3A4);
    MEM32(0x5BB3FC) = ecx;
    ecx = MEM32(0x5BB440);
    MEM32(0x5BB438) = edx;
    edx = MEM32(0x5BB444);
    MEM32(0x5BB43C) = eax;
    eax = MEM32(0x5BB488);
    MEM32(0x5BB400) = ecx;
    ecx = MEM32(0x5BB48C);
    MEM32(0x5BB404) = edx;
    edx = MEM32(0x5BB450);
    MEM32(0x5BB440) = eax;
    eax = MEM32(0x5BB454);
    MEM32(0x5BB444) = ecx;
    ecx = MEM32(0x5BB3B8);
    MEM32(0x5BB410) = edx;
    edx = MEM32(0x5BB3BC);
    MEM32(0x5BB414) = eax;
    eax = MEM32(0x5BB458);
    MEM32(0x5BB450) = ecx;
    ecx = MEM32(0x5BB45C);
    MEM32(0x5BB454) = edx;
    edx = MEM32(0x5BB3C0);
    MEM32(0x5BB418) = eax;
    eax = MEM32(0x5BB3C4);
    MEM32(0x5BB41C) = ecx;
    ecx = MEM32(0x5BB470);
    MEM32(0x5BB458) = edx;
    edx = MEM32(0x5BB474);
    MEM32(0x5BB45C) = eax;
    eax = MEM32(0x5BB3E8);
    MEM32(0x5BB430) = ecx;
    ecx = MEM32(0x5BB3EC);
    MEM32(0x5BB434) = edx;
    MEM32(0x5BB470) = eax;
    MEM32(0x5BB474) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001B4220
 * Original: 0x001B4220 - 0x001B4395 (373 bytes, 98 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4220(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4220: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    ecx = MEM32(0x5BB3F8);
    fp_push(MEMF(0x3C7B8C)); /* fld float */
    eax = MEM32(0x5BB438);
    edx = MEM32(0x5BB3FC);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    ecx = MEM32(0x5BB43C);
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    MEM32(esp) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM64(esp)); /* fild */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3A (32-bit) */
    _cf = (int)(_fa < _fb);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_A(_fa, _fb)) goto loc_001B438F; /* ja: above (unsigned >) */

loc_001B425F: ;
    edx = ZX8(MEM8(eax + 0x1B43C0));
    { uint32_t _jt = MEM32(edx * 4 + 0x1B4398); /* switch: 10 entries, 10 targets */
    if (_jt == 0x001B426Du) goto loc_001B426D;
    if (_jt == 0x001B4278u) goto loc_001B4278;
    if (_jt == 0x001B4286u) goto loc_001B4286;
    if (_jt == 0x001B42B8u) goto loc_001B42B8;
    if (_jt == 0x001B42E9u) goto loc_001B42E9;
    if (_jt == 0x001B42F7u) goto loc_001B42F7;
    if (_jt == 0x001B4329u) goto loc_001B4329;
    if (_jt == 0x001B4346u) goto loc_001B4346;
    if (_jt == 0x001B4363u) goto loc_001B4363;
    if (_jt == 0x001B438Fu) goto loc_001B438F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001B426D: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp)); /* fld float */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_001B4278: ;
    fp_pop(); /* fstp st(0) */
    fp_push((double)SMEM64(0x5BB480)); /* fild */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_001B4286: ;
    ecx = MEM32(0x5BB400);
    fp_pop(); /* fstp st(0) */
    eax = MEM32(0x5BB440);
    edx = MEM32(0x5BB404);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    ecx = MEM32(0x5BB444);
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = ecx;
    fp_push((double)SMEM64(esp + 8)); /* fild */
    fp_top() = fp_top() / MEMF(esp); /* fdiv dword ptr [esp] */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_001B42B8: ;
    eax = MEM32(0x5BB410);
    fp_pop(); /* fstp st(0) */
    edx = MEM32(0x5BB450);
    ecx = MEM32(0x5BB414);
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    eax = MEM32(0x5BB454);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM64(esp + 8)); /* fild */
    fp_top() = fp_top() / MEMF(esp); /* fdiv dword ptr [esp] */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_001B42E9: ;
    fp_pop(); /* fstp st(0) */
    fp_push((double)SMEM64(0x5BB498)); /* fild */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_001B42F7: ;
    edx = MEM32(0x5BB418);
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(0x5BB458);
    eax = MEM32(0x5BB41C);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    edx = MEM32(0x5BB45C);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(eax) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    fp_push((double)SMEM64(esp + 8)); /* fild */
    fp_top() = fp_top() / MEMF(esp); /* fdiv dword ptr [esp] */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_001B4329: ;
    fp_pop(); /* fstp st(0) */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    fp_push((double)SMEM64(0x5BB380)); /* fild */
    MEM32(0x5BB380) = eax;
    MEM32(0x5BB384) = eax;
    fp_top() = fp_top() / MEMF(esp); /* fdiv dword ptr [esp] */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_001B4346: ;
    fp_pop(); /* fstp st(0) */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    fp_push((double)SMEM64(0x5BB378)); /* fild */
    MEM32(0x5BB378) = eax;
    MEM32(0x5BB37C) = eax;
    fp_top() = fp_top() / MEMF(esp); /* fdiv dword ptr [esp] */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_001B4363: ;
    ecx = MEM32(0x5BB430);
    fp_pop(); /* fstp st(0) */
    eax = MEM32(0x5BB470);
    edx = MEM32(0x5BB434);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    ecx = MEM32(0x5BB474);
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = ecx;
    fp_push((double)SMEM64(esp + 8)); /* fild */
    fp_top() = fp_top() / MEMF(esp); /* fdiv dword ptr [esp] */

loc_001B438F: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B4400
 * Original: 0x001B4400 - 0x001B4430 (48 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4400(void)
{

loc_001B4400: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x440); PUSH32(esp, 0x001B4427u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B4427: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001B4430
 * Original: 0x001B4430 - 0x001B445D (45 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4430(void)
{

loc_001B4430: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x440); PUSH32(esp, 0x001B445Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B445A: ;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001B4460
 * Original: 0x001B4460 - 0x001B4490 (48 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4460(void)
{

loc_001B4460: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x440); PUSH32(esp, 0x001B448Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B448D: ;
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001B4490
 * Original: 0x001B4490 - 0x001B44B0 (32 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4490(void)
{

loc_001B4490: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x334);
    eax = eax | 0x10000;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B44B0
 * Original: 0x001B44B0 - 0x001B44CA (26 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B44B0(void)
{

loc_001B44B0: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x444); PUSH32(esp, 0x001B44C7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B44C7: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B44D0
 * Original: 0x001B44D0 - 0x001B44E7 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B44D0(void)
{

loc_001B44D0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x444); PUSH32(esp, 0x001B44E4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B44E4: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B44F0
 * Original: 0x001B44F0 - 0x001B4507 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B44F0(void)
{

loc_001B44F0: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x444); PUSH32(esp, 0x001B4504u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B4504: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B4510
 * Original: 0x001B4510 - 0x001B45EB (219 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4510(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4510: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001B45E8; /* ja: above (unsigned >) */

loc_001B451D: ;
    ecx = ZX8(MEM8(eax + 0x1B4650));
    { uint32_t _jt = MEM32(ecx * 4 + 0x1B45EC); /* switch: 25 entries, 25 targets */
    if (_jt == 0x001B452Bu) goto loc_001B452B;
    if (_jt == 0x001B4533u) goto loc_001B4533;
    if (_jt == 0x001B453Bu) goto loc_001B453B;
    if (_jt == 0x001B4543u) goto loc_001B4543;
    if (_jt == 0x001B454Bu) goto loc_001B454B;
    if (_jt == 0x001B4553u) goto loc_001B4553;
    if (_jt == 0x001B455Bu) goto loc_001B455B;
    if (_jt == 0x001B4563u) goto loc_001B4563;
    if (_jt == 0x001B456Bu) goto loc_001B456B;
    if (_jt == 0x001B4573u) goto loc_001B4573;
    if (_jt == 0x001B457Bu) goto loc_001B457B;
    if (_jt == 0x001B4583u) goto loc_001B4583;
    if (_jt == 0x001B458Bu) goto loc_001B458B;
    if (_jt == 0x001B4593u) goto loc_001B4593;
    if (_jt == 0x001B459Bu) goto loc_001B459B;
    if (_jt == 0x001B45A3u) goto loc_001B45A3;
    if (_jt == 0x001B45ABu) goto loc_001B45AB;
    if (_jt == 0x001B45B3u) goto loc_001B45B3;
    if (_jt == 0x001B45BBu) goto loc_001B45BB;
    if (_jt == 0x001B45C3u) goto loc_001B45C3;
    if (_jt == 0x001B45CBu) goto loc_001B45CB;
    if (_jt == 0x001B45D3u) goto loc_001B45D3;
    if (_jt == 0x001B45DBu) goto loc_001B45DB;
    if (_jt == 0x001B45E3u) goto loc_001B45E3;
    if (_jt == 0x001B45E8u) goto loc_001B45E8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001B452B: ;
    eax = 0x10;
    esp += 8; return; /* ret 4 */

loc_001B4533: ;
    eax = 0x1D;
    esp += 8; return; /* ret 4 */

loc_001B453B: ;
    eax = 0x1F;
    esp += 8; return; /* ret 4 */

loc_001B4543: ;
    eax = 0x3F;
    esp += 8; return; /* ret 4 */

loc_001B454B: ;
    eax = 0x12;
    esp += 8; return; /* ret 4 */

loc_001B4553: ;
    eax = 0x40;
    esp += 8; return; /* ret 4 */

loc_001B455B: ;
    eax = 0x17;
    esp += 8; return; /* ret 4 */

loc_001B4563: ;
    eax = 0x3E;
    esp += 8; return; /* ret 4 */

loc_001B456B: ;
    eax = 0x3D;
    esp += 8; return; /* ret 4 */

loc_001B4573: ;
    eax = 0x11;
    esp += 8; return; /* ret 4 */

loc_001B457B: ;
    eax = 0x37;
    esp += 8; return; /* ret 4 */

loc_001B4583: ;
    eax = 0x16;
    esp += 8; return; /* ret 4 */

loc_001B458B: ;
    eax = 0x41;
    esp += 8; return; /* ret 4 */

loc_001B4593: ;
    eax = 0x1C;
    esp += 8; return; /* ret 4 */

loc_001B459B: ;
    eax = 0x1E;
    esp += 8; return; /* ret 4 */

loc_001B45A3: ;
    eax = 0x20;
    esp += 8; return; /* ret 4 */

loc_001B45AB: ;
    eax = 0x1B;
    esp += 8; return; /* ret 4 */

loc_001B45B3: ;
    eax = 0x35;
    esp += 8; return; /* ret 4 */

loc_001B45BB: ;
    eax = 0x13;
    esp += 8; return; /* ret 4 */

loc_001B45C3: ;
    eax = 0x36;
    esp += 8; return; /* ret 4 */

loc_001B45CB: ;
    eax = 0x2E;
    esp += 8; return; /* ret 4 */

loc_001B45D3: ;
    eax = 0x2F;
    esp += 8; return; /* ret 4 */

loc_001B45DB: ;
    eax = 0x30;
    esp += 8; return; /* ret 4 */

loc_001B45E3: ;
    eax = 0x31;

loc_001B45E8: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B4690
 * Original: 0x001B4690 - 0x001B46B0 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B4690: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001B46A6; /* jge: greater or equal (signed >=) */

loc_001B46A2: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_001B46A6: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(edx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_001B46B0
 * Original: 0x001B46B0 - 0x001B49A2 (754 bytes, 211 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B46B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B46B0: ;
    eax = MEM32(esp + 8);
    ecx = 0; /* xor self */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x41 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001B499F; /* ja: above (unsigned >) */

loc_001B46D0: ;
    ecx = ZX8(MEM8(ecx + 0x1B4A2C));
    { uint32_t _jt = MEM32(ecx * 4 + 0x1B49A4); /* switch: 34 entries, 34 targets */
    if (_jt == 0x001B46DEu) goto loc_001B46DE;
    if (_jt == 0x001B46F9u) goto loc_001B46F9;
    if (_jt == 0x001B4711u) goto loc_001B4711;
    if (_jt == 0x001B472Au) goto loc_001B472A;
    if (_jt == 0x001B4742u) goto loc_001B4742;
    if (_jt == 0x001B475Eu) goto loc_001B475E;
    if (_jt == 0x001B4779u) goto loc_001B4779;
    if (_jt == 0x001B478Bu) goto loc_001B478B;
    if (_jt == 0x001B479Du) goto loc_001B479D;
    if (_jt == 0x001B47AFu) goto loc_001B47AF;
    if (_jt == 0x001B47C5u) goto loc_001B47C5;
    if (_jt == 0x001B47DFu) goto loc_001B47DF;
    if (_jt == 0x001B47FAu) goto loc_001B47FA;
    if (_jt == 0x001B4810u) goto loc_001B4810;
    if (_jt == 0x001B4822u) goto loc_001B4822;
    if (_jt == 0x001B4826u) goto loc_001B4826;
    if (_jt == 0x001B483Eu) goto loc_001B483E;
    if (_jt == 0x001B4845u) goto loc_001B4845;
    if (_jt == 0x001B4857u) goto loc_001B4857;
    if (_jt == 0x001B4872u) goto loc_001B4872;
    if (_jt == 0x001B4888u) goto loc_001B4888;
    if (_jt == 0x001B48A1u) goto loc_001B48A1;
    if (_jt == 0x001B48BAu) goto loc_001B48BA;
    if (_jt == 0x001B48CFu) goto loc_001B48CF;
    if (_jt == 0x001B48E7u) goto loc_001B48E7;
    if (_jt == 0x001B48FDu) goto loc_001B48FD;
    if (_jt == 0x001B4913u) goto loc_001B4913;
    if (_jt == 0x001B4925u) goto loc_001B4925;
    if (_jt == 0x001B4937u) goto loc_001B4937;
    if (_jt == 0x001B494Du) goto loc_001B494D;
    if (_jt == 0x001B495Fu) goto loc_001B495F;
    if (_jt == 0x001B4974u) goto loc_001B4974;
    if (_jt == 0x001B4989u) goto loc_001B4989;
    if (_jt == 0x001B499Fu) goto loc_001B499F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001B46DE: ;
    SET_LO8(ecx, 8);
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax + 3) = LO8(ecx);
    MEM8(eax + 8) = 0x20;
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax) = LO8(ecx);
    MEM32(eax + 0xC) = 0;
    esp += 12; return; /* ret 8 */

loc_001B46F9: ;
    SET_LO8(ecx, 8);
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax + 8) = 0x20;
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax) = LO8(ecx);
    MEM32(eax + 0xC) = 0;
    esp += 12; return; /* ret 8 */

loc_001B4711: ;
    SET_LO8(ecx, 5);
    MEM8(eax + 1) = 6;
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax + 8) = 0x10;
    MEM8(eax) = LO8(ecx);
    MEM32(eax + 0xC) = 0;
    esp += 12; return; /* ret 8 */

loc_001B472A: ;
    SET_LO8(ecx, 5);
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax + 8) = 0x10;
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax) = LO8(ecx);
    MEM32(eax + 0xC) = 0;
    esp += 12; return; /* ret 8 */

loc_001B4742: ;
    SET_LO8(ecx, 5);
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax + 3) = 1;
    MEM8(eax + 8) = 0x10;
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax) = LO8(ecx);
    MEM32(eax + 0xC) = 0;
    esp += 12; return; /* ret 8 */

loc_001B475E: ;
    SET_LO8(ecx, 4);
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax + 3) = LO8(ecx);
    MEM8(eax + 8) = 0x10;
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax) = LO8(ecx);
    MEM32(eax + 0xC) = 0;
    esp += 12; return; /* ret 8 */

loc_001B4779: ;
    SET_LO8(ecx, 8);
    MEM8(eax + 3) = LO8(ecx);
    MEM8(eax + 8) = LO8(ecx);
    MEM32(eax + 0xC) = 0;
    esp += 12; return; /* ret 8 */

loc_001B478B: ;
    SET_LO8(ecx, 8);
    MEM8(eax + 5) = LO8(ecx);
    MEM8(eax + 8) = LO8(ecx);
    MEM32(eax + 0xC) = 0;
    esp += 12; return; /* ret 8 */

loc_001B479D: ;
    SET_LO8(ecx, 8);
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 8) = LO8(ecx);
    MEM32(eax + 0xC) = 0;
    esp += 12; return; /* ret 8 */

loc_001B47AF: ;
    SET_LO8(ecx, 8);
    MEM8(eax + 3) = LO8(ecx);
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 8) = 0x10;
    MEM32(eax + 0xC) = 0;
    esp += 12; return; /* ret 8 */

loc_001B47C5: ;
    ecx = 1;
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax + 3) = LO8(ecx);
    MEM8(eax + 8) = 4;
    MEM32(eax + 0xC) = ecx;
    esp += 12; return; /* ret 8 */

loc_001B47DF: ;
    SET_LO8(ecx, 2);
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax + 3) = LO8(ecx);
    MEM8(eax + 8) = 8;
    MEM32(eax + 0xC) = 1;
    esp += 12; return; /* ret 8 */

loc_001B47FA: ;
    MEM8(eax + 6) = 0x18;
    MEM8(eax + 7) = 8;
    MEM8(eax + 8) = 0x20;
    MEM32(eax + 0xC) = 0;
    esp += 12; return; /* ret 8 */

loc_001B4810: ;
    SET_LO8(ecx, 0x10);
    MEM8(eax + 6) = LO8(ecx);
    MEM8(eax + 8) = LO8(ecx);
    MEM32(eax + 0xC) = 0;
    esp += 12; return; /* ret 8 */

loc_001B4822: ;
    MEM8(eax + 3) = 1;

loc_001B4826: ;
    SET_LO8(ecx, 5);

loc_001B4828: ;
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax + 8) = 0x10;
    MEM8(eax + 2) = LO8(ecx);
    MEM32(eax + 0xC) = 3;
    esp += 12; return; /* ret 8 */

loc_001B483E: ;
    SET_LO8(ecx, 4);
    MEM8(eax + 3) = LO8(ecx);
    goto loc_001B4828;

loc_001B4845: ;
    SET_LO8(ecx, 8);
    MEM8(eax + 3) = LO8(ecx);
    MEM8(eax + 8) = LO8(ecx);
    MEM32(eax + 0xC) = 3;
    esp += 12; return; /* ret 8 */

loc_001B4857: ;
    SET_LO8(ecx, 8);
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax + 3) = LO8(ecx);
    MEM8(eax + 8) = 0x20;
    MEM8(eax + 2) = LO8(ecx);
    MEM32(eax + 0xC) = 3;
    esp += 12; return; /* ret 8 */

loc_001B4872: ;
    SET_LO8(ecx, 8);
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax + 8) = 0x10;
    MEM8(eax + 2) = LO8(ecx);
    MEM32(eax + 0xC) = 3;
    esp += 12; return; /* ret 8 */

loc_001B4888: ;
    SET_LO8(ecx, 5);
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 1) = 6;
    MEM8(eax + 8) = 0x10;
    MEM8(eax + 2) = LO8(ecx);
    MEM32(eax + 0xC) = 3;
    esp += 12; return; /* ret 8 */

loc_001B48A1: ;
    SET_LO8(ecx, 5);
    MEM8(eax) = 6;
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax + 8) = 0x10;
    MEM8(eax + 2) = LO8(ecx);
    MEM32(eax + 0xC) = 3;
    esp += 12; return; /* ret 8 */

loc_001B48BA: ;
    SET_LO8(ecx, 8);
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax + 8) = 0x10;
    MEM32(eax + 0xC) = 3;
    esp += 12; return; /* ret 8 */

loc_001B48CF: ;
    SET_LO8(ecx, 8);
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax + 8) = 0x20;
    MEM32(eax + 0xC) = 3;
    esp += 12; return; /* ret 8 */

loc_001B48E7: ;
    SET_LO8(ecx, 8);
    MEM8(eax + 3) = LO8(ecx);
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 8) = 0x10;
    MEM32(eax + 0xC) = 3;
    esp += 12; return; /* ret 8 */

loc_001B48FD: ;
    MEM8(eax + 3) = 1;
    MEM8(eax + 4) = 8;
    MEM8(eax + 8) = 0x10;
    MEM32(eax + 0xC) = 3;
    esp += 12; return; /* ret 8 */

loc_001B4913: ;
    SET_LO8(ecx, 0x10);
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 8) = LO8(ecx);
    MEM32(eax + 0xC) = 3;
    esp += 12; return; /* ret 8 */

loc_001B4925: ;
    SET_LO8(ecx, 8);
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 8) = LO8(ecx);
    MEM32(eax + 0xC) = 3;
    esp += 12; return; /* ret 8 */

loc_001B4937: ;
    MEM8(eax + 6) = 0x18;
    MEM8(eax + 7) = 8;
    MEM8(eax + 8) = 0x20;
    MEM32(eax + 0xC) = 3;
    esp += 12; return; /* ret 8 */

loc_001B494D: ;
    SET_LO8(ecx, 0x10);
    MEM8(eax + 6) = LO8(ecx);
    MEM8(eax + 8) = LO8(ecx);
    MEM32(eax + 0xC) = 3;
    esp += 12; return; /* ret 8 */

loc_001B495F: ;
    SET_LO8(ecx, 8);
    MEM8(eax + 8) = 0x10;
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax) = LO8(ecx);
    MEM32(eax + 0xC) = 0;
    esp += 12; return; /* ret 8 */

loc_001B4974: ;
    SET_LO8(ecx, 0x10);
    MEM8(eax + 8) = 0x20;
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax) = LO8(ecx);
    MEM32(eax + 0xC) = 0;
    esp += 12; return; /* ret 8 */

loc_001B4989: ;
    SET_LO8(ecx, 5);
    MEM8(eax + 3) = 6;
    MEM8(eax + 8) = 0x10;
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax) = LO8(ecx);
    MEM32(eax + 0xC) = 0;

loc_001B499F: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B49A2
 * Original: 0x001B49A2 - 0x001B4A70 (206 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B49A2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B49A2: ;
    edi = edi;
    /* TODO: popfd  */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(MEM8(edi + 0x1B)));
    SET_LO8(eax, LO8(eax) - MEM8(edi + 0x1B));
    _cf = (int)((((uint64_t)(MEM8(esi + 0x47)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(esi + 0x47) = MEM8(esi + 0x47) + LO8(ebx);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    { uint64_t _t = (uint64_t)(MEM32(edi + 0x1B)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(edi + 0x1B) = (uint32_t)_t; }  /* adc */
    _cf = (int)((((uint64_t)(HI8(edx)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    SET_HI8(edx, HI8(edx) + LO8(ebx));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _cf = 1; /* stc */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    eax = MEM32(edi + 0x1B);
    _cf = (int)((((uint64_t)(HI8(ecx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    SET_HI8(ecx, HI8(ecx) + LO8(eax));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    fp_push((double)SMEM16(edi + 0x1B)); /* fild */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + HI8(eax);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    MEM8(eax + 0x1B) = LO8(ecx);
    _cf = (int)((((uint64_t)(MEM8(edi + 0x48)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(edi + 0x48) = MEM8(edi + 0x48) + LO8(edx);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xBA001B49u;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    if (_cf) goto loc_001B4A2A; /* jb: below (unsigned <) */

loc_001B49E2: ;
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    if (((int32_t)eax >= 0)) (void)0; /* goto loc_001B4A2D - dead code, label not in function */ /* jns: not sign (positive) */

loc_001B49E6: ;
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    /* TODO: scasd eax, dword ptr es:[edi] */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    g_df = 1; /* std */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    /* TODO: iretd  */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    /* TODO: out 0x48, eax */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    MEM32(ecx + 0x1B) = ecx;
    _cf = (int)((((uint64_t)(MEM8(edi + 0x49)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(edi + 0x49) = MEM8(edi + 0x49) + LO8(ebx);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    /* TODO: cli  */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    { uint64_t _t = (uint64_t)(MEM8(eax + 0x1B)) + (uint64_t)(LO8(ecx)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(eax + 0x1B) = (uint32_t)_t; }  /* adc */
    _cf = (int)((((uint64_t)(MEM8(edi)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(edi) = MEM8(edi) + HI8(edx);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    if ((eax == 0)) (void)0; /* goto loc_001B4A67 - dead code, label not in function */ /* je: equal / zero */

loc_001B4A1E: ;
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(MEM32(ecx + 0x1B)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _cf = (int)((((uint64_t)(MEM8(ecx + -1627382968)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(ecx + -1627382968) = MEM8(ecx + -1627382968) + HI8(eax);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001B4A2A: ;
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + HI8(eax);
    _cf = (int)((((uint64_t)(MEM32(edx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(edx) = MEM32(edx) + eax;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(eax + 0x21212106))) >> 32) & 1);
    eax = eax + MEM32(eax + 0x21212106);
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _cf = 0; /* logical op clears CF */
    MEM8(ecx) = MEM8(ecx) | HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) | MEM8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0xD);
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) & esp;
    PUSH32(esp, 0 /* seg:cs */);
    eax = dr2;
    { uint64_t _t = (uint64_t)(MEM32(edx)) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(edx) = (uint32_t)_t; }  /* adc */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(MEM32(edx + 0x21211716)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) & esp;
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) & esp;
    { uint64_t _t = (uint64_t)(MEM8(ecx)) - (uint64_t)(LO8(ebx)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(ecx) = (uint32_t)_t; }  /* sbb */
    _cf = 0; /* logical op clears CF */
    MEM32(edx) = MEM32(edx) & ebx;
    _cf = 0; /* logical op clears CF */
    MEM32(ebx) = MEM32(ebx) & ebx;
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) & ebx;
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0x211E2121) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop ds - segment register */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & esp;
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) & esp;
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) & esp;
    _cf = 0; /* logical op clears CF */
    MEM32(edx) = MEM32(edx) & ecx;
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0xC) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0xC);
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B4A70
 * Original: 0x001B4A70 - 0x001B4C3B (459 bytes, 150 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4A70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4A70: ;
    eax = MEM32(esp + 8);
    ecx = 0; /* xor self */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8001) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x8001 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001B4C08; /* jg: greater (signed >) */

loc_001B4A93: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001B4BEE; /* je: equal / zero */

loc_001B4A99: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x21) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x21 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001B4C38; /* ja: above (unsigned >) */

loc_001B4AA2: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x1B4C3C); /* switch: 34 entries, 22 targets */
    if (_jt == 0x001B4AA9u) goto loc_001B4AA9;
    if (_jt == 0x001B4AB4u) goto loc_001B4AB4;
    if (_jt == 0x001B4ABFu) goto loc_001B4ABF;
    if (_jt == 0x001B4ACEu) goto loc_001B4ACE;
    if (_jt == 0x001B4ADDu) goto loc_001B4ADD;
    if (_jt == 0x001B4AEFu) goto loc_001B4AEF;
    if (_jt == 0x001B4B00u) goto loc_001B4B00;
    if (_jt == 0x001B4B14u) goto loc_001B4B14;
    if (_jt == 0x001B4B29u) goto loc_001B4B29;
    if (_jt == 0x001B4B3Bu) goto loc_001B4B3B;
    if (_jt == 0x001B4B4Fu) goto loc_001B4B4F;
    if (_jt == 0x001B4B65u) goto loc_001B4B65;
    if (_jt == 0x001B4B80u) goto loc_001B4B80;
    if (_jt == 0x001B4B8Bu) goto loc_001B4B8B;
    if (_jt == 0x001B4B96u) goto loc_001B4B96;
    if (_jt == 0x001B4BA1u) goto loc_001B4BA1;
    if (_jt == 0x001B4BACu) goto loc_001B4BAC;
    if (_jt == 0x001B4BBAu) goto loc_001B4BBA;
    if (_jt == 0x001B4BCCu) goto loc_001B4BCC;
    if (_jt == 0x001B4BDAu) goto loc_001B4BDA;
    if (_jt == 0x001B4BEEu) goto loc_001B4BEE;
    if (_jt == 0x001B4C38u) goto loc_001B4C38;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001B4AA9: ;
    SET_LO8(ecx, 8);
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 8) = LO8(ecx);
    esp += 12; return; /* ret 8 */

loc_001B4AB4: ;
    SET_LO8(ecx, 8);
    MEM8(eax + 3) = LO8(ecx);
    MEM8(eax + 8) = LO8(ecx);
    esp += 12; return; /* ret 8 */

loc_001B4ABF: ;
    SET_LO8(ecx, 4);
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 3) = LO8(ecx);
    MEM8(eax + 8) = 8;
    esp += 12; return; /* ret 8 */

loc_001B4ACE: ;
    SET_LO8(ecx, 8);
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 3) = LO8(ecx);
    MEM8(eax + 8) = 0x10;
    esp += 12; return; /* ret 8 */

loc_001B4ADD: ;
    MEM8(eax) = 3;
    MEM8(eax + 1) = 3;
    MEM8(eax + 2) = 2;
    MEM8(eax + 8) = 8;
    esp += 12; return; /* ret 8 */

loc_001B4AEF: ;
    SET_LO8(ecx, 8);
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax + 8) = 0x18;
    esp += 12; return; /* ret 8 */

loc_001B4B00: ;
    SET_LO8(ecx, 2);
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax + 3) = LO8(ecx);
    MEM8(eax + 8) = 8;
    esp += 12; return; /* ret 8 */

loc_001B4B14: ;
    SET_LO8(ecx, 5);
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax + 3) = 1;
    MEM8(eax + 8) = 0x10;
    esp += 12; return; /* ret 8 */

loc_001B4B29: ;
    SET_LO8(ecx, 5);
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 1) = 6;
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax + 8) = 0x10;
    esp += 12; return; /* ret 8 */

loc_001B4B3B: ;
    SET_LO8(ecx, 4);
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax + 3) = LO8(ecx);
    MEM8(eax + 8) = 0x10;
    esp += 12; return; /* ret 8 */

loc_001B4B4F: ;
    MEM8(eax) = 3;
    MEM8(eax + 1) = 3;
    MEM8(eax + 2) = 2;
    MEM8(eax + 3) = 8;
    MEM8(eax + 8) = 0x10;
    esp += 12; return; /* ret 8 */

loc_001B4B65: ;
    SET_LO8(ecx, 2);
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax + 3) = LO8(ecx);
    MEM8(eax + 8) = 8;
    MEM32(eax + 0xC) = 1;
    esp += 12; return; /* ret 8 */

loc_001B4B80: ;
    SET_LO8(ecx, 8);
    MEM8(eax + 6) = LO8(ecx);
    MEM8(eax + 8) = LO8(ecx);
    esp += 12; return; /* ret 8 */

loc_001B4B8B: ;
    SET_LO8(ecx, 0x10);
    MEM8(eax + 6) = LO8(ecx);
    MEM8(eax + 8) = LO8(ecx);
    esp += 12; return; /* ret 8 */

loc_001B4B96: ;
    SET_LO8(ecx, 0x18);
    MEM8(eax + 6) = LO8(ecx);
    MEM8(eax + 8) = LO8(ecx);
    esp += 12; return; /* ret 8 */

loc_001B4BA1: ;
    SET_LO8(ecx, 0x20);
    MEM8(eax + 6) = LO8(ecx);
    MEM8(eax + 8) = LO8(ecx);
    esp += 12; return; /* ret 8 */

loc_001B4BAC: ;
    SET_LO8(ecx, 8);
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax + 8) = 0x10;
    esp += 12; return; /* ret 8 */

loc_001B4BBA: ;
    SET_LO8(ecx, 5);
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax + 3) = 6;
    MEM8(eax + 8) = 0x10;
    esp += 12; return; /* ret 8 */

loc_001B4BCC: ;
    SET_LO8(ecx, 0x10);
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax + 8) = 0x20;
    esp += 12; return; /* ret 8 */

loc_001B4BDA: ;
    SET_LO8(ecx, 8);
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax + 3) = LO8(ecx);
    MEM8(eax + 8) = 0x20;
    esp += 12; return; /* ret 8 */

loc_001B4BEE: ;
    ecx = 1;
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax + 3) = LO8(ecx);
    MEM8(eax + 8) = 4;
    MEM32(eax + 0xC) = ecx;
    esp += 12; return; /* ret 8 */

loc_001B4C08: ;
    ecx = ecx - 0x10000;
    if ((ecx == 0)) goto loc_001B4C30; /* je: equal / zero */

loc_001B4C10: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001B4C25; /* je: equal / zero */

loc_001B4C13: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B4C38; /* jne: not equal / not zero */

loc_001B4C16: ;
    SET_LO8(ecx, 8);
    MEM8(eax + 5) = LO8(ecx);
    MEM8(eax + 3) = LO8(ecx);
    MEM8(eax + 8) = 0x10;
    esp += 12; return; /* ret 8 */

loc_001B4C25: ;
    SET_LO8(ecx, 4);
    MEM8(eax + 5) = LO8(ecx);
    MEM8(eax + 8) = LO8(ecx);
    esp += 12; return; /* ret 8 */

loc_001B4C30: ;
    SET_LO8(ecx, 8);
    MEM8(eax + 5) = LO8(ecx);
    MEM8(eax + 8) = LO8(ecx);

loc_001B4C38: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B4CD0
 * Original: 0x001B4CD0 - 0x001B4D55 (133 bytes, 33 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4CD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4CD0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3A (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001B4D4F; /* ja: above (unsigned >) */

loc_001B4CD9: ;
    eax = ZX8(MEM8(eax + 0x1B4D90));
    { uint32_t _jt = MEM32(eax * 4 + 0x1B4D58); /* switch: 14 entries, 14 targets */
    if (_jt == 0x001B4CE7u) goto loc_001B4CE7;
    if (_jt == 0x001B4CEFu) goto loc_001B4CEF;
    if (_jt == 0x001B4CF7u) goto loc_001B4CF7;
    if (_jt == 0x001B4CFFu) goto loc_001B4CFF;
    if (_jt == 0x001B4D07u) goto loc_001B4D07;
    if (_jt == 0x001B4D0Fu) goto loc_001B4D0F;
    if (_jt == 0x001B4D17u) goto loc_001B4D17;
    if (_jt == 0x001B4D1Fu) goto loc_001B4D1F;
    if (_jt == 0x001B4D27u) goto loc_001B4D27;
    if (_jt == 0x001B4D2Fu) goto loc_001B4D2F;
    if (_jt == 0x001B4D37u) goto loc_001B4D37;
    if (_jt == 0x001B4D3Fu) goto loc_001B4D3F;
    if (_jt == 0x001B4D47u) goto loc_001B4D47;
    if (_jt == 0x001B4D4Fu) goto loc_001B4D4F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001B4CE7: ;
    eax = 6;
    esp += 8; return; /* ret 4 */

loc_001B4CEF: ;
    eax = 2;
    esp += 8; return; /* ret 4 */

loc_001B4CF7: ;
    eax = 4;
    esp += 8; return; /* ret 4 */

loc_001B4CFF: ;
    eax = 5;
    esp += 8; return; /* ret 4 */

loc_001B4D07: ;
    eax = 0x1A;
    esp += 8; return; /* ret 4 */

loc_001B4D0F: ;
    eax = 0xB;
    esp += 8; return; /* ret 4 */

loc_001B4D17: ;
    eax = 0xC;
    esp += 8; return; /* ret 4 */

loc_001B4D1F: ;
    eax = 0xE;
    esp += 8; return; /* ret 4 */

loc_001B4D27: ;
    eax = 0xF;
    esp += 8; return; /* ret 4 */

loc_001B4D2F: ;
    eax = 0x28;
    esp += 8; return; /* ret 4 */

loc_001B4D37: ;
    eax = 0x33;
    esp += 8; return; /* ret 4 */

loc_001B4D3F: ;
    eax = 0x27;
    esp += 8; return; /* ret 4 */

loc_001B4D47: ;
    eax = 0x3A;
    esp += 8; return; /* ret 4 */

loc_001B4D4F: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B4DD0
 * Original: 0x001B4DD0 - 0x001B4E4B (123 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B4DD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */

loc_001B4DD6: ;
    eax = MEM32(edi + 0x424);
    ecx = MEM32(eax + esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001B4DE5u); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_001B4DE5: ;
    edx = MEM32(edi + 0x424);
    MEM32(esi + edx) = 0;
    eax = MEM32(edi + 0x428);
    ecx = MEM32(esi + eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001B4E01u); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_001B4E01: ;
    edx = MEM32(edi + 0x428);
    MEM32(esi + edx) = 0;
    esi = esi + 4;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B4DD6; /* jl: less (signed <) */

loc_001B4E19: ;
    eax = MEM32(edi + 0x424);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B4E25u); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_001B4E25: ;
    ecx = MEM32(edi + 0x428);
    PUSH32(esp, ecx);
    MEM32(edi + 0x424) = 0;
    PUSH32(esp, 0x001B4E3Bu); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_001B4E3B: ;
    esp = esp + 8;
    MEM32(edi + 0x428) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B4E50
 * Original: 0x001B4E50 - 0x001B4FE6 (406 bytes, 128 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4E50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4E50: ;
    eax = MEM32(0x5BC508);
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x38);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    esi = ecx;
    ecx = esp + 0x13;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3E79AC);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001B4E75u); RECOMP_ABI_CALL(0x001A59B0u, sub_001A59B0); /* call 0x001A59B0 */

loc_001B4E75: ;
    SET_LO8(edx, MEM8(esp + 0x23));
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = esp + 0x2B;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E7994);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    MEM8(esi + 0x48C) = LO8(edx);
    PUSH32(esp, 0x001B4E95u); RECOMP_ABI_CALL(0x001A59B0u, sub_001A59B0); /* call 0x001A59B0 */

loc_001B4E95: ;
    SET_LO8(ecx, MEM8(esp + 0x3B));
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3E7984);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    MEM8(esi + 0x494) = LO8(ecx);
    MEM8(esi + 0x4C0) = 1;
    MEM32(esi + 0x490) = 4;
    PUSH32(esp, 0x001B4EC6u); RECOMP_ABI_CALL(0x001A5950u, sub_001A5950); /* call 0x001A5950 */

loc_001B4EC6: ;
    eax = MEM32(esp + 0x54);
    esp = esp + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x498) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B4EDF; /* jle: less or equal (signed <=) */

loc_001B4ED7: ;
    MEM32(esi + 0x49C) = eax;
    goto loc_001B4EF1;

loc_001B4EDF: ;
    eax = MEM32(esi + 0x148);
    ecx = MEM32(eax + 0x98);
    MEM32(esi + 0x49C) = ecx;

loc_001B4EF1: ;
    eax = MEM32(esi + 0x524);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24C); PUSH32(esp, 0x001B4F03u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B4F03: ;
    eax = MEM32(esi + 0x490);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B4F9E; /* jle: less or equal (signed <=) */

loc_001B4F13: ;
    edi = esi + 0x3A4;
    PUSH32(esp, ebp);
    /* nop */

loc_001B4F20: ;
    eax = MEM32(edi);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x484); PUSH32(esp, 0x001B4F30u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B4F30: ;
    eax = MEM32(edi + 0x20);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x484); PUSH32(esp, 0x001B4F41u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B4F41: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B4F68; /* jne: not equal / not zero */

loc_001B4F46: ;
    eax = MEM32(edi + 0x40);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x48C); PUSH32(esp, 0x001B4F57u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B4F57: ;
    eax = MEM32(edi + 0x60);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x48C); PUSH32(esp, 0x001B4F68u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B4F68: ;
    ecx = MEM32(edi + -32);
    eax = MEM32(edi + 0xC8);
    ebp = MEM32(0x36C658);
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = ecx << 7;
    MEM32(ecx + 0x36C680) = eax;
    edi = edi + 4;
    ebp = ebp | edx;
    MEM32(0x36C658) = ebp;
    eax = MEM32(esi + 0x490);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B4F20; /* jl: less (signed <) */

loc_001B4F9D: ;
    POP32(esp, ebp);

loc_001B4F9E: ;
    ecx = MEM32(esi + 0x160);
    eax = MEM32(esi + 0x490);
    ecx = ecx | 0x80;
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x160) = ecx;
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B4FE0; /* jle: less or equal (signed <=) */

loc_001B4FBD: ;
    /* nop */

loc_001B4FC0: ;
    eax = MEM32(esi);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + edi + 0x354));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1D4); PUSH32(esp, 0x001B4FD5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B4FD5: ;
    eax = MEM32(esi + 0x490);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B4FC0; /* jl: less (signed <) */

loc_001B4FE0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001B4FF0
 * Original: 0x001B4FF0 - 0x001B4FFE (14 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4FF0(void)
{

loc_001B4FF0: ;
    eax = MEM32(esp + 4);
    SET_LO8(eax, MEM8(eax + ecx + 0x354));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B5000
 * Original: 0x001B5000 - 0x001B5032 (50 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B5000: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B5019; /* je: equal / zero */

loc_001B5012: ;
    MEM32(ecx + edx * 4 + 0x3A4) = eax;

loc_001B5019: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_001B5025; /* je: equal / zero */

loc_001B501E: ;
    MEM32(ecx + edx * 4 + 0x3C4) = eax;

loc_001B5025: ;
    MEM32(ecx + 0x160) = MEM32(ecx + 0x160) | 0x100;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B5040
 * Original: 0x001B5040 - 0x001B5063 (35 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B5040: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B5055; /* jne: not equal / not zero */

loc_001B5047: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x3C4);
    esp += 12; return; /* ret 8 */

loc_001B5055: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx + edx * 4 + 0x3A4);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B5070
 * Original: 0x001B5070 - 0x001B50A2 (50 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B5070: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B5089; /* je: equal / zero */

loc_001B5082: ;
    MEM32(ecx + edx * 4 + 0x3E4) = eax;

loc_001B5089: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_001B5095; /* je: equal / zero */

loc_001B508E: ;
    MEM32(ecx + edx * 4 + 0x404) = eax;

loc_001B5095: ;
    MEM32(ecx + 0x160) = MEM32(ecx + 0x160) | 0x100;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B50B0
 * Original: 0x001B50B0 - 0x001B50D3 (35 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B50B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B50B0: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B50C5; /* jne: not equal / not zero */

loc_001B50B7: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x404);
    esp += 12; return; /* ret 8 */

loc_001B50C5: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx + edx * 4 + 0x3E4);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B50E0
 * Original: 0x001B50E0 - 0x001B5130 (80 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B50E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B50E0: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x160);
    PUSH32(esp, edi);
    eax = eax | MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x10);
    esi = esi | 0x100;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    MEM32(ecx + 0x160) = esi;
    esi = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_001B511B; /* je: equal / zero */

loc_001B510D: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x424);
    ebx = MEM32(ebx + esi * 4);
    MEM32(ebx + edx * 4) = eax;
    POP32(esp, ebx);

loc_001B511B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B512B; /* je: equal / zero */

loc_001B511F: ;
    ecx = MEM32(ecx + 0x428);
    ecx = MEM32(ecx + esi * 4);
    MEM32(ecx + edx * 4) = eax;

loc_001B512B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001B5130
 * Original: 0x001B5130 - 0x001B51A0 (112 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B5130: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    eax = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_001B5163; /* jne: not equal / not zero */

loc_001B5147: ;
    esi = MEM32(ecx + 0x428);
    esi = MEM32(esi + eax * 4);
    esi = MEM32(esi + edx * 4);
    esi = esi & 0xFFFF;
    MEM32(edi) = esi;
    ecx = MEM32(ecx + 0x428);
    goto loc_001B517D;

loc_001B5163: ;
    esi = MEM32(ecx + 0x424);
    esi = MEM32(esi + eax * 4);
    esi = MEM32(esi + edx * 4);
    esi = esi & 0xFFFF;
    MEM32(edi) = esi;
    ecx = MEM32(ecx + 0x424);

loc_001B517D: ;
    eax = MEM32(ecx + eax * 4);
    ecx = MEM32(eax + edx * 4);
    edx = MEM32(esp + 0x1C);
    ecx = ecx & 0xFFFF0000u;
    POP32(esp, edi);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001B51A0
 * Original: 0x001B51A0 - 0x001B51C3 (35 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B51A0(void)
{

loc_001B51A0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + eax * 4 + 0x42C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    MEM32(esi) = edx;
    eax = MEM32(ecx + eax * 4 + 0x44C);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B51D0
 * Original: 0x001B51D0 - 0x001B5246 (118 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B51D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B51D0: ;
    eax = MEM32(esp + 8);
    eax = eax - 0;
    PUSH32(esp, esi);
    esi = ecx;
    if ((eax == 0)) goto loc_001B522F; /* je: equal / zero */

loc_001B51DC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_001B5208; /* je: equal / zero */

loc_001B51E0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B5203; /* jne: not equal / not zero */

loc_001B51E3: ;
    edi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x484); PUSH32(esp, 0x001B51F4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B51F4: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x48C); PUSH32(esp, 0x001B5203u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B5203: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001B5208: ;
    edi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x484); PUSH32(esp, 0x001B521Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B521B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x48C); PUSH32(esp, 0x001B522Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B522A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001B522F: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x484); PUSH32(esp, 0x001B5242u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B5242: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B5250
 * Original: 0x001B5250 - 0x001B5286 (54 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B5250: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx + edx * 4 + 0x3A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B5267; /* jne: not equal / not zero */

loc_001B525F: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_001B5267: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B5271; /* jne: not equal / not zero */

loc_001B526C: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

loc_001B5271: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + edx * 4 + 0x3E4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B5290
 * Original: 0x001B5290 - 0x001B5309 (121 bytes, 45 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B5290: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = 1;
    if (TEST_NZ(_fa, _fb)) goto loc_001B52CD; /* jne: not equal / not zero */

loc_001B52A3: ;
    SET_LO8(ebx, MEM8(ecx + 0x354));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B52B1; /* je: equal / zero */

loc_001B52AD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B52CD; /* jne: not equal / not zero */

loc_001B52B1: ;
    SET_LO8(eax, MEM8(ecx + 0x2A4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B52FF; /* jne: not equal / not zero */

loc_001B52BB: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B52FF; /* jne: not equal / not zero */

loc_001B52C3: ;
    POP32(esp, esi);
    eax = 3;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_001B52CD: ;
    SET_LO8(ebx, MEM8(edx + ecx + 0x354));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B52FF; /* je: equal / zero */

loc_001B52D8: ;
    ecx = esi;
    ecx = ecx - 0;
    if ((ecx == 0)) goto loc_001B52FF; /* je: equal / zero */

loc_001B52DF: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001B52F5; /* je: equal / zero */

loc_001B52E2: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B5304; /* jne: not equal / not zero */

loc_001B52E5: ;
    eax = MEM32(esp + 0x14);
    eax = MEM32(eax * 4 + 0x3E4068);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_001B52F5: ;
    POP32(esp, esi);
    eax = 2;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_001B52FF: ;
    eax = 1;

loc_001B5304: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001B5310
 * Original: 0x001B5310 - 0x001B53CB (187 bytes, 69 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B5310: ;
    SET_LO8(eax, MEM8(esp + 4));
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = MEM32(esi + 0x490);
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_001B5347; /* jne: not equal / not zero */

loc_001B5322: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B53C6; /* jle: less or equal (signed <=) */

loc_001B532C: ;
    /* nop */

loc_001B5330: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001B5337u); RECOMP_ABI_CALL(0x0035E170u, sub_0035E170); /* call 0x0035E170 */

loc_001B5337: ;
    eax = MEM32(esi + 0x490);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B5330; /* jl: less (signed <) */

loc_001B5342: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001B5347: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B53C5; /* jle: less or equal (signed <=) */

loc_001B534E: ;
    edi = esi + 0x42C;

loc_001B5354: ;
    SET_LO8(eax, MEM8(esi + ebx + 0x354));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B53A5; /* je: equal / zero */

loc_001B535F: ;
    eax = MEM32(edi + -248);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001B53A5; /* jl: less (signed <) */

loc_001B5369: ;
    SET_LO8(ecx, MEM8(esi + 0x494));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    eax = MEM32(edi + 0x20);
    if (TEST_Z(_fa, _fb)) goto loc_001B5380; /* je: equal / zero */

loc_001B5376: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B5380; /* jne: not equal / not zero */

loc_001B537B: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    goto loc_001B53B1;

loc_001B5380: ;
    SET_LO8(ecx, MEM8(esi + 0x4C0));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B5399; /* je: equal / zero */

loc_001B538A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B5399; /* jne: not equal / not zero */

loc_001B538F: ;
    eax = MEM32(edi);
    eax = eax | 0x10000;
    PUSH32(esp, eax);
    goto loc_001B53B1;

loc_001B5399: ;
    eax = MEM32(eax * 4 + 0x3E40E0);
    eax = eax | MEM32(edi);
    PUSH32(esp, eax);
    goto loc_001B53B1;

loc_001B53A5: ;
    SET_LO8(eax, MEM8(esi + 0x48C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B53B7; /* je: equal / zero */

loc_001B53AF: ;
    PUSH32(esp, 0);

loc_001B53B1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001B53B7u); RECOMP_ABI_CALL(0x0035E170u, sub_0035E170); /* call 0x0035E170 */

loc_001B53B7: ;
    eax = MEM32(esi + 0x490);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B5354; /* jl: less (signed <) */

loc_001B53C5: ;
    POP32(esp, ebx);

loc_001B53C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B53D0
 * Original: 0x001B53D0 - 0x001B53D7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B53D0(void)
{

loc_001B53D0: ;
    eax = MEM32(ecx + 0x524);
    esp += 4; return; /* ret */

}

/**
 * sub_001B53E0
 * Original: 0x001B53E0 - 0x001B5471 (145 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B53E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B53E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xE4); PUSH32(esp, 0x001B53ECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B53EC: ;
    eax = MEM32(esi + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B5468; /* je: equal / zero */

loc_001B53F5: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esi + 0xC) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF0); PUSH32(esp, 0x001B5402u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B5402: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xF4); PUSH32(esp, 0x001B540Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B540C: ;
    _fa = (uint32_t)(MEM8(esi + 0x40)) & 0xFFu; _fb = (uint32_t)(0xD3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x40), 0xD3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B541B; /* je: equal / zero */

loc_001B5412: ;
    ecx = esi;
    PUSH32(esp, 0x001B5419u); RECOMP_ABI_CALL(0x001ACF70u, sub_001ACF70); /* call 0x001ACF70 */

loc_001B5419: ;
    goto loc_001B545A;

loc_001B541B: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B542E; /* je: equal / zero */

loc_001B5422: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B5428u); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_001B5428: ;
    esp = esp + 4;
    MEM32(esi + 0x20) = edi;

loc_001B542E: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B5441; /* je: equal / zero */

loc_001B5435: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B543Bu); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_001B543B: ;
    esp = esp + 4;
    MEM32(esi + 0x24) = edi;

loc_001B5441: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B545A; /* je: equal / zero */

loc_001B544B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B5451u); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_001B5451: ;
    edx = MEM32(esi + 8);
    esp = esp + 4;
    MEM32(edx + 0x50) = edi;

loc_001B545A: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001B5465u); RECOMP_ABI_CALL(0x001F7FC0u, sub_001F7FC0); /* call 0x001F7FC0 */

loc_001B5465: ;
    MEM32(esi + 8) = edi;

loc_001B5468: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0013D370(); return; /* tail jmp 0x0013D370 */

}

/**
 * sub_001B5480
 * Original: 0x001B5480 - 0x001B5507 (135 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B5480: ;
    SET_LO8(eax, MEM8(ecx + 0x4F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_001B54CF; /* jne: not equal / not zero */

loc_001B5489: ;
    SET_LO8(eax, MEM8(ecx + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B54CF; /* jbe: below or equal (unsigned <=) */

loc_001B5490: ;
    esi = MEM32(ecx + 0x44);
    edx = MEM32(esp + 0x10);
    edi = MEM32(edx);
    eax = MEM32(esp + 0xC);
    eax = eax << 4;
    MEM32(eax + esi) = edi;
    edi = MEM32(edx + 4);
    esi = MEM32(ecx + 0x44);
    MEM32(esi + eax + 4) = edi;
    edx = MEM32(edx + 8);
    esi = MEM32(ecx + 0x44);
    MEM32(esi + eax + 8) = edx;
    edx = MEM32(ecx + 0x44);
    MEM32(edx + eax + 0xC) = 0x3F800000;
    SET_LO8(eax, MEM8(ecx + 0x60));
    SET_LO8(eax, LO8(eax) | 1);
    POP32(esp, edi);
    MEM8(ecx + 0x60) = LO8(eax);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001B54CF: ;
    eax = ZX8(MEM8(ecx + 0x38));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0xC));
    edx = MEM32(ecx + 8);
    edi = MEM32(edx + 0x50);
    edx = ZX8(MEM8(ecx + 0x39));
    eax = eax + edi;
    eax = eax + edx;
    edx = MEM32(esp + 0x10);
    esi = MEM32(edx);
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    SET_LO8(eax, MEM8(ecx + 0x60));
    SET_LO8(eax, LO8(eax) | 1);
    POP32(esp, edi);
    MEM8(ecx + 0x60) = LO8(eax);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B5510
 * Original: 0x001B5510 - 0x001B557A (106 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B5510: ;
    SET_LO8(eax, MEM8(ecx + 0x4F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_001B554A; /* jne: not equal / not zero */

loc_001B5518: ;
    SET_LO8(eax, MEM8(ecx + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B554A; /* jbe: below or equal (unsigned <=) */

loc_001B551F: ;
    edx = MEM32(ecx + 0x44);
    eax = MEM32(esp + 8);
    eax = eax << 4;
    esi = MEM32(eax + edx);
    edx = MEM32(esp + 0xC);
    MEM32(edx) = esi;
    esi = MEM32(ecx + 0x44);
    esi = MEM32(eax + esi + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 0x44);
    eax = MEM32(eax + ecx + 8);
    MEM32(edx + 8) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001B554A: ;
    eax = ZX8(MEM8(ecx + 0x38));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 8));
    edx = MEM32(ecx + 8);
    esi = MEM32(edx + 0x50);
    ecx = ZX8(MEM8(ecx + 0x39));
    eax = eax + esi;
    edx = MEM32(eax + ecx);
    eax = eax + ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B5580
 * Original: 0x001B5580 - 0x001B55B5 (53 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B5580: ;
    SET_LO8(eax, MEM8(ecx + 0x4F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B559D; /* jne: not equal / not zero */

loc_001B5587: ;
    SET_LO8(eax, MEM8(ecx + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B559D; /* jbe: below or equal (unsigned <=) */

loc_001B558E: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x44);
    eax = eax << 4;
    eax = eax + edx;
    esp += 8; return; /* ret 4 */

loc_001B559D: ;
    eax = ZX8(MEM8(ecx + 0x38));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 4));
    edx = MEM32(ecx + 8);
    ecx = ZX8(MEM8(ecx + 0x39));
    eax = eax + MEM32(edx + 0x50);
    eax = eax + ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B55C0
 * Original: 0x001B55C0 - 0x001B5647 (135 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B55C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B55C0: ;
    SET_LO8(eax, MEM8(ecx + 0x4F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_001B560F; /* jne: not equal / not zero */

loc_001B55C9: ;
    SET_LO8(eax, MEM8(ecx + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B560F; /* jbe: below or equal (unsigned <=) */

loc_001B55D0: ;
    esi = MEM32(ecx + 0x48);
    edx = MEM32(esp + 0x10);
    edi = MEM32(edx);
    eax = MEM32(esp + 0xC);
    eax = eax << 4;
    MEM32(eax + esi) = edi;
    edi = MEM32(edx + 4);
    esi = MEM32(ecx + 0x48);
    MEM32(esi + eax + 4) = edi;
    edx = MEM32(edx + 8);
    esi = MEM32(ecx + 0x48);
    MEM32(esi + eax + 8) = edx;
    edx = MEM32(ecx + 0x48);
    MEM32(edx + eax + 0xC) = 0x3F800000;
    SET_LO8(eax, MEM8(ecx + 0x60));
    SET_LO8(eax, LO8(eax) | 1);
    POP32(esp, edi);
    MEM8(ecx + 0x60) = LO8(eax);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001B560F: ;
    eax = ZX8(MEM8(ecx + 0x38));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0xC));
    edx = MEM32(ecx + 8);
    edi = MEM32(edx + 0x50);
    edx = ZX8(MEM8(ecx + 0x3A));
    eax = eax + edi;
    eax = eax + edx;
    edx = MEM32(esp + 0x10);
    esi = MEM32(edx);
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    SET_LO8(eax, MEM8(ecx + 0x60));
    SET_LO8(eax, LO8(eax) | 1);
    POP32(esp, edi);
    MEM8(ecx + 0x60) = LO8(eax);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B5650
 * Original: 0x001B5650 - 0x001B56BA (106 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B5650: ;
    SET_LO8(eax, MEM8(ecx + 0x4F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_001B568A; /* jne: not equal / not zero */

loc_001B5658: ;
    SET_LO8(eax, MEM8(ecx + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B568A; /* jbe: below or equal (unsigned <=) */

loc_001B565F: ;
    edx = MEM32(ecx + 0x48);
    eax = MEM32(esp + 8);
    eax = eax << 4;
    esi = MEM32(eax + edx);
    edx = MEM32(esp + 0xC);
    MEM32(edx) = esi;
    esi = MEM32(ecx + 0x48);
    esi = MEM32(eax + esi + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 0x48);
    eax = MEM32(eax + ecx + 8);
    MEM32(edx + 8) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001B568A: ;
    eax = ZX8(MEM8(ecx + 0x38));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 8));
    edx = MEM32(ecx + 8);
    esi = MEM32(edx + 0x50);
    ecx = ZX8(MEM8(ecx + 0x3A));
    eax = eax + esi;
    edx = MEM32(eax + ecx);
    eax = eax + ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B56C0
 * Original: 0x001B56C0 - 0x001B56F5 (53 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B56C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B56C0: ;
    SET_LO8(eax, MEM8(ecx + 0x4F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B56DD; /* jne: not equal / not zero */

loc_001B56C7: ;
    SET_LO8(eax, MEM8(ecx + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B56DD; /* jbe: below or equal (unsigned <=) */

loc_001B56CE: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x48);
    eax = eax << 4;
    eax = eax + edx;
    esp += 8; return; /* ret 4 */

loc_001B56DD: ;
    eax = ZX8(MEM8(ecx + 0x38));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 4));
    edx = MEM32(ecx + 8);
    ecx = ZX8(MEM8(ecx + 0x3A));
    eax = eax + MEM32(edx + 0x50);
    eax = eax + ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B5700
 * Original: 0x001B5700 - 0x001B576A (106 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5700(void)
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

loc_001B5700: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x4F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B5738; /* je: equal / zero */

loc_001B570A: ;
    eax = ZX8(MEM8(esi + 0x38));
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0xC));
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + 0x50);
    ecx = MEM32(esp + 8);
    eax = eax + edx;
    edx = ZX8(MEM8(esi + 0x3C));
    eax = eax + edx;
    MEMF(eax + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(esi + 0x60));
    SET_LO8(eax, LO8(eax) | 1);
    MEM8(esi + 0x60) = LO8(eax);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001B5738: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x20);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x001B5743u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B5743: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = MEM32(eax);
    ecx = MEM32(esp + 0xC);
    eax = eax >> 4;
    eax = eax & 0xF;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x10));
    eax = eax + ecx;
    MEMF(edi + eax * 4) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(esi + 0x60));
    SET_LO8(eax, LO8(eax) | 1);
    POP32(esp, edi);
    MEM8(esi + 0x60) = LO8(eax);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B5770
 * Original: 0x001B5770 - 0x001B57BC (76 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5770(void)
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

loc_001B5770: ;
    SET_LO8(eax, MEM8(ecx + 0x4F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_001B579A; /* je: equal / zero */

loc_001B5778: ;
    eax = ZX8(MEM8(ecx + 0x38));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0xC));
    edx = MEM32(ecx + 8);
    esi = MEM32(edx + 0x50);
    ecx = ZX8(MEM8(ecx + 0x3C));
    edx = MEM32(esp + 8);
    eax = eax + esi;
    eax = eax + ecx;
    POP32(esp, esi);
    fp_push(MEMF(eax + edx * 4)); /* fld float */
    esp += 12; return; /* ret 8 */

loc_001B579A: ;
    eax = MEM32(ecx);
    esi = MEM32(ecx + 0x20);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001B57A2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B57A2: ;
    ecx = MEM32(eax);
    eax = MEM32(esp + 8);
    ecx = ecx >> 4;
    ecx = ecx & 0xF;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0xC));
    ecx = ecx + eax;
    fp_push(MEMF(esi + ecx * 4)); /* fld float */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B57C0
 * Original: 0x001B57C0 - 0x001B58A3 (227 bytes, 77 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B57C0(void)
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

loc_001B57C0: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x4F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B57D6; /* jne: not equal / not zero */

loc_001B57CD: ;
    POP32(esp, esi);
    esp = esp + 8;
    g_seh_ebp = ebp; sub_001AD060(); return; /* tail jmp 0x001AD060 */

loc_001B57D6: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001B57DCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B57DC: ;
    ebx = MEM32(eax);
    ebx = ebx >> 4;
    ebx = ebx & 0xF;
    if (0) goto loc_001B589D; /* jbe: below or equal (unsigned <=) */

loc_001B57EA: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B589C; /* jbe: below or equal (unsigned <=) */

loc_001B57F8: ;
    PUSH32(esp, edi);
    /* nop */

loc_001B5800: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    MEM32(esp + 0x14) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_001B582C; /* jbe: below or equal (unsigned <=) */

loc_001B580F: ;
    /* nop */

loc_001B5810: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x001B581Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B581C: ;
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_B(_fa, _fb)) goto loc_001B5810; /* jb: below (unsigned <) */

loc_001B582C: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x14); /* fsub dword ptr [esp + 0x14] */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001B5862; /* jp: parity */

loc_001B5847: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B5862; /* jne: not equal / not zero */

loc_001B5858: ;
    MEM32(esp + 0x10) = 0;
    goto loc_001B587B;

loc_001B5862: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001B587B; /* jnp: not parity */

loc_001B5873: ;
    MEM32(esp + 0x10) = 0x3F800000;

loc_001B587B: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    eax = ebx + -1;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x001B588Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B588F: ;
    eax = MEM32(esi + 0xC);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B5800; /* jb: below (unsigned <) */

loc_001B589B: ;
    POP32(esp, edi);

loc_001B589C: ;
    POP32(esp, ebp);

loc_001B589D: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B58B0
 * Original: 0x001B58B0 - 0x001B5916 (102 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B58B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B58B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x4F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B58E4; /* je: equal / zero */

loc_001B58BA: ;
    eax = ZX8(MEM8(esi + 0x38));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0xC));
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + 0x50);
    ecx = MEM32(esp + 8);
    eax = eax + edx;
    edx = ZX8(MEM8(esi + 0x3D));
    eax = eax + ecx;
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM8(edx + eax) = LO8(ecx);
    MEM8(esi + 0x60) = MEM8(esi + 0x60) | 1;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001B58E4: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x24);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x001B58EFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B58EF: ;
    eax = MEM32(eax);
    SET_LO8(ecx, MEM8(esp + 0x14));
    edx = MEM32(esp + 0xC);
    eax = eax >> 4;
    eax = eax & 0xF;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x10));
    eax = eax + edi;
    MEM8(eax + edx) = LO8(ecx);
    SET_LO8(eax, MEM8(esi + 0x60));
    SET_LO8(eax, LO8(eax) | 1);
    POP32(esp, edi);
    MEM8(esi + 0x60) = LO8(eax);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B5920
 * Original: 0x001B5920 - 0x001B596C (76 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B5920: ;
    SET_LO8(eax, MEM8(ecx + 0x4F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_001B594A; /* je: equal / zero */

loc_001B5928: ;
    eax = ZX8(MEM8(ecx + 0x38));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0xC));
    edx = MEM32(ecx + 8);
    esi = MEM32(edx + 0x50);
    ecx = ZX8(MEM8(ecx + 0x3D));
    edx = MEM32(esp + 8);
    eax = eax + esi;
    eax = eax + edx;
    SET_LO8(eax, MEM8(ecx + eax));
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001B594A: ;
    edx = MEM32(ecx);
    esi = MEM32(ecx + 0x24);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x001B5952u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B5952: ;
    eax = MEM32(eax);
    ecx = MEM32(esp + 8);
    eax = eax >> 4;
    eax = eax & 0xF;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0xC));
    eax = eax + esi;
    SET_LO8(eax, MEM8(eax + ecx));
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B5970
 * Original: 0x001B5970 - 0x001B59B2 (66 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5970(void)
{

loc_001B5970: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(esi + 0x3B));
    eax = MEM32(esi + 8);
    SET_LO8(ebx, MEM8(esi + 0x38));
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x50);
    MEM8(esp + 0xF) = LO8(ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 6);
    PUSH32(esp, 0x001B5991u); RECOMP_ABI_CALL(0x00243650u, sub_00243650); /* call 0x00243650 */

loc_001B5991: ;
    ecx = ZX8(MEM8(esp + 0xF));
    edx = ZX8(LO8(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x14));
    edx = edx + edi;
    MEM32(ecx + edx) = eax;
    SET_LO8(eax, MEM8(esi + 0x60));
    SET_LO8(eax, LO8(eax) | 1);
    POP32(esp, edi);
    MEM8(esi + 0x60) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B59C0
 * Original: 0x001B59C0 - 0x001B5A09 (73 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B59C0(void)
{

loc_001B59C0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    edx = edx >> 0x10;
    esi = esi & 0xFF;
    edx = ZX8(LO8(edx));
    esi = esi << 0x10;
    eax = eax & 0xFF00FF00u;
    edx = edx | esi;
    esi = MEM32(ecx + 8);
    edx = edx | eax;
    eax = ZX8(MEM8(ecx + 0x38));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 8));
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x50);
    esi = ZX8(MEM8(ecx + 0x3B));
    eax = eax + edi;
    MEM32(eax + esi) = edx;
    SET_LO8(eax, MEM8(ecx + 0x60));
    SET_LO8(eax, LO8(eax) | 1);
    POP32(esp, edi);
    MEM8(ecx + 0x60) = LO8(eax);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B5A10
 * Original: 0x001B5A10 - 0x001B5AB9 (169 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001B5A10(void)
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

loc_001B5A10: ;
    eax = ZX8(MEM8(ecx + 0x38));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 4));
    edx = MEM32(ecx + 8);
    ecx = ZX8(MEM8(ecx + 0x3B));
    eax = eax + MEM32(edx + 0x50);
    eax = MEM32(eax + ecx);
    edx = eax;
    edx = edx >> 0x10;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(esp + 4) = edx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001B5A43; /* jge: greater or equal (signed >=) */

loc_001B5A3D: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_001B5A43: ;
    fp_top() = fp_top() * MEMF(0x3CCC84); /* fmul dword ptr [0x3ccc84] */
    ecx = MEM32(esp + 8);
    edx = eax;
    edx = edx >> 8;
    edx = edx & 0xFF;
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(esp + 4) = edx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001B5A6C; /* jge: greater or equal (signed >=) */

loc_001B5A66: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_001B5A6C: ;
    fp_top() = fp_top() * MEMF(0x3CCC84); /* fmul dword ptr [0x3ccc84] */
    edx = eax;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(esp + 4) = edx;
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001B5A8F; /* jge: greater or equal (signed >=) */

loc_001B5A89: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_001B5A8F: ;
    fp_top() = fp_top() * MEMF(0x3CCC84); /* fmul dword ptr [0x3ccc84] */
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = eax;
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001B5AAD; /* jge: greater or equal (signed >=) */

loc_001B5AA7: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_001B5AAD: ;
    fp_top() = fp_top() * MEMF(0x3CCC84); /* fmul dword ptr [0x3ccc84] */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B5AC0
 * Original: 0x001B5AC0 - 0x001B5AF3 (51 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5AC0(void)
{

loc_001B5AC0: ;
    eax = ZX8(MEM8(ecx + 0x38));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 4));
    edx = MEM32(ecx + 8);
    ecx = ZX8(MEM8(ecx + 0x3B));
    eax = eax + MEM32(edx + 0x50);
    edx = eax + ecx;
    ecx = MEM32(edx);
    edx = ZX8(MEM8(edx + 2));
    eax = ecx;
    eax = eax & 0xFF;
    eax = eax << 0x10;
    eax = eax | edx;
    ecx = ecx & 0xFF00FF00u;
    eax = eax | ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B5B00
 * Original: 0x001B5B00 - 0x001B5B35 (53 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5B00(void)
{

loc_001B5B00: ;
    eax = ZX8(MEM8(ecx + 0x38));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 8));
    edx = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x50);
    edx = ZX8(MEM8(ecx + 0x3E));
    eax = eax + esi;
    eax = eax + edx;
    edx = MEM32(esp + 8);
    eax = eax + edx * 8;
    edx = MEM32(esp + 0x10);
    esi = MEM32(edx);
    MEM32(eax) = esi;
    edx = MEM32(edx + 4);
    MEM32(eax + 4) = edx;
    MEM8(ecx + 0x60) = MEM8(ecx + 0x60) | 1;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B5B40
 * Original: 0x001B5B40 - 0x001B5B71 (49 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5B40(void)
{

loc_001B5B40: ;
    eax = ZX8(MEM8(ecx + 0x38));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 8));
    edx = MEM32(ecx + 8);
    ecx = ZX8(MEM8(ecx + 0x3E));
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x50);
    edx = MEM32(esp + 8);
    eax = eax + esi;
    eax = eax + ecx;
    ecx = MEM32(esp + 0x10);
    eax = eax + edx * 8;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    eax = MEM32(eax + 4);
    MEM32(ecx + 4) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B5B80
 * Original: 0x001B5B80 - 0x001B5BA3 (35 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5B80(void)
{

loc_001B5B80: ;
    eax = ZX8(MEM8(ecx + 0x38));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 8));
    edx = MEM32(ecx + 8);
    ecx = ZX8(MEM8(ecx + 0x3E));
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x50);
    edx = MEM32(esp + 8);
    eax = eax + esi;
    eax = eax + ecx;
    eax = eax + edx * 8;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B5BB0
 * Original: 0x001B5BB0 - 0x001B5BF6 (70 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001B5BB0(void)
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

loc_001B5BB0: ;
    SET_LO8(eax, MEM8(ecx + 0x14));
    fp_push(MEMF(esp + 8)); /* fld float */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B5BE0; /* je: equal / zero */

loc_001B5BBB: ;
    eax = ZX8(MEM8(ecx + 0x38));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 4));
    edx = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x50);
    edx = ZX8(MEM8(ecx + 0x3F));
    eax = eax + esi;
    POP32(esp, esi);
    MEMF(eax + edx) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(ecx + 0x60));
    SET_LO8(eax, LO8(eax) | 1);
    MEM8(ecx + 0x60) = LO8(eax);
    esp += 12; return; /* ret 8 */

loc_001B5BE0: ;
    eax = MEM32(ecx + 8);
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    ecx = MEM32(eax + 0x3C);
    edx = MEM32(esp + 4);
    MEMF(ecx + edx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B5C00
 * Original: 0x001B5C00 - 0x001B5C2E (46 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5C00(void)
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

loc_001B5C00: ;
    _fa = (uint32_t)(MEM8(ecx + 0x14)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x14), 0x10 (8-bit) */
    edx = MEM32(ecx + 8);
    if (TEST_Z(_fa, _fb)) goto loc_001B5C1F; /* je: equal / zero */

loc_001B5C09: ;
    eax = ZX8(MEM8(ecx + 0x38));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 4));
    ecx = ZX8(MEM8(ecx + 0x3F));
    eax = eax + MEM32(edx + 0x50);
    fp_push(MEMF(eax + ecx)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_001B5C1F: ;
    eax = MEM32(edx + 0x3C);
    ecx = MEM32(esp + 4);
    fp_push(MEMF(eax + ecx * 4)); /* fld float */
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B5C30
 * Original: 0x001B5C30 - 0x001B5CDA (170 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B5C30: ;
    SET_LO8(eax, MEM8(ecx + 0x4F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_001B5C7F; /* jne: not equal / not zero */

loc_001B5C39: ;
    SET_LO8(eax, MEM8(ecx + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B5C7F; /* jbe: below or equal (unsigned <=) */

loc_001B5C40: ;
    esi = MEM32(ecx + 0x54);
    edx = MEM32(esp + 0x10);
    edi = MEM32(edx);
    eax = MEM32(esp + 0xC);
    eax = eax << 4;
    MEM32(eax + esi) = edi;
    edi = MEM32(edx + 4);
    esi = MEM32(ecx + 0x54);
    MEM32(esi + eax + 4) = edi;
    edx = MEM32(edx + 8);
    esi = MEM32(ecx + 0x54);
    MEM32(esi + eax + 8) = edx;
    edx = MEM32(ecx + 0x54);
    MEM32(edx + eax + 0xC) = 0x3F800000;
    SET_LO8(eax, MEM8(ecx + 0x60));
    SET_LO8(eax, LO8(eax) | 1);
    POP32(esp, edi);
    MEM8(ecx + 0x60) = LO8(eax);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001B5C7F: ;
    SET_LO8(eax, MEM8(ecx + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B5C9F; /* je: equal / zero */

loc_001B5C86: ;
    eax = ZX8(MEM8(ecx + 0x38));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0xC));
    edx = MEM32(ecx + 8);
    edi = MEM32(edx + 0x50);
    edx = ZX8(MEM8(ecx + 0x4D));
    eax = eax + edi;
    eax = eax + edx;
    goto loc_001B5CB9;

loc_001B5C9F: ;
    eax = MEM32(ecx + 0x1C);
    eax = eax >> 0x16;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B5CCD; /* je: equal / zero */

loc_001B5CA9: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(esp + 0xC);
    edx = MEM32(edx + 0x44);
    eax = eax + eax * 2;
    eax = edx + eax * 4;

loc_001B5CB9: ;
    edx = MEM32(esp + 0x10);
    esi = MEM32(edx);
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;

loc_001B5CCD: ;
    SET_LO8(eax, MEM8(ecx + 0x60));
    SET_LO8(eax, LO8(eax) | 1);
    POP32(esp, edi);
    MEM8(ecx + 0x60) = LO8(eax);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B5CE0
 * Original: 0x001B5CE0 - 0x001B5D6D (141 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B5CE0: ;
    SET_LO8(eax, MEM8(ecx + 0x4F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_001B5D1A; /* jne: not equal / not zero */

loc_001B5CE8: ;
    SET_LO8(eax, MEM8(ecx + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B5D1A; /* jbe: below or equal (unsigned <=) */

loc_001B5CEF: ;
    edx = MEM32(ecx + 0x54);
    eax = MEM32(esp + 8);
    eax = eax << 4;
    esi = MEM32(eax + edx);
    edx = MEM32(esp + 0xC);
    MEM32(edx) = esi;
    esi = MEM32(ecx + 0x54);
    esi = MEM32(eax + esi + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 0x54);
    eax = MEM32(eax + ecx + 8);
    MEM32(edx + 8) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001B5D1A: ;
    SET_LO8(eax, MEM8(ecx + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B5D3A; /* je: equal / zero */

loc_001B5D21: ;
    eax = ZX8(MEM8(ecx + 0x38));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 8));
    edx = MEM32(ecx + 8);
    esi = MEM32(edx + 0x50);
    ecx = ZX8(MEM8(ecx + 0x4D));
    eax = eax + esi;
    eax = eax + ecx;
    goto loc_001B5D55;

loc_001B5D3A: ;
    edx = MEM32(ecx + 0x1C);
    edx = edx >> 0x16;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B5D69; /* je: equal / zero */

loc_001B5D45: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(ecx + 8);
    edx = eax + eax * 2;
    eax = MEM32(ecx + 0x44);
    eax = eax + edx * 4;

loc_001B5D55: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;

loc_001B5D69: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B5D70
 * Original: 0x001B5D70 - 0x001B5DCF (95 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001B5D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B5D70: ;
    SET_LO8(eax, MEM8(ecx + 0x4F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B5D8D; /* jne: not equal / not zero */

loc_001B5D77: ;
    SET_LO8(eax, MEM8(ecx + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B5D8D; /* jbe: below or equal (unsigned <=) */

loc_001B5D7E: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x54);
    eax = eax << 4;
    eax = eax + edx;
    esp += 8; return; /* ret 4 */

loc_001B5D8D: ;
    SET_LO8(eax, MEM8(ecx + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B5DAC; /* je: equal / zero */

loc_001B5D94: ;
    eax = ZX8(MEM8(ecx + 0x38));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 4));
    edx = MEM32(ecx + 8);
    ecx = ZX8(MEM8(ecx + 0x4D));
    eax = eax + MEM32(edx + 0x50);
    eax = eax + ecx;
    esp += 8; return; /* ret 4 */

loc_001B5DAC: ;
    edx = MEM32(ecx + 0x1C);
    edx = edx >> 0x16;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B5DCA; /* je: equal / zero */

loc_001B5DB7: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 8);
    edx = eax + eax * 2;
    eax = MEM32(ecx + 0x44);
    eax = eax + edx * 4;
    esp += 8; return; /* ret 4 */

loc_001B5DCA: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B5DD0
 * Original: 0x001B5DD0 - 0x001B5E7A (170 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B5DD0: ;
    SET_LO8(eax, MEM8(ecx + 0x4F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_001B5E1F; /* jne: not equal / not zero */

loc_001B5DD9: ;
    SET_LO8(eax, MEM8(ecx + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B5E1F; /* jbe: below or equal (unsigned <=) */

loc_001B5DE0: ;
    esi = MEM32(ecx + 0x58);
    edx = MEM32(esp + 0x10);
    edi = MEM32(edx);
    eax = MEM32(esp + 0xC);
    eax = eax << 4;
    MEM32(eax + esi) = edi;
    edi = MEM32(edx + 4);
    esi = MEM32(ecx + 0x58);
    MEM32(esi + eax + 4) = edi;
    edx = MEM32(edx + 8);
    esi = MEM32(ecx + 0x58);
    MEM32(esi + eax + 8) = edx;
    edx = MEM32(ecx + 0x58);
    MEM32(edx + eax + 0xC) = 0x3F800000;
    SET_LO8(eax, MEM8(ecx + 0x60));
    SET_LO8(eax, LO8(eax) | 1);
    POP32(esp, edi);
    MEM8(ecx + 0x60) = LO8(eax);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001B5E1F: ;
    SET_LO8(eax, MEM8(ecx + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B5E3F; /* je: equal / zero */

loc_001B5E26: ;
    eax = ZX8(MEM8(ecx + 0x38));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0xC));
    edx = MEM32(ecx + 8);
    edi = MEM32(edx + 0x50);
    edx = ZX8(MEM8(ecx + 0x4E));
    eax = eax + edi;
    eax = eax + edx;
    goto loc_001B5E59;

loc_001B5E3F: ;
    eax = MEM32(ecx + 0x1C);
    eax = eax >> 0x17;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B5E6D; /* je: equal / zero */

loc_001B5E49: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(esp + 0xC);
    edx = MEM32(edx + 0x48);
    eax = eax + eax * 2;
    eax = edx + eax * 4;

loc_001B5E59: ;
    edx = MEM32(esp + 0x10);
    esi = MEM32(edx);
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;

loc_001B5E6D: ;
    SET_LO8(eax, MEM8(ecx + 0x60));
    SET_LO8(eax, LO8(eax) | 1);
    POP32(esp, edi);
    MEM8(ecx + 0x60) = LO8(eax);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B5E80
 * Original: 0x001B5E80 - 0x001B5F0D (141 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B5E80: ;
    SET_LO8(eax, MEM8(ecx + 0x4F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_001B5EBA; /* jne: not equal / not zero */

loc_001B5E88: ;
    SET_LO8(eax, MEM8(ecx + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B5EBA; /* jbe: below or equal (unsigned <=) */

loc_001B5E8F: ;
    edx = MEM32(ecx + 0x58);
    eax = MEM32(esp + 8);
    eax = eax << 4;
    esi = MEM32(eax + edx);
    edx = MEM32(esp + 0xC);
    MEM32(edx) = esi;
    esi = MEM32(ecx + 0x58);
    esi = MEM32(eax + esi + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 0x58);
    eax = MEM32(eax + ecx + 8);
    MEM32(edx + 8) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001B5EBA: ;
    SET_LO8(eax, MEM8(ecx + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B5EDA; /* je: equal / zero */

loc_001B5EC1: ;
    eax = ZX8(MEM8(ecx + 0x38));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 8));
    edx = MEM32(ecx + 8);
    esi = MEM32(edx + 0x50);
    ecx = ZX8(MEM8(ecx + 0x4E));
    eax = eax + esi;
    eax = eax + ecx;
    goto loc_001B5EF5;

loc_001B5EDA: ;
    edx = MEM32(ecx + 0x1C);
    edx = edx >> 0x17;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B5F09; /* je: equal / zero */

loc_001B5EE5: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(ecx + 8);
    edx = eax + eax * 2;
    eax = MEM32(ecx + 0x48);
    eax = eax + edx * 4;

loc_001B5EF5: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;

loc_001B5F09: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B5F10
 * Original: 0x001B5F10 - 0x001B5F6F (95 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001B5F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B5F10: ;
    SET_LO8(eax, MEM8(ecx + 0x4F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B5F2D; /* jne: not equal / not zero */

loc_001B5F17: ;
    SET_LO8(eax, MEM8(ecx + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B5F2D; /* jbe: below or equal (unsigned <=) */

loc_001B5F1E: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x58);
    eax = eax << 4;
    eax = eax + edx;
    esp += 8; return; /* ret 4 */

loc_001B5F2D: ;
    SET_LO8(eax, MEM8(ecx + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B5F4C; /* je: equal / zero */

loc_001B5F34: ;
    eax = ZX8(MEM8(ecx + 0x38));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 4));
    edx = MEM32(ecx + 8);
    ecx = ZX8(MEM8(ecx + 0x4E));
    eax = eax + MEM32(edx + 0x50);
    eax = eax + ecx;
    esp += 8; return; /* ret 4 */

loc_001B5F4C: ;
    edx = MEM32(ecx + 0x1C);
    edx = edx >> 0x17;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B5F6A; /* je: equal / zero */

loc_001B5F57: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 8);
    edx = eax + eax * 2;
    eax = MEM32(ecx + 0x48);
    eax = eax + edx * 4;
    esp += 8; return; /* ret 4 */

loc_001B5F6A: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B5F70
 * Original: 0x001B5F70 - 0x001B623E (718 bytes, 247 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5F70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B5F70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B5F88; /* jne: not equal / not zero */

loc_001B5F7F: ;
    eax = MEM32(esi + 0xC);
    eax = eax - MEM32(edi + 8);
    MEM32(edi + 0xC) = eax;

loc_001B5F88: ;
    ecx = ZX8(MEM8(esi + 0x38));
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(edi);
    PUSH32(esp, ebp);
    ebp = MEM32(edi + 8);
    MEM32(edi + 0x14) = ecx;
    if (CMP_A(_fa, _fb)) goto loc_001B6225; /* ja: above (unsigned >) */

loc_001B5FA2: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1B6240); /* switch: 10 entries, 10 targets */
    if (_jt == 0x001B5FA9u) goto loc_001B5FA9;
    if (_jt == 0x001B5FF1u) goto loc_001B5FF1;
    if (_jt == 0x001B6039u) goto loc_001B6039;
    if (_jt == 0x001B60AEu) goto loc_001B60AE;
    if (_jt == 0x001B60F3u) goto loc_001B60F3;
    if (_jt == 0x001B612Eu) goto loc_001B612E;
    if (_jt == 0x001B6141u) goto loc_001B6141;
    if (_jt == 0x001B615Cu) goto loc_001B615C;
    if (_jt == 0x001B6171u) goto loc_001B6171;
    if (_jt == 0x001B61C5u) goto loc_001B61C5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001B5FA9: ;
    SET_LO8(eax, MEM8(esi + 0x4F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B5FD7; /* jne: not equal / not zero */

loc_001B5FB0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x001B5FB7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B5FB7: ;
    eax = MEM32(eax);
    eax = eax >> 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B5FD7; /* jbe: below or equal (unsigned <=) */

loc_001B5FC0: ;
    eax = MEM32(esi + 0x44);
    ebp = ebp << 4;
    ebp = ebp + eax;
    MEM32(edi + 0x10) = ebp;
    MEM32(edi + 0x14) = 0x10;
    goto loc_001B6225;

loc_001B5FD7: ;
    ecx = ZX8(MEM8(esi + 0x38));
    edx = MEM32(esi + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebp);
    ebx = MEM32(edx + 0x50);
    eax = ZX8(MEM8(esi + 0x39));
    ecx = ecx + ebx;
    ecx = ecx + eax;
    goto loc_001B6222;

loc_001B5FF1: ;
    SET_LO8(eax, MEM8(esi + 0x4F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B601F; /* jne: not equal / not zero */

loc_001B5FF8: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x001B5FFFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B5FFF: ;
    eax = MEM32(eax);
    eax = eax >> 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B601F; /* jbe: below or equal (unsigned <=) */

loc_001B6008: ;
    eax = MEM32(esi + 0x48);
    ebp = ebp << 4;
    ebp = ebp + eax;
    MEM32(edi + 0x10) = ebp;
    MEM32(edi + 0x14) = 0x10;
    goto loc_001B6225;

loc_001B601F: ;
    ecx = ZX8(MEM8(esi + 0x38));
    edx = MEM32(esi + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebp);
    ebx = MEM32(edx + 0x50);
    eax = ZX8(MEM8(esi + 0x3A));
    ecx = ecx + ebx;
    ecx = ecx + eax;
    goto loc_001B6222;

loc_001B6039: ;
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x18), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B6093; /* jne: not equal / not zero */

loc_001B6040: ;
    ecx = MEM32(edi + 0xC);
    ecx = ecx + ebp;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    eax = ebp;
    MEM32(esp + 0x14) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_001B6093; /* jae: above or equal (unsigned >=) */

loc_001B604F: ;
    /* nop */

loc_001B6050: ;
    edx = ZX8(MEM8(esi + 0x38));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = MEM32(esi + 8);
    edx = edx + MEM32(eax + 0x50);
    ecx = ZX8(MEM8(esi + 0x3B));
    eax = MEM32(ecx + edx);
    ebx = ZX8(MEM8(ecx + edx + 2));
    ecx = ecx + edx;
    edx = eax;
    edx = edx & 0xFF;
    edx = edx << 0x10;
    eax = eax & 0xFF00FF00u;
    edx = edx | ebx;
    edx = edx | eax;
    eax = MEM32(esp + 0x14);
    MEM32(ecx) = edx;
    ecx = MEM32(edi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_001B6050; /* jb: below (unsigned <) */

loc_001B6093: ;
    edx = ZX8(MEM8(esi + 0x38));
    eax = MEM32(esi + 8);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    edx = edx + MEM32(eax + 0x50);
    ecx = ZX8(MEM8(esi + 0x3B));
    edx = edx + ecx;
    MEM32(edi + 0x10) = edx;
    goto loc_001B6225;

loc_001B60AE: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x001B60B5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B60B5: ;
    eax = MEM32(eax);
    SET_LO8(ecx, MEM8(esi + 0x4F));
    eax = eax >> 4;
    eax = eax & 0xF;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B60D7; /* je: equal / zero */

loc_001B60C4: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B60CCu); RECOMP_ABI_CALL(0x001AF8E0u, sub_001AF8E0); /* call 0x001AF8E0 */

loc_001B60CC: ;
    esp = esp + 0xC;
    MEM32(edi + 0x10) = eax;
    goto loc_001B6225;

loc_001B60D7: ;
    edx = MEM32(esi + 0x20);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebp);
    ecx = ecx + ebx;
    ecx = edx + ecx * 4;
    edx = eax * 4;
    MEM32(edi + 0x14) = edx;
    goto loc_001B6222;

loc_001B60F3: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001B60FAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B60FA: ;
    eax = MEM32(eax);
    SET_LO8(ecx, MEM8(esi + 0x4F));
    eax = eax >> 8;
    eax = eax & 0xF;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B611C; /* je: equal / zero */

loc_001B6109: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B6111u); RECOMP_ABI_CALL(0x001AF910u, sub_001AF910); /* call 0x001AF910 */

loc_001B6111: ;
    esp = esp + 0xC;
    MEM32(edi + 0x10) = eax;
    goto loc_001B6225;

loc_001B611C: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebp);
    ecx = ecx + MEM32(esi + 0x24);
    ecx = ecx + ebx;
    MEM32(edi + 0x14) = eax;
    goto loc_001B6222;

loc_001B612E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B6136u); RECOMP_ABI_CALL(0x001AF940u, sub_001AF940); /* call 0x001AF940 */

loc_001B6136: ;
    esp = esp + 0xC;
    MEM32(edi + 0x10) = eax;
    goto loc_001B6225;

loc_001B6141: ;
    edx = ZX8(MEM8(esi + 0x38));
    eax = MEM32(esi + 8);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    edx = edx + MEM32(eax + 0x50);
    ecx = ZX8(MEM8(esi + 0x3F));
    edx = edx + ecx;
    MEM32(edi + 0x10) = edx;
    goto loc_001B6225;

loc_001B615C: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edx + 0x3C);
    ecx = eax + ebp * 4;
    MEM32(edi + 0x14) = 4;
    goto loc_001B6222;

loc_001B6171: ;
    SET_LO8(eax, MEM8(esi + 0x4F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B619F; /* jne: not equal / not zero */

loc_001B6178: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x001B617Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B617F: ;
    eax = MEM32(eax);
    eax = eax >> 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B619F; /* jbe: below or equal (unsigned <=) */

loc_001B6188: ;
    eax = MEM32(esi + 0x54);
    ebp = ebp << 4;
    ebp = ebp + eax;
    MEM32(edi + 0x10) = ebp;
    MEM32(edi + 0x14) = 0x10;
    goto loc_001B6225;

loc_001B619F: ;
    SET_LO8(eax, MEM8(esi + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B61BD; /* je: equal / zero */

loc_001B61A6: ;
    ecx = ZX8(MEM8(esi + 0x38));
    edx = MEM32(esi + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebp);
    ebx = MEM32(edx + 0x50);
    eax = ZX8(MEM8(esi + 0x4D));
    ecx = ecx + ebx;
    ecx = ecx + eax;
    goto loc_001B6222;

loc_001B61BD: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx + 0x44);
    goto loc_001B6214;

loc_001B61C5: ;
    SET_LO8(eax, MEM8(esi + 0x4F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B61F0; /* jne: not equal / not zero */

loc_001B61CC: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x001B61D3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B61D3: ;
    eax = MEM32(eax);
    eax = eax >> 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B61F0; /* jbe: below or equal (unsigned <=) */

loc_001B61DC: ;
    eax = MEM32(esi + 0x58);
    ebp = ebp << 4;
    ebp = ebp + eax;
    MEM32(edi + 0x10) = ebp;
    MEM32(edi + 0x14) = 0x10;
    goto loc_001B6225;

loc_001B61F0: ;
    SET_LO8(eax, MEM8(esi + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B620E; /* je: equal / zero */

loc_001B61F7: ;
    ecx = ZX8(MEM8(esi + 0x38));
    edx = MEM32(esi + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebp);
    ebx = MEM32(edx + 0x50);
    eax = ZX8(MEM8(esi + 0x4E));
    ecx = ecx + ebx;
    ecx = ecx + eax;
    goto loc_001B6222;

loc_001B620E: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx + 0x48);

loc_001B6214: ;
    edx = ebp + ebp * 2;
    ecx = eax + edx * 4;
    MEM32(edi + 0x14) = 0xC;

loc_001B6222: ;
    MEM32(edi + 0x10) = ecx;

loc_001B6225: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_001B6233; /* je: equal / zero */

loc_001B622F: ;
    MEM8(esi + 0x60) = MEM8(esi + 0x60) | 2;

loc_001B6233: ;
    MEM8(esi + 0x68) = MEM8(esi + 0x68) + 1;
    _fa = (uint32_t)(MEM8(esi + 0x68)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x18) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B623E
 * Original: 0x001B623E - 0x001B6307 (201 bytes, 86 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B623E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B623E: ;
    edi = edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF1001B5Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xF1001B5Fu (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, edi);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM32(eax + 0x1B)) & 0xFFFFFFFFu; _fb = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1B), esp (32-bit) */
    _cf = (int)(_fa < _fb);
    _cf = (int)((((uint64_t)(MEM8(esi)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(esi) = MEM8(esi) + HI8(ecx);
    /* TODO: popal  */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    /* TODO: scasb al, byte ptr es:[edi] */
    /* TODO: pushal  */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    /* TODO: pushal  */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* TODO: popal  */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    if (_flags /* jno: not overflow */) (void)0; /* goto loc_001B62BF - dead code, label not in function */

loc_001B625E: ;
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    /* TODO: lds esp, ptr [ecx + 0x1b] */
    _cf = (int)((((uint64_t)(MEM8(ecx + 0x1B)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(ecx + 0x1B) = MEM8(ecx + 0x1B) + LO8(ebx);
    _cf = (int)((((uint64_t)(HI8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_HI8(eax, HI8(eax) + LO8(ecx));
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001B62D2; /* jne: not equal / not zero */

loc_001B627B: ;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(edi + 8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001B62D1; /* jae: above or equal (unsigned >=) */

loc_001B6288: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    /* nop */

loc_001B6290: ;
    edx = ZX8(MEM8(ecx + 0x38));
    eax = MEM32(ecx + 8);
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    ebx = MEM32(eax + 0x50);
    eax = ZX8(MEM8(ecx + 0x3B));
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ebx)) >> 32) & 1);
    edx = edx + ebx;
    ebp = ZX8(MEM8(edx + eax + 2));
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    eax = MEM32(edx);
    ebx = eax;
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 0xFF;
    if (0x10) _cf = (int)(((ebx) >> (32 - (0x10))) & 1);
    ebx = ebx << 0x10;
    _cf = 0; /* logical op clears CF */
    ebx = ebx | ebp;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFF00FF00u;
    _cf = 0; /* logical op clears CF */
    ebx = ebx | eax;
    MEM32(edx) = ebx;
    edx = MEM32(edi + 0xC);
    ebx = MEM32(edi + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ebx)) >> 32) & 1);
    edx = edx + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001B6290; /* jb: below (unsigned <) */

loc_001B62CF: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001B62D1: ;
    POP32(esp, esi);

loc_001B62D2: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_001B6301; /* jne: not equal / not zero */

loc_001B62DB: ;
    SET_LO8(edx, MEM8(ecx + 0x60));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(eax, MEM8(ecx + 0x68));
    if (TEST_Z(_fa, _fb)) goto loc_001B62F3; /* je: equal / zero */

loc_001B62E5: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) | 2);
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(ecx + 0x60) = LO8(edx);
    MEM8(ecx + 0x68) = LO8(eax);
    esp += 12; return; /* ret 8 */

loc_001B62F3: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) | 1);
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(ecx + 0x60) = LO8(edx);
    MEM8(ecx + 0x68) = LO8(eax);
    esp += 12; return; /* ret 8 */

loc_001B6301: ;
    MEM8(ecx + 0x68) = MEM8(ecx + 0x68) - 1;
    _fa = (uint32_t)(MEM8(ecx + 0x68)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B6270
 * Original: 0x001B6270 - 0x001B6307 (151 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6270(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6270: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B62D2; /* jne: not equal / not zero */

loc_001B627B: ;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(edi + 8);
    eax = eax + esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001B62D1; /* jae: above or equal (unsigned >=) */

loc_001B6288: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    /* nop */

loc_001B6290: ;
    edx = ZX8(MEM8(ecx + 0x38));
    eax = MEM32(ecx + 8);
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    ebx = MEM32(eax + 0x50);
    eax = ZX8(MEM8(ecx + 0x3B));
    edx = edx + ebx;
    ebp = ZX8(MEM8(edx + eax + 2));
    edx = edx + eax;
    eax = MEM32(edx);
    ebx = eax;
    ebx = ebx & 0xFF;
    ebx = ebx << 0x10;
    ebx = ebx | ebp;
    eax = eax & 0xFF00FF00u;
    ebx = ebx | eax;
    MEM32(edx) = ebx;
    edx = MEM32(edi + 0xC);
    ebx = MEM32(edi + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B6290; /* jb: below (unsigned <) */

loc_001B62CF: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001B62D1: ;
    POP32(esp, esi);

loc_001B62D2: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_001B6301; /* jne: not equal / not zero */

loc_001B62DB: ;
    SET_LO8(edx, MEM8(ecx + 0x60));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    SET_LO8(eax, MEM8(ecx + 0x68));
    if (TEST_Z(_fa, _fb)) goto loc_001B62F3; /* je: equal / zero */

loc_001B62E5: ;
    SET_LO8(edx, LO8(edx) | 2);
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(ecx + 0x60) = LO8(edx);
    MEM8(ecx + 0x68) = LO8(eax);
    esp += 12; return; /* ret 8 */

loc_001B62F3: ;
    SET_LO8(edx, LO8(edx) | 1);
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(ecx + 0x60) = LO8(edx);
    MEM8(ecx + 0x68) = LO8(eax);
    esp += 12; return; /* ret 8 */

loc_001B6301: ;
    MEM8(ecx + 0x68) = MEM8(ecx + 0x68) - 1;
    _fa = (uint32_t)(MEM8(ecx + 0x68)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B6310
 * Original: 0x001B6310 - 0x001B63D3 (195 bytes, 80 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B6310: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(edx, MEM8(esi));
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    SET_LO8(ebx, 0xFF);
    if (TEST_Z(_fa, _fb)) goto loc_001B6328; /* je: equal / zero */

loc_001B6321: ;
    MEM8(ecx + 0x39) = LO8(eax);
    SET_LO8(eax, 0xC);
    goto loc_001B632B;

loc_001B6328: ;
    MEM8(ecx + 0x39) = LO8(ebx);

loc_001B632B: ;
    SET_LO8(edx, MEM8(ecx + 0x4F));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    MEM8(ecx + 0x3C) = LO8(ebx);
    MEM8(ecx + 0x3D) = LO8(ebx);
    if (TEST_Z(_fa, _fb)) goto loc_001B634C; /* je: equal / zero */

loc_001B6338: ;
    SET_LO8(edx, MEM8(ecx + 0x4C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B634C; /* jbe: below or equal (unsigned <=) */

loc_001B633F: ;
    SET_LO8(edx, LO8(edx) << 2);
    MEM8(ecx + 0x3C) = LO8(eax);
    SET_LO8(eax, LO8(eax) + LO8(edx));
    MEM8(ecx + 0x3D) = LO8(eax);
    SET_LO8(eax, LO8(eax) + 4);

loc_001B634C: ;
    edx = MEM32(esi);
    edx = edx >> 1;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B635C; /* je: equal / zero */

loc_001B6355: ;
    MEM8(ecx + 0x3A) = LO8(eax);
    SET_LO8(eax, LO8(eax) + 0xC);
    goto loc_001B635F;

loc_001B635C: ;
    MEM8(ecx + 0x3A) = LO8(ebx);

loc_001B635F: ;
    MEM8(ecx + 0x3F) = LO8(ebx);
    edx = MEM32(esi);
    edx = edx >> 2;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B6373; /* je: equal / zero */

loc_001B636C: ;
    MEM8(ecx + 0x3B) = LO8(eax);
    SET_LO8(eax, LO8(eax) + 4);
    goto loc_001B6376;

loc_001B6373: ;
    MEM8(ecx + 0x3B) = LO8(ebx);

loc_001B6376: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 2), 0xF (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B638C; /* jbe: below or equal (unsigned <=) */

loc_001B637C: ;
    MEM8(ecx + 0x3E) = LO8(eax);
    SET_LO8(edx, MEM8(esi + 2));
    SET_LO8(edx, LO8(edx) & 0xF);
    SET_LO8(edx, LO8(edx) << 3);
    SET_LO8(eax, LO8(eax) + LO8(edx));
    goto loc_001B638F;

loc_001B638C: ;
    MEM8(ecx + 0x3E) = LO8(ebx);

loc_001B638F: ;
    edx = MEM32(esi);
    edx = edx >> 0x16;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B63A7; /* je: equal / zero */

loc_001B6399: ;
    SET_LO8(edx, MEM8(ecx + 0x50));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B63A7; /* je: equal / zero */

loc_001B63A0: ;
    MEM8(ecx + 0x4D) = LO8(eax);
    SET_LO8(eax, LO8(eax) + 0xC);
    goto loc_001B63AA;

loc_001B63A7: ;
    MEM8(ecx + 0x4D) = LO8(ebx);

loc_001B63AA: ;
    edx = MEM32(esi);
    edx = edx >> 0x17;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B63C8; /* je: equal / zero */

loc_001B63B4: ;
    SET_LO8(edx, MEM8(ecx + 0x50));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B63C8; /* je: equal / zero */

loc_001B63BB: ;
    MEM8(ecx + 0x4E) = LO8(eax);
    SET_LO8(eax, LO8(eax) + 0xC);
    POP32(esp, esi);
    MEM8(ecx + 0x38) = LO8(eax);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001B63C8: ;
    POP32(esp, esi);
    MEM8(ecx + 0x4E) = LO8(ebx);
    MEM8(ecx + 0x38) = LO8(eax);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B63E0
 * Original: 0x001B63E0 - 0x001B6495 (181 bytes, 68 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B63E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B63E0: ;
    SET_LO8(edx, MEM8(ecx + 0x4F));
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_001B6422; /* je: equal / zero */

loc_001B63EF: ;
    SET_LO8(edx, MEM8(ecx + 0x4C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B6422; /* jbe: below or equal (unsigned <=) */

loc_001B63F6: ;
    edx = ZX8(LO8(edx));
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001B6422; /* ja: above (unsigned >) */

loc_001B63FF: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x1B6498); /* switch: 4 entries, 4 targets */
    if (_jt == 0x001B6406u) goto loc_001B6406;
    if (_jt == 0x001B640Du) goto loc_001B640D;
    if (_jt == 0x001B6414u) goto loc_001B6414;
    if (_jt == 0x001B641Bu) goto loc_001B641B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001B6406: ;
    eax = 6;
    goto loc_001B642C;

loc_001B640D: ;
    eax = 8;
    goto loc_001B642C;

loc_001B6414: ;
    eax = 0xA;
    goto loc_001B642C;

loc_001B641B: ;
    eax = 0xC;
    goto loc_001B642C;

loc_001B6422: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B642C; /* je: equal / zero */

loc_001B6427: ;
    eax = 2;

loc_001B642C: ;
    edx = ebx;
    edx = edx >> 1;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B6438; /* je: equal / zero */

loc_001B6435: ;
    eax = eax | 0x10;

loc_001B6438: ;
    edx = ebx;
    edx = edx >> 2;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B6445; /* je: equal / zero */

loc_001B6442: ;
    eax = eax | 0x40;

loc_001B6445: ;
    edx = ebx;
    edx = edx >> 0x10;
    edx = edx & 0xF;
    esi = 0; /* xor self */
    _fa = (uint32_t)(MEM8(ecx + 0x50)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x50), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B646D; /* je: equal / zero */

loc_001B6455: ;
    ecx = ebx;
    ecx = ecx >> 0x16;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B6464; /* je: equal / zero */

loc_001B645F: ;
    esi = 1;

loc_001B6464: ;
    ebx = ebx >> 0x17;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B646D; /* je: equal / zero */

loc_001B646C: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001B646D: ;
    ecx = esi + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B6490; /* jbe: below or equal (unsigned <=) */

loc_001B6474: ;
    ecx = ecx << 8;
    eax = eax | ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B6490; /* jbe: below or equal (unsigned <=) */

loc_001B647D: ;
    ecx = edx + edx + 0x10;

loc_001B6481: ;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = ecx + 2;
    eax = eax | edx;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B6481; /* jne: not equal / not zero */

loc_001B6490: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B64B0
 * Original: 0x001B64B0 - 0x001B6503 (83 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B64B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B64B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = edi;
    PUSH32(esp, 0x001B64BDu); RECOMP_ABI_CALL(0x001F5240u, sub_001F5240); /* call 0x001F5240 */

loc_001B64BD: ;
    esi = MEM32(esp + 0x10);
    edx = MEM32(eax);
    ecx = esi;
    ecx = ecx << 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xD0); PUSH32(esp, 0x001B64D3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B64D3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B6500; /* jbe: below or equal (unsigned <=) */

loc_001B64D7: ;
    edx = edi + 8;
    ecx = eax + 8;
    edi = 0x3F800000;
    PUSH32(esp, ebx);

loc_001B64E3: ;
    ebx = MEM32(edx + -8);
    MEM32(ecx + -8) = ebx;
    ebx = MEM32(edx + -4);
    MEM32(ecx + -4) = ebx;
    ebx = MEM32(edx);
    MEM32(ecx) = ebx;
    MEM32(ecx + 4) = edi;
    edx = edx + 0xC;
    ecx = ecx + 0x10;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B64E3; /* jne: not equal / not zero */

loc_001B64FF: ;
    POP32(esp, ebx);

loc_001B6500: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B6510
 * Original: 0x001B6510 - 0x001B655E (78 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6510(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6510: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(edx + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B655D; /* jbe: below or equal (unsigned <=) */

loc_001B651D: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_001B6530: ;
    esi = MEM32(edx + 0x14);
    edi = MEM32(edx + 0x10);
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    ebp = ecx;
    esi = esi + edi;
    ecx = ecx >> 2;
    edi = ebx;
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
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(edx + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B6530; /* jb: below (unsigned <) */

loc_001B6559: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001B655D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B6560
 * Original: 0x001B6560 - 0x001B669A (314 bytes, 131 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6560(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6560: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 1 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B6696; /* jb: below (unsigned <) */

loc_001B656D: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x28) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B6581; /* jne: not equal / not zero */

loc_001B6576: ;
    SET_LO8(ecx, MEM8(esi + 0x60));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B6696; /* je: equal / zero */

loc_001B6581: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esi + 0x60));
    PUSH32(esp, ebp);
    ebp = ZX8(MEM8(esi + 0x39));
    MEM32(esi + 0x28) = eax;
    eax = MEM32(esi + 8);
    SET_LO8(ebx, LO8(ebx) | 1);
    MEM8(esi + 0x60) = LO8(ebx);
    ebx = ZX8(MEM8(esi + 0x38));
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x50);
    ecx = esi;
    ebp = ebp + edi;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x001B65A7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B65A7: ;
    edi = MEM32(eax);
    edi = edi >> 4;
    edi = edi & 0xF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_001B65D4; /* jne: not equal / not zero */

loc_001B65B6: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esi + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x5BC964); PUSH32(esp, 0x001B65D2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B65D2: ;
    goto loc_001B65F0;

loc_001B65D4: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x44);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x5BC960); PUSH32(esp, 0x001B65F0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B65F0: ;
    SET_LO8(eax, MEM8(esp + 0x44));
    esp = esp + 0x20;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B6693; /* je: equal / zero */

loc_001B65FF: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x001B6606u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B6606: ;
    eax = MEM32(eax);
    ebp = MEM32(esp + 0x20);
    eax = eax >> 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B663B; /* je: equal / zero */

loc_001B6612: ;
    edx = MEM32(esi + 8);
    ecx = ZX8(MEM8(esi + 0x3A));
    eax = MEM32(edx + 0x50);
    edx = MEM32(esi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = ecx + eax;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x48);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x5BB3DC); PUSH32(esp, 0x001B6638u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B6638: ;
    esp = esp + 0x20;

loc_001B663B: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B6666; /* je: equal / zero */

loc_001B6642: ;
    ecx = ZX8(MEM8(esi + 0x4D));
    edx = MEM32(esi + 8);
    ecx = ecx + MEM32(edx + 0x50);
    edx = MEM32(esi + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x5BB3DC); PUSH32(esp, 0x001B6663u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B6663: ;
    esp = esp + 0x20;

loc_001B6666: ;
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B6693; /* je: equal / zero */

loc_001B666D: ;
    ecx = MEM32(esi + 8);
    edx = ZX8(MEM8(esi + 0x4E));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x50);
    ecx = MEM32(esi + 0x20);
    edx = edx + ebx;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x24);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x5BB3DC); PUSH32(esp, 0x001B6690u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B6690: ;
    esp = esp + 0x20;

loc_001B6693: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001B6696: ;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001B66A0
 * Original: 0x001B66A0 - 0x001B67EB (331 bytes, 126 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B66A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B66A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, edi);
    MEM32(esp + 8) = 8;
    if (TEST_Z(_fa, _fb)) goto loc_001B66BC; /* je: equal / zero */

loc_001B66B4: ;
    MEM32(esp + 8) = 0x208;

loc_001B66BC: ;
    SET_LO8(ecx, MEM8(0x462156));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    edi = 0x200;
    if (TEST_Z(_fa, _fb)) goto loc_001B66D3; /* je: equal / zero */

loc_001B66CB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001B66D3; /* jne: not equal / not zero */

loc_001B66CF: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esp + 8) = MEM32(esp + 8) | edi;

loc_001B66D3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001B66E8; /* jne: not equal / not zero */

loc_001B66D7: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001B66DEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B66DE: ;
    ecx = MEM32(eax);
    if (0x14) _cf = (int)(((ecx) >> ((0x14) - 1)) & 1);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 3 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001B66ED; /* je: equal / zero */

loc_001B66E8: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esp + 8) = MEM32(esp + 8) | 0x40;

loc_001B66ED: ;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001B66F7; /* je: equal / zero */

loc_001B66F3: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esp + 8) = MEM32(esp + 8) | edi;

loc_001B66F7: ;
    SET_LO8(eax, MEM8(esi + 0x4F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001B6712; /* jne: not equal / not zero */

loc_001B66FE: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x001B6705u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B6705: ;
    eax = MEM32(eax);
    if (4) _cf = (int)(((eax) >> ((4) - 1)) & 1);
    eax = eax >> 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B6712; /* jbe: below or equal (unsigned <=) */

loc_001B670E: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esp + 8) = MEM32(esp + 8) | edi;

loc_001B6712: ;
    edi = ZX8(MEM8(esi + 0x38));
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esi + 0xC));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B67E5; /* jbe: below or equal (unsigned <=) */

loc_001B6722: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, ebx);
    ebx = 1;
    if (TEST_Z(_fa, _fb)) goto loc_001B6736; /* je: equal / zero */

loc_001B672F: ;
    ebx = 3;
    goto loc_001B673F;

loc_001B6736: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001B673F; /* je: equal / zero */

loc_001B673A: ;
    ebx = 2;

loc_001B673F: ;
    PUSH32(esp, ebp);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B67DD; /* jle: less or equal (signed <=) */

loc_001B674A: ;
    /* nop */

loc_001B6750: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001B6756u); RECOMP_ABI_CALL(0x00361560u, sub_00361560); /* call 0x00361560 */

loc_001B6756: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x8007000Eu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x8007000Eu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001B67D3; /* je: equal / zero */

loc_001B676C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8876017Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x8876017Cu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001B67D3; /* je: equal / zero */

loc_001B6774: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001B67CB; /* jne: not equal / not zero */

loc_001B6778: ;
    edx = MEM32(0x5BB498);
    ecx = MEM32(0x5BB49C);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(edi)) >> 32) & 1);
    edx = edx + edi;
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    MEM32(0x5BB49C) = ecx;
    ecx = ebp;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0));
    ecx = ecx - 0;
    MEM32(0x5BB498) = edx;
    if ((ecx == 0)) goto loc_001B67AC; /* je: equal / zero */

loc_001B679C: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001B67A7; /* je: equal / zero */

loc_001B679F: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B67BE; /* jne: not equal / not zero */

loc_001B67A2: ;
    MEM32(esi + 0x70) = eax;
    goto loc_001B67BE;

loc_001B67A7: ;
    MEM32(esi + 0x6C) = eax;
    goto loc_001B67BE;

loc_001B67AC: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0x5C) = eax;
    SET_LO8(eax, MEM8(esi + 0x60));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 1);
    MEM32(esi + 0x64) = ecx;
    MEM8(esi + 0x60) = LO8(eax);

loc_001B67BE: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001B6750; /* jl: less (signed <) */

loc_001B67C3: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001B67CB: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001B67D3: ;
    edx = MEM32(esi + 0x30);
    MEM8(edx + 0x15D) = 1;

loc_001B67DD: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001B67E5: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001B67F0
 * Original: 0x001B67F0 - 0x001B68A2 (178 bytes, 57 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B67F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001B67F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x5C);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001B689F; /* je: equal / zero */

loc_001B6801: ;
    eax = ZX8(MEM8(esi + 0x38));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0xC));
    ecx = MEM32(0x5BB498);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    eax = MEM32(0x5BB49C);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(0x5BB498) = ecx;
    MEM32(0x5BB49C) = eax;
    eax = MEM32(esi + 0x5C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B682Fu); RECOMP_ABI_CALL(0x003613A0u, sub_003613A0); /* call 0x003613A0 */

loc_001B682F: ;
    eax = MEM32(esi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x5C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001B6867; /* je: equal / zero */

loc_001B6839: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B683Fu); RECOMP_ABI_CALL(0x003613A0u, sub_003613A0); /* call 0x003613A0 */

loc_001B683F: ;
    eax = ZX8(MEM8(esi + 0x38));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0xC));
    ecx = MEM32(0x5BB498);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    eax = MEM32(0x5BB49C);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(0x5BB498) = ecx;
    MEM32(0x5BB49C) = eax;
    MEM32(esi + 0x6C) = edi;

loc_001B6867: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001B689C; /* je: equal / zero */

loc_001B686E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B6874u); RECOMP_ABI_CALL(0x003613A0u, sub_003613A0); /* call 0x003613A0 */

loc_001B6874: ;
    eax = ZX8(MEM8(esi + 0x38));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0xC));
    ecx = MEM32(0x5BB498);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    eax = MEM32(0x5BB49C);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(0x5BB498) = ecx;
    MEM32(0x5BB49C) = eax;
    MEM32(esi + 0x70) = edi;

loc_001B689C: ;
    MEM32(esi + 0x64) = edi;

loc_001B689F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B68B0
 * Original: 0x001B68B0 - 0x001B68FC (76 bytes, 32 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B68B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B68B0: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x5C);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(ebp + 0x38));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + 0xC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B68F5; /* je: equal / zero */

loc_001B68C3: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x100); PUSH32(esp, 0x001B68CCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B68CC: ;
    eax = MEM32(ebp + 0x5C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B68D7u); RECOMP_ABI_CALL(0x003615B0u, sub_003615B0); /* call 0x003615B0 */

loc_001B68D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B68F5; /* je: equal / zero */

loc_001B68DB: ;
    /* Native array upload uses inline rep movs, bypassing CRT/D3D helpers. */
    xml1_pc_native_vertex_copy(eax, MEM32(MEM32(ebp + 8) + 0x50), esi);
    edx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    ecx = esi;
    esi = MEM32(edx + 0x50);
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
    POP32(esp, edi);

loc_001B68F5: ;
    POP32(esp, esi);
    MEM8(ebp + 0x60) = 0;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001B6900
 * Original: 0x001B6900 - 0x001B6929 (41 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B6900: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x60) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x60 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B6928; /* je: equal / zero */

loc_001B6907: ;
    SET_LO8(edx, MEM8(ecx + 0x60));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B6928; /* je: equal / zero */

loc_001B690E: ;
    edx = MEM32(ecx + 0x6C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    eax = MEM32(ecx + 0x5C);
    MEM32(ecx + 0x5C) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_001B6925; /* je: equal / zero */

loc_001B691B: ;
    edx = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = edx;
    MEM32(ecx + 0x70) = eax;
    esp += 4; return; /* ret */

loc_001B6925: ;
    MEM32(ecx + 0x6C) = eax;

loc_001B6928: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B6930
 * Original: 0x001B6930 - 0x001B6AD3 (419 bytes, 133 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6930(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6930: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001B6939u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B6939: ;
    ecx = MEM32(eax);
    ecx = ecx >> 8;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0xF (8-bit) */
    ecx = MEM32(esi + 0xC);
    SET_LO8(edx, (CMP_A(_fa & _fb, 0)) ? 1 : 0); /* seta */
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001B6ACA; /* jbe: below or equal (unsigned <=) */

loc_001B6951: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ecx = ebx;
    ecx = ecx - edi;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    goto loc_001B6970;

    /* nop */
    edi = edi;

loc_001B6970: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 4 (32-bit) */
    ecx = MEM32(esp + 0x18);
    if (CMP_L(_fas, _fbs)) goto loc_001B6A75; /* jl: less (signed <) */

loc_001B697F: ;
    /* nop */

loc_001B6980: ;
    ebx = ZX8(MEM8(esi + 0x38));
    ebp = MEM32(esi + 8);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    ebx = ebx + MEM32(ebp + 0x50);
    ebp = ZX8(MEM8(esi + 0x3C));
    edi = ecx * 4;
    ebx = ebx + edi;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    MEM32(ebx + ebp) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001B69BC; /* je: equal / zero */

loc_001B69A5: ;
    ebx = ZX8(MEM8(esi + 0x38));
    ebp = ZX8(MEM8(esi + 0x3D));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    ebx = ebx + ebp;
    ebp = MEM32(esi + 8);
    ebx = ebx + MEM32(ebp + 0x50);
    MEM8(ebx + ecx) = 0;

loc_001B69BC: ;
    ebx = ZX8(MEM8(esi + 0x38));
    ebp = MEM32(esi + 8);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    ebx = ebx + MEM32(ebp + 0x50);
    ebp = ZX8(MEM8(esi + 0x3C));
    ebx = ebx + edi;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    MEM32(ebx + ebp + 4) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001B69F3; /* je: equal / zero */

loc_001B69DB: ;
    ebx = ZX8(MEM8(esi + 0x38));
    ebp = ZX8(MEM8(esi + 0x3D));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    ebx = ebx + ebp;
    ebp = MEM32(esi + 8);
    ebx = ebx + MEM32(ebp + 0x50);
    MEM8(ebx + ecx + 1) = 0;

loc_001B69F3: ;
    ebx = ZX8(MEM8(esi + 0x38));
    ebp = MEM32(esi + 8);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    ebx = ebx + MEM32(ebp + 0x50);
    ebp = ZX8(MEM8(esi + 0x3C));
    edi = edi + 0xC;
    ebx = ebx + edi;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    MEM32(ebx + ebp + -4) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001B6A2D; /* je: equal / zero */

loc_001B6A15: ;
    ebx = ZX8(MEM8(esi + 0x38));
    ebp = ZX8(MEM8(esi + 0x3D));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    ebx = ebx + ebp;
    ebp = MEM32(esi + 8);
    ebx = ebx + MEM32(ebp + 0x50);
    MEM8(ebx + ecx + 2) = 0;

loc_001B6A2D: ;
    ebx = ZX8(MEM8(esi + 0x38));
    ebp = MEM32(esi + 8);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    ebx = ebx + MEM32(ebp + 0x50);
    ebp = ZX8(MEM8(esi + 0x3C));
    ebx = ebx + edi;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    MEM32(ebx + ebp) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001B6A63; /* je: equal / zero */

loc_001B6A4B: ;
    edi = ZX8(MEM8(esi + 0x38));
    ebx = ZX8(MEM8(esi + 0x3D));
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    edi = edi + ebx;
    ebx = MEM32(esi + 8);
    edi = edi + MEM32(ebx + 0x50);
    MEM8(edi + ecx + 3) = 0;

loc_001B6A63: ;
    ebx = MEM32(esp + 0x1C);
    ecx = ecx + 4;
    edi = ebx + -3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001B6980; /* jle: less or equal (signed <=) */

loc_001B6A75: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001B6ABB; /* jg: greater (signed >) */

loc_001B6A79: ;
    /* nop */

loc_001B6A80: ;
    edi = ZX8(MEM8(esi + 0x38));
    ebp = MEM32(esi + 8);
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    edi = edi + MEM32(ebp + 0x50);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    ebp = ZX8(MEM8(esi + 0x3C));
    edi = edi + ecx * 4;
    MEM32(edi + ebp) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001B6AB6; /* je: equal / zero */

loc_001B6A9F: ;
    edi = ZX8(MEM8(esi + 0x38));
    ebp = ZX8(MEM8(esi + 0x3D));
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    edi = edi + ebp;
    ebp = MEM32(esi + 8);
    edi = edi + MEM32(ebp + 0x50);
    MEM8(edi + ecx) = 0;

loc_001B6AB6: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001B6A80; /* jle: less or equal (signed <=) */

loc_001B6ABB: ;
    ecx = MEM32(esi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B6970; /* jb: below (unsigned <) */

loc_001B6AC7: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001B6ACA: ;
    MEM8(esi + 0x60) = MEM8(esi + 0x60) | 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B6AE0
 * Original: 0x001B6AE0 - 0x001B6B00 (32 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6AE0(void)
{

loc_001B6AE0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x48) = eax;
    eax = MEM32(ecx + 0x160);
    eax = eax | 0x20;
    MEM32(ecx + 0x54) = edx;
    MEM32(ecx + 0x160) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B6B00
 * Original: 0x001B6B00 - 0x001B6C2F (303 bytes, 118 insns)
 * Category: game_render
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6B00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6B00: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, 0x3E797C);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001B6B16u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_001B6B16: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B6B2F; /* je: equal / zero */

loc_001B6B1D: ;
    PUSH32(esp, 0x3E7974);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001B6B28u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_001B6B28: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B6B5B; /* jne: not equal / not zero */

loc_001B6B2F: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x4F8); PUSH32(esp, 0x001B6B53u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B6B53: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001B6C27; /* jge: greater or equal (signed >=) */

loc_001B6B5B: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    eax = edi;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0xC) = ebx;
    edx = eax + 1;
    /* nop */

loc_001B6B70: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B6B70; /* jne: not equal / not zero */

loc_001B6B77: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = eax - edx;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3E79C8);
    PUSH32(esp, 0x001B6B99u); RECOMP_ABI_CALL(0x003A5DD0u, sub_003A5DD0); /* call 0x003A5DD0 */

loc_001B6B99: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B6BA2; /* je: equal / zero */

loc_001B6B9D: ;
    esi = esi | 0xFFFFFFFFu;
    goto loc_001B6C16;

loc_001B6BA2: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    edi = eax;
    PUSH32(esp, 0x001B6BAFu); RECOMP_ABI_CALL(0x0039E23Cu, sub_0039E23C); /* call 0x0039E23C */

loc_001B6BAF: ;
    ebp = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B6BBBu); RECOMP_ABI_CALL(0x0039E246u, sub_0039E246); /* call 0x0039E246 */

loc_001B6BBB: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ebx = eax;
    PUSH32(esp, 0x001B6BC7u); RECOMP_ABI_CALL(0x0039E23Cu, sub_0039E23C); /* call 0x0039E23C */

loc_001B6BC7: ;
    MEM32(esp + 0x34) = eax;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x001B6BD7u); RECOMP_ABI_CALL(0x0039E246u, sub_0039E246); /* call 0x0039E246 */

loc_001B6BD7: ;
    edx = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x44);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x50);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x504); PUSH32(esp, 0x001B6BFFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B6BFF: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0x001B6C0Bu); RECOMP_ABI_CALL(0x003A1D8Du, sub_003A1D8D); /* call 0x003A1D8D */

loc_001B6C0B: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001B6C15u); RECOMP_ABI_CALL(0x003A1D8Du, sub_003A1D8D); /* call 0x003A1D8D */

loc_001B6C15: ;
    POP32(esp, ebp);

loc_001B6C16: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_001B6C25; /* je: equal / zero */

loc_001B6C1F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B6C25u); RECOMP_ABI_CALL(0x003A1D8Du, sub_003A1D8D); /* call 0x003A1D8D */

loc_001B6C25: ;
    eax = esi;

loc_001B6C27: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001B6C30
 * Original: 0x001B6C30 - 0x001B6C65 (53 bytes, 16 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B6C30: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    ecx = ecx + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B6C4C; /* jne: not equal / not zero */

loc_001B6C44: ;
    PUSH32(esp, 0x001B6C49u); RECOMP_ABI_CALL(0x0035D100u, sub_0035D100); /* call 0x0035D100 */

loc_001B6C49: ;
    esp += 16; return; /* ret 12 */

loc_001B6C4C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B6C59; /* jne: not equal / not zero */

loc_001B6C51: ;
    PUSH32(esp, 0x001B6C56u); RECOMP_ABI_CALL(0x0035D160u, sub_0035D160); /* call 0x0035D160 */

loc_001B6C56: ;
    esp += 16; return; /* ret 12 */

loc_001B6C59: ;
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B6C62u); RECOMP_ABI_CALL(0x0035D2F0u, sub_0035D2F0); /* call 0x0035D2F0 */

loc_001B6C62: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B6C70
 * Original: 0x001B6C70 - 0x001B6C75 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6C70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6C70: ;
    g_seh_ebp = ebp; sub_0035D330(); return; /* tail jmp 0x0035D330 */

}

/**
 * sub_001B6C80
 * Original: 0x001B6C80 - 0x001B6CA8 (40 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B6C80: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esi + 0x18) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001B6CA4; /* je: equal / zero */

loc_001B6C8E: ;
    eax = MEM32(0x5BB334);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B6C99u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_001B6C99: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B6CA4; /* jne: not equal / not zero */

loc_001B6C9D: ;
    MEM32(esi + 0x18) = 0;

loc_001B6CA4: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B6CB0
 * Original: 0x001B6CB0 - 0x001B6CCF (31 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B6CB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B6CCB; /* je: equal / zero */

loc_001B6CBA: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B6CC4u); RECOMP_ABI_CALL(0x0035DE20u, sub_0035DE20); /* call 0x0035DE20 */

loc_001B6CC4: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x14) = ecx;

loc_001B6CCB: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B6CD0
 * Original: 0x001B6CD0 - 0x001B6CD4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6CD0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001B6CD0: ;
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B6CE0
 * Original: 0x001B6CE0 - 0x001B6CFE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B6CE0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001B6CFB; /* jl: less (signed <) */

loc_001B6CE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001B6CF3; /* jg: greater (signed >) */

loc_001B6CED: ;
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

loc_001B6CF3: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B6CFBu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_001B6CFB: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B6D00
 * Original: 0x001B6D00 - 0x001B6DB5 (181 bytes, 69 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B6D00: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 4), 0 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001B6D9B; /* ja: above (unsigned >) */

loc_001B6D0E: ;
    eax = ZX16(MEM16(esi));
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = eax + ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001B6D28u); RECOMP_ABI_CALL(0x00203540u, sub_00203540); /* call 0x00203540 */

loc_001B6D28: ;
    edi = ZX16(MEM16(esi));
    edi = (uint32_t)((int32_t)edi * (int32_t)0x38);
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    edx = eax;
    edi = edi + edx;
    MEM32(esi + 0x10) = edx;
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
    eax = ZX16(MEM16(esi + 2));
    esp = esp + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001B6D75; /* jle: less or equal (signed <=) */

loc_001B6D55: ;
    ecx = esi;
    PUSH32(esp, 0x001B6D5Cu); RECOMP_ABI_CALL(0x001F5240u, sub_001F5240); /* call 0x001F5240 */

loc_001B6D5C: ;
    edx = MEM32(eax);
    ecx = ebx + ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x001B6D6Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B6D6E: ;
    MEM32(esi + 0xC) = eax;
    MEM16(esi + 2) = LO16(ebx);

loc_001B6D75: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B6D92; /* jle: less or equal (signed <=) */

loc_001B6D7B: ;
    goto loc_001B6D80;

    /* nop */

loc_001B6D80: ;
    SET_LO16(edx, MEM16(esi));
    ecx = MEM32(esi + 0xC);
    SET_LO16(edx, LO16(edx) + LO16(eax));
    MEM16(ecx + eax * 2) = LO16(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B6D80; /* jl: less (signed <) */

loc_001B6D92: ;
    MEM16(esi) = MEM16(esi) + LO16(ebx);
    POP32(esp, edi);
    MEM16(esi + 4) = LO16(ebx);
    POP32(esp, ebx);

loc_001B6D9B: ;
    eax = MEM32(esi + 0xC);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 4));
    edx = ZX16(LO16(ecx));
    eax = ZX16(MEM16(eax + edx * 2 + -2));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(esi + 4) = LO16(ecx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B6DC0
 * Original: 0x001B6DC0 - 0x001B6E03 (67 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B6DC0: ;
    eax = ZX16(MEM16(ecx));
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001B6DFD; /* jge: greater or equal (signed >=) */

loc_001B6DCC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001B6DFD; /* jl: less (signed <) */

loc_001B6DD0: ;
    edx = ZX16(MEM16(ecx + 4));
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B6DEF; /* jle: less or equal (signed <=) */

loc_001B6DDB: ;
    ecx = MEM32(ecx + 0xC);
    edi = edi;

loc_001B6DE0: ;
    edi = ZX16(MEM16(ecx));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B6DF6; /* je: equal / zero */

loc_001B6DE7: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B6DE0; /* jl: less (signed <) */

loc_001B6DEF: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001B6DF6: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001B6DFD: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B6E10
 * Original: 0x001B6E10 - 0x001B6EC5 (181 bytes, 69 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B6E10: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 4), 0 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001B6EAB; /* ja: above (unsigned >) */

loc_001B6E1E: ;
    eax = ZX16(MEM16(esi));
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = eax + ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001B6E38u); RECOMP_ABI_CALL(0x00203540u, sub_00203540); /* call 0x00203540 */

loc_001B6E38: ;
    edi = ZX16(MEM16(esi));
    edi = (uint32_t)((int32_t)edi * (int32_t)0x6C);
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6C);
    edx = eax;
    edi = edi + edx;
    MEM32(esi + 0x10) = edx;
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
    eax = ZX16(MEM16(esi + 2));
    esp = esp + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001B6E85; /* jle: less or equal (signed <=) */

loc_001B6E65: ;
    ecx = esi;
    PUSH32(esp, 0x001B6E6Cu); RECOMP_ABI_CALL(0x001F5240u, sub_001F5240); /* call 0x001F5240 */

loc_001B6E6C: ;
    edx = MEM32(eax);
    ecx = ebx + ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x001B6E7Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B6E7E: ;
    MEM32(esi + 0xC) = eax;
    MEM16(esi + 2) = LO16(ebx);

loc_001B6E85: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B6EA2; /* jle: less or equal (signed <=) */

loc_001B6E8B: ;
    goto loc_001B6E90;

    /* nop */

loc_001B6E90: ;
    SET_LO16(edx, MEM16(esi));
    ecx = MEM32(esi + 0xC);
    SET_LO16(edx, LO16(edx) + LO16(eax));
    MEM16(ecx + eax * 2) = LO16(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B6E90; /* jl: less (signed <) */

loc_001B6EA2: ;
    MEM16(esi) = MEM16(esi) + LO16(ebx);
    POP32(esp, edi);
    MEM16(esi + 4) = LO16(ebx);
    POP32(esp, ebx);

loc_001B6EAB: ;
    eax = MEM32(esi + 0xC);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 4));
    edx = ZX16(LO16(ecx));
    eax = ZX16(MEM16(eax + edx * 2 + -2));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(esi + 4) = LO16(ecx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B6ED0
 * Original: 0x001B6ED0 - 0x001B6F85 (181 bytes, 69 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B6ED0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 4), 0 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001B6F6B; /* ja: above (unsigned >) */

loc_001B6EDE: ;
    eax = ZX16(MEM16(esi));
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = eax + ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001B6EF8u); RECOMP_ABI_CALL(0x00203540u, sub_00203540); /* call 0x00203540 */

loc_001B6EF8: ;
    edi = ZX16(MEM16(esi));
    edi = (uint32_t)((int32_t)edi * (int32_t)0x2C);
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    edx = eax;
    edi = edi + edx;
    MEM32(esi + 0x10) = edx;
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
    eax = ZX16(MEM16(esi + 2));
    esp = esp + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001B6F45; /* jle: less or equal (signed <=) */

loc_001B6F25: ;
    ecx = esi;
    PUSH32(esp, 0x001B6F2Cu); RECOMP_ABI_CALL(0x001F5240u, sub_001F5240); /* call 0x001F5240 */

loc_001B6F2C: ;
    edx = MEM32(eax);
    ecx = ebx + ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x001B6F3Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B6F3E: ;
    MEM32(esi + 0xC) = eax;
    MEM16(esi + 2) = LO16(ebx);

loc_001B6F45: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B6F62; /* jle: less or equal (signed <=) */

loc_001B6F4B: ;
    goto loc_001B6F50;

    /* nop */

loc_001B6F50: ;
    SET_LO16(edx, MEM16(esi));
    ecx = MEM32(esi + 0xC);
    SET_LO16(edx, LO16(edx) + LO16(eax));
    MEM16(ecx + eax * 2) = LO16(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B6F50; /* jl: less (signed <) */

loc_001B6F62: ;
    MEM16(esi) = MEM16(esi) + LO16(ebx);
    POP32(esp, edi);
    MEM16(esi + 4) = LO16(ebx);
    POP32(esp, ebx);

loc_001B6F6B: ;
    eax = MEM32(esi + 0xC);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 4));
    edx = ZX16(LO16(ecx));
    eax = ZX16(MEM16(eax + edx * 2 + -2));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(esi + 4) = LO16(ecx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B6F90
 * Original: 0x001B6F90 - 0x001B7045 (181 bytes, 68 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B6F90: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 4), 0 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001B702B; /* ja: above (unsigned >) */

loc_001B6F9E: ;
    eax = ZX16(MEM16(esi));
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = eax + ebx;
    PUSH32(esp, edi);
    eax = eax + eax * 4;
    PUSH32(esp, 0x10);
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001B6FBBu); RECOMP_ABI_CALL(0x00203540u, sub_00203540); /* call 0x00203540 */

loc_001B6FBB: ;
    edi = ZX16(MEM16(esi));
    edx = eax;
    edi = edi + edi * 4;
    ecx = ebx + ebx * 4;
    ecx = ecx << 2;
    MEM32(esi + 0x10) = edx;
    edi = edx + edi * 4;
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
    eax = ZX16(MEM16(esi + 2));
    esp = esp + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001B700A; /* jle: less or equal (signed <=) */

loc_001B6FEA: ;
    ecx = esi;
    PUSH32(esp, 0x001B6FF1u); RECOMP_ABI_CALL(0x001F5240u, sub_001F5240); /* call 0x001F5240 */

loc_001B6FF1: ;
    edx = MEM32(eax);
    ecx = ebx + ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x001B7003u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B7003: ;
    MEM32(esi + 0xC) = eax;
    MEM16(esi + 2) = LO16(ebx);

loc_001B700A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B7022; /* jle: less or equal (signed <=) */

loc_001B7010: ;
    SET_LO16(edx, MEM16(esi));
    ecx = MEM32(esi + 0xC);
    SET_LO16(edx, LO16(edx) + LO16(eax));
    MEM16(ecx + eax * 2) = LO16(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B7010; /* jl: less (signed <) */

loc_001B7022: ;
    MEM16(esi) = MEM16(esi) + LO16(ebx);
    POP32(esp, edi);
    MEM16(esi + 4) = LO16(ebx);
    POP32(esp, ebx);

loc_001B702B: ;
    eax = MEM32(esi + 0xC);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 4));
    edx = ZX16(LO16(ecx));
    eax = ZX16(MEM16(eax + edx * 2 + -2));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(esi + 4) = LO16(ecx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B7050
 * Original: 0x001B7050 - 0x001B7109 (185 bytes, 67 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7050: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 4), 0 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001B70EF; /* ja: above (unsigned >) */

loc_001B705E: ;
    eax = ZX16(MEM16(esi));
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = eax + ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001B707Bu); RECOMP_ABI_CALL(0x00203540u, sub_00203540); /* call 0x00203540 */

loc_001B707B: ;
    edi = ZX16(MEM16(esi));
    edi = (uint32_t)((int32_t)edi * (int32_t)0x8C);
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8C);
    edx = eax;
    edi = edi + edx;
    MEM32(esi + 0x10) = edx;
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
    eax = ZX16(MEM16(esi + 2));
    esp = esp + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001B70CE; /* jle: less or equal (signed <=) */

loc_001B70AE: ;
    ecx = esi;
    PUSH32(esp, 0x001B70B5u); RECOMP_ABI_CALL(0x001F5240u, sub_001F5240); /* call 0x001F5240 */

loc_001B70B5: ;
    edx = MEM32(eax);
    ecx = ebx + ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x001B70C7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B70C7: ;
    MEM32(esi + 0xC) = eax;
    MEM16(esi + 2) = LO16(ebx);

loc_001B70CE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B70E6; /* jle: less or equal (signed <=) */

loc_001B70D4: ;
    SET_LO16(edx, MEM16(esi));
    ecx = MEM32(esi + 0xC);
    SET_LO16(edx, LO16(edx) + LO16(eax));
    MEM16(ecx + eax * 2) = LO16(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B70D4; /* jl: less (signed <) */

loc_001B70E6: ;
    MEM16(esi) = MEM16(esi) + LO16(ebx);
    POP32(esp, edi);
    MEM16(esi + 4) = LO16(ebx);
    POP32(esp, ebx);

loc_001B70EF: ;
    eax = MEM32(esi + 0xC);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 4));
    edx = ZX16(LO16(ecx));
    eax = ZX16(MEM16(eax + edx * 2 + -2));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(esi + 4) = LO16(ecx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B7110
 * Original: 0x001B7110 - 0x001B71C5 (181 bytes, 69 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7110: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 4), 0 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001B71AB; /* ja: above (unsigned >) */

loc_001B711E: ;
    eax = ZX16(MEM16(esi));
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    eax = eax + ebx;
    PUSH32(esp, 0x10);
    eax = eax << 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001B7138u); RECOMP_ABI_CALL(0x00203540u, sub_00203540); /* call 0x00203540 */

loc_001B7138: ;
    edi = ZX16(MEM16(esi));
    edx = eax;
    edi = edi << 4;
    ecx = ebx;
    ecx = ecx << 4;
    edi = edi + edx;
    MEM32(esi + 0x10) = edx;
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
    eax = ZX16(MEM16(esi + 2));
    esp = esp + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001B7185; /* jle: less or equal (signed <=) */

loc_001B7165: ;
    ecx = esi;
    PUSH32(esp, 0x001B716Cu); RECOMP_ABI_CALL(0x001F5240u, sub_001F5240); /* call 0x001F5240 */

loc_001B716C: ;
    edx = MEM32(eax);
    ecx = ebx + ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x001B717Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B717E: ;
    MEM32(esi + 0xC) = eax;
    MEM16(esi + 2) = LO16(ebx);

loc_001B7185: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B71A2; /* jle: less or equal (signed <=) */

loc_001B718B: ;
    goto loc_001B7190;

    /* nop */

loc_001B7190: ;
    SET_LO16(edx, MEM16(esi));
    ecx = MEM32(esi + 0xC);
    SET_LO16(edx, LO16(edx) + LO16(eax));
    MEM16(ecx + eax * 2) = LO16(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B7190; /* jl: less (signed <) */

loc_001B71A2: ;
    MEM16(esi) = MEM16(esi) + LO16(ebx);
    POP32(esp, edi);
    MEM16(esi + 4) = LO16(ebx);
    POP32(esp, ebx);

loc_001B71AB: ;
    eax = MEM32(esi + 0xC);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 4));
    edx = ZX16(LO16(ecx));
    eax = ZX16(MEM16(eax + edx * 2 + -2));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(esi + 4) = LO16(ecx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B71D0
 * Original: 0x001B71D0 - 0x001B7228 (88 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B71D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B71D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = ZX16(MEM16(esi));
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001B7223; /* jge: greater or equal (signed >=) */

loc_001B71DF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001B7223; /* jl: less (signed <) */

loc_001B71E3: ;
    SET_LO16(ecx, MEM16(esi + 4));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(esi + 2) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B7214; /* jb: below (unsigned <) */

loc_001B71ED: ;
    ecx = esi;
    PUSH32(esp, 0x001B71F4u); RECOMP_ABI_CALL(0x001F5240u, sub_001F5240); /* call 0x001F5240 */

loc_001B71F4: ;
    MEM16(esi + 2) = MEM16(esi + 2) + 8;
    SET_LO16(ecx, MEM16(esi + 2));
    edx = MEM32(eax);
    ecx = ZX16(LO16(ecx));
    ecx = ecx << 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x001B7211u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001B7211: ;
    MEM32(esi + 0xC) = eax;

loc_001B7214: ;
    edx = ZX16(MEM16(esi + 4));
    eax = MEM32(esi + 0xC);
    MEM16(eax + edx * 2) = LO16(edi);
    MEM16(esi + 4) = MEM16(esi + 4) + 1;
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_001B7223: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B7230
 * Original: 0x001B7230 - 0x001B7310 (224 bytes, 83 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7230(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7230: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0x14));
    edi = edi + ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001B730C; /* jae: above or equal (unsigned >=) */

loc_001B724F: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);

loc_001B7256: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B72D9; /* jl: less (signed <) */

loc_001B725D: ;
    edx = ebx + -4;
    edx = edx >> 2;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = edx * 4;
    goto loc_001B7270;

    /* nop */

loc_001B7270: ;
    ebp = MEM32(eax);
    MEM32(ecx) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(eax + 8);
    MEM32(ecx + 8) = ebp;
    ebp = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = ebp;
    ebp = MEM32(eax + 0x10);
    MEM32(ecx) = ebp;
    ebp = MEM32(eax + 0x14);
    eax = eax + 0x10;
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(eax + 8);
    MEM32(ecx + 8) = ebp;
    ebp = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = ebp;
    ebp = MEM32(eax + 0x10);
    eax = eax + 0x10;
    MEM32(ecx) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(eax + 8);
    MEM32(ecx + 8) = ebp;
    ebp = MEM32(eax + 0xC);
    eax = eax + 0x10;
    MEM32(ecx + 0xC) = ebp;
    ebp = MEM32(eax);
    MEM32(ecx) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(eax + 8);
    MEM32(ecx + 8) = ebp;
    ebp = MEM32(eax + 0xC);
    eax = eax + 0x10;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0xC) = ebp;
    if ((_fa != 0)) goto loc_001B7270; /* jne: not equal / not zero */

loc_001B72D9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001B72FD; /* jge: greater or equal (signed >=) */

loc_001B72DD: ;
    edx = ebx;
    edx = edx - esi;

loc_001B72E1: ;
    esi = MEM32(eax);
    MEM32(ecx) = esi;
    esi = MEM32(eax + 4);
    MEM32(ecx + 4) = esi;
    esi = MEM32(eax + 8);
    MEM32(ecx + 8) = esi;
    esi = MEM32(eax + 0xC);
    eax = eax + 0x10;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0xC) = esi;
    if ((_fa != 0)) goto loc_001B72E1; /* jne: not equal / not zero */

loc_001B72FD: ;
    ecx = ecx + MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B7256; /* jb: below (unsigned <) */

loc_001B7309: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001B730C: ;
    POP32(esp, edi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001B7310
 * Original: 0x001B7310 - 0x001B736C (92 bytes, 39 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7310(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7310: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, edi);
    edi = edx;
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0x14));
    edi = edi + ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001B7368; /* jae: above or equal (unsigned >=) */

loc_001B732D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    ecx = ecx + 2;

loc_001B7337: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B735C; /* jle: less or equal (signed <=) */

loc_001B733B: ;
    esi = ebp;
    /* nop */

loc_001B7340: ;
    SET_LO8(ebx, MEM8(eax));
    MEM8(ecx + -2) = LO8(ebx);
    SET_LO8(ebx, MEM8(eax + 1));
    MEM8(ecx + -1) = LO8(ebx);
    SET_LO8(ebx, MEM8(eax + 2));
    MEM8(ecx) = LO8(ebx);
    SET_LO8(ebx, MEM8(eax + 3));
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(ecx + 1) = LO8(ebx);
    if ((_fa != 0)) goto loc_001B7340; /* jne: not equal / not zero */

loc_001B735C: ;
    ecx = ecx + edx;
    esi = ecx + -2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B7337; /* jb: below (unsigned <) */

loc_001B7365: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001B7368: ;
    POP32(esp, edi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001B7370
 * Original: 0x001B7370 - 0x001B73E9 (121 bytes, 52 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7370(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7370: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0x14));
    edi = edi + ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001B73E5; /* jae: above or equal (unsigned >=) */

loc_001B738B: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);

loc_001B7392: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B73C7; /* jl: less (signed <) */

loc_001B7399: ;
    edx = ebx + -4;
    edx = edx >> 2;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = edx * 4;

loc_001B73A7: ;
    ebp = MEM32(eax);
    MEM32(ecx) = ebp;
    ebp = MEM32(eax + 4);
    eax = eax + 4;
    eax = eax + 4;
    MEM32(ecx) = ebp;
    ebp = MEM32(eax);
    eax = eax + 4;
    MEM32(ecx) = ebp;
    ebp = MEM32(eax);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx) = ebp;
    if ((_fa != 0)) goto loc_001B73A7; /* jne: not equal / not zero */

loc_001B73C7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001B73DA; /* jge: greater or equal (signed >=) */

loc_001B73CB: ;
    edx = ebx;
    edx = edx - esi;
    /* nop */

loc_001B73D0: ;
    esi = MEM32(eax);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx) = esi;
    if ((_fa != 0)) goto loc_001B73D0; /* jne: not equal / not zero */

loc_001B73DA: ;
    ecx = ecx + MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B7392; /* jb: below (unsigned <) */

loc_001B73E2: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001B73E5: ;
    POP32(esp, edi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001B73F0
 * Original: 0x001B73F0 - 0x001B7487 (151 bytes, 61 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B73F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B73F0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0x14));
    edi = edi + ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001B7483; /* jae: above or equal (unsigned >=) */

loc_001B740B: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);

loc_001B7412: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B7460; /* jl: less (signed <) */

loc_001B7419: ;
    edx = ebx + -4;
    edx = edx >> 2;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = edx * 4;

loc_001B7427: ;
    ebp = MEM32(eax);
    MEM32(ecx) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(eax + 8);
    eax = eax + 8;
    MEM32(ecx) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(eax + 8);
    eax = eax + 8;
    MEM32(ecx) = ebp;
    ebp = MEM32(eax + 4);
    eax = eax + 8;
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(eax);
    MEM32(ecx) = ebp;
    ebp = MEM32(eax + 4);
    eax = eax + 8;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = ebp;
    if ((_fa != 0)) goto loc_001B7427; /* jne: not equal / not zero */

loc_001B7460: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001B7478; /* jge: greater or equal (signed >=) */

loc_001B7464: ;
    edx = ebx;
    edx = edx - esi;

loc_001B7468: ;
    esi = MEM32(eax);
    MEM32(ecx) = esi;
    esi = MEM32(eax + 4);
    eax = eax + 8;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = esi;
    if ((_fa != 0)) goto loc_001B7468; /* jne: not equal / not zero */

loc_001B7478: ;
    ecx = ecx + MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B7412; /* jb: below (unsigned <) */

loc_001B7480: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001B7483: ;
    POP32(esp, edi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001B7490
 * Original: 0x001B7490 - 0x001B7559 (201 bytes, 74 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7490(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7490: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0x14));
    edi = edi + ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001B7555; /* jae: above or equal (unsigned >=) */

loc_001B74AF: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);

loc_001B74B6: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B7521; /* jl: less (signed <) */

loc_001B74BD: ;
    edx = ebx + -4;
    edx = edx >> 2;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = edx * 4;
    goto loc_001B74D0;

    /* nop */

loc_001B74D0: ;
    ebp = MEM32(eax);
    MEM32(ecx) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(eax + 8);
    MEM32(ecx + 8) = ebp;
    ebp = MEM32(eax + 0xC);
    eax = eax + 0xC;
    MEM32(ecx) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(eax + 8);
    MEM32(ecx + 8) = ebp;
    ebp = MEM32(eax + 0xC);
    eax = eax + 0xC;
    MEM32(ecx) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(eax + 8);
    eax = eax + 0xC;
    MEM32(ecx + 8) = ebp;
    ebp = MEM32(eax);
    MEM32(ecx) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(eax + 8);
    eax = eax + 0xC;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 8) = ebp;
    if ((_fa != 0)) goto loc_001B74D0; /* jne: not equal / not zero */

loc_001B7521: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001B7546; /* jge: greater or equal (signed >=) */

loc_001B7525: ;
    edx = ebx;
    edx = edx - esi;
    /* nop */

loc_001B7530: ;
    esi = MEM32(eax);
    MEM32(ecx) = esi;
    esi = MEM32(eax + 4);
    MEM32(ecx + 4) = esi;
    esi = MEM32(eax + 8);
    eax = eax + 0xC;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 8) = esi;
    if ((_fa != 0)) goto loc_001B7530; /* jne: not equal / not zero */

loc_001B7546: ;
    ecx = ecx + MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B74B6; /* jb: below (unsigned <) */

loc_001B7552: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001B7555: ;
    POP32(esp, edi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001B7560
 * Original: 0x001B7560 - 0x001B75A7 (71 bytes, 31 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7560(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7560: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x14));
    edx = edx + ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001B75A3; /* jae: above or equal (unsigned >=) */

loc_001B757D: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);

loc_001B7584: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B759A; /* jle: less or equal (signed <=) */

loc_001B7588: ;
    esi = ebx;
    /* nop */

loc_001B7590: ;
    ebp = MEM32(eax);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx) = ebp;
    if ((_fa != 0)) goto loc_001B7590; /* jne: not equal / not zero */

loc_001B759A: ;
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B7584; /* jb: below (unsigned <) */

loc_001B75A0: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001B75A3: ;
    POP32(esp, edi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001B75B0
 * Original: 0x001B75B0 - 0x001B75F5 (69 bytes, 31 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B75B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B75B0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x18));
    eax = eax + ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001B75F0; /* jae: above or equal (unsigned >=) */

loc_001B75CE: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_001B75D4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B75E8; /* jle: less or equal (signed <=) */

loc_001B75D8: ;
    edi = edx;
    /* nop */

loc_001B75E0: ;
    SET_LO8(ebx, MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(ecx) = LO8(ebx);
    if ((_fa != 0)) goto loc_001B75E0; /* jne: not equal / not zero */

loc_001B75E8: ;
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B75D4; /* jb: below (unsigned <) */

loc_001B75EE: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001B75F0: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001B7600
 * Original: 0x001B7600 - 0x001B7653 (83 bytes, 35 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7600(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7600: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = ebp;
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0x18));
    esi = esi + ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001B764E; /* jae: above or equal (unsigned >=) */

loc_001B761E: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_001B7624: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B7646; /* jle: less or equal (signed <=) */

loc_001B7628: ;
    edi = edx;
    /* nop */

loc_001B7630: ;
    SET_LO8(ebx, MEM8(eax));
    MEM8(ecx) = LO8(ebx);
    SET_LO8(ebx, MEM8(eax + 1));
    MEM8(ecx + 1) = LO8(ebx);
    SET_LO8(ebx, MEM8(eax + 2));
    eax = eax + 3;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(ecx + 2) = LO8(ebx);
    if ((_fa != 0)) goto loc_001B7630; /* jne: not equal / not zero */

loc_001B7646: ;
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B7624; /* jb: below (unsigned <) */

loc_001B764C: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001B764E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001B7660
 * Original: 0x001B7660 - 0x001B7696 (54 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7660: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi) = 0x3E79DC;
    if (TEST_Z(_fa, _fb)) goto loc_001B7680; /* je: equal / zero */

loc_001B7670: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B7676u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_001B7676: ;
    esp = esp + 4;
    MEM32(esi + 4) = 0;

loc_001B7680: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7690; /* je: equal / zero */

loc_001B7687: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B768Du); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_001B768D: ;
    esp = esp + 4;

loc_001B7690: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B76A0
 * Original: 0x001B76A0 - 0x001B76F8 (88 bytes, 33 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B76A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B76A0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_001B76CC; /* jge: greater or equal (signed >=) */

loc_001B76AD: ;
    edx = MEM32(esp + 0x10);
    edi = MEM32(edx);
    edx = MEM32(ecx + 0x10);
    edx = edx + eax * 4;
    /* nop */

loc_001B76C0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(edx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B76DD; /* je: equal / zero */

loc_001B76C4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B76C0; /* jl: less (signed <) */

loc_001B76CC: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(0x46A728);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_001B76DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001B76CC; /* jl: less (signed <) */

loc_001B76E1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B76E7u); RECOMP_ABI_CALL(0x001E7BB0u, sub_001E7BB0); /* call 0x001E7BB0 */

loc_001B76E7: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B7700
 * Original: 0x001B7700 - 0x001B775C (92 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7700(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7700: ;
    edx = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001B7732; /* jle: less or equal (signed <=) */

loc_001B770E: ;
    eax = MEM32(esp + 0x14);
    ebp = MEM32(ecx + 0x10);
    ebx = MEM32(eax);

loc_001B7717: ;
    eax = edx + edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    esi = MEM32(ebp + eax * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001B7729; /* jae: above or equal (unsigned >=) */

loc_001B7724: ;
    edi = eax + 1;
    goto loc_001B772E;

loc_001B7729: ;
    if (CMP_BE(_fa, _fb)) goto loc_001B7755; /* jbe: below or equal (unsigned <=) */

loc_001B772B: ;
    edx = eax + -1;

loc_001B772E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B7717; /* jl: less (signed <) */

loc_001B7732: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B7742; /* jne: not equal / not zero */

loc_001B7739: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001B7742: ;
    ecx = MEM32(ecx + 0x10);
    eax = MEM32(esp + 0x14);
    edx = MEM32(ecx + edi * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    eax = edi + 1;
    if (CMP_B(_fa, _fb)) goto loc_001B7755; /* jb: below (unsigned <) */

loc_001B7753: ;
    eax = edi;

loc_001B7755: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B7760
 * Original: 0x001B7760 - 0x001B777A (26 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7760(void)
{

loc_001B7760: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001B776Fu); RECOMP_ABI_CALL(0x00246660u, sub_00246660); /* call 0x00246660 */

loc_001B776F: ;
    MEM32(esi) = eax;
    esp = esp + 4;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B7780
 * Original: 0x001B7780 - 0x001B77B0 (48 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7780: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B779E; /* je: equal / zero */

loc_001B7789: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B779E; /* jne: not equal / not zero */

loc_001B7799: ;
    PUSH32(esp, 0x001B779Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B779E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001B77A5u); RECOMP_ABI_CALL(0x00214B80u, sub_00214B80); /* call 0x00214B80 */

loc_001B77A5: ;
    MEM32(esi) = eax;
    esp = esp + 4;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B77B0
 * Original: 0x001B77B0 - 0x001B77E0 (48 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B77B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B77B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B77CE; /* je: equal / zero */

loc_001B77B9: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B77CE; /* jne: not equal / not zero */

loc_001B77C9: ;
    PUSH32(esp, 0x001B77CEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B77CE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001B77D5u); RECOMP_ABI_CALL(0x0022AA30u, sub_0022AA30); /* call 0x0022AA30 */

loc_001B77D5: ;
    MEM32(esi) = eax;
    esp = esp + 4;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B77E0
 * Original: 0x001B77E0 - 0x001B7810 (48 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B77E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B77E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B77FE; /* je: equal / zero */

loc_001B77E9: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B77FE; /* jne: not equal / not zero */

loc_001B77F9: ;
    PUSH32(esp, 0x001B77FEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B77FE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001B7805u); RECOMP_ABI_CALL(0x0022AAD0u, sub_0022AAD0); /* call 0x0022AAD0 */

loc_001B7805: ;
    MEM32(esi) = eax;
    esp = esp + 4;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B7810
 * Original: 0x001B7810 - 0x001B7840 (48 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7810: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B782E; /* je: equal / zero */

loc_001B7819: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B782E; /* jne: not equal / not zero */

loc_001B7829: ;
    PUSH32(esp, 0x001B782Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B782E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001B7835u); RECOMP_ABI_CALL(0x0022AB70u, sub_0022AB70); /* call 0x0022AB70 */

loc_001B7835: ;
    MEM32(esi) = eax;
    esp = esp + 4;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B7840
 * Original: 0x001B7840 - 0x001B7867 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7840: ;
    eax = MEM32(0x5BB134);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7854; /* je: equal / zero */

loc_001B7849: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B7866; /* jne: not equal / not zero */

loc_001B7854: ;
    PUSH32(esp, 0x1DF1A0);
    PUSH32(esp, 0x001B785Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B785E: ;
    eax = MEM32(0x5BB134);
    esp = esp + 4;

loc_001B7866: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B7870
 * Original: 0x001B7870 - 0x001B7897 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7870: ;
    eax = MEM32(0x5BB274);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7884; /* je: equal / zero */

loc_001B7879: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B7896; /* jne: not equal / not zero */

loc_001B7884: ;
    PUSH32(esp, 0x1DF6A0);
    PUSH32(esp, 0x001B788Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B788E: ;
    eax = MEM32(0x5BB274);
    esp = esp + 4;

loc_001B7896: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B78A0
 * Original: 0x001B78A0 - 0x001B78C7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B78A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B78A0: ;
    eax = MEM32(0x5BB138);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B78B4; /* je: equal / zero */

loc_001B78A9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B78C6; /* jne: not equal / not zero */

loc_001B78B4: ;
    PUSH32(esp, 0x1DF920);
    PUSH32(esp, 0x001B78BEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B78BE: ;
    eax = MEM32(0x5BB138);
    esp = esp + 4;

loc_001B78C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B78D0
 * Original: 0x001B78D0 - 0x001B78F7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B78D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B78D0: ;
    eax = MEM32(0x5BB178);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B78E4; /* je: equal / zero */

loc_001B78D9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B78F6; /* jne: not equal / not zero */

loc_001B78E4: ;
    PUSH32(esp, 0x1DEBC0);
    PUSH32(esp, 0x001B78EEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B78EE: ;
    eax = MEM32(0x5BB178);
    esp = esp + 4;

loc_001B78F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B7900
 * Original: 0x001B7900 - 0x001B7927 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7900: ;
    eax = MEM32(0x5BB174);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7914; /* je: equal / zero */

loc_001B7909: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B7926; /* jne: not equal / not zero */

loc_001B7914: ;
    PUSH32(esp, 0x1DF2E0);
    PUSH32(esp, 0x001B791Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B791E: ;
    eax = MEM32(0x5BB174);
    esp = esp + 4;

loc_001B7926: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B7930
 * Original: 0x001B7930 - 0x001B7957 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7930: ;
    eax = MEM32(0x5BB16C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7944; /* je: equal / zero */

loc_001B7939: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B7956; /* jne: not equal / not zero */

loc_001B7944: ;
    PUSH32(esp, 0x1C2DA0);
    PUSH32(esp, 0x001B794Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B794E: ;
    eax = MEM32(0x5BB16C);
    esp = esp + 4;

loc_001B7956: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B7960
 * Original: 0x001B7960 - 0x001B7987 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7960: ;
    eax = MEM32(0x5BB164);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7974; /* je: equal / zero */

loc_001B7969: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B7986; /* jne: not equal / not zero */

loc_001B7974: ;
    PUSH32(esp, 0x1D9890);
    PUSH32(esp, 0x001B797Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B797E: ;
    eax = MEM32(0x5BB164);
    esp = esp + 4;

loc_001B7986: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B7990
 * Original: 0x001B7990 - 0x001B79B7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7990: ;
    eax = MEM32(0x5BB160);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B79A4; /* je: equal / zero */

loc_001B7999: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B79B6; /* jne: not equal / not zero */

loc_001B79A4: ;
    PUSH32(esp, 0x1DDCB0);
    PUSH32(esp, 0x001B79AEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B79AE: ;
    eax = MEM32(0x5BB160);
    esp = esp + 4;

loc_001B79B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B79C0
 * Original: 0x001B79C0 - 0x001B79E7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B79C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B79C0: ;
    eax = MEM32(0x5BB154);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B79D4; /* je: equal / zero */

loc_001B79C9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B79E6; /* jne: not equal / not zero */

loc_001B79D4: ;
    PUSH32(esp, 0x1DDD00);
    PUSH32(esp, 0x001B79DEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B79DE: ;
    eax = MEM32(0x5BB154);
    esp = esp + 4;

loc_001B79E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B79F0
 * Original: 0x001B79F0 - 0x001B7A17 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B79F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B79F0: ;
    eax = MEM32(0x5BB150);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7A04; /* je: equal / zero */

loc_001B79F9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B7A16; /* jne: not equal / not zero */

loc_001B7A04: ;
    PUSH32(esp, 0x1DF2A0);
    PUSH32(esp, 0x001B7A0Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B7A0E: ;
    eax = MEM32(0x5BB150);
    esp = esp + 4;

loc_001B7A16: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B7A20
 * Original: 0x001B7A20 - 0x001B7A47 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7A20: ;
    eax = MEM32(0x5BB23C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7A34; /* je: equal / zero */

loc_001B7A29: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B7A46; /* jne: not equal / not zero */

loc_001B7A34: ;
    PUSH32(esp, 0x1DF4E0);
    PUSH32(esp, 0x001B7A3Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B7A3E: ;
    eax = MEM32(0x5BB23C);
    esp = esp + 4;

loc_001B7A46: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B7A50
 * Original: 0x001B7A50 - 0x001B7A77 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7A50: ;
    eax = MEM32(0x5BB238);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7A64; /* je: equal / zero */

loc_001B7A59: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B7A76; /* jne: not equal / not zero */

loc_001B7A64: ;
    PUSH32(esp, 0x1DFC80);
    PUSH32(esp, 0x001B7A6Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B7A6E: ;
    eax = MEM32(0x5BB238);
    esp = esp + 4;

loc_001B7A76: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B7A80
 * Original: 0x001B7A80 - 0x001B7AA7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7A80: ;
    eax = MEM32(0x5BB234);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7A94; /* je: equal / zero */

loc_001B7A89: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B7AA6; /* jne: not equal / not zero */

loc_001B7A94: ;
    PUSH32(esp, 0x1DF4A0);
    PUSH32(esp, 0x001B7A9Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B7A9E: ;
    eax = MEM32(0x5BB234);
    esp = esp + 4;

loc_001B7AA6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B7AB0
 * Original: 0x001B7AB0 - 0x001B7AD7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7AB0: ;
    eax = MEM32(0x5BB230);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7AC4; /* je: equal / zero */

loc_001B7AB9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B7AD6; /* jne: not equal / not zero */

loc_001B7AC4: ;
    PUSH32(esp, 0x1DFC40);
    PUSH32(esp, 0x001B7ACEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B7ACE: ;
    eax = MEM32(0x5BB230);
    esp = esp + 4;

loc_001B7AD6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B7AE0
 * Original: 0x001B7AE0 - 0x001B7B07 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7AE0: ;
    eax = MEM32(0x5BB22C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7AF4; /* je: equal / zero */

loc_001B7AE9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B7B06; /* jne: not equal / not zero */

loc_001B7AF4: ;
    PUSH32(esp, 0x1DF460);
    PUSH32(esp, 0x001B7AFEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B7AFE: ;
    eax = MEM32(0x5BB22C);
    esp = esp + 4;

loc_001B7B06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B7B10
 * Original: 0x001B7B10 - 0x001B7B37 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7B10: ;
    eax = MEM32(0x5BB228);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7B24; /* je: equal / zero */

loc_001B7B19: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B7B36; /* jne: not equal / not zero */

loc_001B7B24: ;
    PUSH32(esp, 0x1DFC00);
    PUSH32(esp, 0x001B7B2Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B7B2E: ;
    eax = MEM32(0x5BB228);
    esp = esp + 4;

loc_001B7B36: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B7B40
 * Original: 0x001B7B40 - 0x001B7B67 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7B40: ;
    eax = MEM32(0x5BB224);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7B54; /* je: equal / zero */

loc_001B7B49: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B7B66; /* jne: not equal / not zero */

loc_001B7B54: ;
    PUSH32(esp, 0x1E1960);
    PUSH32(esp, 0x001B7B5Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B7B5E: ;
    eax = MEM32(0x5BB224);
    esp = esp + 4;

loc_001B7B66: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B7B70
 * Original: 0x001B7B70 - 0x001B7B97 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7B70: ;
    eax = MEM32(0x5BB220);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7B84; /* je: equal / zero */

loc_001B7B79: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B7B96; /* jne: not equal / not zero */

loc_001B7B84: ;
    PUSH32(esp, 0x1B9120);
    PUSH32(esp, 0x001B7B8Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B7B8E: ;
    eax = MEM32(0x5BB220);
    esp = esp + 4;

loc_001B7B96: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B7BA0
 * Original: 0x001B7BA0 - 0x001B7BC7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7BA0: ;
    eax = MEM32(0x5BB21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7BB4; /* je: equal / zero */

loc_001B7BA9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B7BC6; /* jne: not equal / not zero */

loc_001B7BB4: ;
    PUSH32(esp, 0x1D0D10);
    PUSH32(esp, 0x001B7BBEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B7BBE: ;
    eax = MEM32(0x5BB21C);
    esp = esp + 4;

loc_001B7BC6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B7BD0
 * Original: 0x001B7BD0 - 0x001B7BF7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7BD0: ;
    eax = MEM32(0x5BB214);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7BE4; /* je: equal / zero */

loc_001B7BD9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B7BF6; /* jne: not equal / not zero */

loc_001B7BE4: ;
    PUSH32(esp, 0x1D9990);
    PUSH32(esp, 0x001B7BEEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B7BEE: ;
    eax = MEM32(0x5BB214);
    esp = esp + 4;

loc_001B7BF6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B7C00
 * Original: 0x001B7C00 - 0x001B7C27 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7C00: ;
    eax = MEM32(0x5BB210);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7C14; /* je: equal / zero */

loc_001B7C09: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B7C26; /* jne: not equal / not zero */

loc_001B7C14: ;
    PUSH32(esp, 0x1C2FA0);
    PUSH32(esp, 0x001B7C1Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B7C1E: ;
    eax = MEM32(0x5BB210);
    esp = esp + 4;

loc_001B7C26: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B7C30
 * Original: 0x001B7C30 - 0x001B7C57 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7C30: ;
    eax = MEM32(0x5BB20C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7C44; /* je: equal / zero */

loc_001B7C39: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B7C56; /* jne: not equal / not zero */

loc_001B7C44: ;
    PUSH32(esp, 0x1D4650);
    PUSH32(esp, 0x001B7C4Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B7C4E: ;
    eax = MEM32(0x5BB20C);
    esp = esp + 4;

loc_001B7C56: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B7C60
 * Original: 0x001B7C60 - 0x001B7C87 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7C60: ;
    eax = MEM32(0x5BB204);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7C74; /* je: equal / zero */

loc_001B7C69: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B7C86; /* jne: not equal / not zero */

loc_001B7C74: ;
    PUSH32(esp, 0x1DF420);
    PUSH32(esp, 0x001B7C7Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B7C7E: ;
    eax = MEM32(0x5BB204);
    esp = esp + 4;

loc_001B7C86: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B7C90
 * Original: 0x001B7C90 - 0x001B7CB7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7C90: ;
    eax = MEM32(0x5BB1FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7CA4; /* je: equal / zero */

loc_001B7C99: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B7CB6; /* jne: not equal / not zero */

loc_001B7CA4: ;
    PUSH32(esp, 0x1E0A60);
    PUSH32(esp, 0x001B7CAEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B7CAE: ;
    eax = MEM32(0x5BB1FC);
    esp = esp + 4;

loc_001B7CB6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B7CC0
 * Original: 0x001B7CC0 - 0x001B7D2E (110 bytes, 37 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001B7CC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001B7CC0: ;
    esp = esp - 0xC;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / MEMF(ecx + 0xC); /* fdiv dword ptr [ecx + 0xc] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ecx); /* fmul dword ptr [ecx] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ecx + 4); /* fmul dword ptr [ecx + 4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ecx + 8); /* fmul dword ptr [ecx + 8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(ecx + 0xC); /* fmul dword ptr [ecx + 0xc] */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 4); /* fmul dword ptr [esp + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = fp_top() * MEMF(esp); /* fmul dword ptr [esp] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B7D30
 * Original: 0x001B7D30 - 0x001B7D9E (110 bytes, 37 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7D30(void)
{

loc_001B7D30: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x18) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0x1C) = eax;
    eax = MEM32(esp + 0xC);
    edx = MEM32(eax);
    MEM32(ecx + 0x20) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x24) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x28) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0x2C) = eax;
    eax = MEM32(esp + 0x10);
    edx = MEM32(eax);
    MEM32(ecx + 0x30) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x34) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x38) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0x3C) = eax;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001B7DA0
 * Original: 0x001B7DA0 - 0x001B7DC7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7DA0: ;
    eax = MEM32(0x5BB148);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7DB4; /* je: equal / zero */

loc_001B7DA9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B7DC6; /* jne: not equal / not zero */

loc_001B7DB4: ;
    PUSH32(esp, 0x1DF220);
    PUSH32(esp, 0x001B7DBEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B7DBE: ;
    eax = MEM32(0x5BB148);
    esp = esp + 4;

loc_001B7DC6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B7DD0
 * Original: 0x001B7DD0 - 0x001B7DF7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7DD0: ;
    eax = MEM32(0x5BB13C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7DE4; /* je: equal / zero */

loc_001B7DD9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B7DF6; /* jne: not equal / not zero */

loc_001B7DE4: ;
    PUSH32(esp, 0x1DF1E0);
    PUSH32(esp, 0x001B7DEEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B7DEE: ;
    eax = MEM32(0x5BB13C);
    esp = esp + 4;

loc_001B7DF6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B7E00
 * Original: 0x001B7E00 - 0x001B7E27 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7E00: ;
    eax = MEM32(0x5BB14C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7E14; /* je: equal / zero */

loc_001B7E09: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B7E26; /* jne: not equal / not zero */

loc_001B7E14: ;
    PUSH32(esp, 0x1DF260);
    PUSH32(esp, 0x001B7E1Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B7E1E: ;
    eax = MEM32(0x5BB14C);
    esp = esp + 4;

loc_001B7E26: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B7E30
 * Original: 0x001B7E30 - 0x001B7E57 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7E30: ;
    eax = MEM32(0x5BB17C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7E44; /* je: equal / zero */

loc_001B7E39: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B7E56; /* jne: not equal / not zero */

loc_001B7E44: ;
    PUSH32(esp, 0x1B8A20);
    PUSH32(esp, 0x001B7E4Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B7E4E: ;
    eax = MEM32(0x5BB17C);
    esp = esp + 4;

loc_001B7E56: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B7E60
 * Original: 0x001B7E60 - 0x001B7E87 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7E60: ;
    eax = MEM32(0x5BB180);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7E74; /* je: equal / zero */

loc_001B7E69: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B7E86; /* jne: not equal / not zero */

loc_001B7E74: ;
    PUSH32(esp, 0x1B8A60);
    PUSH32(esp, 0x001B7E7Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B7E7E: ;
    eax = MEM32(0x5BB180);
    esp = esp + 4;

loc_001B7E86: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B7E90
 * Original: 0x001B7E90 - 0x001B7EB7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7E90: ;
    eax = MEM32(0x5BB184);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7EA4; /* je: equal / zero */

loc_001B7E99: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B7EB6; /* jne: not equal / not zero */

loc_001B7EA4: ;
    PUSH32(esp, 0x1DF960);
    PUSH32(esp, 0x001B7EAEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B7EAE: ;
    eax = MEM32(0x5BB184);
    esp = esp + 4;

loc_001B7EB6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B7EC0
 * Original: 0x001B7EC0 - 0x001B7EE7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7EC0: ;
    eax = MEM32(0x5BB18C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7ED4; /* je: equal / zero */

loc_001B7EC9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B7EE6; /* jne: not equal / not zero */

loc_001B7ED4: ;
    PUSH32(esp, 0x1DA4A0);
    PUSH32(esp, 0x001B7EDEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B7EDE: ;
    eax = MEM32(0x5BB18C);
    esp = esp + 4;

loc_001B7EE6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B7EF0
 * Original: 0x001B7EF0 - 0x001B7F17 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7EF0: ;
    eax = MEM32(0x5BB198);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7F04; /* je: equal / zero */

loc_001B7EF9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B7F16; /* jne: not equal / not zero */

loc_001B7F04: ;
    PUSH32(esp, 0x1DEC90);
    PUSH32(esp, 0x001B7F0Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B7F0E: ;
    eax = MEM32(0x5BB198);
    esp = esp + 4;

loc_001B7F16: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B7F20
 * Original: 0x001B7F20 - 0x001B7F47 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7F20: ;
    eax = MEM32(0x5BB1B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7F34; /* je: equal / zero */

loc_001B7F29: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B7F46; /* jne: not equal / not zero */

loc_001B7F34: ;
    PUSH32(esp, 0x1DF320);
    PUSH32(esp, 0x001B7F3Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B7F3E: ;
    eax = MEM32(0x5BB1B4);
    esp = esp + 4;

loc_001B7F46: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B7F50
 * Original: 0x001B7F50 - 0x001B7F77 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7F50: ;
    eax = MEM32(0x5BB1AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7F64; /* je: equal / zero */

loc_001B7F59: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B7F76; /* jne: not equal / not zero */

loc_001B7F64: ;
    PUSH32(esp, 0x1DFB20);
    PUSH32(esp, 0x001B7F6Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B7F6E: ;
    eax = MEM32(0x5BB1AC);
    esp = esp + 4;

loc_001B7F76: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B7F80
 * Original: 0x001B7F80 - 0x001B7FA7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7F80: ;
    eax = MEM32(0x5BB1A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7F94; /* je: equal / zero */

loc_001B7F89: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B7FA6; /* jne: not equal / not zero */

loc_001B7F94: ;
    PUSH32(esp, 0x1E1870);
    PUSH32(esp, 0x001B7F9Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B7F9E: ;
    eax = MEM32(0x5BB1A0);
    esp = esp + 4;

loc_001B7FA6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B7FB0
 * Original: 0x001B7FB0 - 0x001B7FD7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7FB0: ;
    eax = MEM32(0x5BB1C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7FC4; /* je: equal / zero */

loc_001B7FB9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B7FD6; /* jne: not equal / not zero */

loc_001B7FC4: ;
    PUSH32(esp, 0x1DEC00);
    PUSH32(esp, 0x001B7FCEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B7FCE: ;
    eax = MEM32(0x5BB1C8);
    esp = esp + 4;

loc_001B7FD6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B7FE0
 * Original: 0x001B7FE0 - 0x001B8007 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B7FE0: ;
    eax = MEM32(0x5BB1CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B7FF4; /* je: equal / zero */

loc_001B7FE9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B8006; /* jne: not equal / not zero */

loc_001B7FF4: ;
    PUSH32(esp, 0x1DCCA0);
    PUSH32(esp, 0x001B7FFEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B7FFE: ;
    eax = MEM32(0x5BB1CC);
    esp = esp + 4;

loc_001B8006: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8010
 * Original: 0x001B8010 - 0x001B8037 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8010: ;
    eax = MEM32(0x5BB1D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B8024; /* je: equal / zero */

loc_001B8019: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B8036; /* jne: not equal / not zero */

loc_001B8024: ;
    PUSH32(esp, 0x1E18D0);
    PUSH32(esp, 0x001B802Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B802E: ;
    eax = MEM32(0x5BB1D8);
    esp = esp + 4;

loc_001B8036: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8040
 * Original: 0x001B8040 - 0x001B8067 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8040: ;
    eax = MEM32(0x5BB1E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B8054; /* je: equal / zero */

loc_001B8049: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B8066; /* jne: not equal / not zero */

loc_001B8054: ;
    PUSH32(esp, 0x1DF3A0);
    PUSH32(esp, 0x001B805Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B805E: ;
    eax = MEM32(0x5BB1E0);
    esp = esp + 4;

loc_001B8066: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8070
 * Original: 0x001B8070 - 0x001B8097 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8070: ;
    eax = MEM32(0x5BB1E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B8084; /* je: equal / zero */

loc_001B8079: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B8096; /* jne: not equal / not zero */

loc_001B8084: ;
    PUSH32(esp, 0x1E5150);
    PUSH32(esp, 0x001B808Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B808E: ;
    eax = MEM32(0x5BB1E4);
    esp = esp + 4;

loc_001B8096: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B80A0
 * Original: 0x001B80A0 - 0x001B80C7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B80A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B80A0: ;
    eax = MEM32(0x5BB1F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B80B4; /* je: equal / zero */

loc_001B80A9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B80C6; /* jne: not equal / not zero */

loc_001B80B4: ;
    PUSH32(esp, 0x1E1910);
    PUSH32(esp, 0x001B80BEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B80BE: ;
    eax = MEM32(0x5BB1F4);
    esp = esp + 4;

loc_001B80C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B80D0
 * Original: 0x001B80D0 - 0x001B80F1 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B80D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B80D0: ;
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B80EB; /* je: equal / zero */

loc_001B80DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10001) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10001 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B80EB; /* je: equal / zero */

loc_001B80E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10002) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10002 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B80EB; /* je: equal / zero */

loc_001B80E8: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_001B80EB: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8100
 * Original: 0x001B8100 - 0x001B8145 (69 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8100: ;
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8142; /* je: equal / zero */

loc_001B8108: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8142; /* je: equal / zero */

loc_001B810D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8142; /* je: equal / zero */

loc_001B8112: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8142; /* je: equal / zero */

loc_001B8117: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8142; /* je: equal / zero */

loc_001B811C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8142; /* je: equal / zero */

loc_001B8121: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8142; /* je: equal / zero */

loc_001B8126: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8142; /* je: equal / zero */

loc_001B812B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8142; /* je: equal / zero */

loc_001B8130: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8142; /* je: equal / zero */

loc_001B8135: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8142; /* je: equal / zero */

loc_001B813A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x23) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x23 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8142; /* je: equal / zero */

loc_001B813F: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

loc_001B8142: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001B8150
 * Original: 0x001B8150 - 0x001B8177 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8150: ;
    eax = MEM32(0x5BB1E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B8164; /* je: equal / zero */

loc_001B8159: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B8176; /* jne: not equal / not zero */

loc_001B8164: ;
    PUSH32(esp, 0x1E1C10);
    PUSH32(esp, 0x001B816Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B816E: ;
    eax = MEM32(0x5BB1E8);
    esp = esp + 4;

loc_001B8176: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8180
 * Original: 0x001B8180 - 0x001B81A7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8180: ;
    eax = MEM32(0x5BB240);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B8194; /* je: equal / zero */

loc_001B8189: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B81A6; /* jne: not equal / not zero */

loc_001B8194: ;
    PUSH32(esp, 0x1DFA20);
    PUSH32(esp, 0x001B819Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B819E: ;
    eax = MEM32(0x5BB240);
    esp = esp + 4;

loc_001B81A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B81B0
 * Original: 0x001B81B0 - 0x001B81D7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B81B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B81B0: ;
    eax = MEM32(0x5BB244);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B81C4; /* je: equal / zero */

loc_001B81B9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B81D6; /* jne: not equal / not zero */

loc_001B81C4: ;
    PUSH32(esp, 0x1DF520);
    PUSH32(esp, 0x001B81CEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B81CE: ;
    eax = MEM32(0x5BB244);
    esp = esp + 4;

loc_001B81D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B81E0
 * Original: 0x001B81E0 - 0x001B8207 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B81E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B81E0: ;
    eax = MEM32(0x5BB248);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B81F4; /* je: equal / zero */

loc_001B81E9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B8206; /* jne: not equal / not zero */

loc_001B81F4: ;
    PUSH32(esp, 0x1DFA60);
    PUSH32(esp, 0x001B81FEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B81FE: ;
    eax = MEM32(0x5BB248);
    esp = esp + 4;

loc_001B8206: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8210
 * Original: 0x001B8210 - 0x001B8237 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8210: ;
    eax = MEM32(0x5BB24C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B8224; /* je: equal / zero */

loc_001B8219: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B8236; /* jne: not equal / not zero */

loc_001B8224: ;
    PUSH32(esp, 0x1DF560);
    PUSH32(esp, 0x001B822Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B822E: ;
    eax = MEM32(0x5BB24C);
    esp = esp + 4;

loc_001B8236: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8240
 * Original: 0x001B8240 - 0x001B8267 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8240: ;
    eax = MEM32(0x5BB250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B8254; /* je: equal / zero */

loc_001B8249: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B8266; /* jne: not equal / not zero */

loc_001B8254: ;
    PUSH32(esp, 0x1DF5A0);
    PUSH32(esp, 0x001B825Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B825E: ;
    eax = MEM32(0x5BB250);
    esp = esp + 4;

loc_001B8266: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8270
 * Original: 0x001B8270 - 0x001B8297 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8270: ;
    eax = MEM32(0x5BB258);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B8284; /* je: equal / zero */

loc_001B8279: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B8296; /* jne: not equal / not zero */

loc_001B8284: ;
    PUSH32(esp, 0x1DEC40);
    PUSH32(esp, 0x001B828Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B828E: ;
    eax = MEM32(0x5BB258);
    esp = esp + 4;

loc_001B8296: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B82A0
 * Original: 0x001B82A0 - 0x001B82C7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B82A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B82A0: ;
    eax = MEM32(0x5BB25C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B82B4; /* je: equal / zero */

loc_001B82A9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B82C6; /* jne: not equal / not zero */

loc_001B82B4: ;
    PUSH32(esp, 0x1DCCE0);
    PUSH32(esp, 0x001B82BEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B82BE: ;
    eax = MEM32(0x5BB25C);
    esp = esp + 4;

loc_001B82C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B82D0
 * Original: 0x001B82D0 - 0x001B82F7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B82D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B82D0: ;
    eax = MEM32(0x5BB264);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B82E4; /* je: equal / zero */

loc_001B82D9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B82F6; /* jne: not equal / not zero */

loc_001B82E4: ;
    PUSH32(esp, 0x1DF5E0);
    PUSH32(esp, 0x001B82EEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B82EE: ;
    eax = MEM32(0x5BB264);
    esp = esp + 4;

loc_001B82F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8300
 * Original: 0x001B8300 - 0x001B8327 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8300: ;
    eax = MEM32(0x5BB260);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B8314; /* je: equal / zero */

loc_001B8309: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B8326; /* jne: not equal / not zero */

loc_001B8314: ;
    PUSH32(esp, 0x1DFCC0);
    PUSH32(esp, 0x001B831Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B831E: ;
    eax = MEM32(0x5BB260);
    esp = esp + 4;

loc_001B8326: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8330
 * Original: 0x001B8330 - 0x001B8357 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8330: ;
    eax = MEM32(0x5BB26C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B8344; /* je: equal / zero */

loc_001B8339: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B8356; /* jne: not equal / not zero */

loc_001B8344: ;
    PUSH32(esp, 0x1DF620);
    PUSH32(esp, 0x001B834Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B834E: ;
    eax = MEM32(0x5BB26C);
    esp = esp + 4;

loc_001B8356: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8360
 * Original: 0x001B8360 - 0x001B8387 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8360: ;
    eax = MEM32(0x5BB268);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B8374; /* je: equal / zero */

loc_001B8369: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B8386; /* jne: not equal / not zero */

loc_001B8374: ;
    PUSH32(esp, 0x1DFD20);
    PUSH32(esp, 0x001B837Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B837E: ;
    eax = MEM32(0x5BB268);
    esp = esp + 4;

loc_001B8386: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8390
 * Original: 0x001B8390 - 0x001B83B7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8390: ;
    eax = MEM32(0x5BB270);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B83A4; /* je: equal / zero */

loc_001B8399: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B83B6; /* jne: not equal / not zero */

loc_001B83A4: ;
    PUSH32(esp, 0x1DF660);
    PUSH32(esp, 0x001B83AEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B83AE: ;
    eax = MEM32(0x5BB270);
    esp = esp + 4;

loc_001B83B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B83C0
 * Original: 0x001B83C0 - 0x001B83E7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B83C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B83C0: ;
    eax = MEM32(0x5BB27C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B83D4; /* je: equal / zero */

loc_001B83C9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B83E6; /* jne: not equal / not zero */

loc_001B83D4: ;
    PUSH32(esp, 0x1B9480);
    PUSH32(esp, 0x001B83DEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B83DE: ;
    eax = MEM32(0x5BB27C);
    esp = esp + 4;

loc_001B83E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B83F0
 * Original: 0x001B83F0 - 0x001B8417 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B83F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B83F0: ;
    eax = MEM32(0x5BB280);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B8404; /* je: equal / zero */

loc_001B83F9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B8416; /* jne: not equal / not zero */

loc_001B8404: ;
    PUSH32(esp, 0x1DFAE0);
    PUSH32(esp, 0x001B840Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B840E: ;
    eax = MEM32(0x5BB280);
    esp = esp + 4;

loc_001B8416: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8420
 * Original: 0x001B8420 - 0x001B8447 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8420: ;
    eax = MEM32(0x5BB284);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B8434; /* je: equal / zero */

loc_001B8429: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B8446; /* jne: not equal / not zero */

loc_001B8434: ;
    PUSH32(esp, 0x1E1AE0);
    PUSH32(esp, 0x001B843Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B843E: ;
    eax = MEM32(0x5BB284);
    esp = esp + 4;

loc_001B8446: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8450
 * Original: 0x001B8450 - 0x001B849E (78 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001B8450: ;
    SET_LO8(eax, MEM8(ecx));
    edx = MEM32(ecx);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    ecx = edx;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xC7FFB810u;
    if (0xB) _cf = (int)(((ecx) >> ((0xB) - 1)) & 1);
    ecx = ecx >> 0xB;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x380087F0)) >> 32) & 1);
    eax = eax + 0x380087F0;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    if ((ecx != 0)) goto loc_001B8475; /* jne: not equal / not zero */

loc_001B846E: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFF0000;
    goto loc_001B8490;

loc_001B8475: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001B8490; /* jae: above or equal (unsigned >=) */

loc_001B847A: ;
    PUSH32(esp, esi);
    goto loc_001B8480;

    /* nop */

loc_001B8480: ;
    esi = 0x10000;
    if (LO8(ecx)) _cf = (int)(((esi) >> (32 - (LO8(ecx)))) & 1);
    esi = esi << LO8(ecx);
    _cf = 0; /* logical op clears CF */
    eax = eax | esi;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001B8480; /* jb: below (unsigned <) */

loc_001B848F: ;
    POP32(esp, esi);

loc_001B8490: ;
    if (0x18) _cf = (int)(((edx) >> ((0x18) - 1)) & 1);
    edx = edx >> 0x18;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001B849D; /* jne: not equal / not zero */

loc_001B8498: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x6000000;

loc_001B849D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B84A0
 * Original: 0x001B84A0 - 0x001B84C7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B84A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B84A0: ;
    eax = MEM32(0x5BB2D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B84B4; /* je: equal / zero */

loc_001B84A9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B84C6; /* jne: not equal / not zero */

loc_001B84B4: ;
    PUSH32(esp, 0x1D0F80);
    PUSH32(esp, 0x001B84BEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B84BE: ;
    eax = MEM32(0x5BB2D8);
    esp = esp + 4;

loc_001B84C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B84D0
 * Original: 0x001B84D0 - 0x001B84F7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B84D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B84D0: ;
    eax = MEM32(0x5BB2D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B84E4; /* je: equal / zero */

loc_001B84D9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B84F6; /* jne: not equal / not zero */

loc_001B84E4: ;
    PUSH32(esp, 0x1DA650);
    PUSH32(esp, 0x001B84EEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B84EE: ;
    eax = MEM32(0x5BB2D4);
    esp = esp + 4;

loc_001B84F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8500
 * Original: 0x001B8500 - 0x001B8527 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8500: ;
    eax = MEM32(0x5BB2D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B8514; /* je: equal / zero */

loc_001B8509: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B8526; /* jne: not equal / not zero */

loc_001B8514: ;
    PUSH32(esp, 0x1DC300);
    PUSH32(esp, 0x001B851Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B851E: ;
    eax = MEM32(0x5BB2D0);
    esp = esp + 4;

loc_001B8526: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8530
 * Original: 0x001B8530 - 0x001B8557 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8530: ;
    eax = MEM32(0x5BB2CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B8544; /* je: equal / zero */

loc_001B8539: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B8556; /* jne: not equal / not zero */

loc_001B8544: ;
    PUSH32(esp, 0x1DDB20);
    PUSH32(esp, 0x001B854Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B854E: ;
    eax = MEM32(0x5BB2CC);
    esp = esp + 4;

loc_001B8556: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8560
 * Original: 0x001B8560 - 0x001B8587 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8560: ;
    eax = MEM32(0x5BB318);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B8574; /* je: equal / zero */

loc_001B8569: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B8586; /* jne: not equal / not zero */

loc_001B8574: ;
    PUSH32(esp, 0x1DBD20);
    PUSH32(esp, 0x001B857Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B857E: ;
    eax = MEM32(0x5BB318);
    esp = esp + 4;

loc_001B8586: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8590
 * Original: 0x001B8590 - 0x001B85B7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8590: ;
    eax = MEM32(0x5BB2C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B85A4; /* je: equal / zero */

loc_001B8599: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B85B6; /* jne: not equal / not zero */

loc_001B85A4: ;
    PUSH32(esp, 0x1DA610);
    PUSH32(esp, 0x001B85AEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B85AE: ;
    eax = MEM32(0x5BB2C8);
    esp = esp + 4;

loc_001B85B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B85C0
 * Original: 0x001B85C0 - 0x001B85E7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B85C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B85C0: ;
    eax = MEM32(0x5BB2C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B85D4; /* je: equal / zero */

loc_001B85C9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B85E6; /* jne: not equal / not zero */

loc_001B85D4: ;
    PUSH32(esp, 0x1DCD20);
    PUSH32(esp, 0x001B85DEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B85DE: ;
    eax = MEM32(0x5BB2C4);
    esp = esp + 4;

loc_001B85E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B85F0
 * Original: 0x001B85F0 - 0x001B8617 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B85F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B85F0: ;
    eax = MEM32(0x5BB2C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B8604; /* je: equal / zero */

loc_001B85F9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B8616; /* jne: not equal / not zero */

loc_001B8604: ;
    PUSH32(esp, 0x1DF6E0);
    PUSH32(esp, 0x001B860Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B860E: ;
    eax = MEM32(0x5BB2C0);
    esp = esp + 4;

loc_001B8616: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8620
 * Original: 0x001B8620 - 0x001B8647 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8620: ;
    eax = MEM32(0x5BB2BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B8634; /* je: equal / zero */

loc_001B8629: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B8646; /* jne: not equal / not zero */

loc_001B8634: ;
    PUSH32(esp, 0x1DDE10);
    PUSH32(esp, 0x001B863Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B863E: ;
    eax = MEM32(0x5BB2BC);
    esp = esp + 4;

loc_001B8646: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8650
 * Original: 0x001B8650 - 0x001B8677 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8650: ;
    eax = MEM32(0x5BB2EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B8664; /* je: equal / zero */

loc_001B8659: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B8676; /* jne: not equal / not zero */

loc_001B8664: ;
    PUSH32(esp, 0x1DA730);
    PUSH32(esp, 0x001B866Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B866E: ;
    eax = MEM32(0x5BB2EC);
    esp = esp + 4;

loc_001B8676: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8680
 * Original: 0x001B8680 - 0x001B86A7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8680: ;
    eax = MEM32(0x5BB2E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B8694; /* je: equal / zero */

loc_001B8689: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B86A6; /* jne: not equal / not zero */

loc_001B8694: ;
    PUSH32(esp, 0x1DF720);
    PUSH32(esp, 0x001B869Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B869E: ;
    eax = MEM32(0x5BB2E8);
    esp = esp + 4;

loc_001B86A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B86B0
 * Original: 0x001B86B0 - 0x001B86D7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B86B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B86B0: ;
    eax = MEM32(0x5BB2E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B86C4; /* je: equal / zero */

loc_001B86B9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B86D6; /* jne: not equal / not zero */

loc_001B86C4: ;
    PUSH32(esp, 0x1DC340);
    PUSH32(esp, 0x001B86CEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B86CE: ;
    eax = MEM32(0x5BB2E4);
    esp = esp + 4;

loc_001B86D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B86E0
 * Original: 0x001B86E0 - 0x001B8707 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B86E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B86E0: ;
    eax = MEM32(0x5BB2E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B86F4; /* je: equal / zero */

loc_001B86E9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B8706; /* jne: not equal / not zero */

loc_001B86F4: ;
    PUSH32(esp, 0x1DA6C0);
    PUSH32(esp, 0x001B86FEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B86FE: ;
    eax = MEM32(0x5BB2E0);
    esp = esp + 4;

loc_001B8706: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8710
 * Original: 0x001B8710 - 0x001B8737 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8710: ;
    eax = MEM32(0x5BB320);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B8724; /* je: equal / zero */

loc_001B8719: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B8736; /* jne: not equal / not zero */

loc_001B8724: ;
    PUSH32(esp, 0x1DF7A0);
    PUSH32(esp, 0x001B872Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B872E: ;
    eax = MEM32(0x5BB320);
    esp = esp + 4;

loc_001B8736: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8740
 * Original: 0x001B8740 - 0x001B8767 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8740: ;
    eax = MEM32(0x5BB340);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B8754; /* je: equal / zero */

loc_001B8749: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B8766; /* jne: not equal / not zero */

loc_001B8754: ;
    PUSH32(esp, 0x1DF8A0);
    PUSH32(esp, 0x001B875Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B875E: ;
    eax = MEM32(0x5BB340);
    esp = esp + 4;

loc_001B8766: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8770
 * Original: 0x001B8770 - 0x001B8797 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8770: ;
    eax = MEM32(0x5BB33C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B8784; /* je: equal / zero */

loc_001B8779: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B8796; /* jne: not equal / not zero */

loc_001B8784: ;
    PUSH32(esp, 0x1DF860);
    PUSH32(esp, 0x001B878Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B878E: ;
    eax = MEM32(0x5BB33C);
    esp = esp + 4;

loc_001B8796: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B87A0
 * Original: 0x001B87A0 - 0x001B87C7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B87A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B87A0: ;
    eax = MEM32(0x5BB338);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B87B4; /* je: equal / zero */

loc_001B87A9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B87C6; /* jne: not equal / not zero */

loc_001B87B4: ;
    PUSH32(esp, 0x1DF820);
    PUSH32(esp, 0x001B87BEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B87BE: ;
    eax = MEM32(0x5BB338);
    esp = esp + 4;

loc_001B87C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B87D0
 * Original: 0x001B87D0 - 0x001B87F4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B87D0(void)
{

loc_001B87D0: ;
    esp = esp - 8;
    ecx = esp;
    PUSH32(esp, 0x001B87DBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001B87DB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E6490;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8800
 * Original: 0x001B8800 - 0x001B8817 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8800: ;
    ecx = 0; /* xor self */
    eax = 0x467898;

loc_001B8807: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B8816; /* jne: not equal / not zero */

loc_001B880B: ;
    eax = eax + 0xC;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4679E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4679E8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B8807; /* jl: less (signed <) */

loc_001B8816: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8820
 * Original: 0x001B8820 - 0x001B8826 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8820(void)
{

loc_001B8820: ;
    eax = MEM32(0x5BB138);
    esp += 4; return; /* ret */

}

/**
 * sub_001B8830
 * Original: 0x001B8830 - 0x001B889E (110 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8830: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BB138);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001B8840u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001B8840: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x4687D0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001B8850u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001B8850: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001B8858u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001B8858: ;
    ebx = eax;
    eax = MEM32(0x5BB144);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B887C; /* jne: not equal / not zero */

loc_001B8863: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B886Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001B886E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B8874u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001B8874: ;
    esp = esp + 8;
    MEM32(0x5BB144) = eax;

loc_001B887C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4687CC);
    PUSH32(esp, 0x4687C8);
    PUSH32(esp, 0x4687C4);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x26) = 0;
    PUSH32(esp, 0x001B889Au); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001B889A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001B88A0
 * Original: 0x001B88A0 - 0x001B88BE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B88A0(void)
{

loc_001B88A0: ;
    PUSH32(esp, 0x1DDDD0);
    PUSH32(esp, 0x001B88AAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001B88AA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BB144);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B88BDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_001B88BD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B88C0
 * Original: 0x001B88C0 - 0x001B892A (106 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B88C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B88C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BB14C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001B88D0u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001B88D0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x4687E0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001B88E0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001B88E0: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001B88E8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001B88E8: ;
    ebx = eax;
    eax = MEM32(0x5BB154);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B890C; /* jne: not equal / not zero */

loc_001B88F3: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B88FEu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001B88FE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B8904u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001B8904: ;
    esp = esp + 8;
    MEM32(0x5BB154) = eax;

loc_001B890C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4687DC);
    PUSH32(esp, 0x4687D8);
    PUSH32(esp, 0x4687D4);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x001B8926u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001B8926: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001B8930
 * Original: 0x001B8930 - 0x001B89A4 (116 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8930: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B894F; /* je: equal / zero */

loc_001B893A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B894F; /* jne: not equal / not zero */

loc_001B894A: ;
    PUSH32(esp, 0x001B894Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B894F: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B896B; /* je: equal / zero */

loc_001B8956: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B896B; /* jne: not equal / not zero */

loc_001B8966: ;
    PUSH32(esp, 0x001B896Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B896B: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B8987; /* je: equal / zero */

loc_001B8972: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B8987; /* jne: not equal / not zero */

loc_001B8982: ;
    PUSH32(esp, 0x001B8987u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B8987: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B89A2; /* je: equal / zero */

loc_001B898E: ;
    ecx = MEM32(esi + -4);
    eax = esi + -8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_001B89A2; /* jne: not equal / not zero */

loc_001B899A: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B89A2u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_001B89A2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B89B0
 * Original: 0x001B89B0 - 0x001B89D2 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B89B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B89B0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B89CD; /* je: equal / zero */

loc_001B89B8: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001B89CD; /* jne: not equal / not zero */

loc_001B89C8: ;
    PUSH32(esp, 0x001B89CDu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001B89CD: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001B89E0
 * Original: 0x001B89E0 - 0x001B89E6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B89E0(void)
{

loc_001B89E0: ;
    eax = MEM32(0x5BB16C);
    esp += 4; return; /* ret */

}

/**
 * sub_001B89F0
 * Original: 0x001B89F0 - 0x001B8A13 (35 bytes, 8 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B89F0(void)
{

loc_001B89F0: ;
    ecx = MEM32(0x5BC50C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E76B8);
    PUSH32(esp, 0x001B8A02u); RECOMP_ABI_CALL(0x002304D0u, sub_002304D0); /* call 0x002304D0 */

loc_001B8A02: ;
    ecx = MEM32(0x5BA9EC);
    PUSH32(esp, 0x3E76B8);
    PUSH32(esp, 0x001B8A12u); RECOMP_ABI_CALL(0x0020E460u, sub_0020E460); /* call 0x0020E460 */

loc_001B8A12: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8A20
 * Original: 0x001B8A20 - 0x001B8A53 (51 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8A20(void)
{

loc_001B8A20: ;
    PUSH32(esp, 0x001B8A25u); RECOMP_ABI_CALL(0x001DF130u, sub_001DF130); /* call 0x001DF130 */

loc_001B8A25: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3E7B7C);
    PUSH32(esp, 0x1B7E30);
    PUSH32(esp, 0x1AA690);
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x5BB17C);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001B8A4Fu); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001B8A4F: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8A60
 * Original: 0x001B8A60 - 0x001B8A93 (51 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8A60(void)
{

loc_001B8A60: ;
    PUSH32(esp, 0x001B8A65u); RECOMP_ABI_CALL(0x001DF130u, sub_001DF130); /* call 0x001DF130 */

loc_001B8A65: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3E7B8C);
    PUSH32(esp, 0x1B7E60);
    PUSH32(esp, 0x1AA690);
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x5BB180);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001B8A8Fu); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001B8A8F: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8AA0
 * Original: 0x001B8AA0 - 0x001B8AC4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8AA0(void)
{

loc_001B8AA0: ;
    esp = esp - 8;
    ecx = esp;
    PUSH32(esp, 0x001B8AABu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001B8AAB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E67F8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8AD0
 * Original: 0x001B8AD0 - 0x001B8AE7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8AD0: ;
    ecx = 0; /* xor self */
    eax = 0x467748;

loc_001B8AD7: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B8AE6; /* jne: not equal / not zero */

loc_001B8ADB: ;
    eax = eax + 0xC;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x467898) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x467898 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B8AD7; /* jl: less (signed <) */

loc_001B8AE6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8AF0
 * Original: 0x001B8AF0 - 0x001B8AF6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8AF0(void)
{

loc_001B8AF0: ;
    eax = MEM32(0x5BB188);
    esp += 4; return; /* ret */

}

/**
 * sub_001B8B00
 * Original: 0x001B8B00 - 0x001B8B06 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8B00(void)
{

loc_001B8B00: ;
    eax = MEM32(0x5BB1A0);
    esp += 4; return; /* ret */

}

/**
 * sub_001B8B10
 * Original: 0x001B8B10 - 0x001B8BB7 (167 bytes, 50 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8B10: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BB1A0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001B8B23u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001B8B23: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x468808);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001B8B33u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001B8B33: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001B8B3Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001B8B3B: ;
    ebx = eax;
    eax = MEM32(0x5BB1AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B8B5F; /* jne: not equal / not zero */

loc_001B8B46: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B8B51u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001B8B51: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B8B57u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001B8B57: ;
    esp = esp + 8;
    MEM32(0x5BB1AC) = eax;

loc_001B8B5F: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x001B8B6Du); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001B8B6D: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = eax;
    MEM32(esp + 0x10) = 0x3F800000;
    MEM32(esp + 0x14) = 0x3F800000;
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x1C) = 0x3F800000;
    PUSH32(esp, 0x001B8B99u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_001B8B99: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4687FC);
    PUSH32(esp, 0x4687F0);
    PUSH32(esp, 0x4687E4);
    ecx = esi;
    PUSH32(esp, 0x001B8BB0u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001B8BB0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8BC0
 * Original: 0x001B8BC0 - 0x001B8BC6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8BC0(void)
{

loc_001B8BC0: ;
    eax = MEM32(0x5BB1AC);
    esp += 4; return; /* ret */

}

/**
 * sub_001B8BD0
 * Original: 0x001B8BD0 - 0x001B8BD4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8BD0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001B8BD0: ;
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001B8BE0
 * Original: 0x001B8BE0 - 0x001B8BE4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8BE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001B8BE0: ;
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
