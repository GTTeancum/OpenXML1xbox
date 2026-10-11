#include "engine/progression/talent_package_guest.h"
#include "engine/resources/pkgb_decode.h"
#include "app/build_settings.h"
/**
 * X-Men Legends - Recompiled code chunk 24
 * Functions: 250 (0x00121170 - 0x00129BA0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00121170
 * Original: 0x00121170 - 0x001211EF (127 bytes, 35 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121170(void)
{

loc_00121170: ;
    esp = esp - 0x8C;
    eax = MEM32(0x47A050);
    MEM32(esp + 0x88) = eax;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x94);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DAEB0);
    PUSH32(esp, esi);
    MEM8(esp + 0x18) = 0;
    PUSH32(esp, 0x0012119Fu); RECOMP_ABI_CALL(0x00121040u, sub_00121040); /* call 0x00121040 */

loc_0012119F: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3DAEC4);
    PUSH32(esp, esi);
    MEM8(esp + 0x1C) = 1;
    PUSH32(esp, 0x001211B4u); RECOMP_ABI_CALL(0x001211F0u, sub_001211F0); /* call 0x001211F0 */

loc_001211B4: ;
    esp = esp + 0x18;
    PUSH32(esp, 0x001211BCu); RECOMP_ABI_CALL(0x00147A40u, sub_00147A40); /* call 0x00147A40 */

loc_001211BC: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x502EE4);
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001211D9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001211D9: ;
    ecx = MEM32(esp + 0x8C);
    POP32(esp, esi);
    PUSH32(esp, 0x001211E6u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_001211E6: ;
    esp = esp + 0x8C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001211F0
 * Original: 0x001211F0 - 0x001212C3 (211 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001211F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001211F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3519F8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0012121Bu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0012121B: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    MEM32(esp + 0x28) = 0;
    PUSH32(esp, 0x00121231u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00121231: ;
    ecx = esp + 0xC;
    ebx = eax;
    MEM32(esp + 0x24) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00121244u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00121244: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001212AF; /* je: equal / zero */

loc_00121248: ;
    ecx = ebx;
    edi = 0x3CB744;
    PUSH32(esp, 0x00121254u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00121254: ;
    esi = eax;
    ecx = 5;
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0012127C; /* jne: not equal / not zero */

loc_00121261: ;
    eax = MEM32(esp + 0x34);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax) = 1;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_0012127C: ;
    ecx = ebx;
    edi = 0x3CC6B4;
    PUSH32(esp, 0x00121288u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00121288: ;
    esi = eax;
    ecx = 6;
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_001212AF; /* jne: not equal / not zero */

loc_00121295: ;
    eax = MEM32(esp + 0x34);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax) = LO8(edx);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_001212AF: ;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_001212D0
 * Original: 0x001212D0 - 0x001213AF (223 bytes, 69 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001212D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001212D0: ;
    esp = esp - 0x104;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    MEM32(esp + 0x104) = eax;
    PUSH32(esp, 0x001212E8u); RECOMP_ABI_CALL(0x0014A660u, sub_0014A660); /* call 0x0014A660 */

loc_001212E8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001212EFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001212EF: ;
    esi = MEM32(esp + 0x10C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001212FDu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_001212FD: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012133A; /* jne: not equal / not zero */

loc_00121304: ;
    PUSH32(esp, 0x3C8838);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012130Fu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_0012130F: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012133A; /* jne: not equal / not zero */

loc_00121316: ;
    PUSH32(esp, 0x3CFBD4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121321u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_00121321: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012133A; /* jne: not equal / not zero */

loc_00121328: ;
    PUSH32(esp, 0x3D2D80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121333u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_00121333: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012137F; /* jne: not equal / not zero */

loc_0012133A: ;
    PUSH32(esp, 0x3DAECC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121345u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_00121345: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00121397; /* je: equal / zero */

loc_0012134C: ;
    PUSH32(esp, 0x2F);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121354u); RECOMP_ABI_CALL(0x003426D0u, sub_003426D0); /* call 0x003426D0 */

loc_00121354: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012135Bu); RECOMP_ABI_CALL(0x00123400u, sub_00123400); /* call 0x00123400 */

loc_0012135B: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012136Bu); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_0012136B: ;
    esp = esp + 0x18;
    PUSH32(esp, 0x00121373u); RECOMP_ABI_CALL(0x00060C00u, sub_00060C00); /* call 0x00060C00 */

loc_00121373: ;
    edx = MEM32(eax);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0012137Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012137F: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x100);
    PUSH32(esp, 0x0012138Eu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0012138E: ;
    esp = esp + 0x104;
    esp += 8; return; /* ret 4 */

loc_00121397: ;
    ecx = MEM32(esp + 0x104);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    PUSH32(esp, 0x001213A6u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_001213A6: ;
    esp = esp + 0x104;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001213B0
 * Original: 0x001213B0 - 0x00121428 (120 bytes, 33 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001213B0(void)
{

loc_001213B0: ;
    esp = esp - 0x84;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x8C);
    MEM32(esp + 0x84) = eax;
    PUSH32(esp, 0x80);
    eax = esp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001213DAu); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_001213DA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001213E1u); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_001213E1: ;
    PUSH32(esp, 0x3DAEDC);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001213EEu); RECOMP_ABI_CALL(0x00123610u, sub_00123610); /* call 0x00123610 */

loc_001213EE: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001213FEu); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_001213FE: ;
    esp = esp + 0x28;
    PUSH32(esp, 0x00121406u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_00121406: ;
    edx = MEM32(eax);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00121412u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00121412: ;
    ecx = MEM32(esp + 0x84);
    POP32(esp, esi);
    PUSH32(esp, 0x0012141Fu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0012141F: ;
    esp = esp + 0x84;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121430
 * Original: 0x00121430 - 0x0012149D (109 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121430: ;
    esp = esp - 0x104;
    eax = MEM32(0x47A050);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10C);
    MEM32(esp + 0x104) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00121450u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00121450: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00121487; /* jne: not equal / not zero */

loc_00121454: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012145Au); RECOMP_ABI_CALL(0x00123400u, sub_00123400); /* call 0x00123400 */

loc_0012145A: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012146Au); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_0012146A: ;
    esp = esp + 0x10;
    PUSH32(esp, 0x00121472u); RECOMP_ABI_CALL(0x000E9E50u, sub_000E9E50); /* call 0x000E9E50 */

loc_00121472: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(0x502EE4);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00121487u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00121487: ;
    ecx = MEM32(esp + 0x104);
    POP32(esp, esi);
    PUSH32(esp, 0x00121494u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00121494: ;
    esp = esp + 0x104;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001214A0
 * Original: 0x001214A0 - 0x00121574 (212 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001214A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001214A0: ;
    eax = MEM32(ecx + 0x78);
    PUSH32(esp, esi);
    esi = ecx + 0x78;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001214CB; /* jne: not equal / not zero */

loc_001214AD: ;
    /* nop */

loc_001214B0: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012156C; /* jge: greater or equal (signed >=) */

loc_001214BF: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001214B0; /* je: equal / zero */

loc_001214CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001214D8; /* jne: not equal / not zero */

loc_001214D2: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_001214D8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001214E2; /* jne: not equal / not zero */

loc_001214DC: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_001214E2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001214EC; /* jne: not equal / not zero */

loc_001214E6: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_001214EC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001214F7; /* jne: not equal / not zero */

loc_001214F0: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001214F0; /* je: equal / zero */

loc_001214F7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012156C; /* jge: greater or equal (signed >=) */

loc_001214FC: ;
    /* nop */

loc_00121500: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012156C; /* jge: greater or equal (signed >=) */

loc_00121506: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    ecx = edx;
    ecx = ecx & 0x1F;
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00121537; /* jne: not equal / not zero */

loc_00121519: ;
    /* nop */

loc_00121520: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012156C; /* jge: greater or equal (signed >=) */

loc_0012152B: ;
    ecx = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = MEM32(esi + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00121520; /* je: equal / zero */

loc_00121537: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00121544; /* jne: not equal / not zero */

loc_0012153E: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_00121544: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012154E; /* jne: not equal / not zero */

loc_00121548: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_0012154E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00121558; /* jne: not equal / not zero */

loc_00121552: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_00121558: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00121567; /* jne: not equal / not zero */

loc_0012155C: ;
    /* nop */

loc_00121560: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00121560; /* je: equal / zero */

loc_00121567: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00121500; /* jl: less (signed <) */

loc_0012156C: ;
    MEM32(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00121580
 * Original: 0x00121580 - 0x00121654 (212 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121580: ;
    eax = MEM32(ecx + 0x3C);
    PUSH32(esp, esi);
    esi = ecx + 0x3C;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001215AB; /* jne: not equal / not zero */

loc_0012158D: ;
    /* nop */

loc_00121590: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012164C; /* jge: greater or equal (signed >=) */

loc_0012159F: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00121590; /* je: equal / zero */

loc_001215AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001215B8; /* jne: not equal / not zero */

loc_001215B2: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_001215B8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001215C2; /* jne: not equal / not zero */

loc_001215BC: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_001215C2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001215CC; /* jne: not equal / not zero */

loc_001215C6: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_001215CC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001215D7; /* jne: not equal / not zero */

loc_001215D0: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001215D0; /* je: equal / zero */

loc_001215D7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012164C; /* jge: greater or equal (signed >=) */

loc_001215DC: ;
    /* nop */

loc_001215E0: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012164C; /* jge: greater or equal (signed >=) */

loc_001215E6: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    ecx = edx;
    ecx = ecx & 0x1F;
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00121617; /* jne: not equal / not zero */

loc_001215F9: ;
    /* nop */

loc_00121600: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012164C; /* jge: greater or equal (signed >=) */

loc_0012160B: ;
    ecx = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = MEM32(esi + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00121600; /* je: equal / zero */

loc_00121617: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00121624; /* jne: not equal / not zero */

loc_0012161E: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_00121624: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012162E; /* jne: not equal / not zero */

loc_00121628: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_0012162E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00121638; /* jne: not equal / not zero */

loc_00121632: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_00121638: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00121647; /* jne: not equal / not zero */

loc_0012163C: ;
    /* nop */

loc_00121640: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00121640; /* je: equal / zero */

loc_00121647: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001215E0; /* jl: less (signed <) */

loc_0012164C: ;
    MEM32(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00121660
 * Original: 0x00121660 - 0x0012166E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121660(void)
{

loc_00121660: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00121670
 * Original: 0x00121670 - 0x0012167E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121670(void)
{

loc_00121670: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00121680
 * Original: 0x00121680 - 0x00121712 (146 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121680(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00121680: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, 0x0012168Fu); RECOMP_ABI_CALL(0x00131660u, sub_00131660); /* call 0x00131660 */

loc_0012168F: ;
    ecx = eax;
    PUSH32(esp, 0x00121696u); RECOMP_ABI_CALL(0x00131190u, sub_00131190); /* call 0x00131190 */

loc_00121696: ;
    eax = MEM32(ebp + 0x19C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001216C7; /* jle: less or equal (signed <=) */

loc_001216A2: ;
    PUSH32(esp, edi);
    edi = ebp + 0x120;
    /* nop */

loc_001216B0: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001216B8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001216B8: ;
    eax = MEM32(ebp + 0x19C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001216B0; /* jl: less (signed <) */

loc_001216C6: ;
    POP32(esp, edi);

loc_001216C7: ;
    PUSH32(esp, 0x001216CCu); RECOMP_ABI_CALL(0x0013D320u, sub_0013D320); /* call 0x0013D320 */

loc_001216CC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001216D4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001216D4: ;
    PUSH32(esp, 0x001216D9u); RECOMP_ABI_CALL(0x0012F280u, sub_0012F280); /* call 0x0012F280 */

loc_001216D9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001216E0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001216E0: ;
    PUSH32(esp, 0x001216E5u); RECOMP_ABI_CALL(0x0011EC10u, sub_0011EC10); /* call 0x0011EC10 */

loc_001216E5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x001216EDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001216ED: ;
    PUSH32(esp, 0x001216F2u); RECOMP_ABI_CALL(0x0011EC10u, sub_0011EC10); /* call 0x0011EC10 */

loc_001216F2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x001216FAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001216FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012170C; /* je: equal / zero */

loc_001216FE: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0012170Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012170C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00121720
 * Original: 0x00121720 - 0x0012177D (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121720: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0xD0) = esi;
    MEM32(ecx + 0xD4) = esi;
    MEM32(ecx + 0xD8) = esi;
    edx = 0; /* xor self */
    goto loc_00121740;

    /* nop */

loc_00121740: ;
    eax = MEM32(ecx + 0xD0);
    edi = MEM32(ecx + 0xD8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    MEM32(ecx + 0xD0) = eax;
    MEM32(ecx + 0xD8) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0012176C; /* jl: less (signed <) */

loc_0012175F: ;
    MEM32(ecx + 0xD0) = esi;
    eax = 9;
    goto loc_0012176D;

loc_0012176C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0012176D: ;
    MEM32(ecx + eax * 4 + 0xA4) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00121740; /* jl: less (signed <) */

loc_0012177A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00121780
 * Original: 0x00121780 - 0x001217DF (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121780: ;
    edx = ecx;
    eax = MEM32(edx + 0xD4);
    eax = MEM32(edx + eax * 4 + 0xA4);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0xDC;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0xD4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    MEM32(edx + 0xD4) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_001217C9; /* jl: less (signed <) */

loc_001217BF: ;
    MEM32(edx + 0xD4) = 0;

loc_001217C9: ;
    MEM32(edx + 0xD8) = MEM32(edx + 0xD8) - 1;
    _fa = (uint32_t)(MEM32(edx + 0xD8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0xE0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0xE0) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001217E0
 * Original: 0x001217E0 - 0x001217EC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001217E0(void)
{

loc_001217E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001217E8u); RECOMP_ABI_CALL(0x00121660u, sub_00121660); /* call 0x00121660 */

loc_001217E8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001217F0
 * Original: 0x001217F0 - 0x0012184D (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001217F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001217F0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x134) = esi;
    MEM32(ecx + 0x138) = esi;
    MEM32(ecx + 0x13C) = esi;
    edx = 0; /* xor self */
    goto loc_00121810;

    /* nop */

loc_00121810: ;
    eax = MEM32(ecx + 0x134);
    edi = MEM32(ecx + 0x13C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    MEM32(ecx + 0x134) = eax;
    MEM32(ecx + 0x13C) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0012183C; /* jl: less (signed <) */

loc_0012182F: ;
    MEM32(ecx + 0x134) = esi;
    eax = 0xE;
    goto loc_0012183D;

loc_0012183C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0012183D: ;
    MEM32(ecx + eax * 4 + 0xF4) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00121810; /* jl: less (signed <) */

loc_0012184A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00121850
 * Original: 0x00121850 - 0x0012185C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121850(void)
{

loc_00121850: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00121858u); RECOMP_ABI_CALL(0x00121670u, sub_00121670); /* call 0x00121670 */

loc_00121858: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00121860
 * Original: 0x00121860 - 0x001218BF (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121860: ;
    edx = ecx;
    eax = MEM32(edx + 0x138);
    eax = MEM32(edx + eax * 4 + 0xF4);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x140;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x138);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF (32-bit) */
    MEM32(edx + 0x138) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_001218A9; /* jl: less (signed <) */

loc_0012189F: ;
    MEM32(edx + 0x138) = 0;

loc_001218A9: ;
    MEM32(edx + 0x13C) = MEM32(edx + 0x13C) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x13C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x144);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x144) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001218C0
 * Original: 0x001218C0 - 0x00121906 (70 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001218C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001218C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0xC;
    ecx = 0xA;
    goto loc_001218D0;

    /* nop */

loc_001218D0: ;
    MEM32(eax) = 0;
    eax = eax + 0x10;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001218D0; /* jne: not equal / not zero */

loc_001218DC: ;
    ecx = esi + 0xA4;
    PUSH32(esp, 0x001218E7u); RECOMP_ABI_CALL(0x001217E0u, sub_001217E0); /* call 0x001217E0 */

loc_001218E7: ;
    MEM32(esi + 0xDC) = 0;
    ecx = esi;
    MEM32(esi + 0xE0) = 0;
    PUSH32(esp, 0x00121902u); RECOMP_ABI_CALL(0x00121720u, sub_00121720); /* call 0x00121720 */

loc_00121902: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00121910
 * Original: 0x00121910 - 0x00121956 (70 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121910: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0xC;
    ecx = 0xF;
    goto loc_00121920;

    /* nop */

loc_00121920: ;
    MEM32(eax) = 0;
    eax = eax + 0x10;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00121920; /* jne: not equal / not zero */

loc_0012192C: ;
    ecx = esi + 0xF4;
    PUSH32(esp, 0x00121937u); RECOMP_ABI_CALL(0x00121850u, sub_00121850); /* call 0x00121850 */

loc_00121937: ;
    MEM32(esi + 0x140) = 0;
    ecx = esi;
    MEM32(esi + 0x144) = 0;
    PUSH32(esp, 0x00121952u); RECOMP_ABI_CALL(0x001217F0u, sub_001217F0); /* call 0x001217F0 */

loc_00121952: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00121960
 * Original: 0x00121960 - 0x00121965 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121960(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00121960: ;
    g_seh_ebp = ebp; sub_001214A0(); return; /* tail jmp 0x001214A0 */

}

/**
 * sub_00121970
 * Original: 0x00121970 - 0x0012197C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121970(void)
{

loc_00121970: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00121978u); RECOMP_ABI_CALL(0x001218C0u, sub_001218C0); /* call 0x001218C0 */

loc_00121978: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00121980
 * Original: 0x00121980 - 0x001219F0 (112 bytes, 42 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121980: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001219AF; /* je: equal / zero */

loc_0012198C: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001219AF; /* je: equal / zero */

loc_00121991: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121997u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00121997: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001219A2u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_001219A2: ;
    ecx = eax;
    PUSH32(esp, 0x001219A9u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_001219A9: ;
    MEM32(esp + 0xC) = eax;
    goto loc_001219B7;

loc_001219AF: ;
    MEM32(esp + 0xC) = 0;

loc_001219B7: ;
    eax = MEM32(edi + 8);
    esi = edi + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001219CAu); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_001219CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001219D5; /* jne: not equal / not zero */

loc_001219D1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001219E9; /* je: equal / zero */

loc_001219D5: ;
    edx = MEM32(esi + eax * 4 + 0xF0);
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(eax) = edx;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001219E9: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001219F0
 * Original: 0x001219F0 - 0x00121A5E (110 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001219F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001219F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00121A1F; /* je: equal / zero */

loc_001219FC: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121A1F; /* je: equal / zero */

loc_00121A01: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121A07u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00121A07: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121A12u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00121A12: ;
    ecx = eax;
    PUSH32(esp, 0x00121A19u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00121A19: ;
    MEM32(esp + 0xC) = eax;
    goto loc_00121A27;

loc_00121A1F: ;
    MEM32(esp + 0xC) = 0;

loc_00121A27: ;
    eax = MEM32(edi + 0x1A4);
    esi = edi + 0x1A0;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00121A40u); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_00121A40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121A4B; /* jne: not equal / not zero */

loc_00121A47: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121A57; /* je: equal / zero */

loc_00121A4B: ;
    eax = MEM32(esi + eax * 4 + 0x154);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00121A57: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121A60
 * Original: 0x00121A60 - 0x00121B82 (290 bytes, 84 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121A60: ;
    /* Loose mode enters the native packagedef branch, never an FB shortcut. */
    if (xml1_prefer_files_loose()) { eax=0; esp+=12; return; }
    esp = esp - 0x144;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    PUSH32(esp, 0x80);
    MEM32(esp + 0x148) = eax;
    eax = esp + 0x48;
    PUSH32(esp, 0x3DAEE8);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00121A89u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00121A89: ;
    ecx = MEM32(esp + 0x158);
    esp = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esp + 0x48;
    MEM8(esp + 0xC7) = 0;
    PUSH32(esp, 0x00121AA5u); RECOMP_ABI_CALL(0x0005EAB0u, sub_0005EAB0); /* call 0x0005EAB0 */

loc_00121AA5: ;
    PUSH32(esp, 0x3DAEE4);
    ecx = esp + 0x48;
    PUSH32(esp, 0x00121AB3u); RECOMP_ABI_CALL(0x0005EAB0u, sub_0005EAB0); /* call 0x0005EAB0 */

loc_00121AB3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00121ABAu); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_00121ABA: ;
    edx = MEM32(eax);
    esp = esp + 4;
    ecx = esp + 0x44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00121AC9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00121AC9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00121AE3; /* jne: not equal / not zero */

loc_00121ACD: ;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x140);
    PUSH32(esp, 0x00121ADAu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00121ADA: ;
    esp = esp + 0x144;
    esp += 12; return; /* ret 8 */

loc_00121AE3: ;
    PUSH32(esp, 0);
    MEM8(esp + 0xC8) = 0;
    MEM8(esp + 8) = 0;
    PUSH32(esp, 0x00121AF7u); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_00121AF7: ;
    edx = MEM32(eax);
    esp = esp + 4;
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0xC8;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00121B0Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00121B0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00121B6A; /* je: equal / zero */

loc_00121B12: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00121B1Eu); RECOMP_ABI_CALL(0x001219F0u, sub_001219F0); /* call 0x001219F0 */

loc_00121B1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00121B30; /* je: equal / zero */

loc_00121B22: ;
    edx = MEM32(eax);
    ecx = esp + 0xC4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00121B30u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00121B30: ;
    PUSH32(esp, 0x00121B35u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_00121B35: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C806C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00121B48u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00121B48: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00121B4Fu); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_00121B4F: ;
    edx = MEM32(eax);
    esp = esp + 4;
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0xC8;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00121B66u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00121B66: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00121B12; /* jne: not equal / not zero */

loc_00121B6A: ;
    ecx = MEM32(esp + 0x144);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    PUSH32(esp, 0x00121B79u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00121B79: ;
    esp = esp + 0x144;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00121B90
 * Original: 0x00121B90 - 0x00121D7B (491 bytes, 154 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121B90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00121B90: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351A28);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    ebp = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00121BBF; /* je: equal / zero */

loc_00121BB7: ;
    ecx = MEM32(eax);
    MEM32(0x502EE4) = ecx;

loc_00121BBF: ;
    esi = MEM32(esp + 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x00121BCFu); RECOMP_ABI_CALL(0x00121A60u, sub_00121A60); /* call 0x00121A60 */

loc_00121BCF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121BE9; /* je: equal / zero */

loc_00121BD3: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x64);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x70;
    esp += 12; return; /* ret 8 */

loc_00121BE9: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DAEE8);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00121BF9u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00121BF9: ;
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    MEM32(esp + 0x7C) = ebx;
    PUSH32(esp, 0x00121C07u); RECOMP_ABI_CALL(0x001259D0u, sub_001259D0); /* call 0x001259D0 */

loc_00121C07: ;
    PUSH32(esp, 0x3DAF00);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00121C15u); RECOMP_ABI_CALL(0x001259D0u, sub_001259D0); /* call 0x001259D0 */

loc_00121C15: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esp + 0x30;
    PUSH32(esp, 0x00121C23u); RECOMP_ABI_CALL(0x001273D0u, sub_001273D0); /* call 0x001273D0 */

loc_00121C23: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    MEM8(esp + 0x84) = 1;
    PUSH32(esp, 0x00121C3Cu); RECOMP_ABI_CALL(0x00127510u, sub_00127510); /* call 0x00127510 */

loc_00121C3C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00121C74; /* jne: not equal / not zero */

loc_00121C40: ;
    ecx = esp + 0x2C;
    MEM8(esp + 0x78) = LO8(ebx);
    PUSH32(esp, 0x00121C4Du); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_00121C4D: ;
    ecx = esp + 0xC;
    MEM32(esp + 0x78) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00121C5Eu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00121C5E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x64);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x70;
    esp += 12; return; /* ret 8 */

loc_00121C74: ;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DAEF4);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00121C85u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00121C85: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esp + 0x34;
    MEM8(esp + 0x80) = 2;
    PUSH32(esp, 0x00121C9Bu); RECOMP_ABI_CALL(0x00125F00u, sub_00125F00); /* call 0x00125F00 */

loc_00121C9B: ;
    ecx = esp + 0x20;
    edi = eax;
    MEM8(esp + 0x7C) = 1;
    PUSH32(esp, 0x00121CABu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00121CAB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121CE4; /* jne: not equal / not zero */

loc_00121CAF: ;
    ecx = esp + 0x30;
    MEM8(esp + 0x7C) = LO8(ebx);
    PUSH32(esp, 0x00121CBCu); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_00121CBC: ;
    ecx = esp + 0x10;
    MEM32(esp + 0x7C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00121CCDu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00121CCD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x64);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x70;
    esp += 12; return; /* ret 8 */

loc_00121CE4: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00121CECu); RECOMP_ABI_CALL(0x00125F40u, sub_00125F40); /* call 0x00125F40 */

loc_00121CEC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121D46; /* je: equal / zero */

loc_00121CF2: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x00121CFAu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00121CFA: ;
    if (xml1_talent_package_load(esi, eax)) goto loc_00121D22;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121D38; /* je: equal / zero */

loc_00121CFE: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00121D06u); RECOMP_ABI_CALL(0x001219F0u, sub_001219F0); /* call 0x001219F0 */

loc_00121D06: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121D22; /* je: equal / zero */

loc_00121D0A: ;
    edx = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & esi;
    if ((ecx == 0)) goto loc_00121D22; /* je: equal / zero */

loc_00121D1A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00121D22u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00121D22: ;
    PUSH32(esp, 0x00121D27u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_00121D27: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3C806C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00121D38u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00121D38: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00121D40u); RECOMP_ABI_CALL(0x00125F40u, sub_00125F40); /* call 0x00125F40 */

loc_00121D40: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121CF2; /* jne: not equal / not zero */

loc_00121D46: ;
    ecx = esp + 0x30;
    MEM8(esp + 0x7C) = LO8(ebx);
    PUSH32(esp, 0x00121D53u); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_00121D53: ;
    ecx = esp + 0x10;
    MEM32(esp + 0x7C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00121D64u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00121D64: ;
    ecx = MEM32(esp + 0x74);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x70;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00121D80
 * Original: 0x00121D80 - 0x00121D92 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121D80(void)
{

loc_00121D80: ;
    edx = MEM32(esp + 4);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00121D8Fu); RECOMP_ABI_CALL(0x00121B90u, sub_00121B90); /* call 0x00121B90 */

loc_00121D8F: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00121DA0
 * Original: 0x00121DA0 - 0x00121DC3 (35 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121DA0(void)
{

loc_00121DA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi + 4) = 0x3FFFFFFF;
    MEM32(esi + 8) = 0xFFFFFFFFu;
    MEM32(esi) = 0x3DAF0C;
    PUSH32(esp, 0x00121DBFu); RECOMP_ABI_CALL(0x00121970u, sub_00121970); /* call 0x00121970 */

loc_00121DBF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00121DD0
 * Original: 0x00121DD0 - 0x00121DD8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121DD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00121DD0: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_00121DE0(); return; /* tail jmp 0x00121DE0 */

}

/**
 * sub_00121DE0
 * Original: 0x00121DE0 - 0x00121E52 (114 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121DE0: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0xDC;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0xD0);
    edi = MEM32(eax + 0xD8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    MEM32(eax + 0xD0) = ecx;
    MEM32(eax + 0xD8) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00121E38; /* jl: less (signed <) */

loc_00121E27: ;
    MEM32(eax + 0xD0) = 0;
    ecx = 9;
    goto loc_00121E39;

loc_00121E38: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00121E39: ;
    MEM32(eax + ecx * 4 + 0xA4) = esi;
    ecx = MEM32(eax + 0xE0);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0xE0) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121E60
 * Original: 0x00121E60 - 0x00121E68 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121E60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00121E60: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_00121E70(); return; /* tail jmp 0x00121E70 */

}

/**
 * sub_00121E70
 * Original: 0x00121E70 - 0x00121EE2 (114 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121E70: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x140;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x134);
    edi = MEM32(eax + 0x13C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF (32-bit) */
    MEM32(eax + 0x134) = ecx;
    MEM32(eax + 0x13C) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00121EC8; /* jl: less (signed <) */

loc_00121EB7: ;
    MEM32(eax + 0x134) = 0;
    ecx = 0xE;
    goto loc_00121EC9;

loc_00121EC8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00121EC9: ;
    MEM32(eax + ecx * 4 + 0xF4) = esi;
    ecx = MEM32(eax + 0x144);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x144) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121EF0
 * Original: 0x00121EF0 - 0x00121F9A (170 bytes, 51 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121EF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xC;
    ecx = edi;
    PUSH32(esp, 0x00121EFEu); RECOMP_ABI_CALL(0x00121780u, sub_00121780); /* call 0x00121780 */

loc_00121EFE: ;
    edx = MEM32(esp + 0xC);
    edx = MEM32(edx);
    ecx = eax;
    ecx = ecx << 4;
    MEM32(ecx + edi + 0xC) = edx;
    MEM32(esi + 8) = eax;
    MEM32(ecx + esi + 0x10) = 0x3FFFFFFF;
    MEM32(ecx + esi + 0x14) = 0x3FFFFFFF;
    MEM32(ecx + esi + 0xC) = 0x7FFFFFFF;
    edi = esi + 4;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00121F33u); RECOMP_ABI_CALL(0x001994F0u, sub_001994F0); /* call 0x001994F0 */

loc_00121F33: ;
    eax = MEM32(edi);
    eax = eax << 4;
    ecx = MEM32(eax + esi + 0xC);
    eax = eax + esi + 0xC;
    ecx = ecx & 0xBFFFFFFFu;
    MEM32(eax) = ecx;
    ecx = MEM32(edi);
    ecx = ecx << 4;
    edx = MEM32(ecx + esi + 0xC);
    eax = ecx + esi + 0xC;
    edx = edx & 0x40000000;
    edx = edx | 0x3FFFFFFF;
    MEM32(eax) = edx;
    ecx = MEM32(esi + 8);
    eax = esi + ecx * 4 + 0xF0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00121F79; /* je: equal / zero */

loc_00121F71: ;
    edx = MEM32(esp + 0x10);
    edx = MEM32(edx);
    MEM32(eax) = edx;

loc_00121F79: ;
    eax = ecx;
    ecx = ecx & 0x1F;
    edx = 1;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = esi + eax * 4 + 0x118;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00121FA0
 * Original: 0x00121FA0 - 0x0012204A (170 bytes, 51 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121FA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xC;
    ecx = edi;
    PUSH32(esp, 0x00121FAEu); RECOMP_ABI_CALL(0x00121860u, sub_00121860); /* call 0x00121860 */

loc_00121FAE: ;
    edx = MEM32(esp + 0xC);
    edx = MEM32(edx);
    ecx = eax;
    ecx = ecx << 4;
    MEM32(ecx + edi + 0xC) = edx;
    MEM32(esi + 8) = eax;
    MEM32(ecx + esi + 0x10) = 0x3FFFFFFF;
    MEM32(ecx + esi + 0x14) = 0x3FFFFFFF;
    MEM32(ecx + esi + 0xC) = 0x7FFFFFFF;
    edi = esi + 4;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00121FE3u); RECOMP_ABI_CALL(0x001994F0u, sub_001994F0); /* call 0x001994F0 */

loc_00121FE3: ;
    eax = MEM32(edi);
    eax = eax << 4;
    ecx = MEM32(eax + esi + 0xC);
    eax = eax + esi + 0xC;
    ecx = ecx & 0xBFFFFFFFu;
    MEM32(eax) = ecx;
    ecx = MEM32(edi);
    ecx = ecx << 4;
    edx = MEM32(ecx + esi + 0xC);
    eax = ecx + esi + 0xC;
    edx = edx & 0x40000000;
    edx = edx | 0x3FFFFFFF;
    MEM32(eax) = edx;
    ecx = MEM32(esi + 8);
    eax = esi + ecx * 4 + 0x154;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00122029; /* je: equal / zero */

loc_00122021: ;
    edx = MEM32(esp + 0x10);
    edx = MEM32(edx);
    MEM32(eax) = edx;

loc_00122029: ;
    eax = ecx;
    ecx = ecx & 0x1F;
    edx = 1;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = esi + eax * 4 + 0x190;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00122050
 * Original: 0x00122050 - 0x001220DC (140 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122050: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0012205Fu); RECOMP_ABI_CALL(0x001219F0u, sub_001219F0); /* call 0x001219F0 */

loc_0012205F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001220D6; /* jne: not equal / not zero */

loc_00122063: ;
    eax = MEM32(esi + 0x19C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001220D6; /* jge: greater or equal (signed >=) */

loc_0012206E: ;
    PUSH32(esp, ebx);
    ebx = eax;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x198;
    MEM32(esi + 0x19C) = ebx;
    ecx = eax;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(edx);
    eax = esi + eax * 8 + 0x120;
    ecx = ecx | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_001220AD; /* je: equal / zero */

loc_001220A5: ;
    MEM32(eax) = 0x3DAE0C;
    goto loc_001220AF;

loc_001220AD: ;
    eax = 0; /* xor self */

loc_001220AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001220D6; /* je: equal / zero */

loc_001220B7: ;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x001220C1u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_001220C1: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi + 0x1A0;
    PUSH32(esp, 0x001220D6u); RECOMP_ABI_CALL(0x00121FA0u, sub_00121FA0); /* call 0x00121FA0 */

loc_001220D6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001220E0
 * Original: 0x001220E0 - 0x001221B3 (211 bytes, 63 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001220E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001220E0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351A51);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x00122104u); RECOMP_ABI_CALL(0x001219F0u, sub_001219F0); /* call 0x001219F0 */

loc_00122104: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001221A0; /* jne: not equal / not zero */

loc_0012210C: ;
    eax = MEM32(esi + 0x19C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001221A0; /* jge: greater or equal (signed >=) */

loc_0012211B: ;
    PUSH32(esp, edi);
    edi = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x198;
    MEM32(esi + 0x19C) = edi;
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    ecx = ecx | edi;
    edi = esi + eax * 8 + 0x120;
    MEM32(edx) = ecx;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0xC) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x18) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0012216E; /* je: equal / zero */

loc_00122161: ;
    MEM32(edi) = 0x3DADCC;
    PUSH32(esp, 0x0012216Cu); RECOMP_ABI_CALL(0x0012F280u, sub_0012F280); /* call 0x0012F280 */

loc_0012216C: ;
    goto loc_00122170;

loc_0012216E: ;
    edi = 0; /* xor self */

loc_00122170: ;
    MEM32(esp + 0x20) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_001221A0; /* je: equal / zero */

loc_00122181: ;
    PUSH32(esp, ebx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0012218Bu); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_0012218B: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi + 0x1A0;
    PUSH32(esp, 0x001221A0u); RECOMP_ABI_CALL(0x00121FA0u, sub_00121FA0); /* call 0x00121FA0 */

loc_001221A0: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001221C0
 * Original: 0x001221C0 - 0x00122293 (211 bytes, 63 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001221C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001221C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351A51);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x001221E4u); RECOMP_ABI_CALL(0x001219F0u, sub_001219F0); /* call 0x001219F0 */

loc_001221E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00122280; /* jne: not equal / not zero */

loc_001221EC: ;
    eax = MEM32(esi + 0x19C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00122280; /* jge: greater or equal (signed >=) */

loc_001221FB: ;
    PUSH32(esp, edi);
    edi = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x198;
    MEM32(esi + 0x19C) = edi;
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    ecx = ecx | edi;
    edi = esi + eax * 8 + 0x120;
    MEM32(edx) = ecx;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0xC) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x18) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0012224E; /* je: equal / zero */

loc_00122241: ;
    MEM32(edi) = 0x3DAEA0;
    PUSH32(esp, 0x0012224Cu); RECOMP_ABI_CALL(0x001326E0u, sub_001326E0); /* call 0x001326E0 */

loc_0012224C: ;
    goto loc_00122250;

loc_0012224E: ;
    edi = 0; /* xor self */

loc_00122250: ;
    MEM32(esp + 0x20) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00122280; /* je: equal / zero */

loc_00122261: ;
    PUSH32(esp, ebx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0012226Bu); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_0012226B: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi + 0x1A0;
    PUSH32(esp, 0x00122280u); RECOMP_ABI_CALL(0x00121FA0u, sub_00121FA0); /* call 0x00121FA0 */

loc_00122280: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001222A0
 * Original: 0x001222A0 - 0x00122373 (211 bytes, 63 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001222A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001222A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351A51);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x001222C4u); RECOMP_ABI_CALL(0x001219F0u, sub_001219F0); /* call 0x001219F0 */

loc_001222C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00122360; /* jne: not equal / not zero */

loc_001222CC: ;
    eax = MEM32(esi + 0x19C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00122360; /* jge: greater or equal (signed >=) */

loc_001222DB: ;
    PUSH32(esp, edi);
    edi = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x198;
    MEM32(esi + 0x19C) = edi;
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    ecx = ecx | edi;
    edi = esi + eax * 8 + 0x120;
    MEM32(edx) = ecx;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0xC) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x18) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0012232E; /* je: equal / zero */

loc_00122321: ;
    MEM32(edi) = 0x3DADEC;
    PUSH32(esp, 0x0012232Cu); RECOMP_ABI_CALL(0x00147A40u, sub_00147A40); /* call 0x00147A40 */

loc_0012232C: ;
    goto loc_00122330;

loc_0012232E: ;
    edi = 0; /* xor self */

loc_00122330: ;
    MEM32(esp + 0x20) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00122360; /* je: equal / zero */

loc_00122341: ;
    PUSH32(esp, ebx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0012234Bu); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_0012234B: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi + 0x1A0;
    PUSH32(esp, 0x00122360u); RECOMP_ABI_CALL(0x00121FA0u, sub_00121FA0); /* call 0x00121FA0 */

loc_00122360: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00122380
 * Original: 0x00122380 - 0x0012240C (140 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122380: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0012238Fu); RECOMP_ABI_CALL(0x001219F0u, sub_001219F0); /* call 0x001219F0 */

loc_0012238F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00122406; /* jne: not equal / not zero */

loc_00122393: ;
    eax = MEM32(esi + 0x19C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00122406; /* jge: greater or equal (signed >=) */

loc_0012239E: ;
    PUSH32(esp, ebx);
    ebx = eax;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x198;
    MEM32(esi + 0x19C) = ebx;
    ecx = eax;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(edx);
    eax = esi + eax * 8 + 0x120;
    ecx = ecx | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_001223DD; /* je: equal / zero */

loc_001223D5: ;
    MEM32(eax) = 0x3DAE1C;
    goto loc_001223DF;

loc_001223DD: ;
    eax = 0; /* xor self */

loc_001223DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00122406; /* je: equal / zero */

loc_001223E7: ;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x001223F1u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_001223F1: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi + 0x1A0;
    PUSH32(esp, 0x00122406u); RECOMP_ABI_CALL(0x00121FA0u, sub_00121FA0); /* call 0x00121FA0 */

loc_00122406: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00122410
 * Original: 0x00122410 - 0x001224E3 (211 bytes, 63 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122410: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351A51);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x00122434u); RECOMP_ABI_CALL(0x001219F0u, sub_001219F0); /* call 0x001219F0 */

loc_00122434: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001224D0; /* jne: not equal / not zero */

loc_0012243C: ;
    eax = MEM32(esi + 0x19C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001224D0; /* jge: greater or equal (signed >=) */

loc_0012244B: ;
    PUSH32(esp, edi);
    edi = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x198;
    MEM32(esi + 0x19C) = edi;
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    ecx = ecx | edi;
    edi = esi + eax * 8 + 0x120;
    MEM32(edx) = ecx;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0xC) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x18) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0012249E; /* je: equal / zero */

loc_00122491: ;
    MEM32(edi) = 0x3DADDC;
    PUSH32(esp, 0x0012249Cu); RECOMP_ABI_CALL(0x0013D320u, sub_0013D320); /* call 0x0013D320 */

loc_0012249C: ;
    goto loc_001224A0;

loc_0012249E: ;
    edi = 0; /* xor self */

loc_001224A0: ;
    MEM32(esp + 0x20) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_001224D0; /* je: equal / zero */

loc_001224B1: ;
    PUSH32(esp, ebx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x001224BBu); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_001224BB: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi + 0x1A0;
    PUSH32(esp, 0x001224D0u); RECOMP_ABI_CALL(0x00121FA0u, sub_00121FA0); /* call 0x00121FA0 */

loc_001224D0: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001224F0
 * Original: 0x001224F0 - 0x0012257C (140 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001224F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001224F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001224FFu); RECOMP_ABI_CALL(0x001219F0u, sub_001219F0); /* call 0x001219F0 */

loc_001224FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00122576; /* jne: not equal / not zero */

loc_00122503: ;
    eax = MEM32(esi + 0x19C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00122576; /* jge: greater or equal (signed >=) */

loc_0012250E: ;
    PUSH32(esp, ebx);
    ebx = eax;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x198;
    MEM32(esi + 0x19C) = ebx;
    ecx = eax;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(edx);
    eax = esi + eax * 8 + 0x120;
    ecx = ecx | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0012254D; /* je: equal / zero */

loc_00122545: ;
    MEM32(eax) = 0x3DAE2C;
    goto loc_0012254F;

loc_0012254D: ;
    eax = 0; /* xor self */

loc_0012254F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00122576; /* je: equal / zero */

loc_00122557: ;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00122561u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_00122561: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi + 0x1A0;
    PUSH32(esp, 0x00122576u); RECOMP_ABI_CALL(0x00121FA0u, sub_00121FA0); /* call 0x00121FA0 */

loc_00122576: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00122580
 * Original: 0x00122580 - 0x0012260C (140 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122580: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0012258Fu); RECOMP_ABI_CALL(0x001219F0u, sub_001219F0); /* call 0x001219F0 */

loc_0012258F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00122606; /* jne: not equal / not zero */

loc_00122593: ;
    eax = MEM32(esi + 0x19C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00122606; /* jge: greater or equal (signed >=) */

loc_0012259E: ;
    PUSH32(esp, ebx);
    ebx = eax;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x198;
    MEM32(esi + 0x19C) = ebx;
    ecx = eax;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(edx);
    eax = esi + eax * 8 + 0x120;
    ecx = ecx | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_001225DD; /* je: equal / zero */

loc_001225D5: ;
    MEM32(eax) = 0x3DAE40;
    goto loc_001225DF;

loc_001225DD: ;
    eax = 0; /* xor self */

loc_001225DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00122606; /* je: equal / zero */

loc_001225E7: ;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x001225F1u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_001225F1: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi + 0x1A0;
    PUSH32(esp, 0x00122606u); RECOMP_ABI_CALL(0x00121FA0u, sub_00121FA0); /* call 0x00121FA0 */

loc_00122606: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00122610
 * Original: 0x00122610 - 0x0012269C (140 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122610: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0012261Fu); RECOMP_ABI_CALL(0x001219F0u, sub_001219F0); /* call 0x001219F0 */

loc_0012261F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00122696; /* jne: not equal / not zero */

loc_00122623: ;
    eax = MEM32(esi + 0x19C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00122696; /* jge: greater or equal (signed >=) */

loc_0012262E: ;
    PUSH32(esp, ebx);
    ebx = eax;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x198;
    MEM32(esi + 0x19C) = ebx;
    ecx = eax;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(edx);
    eax = esi + eax * 8 + 0x120;
    ecx = ecx | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0012266D; /* je: equal / zero */

loc_00122665: ;
    MEM32(eax) = 0x3DAE54;
    goto loc_0012266F;

loc_0012266D: ;
    eax = 0; /* xor self */

loc_0012266F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00122696; /* je: equal / zero */

loc_00122677: ;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00122681u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_00122681: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi + 0x1A0;
    PUSH32(esp, 0x00122696u); RECOMP_ABI_CALL(0x00121FA0u, sub_00121FA0); /* call 0x00121FA0 */

loc_00122696: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001226A0
 * Original: 0x001226A0 - 0x0012272C (140 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001226A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001226A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001226AFu); RECOMP_ABI_CALL(0x001219F0u, sub_001219F0); /* call 0x001219F0 */

loc_001226AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00122726; /* jne: not equal / not zero */

loc_001226B3: ;
    eax = MEM32(esi + 0x19C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00122726; /* jge: greater or equal (signed >=) */

loc_001226BE: ;
    PUSH32(esp, ebx);
    ebx = eax;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x198;
    MEM32(esi + 0x19C) = ebx;
    ecx = eax;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(edx);
    eax = esi + eax * 8 + 0x120;
    ecx = ecx | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_001226FD; /* je: equal / zero */

loc_001226F5: ;
    MEM32(eax) = 0x3DAE68;
    goto loc_001226FF;

loc_001226FD: ;
    eax = 0; /* xor self */

loc_001226FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00122726; /* je: equal / zero */

loc_00122707: ;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00122711u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_00122711: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi + 0x1A0;
    PUSH32(esp, 0x00122726u); RECOMP_ABI_CALL(0x00121FA0u, sub_00121FA0); /* call 0x00121FA0 */

loc_00122726: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00122730
 * Original: 0x00122730 - 0x001227BC (140 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122730: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0012273Fu); RECOMP_ABI_CALL(0x001219F0u, sub_001219F0); /* call 0x001219F0 */

loc_0012273F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001227B6; /* jne: not equal / not zero */

loc_00122743: ;
    eax = MEM32(esi + 0x19C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001227B6; /* jge: greater or equal (signed >=) */

loc_0012274E: ;
    PUSH32(esp, ebx);
    ebx = eax;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x198;
    MEM32(esi + 0x19C) = ebx;
    ecx = eax;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(edx);
    eax = esi + eax * 8 + 0x120;
    ecx = ecx | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0012278D; /* je: equal / zero */

loc_00122785: ;
    MEM32(eax) = 0x3DAE7C;
    goto loc_0012278F;

loc_0012278D: ;
    eax = 0; /* xor self */

loc_0012278F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001227B6; /* je: equal / zero */

loc_00122797: ;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x001227A1u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_001227A1: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi + 0x1A0;
    PUSH32(esp, 0x001227B6u); RECOMP_ABI_CALL(0x00121FA0u, sub_00121FA0); /* call 0x00121FA0 */

loc_001227B6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001227C0
 * Original: 0x001227C0 - 0x0012284C (140 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001227C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001227C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001227CFu); RECOMP_ABI_CALL(0x001219F0u, sub_001219F0); /* call 0x001219F0 */

loc_001227CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00122846; /* jne: not equal / not zero */

loc_001227D3: ;
    eax = MEM32(esi + 0x19C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00122846; /* jge: greater or equal (signed >=) */

loc_001227DE: ;
    PUSH32(esp, ebx);
    ebx = eax;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x198;
    MEM32(esi + 0x19C) = ebx;
    ecx = eax;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(edx);
    eax = esi + eax * 8 + 0x120;
    ecx = ecx | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0012281D; /* je: equal / zero */

loc_00122815: ;
    MEM32(eax) = 0x3DAE90;
    goto loc_0012281F;

loc_0012281D: ;
    eax = 0; /* xor self */

loc_0012281F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00122846; /* je: equal / zero */

loc_00122827: ;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00122831u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_00122831: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi + 0x1A0;
    PUSH32(esp, 0x00122846u); RECOMP_ABI_CALL(0x00121FA0u, sub_00121FA0); /* call 0x00121FA0 */

loc_00122846: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00122850
 * Original: 0x00122850 - 0x0012285B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122850(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00122850: ;
    ecx = ecx + 0xF0;
    g_seh_ebp = ebp; sub_000255F0(); return; /* tail jmp 0x000255F0 */

}

/**
 * sub_00122860
 * Original: 0x00122860 - 0x0012286B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122860(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00122860: ;
    ecx = ecx + 0x154;
    g_seh_ebp = ebp; sub_00121580(); return; /* tail jmp 0x00121580 */

}

/**
 * sub_00122870
 * Original: 0x00122870 - 0x001228A2 (50 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122870(void)
{

loc_00122870: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x2F4;
    MEM32(esi) = 0x3DAF6C;
    PUSH32(esp, 0x00122884u); RECOMP_ABI_CALL(0x00121580u, sub_00121580); /* call 0x00121580 */

loc_00122884: ;
    ecx = esi + 0x120;
    PUSH32(esp, 0x0012288Fu); RECOMP_ABI_CALL(0x001214A0u, sub_001214A0); /* call 0x001214A0 */

loc_0012288F: ;
    ecx = esi + 0xF4;
    PUSH32(esp, 0x0012289Au); RECOMP_ABI_CALL(0x000255F0u, sub_000255F0); /* call 0x000255F0 */

loc_0012289A: ;
    MEM32(esi) = 0x3DADFC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001228B0
 * Original: 0x001228B0 - 0x00122C8A (986 bytes, 268 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001228B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001228B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351A8F);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = esi;
    edi = esi + 4;
    MEM32(esi) = 0x3DAF6C;
    ebp = 0; /* xor self */
    ecx = edi + 0xC;
    MEM32(esp + 0x20) = ebp;
    MEM32(edi + 4) = 0x3FFFFFFF;
    MEM32(edi + 8) = 0xFFFFFFFFu;
    MEM32(edi) = 0x3DAF0C;
    PUSH32(esp, 0x001228FCu); RECOMP_ABI_CALL(0x001218C0u, sub_001218C0); /* call 0x001218C0 */

loc_001228FC: ;
    MEM32(edi + 0x118) = ebp;
    MEM32(edi) = 0x3DAF3C;
    MEM32(esi + 0x198) = ebp;
    MEM32(esi + 0x19C) = ebp;
    ecx = esi + 0x1AC;
    MEM32(esi + 0x1A4) = 0x3FFFFFFF;
    MEM32(esi + 0x1A8) = 0xFFFFFFFFu;
    MEM32(esi + 0x1A0) = 0x3DAF24;
    PUSH32(esp, 0x0012293Du); RECOMP_ABI_CALL(0x00121910u, sub_00121910); /* call 0x00121910 */

loc_0012293D: ;
    MEM32(esi + 0x330) = ebp;
    MEM32(esi + 0x1A0) = 0x3DAF54;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DAFE0);
    ecx = esi;
    MEM8(esp + 0x28) = 3;
    MEM32(esp + 0x14) = ebp;
    PUSH32(esp, 0x00122967u); RECOMP_ABI_CALL(0x00121980u, sub_00121980); /* call 0x00121980 */

loc_00122967: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ebp = 0xA;
    if (TEST_NZ(_fa, _fb)) goto loc_00122997; /* jne: not equal / not zero */

loc_00122970: ;
    _fa = (uint32_t)(MEM32(esi + 0xF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xF0), ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00122997; /* jge: greater or equal (signed >=) */

loc_00122978: ;
    PUSH32(esp, 0x3DAFE0);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00122986u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_00122986: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00122997u); RECOMP_ABI_CALL(0x00121EF0u, sub_00121EF0); /* call 0x00121EF0 */

loc_00122997: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DAFD4);
    ecx = esi;
    MEM32(esp + 0x18) = 3;
    PUSH32(esp, 0x001229B0u); RECOMP_ABI_CALL(0x00121980u, sub_00121980); /* call 0x00121980 */

loc_001229B0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001229DB; /* jne: not equal / not zero */

loc_001229B4: ;
    _fa = (uint32_t)(MEM32(esi + 0xF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xF0), ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001229DB; /* jge: greater or equal (signed >=) */

loc_001229BC: ;
    PUSH32(esp, 0x3DAFD4);
    ecx = esp + 0x10;
    PUSH32(esp, 0x001229CAu); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_001229CA: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x001229DBu); RECOMP_ABI_CALL(0x00121EF0u, sub_00121EF0); /* call 0x00121EF0 */

loc_001229DB: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DAFCC);
    ecx = esi;
    MEM32(esp + 0x18) = 8;
    PUSH32(esp, 0x001229F4u); RECOMP_ABI_CALL(0x00121980u, sub_00121980); /* call 0x00121980 */

loc_001229F4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00122A1F; /* jne: not equal / not zero */

loc_001229F8: ;
    _fa = (uint32_t)(MEM32(esi + 0xF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xF0), ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00122A1F; /* jge: greater or equal (signed >=) */

loc_00122A00: ;
    PUSH32(esp, 0x3DAFCC);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00122A0Eu); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_00122A0E: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00122A1Fu); RECOMP_ABI_CALL(0x00121EF0u, sub_00121EF0); /* call 0x00121EF0 */

loc_00122A1F: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DAFC4);
    ecx = esi;
    MEM32(esp + 0x18) = 9;
    PUSH32(esp, 0x00122A38u); RECOMP_ABI_CALL(0x00121980u, sub_00121980); /* call 0x00121980 */

loc_00122A38: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00122A63; /* jne: not equal / not zero */

loc_00122A3C: ;
    _fa = (uint32_t)(MEM32(esi + 0xF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xF0), ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00122A63; /* jge: greater or equal (signed >=) */

loc_00122A44: ;
    PUSH32(esp, 0x3DAFC4);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00122A52u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_00122A52: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00122A63u); RECOMP_ABI_CALL(0x00121EF0u, sub_00121EF0); /* call 0x00121EF0 */

loc_00122A63: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DAFBC);
    ecx = esi;
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, 0x00122A78u); RECOMP_ABI_CALL(0x00121980u, sub_00121980); /* call 0x00121980 */

loc_00122A78: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00122AA3; /* jne: not equal / not zero */

loc_00122A7C: ;
    _fa = (uint32_t)(MEM32(esi + 0xF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xF0), ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00122AA3; /* jge: greater or equal (signed >=) */

loc_00122A84: ;
    PUSH32(esp, 0x3DAFBC);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00122A92u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_00122A92: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00122AA3u); RECOMP_ABI_CALL(0x00121EF0u, sub_00121EF0); /* call 0x00121EF0 */

loc_00122AA3: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DAFB4);
    ecx = esi;
    MEM32(esp + 0x18) = 0xB;
    PUSH32(esp, 0x00122ABCu); RECOMP_ABI_CALL(0x00121980u, sub_00121980); /* call 0x00121980 */

loc_00122ABC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00122AE7; /* jne: not equal / not zero */

loc_00122AC0: ;
    _fa = (uint32_t)(MEM32(esi + 0xF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xF0), ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00122AE7; /* jge: greater or equal (signed >=) */

loc_00122AC8: ;
    PUSH32(esp, 0x3DAFB4);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00122AD6u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_00122AD6: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00122AE7u); RECOMP_ABI_CALL(0x00121EF0u, sub_00121EF0); /* call 0x00121EF0 */

loc_00122AE7: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CE9C4);
    ecx = esi;
    MEM32(esp + 0x18) = 0xC;
    PUSH32(esp, 0x00122B00u); RECOMP_ABI_CALL(0x00121980u, sub_00121980); /* call 0x00121980 */

loc_00122B00: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00122B2B; /* jne: not equal / not zero */

loc_00122B04: ;
    _fa = (uint32_t)(MEM32(esi + 0xF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xF0), ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00122B2B; /* jge: greater or equal (signed >=) */

loc_00122B0C: ;
    PUSH32(esp, 0x3CE9C4);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00122B1Au); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_00122B1A: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00122B2Bu); RECOMP_ABI_CALL(0x00121EF0u, sub_00121EF0); /* call 0x00121EF0 */

loc_00122B2B: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DAFAC);
    ecx = esi;
    MEM32(esp + 0x18) = 0xD;
    PUSH32(esp, 0x00122B44u); RECOMP_ABI_CALL(0x00121980u, sub_00121980); /* call 0x00121980 */

loc_00122B44: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00122B6F; /* jne: not equal / not zero */

loc_00122B48: ;
    _fa = (uint32_t)(MEM32(esi + 0xF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xF0), ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00122B6F; /* jge: greater or equal (signed >=) */

loc_00122B50: ;
    PUSH32(esp, 0x3DAFAC);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00122B5Eu); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_00122B5E: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00122B6Fu); RECOMP_ABI_CALL(0x00121EF0u, sub_00121EF0); /* call 0x00121EF0 */

loc_00122B6F: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DAFA0);
    ecx = esi;
    PUSH32(esp, 0x00122B80u); RECOMP_ABI_CALL(0x00122050u, sub_00122050); /* call 0x00122050 */

loc_00122B80: ;
    PUSH32(esp, 0x00122B85u); RECOMP_ABI_CALL(0x0012F280u, sub_0012F280); /* call 0x0012F280 */

loc_00122B85: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3D60FC);
    ecx = esi;
    PUSH32(esp, 0x00122B96u); RECOMP_ABI_CALL(0x001220E0u, sub_001220E0); /* call 0x001220E0 */

loc_00122B96: ;
    PUSH32(esp, 0x00122B9Bu); RECOMP_ABI_CALL(0x0012F280u, sub_0012F280); /* call 0x0012F280 */

loc_00122B9B: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3DAF94);
    ecx = esi;
    PUSH32(esp, 0x00122BACu); RECOMP_ABI_CALL(0x001220E0u, sub_001220E0); /* call 0x001220E0 */

loc_00122BAC: ;
    PUSH32(esp, 0x00122BB1u); RECOMP_ABI_CALL(0x001326E0u, sub_001326E0); /* call 0x001326E0 */

loc_00122BB1: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CB770);
    ecx = esi;
    PUSH32(esp, 0x00122BC2u); RECOMP_ABI_CALL(0x001221C0u, sub_001221C0); /* call 0x001221C0 */

loc_00122BC2: ;
    PUSH32(esp, 0x00122BC7u); RECOMP_ABI_CALL(0x00147A40u, sub_00147A40); /* call 0x00147A40 */

loc_00122BC7: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3C8508);
    ecx = esi;
    PUSH32(esp, 0x00122BD8u); RECOMP_ABI_CALL(0x001222A0u, sub_001222A0); /* call 0x001222A0 */

loc_00122BD8: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3CB6F0);
    ecx = esi;
    PUSH32(esp, 0x00122BE9u); RECOMP_ABI_CALL(0x00122380u, sub_00122380); /* call 0x00122380 */

loc_00122BE9: ;
    PUSH32(esp, 0x00122BEEu); RECOMP_ABI_CALL(0x0013D320u, sub_0013D320); /* call 0x0013D320 */

loc_00122BEE: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CD398);
    ecx = esi;
    PUSH32(esp, 0x00122BFFu); RECOMP_ABI_CALL(0x00122410u, sub_00122410); /* call 0x00122410 */

loc_00122BFF: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3C8818);
    ecx = esi;
    PUSH32(esp, 0x00122C10u); RECOMP_ABI_CALL(0x001224F0u, sub_001224F0); /* call 0x001224F0 */

loc_00122C10: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3DAF90);
    ecx = esi;
    PUSH32(esp, 0x00122C21u); RECOMP_ABI_CALL(0x001224F0u, sub_001224F0); /* call 0x001224F0 */

loc_00122C21: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DAF88);
    ecx = esi;
    PUSH32(esp, 0x00122C32u); RECOMP_ABI_CALL(0x00122580u, sub_00122580); /* call 0x00122580 */

loc_00122C32: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3D4004);
    ecx = esi;
    PUSH32(esp, 0x00122C43u); RECOMP_ABI_CALL(0x00122610u, sub_00122610); /* call 0x00122610 */

loc_00122C43: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3DAF78);
    ecx = esi;
    PUSH32(esp, 0x00122C54u); RECOMP_ABI_CALL(0x001226A0u, sub_001226A0); /* call 0x001226A0 */

loc_00122C54: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CB7E8);
    ecx = esi;
    PUSH32(esp, 0x00122C65u); RECOMP_ABI_CALL(0x00122730u, sub_00122730); /* call 0x00122730 */

loc_00122C65: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CC6C8);
    ecx = esi;
    PUSH32(esp, 0x00122C76u); RECOMP_ABI_CALL(0x001227C0u, sub_001227C0); /* call 0x001227C0 */

loc_00122C76: ;
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00122C90
 * Original: 0x00122C90 - 0x00122CAE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122C90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00122C98u); RECOMP_ABI_CALL(0x00122870u, sub_00122870); /* call 0x00122870 */

loc_00122C98: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00122CA8; /* je: equal / zero */

loc_00122C9F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00122CA5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00122CA5: ;
    esp = esp + 4;

loc_00122CA8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00122CB0
 * Original: 0x00122CB0 - 0x00122D0C (92 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122CB0: ;
    eax = MEM32(XBOX_FS_BASE);
    SET_LO8(ecx, MEM8(0x50321C));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351AAE);
    PUSH32(esp, eax);
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_00122CF9; /* jne: not equal / not zero */

loc_00122CD4: ;
    MEM32(0x50321C) = MEM32(0x50321C) | eax;
    ecx = 0x502EE8;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00122CECu); RECOMP_ABI_CALL(0x001228B0u, sub_001228B0); /* call 0x001228B0 */

loc_00122CEC: ;
    PUSH32(esp, 0x35A330);
    PUSH32(esp, 0x00122CF6u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00122CF6: ;
    esp = esp + 4;

loc_00122CF9: ;
    ecx = MEM32(esp);
    eax = 0x502EE8;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00122D10
 * Original: 0x00122D10 - 0x00122D7B (107 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122D10(void)
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

loc_00122D10: ;
    fp_push(MEMF(ecx)); /* fld float */
    edx = MEM32(esp + 4);
    fp_top() = fp_top() + MEMF(ecx + 0xC); /* fadd dword ptr [ecx + 0xc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00122D76; /* jnp: not parity */

loc_00122D22: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 0xC); /* fsub dword ptr [ecx + 0xc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00122D76; /* je: equal / zero */

loc_00122D31: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(ecx + 0xC); /* fadd dword ptr [ecx + 0xc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00122D76; /* jnp: not parity */

loc_00122D41: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 0xC); /* fsub dword ptr [ecx + 0xc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00122D76; /* je: equal / zero */

loc_00122D51: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(ecx + 0xC); /* fadd dword ptr [ecx + 0xc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00122D76; /* jnp: not parity */

loc_00122D61: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 0xC); /* fsub dword ptr [ecx + 0xc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00122D76; /* je: equal / zero */

loc_00122D71: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_00122D76: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00122D80
 * Original: 0x00122D80 - 0x00122E11 (145 bytes, 51 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122D80(void)
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

loc_00122D80: ;
    esp = esp - 0xC;
    eax = MEM32(esp + 0x10);
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = MEM32(eax + 8);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 8) = eax;
    fp_top() = fp_top() - MEMF(ecx); /* fsub dword ptr [ecx] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() - MEMF(ecx + 4); /* fsub dword ptr [ecx + 4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 8); /* fsub dword ptr [ecx + 8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00122E09; /* je: equal / zero */

loc_00122DBB: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00122E09; /* je: equal / zero */

loc_00122DCB: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00122E09; /* je: equal / zero */

loc_00122DDB: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 4); /* fmul dword ptr [esp + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = fp_top() * MEMF(esp); /* fmul dword ptr [esp] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00122E09; /* je: equal / zero */

loc_00122E01: ;
    SET_LO8(eax, 1);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_00122E09: ;
    SET_LO8(eax, 0); /* xor self */
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00122E20
 * Original: 0x00122E20 - 0x00122F7C (348 bytes, 114 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122E20: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x00122E31u); RECOMP_ABI_CALL(0x00122D10u, sub_00122D10); /* call 0x00122D10 */

loc_00122E31: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00122E3F; /* jne: not equal / not zero */

loc_00122E35: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_00122E3F: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 8);
    MEM32(esp + 8) = eax;
    eax = esp + 8;
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x00122E5Fu); RECOMP_ABI_CALL(0x00122D80u, sub_00122D80); /* call 0x00122D80 */

loc_00122E5F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00122E35; /* je: equal / zero */

loc_00122E63: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 8);
    eax = MEM32(esi + 0xC);
    MEM32(esp + 0xC) = ecx;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x00122E84u); RECOMP_ABI_CALL(0x00122D80u, sub_00122D80); /* call 0x00122D80 */

loc_00122E84: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00122E35; /* je: equal / zero */

loc_00122E88: ;
    edx = MEM32(esi);
    ecx = MEM32(esi + 0x10);
    eax = MEM32(esi + 8);
    MEM32(esp + 8) = edx;
    edx = esp + 8;
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x00122EA8u); RECOMP_ABI_CALL(0x00122D80u, sub_00122D80); /* call 0x00122D80 */

loc_00122EA8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00122E35; /* je: equal / zero */

loc_00122EAC: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x10);
    MEM32(esp + 0x10) = eax;
    eax = esp + 8;
    MEM32(esp + 8) = ecx;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x00122ECDu); RECOMP_ABI_CALL(0x00122D80u, sub_00122D80); /* call 0x00122D80 */

loc_00122ECD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00122E35; /* je: equal / zero */

loc_00122ED5: ;
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    eax = MEM32(esi + 0x14);
    MEM32(esp + 8) = ecx;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x00122EF5u); RECOMP_ABI_CALL(0x00122D80u, sub_00122D80); /* call 0x00122D80 */

loc_00122EF5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00122E35; /* je: equal / zero */

loc_00122EFD: ;
    edx = MEM32(esi + 4);
    ecx = MEM32(esi + 0x14);
    eax = MEM32(esi + 0xC);
    MEM32(esp + 0xC) = edx;
    edx = esp + 8;
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x00122F1Eu); RECOMP_ABI_CALL(0x00122D80u, sub_00122D80); /* call 0x00122D80 */

loc_00122F1E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00122E35; /* je: equal / zero */

loc_00122F26: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi + 0x14);
    MEM32(esp + 8) = eax;
    eax = esp + 8;
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x00122F46u); RECOMP_ABI_CALL(0x00122D80u, sub_00122D80); /* call 0x00122D80 */

loc_00122F46: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00122E35; /* je: equal / zero */

loc_00122F4E: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x10);
    eax = MEM32(esi + 0x14);
    MEM32(esp + 8) = ecx;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x00122F6Fu); RECOMP_ABI_CALL(0x00122D80u, sub_00122D80); /* call 0x00122D80 */

loc_00122F6F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00122F80
 * Original: 0x00122F80 - 0x00122FAF (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00122F80(void)
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

loc_00122F80: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    ecx = MEM32(esp + 0x10);
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00122FA8; /* jp: parity */

loc_00122FA3: ;
    fp_pop(); /* fstp st(0) */
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

loc_00122FA8: ;
    fp_top() = sqrt(fp_top()); /* fsqrt */
    SET_LO8(eax, 1);
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00122FB0
 * Original: 0x00122FB0 - 0x0012301B (107 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122FB0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00123005; /* jle: less or equal (signed <=) */

loc_00122FBD: ;
    edx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x10);
    esi = esi - edx;
    goto loc_00122FD0;

    /* nop */

loc_00122FD0: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x41 (32-bit) */
    ecx = (uint32_t)(int32_t)SMEM8(edx);
    if (CMP_L(_fas, _fbs)) goto loc_00122FE4; /* jl: less (signed <) */

loc_00122FDC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5A (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00122FE4; /* jg: greater (signed >) */

loc_00122FE1: ;
    eax = eax + 0x20;

loc_00122FE4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x41 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00122FF1; /* jl: less (signed <) */

loc_00122FE9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x5A (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00122FF1; /* jg: greater (signed >) */

loc_00122FEE: ;
    ecx = ecx + 0x20;

loc_00122FF1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0012300B; /* jg: greater (signed >) */

loc_00122FF5: ;
    if (CMP_L(_fas, _fbs)) goto loc_00123014; /* jl: less (signed <) */

loc_00122FF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00122FFF; /* jne: not equal / not zero */

loc_00122FFB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00123005; /* je: equal / zero */

loc_00122FFF: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00122FD0; /* jl: less (signed <) */

loc_00123005: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0012300B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00123014: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00123020
 * Original: 0x00123020 - 0x00123025 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123020(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00123020: ;
    g_seh_ebp = ebp; sub_0034278E(); return; /* tail jmp 0x0034278E */

}

/**
 * sub_00123030
 * Original: 0x00123030 - 0x00123080 (80 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123030: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012303Bu); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0012303B: ;
    SET_LO8(eax, MEM8(0x505224));
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123069; /* jne: not equal / not zero */

loc_00123047: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3DAFF0);
    PUSH32(esp, 0x00123052u); RECOMP_ABI_CALL(0x001F8390u, sub_001F8390); /* call 0x001F8390 */

loc_00123052: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012305D; /* jne: not equal / not zero */

loc_0012305A: ;
    /* int3: debug-trap slide byte, stepped over */
    goto loc_00123069;

loc_0012305D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123069; /* jne: not equal / not zero */

loc_00123062: ;
    MEM8(0x505224) = 1;

loc_00123069: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00123070u); RECOMP_ABI_CALL(0x003428BAu, sub_003428BA); /* call 0x003428BA */

loc_00123070: ;
    POP32(esp, esi);
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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00123080
 * Original: 0x00123080 - 0x001230BA (58 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123080: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    eax = ebx;
    PUSH32(esp, edi);
    edx = eax + 1;
    /* nop */

loc_00123090: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123090; /* jne: not equal / not zero */

loc_00123097: ;
    eax = eax - edx;
    edi = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001230B6; /* jle: less or equal (signed <=) */

loc_001230A1: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001230ABu); RECOMP_ABI_CALL(0x003428D2u, sub_003428D2); /* call 0x003428D2 */

loc_001230AB: ;
    esp = esp + 4;
    MEM8(esi + ebx) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001230A1; /* jl: less (signed <) */

loc_001230B6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001230C0
 * Original: 0x001230C0 - 0x001230FA (58 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001230C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001230C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    eax = ebx;
    PUSH32(esp, edi);
    edx = eax + 1;
    /* nop */

loc_001230D0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001230D0; /* jne: not equal / not zero */

loc_001230D7: ;
    eax = eax - edx;
    edi = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001230F6; /* jle: less or equal (signed <=) */

loc_001230E1: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001230EBu); RECOMP_ABI_CALL(0x00342903u, sub_00342903); /* call 0x00342903 */

loc_001230EB: ;
    esp = esp + 4;
    MEM8(esi + ebx) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001230E1; /* jl: less (signed <) */

loc_001230F6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00123100
 * Original: 0x00123100 - 0x0012315A (90 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123100(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00123100: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123111; /* jne: not equal / not zero */

loc_0012310C: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00123111: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00123142; /* je: equal / zero */

loc_00123118: ;
    ebp = MEM32(esp + 0x18);
    eax = ebx;
    esi = ebx;

loc_00123120: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123142; /* je: equal / zero */

loc_00123127: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012312Eu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0012312E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00123149; /* je: equal / zero */

loc_00123135: ;
    ecx = MEM32(esi + 8);
    esi = esi + 8;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    eax = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00123120; /* jne: not equal / not zero */

loc_00123142: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00123149: ;
    eax = MEM32(ebx + edi * 8 + 4);
    ecx = MEM32(esp + 0x1C);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00123160
 * Original: 0x00123160 - 0x001231A4 (68 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123160: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123171; /* jne: not equal / not zero */

loc_0012316C: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00123171: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00123197; /* je: equal / zero */

loc_00123178: ;
    ebx = MEM32(esp + 0x14);
    edx = edi;
    eax = edi;

loc_00123180: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123197; /* je: equal / zero */

loc_00123185: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012319D; /* je: equal / zero */

loc_0012318A: ;
    ecx = MEM32(eax + 8);
    eax = eax + 8;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edx = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00123180; /* jne: not equal / not zero */

loc_00123197: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012319D: ;
    eax = MEM32(edi + esi * 8);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001231B0
 * Original: 0x001231B0 - 0x001231D7 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001231B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001231B0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001231D6; /* je: equal / zero */

loc_001231BA: ;
    /* nop */

loc_001231C0: ;
    SET_LO8(ecx, MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001231D6; /* je: equal / zero */

loc_001231C6: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001231D0; /* je: equal / zero */

loc_001231CB: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2F (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001231D3; /* jne: not equal / not zero */

loc_001231D0: ;
    eax = edx + 1;

loc_001231D3: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001231C0; /* jne: not equal / not zero */

loc_001231D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001231E0
 * Original: 0x001231E0 - 0x0012321C (60 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001231E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001231E0: ;
    eax = MEM32(0x506228);
    edx = MEM32(esp + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 3;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(0x506228) = eax;
    PUSH32(esp, edx);
    eax = eax << 0xA;
    eax = eax + 0x505228;
    PUSH32(esp, 0x400);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012320Bu); RECOMP_ABI_CALL(0x0034278Eu, sub_0034278E); /* call 0x0034278E */

loc_0012320B: ;
    eax = MEM32(0x506228);
    eax = eax << 0xA;
    esp = esp + 0x10;
    eax = eax + 0x505228;
    esp += 4; return; /* ret */

}

/**
 * sub_00123220
 * Original: 0x00123220 - 0x001232BA (154 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123220: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012323B; /* jne: not equal / not zero */

loc_00123228: ;
    PUSH32(esp, 0x3DB080);
    PUSH32(esp, 0x00123232u); RECOMP_ABI_CALL(0x001231E0u, sub_001231E0); /* call 0x001231E0 */

loc_00123232: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012323Bu); RECOMP_ABI_CALL(0x00123030u, sub_00123030); /* call 0x00123030 */

loc_0012323B: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123257; /* jne: not equal / not zero */

loc_00123244: ;
    PUSH32(esp, 0x3DB060);
    PUSH32(esp, 0x0012324Eu); RECOMP_ABI_CALL(0x001231E0u, sub_001231E0); /* call 0x001231E0 */

loc_0012324E: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00123257u); RECOMP_ABI_CALL(0x00123030u, sub_00123030); /* call 0x00123030 */

loc_00123257: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00123275; /* jge: greater or equal (signed >=) */

loc_00123261: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3DB03C);
    PUSH32(esp, 0x0012326Cu); RECOMP_ABI_CALL(0x001231E0u, sub_001231E0); /* call 0x001231E0 */

loc_0012326C: ;
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00123275u); RECOMP_ABI_CALL(0x00123030u, sub_00123030); /* call 0x00123030 */

loc_00123275: ;
    eax = edx;
    PUSH32(esp, edi);
    edi = eax + 1;
    goto loc_00123280;

    /* nop */

loc_00123280: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123280; /* jne: not equal / not zero */

loc_00123287: ;
    eax = eax - edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    POP32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001232A4; /* jle: less or equal (signed <=) */

loc_0012328F: ;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3DAFFC);
    PUSH32(esp, 0x0012329Bu); RECOMP_ABI_CALL(0x001231E0u, sub_001231E0); /* call 0x001231E0 */

loc_0012329B: ;
    esp = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001232A4u); RECOMP_ABI_CALL(0x00123030u, sub_00123030); /* call 0x00123030 */

loc_001232A4: ;
    eax = esi + -1;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001232AFu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_001232AF: ;
    esp = esp + 0xC;
    MEM8(ebx + esi + -1) = 0;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001232C0
 * Original: 0x001232C0 - 0x00123324 (100 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001232C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001232C0: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001232DB; /* jne: not equal / not zero */

loc_001232C8: ;
    PUSH32(esp, 0x3DB0F4);
    PUSH32(esp, 0x001232D2u); RECOMP_ABI_CALL(0x001231E0u, sub_001231E0); /* call 0x001231E0 */

loc_001232D2: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001232DBu); RECOMP_ABI_CALL(0x00123030u, sub_00123030); /* call 0x00123030 */

loc_001232DB: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_001232F6; /* jg: greater (signed >) */

loc_001232E3: ;
    PUSH32(esp, 0x3DB0C8);
    PUSH32(esp, 0x001232EDu); RECOMP_ABI_CALL(0x001231E0u, sub_001231E0); /* call 0x001231E0 */

loc_001232ED: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001232F6u); RECOMP_ABI_CALL(0x00123030u, sub_00123030); /* call 0x00123030 */

loc_001232F6: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123311; /* jne: not equal / not zero */

loc_001232FE: ;
    PUSH32(esp, 0x3DB0A0);
    PUSH32(esp, 0x00123308u); RECOMP_ABI_CALL(0x001231E0u, sub_001231E0); /* call 0x001231E0 */

loc_00123308: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00123311u); RECOMP_ABI_CALL(0x00123030u, sub_00123030); /* call 0x00123030 */

loc_00123311: ;
    PUSH32(esp, esi);
    esi = esp + 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012331Fu); RECOMP_ABI_CALL(0x0034278Eu, sub_0034278E); /* call 0x0034278E */

loc_0012331F: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}



/**
 * sub_001233A0
 * Original: 0x001233A0 - 0x001233B4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001233A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001233A0: ;
    PUSH32(esp, 0x001233A5u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_001233A5: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 4); /* fsub dword ptr [esp + 4] */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_top() = fp_top() + MEMF(esp + 4); /* fadd dword ptr [esp + 4] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}



/**
 * sub_00123400
 * Original: 0x00123400 - 0x00123483 (131 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123400: ;
    SET_LO8(ecx, MEM8(0x506330));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012341C; /* jne: not equal / not zero */

loc_0012340F: ;
    MEM32(0x506330) = MEM32(0x506330) | eax;
    MEM8(0x506230) = 0;

loc_0012341C: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x506230);
    PUSH32(esp, 0x00123432u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00123432: ;
    PUSH32(esp, 0x2E);
    PUSH32(esp, 0x506230);
    MEM8(0x50632F) = 0;
    PUSH32(esp, 0x00123445u); RECOMP_ABI_CALL(0x00341D90u, sub_00341D90); /* call 0x00341D90 */

loc_00123445: ;
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x506230);
    esi = eax;
    PUSH32(esp, 0x00123453u); RECOMP_ABI_CALL(0x00341D90u, sub_00341D90); /* call 0x00341D90 */

loc_00123453: ;
    PUSH32(esp, 0x2F);
    PUSH32(esp, 0x506230);
    edi = eax;
    PUSH32(esp, 0x00123461u); RECOMP_ABI_CALL(0x00341D90u, sub_00341D90); /* call 0x00341D90 */

loc_00123461: ;
    esp = esp + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012347B; /* je: equal / zero */

loc_00123468: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00123470; /* je: equal / zero */

loc_0012346C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0012347B; /* jbe: below or equal (unsigned <=) */

loc_00123470: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00123478; /* je: equal / zero */

loc_00123474: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0012347B; /* jbe: below or equal (unsigned <=) */

loc_00123478: ;
    MEM8(esi) = 0;

loc_0012347B: ;
    POP32(esp, edi);
    eax = 0x506230;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00123490
 * Original: 0x00123490 - 0x001234E6 (86 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123490(void)
{

loc_00123490: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00123498u); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_00123498: ;
    ecx = MEM32(esp + 0x14);
    esi = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001234ABu); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_001234AB: ;
    edx = MEM32(esp + 8);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001234BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001234BD: ;
    esi = MEM32(esp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x001234CCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001234CC: ;
    edx = eax;
    ecx = esi;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    eax = edx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001234F0
 * Original: 0x001234F0 - 0x0012352E (62 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001234F0(void)
{

loc_001234F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001234F7u); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_001234F7: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0012350Au); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_0012350A: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0012351Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012351C: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x0012352Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012352B: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00123530
 * Original: 0x00123530 - 0x00123545 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123530(void)
{

loc_00123530: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0xF);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00123541u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_00123541: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}



/**
 * sub_00123590
 * Original: 0x00123590 - 0x001235F9 (105 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123590: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351ACB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(0x5BC528);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001235EA; /* jne: not equal / not zero */

loc_001235AF: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x001235B6u); RECOMP_ABI_CALL(0x001F4E60u, sub_001F4E60); /* call 0x001F4E60 */

loc_001235B6: ;
    esp = esp + 4;
    MEM32(esp) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001235E3; /* je: equal / zero */

loc_001235C8: ;
    ecx = eax;
    PUSH32(esp, 0x001235CFu); RECOMP_ABI_CALL(0x00202CC0u, sub_00202CC0); /* call 0x00202CC0 */

loc_001235CF: ;
    MEM32(0x5BC528) = eax;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_001235E3: ;
    eax = 0; /* xor self */
    MEM32(0x5BC528) = eax;

loc_001235EA: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00123600
 * Original: 0x00123600 - 0x0012360E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123600: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0012360D; /* jne: not equal / not zero */

loc_00123605: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx);
    PUSH32(esp, 0x0012360Du); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_0012360D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00123610
 * Original: 0x00123610 - 0x001236BF (175 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123610: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    edx = 0x506538;
    eax = edi;
    edx = edx - edi;
    /* nop */

loc_00123620: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123620; /* jne: not equal / not zero */

loc_0012362A: ;
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00123654; /* je: equal / zero */

loc_00123632: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00123639u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_00123639: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123654; /* jne: not equal / not zero */

loc_00123640: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3C97F4);
    PUSH32(esp, 0x506538);
    PUSH32(esp, 0x00123651u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00123651: ;
    esp = esp + 0x10;

loc_00123654: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00123682; /* je: equal / zero */

loc_0012365C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00123663u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_00123663: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123682; /* jne: not equal / not zero */

loc_0012366A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x506538);
    PUSH32(esp, 0x3C97F4);
    PUSH32(esp, 0x506538);
    PUSH32(esp, 0x0012367Fu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_0012367F: ;
    esp = esp + 0x10;

loc_00123682: ;
    PUSH32(esp, 0x3DB140);
    PUSH32(esp, 0x506538);
    PUSH32(esp, 0x00123691u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_00123691: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_001236B9; /* je: equal / zero */

loc_0012369A: ;
    /* nop */

loc_001236A0: ;
    PUSH32(esp, 0x3DB140);
    PUSH32(esp, 0x506538);
    MEM8(eax) = 0x2F;
    PUSH32(esp, 0x001236B2u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_001236B2: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001236A0; /* jne: not equal / not zero */

loc_001236B9: ;
    eax = 0x506538;
    esp += 4; return; /* ret */

}

/**
 * sub_001236C0
 * Original: 0x001236C0 - 0x00123718 (88 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001236C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001236C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00123700; /* je: equal / zero */

loc_001236CE: ;
    PUSH32(esp, ebx);
    ebx = 0x77;
    ebx = ebx - esi;

loc_001236D6: ;
    eax = (uint32_t)(int32_t)SMEM8(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001236DFu); RECOMP_ABI_CALL(0x00342903u, sub_00342903); /* call 0x00342903 */

loc_001236DF: ;
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001236FF; /* je: equal / zero */

loc_001236E6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001236EC; /* jne: not equal / not zero */

loc_001236EA: ;
    SET_LO8(eax, 0x2F);

loc_001236EC: ;
    edx = SX8(LO8(eax));
    SET_LO8(eax, MEM8(esi + 1));
    ecx = ebx + esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    edi = edi + ecx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001236D6; /* jne: not equal / not zero */

loc_001236FF: ;
    POP32(esp, ebx);

loc_00123700: ;
    ecx = MEM32(esp + 0x10);
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xA) & 31u));
    eax = eax ^ edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xA) & 31u));
    eax = eax ^ edi;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    eax = eax & ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00123720
 * Original: 0x00123720 - 0x00123768 (72 bytes, 30 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123720: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 4);
    PUSH32(esp, 0xE);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00123730u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_00123730: ;
    esi = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012374D; /* jne: not equal / not zero */

loc_00123739: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3DB144);
    PUSH32(esp, 0x00123744u); RECOMP_ABI_CALL(0x001231E0u, sub_001231E0); /* call 0x001231E0 */

loc_00123744: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012374Au); RECOMP_ABI_CALL(0x00123030u, sub_00123030); /* call 0x00123030 */

loc_0012374A: ;
    esp = esp + 0xC;

loc_0012374D: ;
    ecx = edi;
    edx = ecx;
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
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00123770
 * Original: 0x00123770 - 0x00123A90 (800 bytes, 256 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123770(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00123770: ;
    esp = esp - 0x16C;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebp);
    MEM32(esp + 0x16C) = eax;
    eax = MEM32(esp + 0x174);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0x00123797u); RECOMP_ABI_CALL(0x0012C8F0u, sub_0012C8F0); /* call 0x0012C8F0 */

loc_00123797: ;
    ecx = esp + 0xC;
    ebp = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001237A4u); RECOMP_ABI_CALL(0x00128CA0u, sub_00128CA0); /* call 0x00128CA0 */

loc_001237A4: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001237C4; /* je: equal / zero */

loc_001237AB: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x168);
    PUSH32(esp, 0x001237BBu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_001237BB: ;
    esp = esp + 0x16C;
    esp += 8; return; /* ret 4 */

loc_001237C4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001237CCu); RECOMP_ABI_CALL(0x00128CC0u, sub_00128CC0); /* call 0x00128CC0 */

loc_001237CC: ;
    ebx = MEM32(esi + 0x108C);
    edx = MEM32(esp + 0x14);
    ebx = ebx + edx;
    MEM32(esi + 0x108C) = ebx;
    PUSH32(esp, ebp);
    esi = 0; /* xor self */
    PUSH32(esp, 0x001237E6u); RECOMP_ABI_CALL(0x001293D0u, sub_001293D0); /* call 0x001293D0 */

loc_001237E6: ;
    eax = MEM32(esp + 0x18);
    esp = esp + 8;
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00123876; /* jle: less or equal (signed <=) */

loc_001237F7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    eax = esp + 0x8C;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00123817u); RECOMP_ABI_CALL(0x00129390u, sub_00129390); /* call 0x00129390 */

loc_00123817: ;
    esp = esp + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123872; /* jne: not equal / not zero */

loc_0012381E: ;
    eax = MEM32(esp + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0012384A; /* jb: below (unsigned <) */

loc_00123829: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    edx = esp + 0x80;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3DB180);
    PUSH32(esp, 0x00123841u); RECOMP_ABI_CALL(0x001231E0u, sub_001231E0); /* call 0x001231E0 */

loc_00123841: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00123847u); RECOMP_ABI_CALL(0x00123030u, sub_00123030); /* call 0x00123030 */

loc_00123847: ;
    esp = esp + 0x14;

loc_0012384A: ;
    eax = esp + 0x78;
    edx = eax + 1;

loc_00123851: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123851; /* jne: not equal / not zero */

loc_00123858: ;
    eax = eax - edx;
    PUSH32(esp, ebp);
    esi = esi + eax + 1;
    PUSH32(esp, 0x00123864u); RECOMP_ABI_CALL(0x00129650u, sub_00129650); /* call 0x00129650 */

loc_00123864: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 4;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001237F7; /* jl: less (signed <) */

loc_00123870: ;
    goto loc_00123876;

loc_00123872: ;
    eax = MEM32(esp + 0x10);

loc_00123876: ;
    eax = eax + eax * 2;
    PUSH32(esp, 4);
    esi = esi + eax * 4;
    PUSH32(esp, 0xE);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00123886u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_00123886: ;
    edi = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_001238A7; /* jne: not equal / not zero */

loc_00123893: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3DB144);
    PUSH32(esp, 0x0012389Eu); RECOMP_ABI_CALL(0x001231E0u, sub_001231E0); /* call 0x001231E0 */

loc_0012389E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001238A4u); RECOMP_ABI_CALL(0x00123030u, sub_00123030); /* call 0x00123030 */

loc_001238A4: ;
    esp = esp + 0xC;

loc_001238A7: ;
    ecx = esi;
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
    eax = MEM32(esp + 0x10);
    ebx = 1;

loc_001238C2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001238D2; /* jg: greater (signed >) */

loc_001238C6: ;
    ebx = ebx + ebx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x1000 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001238C2; /* jle: less or equal (signed <=) */

loc_001238D0: ;
    goto loc_001238DA;

loc_001238D2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x1000 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001238DF; /* jle: less or equal (signed <=) */

loc_001238DA: ;
    ebx = 0x1000;

loc_001238DF: ;
    PUSH32(esp, 4);
    edi = ebx * 4 + 0x114;
    PUSH32(esp, 0xE);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001238F0u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_001238F0: ;
    esi = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012390D; /* jne: not equal / not zero */

loc_001238F9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3DB144);
    PUSH32(esp, 0x00123904u); RECOMP_ABI_CALL(0x001231E0u, sub_001231E0); /* call 0x001231E0 */

loc_00123904: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012390Au); RECOMP_ABI_CALL(0x00123030u, sub_00123030); /* call 0x00123030 */

loc_0012390A: ;
    esp = esp + 0xC;

loc_0012390D: ;
    ecx = edi;
    edx = ecx;
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
    ecx = ebx * 4 + 0x114;
    edx = ecx;
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
    ecx = MEM32(esp + 0x180);
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    eax = esi + 0x114;
    PUSH32(esp, esi);
    MEM32(esi + 0x108) = ebx;
    MEM32(esi + 0x10C) = eax;
    PUSH32(esp, 0x0012395Fu); RECOMP_ABI_CALL(0x00123220u, sub_00123220); /* call 0x00123220 */

loc_0012395F: ;
    MEM32(esi + 0x100) = ebp;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    MEM32(esi + 0x104) = edx;
    PUSH32(esp, 0x00123975u); RECOMP_ABI_CALL(0x001293D0u, sub_001293D0); /* call 0x001293D0 */

loc_00123975: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x28);
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax + eax * 2;
    ebx = edx + ecx * 4;
    MEM32(esp + 0x1C) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00123A57; /* jle: less or equal (signed <=) */

loc_00123996: ;
    edi = edx;

loc_00123998: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    eax = esp + 0x8C;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001239B8u); RECOMP_ABI_CALL(0x00129390u, sub_00129390); /* call 0x00129390 */

loc_001239B8: ;
    esp = esp + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123A57; /* jne: not equal / not zero */

loc_001239C3: ;
    edx = esp + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001239CDu); RECOMP_ABI_CALL(0x001230C0u, sub_001230C0); /* call 0x001230C0 */

loc_001239CD: ;
    eax = MEM32(esi + 0x108);
    esp = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x7C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0x001239E5u); RECOMP_ABI_CALL(0x001236C0u, sub_001236C0); /* call 0x001236C0 */

loc_001239E5: ;
    MEM32(esp + 0x24) = eax;
    eax = esp + 0x78;
    edx = ebx;
    ecx = eax;
    MEM32(edi) = ebx;
    edx = edx - ecx;

loc_001239F5: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001239F5; /* jne: not equal / not zero */

loc_001239FF: ;
    eax = esp + 0x78;
    edx = eax + 1;

loc_00123A06: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123A06; /* jne: not equal / not zero */

loc_00123A0D: ;
    eax = eax - edx;
    edx = edi + 4;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    ebx = ebx + eax + 1;
    PUSH32(esp, 0x00123A1Du); RECOMP_ABI_CALL(0x00129900u, sub_00129900); /* call 0x00129900 */

loc_00123A1D: ;
    ecx = MEM32(esi + 0x10C);
    eax = MEM32(esp + 0x2C);
    edx = MEM32(ecx + eax * 4);
    MEM32(edi + 8) = edx;
    ecx = MEM32(esi + 0x10C);
    PUSH32(esp, ebp);
    MEM32(ecx + eax * 4) = edi;
    PUSH32(esp, 0x00123A3Cu); RECOMP_ABI_CALL(0x00129650u, sub_00129650); /* call 0x00129650 */

loc_00123A3C: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x1C);
    esp = esp + 0xC;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00123998; /* jl: less (signed <) */

loc_00123A57: ;
    edx = MEM32(esp + 0x20);
    SET_LO8(eax, MEM8(edx + 6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_00123A6D; /* jne: not equal / not zero */

loc_00123A64: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00123A6Au); RECOMP_ABI_CALL(0x00128DE0u, sub_00128DE0); /* call 0x00128DE0 */

loc_00123A6A: ;
    esp = esp + 4;

loc_00123A6D: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x170);
    MEM32(esi + 0x110) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    PUSH32(esp, 0x00123A87u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00123A87: ;
    esp = esp + 0x16C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00123A90
 * Original: 0x00123A90 - 0x00123C15 (389 bytes, 132 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123A90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00123A90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00123A9Bu); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00123A9B: ;
    edx = MEM32(eax);
    ebx = 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esp + 0x12;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3DB1EC);
    PUSH32(esp, 0x3DB1DC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00123AB7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00123AB7: ;
    PUSH32(esp, 0x00123ABCu); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00123ABC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esp + 0x13;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3DB1D0);
    PUSH32(esp, 0x3DB1DC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00123AD3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00123AD3: ;
    PUSH32(esp, 0x00123AD8u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00123AD8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edi = esi + 6;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3DB1C4);
    PUSH32(esp, 0x3DB1DC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00123AEFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00123AEF: ;
    /* Disable the Xbox-forced ZIP flags before any archive is opened.
       The native tail installs the ordinary filesystem loader node. */
    if (xml1_prefer_files_loose()) {
        MEM8(esi+4)=0; MEM8(esi+5)=0; MEM8(esi+6)=0;
        goto loc_00123BA6;
    }
    PUSH32(esp, 0x3DB1B4);
    ecx = esi;
    MEM8(esp + 0x12) = 0;
    MEM8(esi + 4) = LO8(ebx);
    MEM8(edi) = LO8(ebx);
    MEM8(esi + 5) = 0;
    PUSH32(esp, 0x00123B09u); RECOMP_ABI_CALL(0x00123770u, sub_00123770); /* call 0x00123770 */

loc_00123B09: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00123BFD; /* je: equal / zero */

loc_00123B13: ;
    PUSH32(esp, 8);
    ecx = esi;
    PUSH32(esp, 0x00123B1Cu); RECOMP_ABI_CALL(0x00123720u, sub_00123720); /* call 0x00123720 */

loc_00123B1C: ;
    MEM32(eax) = edi;
    ecx = MEM32(esi + 0x1090);
    MEM32(eax + 4) = ecx;
    MEM32(esi + 0x1090) = eax;
    SET_LO8(eax, MEM8(esp + 0xE));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00123BA6; /* je: equal / zero */

loc_00123B35: ;
    eax = MEM32(0x454418);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00123BA6; /* je: equal / zero */

loc_00123B3E: ;
    eax = 0x454418;
    ebx = eax;
    PUSH32(esp, ebp);

loc_00123B46: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00123B50u); RECOMP_ABI_CALL(0x00123770u, sub_00123770); /* call 0x00123770 */

loc_00123B50: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00123B99; /* je: equal / zero */

loc_00123B56: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0xE);
    PUSH32(esp, 8);
    PUSH32(esp, 0x00123B61u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_00123B61: ;
    edi = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123B7F; /* jne: not equal / not zero */

loc_00123B6A: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x3DB144);
    PUSH32(esp, 0x00123B76u); RECOMP_ABI_CALL(0x001231E0u, sub_001231E0); /* call 0x001231E0 */

loc_00123B76: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00123B7Cu); RECOMP_ABI_CALL(0x00123030u, sub_00123030); /* call 0x00123030 */

loc_00123B7C: ;
    esp = esp + 0xC;

loc_00123B7F: ;
    edx = 0; /* xor self */
    eax = edi;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(edi) = ebp;
    ecx = MEM32(esi + 0x1090);
    MEM32(edi + 4) = ecx;
    MEM32(esi + 0x1090) = edi;

loc_00123B99: ;
    ecx = MEM32(ebx + 4);
    ebx = ebx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    eax = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_00123B46; /* jne: not equal / not zero */

loc_00123BA5: ;
    POP32(esp, ebp);

loc_00123BA6: ;
    SET_LO8(eax, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123BB7; /* jne: not equal / not zero */

loc_00123BAD: ;
    eax = MEM32(esi + 0x1090);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123BF8; /* jne: not equal / not zero */

loc_00123BB7: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0xE);
    PUSH32(esp, 8);
    PUSH32(esp, 0x00123BC2u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_00123BC2: ;
    edi = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123BE0; /* jne: not equal / not zero */

loc_00123BCB: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x3DB144);
    PUSH32(esp, 0x00123BD7u); RECOMP_ABI_CALL(0x001231E0u, sub_001231E0); /* call 0x001231E0 */

loc_00123BD7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00123BDDu); RECOMP_ABI_CALL(0x00123030u, sub_00123030); /* call 0x00123030 */

loc_00123BDD: ;
    esp = esp + 0xC;

loc_00123BE0: ;
    edx = 0; /* xor self */
    eax = edi;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 0x1090);
    MEM32(edi + 4) = ecx;
    MEM32(esi + 0x1090) = edi;

loc_00123BF8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00123BFD: ;
    SET_LO8(eax, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esp + 0xE) = LO8(ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_00123B35; /* jne: not equal / not zero */

loc_00123C0C: ;
    MEM8(esi + 4) = 0;
    goto loc_00123B35;

}

/**
 * sub_00123C20
 * Original: 0x00123C20 - 0x00123C24 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123C20(void)
{

loc_00123C20: ;
    SET_LO8(eax, MEM8(ecx + 7));
    esp += 4; return; /* ret */

}

/**
 * sub_00123C30
 * Original: 0x00123C30 - 0x00123C66 (54 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123C30: ;
    eax = MEM32(esp + 4);
    edx = 0x506638;
    edx = edx - eax;
    goto loc_00123C40;

    /* nop */

loc_00123C40: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123C40; /* jne: not equal / not zero */

loc_00123C4A: ;
    eax = 0x506638;
    /* nop */

loc_00123C50: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123C58; /* jne: not equal / not zero */

loc_00123C55: ;
    MEM8(eax) = 0x2F;

loc_00123C58: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123C50; /* jne: not equal / not zero */

loc_00123C60: ;
    eax = 0x506638;
    esp += 4; return; /* ret */

}

/**
 * sub_00123C70
 * Original: 0x00123C70 - 0x00123CA8 (56 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123C70: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    eax = MEM32(esp + 4);
    if (TEST_Z(_fa, _fb)) goto loc_00123CA7; /* je: equal / zero */

loc_00123C7C: ;
    edx = 0x506738;
    edx = edx - eax;

loc_00123C83: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123C83; /* jne: not equal / not zero */

loc_00123C8D: ;
    eax = 0x506738;

loc_00123C92: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x2F (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123C9A; /* jne: not equal / not zero */

loc_00123C97: ;
    MEM8(eax) = 0x5C;

loc_00123C9A: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123C92; /* jne: not equal / not zero */

loc_00123CA2: ;
    eax = 0x506738;

loc_00123CA7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00123CB0
 * Original: 0x00123CB0 - 0x00123CC2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123CB0(void)
{

loc_00123CB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 7);
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00123CBEu); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_00123CBE: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00123CD0
 * Original: 0x00123CD0 - 0x00123CE0 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123CD0(void)
{

loc_00123CD0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00123CDCu); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_00123CDC: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00123CE0
 * Original: 0x00123CE0 - 0x00123D13 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123CE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123D0F; /* je: equal / zero */

loc_00123CEA: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00123CF1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00123CF1: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00123D08; /* jne: not equal / not zero */

loc_00123D01: ;
    ecx = esi;
    PUSH32(esp, 0x00123D08u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00123D08: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00123D0F: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00123D20
 * Original: 0x00123D20 - 0x00123D61 (65 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123D20: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00123D2D; /* je: equal / zero */

loc_00123D2B: ;
    MEM32(edi) = eax;

loc_00123D2D: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00123D5F; /* je: equal / zero */

loc_00123D35: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123D5F; /* je: equal / zero */

loc_00123D3E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x00123D4Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00123D4C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00123D5E; /* je: equal / zero */

loc_00123D50: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00123D5E; /* je: equal / zero */

loc_00123D54: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123D5E; /* jne: not equal / not zero */

loc_00123D58: ;
    MEM32(edi) = 1;

loc_00123D5E: ;
    POP32(esp, esi);

loc_00123D5F: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00123D70
 * Original: 0x00123D70 - 0x00123DC8 (88 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123D70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00123D70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123DC6; /* je: equal / zero */

loc_00123D7D: ;
    eax = MEM32(esp + 0x10);
    eax = eax - 0;
    if ((eax == 0)) goto loc_00123DA3; /* je: equal / zero */

loc_00123D86: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00123D9F; /* je: equal / zero */

loc_00123D89: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00123DC3; /* jne: not equal / not zero */

loc_00123D8C: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x00123D9Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00123D9D: ;
    goto loc_00123DB4;

loc_00123D9F: ;
    PUSH32(esp, 1);
    goto loc_00123DA5;

loc_00123DA3: ;
    PUSH32(esp, 0);

loc_00123DA5: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00123DB4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00123DB4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123DC3; /* jne: not equal / not zero */

loc_00123DB8: ;
    edx = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x94)); return; /* indirect tail jmp */

loc_00123DC3: ;
    eax = eax | 0xFFFFFFFFu;

loc_00123DC6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00123DD0
 * Original: 0x00123DD0 - 0x00123E17 (71 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123DD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123E15; /* je: equal / zero */

loc_00123DDC: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x00123DE8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00123DE8: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00123DF8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00123DF8: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x00123E02u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00123E02: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    ebx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00123E11u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00123E11: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);

loc_00123E15: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00123E20
 * Original: 0x00123E20 - 0x00123E2C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123E20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00123E20: ;
    PUSH32(esp, 0x00123E25u); RECOMP_ABI_CALL(0x00011320u, sub_00011320); /* call 0x00011320 */

loc_00123E25: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_00123E30
 * Original: 0x00123E30 - 0x00123E4B (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123E30: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00123E4A; /* je: equal / zero */

loc_00123E36: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00123E4A; /* jne: not equal / not zero */

loc_00123E42: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00123E4Au); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00123E4A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00123E50
 * Original: 0x00123E50 - 0x00123E8A (58 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123E50: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00123E5Eu); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00123E5E: ;
    ecx = eax;
    PUSH32(esp, 0x00123E65u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00123E65: ;
    edi = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00123E81; /* je: equal / zero */

loc_00123E6D: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00123E81; /* jne: not equal / not zero */

loc_00123E79: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00123E81u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00123E81: ;
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00123E90
 * Original: 0x00123E90 - 0x00124002 (370 bytes, 140 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123E90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00123E90: ;
    SET_LO8(ecx, MEM8(0x506938));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123EAC; /* jne: not equal / not zero */

loc_00123E9F: ;
    MEM32(0x506938) = MEM32(0x506938) | eax;
    MEM8(0x506838) = 0;

loc_00123EAC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x100);
    PUSH32(esp, esi);
    PUSH32(esp, 0x506838);
    PUSH32(esp, 0x00123EC4u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00123EC4: ;
    PUSH32(esp, esi);
    MEM8(0x506937) = 0;
    PUSH32(esp, 0x00123ED1u); RECOMP_ABI_CALL(0x001231B0u, sub_001231B0); /* call 0x001231B0 */

loc_00123ED1: ;
    ebx = eax;
    eax = eax - esi;
    MEM8(eax + 0x506838) = 0;
    eax = MEM32(esp + 0x28);
    esp = esp + 0x10;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00123F9F; /* jle: less or equal (signed <=) */

loc_00123EED: ;
    /* nop */

loc_00123EF0: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3DB1F4);
    PUSH32(esp, 0x00123EFFu); RECOMP_ABI_CALL(0x001231E0u, sub_001231E0); /* call 0x001231E0 */

loc_00123EFF: ;
    ecx = 0x506838;
    esp = esp + 8;
    esi = ecx + 1;
    /* nop */

loc_00123F10: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123F10; /* jne: not equal / not zero */

loc_00123F17: ;
    ecx = ecx - esi;
    edx = eax;
    esi = ecx;
    edi = edx + 1;

loc_00123F20: ;
    SET_LO8(ecx, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123F20; /* jne: not equal / not zero */

loc_00123F27: ;
    edx = edx - edi;
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00123F5C; /* jge: greater or equal (signed >=) */

loc_00123F33: ;
    edx = eax;

loc_00123F35: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123F35; /* jne: not equal / not zero */

loc_00123F3C: ;
    edi = 0x506838;
    eax = eax - edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00123F44: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123F44; /* jne: not equal / not zero */

loc_00123F4C: ;
    ecx = eax;
    ecx = ecx >> 2;
    esi = edx;
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

loc_00123F5C: ;
    eax = 0x506838;
    edx = eax + 1;

loc_00123F64: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123F64; /* jne: not equal / not zero */

loc_00123F6B: ;
    eax = eax - edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00123F92; /* jge: greater or equal (signed >=) */

loc_00123F75: ;
    edi = 0x506838;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00123F80;

    /* nop */

loc_00123F80: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123F80; /* jne: not equal / not zero */

loc_00123F88: ;
    SET_LO16(edx, MEM16(0x3CAA94));
    MEM16(edi) = LO16(edx);

loc_00123F92: ;
    eax = MEM32(esp + 0x18);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00123EF0; /* jl: less (signed <) */

loc_00123F9F: ;
    eax = 0x506838;
    edx = eax + 1;

loc_00123FA7: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123FA7; /* jne: not equal / not zero */

loc_00123FAE: ;
    eax = eax - edx;
    edx = eax;
    eax = ebx;
    esi = eax + 1;

loc_00123FB7: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123FB7; /* jne: not equal / not zero */

loc_00123FBE: ;
    eax = eax - esi;
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00123FF8; /* jge: greater or equal (signed >=) */

loc_00123FC9: ;
    eax = ebx;
    edx = ebx;
    /* nop */

loc_00123FD0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123FD0; /* jne: not equal / not zero */

loc_00123FD7: ;
    edi = 0x506838;
    eax = eax - edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_00123FE0: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123FE0; /* jne: not equal / not zero */

loc_00123FE8: ;
    ecx = eax;
    ecx = ecx >> 2;
    esi = edx;
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

loc_00123FF8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x506838;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00124010
 * Original: 0x00124010 - 0x001240B6 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124010: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351B01);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00124035u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_00124035: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00124041u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00124041: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00124049u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_00124049: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012404Fu); RECOMP_ABI_CALL(0x00231770u, sub_00231770); /* call 0x00231770 */

loc_0012404F: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x00124063u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00124063: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0012406Bu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0012406B: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0012407B; /* je: equal / zero */

loc_00124078: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012407B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001240A3; /* je: equal / zero */

loc_0012408C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001240A3; /* jne: not equal / not zero */

loc_0012409C: ;
    ecx = esi;
    PUSH32(esp, 0x001240A3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001240A3: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001240C0
 * Original: 0x001240C0 - 0x0012411D (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001240C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001240C0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x558) = esi;
    MEM32(ecx + 0x55C) = esi;
    MEM32(ecx + 0x560) = esi;
    edx = 0; /* xor self */
    goto loc_001240E0;

    /* nop */

loc_001240E0: ;
    eax = MEM32(ecx + 0x558);
    edi = MEM32(ecx + 0x560);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    MEM32(ecx + 0x558) = eax;
    MEM32(ecx + 0x560) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0012410C; /* jl: less (signed <) */

loc_001240FF: ;
    MEM32(ecx + 0x558) = esi;
    eax = 4;
    goto loc_0012410D;

loc_0012410C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0012410D: ;
    MEM32(ecx + eax * 4 + 0x540) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001240E0; /* jl: less (signed <) */

loc_0012411A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00124120
 * Original: 0x00124120 - 0x00124183 (99 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124120(void)
{

loc_00124120: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00124128u); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_00124128: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0012413Bu); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_0012413B: ;
    edx = MEM32(esp + 8);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0012414Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012414D: ;
    esi = eax;
    PUSH32(esp, 0x00124154u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_00124154: ;
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0012415Cu); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0012415C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00124164u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_00124164: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012416Au); RECOMP_ABI_CALL(0x00231770u, sub_00231770); /* call 0x00231770 */

loc_0012416A: ;
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x00124172u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00124172: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0012417Au); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0012417A: ;
    esp = esp + 0x1C;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00124190
 * Original: 0x00124190 - 0x001241D7 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124190(void)
{

loc_00124190: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x0012419Fu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_0012419F: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001241B2u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_001241B2: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001241C4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001241C4: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001241CFu); RECOMP_ABI_CALL(0x00124010u, sub_00124010); /* call 0x00124010 */

loc_001241CF: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001241E0
 * Original: 0x001241E0 - 0x0012441D (573 bytes, 175 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001241E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001241E0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351B34);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x414;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x41C) = eax;
    PUSH32(esp, 0x0012420Fu); RECOMP_ABI_CALL(0x0021A3A0u, sub_0021A3A0); /* call 0x0021A3A0 */

loc_0012420F: ;
    ebp = 0; /* xor self */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ebp;
    eax = esp + 0xC;
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    MEM32(esp + 0x430) = ebp;
    PUSH32(esp, 0x0012422Cu); RECOMP_ABI_CALL(0x00124190u, sub_00124190); /* call 0x00124190 */

loc_0012422C: ;
    PUSH32(esp, 0x400);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    MEM8(esp + 0x43C) = 1;
    PUSH32(esp, 0x00124248u); RECOMP_ABI_CALL(0x001E85E0u, sub_001E85E0); /* call 0x001E85E0 */

loc_00124248: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012434A; /* je: equal / zero */

loc_00124253: ;
    eax = MEM32(esp + 0x430);
    esi = eax;
    /* nop */

loc_00124260: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00124260; /* jne: not equal / not zero */

loc_00124267: ;
    edi = esp + 0x1C;
    eax = eax - esi;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_00124270: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00124270; /* jne: not equal / not zero */

loc_00124278: ;
    ecx = eax;
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
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    edx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x00124297u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00124297: ;
    ecx = MEM32(0x5BC528);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    esi = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_001242D8; /* jne: not equal / not zero */

loc_001242A3: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x001242AAu); RECOMP_ABI_CALL(0x001F4E60u, sub_001F4E60); /* call 0x001F4E60 */

loc_001242AA: ;
    esp = esp + 4;
    MEM32(esp + 0x18) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esp + 0x428) = 2;
    if (TEST_Z(_fa, _fb)) goto loc_001242C6; /* je: equal / zero */

loc_001242BD: ;
    ecx = eax;
    PUSH32(esp, 0x001242C4u); RECOMP_ABI_CALL(0x00202CC0u, sub_00202CC0); /* call 0x00202CC0 */

loc_001242C4: ;
    goto loc_001242C8;

loc_001242C6: ;
    eax = 0; /* xor self */

loc_001242C8: ;
    ecx = eax;
    MEM8(esp + 0x428) = 1;
    MEM32(0x5BC528) = ecx;

loc_001242D8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001242DEu); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_001242DE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    esi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001242F8; /* je: equal / zero */

loc_001242E4: ;
    ecx = MEM32(ebp + -4);
    eax = ebp + -8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_001242F8; /* jne: not equal / not zero */

loc_001242F0: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001242F8u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_001242F8: ;
    ebp = esi;
    edx = 0x506940;
    MEM32(esp + 0x14) = ebp;
    eax = esi;
    edx = edx - esi;

loc_00124307: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00124307; /* jne: not equal / not zero */

loc_00124311: ;
    PUSH32(esp, 0x3DB1F8);
    PUSH32(esp, 0x506940);
    PUSH32(esp, 0x00124320u); RECOMP_ABI_CALL(0x00342A2Du, sub_00342A2D); /* call 0x00342A2D */

loc_00124320: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001243BD; /* jne: not equal / not zero */

loc_0012432B: ;
    PUSH32(esp, 0x400);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012433Fu); RECOMP_ABI_CALL(0x001E85E0u, sub_001E85E0); /* call 0x001E85E0 */

loc_0012433F: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00124253; /* jne: not equal / not zero */

loc_0012434A: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esp + 0x428) = 0;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00124374; /* je: equal / zero */

loc_0012435C: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00124374; /* jne: not equal / not zero */

loc_0012436F: ;
    PUSH32(esp, 0x00124374u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00124374: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 0x428) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_00124397; /* je: equal / zero */

loc_00124383: ;
    ecx = MEM32(ebp + -4);
    eax = ebp + -8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00124397; /* jne: not equal / not zero */

loc_0012438F: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00124397u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00124397: ;
    eax = 0; /* xor self */

loc_00124399: ;
    ecx = MEM32(esp + 0x420);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x414);
    POP32(esp, ebp);
    PUSH32(esp, 0x001243B6u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_001243B6: ;
    esp = esp + 0x420;
    esp += 4; return; /* ret */

loc_001243BD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001243C3u); RECOMP_ABI_CALL(0x00342980u, sub_00342980); /* call 0x00342980 */

loc_001243C3: ;
    eax = MEM32(esp + 0x10);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esp + 0x428) = 0;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001243F0; /* je: equal / zero */

loc_001243D8: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_001243F0; /* jne: not equal / not zero */

loc_001243EB: ;
    PUSH32(esp, 0x001243F0u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001243F0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x428) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_00124413; /* je: equal / zero */

loc_001243FF: ;
    ecx = MEM32(esi + -4);
    eax = esi + -8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00124413; /* jne: not equal / not zero */

loc_0012440B: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00124413u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00124413: ;
    eax = 0x506940;
    goto loc_00124399;

}

/**
 * sub_00124420
 * Original: 0x00124420 - 0x00124462 (66 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124420: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00124428u); RECOMP_ABI_CALL(0x00124120u, sub_00124120); /* call 0x00124120 */

loc_00124428: ;
    ecx = MEM32(esp + 0xC);
    esp = esp + 4;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DB1FC);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0012443Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012443E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012445E; /* jne: not equal / not zero */

loc_00124442: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00124459; /* jne: not equal / not zero */

loc_00124452: ;
    ecx = esi;
    PUSH32(esp, 0x00124459u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00124459: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012445E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00124470
 * Original: 0x00124470 - 0x001244B5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124470: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0xC;
    ecx = 5;
    goto loc_00124480;

    /* nop */

loc_00124480: ;
    MEM8(eax) = 0;
    eax = eax + 0x10C;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00124480; /* jne: not equal / not zero */

loc_0012448B: ;
    ecx = esi + 0x540;
    PUSH32(esp, 0x00124496u); RECOMP_ABI_CALL(0x000F4550u, sub_000F4550); /* call 0x000F4550 */

loc_00124496: ;
    MEM32(esi + 0x564) = 0;
    ecx = esi;
    MEM32(esi + 0x568) = 0;
    PUSH32(esp, 0x001244B1u); RECOMP_ABI_CALL(0x001240C0u, sub_001240C0); /* call 0x001240C0 */

loc_001244B1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001244C0
 * Original: 0x001244C0 - 0x001244CC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001244C0(void)
{

loc_001244C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001244C8u); RECOMP_ABI_CALL(0x00124470u, sub_00124470); /* call 0x00124470 */

loc_001244C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001244D0
 * Original: 0x001244D0 - 0x001244F3 (35 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001244D0(void)
{

loc_001244D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi + 4) = 0x3FFFFFFF;
    MEM32(esi + 8) = 0xFFFFFFFFu;
    MEM32(esi) = 0x3DB204;
    PUSH32(esp, 0x001244EFu); RECOMP_ABI_CALL(0x001244C0u, sub_001244C0); /* call 0x001244C0 */

loc_001244EF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00124500
 * Original: 0x00124500 - 0x00124511 (17 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124500(void)
{

loc_00124500: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    eax = eax + ecx + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00124520
 * Original: 0x00124520 - 0x0012454D (45 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124520: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x10C);
    eax = eax + ecx + 0x18;
    PUSH32(esp, eax);
    eax = edx + ecx + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00124542u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00124542: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_S(_fas, _fbs)) ? 1 : 0); /* setl */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00124550
 * Original: 0x00124550 - 0x00124558 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124550(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00124550: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_00124560(); return; /* tail jmp 0x00124560 */

}

/**
 * sub_00124560
 * Original: 0x00124560 - 0x001245D2 (114 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124560: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x564;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x558);
    edi = MEM32(eax + 0x560);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    MEM32(eax + 0x558) = ecx;
    MEM32(eax + 0x560) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_001245B8; /* jl: less (signed <) */

loc_001245A7: ;
    MEM32(eax + 0x558) = 0;
    ecx = 4;
    goto loc_001245B9;

loc_001245B8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001245B9: ;
    MEM32(eax + ecx * 4 + 0x540) = esi;
    ecx = MEM32(eax + 0x568);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x568) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001245E0
 * Original: 0x001245E0 - 0x001245F2 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001245E0(void)
{

loc_001245E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001245E8u); RECOMP_ABI_CALL(0x001244D0u, sub_001244D0); /* call 0x001244D0 */

loc_001245E8: ;
    MEM32(esi) = 0x3DB21C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00124600
 * Original: 0x00124600 - 0x00124612 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124600(void)
{

loc_00124600: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00124608u); RECOMP_ABI_CALL(0x001245E0u, sub_001245E0); /* call 0x001245E0 */

loc_00124608: ;
    MEM32(esi) = 0x3DB234;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00124620
 * Original: 0x00124620 - 0x0012466B (75 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124620(void)
{

loc_00124620: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    ecx = esi + 0x1094;
    MEM32(esi) = 0x3DB24C;
    MEM32(esi + 0x1088) = ebx;
    MEM32(esi + 0x108C) = ebx;
    PUSH32(esp, 0x00124644u); RECOMP_ABI_CALL(0x00124600u, sub_00124600); /* call 0x00124600 */

loc_00124644: ;
    eax = 0; /* xor self */
    ecx = 0x420;
    edi = esi + 8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x00124655u); RECOMP_ABI_CALL(0x00231750u, sub_00231750); /* call 0x00231750 */

loc_00124655: ;
    ecx = esi;
    PUSH32(esp, 0x0012465Cu); RECOMP_ABI_CALL(0x00123A90u, sub_00123A90); /* call 0x00123A90 */

loc_0012465C: ;
    POP32(esp, edi);
    MEM8(esi + 0x1624) = LO8(ebx);
    MEM8(esi + 7) = LO8(ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00124670
 * Original: 0x00124670 - 0x001246CF (95 bytes, 41 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124670: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    goto loc_00124680;

    /* nop */

loc_00124680: ;
    eax = (uint32_t)(int32_t)SMEM8(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00124689u); RECOMP_ABI_CALL(0x003428D2u, sub_003428D2); /* call 0x003428D2 */

loc_00124689: ;
    esi = eax;
    eax = (uint32_t)(int32_t)SMEM8(ebx);
    PUSH32(esp, eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00124695u); RECOMP_ABI_CALL(0x003428D2u, sub_003428D2); /* call 0x003428D2 */

loc_00124695: ;
    esp = esp + 8;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001246A3; /* je: equal / zero */

loc_0012469E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001246A8; /* jne: not equal / not zero */

loc_001246A3: ;
    esi = 0x2F;

loc_001246A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001246B2; /* je: equal / zero */

loc_001246AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001246B7; /* jne: not equal / not zero */

loc_001246B2: ;
    eax = 0x2F;

loc_001246B7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001246C7; /* jne: not equal / not zero */

loc_001246BB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00124680; /* jne: not equal / not zero */

loc_001246BF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001246C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001246D0
 * Original: 0x001246D0 - 0x001246D4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001246D0(void)
{

loc_001246D0: ;
    SET_LO8(eax, MEM8(ecx + 4));
    esp += 4; return; /* ret */

}

/**
 * sub_001246E0
 * Original: 0x001246E0 - 0x001246E4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001246E0(void)
{

loc_001246E0: ;
    SET_LO8(eax, MEM8(ecx + 5));
    esp += 4; return; /* ret */

}

/**
 * sub_001246F0
 * Original: 0x001246F0 - 0x00124764 (116 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001246F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001246F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x1090);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124754; /* je: equal / zero */

loc_00124701: ;
    PUSH32(esp, edi);

loc_00124702: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    edi = MEM32(esi + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_00124742; /* je: equal / zero */

loc_0012470B: ;
    eax = MEM32(eax + 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00124717u); RECOMP_ABI_CALL(0x00128DE0u, sub_00128DE0); /* call 0x00128DE0 */

loc_00124717: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00124725u); RECOMP_ABI_CALL(0x0012C740u, sub_0012C740); /* call 0x0012C740 */

loc_00124725: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x110);
    PUSH32(esp, 0xE);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00124735u); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_00124735: ;
    edx = MEM32(esi);
    PUSH32(esp, 0xE);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012473Fu); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_0012473F: ;
    esp = esp + 0x18;

loc_00124742: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012474Au); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_0012474A: ;
    esp = esp + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00124702; /* jne: not equal / not zero */

loc_00124753: ;
    POP32(esp, edi);

loc_00124754: ;
    POP32(esp, esi);
    MEM32(ebx + 0x1090) = ebp;
    MEM32(ebx + 0x1088) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00124770
 * Original: 0x00124770 - 0x001247DD (109 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124770: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    SET_LO8(eax, MEM8(ebx + 0x1624));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001247D9; /* jne: not equal / not zero */

loc_0012477D: ;
    eax = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x108);
    ecx = MEM32(eax + ebx + 0x10C);
    PUSH32(esp, esi);
    esi = eax + ebx;
    SET_LO8(eax, MEM8(esi + 0x108));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_001247A8; /* je: equal / zero */

loc_0012479D: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001247A3u); RECOMP_ABI_CALL(0x0012C6D0u, sub_0012C6D0); /* call 0x0012C6D0 */

loc_001247A3: ;
    esp = esp + 4;
    goto loc_001247C8;

loc_001247A8: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x001247ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001247AD: ;
    ecx = MEM32(esi + 0x10C);
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001247C8; /* jne: not equal / not zero */

loc_001247C3: ;
    PUSH32(esp, 0x001247C8u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001247C8: ;
    eax = 0; /* xor self */
    edi = esi + 8;
    ecx = 0x42;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    MEM8(ebx + 7) = LO8(eax);
    POP32(esp, esi);

loc_001247D9: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001247E0
 * Original: 0x001247E0 - 0x001248DA (250 bytes, 95 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001247E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001247E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001247EBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001247EB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00124801; /* jne: not equal / not zero */

loc_001247EF: ;
    SET_LO8(eax, MEM8(edi + 0x1624));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00124801; /* je: equal / zero */

loc_001247F9: ;
    esi = MEM32(edi + 0x1628);
    goto loc_00124805;

loc_00124801: ;
    esi = MEM32(esp + 0x1C);

loc_00124805: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0012480E; /* jle: less or equal (signed <=) */

loc_00124809: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00124824; /* jl: less (signed <) */

loc_0012480E: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3DB2C8);
    PUSH32(esp, 0x0012481Bu); RECOMP_ABI_CALL(0x001231E0u, sub_001231E0); /* call 0x001231E0 */

loc_0012481B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00124821u); RECOMP_ABI_CALL(0x00123030u, sub_00123030); /* call 0x00123030 */

loc_00124821: ;
    esp = esp + 0x10;

loc_00124824: ;
    ebp = MEM32(esp + 0x14);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x108);
    SET_LO8(eax, MEM8(esi + edi + 0x108));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ebx = esi + edi;
    if (TEST_Z(_fa, _fb)) goto loc_00124857; /* je: equal / zero */

loc_0012483C: ;
    edi = MEM32(esp + 0x18);
    ecx = MEM32(ebx + 0x10C);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012484Eu); RECOMP_ABI_CALL(0x0012C520u, sub_0012C520); /* call 0x0012C520 */

loc_0012484E: ;
    esi = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    goto loc_001248BF;

loc_00124857: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edi = eax;
    MEM8(esp + 0x1C) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001248D3; /* je: equal / zero */

loc_00124866: ;
    ecx = MEM32(ebx + 0x10C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x00124875u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00124875: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012488A; /* jne: not equal / not zero */

loc_0012487B: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001248B5; /* jne: not equal / not zero */

loc_00124883: ;
    MEM8(esp + 0x1C) = 1;
    goto loc_001248A2;

loc_0012488A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001248A2; /* jne: not equal / not zero */

loc_0012488F: ;
    PUSH32(esp, 0x3DB2A4);
    PUSH32(esp, 0x00124899u); RECOMP_ABI_CALL(0x001231E0u, sub_001231E0); /* call 0x001231E0 */

loc_00124899: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012489Fu); RECOMP_ABI_CALL(0x00123030u, sub_00123030); /* call 0x00123030 */

loc_0012489F: ;
    esp = esp + 8;

loc_001248A2: ;
    edi = edi - esi;
    ebp = ebp + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00124866; /* jne: not equal / not zero */

loc_001248AA: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_001248B5: ;
    eax = MEM32(esp + 0x18);
    esi = eax;
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */

loc_001248BF: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001248D1; /* je: equal / zero */

loc_001248C1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001248D1; /* je: equal / zero */

loc_001248C5: ;
    PUSH32(esp, 0x001248CAu); RECOMP_ABI_CALL(0x00011320u, sub_00011320); /* call 0x00011320 */

loc_001248CA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001248D1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001248D1: ;
    eax = esi;

loc_001248D3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001248E0
 * Original: 0x001248E0 - 0x001248F2 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001248E0(void)
{

loc_001248E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 6);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001248ECu); RECOMP_ABI_CALL(0x00123530u, sub_00123530); /* call 0x00123530 */

loc_001248EC: ;
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00124900
 * Original: 0x00124900 - 0x00124929 (41 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124900: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012491C; /* jne: not equal / not zero */

loc_00124909: ;
    PUSH32(esp, 0x3DB2F8);
    PUSH32(esp, 0x00124913u); RECOMP_ABI_CALL(0x001231E0u, sub_001231E0); /* call 0x001231E0 */

loc_00124913: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00124919u); RECOMP_ABI_CALL(0x00123030u, sub_00123030); /* call 0x00123030 */

loc_00124919: ;
    esp = esp + 8;

loc_0012491C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00124922u); RECOMP_ABI_CALL(0x00123550u, xml1_guest_save_buffer_release); /* call 0x00123550 */

loc_00124922: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00124930
 * Original: 0x00124930 - 0x00124B3A (522 bytes, 165 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124930(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00124930: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ebp = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00124951; /* jne: not equal / not zero */

loc_0012493E: ;
    PUSH32(esp, 0x3DB30C);
    PUSH32(esp, 0x00124948u); RECOMP_ABI_CALL(0x001231E0u, sub_001231E0); /* call 0x001231E0 */

loc_00124948: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012494Eu); RECOMP_ABI_CALL(0x00123030u, sub_00123030); /* call 0x00123030 */

loc_0012494E: ;
    esp = esp + 8;

loc_00124951: ;
    ecx = ebp;
    PUSH32(esp, 0x00124958u); RECOMP_ABI_CALL(0x00124C10u, sub_00124C10); /* call 0x00124C10 */

loc_00124958: ;
    ebx = MEM32(esp + 0x18);
    MEM32(ebx) = eax;
    esi = MEM32(ebp + 0x1090);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00124980; /* jne: not equal / not zero */

loc_0012496C: ;
    POP32(esp, edi);
    MEM32(ebx) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00124978: ;
    esi = MEM32(esp + 0x18);
    /* nop */

loc_00124980: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001249EE; /* je: equal / zero */

loc_00124986: ;
    eax = MEM32(eax + 0x108);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x00124995u); RECOMP_ABI_CALL(0x001236C0u, sub_001236C0); /* call 0x001236C0 */

loc_00124995: ;
    edi = MEM32(esi);
    ecx = MEM32(edi + 0x10C);
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001249D3; /* je: equal / zero */

loc_001249A3: ;
    edx = ecx;
    esi = MEM32(edx + eax * 4);
    goto loc_001249B0;

    /* nop */

loc_001249B0: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esi);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x001249C0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001249C0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00124A65; /* jne: not equal / not zero */

loc_001249C8: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001249B0; /* jne: not equal / not zero */

loc_001249CF: ;
    esi = MEM32(esp + 0x18);

loc_001249D3: ;
    edi = MEM32(esp + 0x14);

loc_001249D7: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00124978; /* jne: not equal / not zero */

loc_001249E2: ;
    POP32(esp, edi);
    MEM32(ebx) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001249EE: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x001249F5u); RECOMP_ABI_CALL(0x00124120u, sub_00124120); /* call 0x00124120 */

loc_001249F5: ;
    ecx = MEM32(ebx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x108);
    MEM32(ecx + ebp + 0x10C) = eax;
    edx = MEM32(ebx);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x108);
    ecx = MEM32(edx + ebp + 0x10C);
    eax = MEM32(ecx);
    esp = esp + 4;
    PUSH32(esp, 0x3DB1FC);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00124A21u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00124A21: ;
    ecx = MEM32(ebx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x108);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00124B09; /* jne: not equal / not zero */

loc_00124A31: ;
    ecx = MEM32(ecx + ebp + 0x10C);
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00124A4D; /* jne: not equal / not zero */

loc_00124A48: ;
    PUSH32(esp, 0x00124A4Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00124A4D: ;
    edx = MEM32(ebx);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x108);
    MEM32(edx + ebp + 0x10C) = 0;
    goto loc_001249D7;

loc_00124A65: ;
    eax = MEM32(ebx);
    ecx = MEM32(edi + 0x100);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x108);
    edx = MEM32(esp + 0x14);
    MEM32(eax + ebp + 0x10C) = ecx;
    eax = MEM32(ebx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x108);
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    ecx = eax + ebp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00124A96u); RECOMP_ABI_CALL(0x00123220u, sub_00123220); /* call 0x00123220 */

loc_00124A96: ;
    edx = MEM32(ebx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x108);
    MEM8(edx + ebp) = 1;
    eax = MEM32(ebx);
    edx = MEM32(esi + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x108);
    eax = MEM32(eax + ebp + 0x10C);
    ecx = MEM32(eax);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(edi + 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x2C) = ecx;
    PUSH32(esp, 0x00124ACCu); RECOMP_ABI_CALL(0x00129920u, sub_00129920); /* call 0x00129920 */

loc_00124ACC: ;
    esi = MEM32(edi + 0x100);
    edi = MEM32(esp + 0x28);
    ecx = 0x22;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x2C);
    esi = MEM32(esp + 0x28);
    MEM32(esi) = ecx;
    edx = MEM32(ebx);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x108);
    eax = MEM32(edx + ebp + 0x10C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00124AFCu); RECOMP_ABI_CALL(0x0012C7B0u, sub_0012C7B0); /* call 0x0012C7B0 */

loc_00124AFC: ;
    eax = MEM32(esi + 0x4C);
    esp = esp + 0x18;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00124B09: ;
    PUSH32(esp, 0x100);
    edx = ecx + ebp + 8;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00124B19u); RECOMP_ABI_CALL(0x00123220u, sub_00123220); /* call 0x00123220 */

loc_00124B19: ;
    eax = MEM32(ebx);
    esp = esp + 0xC;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x108);
    MEM8(eax + ebp) = 0;
    ecx = MEM32(ebx);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00124B33u); RECOMP_ABI_CALL(0x00124B40u, sub_00124B40); /* call 0x00124B40 */

loc_00124B33: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00124B40
 * Original: 0x00124B40 - 0x00124B8A (74 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124B40(void)
{

loc_00124B40: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00124B4Du); RECOMP_ABI_CALL(0x00124B90u, sub_00124B90); /* call 0x00124B90 */

loc_00124B4D: ;
    esi = eax;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00124B59u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00124B59: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x00124B69u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00124B69: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00124B73u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00124B73: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ebx = eax;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x00124B82u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00124B82: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00124B90
 * Original: 0x00124B90 - 0x00124C07 (119 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124B90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00124BA1; /* jle: less or equal (signed <=) */

loc_00124B9C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00124BB7; /* jl: less (signed <) */

loc_00124BA1: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3DB398);
    PUSH32(esp, 0x00124BAEu); RECOMP_ABI_CALL(0x001231E0u, sub_001231E0); /* call 0x001231E0 */

loc_00124BAE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00124BB4u); RECOMP_ABI_CALL(0x00123030u, sub_00123030); /* call 0x00123030 */

loc_00124BB4: ;
    esp = esp + 0x10;

loc_00124BB7: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x108);
    esi = esi + eax;
    SET_LO8(eax, MEM8(esi + 0x108));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00124BDE; /* je: equal / zero */

loc_00124BCB: ;
    PUSH32(esp, 0x3DB368);
    PUSH32(esp, 0x00124BD5u); RECOMP_ABI_CALL(0x001231E0u, sub_001231E0); /* call 0x001231E0 */

loc_00124BD5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00124BDBu); RECOMP_ABI_CALL(0x00123030u, sub_00123030); /* call 0x00123030 */

loc_00124BDB: ;
    esp = esp + 8;

loc_00124BDE: ;
    eax = MEM32(esi + 0x10C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00124BFC; /* jne: not equal / not zero */

loc_00124BE8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3DB334);
    PUSH32(esp, 0x00124BF3u); RECOMP_ABI_CALL(0x001231E0u, sub_001231E0); /* call 0x001231E0 */

loc_00124BF3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00124BF9u); RECOMP_ABI_CALL(0x00123030u, sub_00123030); /* call 0x00123030 */

loc_00124BF9: ;
    esp = esp + 0xC;

loc_00124BFC: ;
    eax = MEM32(esi + 0x10C);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00124C10
 * Original: 0x00124C10 - 0x00124CE4 (212 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124C10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00124C10: ;
    eax = 0x10A4;
    PUSH32(esp, 0x00124C1Au); RECOMP_ABI_CALL(0x00341D40u, sub_00341D40); /* call 0x00341D40 */

loc_00124C1A: ;
    eax = MEM32(0x47A050);
    MEM32(esp + 0x10A0) = eax;
    eax = 1;
    edx = ecx + 0x214;
    PUSH32(esp, esi);

loc_00124C32: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124CD0; /* je: equal / zero */

loc_00124C3B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 0x108;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00124C32; /* jl: less (signed <) */

loc_00124C47: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM8(esp + 0x10) = 0;
    edi = 1;
    ebp = ecx + 0x110;
    /* nop */

loc_00124C60: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3DB3F0);
    PUSH32(esp, 0x00124C6Cu); RECOMP_ABI_CALL(0x001231E0u, sub_001231E0); /* call 0x001231E0 */

loc_00124C6C: ;
    ecx = esp + 0x1C;
    esp = esp + 0xC;
    esi = ecx + 1;

loc_00124C76: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00124C76; /* jne: not equal / not zero */

loc_00124C7D: ;
    edx = eax;
    ecx = ecx - esi;
    esi = edx + 1;

loc_00124C84: ;
    SET_LO8(ebx, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00124C84; /* jne: not equal / not zero */

loc_00124C8B: ;
    edx = edx - esi;
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10A0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10A0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00124CA5; /* jge: greater or equal (signed >=) */

loc_00124C97: ;
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00124CA2u); RECOMP_ABI_CALL(0x0003A280u, sub_0003A280); /* call 0x0003A280 */

loc_00124CA2: ;
    esp = esp + 8;

loc_00124CA5: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 0x108;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00124C60; /* jl: less (signed <) */

loc_00124CB1: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x3DB3C4);
    PUSH32(esp, 0x00124CC2u); RECOMP_ABI_CALL(0x001231E0u, sub_001231E0); /* call 0x001231E0 */

loc_00124CC2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00124CC8u); RECOMP_ABI_CALL(0x00123030u, sub_00123030); /* call 0x00123030 */

loc_00124CC8: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);

loc_00124CD0: ;
    ecx = MEM32(esp + 0x10A4);
    POP32(esp, esi);
    PUSH32(esp, 0x00124CDDu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00124CDD: ;
    esp = esp + 0x10A4;
    esp += 4; return; /* ret */

}

/**
 * sub_00124CF0
 * Original: 0x00124CF0 - 0x00124D32 (66 bytes, 27 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124CF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00124D0F; /* jne: not equal / not zero */

loc_00124CFC: ;
    PUSH32(esp, 0x3DB3F8);
    PUSH32(esp, 0x00124D06u); RECOMP_ABI_CALL(0x001231E0u, sub_001231E0); /* call 0x001231E0 */

loc_00124D06: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00124D0Cu); RECOMP_ABI_CALL(0x00123030u, sub_00123030); /* call 0x00123030 */

loc_00124D0C: ;
    esp = esp + 8;

loc_00124D0F: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00124D1B; /* jne: not equal / not zero */

loc_00124D14: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00124D1B: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00124D23u); RECOMP_ABI_CALL(0x00124D40u, sub_00124D40); /* call 0x00124D40 */

loc_00124D23: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00124D40
 * Original: 0x00124D40 - 0x00124E90 (336 bytes, 110 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124D40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00124D40: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351B48);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00124D76; /* jne: not equal / not zero */

loc_00124D63: ;
    PUSH32(esp, 0x3DB424);
    PUSH32(esp, 0x00124D6Du); RECOMP_ABI_CALL(0x001231E0u, sub_001231E0); /* call 0x001231E0 */

loc_00124D6D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00124D73u); RECOMP_ABI_CALL(0x00123030u, sub_00123030); /* call 0x00123030 */

loc_00124D73: ;
    esp = esp + 8;

loc_00124D76: ;
    ebp = MEM32(edi + 0x1090);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00124E2B; /* je: equal / zero */

loc_00124D84: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00124DCC; /* je: equal / zero */

loc_00124D8B: ;
    eax = MEM32(eax + 0x108);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00124D9Au); RECOMP_ABI_CALL(0x001236C0u, sub_001236C0); /* call 0x001236C0 */

loc_00124D9A: ;
    ecx = MEM32(ebp);
    edx = MEM32(ecx + 0x10C);
    esi = MEM32(edx + eax * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00124E20; /* je: equal / zero */

loc_00124DAA: ;
    /* nop */

loc_00124DB0: ;
    ecx = MEM32(esi);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00124DBBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00124DBB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00124E76; /* jne: not equal / not zero */

loc_00124DC3: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00124DB0; /* jne: not equal / not zero */

loc_00124DCA: ;
    goto loc_00124E20;

loc_00124DCC: ;
    edx = esp + 0x20;
    PUSH32(esp, 0xF);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00124DD8u); RECOMP_ABI_CALL(0x00124190u, sub_00124190); /* call 0x00124190 */

loc_00124DD8: ;
    esp = esp + 8;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DB1FC);
    PUSH32(esp, ebx);
    MEM32(esp + 0x20) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00124DF2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00124DF2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00124E43; /* jne: not equal / not zero */

loc_00124DF6: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00124E20; /* je: equal / zero */

loc_00124E08: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00124E20; /* jne: not equal / not zero */

loc_00124E1B: ;
    PUSH32(esp, 0x00124E20u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00124E20: ;
    ebp = MEM32(ebp + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00124D84; /* jne: not equal / not zero */

loc_00124E2B: ;
    eax = eax | 0xFFFFFFFFu;
    ecx = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_00124E43: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00124E4Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00124E4C: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00124E76; /* je: equal / zero */

loc_00124E5E: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00124E76; /* jne: not equal / not zero */

loc_00124E71: ;
    PUSH32(esp, 0x00124E76u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00124E76: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00124FB0
 * Original: 0x00124FB0 - 0x00125152 (418 bytes, 135 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124FB0: ;
    esp = esp - 0x408;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3DB4CC);
    PUSH32(esp, 0x3DB4C0);
    PUSH32(esp, 0x3DB4B8);
    MEM32(esp + 0x414) = eax;
    eax = esp + 0x14;
    PUSH32(esp, 0x3CE048);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00124FE1u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00124FE1: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00124FEBu); RECOMP_ABI_CALL(0x001241E0u, sub_001241E0); /* call 0x001241E0 */

loc_00124FEB: ;
    esi = eax;
    esp = esp + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012500C; /* jne: not equal / not zero */

loc_00124FF4: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3DB484);
    PUSH32(esp, 0x00125003u); RECOMP_ABI_CALL(0x001231E0u, sub_001231E0); /* call 0x001231E0 */

loc_00125003: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00125009u); RECOMP_ABI_CALL(0x00123030u, sub_00123030); /* call 0x00123030 */

loc_00125009: ;
    esp = esp + 0xC;

loc_0012500C: ;
    MEM8(0x506338) = 0;
    eax = 0; /* xor self */
    goto loc_00125020;

    /* nop */
    edi = edi;

loc_00125020: ;
    SET_LO8(ecx, MEM8(eax + 0x3CAA94));
    MEM8(eax + 0x506738) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00125020; /* jne: not equal / not zero */

loc_00125031: ;
    eax = 0x506738;

loc_00125036: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x2F (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012503E; /* jne: not equal / not zero */

loc_0012503B: ;
    MEM8(eax) = 0x5C;

loc_0012503E: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00125036; /* jne: not equal / not zero */

loc_00125046: ;
    eax = 0; /* xor self */
    goto loc_00125050;

    /* nop */

loc_00125050: ;
    SET_LO8(ecx, MEM8(eax + 0x506738));
    MEM8(esp + eax + 4) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00125050; /* jne: not equal / not zero */

loc_0012505F: ;
    eax = 0x506338;
    edx = eax + 1;

loc_00125067: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00125067; /* jne: not equal / not zero */

loc_0012506E: ;
    eax = eax - edx;
    eax = eax + esi;
    edx = 0x506438;
    edx = edx - eax;
    /* nop */

loc_00125080: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00125080; /* jne: not equal / not zero */

loc_0012508A: ;
    eax = 0x506438;
    edx = eax + 1;

loc_00125092: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00125092; /* jne: not equal / not zero */

loc_00125099: ;
    eax = eax - edx;
    ecx = eax;
    eax = esp + 8;
    esi = eax + 1;

loc_001250A4: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001250A4; /* jne: not equal / not zero */

loc_001250AB: ;
    eax = eax - esi;
    ecx = ecx - eax;
    MEM8(ecx + 0x506438) = LO8(edx);
    eax = 0; /* xor self */
    POP32(esp, esi);
    goto loc_001250C0;

    /* nop */

loc_001250C0: ;
    SET_LO8(ecx, MEM8(eax + 0x506438));
    MEM8(eax + 0x506738) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001250C0; /* jne: not equal / not zero */

loc_001250D1: ;
    eax = 0x506738;

loc_001250D6: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x2F (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001250DE; /* jne: not equal / not zero */

loc_001250DB: ;
    MEM8(eax) = 0x5C;

loc_001250DE: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001250D6; /* jne: not equal / not zero */

loc_001250E6: ;
    eax = 0; /* xor self */
    goto loc_001250F0;

    /* nop */

loc_001250F0: ;
    SET_LO8(ecx, MEM8(eax + 0x506738));
    MEM8(eax + 0x506438) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001250F0; /* jne: not equal / not zero */

loc_00125101: ;
    SET_LO8(eax, MEM8(0x506438));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012513F; /* je: equal / zero */

loc_0012510A: ;
    eax = 0x506438;
    edx = eax + 1;

loc_00125112: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00125112; /* jne: not equal / not zero */

loc_00125119: ;
    SET_LO8(ecx, MEM8(esp));
    eax = eax - edx;
    SET_LO8(eax, MEM8(eax + 0x506437));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012513F; /* jne: not equal / not zero */

loc_00125128: ;
    eax = 0x506438;
    edx = eax + 1;

loc_00125130: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00125130; /* jne: not equal / not zero */

loc_00125137: ;
    eax = eax - edx;
    MEM8(eax + 0x506437) = LO8(ecx);

loc_0012513F: ;
    ecx = MEM32(esp + 0x404);
    PUSH32(esp, 0x0012514Bu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0012514B: ;
    esp = esp + 0x408;
    esp += 4; return; /* ret */

}

/**
 * sub_00125160
 * Original: 0x00125160 - 0x00125167 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125160(void)
{

loc_00125160: ;
    MEM32(ecx) = 0x3DB24C;
    esp += 4; return; /* ret */

}

/**
 * sub_00125170
 * Original: 0x00125170 - 0x0012520C (156 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125170: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351B9C);
    PUSH32(esp, eax);
    _fa = (uint32_t)(MEM8(0x508448)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x508448), 1 (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_001251BC; /* jne: not equal / not zero */

loc_0012518E: ;
    MEM32(0x508448) = MEM32(0x508448) | 1;
    ecx = 0x506E18;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x001251A7u); RECOMP_ABI_CALL(0x00124620u, sub_00124620); /* call 0x00124620 */

loc_001251A7: ;
    PUSH32(esp, 0x35A340);
    PUSH32(esp, 0x001251B1u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_001251B1: ;
    esp = esp + 4;
    MEM32(esp + 8) = 0xFFFFFFFFu;

loc_001251BC: ;
    SET_LO8(ecx, MEM8(0x508448));
    eax = 2;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001251E3; /* jne: not equal / not zero */

loc_001251CB: ;
    MEM32(0x508448) = MEM32(0x508448) | eax;
    ecx = 0x506D40;
    MEM32(esp + 8) = 1;
    PUSH32(esp, 0x001251E3u); RECOMP_ABI_CALL(0x0011DB20u, sub_0011DB20); /* call 0x0011DB20 */

loc_001251E3: ;
    SET_LO8(eax, MEM8(0x506E1F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001251F9; /* je: equal / zero */

loc_001251EC: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = 0x506D40;
    if (TEST_Z(_fa, _fb)) goto loc_001251FE; /* je: equal / zero */

loc_001251F9: ;
    eax = 0x506E18;

loc_001251FE: ;
    ecx = MEM32(esp);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00125210
 * Original: 0x00125210 - 0x00125262 (82 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125210: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00125220; /* jne: not equal / not zero */

loc_0012521A: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00125220: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x00125232u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00125232: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00125240; /* jne: not equal / not zero */

loc_00125239: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00125240: ;
    PUSH32(esp, 0);
    MEM8(esi + 7) = 1;
    PUSH32(esp, 0x0012524Bu); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_0012524B: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    esp = esp + 4;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0012525Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012525B: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00125270
 * Original: 0x00125270 - 0x0012530C (156 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125270: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x0012527Bu); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_0012527B: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    esp = esp + 4;
    edi = esi + 0x1628;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x00125291u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00125291: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 0x162C) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00125305; /* jle: less or equal (signed <=) */

loc_0012529C: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001252A3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001252A3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001252D1; /* jne: not equal / not zero */

loc_001252A7: ;
    eax = MEM32(edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x108);
    _fa = (uint32_t)(MEM8(eax + esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + esi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001252D1; /* jne: not equal / not zero */

loc_001252B6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001252BDu); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_001252BD: ;
    ecx = MEM32(edi);
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x001252CAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001252CA: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001252D1: ;
    eax = MEM32(esi + 0x1088);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esi + 0x1624) = 1;
    if (TEST_NZ(_fa, _fb)) goto loc_001252FE; /* jne: not equal / not zero */

loc_001252E2: ;
    edx = MEM32(0x5BC33C);
    eax = MEM32(edx + 0x3C);
    MEM32(esi + 0x1088) = eax;
    ecx = MEM32(0x5BC33C);
    MEM32(ecx + 0x3C) = 0x19C330;

loc_001252FE: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00125305: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00125310
 * Original: 0x00125310 - 0x0012535D (77 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125310(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00125310: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x1624));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00125359; /* je: equal / zero */

loc_0012531F: ;
    eax = MEM32(esi + 0x1088);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00125338; /* je: equal / zero */

loc_00125329: ;
    edx = MEM32(0x5BC33C);
    MEM32(edx + 0x3C) = eax;
    MEM32(esi + 0x1088) = ecx;

loc_00125338: ;
    PUSH32(esp, ecx);
    MEM8(esi + 0x1624) = LO8(ecx);
    PUSH32(esp, 0x00125344u); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_00125344: ;
    ecx = MEM32(esi + 0x1628);
    edx = MEM32(eax);
    esp = esp + 4;
    POP32(esp, esi);
    MEM32(esp + 4) = ecx;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x4C)); return; /* indirect tail jmp */

loc_00125359: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00125360
 * Original: 0x00125360 - 0x00125455 (245 bytes, 94 insns)
 * Category: game_io
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00125360(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125360: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012537C; /* jne: not equal / not zero */

loc_00125369: ;
    PUSH32(esp, 0x3DB3F8);
    PUSH32(esp, 0x00125373u); RECOMP_ABI_CALL(0x001231E0u, sub_001231E0); /* call 0x001231E0 */

loc_00125373: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00125379u); RECOMP_ABI_CALL(0x00123030u, sub_00123030); /* call 0x00123030 */

loc_00125379: ;
    esp = esp + 8;

loc_0012537C: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012538B; /* jne: not equal / not zero */

loc_00125382: ;
    eax = 0xFFFFFFFFu;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0012538B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00125393u); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_00125393: ;
    edx = MEM32(eax);
    esp = esp + 4;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x001253A3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001253A3: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012543F; /* je: equal / zero */

loc_001253AE: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001253D3; /* jne: not equal / not zero */

loc_001253B6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001253BDu); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_001253BD: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x001253CCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001253CC: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_001253D3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = esi + 1;
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001253E0u); RECOMP_ABI_CALL(0x00123530u, sub_00123530); /* call 0x00123530 */

loc_001253E0: ;
    edi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001253FE; /* jne: not equal / not zero */

loc_001253E9: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3DB4D4);
    PUSH32(esp, 0x001253F5u); RECOMP_ABI_CALL(0x001231E0u, sub_001231E0); /* call 0x001231E0 */

loc_001253F5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001253FBu); RECOMP_ABI_CALL(0x00123030u, sub_00123030); /* call 0x00123030 */

loc_001253FB: ;
    esp = esp + 0x10;

loc_001253FE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00125405u); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_00125405: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(eax);
    esp = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00125416u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00125416: ;
    PUSH32(esp, 0);
    MEM8(edi + esi) = 0;
    PUSH32(esp, 0x00125421u); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_00125421: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00125430u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00125430: ;
    edx = MEM32(esp + 0x18);
    MEM32(edx) = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0012543F: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012544D; /* je: equal / zero */

loc_00125447: ;
    MEM32(eax) = 0;

loc_0012544D: ;
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00125460
 * Original: 0x00125460 - 0x00125502 (162 bytes, 62 insns)
 * Category: game_io
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125460: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0012547D; /* jne: not equal / not zero */

loc_0012546A: ;
    PUSH32(esp, 0x3DB538);
    PUSH32(esp, 0x00125474u); RECOMP_ABI_CALL(0x001231E0u, sub_001231E0); /* call 0x001231E0 */

loc_00125474: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012547Au); RECOMP_ABI_CALL(0x00123030u, sub_00123030); /* call 0x00123030 */

loc_0012547A: ;
    esp = esp + 8;

loc_0012547D: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00125498; /* jne: not equal / not zero */

loc_00125485: ;
    PUSH32(esp, 0x3DB510);
    PUSH32(esp, 0x0012548Fu); RECOMP_ABI_CALL(0x001231E0u, sub_001231E0); /* call 0x001231E0 */

loc_0012548F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00125495u); RECOMP_ABI_CALL(0x00123030u, sub_00123030); /* call 0x00123030 */

loc_00125495: ;
    esp = esp + 8;

loc_00125498: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001254A7; /* jne: not equal / not zero */

loc_0012549D: ;
    POP32(esp, edi);
    eax = 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001254A7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001254AEu); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_001254AE: ;
    edx = MEM32(eax);
    esp = esp + 4;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x001254BEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001254BE: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001254FA; /* je: equal / zero */

loc_001254C5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001254CCu); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_001254CC: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    esp = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x001254DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001254DD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001254E4u); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_001254E4: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x001254F3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001254F3: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001254FA: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00125510
 * Original: 0x00125510 - 0x00125532 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125510(void)
{

loc_00125510: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3DB560);
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012552Eu); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_0012552E: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00125540
 * Original: 0x00125540 - 0x00125578 (56 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125540: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, 0x3D3FF4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00125550u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_00125550: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00125574; /* je: equal / zero */

loc_00125557: ;
    PUSH32(esp, esi);
    eax = eax - edi;
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00125568u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00125568: ;
    esp = esp + 0xC;
    MEM8(esi + edi) = 0;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00125574: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00125580
 * Original: 0x00125580 - 0x001255B8 (56 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125580: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x3D3FF4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00125590u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_00125590: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012559A; /* je: equal / zero */

loc_00125597: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0012559C;

loc_0012559A: ;
    eax = esi;

loc_0012559C: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001255B5; /* je: equal / zero */

loc_001255A2: ;
    edx = MEM32(esp + 8);
    edx = edx - eax;

loc_001255A8: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001255A8; /* jne: not equal / not zero */

loc_001255B2: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_001255B5: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_001255C0
 * Original: 0x001255C0 - 0x00125603 (67 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001255C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001255C0: ;
    SET_LO8(ecx, MEM8(0x508550));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001255DC; /* jne: not equal / not zero */

loc_001255CF: ;
    MEM32(0x508550) = MEM32(0x508550) | eax;
    MEM8(0x508450) = 0;

loc_001255DC: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3DB560);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x508450);
    PUSH32(esp, 0x001255FAu); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_001255FA: ;
    esp = esp + 0x14;
    eax = 0x508450;
    esp += 4; return; /* ret */

}

/**
 * sub_00125610
 * Original: 0x00125610 - 0x001256AE (158 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125610(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00125610: ;
    esp = esp - 0x104;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x110);
    PUSH32(esp, 0x3D3FF4);
    PUSH32(esp, edi);
    MEM32(esp + 0x110) = eax;
    PUSH32(esp, 0x00125636u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_00125636: ;
    ebp = MEM32(esp + 0x11C);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00125690; /* je: equal / zero */

loc_00125644: ;
    PUSH32(esp, esi);
    eax = eax - edi;
    esi = eax;
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM8(esp + 0x18) = 0;
    PUSH32(esp, 0x0012565Au); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0012565A: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    MEM8(esp + esi + 0x1C) = 0;
    PUSH32(esp, 0x00125669u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_00125669: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebp) = eax;
    POP32(esp, esi);
    if (TEST_S(_fas, _fbs)) goto loc_00125690; /* jl: less (signed <) */

loc_00125674: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00125690; /* jge: greater or equal (signed >=) */

loc_00125679: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x100);
    PUSH32(esp, 0x00125689u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00125689: ;
    esp = esp + 0x104;
    esp += 4; return; /* ret */

loc_00125690: ;
    ecx = MEM32(esp + 0x108);
    POP32(esp, edi);
    MEM32(ebp) = 0;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    PUSH32(esp, 0x001256A7u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_001256A7: ;
    esp = esp + 0x104;
    esp += 4; return; /* ret */

}

/**
 * sub_001256B0
 * Original: 0x001256B0 - 0x001256DA (42 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001256B0(void)
{

loc_001256B0: ;
    eax = ecx;
    ecx = ecx | 0xFFFFFFFFu;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0x280;
    MEM32(eax + 8) = 0x1C0;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM8(eax + 0x1C) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001256E0
 * Original: 0x001256E0 - 0x00125819 (313 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001256E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001256E0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351BB8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(0x5BC508);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x38);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esp + 0xC;
    PUSH32(esp, 0xF);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012570Fu); RECOMP_ABI_CALL(0x0011D4C0u, sub_0011D4C0); /* call 0x0011D4C0 */

loc_0012570F: ;
    esp = esp + 8;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C806C);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3DB5B8);
    PUSH32(esp, 2);
    ecx = esi;
    MEM32(esp + 0x2C) = 0;
    PUSH32(esp, 0x00125734u); RECOMP_ABI_CALL(0x00230C80u, sub_00230C80); /* call 0x00230C80 */

loc_00125734: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3DB5B0);
    ecx = esi;
    PUSH32(esp, 0x00125742u); RECOMP_ABI_CALL(0x0022CF20u, sub_0022CF20); /* call 0x0022CF20 */

loc_00125742: ;
    PUSH32(esp, 1);
    ebx = eax;
    PUSH32(esp, 0x280);
    eax = edi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D6168);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0012575Cu); RECOMP_ABI_CALL(0x00230B50u, sub_00230B50); /* call 0x00230B50 */

loc_0012575C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x1C0);
    ecx = edi + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3C85C8);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00125774u); RECOMP_ABI_CALL(0x00230B50u, sub_00230B50); /* call 0x00230B50 */

loc_00125774: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFFFFu);
    edx = edi + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3DB5A4);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00125789u); RECOMP_ABI_CALL(0x00230B50u, sub_00230B50); /* call 0x00230B50 */

loc_00125789: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DB598);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0012579Eu); RECOMP_ABI_CALL(0x00230B50u, sub_00230B50); /* call 0x00230B50 */

loc_0012579E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = edi + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3DB58C);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001257B3u); RECOMP_ABI_CALL(0x00230B50u, sub_00230B50); /* call 0x00230B50 */

loc_001257B3: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFFFFu);
    edx = edi + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3DB580);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001257C8u); RECOMP_ABI_CALL(0x00230B50u, sub_00230B50); /* call 0x00230B50 */

loc_001257C8: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    edi = edi + 0x1C;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3DB56C);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001257DDu); RECOMP_ABI_CALL(0x002311C0u, sub_002311C0); /* call 0x002311C0 */

loc_001257DD: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00125807; /* je: equal / zero */

loc_001257EF: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00125807; /* jne: not equal / not zero */

loc_00125802: ;
    PUSH32(esp, 0x00125807u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00125807: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00125820
 * Original: 0x00125820 - 0x00125886 (102 bytes, 28 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125820(void)
{

loc_00125820: ;
    esp = esp - 0x804;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x810);
    MEM32(esp + 0x808) = eax;
    eax = MEM32(esp + 0x814);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esi + 0xC) = edi;
    PUSH32(esp, 0x00125853u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00125853: ;
    edx = MEM32(esp + 0x824);
    esp = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esp + edi + 0x10) = 0;
    PUSH32(esp, 0x0012586Fu); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_0012586F: ;
    ecx = MEM32(esp + 0x808);
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x0012587Du); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0012587D: ;
    esp = esp + 0x804;
    esp += 16; return; /* ret 12 */

}



/**
 * sub_001258C0
 * Original: 0x001258C0 - 0x001258E7 (39 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001258C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001258C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    PUSH32(esp, edi);
    edi = eax + 1;
    goto loc_001258D0;

    /* nop */

loc_001258D0: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001258D0; /* jne: not equal / not zero */

loc_001258D7: ;
    PUSH32(esp, 2);
    eax = eax - edi;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001258E2u); RECOMP_ABI_CALL(0x00125820u, sub_00125820); /* call 0x00125820 */

loc_001258E2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001258F0
 * Original: 0x001258F0 - 0x001258F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001258F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001258F0: ;
    g_seh_ebp = ebp; sub_00199F10(); return; /* tail jmp 0x00199F10 */

}

/**
 * sub_00125900
 * Original: 0x00125900 - 0x001259C2 (194 bytes, 67 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125900: ;
    eax = 0x1004;
    PUSH32(esp, 0x0012590Au); RECOMP_ABI_CALL(0x00341D40u, sub_00341D40); /* call 0x00341D40 */

loc_0012590A: ;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    MEM32(esp + 0x1004) = eax;
    ebx = ecx;
    PUSH32(esp, 0x0012591Eu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0012591E: ;
    edx = esp + 4;

loc_00125922: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00125922; /* jne: not equal / not zero */

loc_0012592C: ;
    eax = MEM32(esp + 0x100C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1014);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 0x814;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012594Bu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0012594B: ;
    eax = esp + 0x818;
    esp = esp + 0xC;
    MEM8(esp + esi + 0x80C) = 0;
    edx = eax;
    /* nop */

loc_00125960: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00125960; /* jne: not equal / not zero */

loc_00125967: ;
    edi = esp + 0xC;
    eax = eax - edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_00125970: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00125970; /* jne: not equal / not zero */

loc_00125978: ;
    ecx = eax;
    ecx = ecx >> 2;
    esi = edx;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    edx = esp + 0xC;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x00125994u); RECOMP_ABI_CALL(0x0019A190u, sub_0019A190); /* call 0x0019A190 */

loc_00125994: ;
    eax = esp + 0xC;
    POP32(esp, edi);
    edx = eax + 1;
    POP32(esp, esi);
    /* nop */

loc_001259A0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001259A0; /* jne: not equal / not zero */

loc_001259A7: ;
    ecx = MEM32(esp + 0x1004);
    eax = eax - edx;
    MEM32(ebx + 0xC) = eax;
    POP32(esp, ebx);
    PUSH32(esp, 0x001259B9u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_001259B9: ;
    esp = esp + 0x1004;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001259D0
 * Original: 0x001259D0 - 0x001259F5 (37 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001259D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001259D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    PUSH32(esp, edi);
    edi = eax + 1;
    goto loc_001259E0;

    /* nop */

loc_001259E0: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001259E0; /* jne: not equal / not zero */

loc_001259E7: ;
    eax = eax - edi;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001259F0u); RECOMP_ABI_CALL(0x00125900u, sub_00125900); /* call 0x00125900 */

loc_001259F0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00125A00
 * Original: 0x00125A00 - 0x00125A14 (20 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125A00(void)
{

loc_00125A00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x15);
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00125A0Eu); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_00125A0E: ;
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00125A20
 * Original: 0x00125A20 - 0x00125A32 (18 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125A20(void)
{

loc_00125A20: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00125A2Cu); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_00125A2C: ;
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00125A40
 * Original: 0x00125A40 - 0x00125A6D (45 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125A40: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x28) = 0;
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00125A64; /* je: equal / zero */

loc_00125A5B: ;
    MEM32(edx + 0x28) = eax;
    MEM32(ecx + 0x10) = eax;
    esp += 8; return; /* ret 4 */

loc_00125A64: ;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00125A70
 * Original: 0x00125A70 - 0x00125A77 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125A70(void)
{

loc_00125A70: ;
    MEM32(ecx) = 0x3DB5D4;
    esp += 4; return; /* ret */

}

/**
 * sub_00125A80
 * Original: 0x00125A80 - 0x00125A9F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125A80: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3DB5D4;
    if (TEST_Z(_fa, _fb)) goto loc_00125A99; /* je: equal / zero */

loc_00125A90: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00125A96u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00125A96: ;
    esp = esp + 4;

loc_00125A99: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00125AA0
 * Original: 0x00125AA0 - 0x00125B36 (150 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125AA0(void)
{

loc_00125AA0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351BE3);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = esi;
    edi = esi + 4;
    ebx = 0; /* xor self */
    ecx = edi;
    MEM32(esp + 0x30) = ebx;
    MEM32(esi) = 0x3DB5E0;
    PUSH32(esp, 0x00125AD7u); RECOMP_ABI_CALL(0x00199E10u, sub_00199E10); /* call 0x00199E10 */

loc_00125AD7: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00125AE7u); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_00125AE7: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00125AEFu); RECOMP_ABI_CALL(0x00199E20u, sub_00199E20); /* call 0x00199E20 */

loc_00125AEF: ;
    MEM32(edi + 0xC) = ebx;
    edi = esi + 0x14;
    ecx = edi;
    MEM8(esp + 0x30) = 1;
    PUSH32(esp, 0x00125B01u); RECOMP_ABI_CALL(0x00199E10u, sub_00199E10); /* call 0x00199E10 */

loc_00125B01: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00125B11u); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_00125B11: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00125B19u); RECOMP_ABI_CALL(0x00199E20u, sub_00199E20); /* call 0x00199E20 */

loc_00125B19: ;
    ecx = MEM32(esp + 0x28);
    MEM32(edi + 0xC) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_00125B40
 * Original: 0x00125B40 - 0x00125BC8 (136 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125B40(void)
{

loc_00125B40: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351C03);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x14;
    MEM32(esp + 0x28) = 1;
    edi = esi + 0x14;
    PUSH32(esp, 0x00125B7Bu); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_00125B7B: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00125B83u); RECOMP_ABI_CALL(0x00199E20u, sub_00199E20); /* call 0x00199E20 */

loc_00125B83: ;
    PUSH32(esp, 2);
    MEM32(edi + 0xC) = 0;
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x14;
    MEM8(esp + 0x28) = 0;
    edi = esi + 4;
    PUSH32(esp, 0x00125BA2u); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_00125BA2: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00125BAAu); RECOMP_ABI_CALL(0x00199E20u, sub_00199E20); /* call 0x00199E20 */

loc_00125BAA: ;
    ecx = MEM32(esp + 0x18);
    MEM32(edi + 0xC) = 0;
    MEM32(esi) = 0x3DB5D4;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00125BD0
 * Original: 0x00125BD0 - 0x00125BE4 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00125BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125BD0: ;
    eax = MEM32(ecx + 0x28);
    ecx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00125BE3; /* jne: not equal / not zero */

loc_00125BDA: ;
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00125BE3; /* jne: not equal / not zero */

loc_00125BE1: ;
    eax = 0; /* xor self */

loc_00125BE3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00125BF0
 * Original: 0x00125BF0 - 0x00125BF5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125BF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00125BF0: ;
    g_seh_ebp = ebp; sub_00125B40(); return; /* tail jmp 0x00125B40 */

}

/**
 * sub_00125C00
 * Original: 0x00125C00 - 0x00125C34 (52 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125C00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00125C24; /* je: equal / zero */

loc_00125C0C: ;
    ebx = MEM32(esp + 0x10);

loc_00125C10: ;
    PUSH32(esp, ebx);
    ecx = esi + 4;
    PUSH32(esp, 0x00125C19u); RECOMP_ABI_CALL(0x00199F10u, sub_00199F10); /* call 0x00199F10 */

loc_00125C19: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00125C2C; /* jne: not equal / not zero */

loc_00125C1D: ;
    esi = MEM32(esi + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00125C10; /* jne: not equal / not zero */

loc_00125C24: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00125C2C: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00125C40
 * Original: 0x00125C40 - 0x00125C4A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125C40: ;
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00125C50
 * Original: 0x00125C50 - 0x00125CD6 (134 bytes, 48 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125C50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00125C50: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x104);
    ecx = MEM32(ebx + 0x108);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00125CD2; /* jle: less or equal (signed <=) */

loc_00125C69: ;
    PUSH32(esp, ebp);
    ebp = ecx + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_00125C76; /* jge: greater or equal (signed >=) */

loc_00125C73: ;
    ebp = edx + ebp * 2;

loc_00125C76: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00125C7Du); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_00125C7D: ;
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00125C87u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00125C87: ;
    ecx = MEM32(ebx + 0x104);
    esi = MEM32(ebx + 0x100);
    edi = eax;
    MEM32(esp + 0x14) = eax;
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
    PUSH32(esp, 0);
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    PUSH32(esp, 0x00125CAEu); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_00125CAE: ;
    ecx = MEM32(ebx + 0x100);
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00125CBFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00125CBF: ;
    edx = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x108) = ebp;
    MEM32(ebx + 0x100) = edx;
    POP32(esp, ebp);

loc_00125CD2: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00125CE0
 * Original: 0x00125CE0 - 0x00125D31 (81 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125CE0: ;
    eax = MEM32(esp + 8);
    edx = eax + 1;

loc_00125CE7: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00125CE7; /* jne: not equal / not zero */

loc_00125CEE: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = eax - edx;
    eax = eax + 0x800;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00125D02u); RECOMP_ABI_CALL(0x00125C50u, sub_00125C50); /* call 0x00125C50 */

loc_00125D02: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esi + 0x100);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = edx + MEM32(esi + 0x104);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00125D1Eu); RECOMP_ABI_CALL(0x00342A40u, sub_00342A40); /* call 0x00342A40 */

loc_00125D1E: ;
    ecx = MEM32(esi + 0x104);
    ecx = ecx + eax;
    esp = esp + 0xC;
    MEM32(esi + 0x104) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00125D40
 * Original: 0x00125D40 - 0x00125D91 (81 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125D40(void)
{

loc_00125D40: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00125D4Cu); RECOMP_ABI_CALL(0x00199E10u, sub_00199E10); /* call 0x00199E10 */

loc_00125D4C: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00125D5Cu); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_00125D5C: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00125D64u); RECOMP_ABI_CALL(0x00199E20u, sub_00199E20); /* call 0x00199E20 */

loc_00125D64: ;
    eax = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x00125D7Bu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00125D7B: ;
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00125D87u); RECOMP_ABI_CALL(0x00125820u, sub_00125820); /* call 0x00125820 */

loc_00125D87: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}



/**
 * sub_00125E00
 * Original: 0x00125E00 - 0x00125E49 (73 bytes, 24 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125E00(void)
{

loc_00125E00: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00125E0Bu); RECOMP_ABI_CALL(0x00199E10u, sub_00199E10); /* call 0x00199E10 */

loc_00125E0B: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00125E1Bu); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_00125E1B: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00125E23u); RECOMP_ABI_CALL(0x00199E20u, sub_00199E20); /* call 0x00199E20 */

loc_00125E23: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x00125E40u); RECOMP_ABI_CALL(0x00125820u, sub_00125820); /* call 0x00125820 */

loc_00125E40: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00125E50
 * Original: 0x00125E50 - 0x00125E74 (36 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125E50(void)
{

loc_00125E50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00125E63u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00125E63: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00125E6Fu); RECOMP_ABI_CALL(0x00125820u, sub_00125820); /* call 0x00125820 */

loc_00125E6F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00125E80
 * Original: 0x00125E80 - 0x00125EFE (126 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125E80(void)
{

loc_00125E80: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351C18);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = esi;
    edi = esi + 0x14;
    ebx = 0; /* xor self */
    ecx = edi;
    MEM32(esp + 0x24) = ebx;
    MEM32(esi) = 0x3DB5F8;
    PUSH32(esp, 0x00125EB7u); RECOMP_ABI_CALL(0x00199E10u, sub_00199E10); /* call 0x00199E10 */

loc_00125EB7: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00125EC7u); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_00125EC7: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00125ECFu); RECOMP_ABI_CALL(0x00199E20u, sub_00199E20); /* call 0x00199E20 */

loc_00125ECF: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x1C);
    MEM32(edi + 0xC) = ebx;
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00125F00
 * Original: 0x00125F00 - 0x00125F32 (50 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125F00: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00125F24; /* je: equal / zero */

loc_00125F09: ;
    edi = MEM32(esp + 0xC);
    /* nop */

loc_00125F10: ;
    PUSH32(esp, edi);
    ecx = esi + 0x14;
    PUSH32(esp, 0x00125F19u); RECOMP_ABI_CALL(0x00199F10u, sub_00199F10); /* call 0x00199F10 */

loc_00125F19: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00125F2B; /* jne: not equal / not zero */

loc_00125F1D: ;
    esi = MEM32(esi + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00125F10; /* jne: not equal / not zero */

loc_00125F24: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00125F2B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00125F40
 * Original: 0x00125F40 - 0x00125F54 (20 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125F40: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00125F4E; /* jne: not equal / not zero */

loc_00125F48: ;
    eax = MEM32(ecx + 0xC);
    esp += 8; return; /* ret 4 */

loc_00125F4E: ;
    eax = MEM32(eax + 0x28);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00125F60
 * Original: 0x00125F60 - 0x00125F92 (50 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125F60: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00125F84; /* je: equal / zero */

loc_00125F69: ;
    edi = MEM32(esp + 0xC);
    /* nop */

loc_00125F70: ;
    PUSH32(esp, edi);
    ecx = esi + 0x14;
    PUSH32(esp, 0x00125F79u); RECOMP_ABI_CALL(0x00199F10u, sub_00199F10); /* call 0x00199F10 */

loc_00125F79: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00125F8B; /* jne: not equal / not zero */

loc_00125F7D: ;
    esi = MEM32(esi + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00125F70; /* jne: not equal / not zero */

loc_00125F84: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00125F8B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00125FA0
 * Original: 0x00125FA0 - 0x00125FD9 (57 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125FA0: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00125FC6; /* je: equal / zero */

loc_00125FA8: ;
    ecx = 1;
    /* nop */

loc_00125FB0: ;
    esi = MEM32(eax + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00125FCA; /* jne: not equal / not zero */

loc_00125FBF: ;
    eax = MEM32(eax + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00125FB0; /* jne: not equal / not zero */

loc_00125FC6: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00125FCA: ;
    esi = MEM32(eax + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00125FE0
 * Original: 0x00125FE0 - 0x00126040 (96 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125FE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00125FECu); RECOMP_ABI_CALL(0x00125F00u, sub_00125F00); /* call 0x00125F00 */

loc_00125FEC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012601B; /* je: equal / zero */

loc_00125FF0: ;
    edx = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012602D; /* jne: not equal / not zero */

loc_00126000: ;
    esi = MEM32(eax + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012601B; /* je: equal / zero */

loc_00126007: ;
    PUSH32(esp, edi);
    ecx = esi + 0x14;
    PUSH32(esp, 0x00126010u); RECOMP_ABI_CALL(0x00199F10u, sub_00199F10); /* call 0x00199F10 */

loc_00126010: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00126022; /* jne: not equal / not zero */

loc_00126014: ;
    esi = MEM32(esi + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00126007; /* jne: not equal / not zero */

loc_0012601B: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00126022: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    eax = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00125FF0; /* jne: not equal / not zero */

loc_00126028: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0012602D: ;
    edi = MEM32(eax + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00126040
 * Original: 0x00126040 - 0x00126079 (57 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00126040: ;
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00126066; /* je: equal / zero */

loc_00126048: ;
    ecx = 1;
    /* nop */

loc_00126050: ;
    esi = MEM32(eax + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012606A; /* jne: not equal / not zero */

loc_0012605F: ;
    eax = MEM32(eax + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00126050; /* jne: not equal / not zero */

loc_00126066: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012606A: ;
    esi = MEM32(eax + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00126080
 * Original: 0x00126080 - 0x001260E0 (96 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00126080: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012608Cu); RECOMP_ABI_CALL(0x00125F60u, sub_00125F60); /* call 0x00125F60 */

loc_0012608C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001260BB; /* je: equal / zero */

loc_00126090: ;
    edx = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001260CD; /* jne: not equal / not zero */

loc_001260A0: ;
    esi = MEM32(eax + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001260BB; /* je: equal / zero */

loc_001260A7: ;
    PUSH32(esp, edi);
    ecx = esi + 0x14;
    PUSH32(esp, 0x001260B0u); RECOMP_ABI_CALL(0x00199F10u, sub_00199F10); /* call 0x00199F10 */

loc_001260B0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001260C2; /* jne: not equal / not zero */

loc_001260B4: ;
    esi = MEM32(esi + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001260A7; /* jne: not equal / not zero */

loc_001260BB: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001260C2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    eax = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00126090; /* jne: not equal / not zero */

loc_001260C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001260CD: ;
    edi = MEM32(eax + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edx;
    esp += 8; return; /* ret 4 */

}



/**
 * sub_00126100
 * Original: 0x00126100 - 0x0012611C (28 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126100(void)
{

loc_00126100: ;
    eax = ecx + 0x2C;
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x28) = eax;
    edx = MEM32(eax + 0x24);
    MEM32(ecx + 0x24) = edx;
    edx = MEM32(eax + 0x24);
    MEM32(edx + 0x28) = ecx;
    MEM32(eax + 0x24) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00126120
 * Original: 0x00126120 - 0x00126255 (309 bytes, 116 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126120(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00126120: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ebx = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00126145; /* jle: less or equal (signed <=) */

loc_00126132: ;
    esi = ebp;

loc_00126134: ;
    PUSH32(esp, 0x3DB61C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012613Fu); RECOMP_ABI_CALL(0x00125CE0u, sub_00125CE0); /* call 0x00125CE0 */

loc_0012613F: ;
    esp = esp + 8;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00126134; /* jne: not equal / not zero */

loc_00126145: ;
    ecx = ebx + 0x14;
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0x00126151u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00126151: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DB618);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012615Du); RECOMP_ABI_CALL(0x00125CE0u, sub_00125CE0); /* call 0x00125CE0 */

loc_0012615D: ;
    esi = MEM32(ebx + 0x54);
    eax = ebx + 0x2C;
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012619D; /* je: equal / zero */

loc_0012616A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012619D; /* je: equal / zero */

loc_0012616E: ;
    edi = edi;

loc_00126170: ;
    PUSH32(esp, 0x3CB044);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012617Bu); RECOMP_ABI_CALL(0x00125CE0u, sub_00125CE0); /* call 0x00125CE0 */

loc_0012617B: ;
    eax = MEM32(esi);
    esp = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00126188u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00126188: ;
    esi = MEM32(esi + 0x28);
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00126199; /* jne: not equal / not zero */

loc_00126192: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012619D; /* je: equal / zero */

loc_00126199: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00126170; /* jne: not equal / not zero */

loc_0012619D: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00126240; /* je: equal / zero */

loc_001261A8: ;
    PUSH32(esp, 0x3D5784);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001261B3u); RECOMP_ABI_CALL(0x00125CE0u, sub_00125CE0); /* call 0x00125CE0 */

loc_001261B3: ;
    esi = MEM32(ebx + 0xC);
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001261F6; /* je: equal / zero */

loc_001261BD: ;
    ebx = ebp + 1;
    ebp = 4;

loc_001261C5: ;
    eax = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001261E2; /* jne: not equal / not zero */

loc_001261D4: ;
    PUSH32(esp, 0x3C6F8C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001261DFu); RECOMP_ABI_CALL(0x00125CE0u, sub_00125CE0); /* call 0x00125CE0 */

loc_001261DF: ;
    esp = esp + 8;

loc_001261E2: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001261EBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001261EB: ;
    esi = MEM32(esi + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001261C5; /* jne: not equal / not zero */

loc_001261F2: ;
    ebp = MEM32(esp + 0x18);

loc_001261F6: ;
    PUSH32(esp, 0x3C6F8C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00126201u); RECOMP_ABI_CALL(0x00125CE0u, sub_00125CE0); /* call 0x00125CE0 */

loc_00126201: ;
    esp = esp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00126221; /* jle: less or equal (signed <=) */

loc_00126208: ;
    esi = ebp;
    /* nop */

loc_00126210: ;
    PUSH32(esp, 0x3DB61C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012621Bu); RECOMP_ABI_CALL(0x00125CE0u, sub_00125CE0); /* call 0x00125CE0 */

loc_0012621B: ;
    esp = esp + 8;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00126210; /* jne: not equal / not zero */

loc_00126221: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x0012622Au); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0012622A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DB610);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00126236u); RECOMP_ABI_CALL(0x00125CE0u, sub_00125CE0); /* call 0x00125CE0 */

loc_00126236: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00126240: ;
    PUSH32(esp, 0x3DB60C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012624Bu); RECOMP_ABI_CALL(0x00125CE0u, sub_00125CE0); /* call 0x00125CE0 */

loc_0012624B: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00126260
 * Original: 0x00126260 - 0x0012632C (204 bytes, 67 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126260(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00126260: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351BE3);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = esi;
    edi = esi + 4;
    ebx = 0; /* xor self */
    ecx = edi;
    MEM32(esp + 0x34) = ebx;
    MEM32(esi) = 0x3DB5E0;
    PUSH32(esp, 0x00126298u); RECOMP_ABI_CALL(0x00199E10u, sub_00199E10); /* call 0x00199E10 */

loc_00126298: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x001262A8u); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_001262A8: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001262B0u); RECOMP_ABI_CALL(0x00199E20u, sub_00199E20); /* call 0x00199E20 */

loc_001262B0: ;
    ebp = MEM32(esp + 0x3C);
    PUSH32(esp, 2);
    ecx = ebp;
    MEM32(edi + 0xC) = ebx;
    PUSH32(esp, 0x001262C0u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_001262C0: ;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001262CCu); RECOMP_ABI_CALL(0x00125820u, sub_00125820); /* call 0x00125820 */

loc_001262CC: ;
    edi = esi + 0x14;
    ecx = edi;
    MEM8(esp + 0x34) = 1;
    PUSH32(esp, 0x001262DBu); RECOMP_ABI_CALL(0x00199E10u, sub_00199E10); /* call 0x00199E10 */

loc_001262DB: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x28;
    PUSH32(esp, 0x001262EBu); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_001262EB: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001262F3u); RECOMP_ABI_CALL(0x00199E20u, sub_00199E20); /* call 0x00199E20 */

loc_001262F3: ;
    ebp = MEM32(esp + 0x40);
    PUSH32(esp, 1);
    ecx = ebp;
    MEM32(edi + 0xC) = ebx;
    PUSH32(esp, 0x00126303u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00126303: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0012630Fu); RECOMP_ABI_CALL(0x00125820u, sub_00125820); /* call 0x00125820 */

loc_0012630F: ;
    ecx = MEM32(esp + 0x2C);
    POP32(esp, edi);
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x28;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00126330
 * Original: 0x00126330 - 0x0012634E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00126330: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00126338u); RECOMP_ABI_CALL(0x00125B40u, sub_00125B40); /* call 0x00125B40 */

loc_00126338: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00126348; /* je: equal / zero */

loc_0012633F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00126345u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00126345: ;
    esp = esp + 4;

loc_00126348: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00126350
 * Original: 0x00126350 - 0x00126384 (52 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00126350: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00126380; /* je: equal / zero */

loc_00126358: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    /* nop */

loc_00126360: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0012636Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012636A: ;
    PUSH32(esp, 0x3C6F8C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00126375u); RECOMP_ABI_CALL(0x00125CE0u, sub_00125CE0); /* call 0x00125CE0 */

loc_00126375: ;
    esi = MEM32(esi + 0x28);
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00126360; /* jne: not equal / not zero */

loc_0012637F: ;
    POP32(esp, edi);

loc_00126380: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00126390
 * Original: 0x00126390 - 0x0012641B (139 bytes, 54 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00126390: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    eax = MEM32(ebx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = ebx + 0x14;
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_001263F0; /* je: equal / zero */

loc_0012639F: ;
    PUSH32(esp, 0x22);
    ecx = esi;
    PUSH32(esp, 0x001263A8u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_001263A8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001263AEu); RECOMP_ABI_CALL(0x003426D0u, sub_003426D0); /* call 0x003426D0 */

loc_001263AE: ;
    edi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001263F0; /* je: equal / zero */

loc_001263B7: ;
    ecx = esi;
    PUSH32(esp, 0x001263BEu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_001263BE: ;
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001263F0; /* je: equal / zero */

loc_001263C5: ;
    ecx = ebx + 4;
    PUSH32(esp, 0x001263CDu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_001263CD: ;
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001263D6u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_001263D6: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3DB62C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001263E7u); RECOMP_ABI_CALL(0x00125CE0u, sub_00125CE0); /* call 0x00125CE0 */

loc_001263E7: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001263F0: ;
    ecx = ebx + 4;
    PUSH32(esp, 0x001263F8u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_001263F8: ;
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00126401u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00126401: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3DB624);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00126412u); RECOMP_ABI_CALL(0x00125CE0u, sub_00125CE0); /* call 0x00125CE0 */

loc_00126412: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00126420
 * Original: 0x00126420 - 0x0012645F (63 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00126420: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00126442; /* jle: less or equal (signed <=) */

loc_00126431: ;
    PUSH32(esp, 0x3DB61C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012643Cu); RECOMP_ABI_CALL(0x00125CE0u, sub_00125CE0); /* call 0x00125CE0 */

loc_0012643C: ;
    esp = esp + 8;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00126431; /* jne: not equal / not zero */

loc_00126442: ;
    ecx = ebx + 0x14;
    PUSH32(esp, 0x0012644Au); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0012644A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DB634);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00126456u); RECOMP_ABI_CALL(0x00125CE0u, sub_00125CE0); /* call 0x00125CE0 */

loc_00126456: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00126460
 * Original: 0x00126460 - 0x0012647E (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126460(void)
{

loc_00126460: ;
    ecx = ecx + 0x14;
    PUSH32(esp, 0x00126468u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00126468: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x3D2C44);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00126478u); RECOMP_ABI_CALL(0x00125CE0u, sub_00125CE0); /* call 0x00125CE0 */

loc_00126478: ;
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00126480
 * Original: 0x00126480 - 0x00126603 (387 bytes, 109 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00126480: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351C38);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x28;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x001264A4u); RECOMP_ABI_CALL(0x00199E10u, sub_00199E10); /* call 0x00199E10 */

loc_001264A4: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0xC;
    PUSH32(esp, 0x001264B4u); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_001264B4: ;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x001264BEu); RECOMP_ABI_CALL(0x00199E20u, sub_00199E20); /* call 0x00199E20 */

loc_001264BE: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DB670);
    PUSH32(esp, 6);
    ecx = esp + 0x28;
    MEM32(esp + 0x34) = 0;
    PUSH32(esp, 0x001264D8u); RECOMP_ABI_CALL(0x00125820u, sub_00125820); /* call 0x00125820 */

loc_001264D8: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x34) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00126521; /* je: equal / zero */

loc_001264E7: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x3DB664);
    ecx = esp + 0x24;
    PUSH32(esp, 0x001264F7u); RECOMP_ABI_CALL(0x00125900u, sub_00125900); /* call 0x00125900 */

loc_001264F7: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = esi + 0x2C;
    if (TEST_Z(_fa, _fb)) goto loc_00126511; /* je: equal / zero */

loc_00126501: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00126507u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00126507: ;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00126511u); RECOMP_ABI_CALL(0x00125900u, sub_00125900); /* call 0x00125900 */

loc_00126511: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DB660);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00126521u); RECOMP_ABI_CALL(0x00125900u, sub_00125900); /* call 0x00125900 */

loc_00126521: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00126562; /* je: equal / zero */

loc_00126528: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x3DB654);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00126538u); RECOMP_ABI_CALL(0x00125900u, sub_00125900); /* call 0x00125900 */

loc_00126538: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = esi + 0x3C;
    if (TEST_Z(_fa, _fb)) goto loc_00126552; /* je: equal / zero */

loc_00126542: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00126548u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00126548: ;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00126552u); RECOMP_ABI_CALL(0x00125900u, sub_00125900); /* call 0x00125900 */

loc_00126552: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DB660);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00126562u); RECOMP_ABI_CALL(0x00125900u, sub_00125900); /* call 0x00125900 */

loc_00126562: ;
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001265A3; /* je: equal / zero */

loc_00126569: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x3DB644);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00126579u); RECOMP_ABI_CALL(0x00125900u, sub_00125900); /* call 0x00125900 */

loc_00126579: ;
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = esi + 0x4C;
    if (TEST_Z(_fa, _fb)) goto loc_00126593; /* je: equal / zero */

loc_00126583: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00126589u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00126589: ;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00126593u); RECOMP_ABI_CALL(0x00125900u, sub_00125900); /* call 0x00125900 */

loc_00126593: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DB660);
    ecx = esp + 0x24;
    PUSH32(esp, 0x001265A3u); RECOMP_ABI_CALL(0x00125900u, sub_00125900); /* call 0x00125900 */

loc_001265A3: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DB640);
    ecx = esp + 0x24;
    PUSH32(esp, 0x001265B3u); RECOMP_ABI_CALL(0x00125900u, sub_00125900); /* call 0x00125900 */

loc_001265B3: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x001265BCu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_001265BC: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    PUSH32(esp, 0x3D2C44);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001265CCu); RECOMP_ABI_CALL(0x00125CE0u, sub_00125CE0); /* call 0x00125CE0 */

loc_001265CC: ;
    esp = esp + 0xC;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x18;
    MEM32(esp + 0x3C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001265E7u); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_001265E7: ;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x001265F1u); RECOMP_ABI_CALL(0x00199E20u, sub_00199E20); /* call 0x00199E20 */

loc_001265F1: ;
    ecx = MEM32(esp + 0x2C);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x34;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00126610
 * Original: 0x00126610 - 0x0012664F (63 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00126610: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00126632; /* jle: less or equal (signed <=) */

loc_00126621: ;
    PUSH32(esp, 0x3DB61C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012662Cu); RECOMP_ABI_CALL(0x00125CE0u, sub_00125CE0); /* call 0x00125CE0 */

loc_0012662C: ;
    esp = esp + 8;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00126621; /* jne: not equal / not zero */

loc_00126632: ;
    ecx = ebx + 0x14;
    PUSH32(esp, 0x0012663Au); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0012663A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DB678);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00126646u); RECOMP_ABI_CALL(0x00125CE0u, sub_00125CE0); /* call 0x00125CE0 */

loc_00126646: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00126650
 * Original: 0x00126650 - 0x001266E2 (146 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00126650: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351C38);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001266CE; /* je: equal / zero */

loc_00126683: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001266CE; /* je: equal / zero */

loc_00126688: ;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00126694u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00126694: ;
    ecx = MEM32(esp + 0x30);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEM32(esp + 0x2C) = 0;
    PUSH32(esp, 0x001266AAu); RECOMP_ABI_CALL(0x00125F00u, sub_00125F00); /* call 0x00125F00 */

loc_001266AA: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0xC;
    MEM32(esi) = eax;
    MEM32(esp + 0x30) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001266C4u); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_001266C4: ;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x001266CEu); RECOMP_ABI_CALL(0x00199E20u, sub_00199E20); /* call 0x00199E20 */

loc_001266CE: ;
    ecx = MEM32(esp + 0x20);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x28;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001266F0
 * Original: 0x001266F0 - 0x001267CE (222 bytes, 65 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001266F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001266F0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351C38);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001267B8; /* je: equal / zero */

loc_00126714: ;
    eax = MEM32(esp + 0x30);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00126724u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00126724: ;
    eax = MEM32(esi);
    edx = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0x2C) = 0;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    ecx = eax + 0x2C;
    PUSH32(esp, 0x00126749u); RECOMP_ABI_CALL(0x00125C00u, sub_00125C00); /* call 0x00125C00 */

loc_00126749: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00126752; /* je: equal / zero */

loc_0012674D: ;
    eax = eax + 0x14;
    goto loc_00126754;

loc_00126752: ;
    eax = 0; /* xor self */

loc_00126754: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0xC;
    MEM32(esi + 8) = eax;
    MEM32(esp + 0x30) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0012676Fu); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_0012676F: ;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00126779u); RECOMP_ABI_CALL(0x00199E20u, sub_00199E20); /* call 0x00199E20 */

loc_00126779: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x1C) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001267B8; /* je: equal / zero */

loc_00126788: ;
    PUSH32(esp, 0x0012678Du); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0012678D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001267B8; /* je: equal / zero */

loc_00126791: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x00126799u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00126799: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001267B8; /* je: equal / zero */

loc_0012679E: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x001267A6u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_001267A6: ;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x1C);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x28;
    esp += 12; return; /* ret 8 */

loc_001267B8: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x34);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x28;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001267D0
 * Original: 0x001267D0 - 0x001268D2 (258 bytes, 76 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001267D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001267D0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351C38);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001268BC; /* je: equal / zero */

loc_001267F4: ;
    eax = MEM32(esp + 0x30);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00126804u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00126804: ;
    eax = MEM32(esi);
    edx = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0x2C) = 0;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    ecx = eax + 0x2C;
    PUSH32(esp, 0x00126829u); RECOMP_ABI_CALL(0x00125C00u, sub_00125C00); /* call 0x00125C00 */

loc_00126829: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00126832; /* je: equal / zero */

loc_0012682D: ;
    eax = eax + 0x14;
    goto loc_00126834;

loc_00126832: ;
    eax = 0; /* xor self */

loc_00126834: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0xC;
    MEM32(esi + 8) = eax;
    MEM32(esp + 0x30) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0012684Fu); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_0012684F: ;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00126859u); RECOMP_ABI_CALL(0x00199E20u, sub_00199E20); /* call 0x00199E20 */

loc_00126859: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x1C) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001268BC; /* je: equal / zero */

loc_00126868: ;
    PUSH32(esp, 0x0012686Du); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0012686D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001268BC; /* je: equal / zero */

loc_00126871: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x00126879u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00126879: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001268BC; /* je: equal / zero */

loc_0012687E: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x00126886u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00126886: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x74) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x74 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001268A8; /* jne: not equal / not zero */

loc_0012688B: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x72) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0x72 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001268A8; /* jne: not equal / not zero */

loc_00126891: ;
    eax = 1;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x1C);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x28;
    esp += 12; return; /* ret 8 */

loc_001268A8: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x1C);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x28;
    esp += 12; return; /* ret 8 */

loc_001268BC: ;
    ecx = MEM32(esp + 0x20);
    SET_LO8(eax, MEM8(esp + 0x34));
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x28;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001268E0
 * Original: 0x001268E0 - 0x001269C7 (231 bytes, 68 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001268E0(void)
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

loc_001268E0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351C38);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001269B1; /* je: equal / zero */

loc_00126904: ;
    eax = MEM32(esp + 0x30);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00126914u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00126914: ;
    eax = MEM32(esi);
    edx = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0x2C) = 0;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    ecx = eax + 0x2C;
    PUSH32(esp, 0x00126939u); RECOMP_ABI_CALL(0x00125C00u, sub_00125C00); /* call 0x00125C00 */

loc_00126939: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00126942; /* je: equal / zero */

loc_0012693D: ;
    eax = eax + 0x14;
    goto loc_00126944;

loc_00126942: ;
    eax = 0; /* xor self */

loc_00126944: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0xC;
    MEM32(esi + 8) = eax;
    MEM32(esp + 0x30) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0012695Fu); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_0012695F: ;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00126969u); RECOMP_ABI_CALL(0x00199E20u, sub_00199E20); /* call 0x00199E20 */

loc_00126969: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x1C) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001269B1; /* je: equal / zero */

loc_00126978: ;
    PUSH32(esp, 0x0012697Du); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0012697D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001269B1; /* je: equal / zero */

loc_00126981: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x00126989u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00126989: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001269B1; /* je: equal / zero */

loc_0012698E: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x00126996u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00126996: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012699Cu); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_0012699C: ;
    esp = esp + 4;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x1C);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x28;
    esp += 12; return; /* ret 8 */

loc_001269B1: ;
    ecx = MEM32(esp + 0x20);
    fp_push(MEMF(esp + 0x34)); /* fld float */
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x28;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001269D0
 * Original: 0x001269D0 - 0x00126AB7 (231 bytes, 68 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001269D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001269D0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351C38);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00126AA1; /* je: equal / zero */

loc_001269F4: ;
    eax = MEM32(esp + 0x30);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00126A04u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00126A04: ;
    eax = MEM32(esi);
    edx = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0x2C) = 0;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    ecx = eax + 0x2C;
    PUSH32(esp, 0x00126A29u); RECOMP_ABI_CALL(0x00125C00u, sub_00125C00); /* call 0x00125C00 */

loc_00126A29: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00126A32; /* je: equal / zero */

loc_00126A2D: ;
    eax = eax + 0x14;
    goto loc_00126A34;

loc_00126A32: ;
    eax = 0; /* xor self */

loc_00126A34: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0xC;
    MEM32(esi + 8) = eax;
    MEM32(esp + 0x30) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00126A4Fu); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_00126A4F: ;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00126A59u); RECOMP_ABI_CALL(0x00199E20u, sub_00199E20); /* call 0x00199E20 */

loc_00126A59: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x1C) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00126AA1; /* je: equal / zero */

loc_00126A68: ;
    PUSH32(esp, 0x00126A6Du); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00126A6D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00126AA1; /* je: equal / zero */

loc_00126A71: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x00126A79u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00126A79: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00126AA1; /* je: equal / zero */

loc_00126A7E: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x00126A86u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00126A86: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00126A8Cu); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_00126A8C: ;
    esp = esp + 4;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x1C);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x28;
    esp += 12; return; /* ret 8 */

loc_00126AA1: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x34);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x28;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00126AC0
 * Original: 0x00126AC0 - 0x00126B43 (131 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00126AC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00126B2B; /* jne: not equal / not zero */

loc_00126ACA: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x1604);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00126AD9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00126AD9: ;
    ecx = MEM32(esi);
    MEM32(eax) = ecx;
    MEM32(esi) = eax;
    eax = eax + 4;
    edi = 0x20;

loc_00126AE7: ;
    edx = MEM32(esi + 4);
    MEM32(eax) = edx;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x2C) = eax;
    edx = MEM32(esi + 0x10);
    ecx = eax + 0x2C;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x10) = edx;
    MEM32(eax + 0x58) = ecx;
    ecx = MEM32(esi + 0x10);
    edx = eax + 0x58;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x10) = ecx;
    ecx = eax + 0x84;
    MEM32(ecx) = edx;
    MEM32(esi + 4) = ecx;
    ecx = MEM32(esi + 0x10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 0xB0;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x10) = ecx;
    if ((_fa != 0)) goto loc_00126AE7; /* jne: not equal / not zero */

loc_00126B23: ;
    MEM32(esi + 8) = MEM32(esi + 8) + 0x80;
    POP32(esp, edi);

loc_00126B2B: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    edx = MEM32(esi + 0x10);
    MEM32(esi + 4) = ecx;
    ecx = MEM32(esi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0xC) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00126B50
 * Original: 0x00126B50 - 0x00126B9E (78 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00126B50: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esi + 0x10);
    MEM32(esi + 4) = eax;
    eax = MEM32(esi + 0xC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = eax;
    if ((_fa != 0)) goto loc_00126B9A; /* jne: not equal / not zero */

loc_00126B6F: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00126B8B; /* je: equal / zero */

loc_00126B78: ;
    eax = MEM32(esi);
    edx = MEM32(eax);
    ecx = MEM32(esi + 0x14);
    MEM32(esi) = edx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00126B87u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00126B87: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00126B78; /* jne: not equal / not zero */

loc_00126B8B: ;
    MEM32(esi) = edi;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    POP32(esp, edi);

loc_00126B9A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00126BA0
 * Original: 0x00126BA0 - 0x00126C26 (134 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00126BA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00126C0E; /* jne: not equal / not zero */

loc_00126BAA: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x1604);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00126BB9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00126BB9: ;
    ecx = MEM32(esi);
    MEM32(eax) = ecx;
    MEM32(esi) = eax;
    eax = eax + 4;
    edi = 0x10;

loc_00126BC7: ;
    edx = MEM32(esi + 4);
    MEM32(eax) = edx;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x58) = eax;
    edx = MEM32(esi + 0x10);
    ecx = eax + 0x58;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x10) = edx;
    MEM32(eax + 0xB0) = ecx;
    ecx = MEM32(esi + 0x10);
    edx = eax + 0xB0;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x10) = ecx;
    ecx = eax + 0x108;
    MEM32(ecx) = edx;
    MEM32(esi + 4) = ecx;
    ecx = MEM32(esi + 0x10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 0x160;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x10) = ecx;
    if ((_fa != 0)) goto loc_00126BC7; /* jne: not equal / not zero */

loc_00126C09: ;
    MEM32(esi + 8) = MEM32(esi + 8) + 0x40;
    POP32(esp, edi);

loc_00126C0E: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    edx = MEM32(esi + 0x10);
    MEM32(esi + 4) = ecx;
    ecx = MEM32(esi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0xC) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}



/**
 * sub_00126C60
 * Original: 0x00126C60 - 0x00126CF5 (149 bytes, 43 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00126C60: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351C38);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esi) = 0;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00126CE1; /* je: equal / zero */

loc_00126C93: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00126CE1; /* je: equal / zero */

loc_00126C97: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00126CE1; /* je: equal / zero */

loc_00126C9C: ;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00126CA8u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00126CA8: ;
    ecx = MEM32(esi + 4);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEM32(esp + 0x2C) = 0;
    PUSH32(esp, 0x00126CBDu); RECOMP_ABI_CALL(0x00125F00u, sub_00125F00); /* call 0x00125F00 */

loc_00126CBD: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0xC;
    MEM32(esi) = eax;
    MEM32(esp + 0x30) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00126CD7u); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_00126CD7: ;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00126CE1u); RECOMP_ABI_CALL(0x00199E20u, sub_00199E20); /* call 0x00199E20 */

loc_00126CE1: ;
    ecx = MEM32(esp + 0x20);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x28;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00126D00
 * Original: 0x00126D00 - 0x00126DA1 (161 bytes, 50 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00126D00: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351C38);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 0xC) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00126D8D; /* je: equal / zero */

loc_00126D33: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00126D8D; /* je: equal / zero */

loc_00126D38: ;
    eax = MEM32(esp + 0x24);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00126D8D; /* je: equal / zero */

loc_00126D42: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & eax;
    eax = edx;
    MEM32(esi + 4) = eax;
    if ((edx == 0)) goto loc_00126D8D; /* je: equal / zero */

loc_00126D59: ;
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00126D65u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00126D65: ;
    ecx = MEM32(esi + 4);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x00126D7Au); RECOMP_ABI_CALL(0x00125F00u, sub_00125F00); /* call 0x00125F00 */

loc_00126D7A: ;
    ecx = esp + 4;
    MEM32(esi) = eax;
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00126D8Du); RECOMP_ABI_CALL(0x00025BE0u, sub_00025BE0); /* call 0x00025BE0 */

loc_00126D8D: ;
    ecx = MEM32(esp + 0x14);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00126DB0
 * Original: 0x00126DB0 - 0x00126E4F (159 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00126DB0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351C60);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00126E3D; /* je: equal / zero */

loc_00126DD2: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00126E3D; /* je: equal / zero */

loc_00126DD7: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00126E3D; /* je: equal / zero */

loc_00126DDC: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    if (TEST_Z(_fa, _fb)) goto loc_00126E0D; /* je: equal / zero */

loc_00126DE6: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x00126DEFu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00126DEF: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    MEM32(esp + 0x34) = 0;
    PUSH32(esp, 0x00126E07u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_00126E07: ;
    ecx = esp + 4;
    goto loc_00126E2E;

loc_00126E0D: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00126E16u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00126E16: ;
    ecx = MEM32(esi);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esp + 0x30) = 1;
    PUSH32(esp, 0x00126E2Au); RECOMP_ABI_CALL(0x00125F60u, sub_00125F60); /* call 0x00125F60 */

loc_00126E2A: ;
    ecx = esp + 0x14;

loc_00126E2E: ;
    MEM32(esi) = eax;
    MEM32(esp + 0x2C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00126E3Du); RECOMP_ABI_CALL(0x00025BE0u, sub_00025BE0); /* call 0x00025BE0 */

loc_00126E3D: ;
    ecx = MEM32(esp + 0x24);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x2C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00126E50
 * Original: 0x00126E50 - 0x00126E5A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126E50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00126E50: ;
    ecx = 0x4546F8;
    g_seh_ebp = ebp; sub_00126BA0(); return; /* tail jmp 0x00126BA0 */

}

/**
 * sub_00126E60
 * Original: 0x00126E60 - 0x00126E6A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126E60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00126E60: ;
    ecx = 0x4546D4;
    g_seh_ebp = ebp; sub_00126AC0(); return; /* tail jmp 0x00126AC0 */

}

/**
 * sub_00126E70
 * Original: 0x00126E70 - 0x00126F3A (202 bytes, 69 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126E70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00126E70: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351C83);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebp;
    MEM32(ebp) = 0x3DB5F8;
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ebx = 1;
    MEM32(esp + 0x28) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_00126EF9; /* je: equal / zero */

loc_00126EA9: ;
    /* nop */

loc_00126EB0: ;
    esi = edi;
    ecx = MEM32(esi + 8);
    edi = MEM32(edi + 0x28);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = esi;
    PUSH32(esp, 0);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00126EE6; /* je: equal / zero */

loc_00126EC8: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00126ECCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00126ECC: ;
    edx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = 0x4546F8;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00126EE4u); RECOMP_ABI_CALL(0x00126B50u, sub_00126B50); /* call 0x00126B50 */

loc_00126EE4: ;
    goto loc_00126EF5;

loc_00126EE6: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00126EEAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00126EEA: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00126EF2u); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_00126EF2: ;
    esp = esp + 8;

loc_00126EF5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00126EB0; /* jne: not equal / not zero */

loc_00126EF9: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x1C;
    MEM8(esp + 0x30) = 0;
    esi = ebp + 0x14;
    PUSH32(esp, 0x00126F11u); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_00126F11: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00126F19u); RECOMP_ABI_CALL(0x00199E20u, sub_00199E20); /* call 0x00199E20 */

loc_00126F19: ;
    ecx = MEM32(esp + 0x20);
    POP32(esp, edi);
    MEM32(esi + 0xC) = 0;
    POP32(esp, esi);
    MEM32(ebp) = 0x3DB5D4;
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00126F40
 * Original: 0x00126F40 - 0x00126FA8 (104 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00126F40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00126F40: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00126F9F; /* je: equal / zero */

loc_00126F4D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 1;

loc_00126F54: ;
    esi = edi;
    ecx = MEM32(esi + 8);
    edi = MEM32(edi + 0x28);
    edx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = esi;
    PUSH32(esp, 0);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00126F8A; /* je: equal / zero */

loc_00126F6E: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00126F70u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00126F70: ;
    edx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = 0x4546F8;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00126F88u); RECOMP_ABI_CALL(0x00126B50u, sub_00126B50); /* call 0x00126B50 */

loc_00126F88: ;
    goto loc_00126F97;

loc_00126F8A: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00126F8Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00126F8C: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00126F94u); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_00126F94: ;
    esp = esp + 8;

loc_00126F97: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00126F54; /* jne: not equal / not zero */

loc_00126F9B: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);

loc_00126F9F: ;
    POP32(esp, edi);
    MEM32(ebp + 0xC) = eax;
    MEM32(ebp + 0x10) = eax;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00126FB0
 * Original: 0x00126FB0 - 0x00127097 (231 bytes, 69 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126FB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00126FB0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351CAB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 1);
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0x00126FD8u); RECOMP_ABI_CALL(0x00125E80u, sub_00125E80); /* call 0x00125E80 */

loc_00126FD8: ;
    edi = esi + 0x2C;
    ebp = 0; /* xor self */
    ecx = edi;
    MEM32(esp + 0x34) = ebp;
    MEM32(esi) = 0x3DB684;
    PUSH32(esp, 0x00126FEEu); RECOMP_ABI_CALL(0x00125AA0u, sub_00125AA0); /* call 0x00125AA0 */

loc_00126FEE: ;
    MEM32(edi + 0x28) = edi;
    MEM32(edi + 0x24) = edi;
    ecx = esp + 0x1C;
    MEM8(esp + 0x34) = 1;
    PUSH32(esp, 0x00127002u); RECOMP_ABI_CALL(0x00199E10u, sub_00199E10); /* call 0x00199E10 */

loc_00127002: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00127012u); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_00127012: ;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x0012701Cu); RECOMP_ABI_CALL(0x00199E20u, sub_00199E20); /* call 0x00199E20 */

loc_0012701C: ;
    edi = MEM32(esp + 0x3C);
    PUSH32(esp, 1);
    ecx = edi;
    MEM32(esp + 0x2C) = ebp;
    PUSH32(esp, 0x0012702Du); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0012702D: ;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0xC);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x0012703Bu); RECOMP_ABI_CALL(0x00125820u, sub_00125820); /* call 0x00125820 */

loc_0012703B: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    MEM8(esp + 0x38) = 2;
    PUSH32(esp, 0x0012704Eu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0012704E: ;
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi + 0x14;
    PUSH32(esp, 0x0012705Cu); RECOMP_ABI_CALL(0x00125820u, sub_00125820); /* call 0x00125820 */

loc_0012705C: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x18;
    MEM8(esp + 0x3C) = 1;
    PUSH32(esp, 0x00127071u); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_00127071: ;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x0012707Bu); RECOMP_ABI_CALL(0x00199E20u, sub_00199E20); /* call 0x00199E20 */

loc_0012707B: ;
    ecx = MEM32(esp + 0x2C);
    MEM32(esi + 0xC) = ebp;
    MEM32(esi + 0x10) = ebp;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x2C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001270A0
 * Original: 0x001270A0 - 0x00127156 (182 bytes, 66 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001270A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001270A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351CD3);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebp;
    MEM32(ebp) = 0x3DB684;
    MEM32(esp + 0x1C) = 1;
    esi = ebp + 0x2C;
    ebx = 0; /* xor self */

loc_001270D4: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00127129; /* je: equal / zero */

loc_001270DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00127129; /* je: equal / zero */

loc_001270DF: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00127115; /* je: equal / zero */

loc_001270EF: ;
    /* nop */

loc_001270F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001270FD; /* je: equal / zero */

loc_001270F4: ;
    eax = MEM32(eax + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001270F0; /* jne: not equal / not zero */

loc_001270FB: ;
    goto loc_00127115;

loc_001270FD: ;
    edx = MEM32(eax + 0x24);
    ecx = MEM32(eax + 0x28);
    MEM32(edx + 0x28) = ecx;
    edx = MEM32(eax + 0x28);
    ecx = MEM32(eax + 0x24);
    MEM32(edx + 0x24) = ecx;
    MEM32(eax + 0x28) = ebx;
    MEM32(eax + 0x24) = ebx;

loc_00127115: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0012711Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012711C: ;
    PUSH32(esp, edi);
    ecx = 0x4546D4;
    PUSH32(esp, 0x00127127u); RECOMP_ABI_CALL(0x00126B50u, sub_00126B50); /* call 0x00126B50 */

loc_00127127: ;
    goto loc_001270D4;

loc_00127129: ;
    ecx = esi;
    MEM8(esp + 0x1C) = LO8(ebx);
    PUSH32(esp, 0x00127134u); RECOMP_ABI_CALL(0x00125B40u, sub_00125B40); /* call 0x00125B40 */

loc_00127134: ;
    ecx = ebp;
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00127143u); RECOMP_ABI_CALL(0x00126E70u, sub_00126E70); /* call 0x00126E70 */

loc_00127143: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00127160
 * Original: 0x00127160 - 0x0012723D (221 bytes, 74 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00127160: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351CF1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x2C;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00127188u); RECOMP_ABI_CALL(0x00125C00u, sub_00125C00); /* call 0x00125C00 */

loc_00127188: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001271BE; /* je: equal / zero */

loc_0012718E: ;
    esi = MEM32(esp + 0x24);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0012719Du); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0012719D: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    ecx = edi + 0x14;
    PUSH32(esp, 0x001271AAu); RECOMP_ABI_CALL(0x00125820u, sub_00125820); /* call 0x00125820 */

loc_001271AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_001271BE: ;
    ecx = 0x4546D4;
    PUSH32(esp, 0x001271C8u); RECOMP_ABI_CALL(0x00126AC0u, sub_00126AC0); /* call 0x00126AC0 */

loc_001271C8: ;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0xC) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001271EB; /* je: equal / zero */

loc_001271DC: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x001271E9u); RECOMP_ABI_CALL(0x00126260u, sub_00126260); /* call 0x00126260 */

loc_001271E9: ;
    goto loc_001271ED;

loc_001271EB: ;
    eax = 0; /* xor self */

loc_001271ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_0012721F; /* je: equal / zero */

loc_001271F9: ;
    MEM32(eax + 0x28) = esi;
    edx = MEM32(esi + 0x24);
    MEM32(eax + 0x24) = edx;
    ecx = MEM32(esi + 0x24);
    POP32(esp, edi);
    MEM32(ecx + 0x28) = eax;
    MEM32(esi + 0x24) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_0012721F: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x00127226u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00127226: ;
    ecx = MEM32(esp + 0x14);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00127240
 * Original: 0x00127240 - 0x00127344 (260 bytes, 94 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00127240: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351DB1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, esi);
    ecx = 0x4546F8;
    PUSH32(esp, 0x00127266u); RECOMP_ABI_CALL(0x00126BA0u, sub_00126BA0); /* call 0x00126BA0 */

loc_00127266: ;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00127289; /* je: equal / zero */

loc_0012727A: ;
    ecx = ebx + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00127285u); RECOMP_ABI_CALL(0x00126FB0u, sub_00126FB0); /* call 0x00126FB0 */

loc_00127285: ;
    esi = eax;
    goto loc_0012728B;

loc_00127289: ;
    esi = 0; /* xor self */

loc_0012728B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    if (TEST_NZ(_fa, _fb)) goto loc_001272AA; /* jne: not equal / not zero */

loc_00127297: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_001272AA: ;
    eax = MEM32(ebx + 0x1C);
    PUSH32(esp, edi);
    edi = ebx + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001272B9u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_001272B9: ;
    edx = MEM32(edi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi + 0x14;
    PUSH32(esp, 0x001272C6u); RECOMP_ABI_CALL(0x00125820u, sub_00125820); /* call 0x00125820 */

loc_001272C6: ;
    edi = MEM32(ebx + 0x54);
    eax = ebx + 0x2C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001272F8; /* je: equal / zero */

loc_001272D0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001272F8; /* je: equal / zero */

loc_001272D4: ;
    eax = edi + 0x14;
    PUSH32(esp, eax);
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001272E3u); RECOMP_ABI_CALL(0x00127160u, sub_00127160); /* call 0x00127160 */

loc_001272E3: ;
    edi = MEM32(edi + 0x28);
    eax = MEM32(edi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001272F4; /* jne: not equal / not zero */

loc_001272ED: ;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001272F8; /* je: equal / zero */

loc_001272F4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001272D4; /* jne: not equal / not zero */

loc_001272F8: ;
    edi = MEM32(ebx + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00127330; /* je: equal / zero */

loc_001272FF: ;
    /* nop */

loc_00127300: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00127307u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00127307: ;
    MEM32(eax + 4) = esi;
    ecx = MEM32(esi + 0x10);
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = 0;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00127323; /* je: equal / zero */

loc_0012731E: ;
    MEM32(ecx + 0x28) = eax;
    goto loc_00127326;

loc_00127323: ;
    MEM32(esi + 0xC) = eax;

loc_00127326: ;
    MEM32(esi + 0x10) = eax;
    edi = MEM32(edi + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00127300; /* jne: not equal / not zero */

loc_00127330: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00127350
 * Original: 0x00127350 - 0x001273D0 (128 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00127350: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351D08);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x00127377u); RECOMP_ABI_CALL(0x00125E80u, sub_00125E80); /* call 0x00125E80 */

loc_00127377: ;
    edi = esi + 0x34;
    ecx = edi;
    MEM32(esp + 0x20) = 0;
    MEM32(esi) = 0x3DB69C;
    PUSH32(esp, 0x0012738Fu); RECOMP_ABI_CALL(0x00199E10u, sub_00199E10); /* call 0x00199E10 */

loc_0012738F: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0012739Fu); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_0012739F: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001273A7u); RECOMP_ABI_CALL(0x00199E20u, sub_00199E20); /* call 0x00199E20 */

loc_001273A7: ;
    eax = MEM32(0x508558);
    ecx = MEM32(esp + 0x18);
    MEM32(edi + 0xC) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 0x2C) = 0;
    MEM32(0x508558) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_001273D0
 * Original: 0x001273D0 - 0x00127473 (163 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001273D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001273D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351D33);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x001273F7u); RECOMP_ABI_CALL(0x00125E80u, sub_00125E80); /* call 0x00125E80 */

loc_001273F7: ;
    edi = esi + 0x34;
    ecx = edi;
    MEM32(esp + 0x20) = 0;
    MEM32(esi) = 0x3DB69C;
    PUSH32(esp, 0x0012740Fu); RECOMP_ABI_CALL(0x00199E10u, sub_00199E10); /* call 0x00199E10 */

loc_0012740F: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0012741Fu); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_0012741F: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00127427u); RECOMP_ABI_CALL(0x00199E20u, sub_00199E20); /* call 0x00199E20 */

loc_00127427: ;
    MEM32(edi + 0xC) = 0;
    edi = MEM32(esp + 0x28);
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(esp + 0x24) = 1;
    PUSH32(esp, 0x00127442u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00127442: ;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0xC);
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x0012744Fu); RECOMP_ABI_CALL(0x00125820u, sub_00125820); /* call 0x00125820 */

loc_0012744F: ;
    eax = MEM32(0x508558);
    ecx = MEM32(esp + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 0x2C) = 0;
    MEM32(0x508558) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00127480
 * Original: 0x00127480 - 0x00127507 (135 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00127480: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351D33);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    MEM32(esi) = 0x3DB69C;
    eax = MEM32(0x508558);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = 1;
    MEM32(0x508558) = eax;
    if ((_fa != 0)) goto loc_001274C0; /* jne: not equal / not zero */

loc_001274BB: ;
    PUSH32(esp, 0x001274C0u); RECOMP_ABI_CALL(0x00199E40u, xml1_guest_parser_text_reset); /* call 0x00199E40 */

loc_001274C0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x14;
    MEM8(esp + 0x28) = 0;
    edi = esi + 0x34;
    PUSH32(esp, 0x001274D8u); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_001274D8: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001274E0u); RECOMP_ABI_CALL(0x00199E20u, sub_00199E20); /* call 0x00199E20 */

loc_001274E0: ;
    ecx = esi;
    MEM32(edi + 0xC) = 0;
    MEM32(esp + 0x20) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001274F6u); RECOMP_ABI_CALL(0x00126E70u, sub_00126E70); /* call 0x00126E70 */

loc_001274F6: ;
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00127510
 * Original: 0x00127510 - 0x001277D8 (712 bytes, 214 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127510(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00127510: ;
    esp = esp - 0x508;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x518);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    MEM32(esp + 0x514) = eax;
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0x0012753Au); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0012753A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00127540u); RECOMP_ABI_CALL(0x00127EB0u, sub_00127EB0); /* call 0x00127EB0 */

loc_00127540: ;
    esp = esp + 4;
    ecx = edi;
    PUSH32(esp, 0x0012754Au); RECOMP_ABI_CALL(0x00126F40u, sub_00126F40); /* call 0x00126F40 */

loc_0012754A: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00127555u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00127555: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    ecx = edi + 0x14;
    PUSH32(esp, 0x00127562u); RECOMP_ABI_CALL(0x00125820u, sub_00125820); /* call 0x00125820 */

loc_00127562: ;
    PUSH32(esp, 0x2E);
    ecx = esi;
    PUSH32(esp, 0x0012756Bu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0012756B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00127571u); RECOMP_ABI_CALL(0x00341D90u, sub_00341D90); /* call 0x00341D90 */

loc_00127571: ;
    esp = esp + 8;
    ecx = esi;
    ebp = eax;
    PUSH32(esp, 0x0012757Du); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0012757D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00127583u); RECOMP_ABI_CALL(0x00123400u, sub_00123400); /* call 0x00123400 */

loc_00127583: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    ecx = esp + 0x320;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00127596u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00127596: ;
    ebx = 0; /* xor self */
    esp = esp + 0x10;
    ecx = esi;
    MEM8(esp + 0x413) = LO8(ebx);
    MEM8(esp + 0x14) = LO8(ebx);
    PUSH32(esp, 0x001275ADu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_001275AD: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    edx = esp + 0x11C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001275C0u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_001275C0: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    MEM8(esp + 0x213) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00127607; /* jne: not equal / not zero */

loc_001275CE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001275D4u); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_001275D4: ;
    esp = esp + 4;
    PUSH32(esp, 0x3C8838);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001275E4u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_001275E4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001275EAu); RECOMP_ABI_CALL(0x00123610u, sub_00123610); /* call 0x00123610 */

loc_001275EA: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    eax = esp + 0x128;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001275FDu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_001275FD: ;
    esp = esp + 0x18;
    MEM8(esp + 0x213) = LO8(ebx);

loc_00127607: ;
    ecx = esp + 0x114;
    PUSH32(esp, 0x2E);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00127616u); RECOMP_ABI_CALL(0x00341D90u, sub_00341D90); /* call 0x00341D90 */

loc_00127616: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00127656; /* je: equal / zero */

loc_0012761D: ;
    PUSH32(esp, 0x3C8838);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00127628u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00127628: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00127656; /* jne: not equal / not zero */

loc_0012762F: ;
    PUSH32(esp, 0x00127634u); RECOMP_ABI_CALL(0x0014A660u, sub_0014A660); /* call 0x0014A660 */

loc_00127634: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0012763Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012763B: ;
    PUSH32(esp, eax);
    eax = esp + 0x318;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x3DB6B0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00127653u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00127653: ;
    esp = esp + 0x10;

loc_00127656: ;
    _fa = (uint32_t)(MEM8(esp + 0x520)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x520), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00127721; /* je: equal / zero */

loc_00127663: ;
    ecx = esi;
    MEM8(esp + 0x214) = LO8(ebx);
    PUSH32(esp, 0x00127671u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00127671: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    edx = esp + 0x41C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00127684u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00127684: ;
    edx = MEM32(esp + 0x530);
    eax = esp + 0x220;
    PUSH32(esp, eax);
    ecx = esp + 0x424;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM8(esp + 0x52B) = LO8(ebx);
    PUSH32(esp, 0x001276A8u); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_001276A8: ;
    esp = esp + 0x18;
    PUSH32(esp, 0x001276B0u); RECOMP_ABI_CALL(0x0014A660u, sub_0014A660); /* call 0x0014A660 */

loc_001276B0: ;
    edx = MEM32(eax);
    ecx = esp + 0x214;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001276BFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001276BF: ;
    edi = 0x3CFBD4;
    esi = esp + 0x214;
    ecx = 5;
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    ebp = eax;
    if ((_flags == 0)) goto loc_001276E9; /* jne: not equal / not zero */

loc_001276D8: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001277BD; /* je: equal / zero */

loc_001276E0: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001277BD; /* je: equal / zero */

loc_001276E9: ;
    edi = MEM32(esp + 0x10);

loc_001276ED: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001277BD; /* je: equal / zero */

loc_001276F5: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001276FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001276FD: ;
    _fa = (uint32_t)(MEM8(esp + 0x520)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x520), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00127711; /* jne: not equal / not zero */

loc_00127706: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0012770Eu); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_0012770E: ;
    esp = esp + 8;

loc_00127711: ;
    _fa = (uint32_t)(MEM8(edi + 0x2C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x2C), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001277BD; /* jne: not equal / not zero */

loc_0012771A: ;
    SET_LO8(eax, 1);
    goto loc_001277BF;

loc_00127721: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x14), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00127754; /* je: equal / zero */

loc_00127727: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0012772Du); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_0012772D: ;
    edx = MEM32(eax);
    esp = esp + 4;
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0012773Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012773C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00127775; /* jg: greater (signed >) */

loc_00127740: ;
    PUSH32(esp, 0x100);
    edx = esp + 0x118;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    goto loc_00127766;

loc_00127754: ;
    PUSH32(esp, 0x100);
    ecx = esp + 0x118;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);

loc_00127766: ;
    PUSH32(esp, 0x0012776Bu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0012776B: ;
    esp = esp + 0xC;
    MEM8(esp + 0x113) = LO8(ebx);

loc_00127775: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0012777Bu); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_0012777B: ;
    edx = MEM32(eax);
    esp = esp + 4;
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0012778Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012778A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001277BD; /* jle: less or equal (signed <=) */

loc_00127790: ;
    PUSH32(esp, 0x33);
    edx = esi + 1;
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012779Du); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_0012779D: ;
    PUSH32(esp, ebx);
    ebp = eax;
    PUSH32(esp, 0x001277A5u); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_001277A5: ;
    edx = MEM32(eax);
    esp = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x001277B5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001277B5: ;
    MEM8(esi + ebp) = LO8(ebx);
    if (esi>=4 && MEM32(ebp)==0x000011B1u) {
        unsigned _xml_size=0; char _error[256];
        char *_xml=xml1_decode_pkgb((const void *)((uintptr_t)g_xbox_mem_offset+ebp),esi,&_xml_size,_error,sizeof(_error));
        if(!_xml) { fprintf(stderr,"[PKGB ERROR] %s\n",_error); _exit(4); }
        uint32_t _old_buffer=ebp, _saved_sp=esp;
        PUSH32(esp,0x33); PUSH32(esp,4); PUSH32(esp,_xml_size+1);
        PUSH32(esp,0x001277B5u); RECOMP_ABI_CALL(0x00123490u,sub_00123490);
        esp+=12;
        if(!eax || esp!=_saved_sp) { fprintf(stderr,"[PKGB ERROR] Guest allocation/ABI failure\n"); _exit(4); }
        ebp=eax;
        for(unsigned _i=0;_i<=_xml_size;++_i) MEM8(ebp+_i)=(unsigned char)_xml[_i];
        xml1_free_decoded_pkgb(_xml);
        PUSH32(esp,4); PUSH32(esp,_old_buffer);
        PUSH32(esp,0x001277B5u); RECOMP_ABI_CALL(0x001234F0u,sub_001234F0);
        esp+=8;
        if(esp!=_saved_sp) { fprintf(stderr,"[PKGB ERROR] Guest free ABI failure\n"); _exit(4); }
        fprintf(stderr,"[PKGB DECODE] binary=%u xml=%u\n",esi,_xml_size);
    }
    goto loc_001276ED;

loc_001277BD: ;
    SET_LO8(eax, 0); /* xor self */

loc_001277BF: ;
    ecx = MEM32(esp + 0x514);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x001277CFu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_001277CF: ;
    esp = esp + 0x508;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001277E0
 * Original: 0x001277E0 - 0x001277F4 (20 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001277E0(void)
{

loc_001277E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    esi = ecx;
    PUSH32(esp, 0x001277EAu); RECOMP_ABI_CALL(0x00125E80u, sub_00125E80); /* call 0x00125E80 */

loc_001277EA: ;
    MEM32(esi) = 0x3DB6BC;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00127800
 * Original: 0x00127800 - 0x0012781E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00127800: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00127808u); RECOMP_ABI_CALL(0x00127820u, sub_00127820); /* call 0x00127820 */

loc_00127808: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00127818; /* je: equal / zero */

loc_0012780F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00127815u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00127815: ;
    esp = esp + 4;

loc_00127818: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00127820
 * Original: 0x00127820 - 0x0012782B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127820(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00127820: ;
    MEM32(ecx) = 0x3DB6BC;
    g_seh_ebp = ebp; sub_00126E70(); return; /* tail jmp 0x00126E70 */

}

/**
 * sub_00127830
 * Original: 0x00127830 - 0x0012784E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00127830: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00127838u); RECOMP_ABI_CALL(0x00127850u, sub_00127850); /* call 0x00127850 */

loc_00127838: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00127848; /* je: equal / zero */

loc_0012783F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00127845u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00127845: ;
    esp = esp + 4;

loc_00127848: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00127850
 * Original: 0x00127850 - 0x0012785B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127850(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00127850: ;
    MEM32(ecx) = 0x3DB6D4;
    g_seh_ebp = ebp; sub_00126E70(); return; /* tail jmp 0x00126E70 */

}

/**
 * sub_00127860
 * Original: 0x00127860 - 0x00127921 (193 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127860(void)
{

loc_00127860: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351D5E);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 5);
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0x00127888u); RECOMP_ABI_CALL(0x00125E80u, sub_00125E80); /* call 0x00125E80 */

loc_00127888: ;
    edi = esi + 0x2C;
    ebx = 0; /* xor self */
    ecx = edi;
    MEM32(esp + 0x30) = ebx;
    MEM32(esi) = 0x3DB6EC;
    PUSH32(esp, 0x0012789Eu); RECOMP_ABI_CALL(0x00199E10u, sub_00199E10); /* call 0x00199E10 */

loc_0012789E: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x18;
    PUSH32(esp, 0x001278AEu); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_001278AE: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001278B6u); RECOMP_ABI_CALL(0x00199E20u, sub_00199E20); /* call 0x00199E20 */

loc_001278B6: ;
    MEM32(edi + 0xC) = ebx;
    edi = esi + 0x3C;
    ecx = edi;
    MEM8(esp + 0x30) = 1;
    PUSH32(esp, 0x001278C8u); RECOMP_ABI_CALL(0x00199E10u, sub_00199E10); /* call 0x00199E10 */

loc_001278C8: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x24;
    PUSH32(esp, 0x001278D8u); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_001278D8: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001278E0u); RECOMP_ABI_CALL(0x00199E20u, sub_00199E20); /* call 0x00199E20 */

loc_001278E0: ;
    MEM32(edi + 0xC) = ebx;
    edi = esi + 0x4C;
    ecx = edi;
    MEM8(esp + 0x30) = 2;
    PUSH32(esp, 0x001278F2u); RECOMP_ABI_CALL(0x00199E10u, sub_00199E10); /* call 0x00199E10 */

loc_001278F2: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00127902u); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_00127902: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0012790Au); RECOMP_ABI_CALL(0x00199E20u, sub_00199E20); /* call 0x00199E20 */

loc_0012790A: ;
    ecx = MEM32(esp + 0x28);
    MEM32(edi + 0xC) = ebx;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_00127930
 * Original: 0x00127930 - 0x0012794E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00127930: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00127938u); RECOMP_ABI_CALL(0x00127950u, sub_00127950); /* call 0x00127950 */

loc_00127938: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00127948; /* je: equal / zero */

loc_0012793F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00127945u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00127945: ;
    esp = esp + 4;

loc_00127948: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00127950
 * Original: 0x00127950 - 0x00127A05 (181 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127950(void)
{

loc_00127950: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351D8E);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = esi;
    MEM32(esi) = 0x3DB6EC;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x18;
    MEM32(esp + 0x2C) = 2;
    edi = esi + 0x4C;
    PUSH32(esp, 0x00127992u); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_00127992: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0012799Au); RECOMP_ABI_CALL(0x00199E20u, sub_00199E20); /* call 0x00199E20 */

loc_0012799A: ;
    PUSH32(esp, 2);
    ebx = 0; /* xor self */
    MEM32(edi + 0xC) = ebx;
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x18;
    MEM8(esp + 0x2C) = 1;
    edi = esi + 0x3C;
    PUSH32(esp, 0x001279B7u); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_001279B7: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001279BFu); RECOMP_ABI_CALL(0x00199E20u, sub_00199E20); /* call 0x00199E20 */

loc_001279BF: ;
    PUSH32(esp, 2);
    MEM32(edi + 0xC) = ebx;
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x18;
    MEM8(esp + 0x2C) = LO8(ebx);
    edi = esi + 0x2C;
    PUSH32(esp, 0x001279D9u); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_001279D9: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001279E1u); RECOMP_ABI_CALL(0x00199E20u, sub_00199E20); /* call 0x00199E20 */

loc_001279E1: ;
    ecx = esi;
    MEM32(edi + 0xC) = ebx;
    MEM32(esp + 0x24) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001279F3u); RECOMP_ABI_CALL(0x00126E70u, sub_00126E70); /* call 0x00126E70 */

loc_001279F3: ;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00127A10
 * Original: 0x00127A10 - 0x00127B04 (244 bytes, 86 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00127A10: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351DB1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x17);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x44);
    ebx = ecx;
    PUSH32(esp, 0x00127A37u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_00127A37: ;
    esp = esp + 0xC;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00127A59; /* je: equal / zero */

loc_00127A4E: ;
    ecx = eax;
    PUSH32(esp, 0x00127A55u); RECOMP_ABI_CALL(0x00127350u, sub_00127350); /* call 0x00127350 */

loc_00127A55: ;
    esi = eax;
    goto loc_00127A5B;

loc_00127A59: ;
    esi = 0; /* xor self */

loc_00127A5B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    if (TEST_NZ(_fa, _fb)) goto loc_00127A7A; /* jne: not equal / not zero */

loc_00127A67: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00127A7A: ;
    eax = MEM32(ebx + 0x1C);
    PUSH32(esp, edi);
    edi = ebx + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00127A89u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00127A89: ;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0xC);
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x00127A96u); RECOMP_ABI_CALL(0x00125820u, sub_00125820); /* call 0x00125820 */

loc_00127A96: ;
    SET_LO8(ecx, MEM8(ebx + 0x2C));
    MEM8(esi + 0x2C) = LO8(ecx);
    eax = MEM32(ebx + 0x3C);
    edi = ebx + 0x34;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00127AAAu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00127AAA: ;
    edx = MEM32(edi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi + 0x34;
    PUSH32(esp, 0x00127AB7u); RECOMP_ABI_CALL(0x00125820u, sub_00125820); /* call 0x00125820 */

loc_00127AB7: ;
    edi = MEM32(ebx + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00127AF0; /* je: equal / zero */

loc_00127ABE: ;
    edi = edi;

loc_00127AC0: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00127AC7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00127AC7: ;
    MEM32(eax + 4) = esi;
    ecx = MEM32(esi + 0x10);
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = 0;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00127AE3; /* je: equal / zero */

loc_00127ADE: ;
    MEM32(ecx + 0x28) = eax;
    goto loc_00127AE6;

loc_00127AE3: ;
    MEM32(esi + 0xC) = eax;

loc_00127AE6: ;
    MEM32(esi + 0x10) = eax;
    edi = MEM32(edi + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00127AC0; /* jne: not equal / not zero */

loc_00127AF0: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00127B10
 * Original: 0x00127B10 - 0x00127B2E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00127B10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00127B18u); RECOMP_ABI_CALL(0x00127B30u, sub_00127B30); /* call 0x00127B30 */

loc_00127B18: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00127B28; /* je: equal / zero */

loc_00127B1F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00127B25u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00127B25: ;
    esp = esp + 4;

loc_00127B28: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00127B30
 * Original: 0x00127B30 - 0x00127B3B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127B30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00127B30: ;
    MEM32(ecx) = 0x3DB704;
    g_seh_ebp = ebp; sub_00126E70(); return; /* tail jmp 0x00126E70 */

}

/**
 * sub_00127B40
 * Original: 0x00127B40 - 0x00127BE5 (165 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00127B40: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351DB1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x2C);
    ebx = ecx;
    PUSH32(esp, 0x00127B68u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_00127B68: ;
    esi = eax;
    esp = esp + 0xC;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x1C) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00127B94; /* je: equal / zero */

loc_00127B81: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x00127B8Au); RECOMP_ABI_CALL(0x00125E80u, sub_00125E80); /* call 0x00125E80 */

loc_00127B8A: ;
    MEM32(esi) = 0x3DB6BC;
    edi = esi;
    goto loc_00127B96;

loc_00127B94: ;
    edi = 0; /* xor self */

loc_00127B96: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    if (TEST_NZ(_fa, _fb)) goto loc_00127BB6; /* jne: not equal / not zero */

loc_00127BA2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00127BB6: ;
    eax = MEM32(ebx + 0x1C);
    esi = ebx + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00127BC4u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00127BC4: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    ecx = edi + 0x14;
    PUSH32(esp, 0x00127BD1u); RECOMP_ABI_CALL(0x00125820u, sub_00125820); /* call 0x00125820 */

loc_00127BD1: ;
    ecx = MEM32(esp + 0x14);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00127BF0
 * Original: 0x00127BF0 - 0x00127C95 (165 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00127BF0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351DB1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x19);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x2C);
    ebx = ecx;
    PUSH32(esp, 0x00127C18u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_00127C18: ;
    esi = eax;
    esp = esp + 0xC;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x1C) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00127C44; /* je: equal / zero */

loc_00127C31: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x00127C3Au); RECOMP_ABI_CALL(0x00125E80u, sub_00125E80); /* call 0x00125E80 */

loc_00127C3A: ;
    MEM32(esi) = 0x3DB6D4;
    edi = esi;
    goto loc_00127C46;

loc_00127C44: ;
    edi = 0; /* xor self */

loc_00127C46: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    if (TEST_NZ(_fa, _fb)) goto loc_00127C66; /* jne: not equal / not zero */

loc_00127C52: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00127C66: ;
    eax = MEM32(ebx + 0x1C);
    esi = ebx + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00127C74u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00127C74: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    ecx = edi + 0x14;
    PUSH32(esp, 0x00127C81u); RECOMP_ABI_CALL(0x00125820u, sub_00125820); /* call 0x00125820 */

loc_00127C81: ;
    ecx = MEM32(esp + 0x14);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00127CA0
 * Original: 0x00127CA0 - 0x00127D8B (235 bytes, 83 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00127CA0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351DB1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x5C);
    ebx = ecx;
    PUSH32(esp, 0x00127CC7u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_00127CC7: ;
    esp = esp + 0xC;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00127CE9; /* je: equal / zero */

loc_00127CDE: ;
    ecx = eax;
    PUSH32(esp, 0x00127CE5u); RECOMP_ABI_CALL(0x00127860u, sub_00127860); /* call 0x00127860 */

loc_00127CE5: ;
    esi = eax;
    goto loc_00127CEB;

loc_00127CE9: ;
    esi = 0; /* xor self */

loc_00127CEB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    if (TEST_NZ(_fa, _fb)) goto loc_00127D0A; /* jne: not equal / not zero */

loc_00127CF7: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00127D0A: ;
    eax = MEM32(ebx + 0x1C);
    PUSH32(esp, edi);
    edi = ebx + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00127D19u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00127D19: ;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0xC);
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x00127D26u); RECOMP_ABI_CALL(0x00125820u, sub_00125820); /* call 0x00125820 */

loc_00127D26: ;
    eax = MEM32(ebx + 0x34);
    edi = ebx + 0x2C;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00127D34u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00127D34: ;
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi + 0x2C;
    PUSH32(esp, 0x00127D41u); RECOMP_ABI_CALL(0x00125820u, sub_00125820); /* call 0x00125820 */

loc_00127D41: ;
    eax = MEM32(ebx + 0x44);
    edi = ebx + 0x3C;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00127D4Fu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00127D4F: ;
    edx = MEM32(edi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi + 0x3C;
    PUSH32(esp, 0x00127D5Cu); RECOMP_ABI_CALL(0x00125820u, sub_00125820); /* call 0x00125820 */

loc_00127D5C: ;
    eax = MEM32(ebx + 0x54);
    edi = ebx + 0x4C;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00127D6Au); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00127D6A: ;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0xC);
    PUSH32(esp, eax);
    ecx = esi + 0x4C;
    PUSH32(esp, 0x00127D77u); RECOMP_ABI_CALL(0x00125820u, sub_00125820); /* call 0x00125820 */

loc_00127D77: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00127D90
 * Original: 0x00127D90 - 0x00127E35 (165 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00127D90: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351DB1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x2C);
    ebx = ecx;
    PUSH32(esp, 0x00127DB8u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_00127DB8: ;
    esi = eax;
    esp = esp + 0xC;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x1C) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00127DE4; /* je: equal / zero */

loc_00127DD1: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x00127DDAu); RECOMP_ABI_CALL(0x00125E80u, sub_00125E80); /* call 0x00125E80 */

loc_00127DDA: ;
    MEM32(esi) = 0x3DB704;
    edi = esi;
    goto loc_00127DE6;

loc_00127DE4: ;
    edi = 0; /* xor self */

loc_00127DE6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    if (TEST_NZ(_fa, _fb)) goto loc_00127E06; /* jne: not equal / not zero */

loc_00127DF2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00127E06: ;
    eax = MEM32(ebx + 0x1C);
    esi = ebx + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00127E14u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00127E14: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    ecx = edi + 0x14;
    PUSH32(esp, 0x00127E21u); RECOMP_ABI_CALL(0x00125820u, sub_00125820); /* call 0x00125820 */

loc_00127E21: ;
    ecx = MEM32(esp + 0x14);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00127E40
 * Original: 0x00127E40 - 0x00127E5E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00127E40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00127E48u); RECOMP_ABI_CALL(0x00126E70u, sub_00126E70); /* call 0x00126E70 */

loc_00127E48: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00127E58; /* je: equal / zero */

loc_00127E4F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00127E55u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00127E55: ;
    esp = esp + 4;

loc_00127E58: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00127E60
 * Original: 0x00127E60 - 0x00127E7E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00127E60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00127E68u); RECOMP_ABI_CALL(0x001270A0u, sub_001270A0); /* call 0x001270A0 */

loc_00127E68: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00127E78; /* je: equal / zero */

loc_00127E6F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00127E75u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00127E75: ;
    esp = esp + 4;

loc_00127E78: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00127E80
 * Original: 0x00127E80 - 0x00127E9E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00127E80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00127E88u); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_00127E88: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00127E98; /* je: equal / zero */

loc_00127E8F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00127E95u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00127E95: ;
    esp = esp + 4;

loc_00127E98: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00127EA0
 * Original: 0x00127EA0 - 0x00127EAE (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127EA0(void)
{

loc_00127EA0: ;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    eax = ecx + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00127EADu); RECOMP_ABI_CALL(0x00127510u, sub_00127510); /* call 0x00127510 */

loc_00127EAD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00127EB0
 * Original: 0x00127EB0 - 0x00127ECF (31 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127EB0(void)
{

loc_00127EB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x508560);
    PUSH32(esp, 0x00127EC4u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00127EC4: ;
    esp = esp + 0xC;
    MEM8(0x50865F) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00127ED0
 * Original: 0x00127ED0 - 0x00127F07 (55 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00127ED0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00127F03; /* je: equal / zero */

loc_00127ED9: ;
    /* nop */

loc_00127EE0: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00127F03; /* je: equal / zero */

loc_00127EE6: ;
    eax = SX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00127EEFu); RECOMP_ABI_CALL(0x00341F75u, sub_00341F75); /* call 0x00341F75 */

loc_00127EEF: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00127F00; /* jne: not equal / not zero */

loc_00127EF6: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00127F00; /* je: equal / zero */

loc_00127EFC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xD (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00127F03; /* jne: not equal / not zero */

loc_00127F00: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00127EE0; /* jne: not equal / not zero */

loc_00127F03: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00127F10
 * Original: 0x00127F10 - 0x00127F3B (43 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00127F10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x3DB848);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00127F1Fu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_00127F1F: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00127F35; /* jne: not equal / not zero */

loc_00127F26: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x00127F2Du); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00127F2D: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

loc_00127F35: ;
    eax = eax + 3;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00127F40
 * Original: 0x00127F40 - 0x0012800F (207 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00127F40: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351E38);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00127FEE; /* je: equal / zero */

loc_00127F68: ;
    eax = (uint32_t)(int32_t)SMEM8(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00127F71u); RECOMP_ABI_CALL(0x00341EF5u, sub_00341EF5); /* call 0x00341EF5 */

loc_00127F71: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00127F7D; /* jne: not equal / not zero */

loc_00127F78: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x5F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0x5F (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00127FEE; /* jne: not equal / not zero */

loc_00127F7D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00127FA7; /* je: equal / zero */

loc_00127F80: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00127FA7; /* je: equal / zero */

loc_00127F86: ;
    ecx = SX8(LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00127F8Fu); RECOMP_ABI_CALL(0x00341FC7u, sub_00341FC7); /* call 0x00341FC7 */

loc_00127F8F: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00127FA4; /* jne: not equal / not zero */

loc_00127F96: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00127FA4; /* je: equal / zero */

loc_00127F9C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2D (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00127FA4; /* je: equal / zero */

loc_00127FA0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00127FA7; /* jne: not equal / not zero */

loc_00127FA4: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00127F80; /* jne: not equal / not zero */

loc_00127FA7: ;
    PUSH32(esp, 2);
    edx = esi;
    edx = edx - edi;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00127FB8u); RECOMP_ABI_CALL(0x00125E00u, sub_00125E00); /* call 0x00125E00 */

loc_00127FB8: ;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x00127FCAu); RECOMP_ABI_CALL(0x00125E50u, sub_00125E50); /* call 0x00125E50 */

loc_00127FCA: ;
    ecx = esp + 8;
    MEM32(esp + 0x20) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00127FDBu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00127FDB: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_00127FEE: ;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x00127FFCu); RECOMP_ABI_CALL(0x001258C0u, sub_001258C0); /* call 0x001258C0 */

loc_00127FFC: ;
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00128010
 * Original: 0x00128010 - 0x0012821E (526 bytes, 162 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128010(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00128010: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351E1D);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    MEM32(esp + 8) = ebx;
    ebp = MEM32(esp + 0x34);
    eax = MEM32(ebp);
    PUSH32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, 0x00128044u); RECOMP_ABI_CALL(0x00127ED0u, sub_00127ED0); /* call 0x00127ED0 */

loc_00128044: ;
    edi = eax;
    eax = (uint32_t)(int32_t)SMEM8(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012804Fu); RECOMP_ABI_CALL(0x00341EF5u, sub_00341EF5); /* call 0x00341EF5 */

loc_0012804F: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00128188; /* jne: not equal / not zero */

loc_0012805A: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128188; /* je: equal / zero */

loc_00128064: ;
    ecx = SX8(LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012806Du); RECOMP_ABI_CALL(0x00342903u, sub_00342903); /* call 0x00342903 */

loc_0012806D: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001280F4; /* jne: not equal / not zero */

loc_00128075: ;
    edx = (uint32_t)(int32_t)SMEM8(edi + 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012807Fu); RECOMP_ABI_CALL(0x00342903u, sub_00342903); /* call 0x00342903 */

loc_0012807F: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x78 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001280F4; /* jne: not equal / not zero */

loc_00128087: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00128091u); RECOMP_ABI_CALL(0x00342903u, sub_00342903); /* call 0x00342903 */

loc_00128091: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001280F4; /* jne: not equal / not zero */

loc_00128099: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 3);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001280A3u); RECOMP_ABI_CALL(0x00342903u, sub_00342903); /* call 0x00342903 */

loc_001280A3: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001280F4; /* jne: not equal / not zero */

loc_001280AB: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x001280B6u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_001280B6: ;
    esp = esp + 0xC;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x10) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x34) = 3;
    if (TEST_Z(_fa, _fb)) goto loc_001280E3; /* je: equal / zero */

loc_001280CD: ;
    ecx = eax;
    PUSH32(esp, 0x001280D4u); RECOMP_ABI_CALL(0x00127860u, sub_00127860); /* call 0x00127860 */

loc_001280D4: ;
    MEM32(esp + 0x34) = 0xFFFFFFFFu;
    esi = eax;
    goto loc_001281E3;

loc_001280E3: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x34) = 0xFFFFFFFFu;
    esi = eax;
    goto loc_001281E3;

loc_001280F4: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x21) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x21 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012813F; /* jne: not equal / not zero */

loc_001280F9: ;
    SET_LO8(ecx, MEM8(edi + 1));
    SET_LO8(eax, 0x2D);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012813F; /* jne: not equal / not zero */

loc_00128102: ;
    _fa = (uint32_t)(MEM8(edi + 2)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 2), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012813F; /* jne: not equal / not zero */

loc_00128107: ;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x00128112u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_00128112: ;
    esp = esp + 0xC;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x10) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x34) = 4;
    if (TEST_Z(_fa, _fb)) goto loc_001280E3; /* je: equal / zero */

loc_00128129: ;
    ecx = eax;
    PUSH32(esp, 0x00128130u); RECOMP_ABI_CALL(0x001277E0u, sub_001277E0); /* call 0x001277E0 */

loc_00128130: ;
    MEM32(esp + 0x34) = 0xFFFFFFFFu;
    esi = eax;
    goto loc_001281E3;

loc_0012813F: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x0012814Au); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_0012814A: ;
    esi = eax;
    esp = esp + 0xC;
    MEM32(esp + 0x3C) = esi;
    MEM32(esp + 0x10) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x34) = 5;
    if (TEST_Z(_fa, _fb)) goto loc_0012817C; /* je: equal / zero */

loc_00128163: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x0012816Cu); RECOMP_ABI_CALL(0x00125E80u, sub_00125E80); /* call 0x00125E80 */

loc_0012816C: ;
    MEM32(esi) = 0x3DB704;
    MEM32(esp + 0x34) = 0xFFFFFFFFu;
    goto loc_001281E3;

loc_0012817C: ;
    esi = 0; /* xor self */
    MEM32(esp + 0x34) = 0xFFFFFFFFu;
    goto loc_001281E3;

loc_00128188: ;
    PUSH32(esp, 0x0012818Du); RECOMP_ABI_CALL(0x00126E50u, sub_00126E50); /* call 0x00126E50 */

loc_0012818D: ;
    esi = eax;
    MEM32(esp + 0x3C) = esi;
    MEM32(esp + 0x18) = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x34) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001281CB; /* je: equal / zero */

loc_001281A1: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x24;
    PUSH32(esp, 0x001281B1u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_001281B1: ;
    edx = esp + 0x1C;
    ebx = 1;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(esp + 0x38) = 1;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x001281CBu); RECOMP_ABI_CALL(0x00126FB0u, sub_00126FB0); /* call 0x00126FB0 */

loc_001281CB: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    esi = eax;
    MEM32(esp + 0x34) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_001281E3; /* je: equal / zero */

loc_001281DA: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x001281E3u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_001281E3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001281F8; /* je: equal / zero */

loc_001281E7: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esi + 4) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001281F6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001281F6: ;
    goto loc_00128204;

loc_001281F8: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x001281FFu); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_001281FF: ;
    esp = esp + 4;
    eax = 0; /* xor self */

loc_00128204: ;
    ecx = MEM32(esp + 0x2C);
    MEM32(ebp) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x28;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00128220
 * Original: 0x00128220 - 0x001282BC (156 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128220: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351E38);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    PUSH32(esp, 0x3E);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x00128249u); RECOMP_ABI_CALL(0x003426D0u, sub_003426D0); /* call 0x003426D0 */

loc_00128249: ;
    esi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00128272; /* jne: not equal / not zero */

loc_00128252: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x00128259u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00128259: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

loc_00128272: ;
    PUSH32(esp, 2);
    eax = esi;
    eax = eax - edi;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00128283u); RECOMP_ABI_CALL(0x00125E00u, sub_00125E00); /* call 0x00125E00 */

loc_00128283: ;
    PUSH32(esp, eax);
    ecx = ebx + 0x14;
    MEM32(esp + 0x28) = 0;
    PUSH32(esp, 0x00128294u); RECOMP_ABI_CALL(0x00125E50u, sub_00125E50); /* call 0x00125E50 */

loc_00128294: ;
    ecx = esp + 0xC;
    MEM32(esp + 0x24) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001282A5u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_001282A5: ;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    eax = esi + 1;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001282C0
 * Original: 0x001282C0 - 0x001283FA (314 bytes, 108 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001282C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001282C0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351E38);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(esp + 0x24);
    eax = ebp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001282E9u); RECOMP_ABI_CALL(0x00127F40u, sub_00127F40); /* call 0x00127F40 */

loc_001282E9: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001283DC; /* je: equal / zero */

loc_001282F4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001282FAu); RECOMP_ABI_CALL(0x00127ED0u, sub_00127ED0); /* call 0x00127ED0 */

loc_001282FA: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001283DC; /* je: equal / zero */

loc_00128305: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x3D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x3D (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001283DC; /* jne: not equal / not zero */

loc_0012830E: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00128315u); RECOMP_ABI_CALL(0x00127ED0u, sub_00127ED0); /* call 0x00127ED0 */

loc_00128315: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001283DC; /* je: equal / zero */

loc_00128320: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001283DC; /* je: equal / zero */

loc_0012832A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x27) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x27 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + 1;
    if (CMP_NE(_fa, _fb)) goto loc_00128347; /* jne: not equal / not zero */

loc_00128335: ;
    PUSH32(esp, 0x27);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012833Du); RECOMP_ABI_CALL(0x003426D0u, sub_003426D0); /* call 0x003426D0 */

loc_0012833D: ;
    esi = eax;
    esp = esp + 8;
    ebx = esi + 1;
    goto loc_00128394;

loc_00128347: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x22) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x22 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012835E; /* jne: not equal / not zero */

loc_0012834C: ;
    PUSH32(esp, 0x22);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00128354u); RECOMP_ABI_CALL(0x003426D0u, sub_003426D0); /* call 0x003426D0 */

loc_00128354: ;
    esi = eax;
    esp = esp + 8;
    ebx = esi + 1;
    goto loc_00128394;

loc_0012835E: ;
    SET_LO8(eax, MEM8(edi + -1));
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    esi = edi;
    if (TEST_Z(_fa, _fb)) goto loc_00128392; /* je: equal / zero */

loc_00128368: ;
    goto loc_00128370;

    /* nop */

loc_00128370: ;
    edx = (uint32_t)(int32_t)SMEM8(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00128379u); RECOMP_ABI_CALL(0x00341F75u, sub_00341F75); /* call 0x00341F75 */

loc_00128379: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00128392; /* jne: not equal / not zero */

loc_00128380: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128392; /* je: equal / zero */

loc_00128386: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128392; /* je: equal / zero */

loc_0012838A: ;
    SET_LO8(eax, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00128370; /* jne: not equal / not zero */

loc_00128392: ;
    ebx = esi;

loc_00128394: ;
    PUSH32(esp, 1);
    esi = esi - edi;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x001283A3u); RECOMP_ABI_CALL(0x00125E00u, sub_00125E00); /* call 0x00125E00 */

loc_001283A3: ;
    PUSH32(esp, eax);
    ecx = ebp + 0x14;
    MEM32(esp + 0x2C) = 0;
    PUSH32(esp, 0x001283B4u); RECOMP_ABI_CALL(0x00125E50u, sub_00125E50); /* call 0x00125E50 */

loc_001283B4: ;
    ecx = esp + 0x10;
    MEM32(esp + 0x28) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001283C5u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_001283C5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

loc_001283DC: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x001283E3u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_001283E3: ;
    ecx = MEM32(esp + 0x18);
    esp = esp + 4;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00128400
 * Original: 0x00128400 - 0x0012857D (381 bytes, 116 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128400(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00128400: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351E68);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x58;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x74);
    edi = edi + 4;
    PUSH32(esp, 0x3DB640);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x0012842Fu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_0012842F: ;
    esi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012844B; /* jne: not equal / not zero */

loc_00128438: ;
    PUSH32(esp, 0x3D5784);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00128443u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_00128443: ;
    esi = eax;
    esp = esp + 8;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0012844E;

loc_0012844B: ;
    esi = esi + 2;

loc_0012844E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00128472; /* jne: not equal / not zero */

loc_00128452: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x00128459u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00128459: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x58);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x64;
    esp += 8; return; /* ret 4 */

loc_00128472: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3CCFF4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012847Eu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_0012847E: ;
    ebx = eax;
    esp = esp + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001284C4; /* je: equal / zero */

loc_00128487: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001284C4; /* jae: above or equal (unsigned >=) */

loc_0012848B: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00128494u); RECOMP_ABI_CALL(0x00125AA0u, sub_00125AA0); /* call 0x00125AA0 */

loc_00128494: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    MEM32(esp + 0x74) = 0;
    PUSH32(esp, 0x001284A6u); RECOMP_ABI_CALL(0x001282C0u, sub_001282C0); /* call 0x001282C0 */

loc_001284A6: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + 0x2C;
    PUSH32(esp, 0x001284B3u); RECOMP_ABI_CALL(0x00125E50u, sub_00125E50); /* call 0x00125E50 */

loc_001284B3: ;
    ecx = esp + 0x10;
    MEM32(esp + 0x70) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001284C4u); RECOMP_ABI_CALL(0x00125B40u, sub_00125B40); /* call 0x00125B40 */

loc_001284C4: ;
    PUSH32(esp, 0x3DB858);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001284CFu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_001284CF: ;
    ebx = eax;
    esp = esp + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00128515; /* je: equal / zero */

loc_001284D8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00128515; /* jae: above or equal (unsigned >=) */

loc_001284DC: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x001284E5u); RECOMP_ABI_CALL(0x00125AA0u, sub_00125AA0); /* call 0x00125AA0 */

loc_001284E5: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    MEM32(esp + 0x74) = 1;
    PUSH32(esp, 0x001284F7u); RECOMP_ABI_CALL(0x001282C0u, sub_001282C0); /* call 0x001282C0 */

loc_001284F7: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = ebp + 0x3C;
    PUSH32(esp, 0x00128504u); RECOMP_ABI_CALL(0x00125E50u, sub_00125E50); /* call 0x00125E50 */

loc_00128504: ;
    ecx = esp + 0x10;
    MEM32(esp + 0x70) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00128515u); RECOMP_ABI_CALL(0x00125B40u, sub_00125B40); /* call 0x00125B40 */

loc_00128515: ;
    PUSH32(esp, 0x3DB84C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00128520u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_00128520: ;
    esp = esp + 8;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00128567; /* je: equal / zero */

loc_0012852A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00128567; /* jae: above or equal (unsigned >=) */

loc_0012852E: ;
    ecx = esp + 0x38;
    PUSH32(esp, 0x00128537u); RECOMP_ABI_CALL(0x00125AA0u, sub_00125AA0); /* call 0x00125AA0 */

loc_00128537: ;
    PUSH32(esp, edi);
    ecx = esp + 0x3C;
    MEM32(esp + 0x70) = 2;
    PUSH32(esp, 0x00128549u); RECOMP_ABI_CALL(0x001282C0u, sub_001282C0); /* call 0x001282C0 */

loc_00128549: ;
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    ecx = ebp + 0x4C;
    PUSH32(esp, 0x00128556u); RECOMP_ABI_CALL(0x00125E50u, sub_00125E50); /* call 0x00125E50 */

loc_00128556: ;
    ecx = esp + 0x38;
    MEM32(esp + 0x6C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00128567u); RECOMP_ABI_CALL(0x00125B40u, sub_00125B40); /* call 0x00125B40 */

loc_00128567: ;
    ecx = MEM32(esp + 0x64);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x64;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00128580
 * Original: 0x00128580 - 0x001285C0 (64 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128580: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + 0x14;
    ecx = edi;
    esi = 0; /* xor self */
    PUSH32(esp, 0x0012858Eu); RECOMP_ABI_CALL(0x001179C0u, sub_001179C0); /* call 0x001179C0 */

loc_0012858E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001285B6; /* jbe: below or equal (unsigned <=) */

loc_00128592: ;
    ecx = edi;
    PUSH32(esp, 0x00128599u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00128599: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001285A3u); RECOMP_ABI_CALL(0x00341F75u, sub_00341F75); /* call 0x00341F75 */

loc_001285A3: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001285BB; /* je: equal / zero */

loc_001285AA: ;
    ecx = edi;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x001285B2u); RECOMP_ABI_CALL(0x001179C0u, sub_001179C0); /* call 0x001179C0 */

loc_001285B2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00128592; /* jb: below (unsigned <) */

loc_001285B6: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001285BB: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001285C0
 * Original: 0x001285C0 - 0x0012861F (95 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001285C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001285C0: ;
    PUSH32(esp, esi);
    eax = ecx;
    PUSH32(esp, edi);
    esi = eax + 1;

loc_001285C7: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001285C7; /* jne: not equal / not zero */

loc_001285CE: ;
    edi = MEM32(esp + 0xC);
    edx = edi;
    eax = eax - esi;
    esi = edx + 1;
    PUSH32(esp, ebx);
    /* nop */

loc_001285E0: ;
    SET_LO8(ebx, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001285E0; /* jne: not equal / not zero */

loc_001285E7: ;
    edx = edx - esi;
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2000 (32-bit) */
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_0012861A; /* jge: greater or equal (signed >=) */

loc_001285F4: ;
    eax = edi;
    esi = edi;

loc_001285F8: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001285F8; /* jne: not equal / not zero */

loc_001285FF: ;
    eax = eax - esi;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = ecx;

loc_00128604: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00128604; /* jne: not equal / not zero */

loc_0012860C: ;
    ecx = eax;
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

loc_0012861A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00128620
 * Original: 0x00128620 - 0x0012868B (107 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128620: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0012862Du); RECOMP_ABI_CALL(0x00127ED0u, sub_00127ED0); /* call 0x00127ED0 */

loc_0012862D: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 8) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00128685; /* je: equal / zero */

loc_00128638: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128685; /* je: equal / zero */

loc_0012863D: ;
    /* nop */

loc_00128640: ;
    SET_LO8(eax, MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00128685; /* je: equal / zero */

loc_00128646: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012867B; /* jne: not equal / not zero */

loc_0012864A: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00128656u); RECOMP_ABI_CALL(0x00128010u, sub_00128010); /* call 0x00128010 */

loc_00128656: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00128662; /* je: equal / zero */

loc_0012865A: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00128662u); RECOMP_ABI_CALL(0x00125A40u, sub_00125A40); /* call 0x00125A40 */

loc_00128662: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012866Cu); RECOMP_ABI_CALL(0x00127ED0u, sub_00127ED0); /* call 0x00127ED0 */

loc_0012866C: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 8) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00128640; /* jne: not equal / not zero */

loc_00128677: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0012867B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00128682u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00128682: ;
    esp = esp + 4;

loc_00128685: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00128690
 * Original: 0x00128690 - 0x00128814 (388 bytes, 135 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128690(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00128690: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351E91);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0xC;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0x001286BBu); RECOMP_ABI_CALL(0x00127ED0u, sub_00127ED0); /* call 0x00127ED0 */

loc_001286BB: ;
    edi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x28) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_001286EA; /* je: equal / zero */

loc_001286C8: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001286EA; /* je: equal / zero */

loc_001286CE: ;
    ebp = edi;

loc_001286D0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128700; /* je: equal / zero */

loc_001286D4: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(esp + 0x28) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_001286D0; /* jne: not equal / not zero */

loc_001286E0: ;
    PUSH32(esp, 5);

loc_001286E2: ;
    PUSH32(esp, 0x001286E7u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_001286E7: ;
    esp = esp + 4;

loc_001286EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    ecx = MEM32(esp + 0xC);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

loc_00128700: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001286E0; /* je: equal / zero */

loc_00128705: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001287C0; /* je: equal / zero */

loc_0012870D: ;
    esi = edi;
    /* nop */

loc_00128710: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001287E6; /* je: equal / zero */

loc_0012871A: ;
    ecx = SX8(LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00128723u); RECOMP_ABI_CALL(0x00341F75u, sub_00341F75); /* call 0x00341F75 */

loc_00128723: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00128734; /* jne: not equal / not zero */

loc_0012872A: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128734; /* je: equal / zero */

loc_00128730: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xD (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128737; /* jne: not equal / not zero */

loc_00128734: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00128710; /* jne: not equal / not zero */

loc_00128737: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001287E6; /* je: equal / zero */

loc_00128741: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001287E6; /* je: equal / zero */

loc_00128749: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x00128754u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_00128754: ;
    esi = eax;
    esp = esp + 0xC;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x20) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0012877E; /* je: equal / zero */

loc_0012876D: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x00128776u); RECOMP_ABI_CALL(0x00125E80u, sub_00125E80); /* call 0x00125E80 */

loc_00128776: ;
    MEM32(esi) = 0x3DB6D4;
    goto loc_00128780;

loc_0012877E: ;
    esi = 0; /* xor self */

loc_00128780: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x20) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_001287F7; /* je: equal / zero */

loc_0012878C: ;
    edx = MEM32(esi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00128794u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00128794: ;
    ecx = esi;
    PUSH32(esp, 0x0012879Bu); RECOMP_ABI_CALL(0x00128580u, sub_00128580); /* call 0x00128580 */

loc_0012879B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001287AB; /* jne: not equal / not zero */

loc_0012879F: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001287A9u); RECOMP_ABI_CALL(0x00125A40u, sub_00125A40); /* call 0x00125A40 */

loc_001287A9: ;
    goto loc_001287E6;

loc_001287AB: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001287B3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001287B3: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001287BBu); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_001287BB: ;
    esp = esp + 8;
    goto loc_001287E6;

loc_001287C0: ;
    _fa = (uint32_t)(MEM8(edi + 1)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 1), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001287FE; /* je: equal / zero */

loc_001287C6: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001287D2u); RECOMP_ABI_CALL(0x00128010u, sub_00128010); /* call 0x00128010 */

loc_001287D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001286EA; /* je: equal / zero */

loc_001287DA: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001287E2u); RECOMP_ABI_CALL(0x00125A40u, sub_00125A40); /* call 0x00125A40 */

loc_001287E2: ;
    edi = MEM32(esp + 0x28);

loc_001287E6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001286EA; /* je: equal / zero */

loc_001287EE: ;
    esi = MEM32(esp + 0xC);
    goto loc_001286C8;

loc_001287F7: ;
    PUSH32(esp, 2);
    goto loc_001286E2;

loc_001287FE: ;
    ecx = MEM32(esp + 0x18);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00128820
 * Original: 0x00128820 - 0x001288FA (218 bytes, 76 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128820(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00128820: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2000);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x508660);
    ebp = ecx;
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, 0x0012883Cu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0012883C: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    MEM8(0x50A65F) = LO8(ebx);
    MEM8(esp + 0x1D) = LO8(ebx);
    PUSH32(esp, 0x00128850u); RECOMP_ABI_CALL(0x00127ED0u, sub_00127ED0); /* call 0x00127ED0 */

loc_00128850: ;
    edi = eax;
    SET_LO8(edx, MEM8(edi));
    esp = esp + 0x10;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001288E4; /* je: equal / zero */

loc_0012885F: ;
    PUSH32(esp, esi);

loc_00128860: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x3C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001288D0; /* je: equal / zero */

loc_00128865: ;
    eax = 0x508660;
    esi = eax + 1;
    /* nop */

loc_00128870: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00128870; /* jne: not equal / not zero */

loc_00128877: ;
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FFE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1FFE (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001288D0; /* jge: greater or equal (signed >=) */

loc_00128880: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xD (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001288C6; /* je: equal / zero */

loc_00128885: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001288C6; /* je: equal / zero */

loc_0012888A: ;
    ecx = SX8(LO8(edx));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00128893u); RECOMP_ABI_CALL(0x00341F75u, sub_00341F75); /* call 0x00341F75 */

loc_00128893: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001288C6; /* jne: not equal / not zero */

loc_0012889A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001288AF; /* je: equal / zero */

loc_0012889E: ;
    PUSH32(esp, 0x3CB044);
    ecx = 0x508660;
    PUSH32(esp, 0x001288ADu); RECOMP_ABI_CALL(0x001285C0u, sub_001285C0); /* call 0x001285C0 */

loc_001288AD: ;
    SET_LO8(ebx, 0); /* xor self */

loc_001288AF: ;
    SET_LO8(edx, MEM8(edi));
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = 0x508660;
    MEM8(esp + 0x14) = LO8(edx);
    PUSH32(esp, 0x001288C4u); RECOMP_ABI_CALL(0x001285C0u, sub_001285C0); /* call 0x001285C0 */

loc_001288C4: ;
    goto loc_001288C8;

loc_001288C6: ;
    SET_LO8(ebx, 1);

loc_001288C8: ;
    SET_LO8(edx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00128860; /* jne: not equal / not zero */

loc_001288D0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_001288E4; /* je: equal / zero */

loc_001288D5: ;
    PUSH32(esp, 0x3CB044);
    ecx = 0x508660;
    PUSH32(esp, 0x001288E4u); RECOMP_ABI_CALL(0x001285C0u, sub_001285C0); /* call 0x001285C0 */

loc_001288E4: ;
    PUSH32(esp, 0x508660);
    ecx = ebp + 0x14;
    PUSH32(esp, 0x001288F1u); RECOMP_ABI_CALL(0x001258C0u, sub_001258C0); /* call 0x001258C0 */

loc_001288F1: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00128900
 * Original: 0x00128900 - 0x00128B29 (553 bytes, 179 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128900(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00128900: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351EC1);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ebp = ecx;
    PUSH32(esp, 0x00128926u); RECOMP_ABI_CALL(0x00127ED0u, sub_00127ED0); /* call 0x00127ED0 */

loc_00128926: ;
    ebx = 0; /* xor self */
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128B0A; /* je: equal / zero */

loc_00128933: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128B0A; /* je: equal / zero */

loc_0012893B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00128947u); RECOMP_ABI_CALL(0x00127F40u, sub_00127F40); /* call 0x00127F40 */

loc_00128947: ;
    esi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128971; /* jne: not equal / not zero */

loc_00128950: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00128957u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00128957: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x24);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x30;
    esp += 8; return; /* ret 4 */

loc_00128971: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0012897Du); RECOMP_ABI_CALL(0x00125D40u, sub_00125D40); /* call 0x00125D40 */

loc_0012897D: ;
    MEM32(esp + 0x3C) = ebx;

loc_00128981: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128AE2; /* je: equal / zero */

loc_00128989: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012898Fu); RECOMP_ABI_CALL(0x00127ED0u, sub_00127ED0); /* call 0x00127ED0 */

loc_0012898F: ;
    esi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128AD8; /* je: equal / zero */

loc_0012899C: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128AD8; /* je: equal / zero */

loc_001289A6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128A0D; /* je: equal / zero */

loc_001289AA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128A1F; /* je: equal / zero */

loc_001289AE: ;
    PUSH32(esp, 0x001289B3u); RECOMP_ABI_CALL(0x00126E60u, sub_00126E60); /* call 0x00126E60 */

loc_001289B3: ;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x10) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(esp + 0x3C) = 2;
    if (CMP_EQ(_fa, _fb)) goto loc_001289CF; /* je: equal / zero */

loc_001289C4: ;
    ecx = eax;
    PUSH32(esp, 0x001289CBu); RECOMP_ABI_CALL(0x00125AA0u, sub_00125AA0); /* call 0x00125AA0 */

loc_001289CB: ;
    edi = eax;
    goto loc_001289D1;

loc_001289CF: ;
    edi = 0; /* xor self */

loc_001289D1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM8(esp + 0x3C) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001289F1; /* je: equal / zero */

loc_001289D9: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001289E1u); RECOMP_ABI_CALL(0x001282C0u, sub_001282C0); /* call 0x001282C0 */

loc_001289E1: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001289FD; /* je: equal / zero */

loc_001289E7: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x001289EFu); RECOMP_ABI_CALL(0x00126100u, sub_00126100); /* call 0x00126100 */

loc_001289EF: ;
    goto loc_00128981;

loc_001289F1: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x001289F8u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_001289F8: ;
    esp = esp + 4;
    goto loc_00128981;

loc_001289FD: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00128A05u); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_00128A05: ;
    esp = esp + 8;
    goto loc_00128AE2;

loc_00128A0D: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0x3E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 0x3E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128A1A; /* je: equal / zero */

loc_00128A13: ;
    PUSH32(esp, 7);
    goto loc_00128ADA;

loc_00128A1A: ;
    esi = esi + 2;
    goto loc_00128A97;

loc_00128A1F: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x00128A28u); RECOMP_ABI_CALL(0x00128690u, sub_00128690); /* call 0x00128690 */

loc_00128A28: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    ecx = esp + 0x14;
    if (CMP_EQ(_fa, _fb)) goto loc_00128AE6; /* je: equal / zero */

loc_00128A36: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x00128A3Du); RECOMP_ABI_CALL(0x001179C0u, sub_001179C0); /* call 0x001179C0 */

loc_00128A3D: ;
    PUSH32(esp, eax);
    ecx = esi + 2;
    PUSH32(esp, ecx);
    ecx = esp + 0x30;
    PUSH32(esp, 0x00128A4Bu); RECOMP_ABI_CALL(0x00125E00u, sub_00125E00); /* call 0x00125E00 */

loc_00128A4B: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0x3C (8-bit) */
    MEM8(esp + 0x3C) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00128ABF; /* jne: not equal / not zero */

loc_00128A55: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 0x2F (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128ABF; /* jne: not equal / not zero */

loc_00128A5B: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00128A69u); RECOMP_ABI_CALL(0x001258F0u, sub_001258F0); /* call 0x001258F0 */

loc_00128A69: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00128ABF; /* je: equal / zero */

loc_00128A6D: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00128A76u); RECOMP_ABI_CALL(0x001179C0u, sub_001179C0); /* call 0x001179C0 */

loc_00128A76: ;
    _fa = (uint32_t)(MEM8(eax + esi + 2)) & 0xFFu; _fb = (uint32_t)(0x3E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + esi + 2), 0x3E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128ABF; /* jne: not equal / not zero */

loc_00128A7D: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00128A86u); RECOMP_ABI_CALL(0x001179C0u, sub_001179C0); /* call 0x001179C0 */

loc_00128A86: ;
    ecx = esp + 0x24;
    esi = eax + esi + 3;
    MEM8(esp + 0x3C) = LO8(ebx);
    PUSH32(esp, 0x00128A97u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00128A97: ;
    ecx = esp + 0x14;
    MEM32(esp + 0x3C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00128AA8u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00128AA8: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x24);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x30;
    esp += 8; return; /* ret 4 */

loc_00128ABF: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x00128AC6u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00128AC6: ;
    esp = esp + 4;
    ecx = esp + 0x24;
    MEM8(esp + 0x3C) = LO8(ebx);
    PUSH32(esp, 0x00128AD6u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00128AD6: ;
    goto loc_00128AE2;

loc_00128AD8: ;
    PUSH32(esp, 6);

loc_00128ADA: ;
    PUSH32(esp, 0x00128ADFu); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00128ADF: ;
    esp = esp + 4;

loc_00128AE2: ;
    ecx = esp + 0x14;

loc_00128AE6: ;
    MEM32(esp + 0x3C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00128AF3u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00128AF3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x24);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x30;
    esp += 8; return; /* ret 4 */

loc_00128B0A: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00128B11u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00128B11: ;
    ecx = MEM32(esp + 0x30);
    esp = esp + 4;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x30;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00128B30
 * Original: 0x00128B30 - 0x00128B5A (42 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128B30(void)
{

loc_00128B30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x29);
    esi = eax;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00128B3Eu); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_00128B3E: ;
    edx = eax;
    ecx = esi;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    esp = esp + 0xC;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    eax = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00128B60
 * Original: 0x00128B60 - 0x00128C98 (312 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128B60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00128B60: ;
    esp = esp - 0x10;
    eax = MEM32(ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ebp = 0xFFFF;
    PUSH32(esp, 0);
    ecx = ebx;
    MEM32(esp + 0xC) = ebp;
    MEM32(esp + 0x18) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x00128B83u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00128B83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00128B8E; /* je: equal / zero */

loc_00128B87: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00128B8E: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00128B98u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00128B98: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_00128BA9; /* jae: above or equal (unsigned >=) */

loc_00128BA3: ;
    MEM32(esp + 4) = eax;
    ebp = eax;

loc_00128BA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x29);
    PUSH32(esp, 4);
    PUSH32(esp, 0x404);
    PUSH32(esp, 0x00128BB9u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_00128BB9: ;
    esi = eax;
    eax = 0; /* xor self */
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ecx = 0x101;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    if (TEST_NZ(_fa, _fb)) goto loc_00128BD4; /* jne: not equal / not zero */

loc_00128BCD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00128BD4: ;
    eax = 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00128C82; /* jbe: below or equal (unsigned <=) */

loc_00128BE1: ;
    goto loc_00128BF0;

loc_00128BE3: ;
    ebp = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    goto loc_00128BF0;

    /* nop */

loc_00128BF0: ;
    eax = eax + 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_A(_fa, _fb)) goto loc_00128C01; /* ja: above (unsigned >) */

loc_00128BFD: ;
    MEM32(esp + 0x10) = eax;

loc_00128C01: ;
    edi = MEM32(esp + 0x10);
    ebp = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x14);
    ebp = ebp - edi;
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x404) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x404 (32-bit) */
    edi = 0x404;
    if (CMP_A(_fa, _fb)) goto loc_00128C1F; /* ja: above (unsigned >) */

loc_00128C1D: ;
    edi = eax;

loc_00128C1F: ;
    eax = MEM32(ebx);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x00128C2Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00128C2C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00128C82; /* jne: not equal / not zero */

loc_00128C30: ;
    edx = MEM32(ebx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00128C3Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00128C3B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128C82; /* jne: not equal / not zero */

loc_00128C40: ;
    eax = edi + -3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00128C74; /* jle: less or equal (signed <=) */

loc_00128C47: ;
    SET_LO8(ecx, MEM8(esi + eax + -1));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x50) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x50 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128C66; /* jne: not equal / not zero */

loc_00128C51: ;
    _fa = (uint32_t)(MEM8(esi + eax + 1)) & 0xFFu; _fb = (uint32_t)(0x4B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + eax + 1), 0x4B (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128C66; /* jne: not equal / not zero */

loc_00128C58: ;
    _fa = (uint32_t)(MEM8(esi + eax + 2)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + eax + 2), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128C66; /* jne: not equal / not zero */

loc_00128C5F: ;
    _fa = (uint32_t)(MEM8(esi + eax + 3)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + eax + 3), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128C6C; /* je: equal / zero */

loc_00128C66: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00128C47; /* jg: greater (signed >) */

loc_00128C6A: ;
    goto loc_00128C74;

loc_00128C6C: ;
    eax = eax + ebp;
    MEM32(esp + 0x18) = eax;
    if ((eax != 0)) goto loc_00128C82; /* jne: not equal / not zero */

loc_00128C74: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00128BE3; /* jb: below (unsigned <) */

loc_00128C82: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00128C8Au); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_00128C8A: ;
    eax = MEM32(esp + 0x20);
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00128CA0
 * Original: 0x00128CA0 - 0x00128CC0 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00128CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128CA0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00128CAE; /* jne: not equal / not zero */

loc_00128CA8: ;
    eax = 0xFFFFFF9Au;
    esp += 4; return; /* ret */

loc_00128CAE: ;
    edx = MEM32(eax + 4);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = eax;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00128CC0
 * Original: 0x00128CC0 - 0x00128DE0 (288 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128CC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00128CC0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128CDA; /* jne: not equal / not zero */

loc_00128CCF: ;
    POP32(esp, ebp);
    eax = 0xFFFFFF9Au;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00128CDA: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0x42);
    PUSH32(esp, 0xE);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00128CE9u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_00128CE9: ;
    edx = eax;
    ecx = esi;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(ebx + 0x24);
    esi = MEM32(ebx + 0xC);
    ecx = MEM32(ebx);
    esp = esp + 0xC;
    PUSH32(esp, ebp);
    esi = esi + eax;
    MEM32(ebx + 0x28) = edx;
    MEM32(ebx + 0x2C) = edx;
    MEM32(ebx + 0x14) = eax;
    MEM32(ebx + 0x10) = ebp;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00128D20u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00128D20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00128D2F; /* je: equal / zero */

loc_00128D24: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00128D2F: ;
    PUSH32(esp, 0x29);
    PUSH32(esp, 4);
    PUSH32(esp, 0x10000);
    MEM32(esp + 0x24) = ebp;
    PUSH32(esp, 0x00128D41u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_00128D41: ;
    esi = eax;
    eax = 0; /* xor self */
    ecx = 0x4000;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ebp = MEM32(ebx + 0x20);
    eax = MEM32(ebx + 0x28);
    esp = esp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x10) = ebp;
    if (CMP_BE(_fa & _fb, 0)) goto loc_00128DC5; /* jbe: below or equal (unsigned <=) */

loc_00128D67: ;
    goto loc_00128D70;

loc_00128D69: ;
    ebp = MEM32(esp + 0x10);
    /* nop */

loc_00128D70: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x10000 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00128D7D; /* jb: below (unsigned <) */

loc_00128D78: ;
    ebp = 0x10000;

loc_00128D7D: ;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00128D88u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00128D88: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128DBD; /* jne: not equal / not zero */

loc_00128D8D: ;
    edi = MEM32(esp + 0x20);
    ecx = ebp;
    eax = ecx;
    ecx = ecx >> 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = eax;
    eax = MEM32(esp + 0x10);
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    ecx = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x14);
    ecx = ecx + ebp;
    eax = eax - ebp;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_00128D69; /* jne: not equal / not zero */

loc_00128DBB: ;
    goto loc_00128DC5;

loc_00128DBD: ;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;

loc_00128DC5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00128DD4; /* je: equal / zero */

loc_00128DC9: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00128DD1u); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_00128DD1: ;
    esp = esp + 8;

loc_00128DD4: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00128DE0
 * Original: 0x00128DE0 - 0x00128E14 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128DE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00128DF0; /* jne: not equal / not zero */

loc_00128DE9: ;
    eax = 0xFFFFFF9Au;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00128DF0: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00128E09; /* je: equal / zero */

loc_00128DF7: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00128DFFu); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_00128DFF: ;
    esp = esp + 8;
    MEM32(esi + 0x28) = 0;

loc_00128E09: ;
    MEM32(esi + 0x2C) = 0;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00128E20
 * Original: 0x00128E20 - 0x00128FDA (442 bytes, 155 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128E20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00128E20: ;
    esp = esp - 0x50;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    eax = eax - MEM32(esi + 0x24);
    eax = eax + ecx;
    MEM32(esi + 0x2C) = eax;
    ecx = MEM32(eax);
    eax = eax + 4;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2014B50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2014B50 (32-bit) */
    MEM32(esi + 0x2C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00128E4E; /* je: equal / zero */

loc_00128E49: ;
    ebx = 0xFFFFFF99u;

loc_00128E4E: ;
    SET_LO16(ecx, MEM16(eax));
    eax = eax + 2;
    MEM32(esi + 0x2C) = eax;
    edx = SX16(LO16(ecx));
    SET_LO16(ecx, MEM16(eax));
    eax = eax + 2;
    MEM32(esi + 0x2C) = eax;
    ecx = SX16(LO16(ecx));
    eax = eax + 2;
    MEM32(esp + 0x14) = ecx;
    SET_LO16(ecx, MEM16(eax + -2));
    MEM32(esi + 0x2C) = eax;
    eax = eax + 2;
    MEM32(esp + 0x10) = edx;
    edx = SX16(LO16(ecx));
    SET_LO16(ecx, MEM16(eax + -2));
    MEM32(esi + 0x2C) = eax;
    ecx = SX16(LO16(ecx));
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(eax);
    MEM32(esp + 0x18) = edx;
    edx = eax + 4;
    eax = ecx;
    eax = eax >> 0x10;
    edi = eax;
    edi = edi & 0x1F;
    MEM32(esp + 0x54) = edi;
    edi = eax;
    eax = eax >> 9;
    eax = eax & 0x7F;
    eax = eax + 0x7BC;
    MEM32(esp + 0x5C) = eax;
    eax = ecx;
    eax = eax >> 0xB;
    eax = eax & 0x1F;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x50) = eax;
    eax = ecx;
    ecx = ecx & 0x1F;
    MEM32(esi + 0x2C) = edx;
    ecx = ecx << 1;
    eax = eax >> 5;
    eax = eax & 0x3F;
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(edx);
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x24) = ecx;
    eax = edx + 4;
    MEM32(esi + 0x2C) = eax;
    ecx = MEM32(eax);
    eax = eax + 4;
    MEM32(esi + 0x2C) = eax;
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(eax);
    eax = eax + 4;
    MEM32(esi + 0x2C) = eax;
    MEM32(esp + 0x2C) = ecx;
    SET_LO16(ecx, MEM16(eax));
    eax = eax + 2;
    MEM32(esi + 0x2C) = eax;
    edx = SX16(LO16(ecx));
    SET_LO16(ecx, MEM16(eax));
    ecx = SX16(LO16(ecx));
    eax = eax + 2;
    MEM32(esi + 0x2C) = eax;
    MEM32(esp + 0x34) = ecx;
    SET_LO16(ecx, MEM16(eax));
    ecx = SX16(LO16(ecx));
    eax = eax + 2;
    edi = edi >> 5;
    MEM32(esi + 0x2C) = eax;
    MEM32(esp + 0x38) = ecx;
    SET_LO16(ecx, MEM16(eax));
    edi = edi & 0xF;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = SX16(LO16(ecx));
    eax = eax + 2;
    MEM32(esp + 0x58) = edi;
    MEM32(esp + 0x30) = edx;
    MEM32(esi + 0x2C) = eax;
    MEM32(esp + 0x3C) = ecx;
    SET_LO16(ecx, MEM16(eax));
    eax = eax + 2;
    MEM32(esi + 0x2C) = eax;
    ecx = SX16(LO16(ecx));
    eax = eax + 4;
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(eax + -4);
    MEM32(esi + 0x2C) = eax;
    ebp = MEM32(eax);
    eax = eax + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(esp + 0x44) = ecx;
    MEM32(esi + 0x2C) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00128FD0; /* jne: not equal / not zero */

loc_00128F74: ;
    eax = MEM32(esp + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00128FB3; /* je: equal / zero */

loc_00128F7C: ;
    ecx = MEM32(esp + 0x70);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00128F8B; /* jae: above or equal (unsigned >=) */

loc_00128F84: ;
    MEM8(edx + eax) = LO8(ebx);
    edi = edx;
    goto loc_00128F8D;

loc_00128F8B: ;
    edi = ecx;

loc_00128F8D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00128FB3; /* jbe: below or equal (unsigned <=) */

loc_00128F91: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00128FB3; /* jbe: below or equal (unsigned <=) */

loc_00128F95: ;
    edx = MEM32(esi + 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00128FA0u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00128FA0: ;
    eax = MEM32(esp + 0x78);
    MEM8(edi + eax) = 0;
    eax = MEM32(esi + 0x2C);
    esp = esp + 0xC;
    eax = eax + edi;
    MEM32(esi + 0x2C) = eax;

loc_00128FB3: ;
    edi = MEM32(esp + 0x64);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00128FC6; /* je: equal / zero */

loc_00128FBB: ;
    ecx = 0x14;
    esi = esp + 0x10;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */

loc_00128FC6: ;
    eax = MEM32(esp + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00128FD0; /* je: equal / zero */

loc_00128FCE: ;
    MEM32(eax) = ebp;

loc_00128FD0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_00128FE0
 * Original: 0x00128FE0 - 0x00129389 (937 bytes, 351 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128FE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00128FE0: ;
    esp = esp - 0x58;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00128FF8; /* jne: not equal / not zero */

loc_00128FED: ;
    POP32(esp, esi);
    eax = 0xFFFFFF9Au;
    POP32(esp, ebp);
    esp = esp + 0x58;
    esp += 4; return; /* ret */

loc_00128FF8: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00129033; /* je: equal / zero */

loc_00128FFF: ;
    eax = MEM32(esp + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00129033; /* jne: not equal / not zero */

loc_00129007: ;
    eax = MEM32(esp + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00129033; /* jne: not equal / not zero */

loc_0012900F: ;
    eax = MEM32(esp + 0x70);
    ecx = MEM32(esp + 0x6C);
    edx = MEM32(esp + 0x68);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x68);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x0012902Au); RECOMP_ABI_CALL(0x00128E20u, sub_00128E20); /* call 0x00128E20 */

loc_0012902A: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x58;
    esp += 4; return; /* ret */

loc_00129033: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = eax + ebx;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x0012904Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012904A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00129053; /* je: equal / zero */

loc_0012904E: ;
    ebp = ebp | 0xFFFFFFFFu;
    goto loc_00129072;

loc_00129053: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129063u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129063: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2014B50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0x2014B50 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129072; /* je: equal / zero */

loc_0012906D: ;
    ebp = 0xFFFFFF99u;

loc_00129072: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129082u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129082: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0012909Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012909B: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001290B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001290B4: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001290CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001290CD: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001290E6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001290E6: ;
    ecx = MEM32(esp + 0x10);
    eax = ecx;
    eax = eax >> 0x10;
    edx = eax;
    edx = edx & 0x1F;
    MEM32(esp + 0x5C) = edx;
    edx = eax;
    edx = edx >> 5;
    eax = eax >> 9;
    edx = edx & 0xF;
    eax = eax & 0x7F;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax + 0x7BC;
    MEM32(esp + 0x60) = edx;
    MEM32(esp + 0x64) = eax;
    edx = ecx;
    eax = ecx;
    MEM32(esp + 0x28) = ecx;
    edx = edx >> 5;
    ecx = ecx & 0x1F;
    eax = eax >> 0xB;
    edx = edx & 0x3F;
    ecx = ecx << 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = eax & 0x1F;
    MEM32(esp + 0x58) = edx;
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, 1);
    edx = esp + 0x18;
    MEM32(esp + 0x60) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x00129149u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129149: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    MEM32(esp + 0x2C) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129161u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129161: ;
    ecx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129179u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129179: ;
    ecx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129191u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129191: ;
    ebx = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x44) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001291AAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001291AA: ;
    edi = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x48) = edi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001291C3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001291C3: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001291DCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001291DC: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001291F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001291F5: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0012920Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012920E: ;
    ecx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    MEM32(esp + 0x50) = ecx;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129226u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129226: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001292DF; /* jne: not equal / not zero */

loc_0012922E: ;
    eax = MEM32(esp + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00129277; /* je: equal / zero */

loc_00129236: ;
    ecx = MEM32(esp + 0x78);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00129248; /* jae: above or equal (unsigned >=) */

loc_0012923E: ;
    MEM8(ebx + eax) = 0;
    MEM32(esp + 0x10) = ebx;
    goto loc_0012924C;

loc_00129248: ;
    MEM32(esp + 0x10) = ecx;

loc_0012924C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0012926F; /* jbe: below or equal (unsigned <=) */

loc_00129250: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0012926F; /* jbe: below or equal (unsigned <=) */

loc_00129254: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x7C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129267u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129267: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012926F; /* je: equal / zero */

loc_0012926C: ;
    ebp = ebp | 0xFFFFFFFFu;

loc_0012926F: ;
    ebx = ebx - MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001292DF; /* jne: not equal / not zero */

loc_00129277: ;
    eax = MEM32(esp + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001292DF; /* je: equal / zero */

loc_0012927F: ;
    eax = MEM32(esp + 0x80);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_B(_fa, _fb)) goto loc_00129292; /* jb: below (unsigned <) */

loc_0012928E: ;
    MEM32(esp + 0x10) = eax;

loc_00129292: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001292AE; /* je: equal / zero */

loc_00129296: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x001292A3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001292A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001292AB; /* jne: not equal / not zero */

loc_001292A7: ;
    ebx = 0; /* xor self */
    goto loc_001292AE;

loc_001292AB: ;
    ebp = ebp | 0xFFFFFFFFu;

loc_001292AE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001292DB; /* jbe: below or equal (unsigned <=) */

loc_001292B2: ;
    eax = MEM32(esp + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001292DB; /* jbe: below or equal (unsigned <=) */

loc_001292BD: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x84);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x001292D3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001292D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001292DB; /* je: equal / zero */

loc_001292D8: ;
    ebp = ebp | 0xFFFFFFFFu;

loc_001292DB: ;
    edi = edi - MEM32(esp + 0x10);

loc_001292DF: ;
    ebx = ebx + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012937F; /* jne: not equal / not zero */

loc_001292E9: ;
    ecx = MEM32(esp + 0x84);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012935E; /* je: equal / zero */

loc_001292F4: ;
    eax = MEM32(esp + 0x40);
    edi = MEM32(esp + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00129309; /* jae: above or equal (unsigned >=) */

loc_00129303: ;
    MEM8(eax + ecx) = 0;
    edi = eax;

loc_00129309: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00129325; /* je: equal / zero */

loc_0012930D: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x0012931Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012931A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    eax = MEM32(esp + 0x40);
    if (TEST_Z(_fa, _fb)) goto loc_00129325; /* je: equal / zero */

loc_00129322: ;
    ebp = ebp | 0xFFFFFFFFu;

loc_00129325: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0012935A; /* jbe: below or equal (unsigned <=) */

loc_00129329: ;
    eax = MEM32(esp + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0012935A; /* jbe: below or equal (unsigned <=) */

loc_00129334: ;
    esi = MEM32(esi);
    eax = MEM32(esp + 0x84);
    edx = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129348u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129348: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012935A; /* je: equal / zero */

loc_0012934D: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    ebp = ebp | 0xFFFFFFFFu;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp = esp + 0x58;
    esp += 4; return; /* ret */

loc_0012935A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012937F; /* jne: not equal / not zero */

loc_0012935E: ;
    edi = MEM32(esp + 0x6C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00129371; /* je: equal / zero */

loc_00129366: ;
    ecx = 0x14;
    esi = esp + 0x18;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */

loc_00129371: ;
    eax = MEM32(esp + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012937F; /* je: equal / zero */

loc_00129379: ;
    ecx = MEM32(esp + 0x14);
    MEM32(eax) = ecx;

loc_0012937F: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp = esp + 0x58;
    esp += 4; return; /* ret */

}

/**
 * sub_00129390
 * Original: 0x00129390 - 0x001293C2 (50 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129390(void)
{

loc_00129390: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, 0x001293BEu); RECOMP_ABI_CALL(0x00128FE0u, sub_00128FE0); /* call 0x00128FE0 */

loc_001293BE: ;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_001293D0
 * Original: 0x001293D0 - 0x0012964C (636 bytes, 239 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001293D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001293D0: ;
    esp = esp - 0x50;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x58);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001293E6; /* jne: not equal / not zero */

loc_001293DC: ;
    eax = 0xFFFFFF9Au;
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

loc_001293E6: ;
    edx = MEM32(ebx + 0x28);
    eax = MEM32(ebx + 0x24);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebx + 0x14) = eax;
    MEM32(ebx + 0x10) = 0;
    ecx = ebx + 0x80;
    edi = ebx + 0x30;
    if (TEST_Z(_fa, _fb)) goto loc_00129426; /* je: equal / zero */

loc_00129407: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0x00129412u); RECOMP_ABI_CALL(0x00128E20u, sub_00128E20); /* call 0x00128E20 */

loc_00129412: ;
    esp = esp + 0x10;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(ebx + 0x18) = edx;
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

loc_00129426: ;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0xC);
    PUSH32(esp, 0);
    esi = esi + eax;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00129439u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129439: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00129442; /* je: equal / zero */

loc_0012943D: ;
    ebp = ebp | 0xFFFFFFFFu;
    goto loc_00129461;

loc_00129442: ;
    ecx = MEM32(ebx);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x00129452u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129452: ;
    _fa = (uint32_t)(MEM32(esp + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2014B50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x64), 0x2014B50 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129461; /* je: equal / zero */

loc_0012945C: ;
    ebp = 0xFFFFFF99u;

loc_00129461: ;
    ecx = MEM32(ebx);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x00129471u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129471: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x64);
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0012948Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012948A: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001294A3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001294A3: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001294BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001294BC: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001294D5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001294D5: ;
    ecx = MEM32(esp + 0x64);
    eax = ecx;
    eax = eax >> 0x10;
    edx = eax;
    edx = edx & 0x1F;
    MEM32(esp + 0x54) = edx;
    edx = eax;
    edx = edx >> 5;
    eax = eax >> 9;
    edx = edx & 0xF;
    eax = eax & 0x7F;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax + 0x7BC;
    MEM32(esp + 0x58) = edx;
    MEM32(esp + 0x5C) = eax;
    edx = ecx;
    eax = ecx;
    MEM32(esp + 0x20) = ecx;
    edx = edx >> 5;
    ecx = ecx & 0x1F;
    eax = eax >> 0xB;
    edx = edx & 0x3F;
    ecx = ecx << 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = eax & 0x1F;
    MEM32(esp + 0x50) = edx;
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(ebx);
    PUSH32(esp, 1);
    edx = esp + 0x6C;
    MEM32(esp + 0x58) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x00129538u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129538: ;
    eax = MEM32(esp + 0x64);
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    MEM32(esp + 0x24) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129550u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129550: ;
    ecx = MEM32(esp + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129568u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129568: ;
    ecx = MEM32(esp + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129580u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129580: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129599u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129599: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001295B2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001295B2: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esp + 0x3C) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001295CBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001295CB: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001295E4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001295E4: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001295FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001295FD: ;
    ecx = MEM32(esp + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129615u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129615: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00129638; /* jne: not equal / not zero */

loc_00129619: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00129628; /* je: equal / zero */

loc_0012961D: ;
    ecx = 0x14;
    esi = esp + 0x10;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */

loc_00129628: ;
    eax = ebx + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00129638; /* je: equal / zero */

loc_00129632: ;
    ecx = MEM32(esp + 0x64);
    MEM32(eax) = ecx;

loc_00129638: ;
    eax = ebp;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(ebx + 0x18) = edx;
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_00129650
 * Original: 0x00129650 - 0x001298F4 (676 bytes, 256 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129650(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00129650: ;
    esp = esp - 0x50;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x58);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00129666; /* jne: not equal / not zero */

loc_0012965C: ;
    eax = 0xFFFFFF9Au;
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

loc_00129666: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00129678; /* je: equal / zero */

loc_0012966D: ;
    eax = MEM32(ebx + 0x10);
    ecx = eax + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129682; /* jne: not equal / not zero */

loc_00129678: ;
    eax = 0xFFFFFF9Cu;
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

loc_00129682: ;
    eax = MEM32(ebx + 0x58);
    edx = MEM32(ebx + 0x50);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x14);
    PUSH32(esp, edi);
    eax = eax + MEM32(ebx + 0x54);
    eax = eax + edx + 0x2E;
    edx = MEM32(ebx + 0x28);
    esi = esi + eax;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(ebx + 0x10) = ecx;
    MEM32(ebx + 0x14) = esi;
    eax = esi;
    ecx = ebx + 0x80;
    edi = ebx + 0x30;
    PUSH32(esp, ebp);
    if (TEST_Z(_fa, _fb)) goto loc_001296D1; /* je: equal / zero */

loc_001296B2: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0x001296BCu); RECOMP_ABI_CALL(0x00128E20u, sub_00128E20); /* call 0x00128E20 */

loc_001296BC: ;
    esp = esp + 0x10;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0x18) = edx;
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

loc_001296D1: ;
    esi = MEM32(ebx + 0xC);
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    esi = esi + eax;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x001296E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001296E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001296EA; /* je: equal / zero */

loc_001296E5: ;
    ebp = ebp | 0xFFFFFFFFu;
    goto loc_00129709;

loc_001296EA: ;
    ecx = MEM32(ebx);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x001296FAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001296FA: ;
    _fa = (uint32_t)(MEM32(esp + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2014B50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x64), 0x2014B50 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129709; /* je: equal / zero */

loc_00129704: ;
    ebp = 0xFFFFFF99u;

loc_00129709: ;
    ecx = MEM32(ebx);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x00129719u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129719: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x64);
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129732u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129732: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0012974Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012974B: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129764u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129764: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0012977Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012977D: ;
    ecx = MEM32(esp + 0x64);
    eax = ecx;
    eax = eax >> 0x10;
    edx = eax;
    edx = edx & 0x1F;
    MEM32(esp + 0x54) = edx;
    edx = eax;
    edx = edx >> 5;
    eax = eax >> 9;
    edx = edx & 0xF;
    eax = eax & 0x7F;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax + 0x7BC;
    MEM32(esp + 0x58) = edx;
    MEM32(esp + 0x5C) = eax;
    edx = ecx;
    eax = ecx;
    MEM32(esp + 0x20) = ecx;
    edx = edx >> 5;
    ecx = ecx & 0x1F;
    eax = eax >> 0xB;
    edx = edx & 0x3F;
    ecx = ecx << 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = eax & 0x1F;
    MEM32(esp + 0x50) = edx;
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(ebx);
    PUSH32(esp, 1);
    edx = esp + 0x6C;
    MEM32(esp + 0x58) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x001297E0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001297E0: ;
    eax = MEM32(esp + 0x64);
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    MEM32(esp + 0x24) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001297F8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001297F8: ;
    ecx = MEM32(esp + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129810u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129810: ;
    ecx = MEM32(esp + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129828u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129828: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129841u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129841: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0012985Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012985A: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esp + 0x3C) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129873u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129873: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0012988Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012988C: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001298A5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001298A5: ;
    ecx = MEM32(esp + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001298BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001298BD: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001298E0; /* jne: not equal / not zero */

loc_001298C1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001298D0; /* je: equal / zero */

loc_001298C5: ;
    ecx = 0x14;
    esi = esp + 0x10;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */

loc_001298D0: ;
    eax = ebx + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001298E0; /* je: equal / zero */

loc_001298DA: ;
    ecx = MEM32(esp + 0x64);
    MEM32(eax) = ecx;

loc_001298E0: ;
    eax = ebp;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0x18) = edx;
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_00129900
 * Original: 0x00129900 - 0x0012991A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00129900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129900: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012990E; /* jne: not equal / not zero */

loc_00129908: ;
    eax = 0xFFFFFF9Au;
    esp += 4; return; /* ret */

loc_0012990E: ;
    eax = MEM32(eax + 0x14);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00129920
 * Original: 0x00129920 - 0x00129B9A (634 bytes, 240 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129920(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00129920: ;
    esp = esp - 0x50;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x58);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00129936; /* jne: not equal / not zero */

loc_0012992C: ;
    eax = 0xFFFFFF9Au;
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

loc_00129936: ;
    edx = MEM32(ebx + 0x28);
    eax = MEM32(esp + 0x5C);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebx + 0x14) = eax;
    ecx = ebx + 0x80;
    edi = ebx + 0x30;
    if (TEST_Z(_fa, _fb)) goto loc_00129972; /* je: equal / zero */

loc_00129951: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0x0012995Cu); RECOMP_ABI_CALL(0x00128E20u, sub_00128E20); /* call 0x00128E20 */

loc_0012995C: ;
    esp = esp + 0x10;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    MEM32(ebx + 0x18) = edx;
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

loc_00129972: ;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0xC);
    PUSH32(esp, 0);
    esi = esi + eax;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00129985u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129985: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012998E; /* je: equal / zero */

loc_00129989: ;
    ebp = ebp | 0xFFFFFFFFu;
    goto loc_001299AD;

loc_0012998E: ;
    ecx = MEM32(ebx);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x0012999Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012999E: ;
    _fa = (uint32_t)(MEM32(esp + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2014B50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x64), 0x2014B50 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001299AD; /* je: equal / zero */

loc_001299A8: ;
    ebp = 0xFFFFFF99u;

loc_001299AD: ;
    ecx = MEM32(ebx);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x001299BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001299BD: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x64);
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001299D6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001299D6: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001299EFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001299EF: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129A08u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129A08: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129A21u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129A21: ;
    ecx = MEM32(esp + 0x64);
    eax = ecx;
    eax = eax >> 0x10;
    edx = eax;
    edx = edx & 0x1F;
    MEM32(esp + 0x54) = edx;
    edx = eax;
    edx = edx >> 5;
    eax = eax >> 9;
    edx = edx & 0xF;
    eax = eax & 0x7F;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax + 0x7BC;
    MEM32(esp + 0x58) = edx;
    MEM32(esp + 0x5C) = eax;
    edx = ecx;
    eax = ecx;
    MEM32(esp + 0x20) = ecx;
    edx = edx >> 5;
    ecx = ecx & 0x1F;
    eax = eax >> 0xB;
    edx = edx & 0x3F;
    ecx = ecx << 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = eax & 0x1F;
    MEM32(esp + 0x50) = edx;
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(ebx);
    PUSH32(esp, 1);
    edx = esp + 0x6C;
    MEM32(esp + 0x58) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x00129A84u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129A84: ;
    eax = MEM32(esp + 0x64);
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    MEM32(esp + 0x24) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129A9Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129A9C: ;
    ecx = MEM32(esp + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129AB4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129AB4: ;
    ecx = MEM32(esp + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129ACCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129ACC: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129AE5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129AE5: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129AFEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129AFE: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esp + 0x3C) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129B17u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129B17: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129B30u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129B30: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129B49u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129B49: ;
    ecx = MEM32(esp + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129B61u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129B61: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00129B84; /* jne: not equal / not zero */

loc_00129B65: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00129B74; /* je: equal / zero */

loc_00129B69: ;
    ecx = 0x14;
    esi = esp + 0x10;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */

loc_00129B74: ;
    eax = ebx + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00129B84; /* je: equal / zero */

loc_00129B7E: ;
    ecx = MEM32(esp + 0x64);
    MEM32(eax) = ecx;

loc_00129B84: ;
    eax = ebp;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    MEM32(ebx + 0x18) = edx;
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_00129BA0
 * Original: 0x00129BA0 - 0x00129D78 (472 bytes, 184 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129BA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00129BA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebp) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_00129BE1; /* je: equal / zero */

loc_00129BB6: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    MEM32(edx) = edi;
    MEM32(ecx) = edi;
    eax = MEM32(esi + 0x50);
    MEM32(ebp) = MEM32(ebp) + eax;
    esi = MEM32(esi + 0x80);
    eax = esi + eax + 0x1E;
    POP32(esp, edi);
    MEM32(edx) = eax;
    POP32(esp, esi);
    MEM32(ecx) = 0;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00129BE1: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    MEM32(ecx) = 0;
    MEM32(edx) = 0;
    edx = MEM32(esi + 0xC);
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x80);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = edx + ebx;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x00129C0Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129C0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00129C1B; /* je: equal / zero */

loc_00129C12: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00129C1B: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x00129C2Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129C2B: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4034B50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0x4034B50 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129C3A; /* je: equal / zero */

loc_00129C35: ;
    edi = 0xFFFFFF99u;

loc_00129C3A: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x00129C4Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129C4A: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x00129C5Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129C5A: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    ebx = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x00129C6Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129C6F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00129C8D; /* jne: not equal / not zero */

loc_00129C73: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129C88; /* jne: not equal / not zero */

loc_00129C7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00129C8D; /* je: equal / zero */

loc_00129C83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129C8D; /* je: equal / zero */

loc_00129C88: ;
    edi = 0xFFFFFF99u;

loc_00129C8D: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129C9Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129C9D: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129CADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129CAD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00129CC4; /* jne: not equal / not zero */

loc_00129CB1: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x44) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129CC4; /* je: equal / zero */

loc_00129CBA: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00129CC4; /* jne: not equal / not zero */

loc_00129CBF: ;
    edi = 0xFFFFFF99u;

loc_00129CC4: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129CD4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129CD4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00129CEB; /* jne: not equal / not zero */

loc_00129CD8: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x48) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129CEB; /* je: equal / zero */

loc_00129CE1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00129CEB; /* jne: not equal / not zero */

loc_00129CE6: ;
    edi = 0xFFFFFF99u;

loc_00129CEB: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129CFBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129CFB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00129D12; /* jne: not equal / not zero */

loc_00129CFF: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x4C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129D12; /* je: equal / zero */

loc_00129D08: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00129D12; /* jne: not equal / not zero */

loc_00129D0D: ;
    edi = 0xFFFFFF99u;

loc_00129D12: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129D22u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129D22: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ebx = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    if (TEST_NZ(_fa, _fb)) goto loc_00129D35; /* jne: not equal / not zero */

loc_00129D2B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x50) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129D35; /* je: equal / zero */

loc_00129D30: ;
    edi = 0xFFFFFF99u;

loc_00129D35: ;
    ecx = MEM32(ebp);
    ecx = ecx + ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(ebp) = ecx;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00129D4Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129D4D: ;
    ecx = MEM32(esi + 0x80);
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    edx = ebx + ecx + 0x1E;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(edx) = eax;
    ecx = MEM32(ebp);
    POP32(esp, ebx);
    ecx = ecx + eax;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = ecx;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
