/**
 * X-Men Legends - Recompiled code chunk 26
 * Functions: 250 (0x00134A40 - 0x0013B330)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00134A40
 * Original: 0x00134A40 - 0x00134AA2 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134A40: ;
    edx = ecx;
    eax = MEM32(edx + 0xA4B8);
    eax = MEM32(edx + eax * 4 + 0x9700);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0xA4C0;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0xA4B8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x36C (32-bit) */
    MEM32(edx + 0xA4B8) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00134A8C; /* jl: less (signed <) */

loc_00134A82: ;
    MEM32(edx + 0xA4B8) = 0;

loc_00134A8C: ;
    MEM32(edx + 0xA4BC) = MEM32(edx + 0xA4BC) - 1;
    _fa = (uint32_t)(MEM32(edx + 0xA4BC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0xA530);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0xA530) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00134AB0
 * Original: 0x00134AB0 - 0x00134B0D (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134AB0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x180C) = esi;
    MEM32(ecx + 0x1810) = esi;
    MEM32(ecx + 0x1814) = esi;
    edx = 0; /* xor self */
    goto loc_00134AD0;

    /* nop */

loc_00134AD0: ;
    eax = MEM32(ecx + 0x180C);
    edi = MEM32(ecx + 0x1814);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    MEM32(ecx + 0x180C) = eax;
    MEM32(ecx + 0x1814) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00134AFC; /* jl: less (signed <) */

loc_00134AEF: ;
    MEM32(ecx + 0x180C) = esi;
    eax = 0x3F;
    goto loc_00134AFD;

loc_00134AFC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00134AFD: ;
    MEM32(ecx + eax * 4 + 0x1708) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00134AD0; /* jl: less (signed <) */

loc_00134B0A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00134B10
 * Original: 0x00134B10 - 0x00134B9E (142 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134B10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5C);
    esi = ecx;
    edx = MEM32(eax + esi);
    ecx = eax + esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00134B27u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00134B27: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = eax << 2;
    ecx = MEM32(eax + esi + 0x1700);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax + esi + 0x1700) = ecx;
    MEM32(eax + esi + 0x1818) = MEM32(eax + esi + 0x1818) & edx;
    eax = MEM32(esi + 0x180C);
    edx = MEM32(esi + 0x1814);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    MEM32(esi + 0x180C) = eax;
    MEM32(esi + 0x1814) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00134B84; /* jl: less (signed <) */

loc_00134B73: ;
    MEM32(esi + 0x180C) = 0;
    eax = 0x3F;
    goto loc_00134B85;

loc_00134B84: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00134B85: ;
    MEM32(esi + eax * 4 + 0x1708) = edi;
    eax = MEM32(esi + 0x1820);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x1820) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00134BA0
 * Original: 0x00134BA0 - 0x00134BD1 (49 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134BA0: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00134BC4; /* jl: less (signed <) */

loc_00134BB3: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    MEM32(ecx + 8) = eax;
    edx = MEM32(edx);
    MEM32(ecx + eax * 4) = edx;
    esp += 8; return; /* ret 4 */

loc_00134BC4: ;
    edx = MEM32(esp + 4);
    edx = MEM32(edx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + eax * 4) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00134BE0
 * Original: 0x00134BE0 - 0x00134C27 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134BE0(void)
{

loc_00134BE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x00134BEFu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_00134BEF: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00134C02u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_00134C02: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00134C14u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00134C14: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00134C1Fu); RECOMP_ABI_CALL(0x00133880u, sub_00133880); /* call 0x00133880 */

loc_00134C1F: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00134C30
 * Original: 0x00134C30 - 0x00134C77 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134C30(void)
{

loc_00134C30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x00134C3Fu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_00134C3F: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00134C52u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_00134C52: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00134C64u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00134C64: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00134C6Fu); RECOMP_ABI_CALL(0x00133930u, sub_00133930); /* call 0x00133930 */

loc_00134C6F: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00134C80
 * Original: 0x00134C80 - 0x00134D52 (210 bytes, 67 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134C80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00134C80: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352488);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    esi = ecx;
    eax = MEM32(esi + edi * 4 + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00134D3D; /* jne: not equal / not zero */

loc_00134CAB: ;
    ebp = MEM32(esi + edi * 4 + 0x6C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00134D39; /* jl: less (signed <) */

loc_00134CB7: ;
    eax = esp + 0x20;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00134CC3u); RECOMP_ABI_CALL(0x00134C30u, sub_00134C30); /* call 0x00134C30 */

loc_00134CC3: ;
    esp = esp + 8;
    ebx = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(esp + 0x18) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00134CD7; /* je: equal / zero */

loc_00134CD4: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00134CD7: ;
    ecx = MEM32(esi + edi * 4 + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00134CF4; /* je: equal / zero */

loc_00134CDF: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00134CF4; /* jne: not equal / not zero */

loc_00134CEF: ;
    PUSH32(esp, 0x00134CF4u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00134CF4: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + edi * 4 + 0x34) = ebx;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00134D22; /* je: equal / zero */

loc_00134D0A: ;
    ebx = MEM32(eax + 4);
    eax = eax + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_00134D22; /* jne: not equal / not zero */

loc_00134D1D: ;
    PUSH32(esp, 0x00134D22u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00134D22: ;
    ecx = MEM32(esi + edi * 4 + 0x34);
    MEM32(ecx + 0x20) = ebp;
    edx = MEM32(esi + edi * 4 + 0x34);
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00134D39u); RECOMP_ABI_CALL(0x00257590u, sub_00257590); /* call 0x00257590 */

loc_00134D39: ;
    eax = MEM32(esi + edi * 4 + 0x34);

loc_00134D3D: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00134D60
 * Original: 0x00134D60 - 0x00134DFE (158 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134D60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00134D60: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352476);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = esi;
    ebx = 0; /* xor self */
    MEM32(esi) = 0x3DC2B8;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    edi = esi + 0x1C;
    MEM32(edi) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    ebp = esi + 0x28;
    MEM32(ebp) = ebx;
    MEM8(esp + 0x1C) = 0xA;
    PUSH32(esp, 0x00134DB9u); RECOMP_ABI_CALL(0x00142FC0u, sub_00142FC0); /* call 0x00142FC0 */

loc_00134DB9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00134DC1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00134DC1: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00134DE0; /* jne: not equal / not zero */

loc_00134DC5: ;
    PUSH32(esp, 0x00134DCAu); RECOMP_ABI_CALL(0x00143260u, sub_00143260); /* call 0x00143260 */

loc_00134DCA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00134DD2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00134DD2: ;
    eax = MEM32(edi);
    ecx = MEM32(ebp);
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00134DE0u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00134DE0: ;
    edx = MEM32(edi);
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx + 0xC) = 1;
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00134E00
 * Original: 0x00134E00 - 0x00134E12 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134E00(void)
{

loc_00134E00: ;
    edx = MEM32(ecx + 0x28);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 0x28);
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00134E20
 * Original: 0x00134E20 - 0x00134E2C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134E20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00134E20: ;
    PUSH32(esp, 0x00134E25u); RECOMP_ABI_CALL(0x00134E30u, sub_00134E30); /* call 0x00134E30 */

loc_00134E25: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x78)); return; /* indirect tail jmp */

}

/**
 * sub_00134E30
 * Original: 0x00134E30 - 0x00134E5E (46 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134E30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = edi + 0x14;
    if (TEST_NZ(_fa, _fb)) goto loc_00134E59; /* jne: not equal / not zero */

loc_00134E3E: ;
    PUSH32(esp, 0x00134E43u); RECOMP_ABI_CALL(0x001431A0u, sub_001431A0); /* call 0x001431A0 */

loc_00134E43: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00134E4Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00134E4B: ;
    eax = MEM32(esi);
    ecx = MEM32(edi + 0x28);
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00134E59u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00134E59: ;
    eax = MEM32(esi);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00134E60
 * Original: 0x00134E60 - 0x00134ED0 (112 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134E60(void)
{

loc_00134E60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00134E68u); RECOMP_ABI_CALL(0x00134ED0u, sub_00134ED0); /* call 0x00134ED0 */

loc_00134E68: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00134E77u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00134E77: ;
    ecx = esi;
    PUSH32(esp, 0x00134E7Eu); RECOMP_ABI_CALL(0x00134ED0u, sub_00134ED0); /* call 0x00134ED0 */

loc_00134E7E: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00134E8Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00134E8D: ;
    ecx = esi;
    PUSH32(esp, 0x00134E94u); RECOMP_ABI_CALL(0x00134ED0u, sub_00134ED0); /* call 0x00134ED0 */

loc_00134E94: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00134EA3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00134EA3: ;
    ecx = esi;
    PUSH32(esp, 0x00134EAAu); RECOMP_ABI_CALL(0x00134ED0u, sub_00134ED0); /* call 0x00134ED0 */

loc_00134EAA: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00134EB9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00134EB9: ;
    ecx = esi;
    PUSH32(esp, 0x00134EC0u); RECOMP_ABI_CALL(0x00134ED0u, sub_00134ED0); /* call 0x00134ED0 */

loc_00134EC0: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00134ECCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00134ECC: ;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00134ED0
 * Original: 0x00134ED0 - 0x00134EFE (46 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134ED0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = edi + 0x18;
    if (TEST_NZ(_fa, _fb)) goto loc_00134EF9; /* jne: not equal / not zero */

loc_00134EDE: ;
    PUSH32(esp, 0x00134EE3u); RECOMP_ABI_CALL(0x00143200u, sub_00143200); /* call 0x00143200 */

loc_00134EE3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00134EEBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00134EEB: ;
    eax = MEM32(esi);
    ecx = MEM32(edi + 0x28);
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00134EF9u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00134EF9: ;
    eax = MEM32(esi);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00134F00
 * Original: 0x00134F00 - 0x00134F21 (33 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134F00: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ecx);
    edx = esp;
    MEM32(esp + 4) = esp;
    MEM32(edx) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00134F18; /* je: equal / zero */

loc_00134F15: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00134F18: ;
    PUSH32(esp, 0x00134F1Du); RECOMP_ABI_CALL(0x00134F30u, sub_00134F30); /* call 0x00134F30 */

loc_00134F1D: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00134F30
 * Original: 0x00134F30 - 0x00134F94 (100 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134F30(void)
{

loc_00134F30: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352488);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x00134F55u); RECOMP_ABI_CALL(0x00134FD0u, sub_00134FD0); /* call 0x00134FD0 */

loc_00134F55: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00134F5Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00134F5E: ;
    ecx = esi;
    PUSH32(esp, 0x00134F65u); RECOMP_ABI_CALL(0x00134FA0u, sub_00134FA0); /* call 0x00134FA0 */

loc_00134F65: ;
    esi = MEM32(esp + 0x14);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x00134F71u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00134F71: ;
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00134F7Fu); RECOMP_ABI_CALL(0x00011A40u, sub_00011A40); /* call 0x00011A40 */

loc_00134F7F: ;
    ecx = MEM32(esp + 8);
    esp = esp + 4;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00134FA0
 * Original: 0x00134FA0 - 0x00134FCE (46 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134FA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = edi + 0x20;
    if (TEST_NZ(_fa, _fb)) goto loc_00134FC9; /* jne: not equal / not zero */

loc_00134FAE: ;
    PUSH32(esp, 0x00134FB3u); RECOMP_ABI_CALL(0x001432C0u, sub_001432C0); /* call 0x001432C0 */

loc_00134FB3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00134FBBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00134FBB: ;
    eax = MEM32(esi);
    ecx = MEM32(edi + 0x28);
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00134FC9u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00134FC9: ;
    eax = MEM32(esi);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00134FD0
 * Original: 0x00134FD0 - 0x00134FFE (46 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134FD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = edi + 0x24;
    if (TEST_NZ(_fa, _fb)) goto loc_00134FF9; /* jne: not equal / not zero */

loc_00134FDE: ;
    PUSH32(esp, 0x00134FE3u); RECOMP_ABI_CALL(0x00143320u, sub_00143320); /* call 0x00143320 */

loc_00134FE3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00134FEBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00134FEB: ;
    eax = MEM32(esi);
    ecx = MEM32(edi + 0x28);
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00134FF9u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00134FF9: ;
    eax = MEM32(esi);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00135000
 * Original: 0x00135000 - 0x0013501E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00135000: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00135008u); RECOMP_ABI_CALL(0x00135020u, sub_00135020); /* call 0x00135020 */

loc_00135008: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00135018; /* je: equal / zero */

loc_0013500F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00135015u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00135015: ;
    esp = esp + 4;

loc_00135018: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00135020
 * Original: 0x00135020 - 0x001350DE (190 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135020(void)
{

loc_00135020: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x35250B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3DC2B8;
    ecx = esi + 0x28;
    MEM32(esp + 0x10) = 9;
    PUSH32(esp, 0x00135053u); RECOMP_ABI_CALL(0x001344E0u, sub_001344E0); /* call 0x001344E0 */

loc_00135053: ;
    ecx = esi + 0x24;
    MEM8(esp + 0x10) = 8;
    PUSH32(esp, 0x00135060u); RECOMP_ABI_CALL(0x00134450u, sub_00134450); /* call 0x00134450 */

loc_00135060: ;
    ecx = esi + 0x20;
    MEM8(esp + 0x10) = 7;
    PUSH32(esp, 0x0013506Du); RECOMP_ABI_CALL(0x001343C0u, sub_001343C0); /* call 0x001343C0 */

loc_0013506D: ;
    ecx = esi + 0x1C;
    MEM8(esp + 0x10) = 6;
    PUSH32(esp, 0x0013507Au); RECOMP_ABI_CALL(0x00134330u, sub_00134330); /* call 0x00134330 */

loc_0013507A: ;
    ecx = esi + 0x18;
    MEM8(esp + 0x10) = 5;
    PUSH32(esp, 0x00135087u); RECOMP_ABI_CALL(0x001342A0u, sub_001342A0); /* call 0x001342A0 */

loc_00135087: ;
    ecx = esi + 0x14;
    MEM8(esp + 0x10) = 4;
    PUSH32(esp, 0x00135094u); RECOMP_ABI_CALL(0x00134210u, sub_00134210); /* call 0x00134210 */

loc_00135094: ;
    ecx = esi + 0x10;
    MEM8(esp + 0x10) = 3;
    PUSH32(esp, 0x001350A1u); RECOMP_ABI_CALL(0x00134180u, sub_00134180); /* call 0x00134180 */

loc_001350A1: ;
    ecx = esi + 0xC;
    MEM8(esp + 0x10) = 2;
    PUSH32(esp, 0x001350AEu); RECOMP_ABI_CALL(0x001340F0u, sub_001340F0); /* call 0x001340F0 */

loc_001350AE: ;
    ecx = esi + 8;
    MEM8(esp + 0x10) = 1;
    PUSH32(esp, 0x001350BBu); RECOMP_ABI_CALL(0x00134060u, sub_00134060); /* call 0x00134060 */

loc_001350BB: ;
    ecx = esi + 4;
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x001350C8u); RECOMP_ABI_CALL(0x00133FD0u, sub_00133FD0); /* call 0x00133FD0 */

loc_001350C8: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x3DC1E4;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001350E0
 * Original: 0x001350E0 - 0x00135130 (80 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001350E0(void)
{
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

loc_001350E0: ;
    edx = MEM32(ecx + 8);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_001350F7; /* jne: not equal / not zero */

loc_001350EF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x7FFFFFFF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00135125; /* je: equal / zero */

loc_001350F7: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = MEM32(ecx + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_0013510A; /* jne: not equal / not zero */

loc_00135102: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7FFFFFFF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00135125; /* je: equal / zero */

loc_0013510A: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(esi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = ecx;
    fp_push((double)SMEM64(esp + 4)); /* fild */
    POP32(esp, esi);
    fp_top() = fp_top() * MEMD(0x3DA5F8); /* fmul qword ptr [0x3da5f8] */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00135125: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00135130
 * Original: 0x00135130 - 0x00135180 (80 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135130(void)
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

loc_00135130: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    esi = ecx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00135172; /* jnp: not parity */

loc_00135144: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00135172; /* je: equal / zero */

loc_00135155: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0013515Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013515A: ;
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    edx = MEM32(esi);
    ecx = esi;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0013516Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013516E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00135172: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00135180
 * Original: 0x00135180 - 0x0013521E (158 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135180(void)
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

loc_00135180: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    ebx = MEM32(ebp + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00135217; /* je: equal / zero */

loc_0013518F: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013519E; /* jne: not equal / not zero */

loc_00135195: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x7FFFFFFF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00135217; /* je: equal / zero */

loc_0013519E: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, edi);
    fp_top() = fp_top() * MEMD(0x3DA5F0); /* fmul qword ptr [0x3da5f0] */
    PUSH32(esp, 0x001351B1u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001351B1: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    esi = eax;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    edi = edx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001351DD; /* jp: parity */

loc_001351C8: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_top() = fp_top() * MEMD(0x3DA5F0); /* fmul qword ptr [0x3da5f0] */
    PUSH32(esp, 0x001351D9u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001351D9: ;
    esi = eax;
    edi = edx;

loc_001351DD: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x001351ECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001351EC: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMD(0x3DC310); /* fmul qword ptr [0x3dc310] */
    ebx = MEM32(ebp + 4);
    ebp = MEM32(ebx);
    PUSH32(esp, 0x00135200u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00135200: ;
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;
    { uint64_t _t = (uint64_t)(edi) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edi = (uint32_t)_t; }  /* sbb */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(ebp + 0x94); PUSH32(esp, 0x0013520Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013520E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00135217: ;
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00135220
 * Original: 0x00135220 - 0x00135300 (224 bytes, 81 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00135220(void)
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

loc_00135220: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001352F9; /* je: equal / zero */

loc_0013522F: ;
    ebp = MEM32(esi + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = MEM32(esi + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_00135245; /* jne: not equal / not zero */

loc_0013523A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFFFFFF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001352F9; /* je: equal / zero */

loc_00135245: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    PUSH32(esp, ebx);
    fp_top() = fp_top() * MEMD(0x3DA5F0); /* fmul qword ptr [0x3da5f0] */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00135256u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00135256: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    edi = eax;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    ebx = edx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00135280; /* jp: parity */

loc_0013526D: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMD(0x3DA5F0); /* fmul qword ptr [0x3da5f0] */
    PUSH32(esp, 0x0013527Cu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0013527C: ;
    edi = eax;
    ebx = edx;

loc_00135280: ;
    SET_LO8(eax, MEM8(esi + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001352A8; /* je: equal / zero */

loc_00135287: ;
    eax = MEM32(esi + 0x10);
    edx = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebp));
    eax = eax - ebp;
    PUSH32(esp, 0x2710);
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001352A2u); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_001352A2: ;
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(eax)) >> 32) & 1);
    edi = edi + eax;
    { uint64_t _t = (uint64_t)(ebx) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebx = (uint32_t)_t; }  /* adc */
    goto loc_001352B9;

loc_001352A8: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0xC);
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ebp));
    edx = edx - ebp;
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(edx)) >> 32) & 1);
    edi = edi + edx;
    { uint64_t _t = (uint64_t)(ebx) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebx = (uint32_t)_t; }  /* adc */

loc_001352B9: ;
    ecx = MEM32(esi + 4);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    edx = MEM32(ecx);
    fp_top() = -fp_top(); /* fchs */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x001352CEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001352CE: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    esi = MEM32(esi + 4);
    fp_top() = fp_top() * MEMD(0x3DA5F0); /* fmul qword ptr [0x3da5f0] */
    ebp = MEM32(esi);
    PUSH32(esp, 0x001352E2u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001352E2: ;
    _cf = (int)((uint32_t)(edi) < (uint32_t)(eax));
    edi = edi - eax;
    { uint64_t _t = (uint64_t)(ebx) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebx = (uint32_t)_t; }  /* sbb */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebp + 0x94); PUSH32(esp, 0x001352F0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001352F0: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_001352F9: ;
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00135300
 * Original: 0x00135300 - 0x00135356 (86 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00135300: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0013534E; /* je: equal / zero */

loc_0013530C: ;
    eax = MEM32(ebx + 8);
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edi = 0x7FFFFFFF;
    if (CMP_NE(_fa, _fb)) goto loc_00135320; /* jne: not equal / not zero */

loc_0013531B: ;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013534E; /* je: equal / zero */

loc_00135320: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013532F; /* je: equal / zero */

loc_00135328: ;
    esi = 0; /* xor self */
    edi = 0x80000000u;

loc_0013532F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x00135339u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135339: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00135346u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135346: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0013534E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00135360
 * Original: 0x00135360 - 0x001353CF (111 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135360(void)
{
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

loc_00135360: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00135376; /* jne: not equal / not zero */

loc_0013536B: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00135376: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x00135380u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135380: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ebx + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x98); PUSH32(esp, 0x0013538Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013538F: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMD(0x3DC310); /* fmul qword ptr [0x3dc310] */
    esi = eax;
    edi = edx;
    PUSH32(esp, 0x001353A2u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001353A2: ;
    ecx = MEM32(ebx + 4);
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;
    { uint64_t _t = (uint64_t)(edi) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edi = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001353C4; /* je: equal / zero */

loc_001353AD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x001353B7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001353B7: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x001353C4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001353C4: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001353D0
 * Original: 0x001353D0 - 0x0013542A (90 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001353D0(void)
{
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

loc_001353D0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001353E0; /* jne: not equal / not zero */

loc_001353DA: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001353E0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x98); PUSH32(esp, 0x001353EAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001353EA: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMD(0x3DA5F0); /* fmul qword ptr [0x3da5f0] */
    esi = eax;
    edi = edx;
    PUSH32(esp, 0x001353FDu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001353FD: ;
    ecx = MEM32(ebx + 4);
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;
    { uint64_t _t = (uint64_t)(edi) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edi = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00135422; /* je: equal / zero */

loc_00135408: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00135415u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135415: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00135422u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135422: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00135430
 * Original: 0x00135430 - 0x00135488 (88 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135430(void)
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

loc_00135430: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00135484; /* je: equal / zero */

loc_0013543A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x00135442u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135442: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00135484; /* jp: parity */

loc_00135451: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x98); PUSH32(esp, 0x0013545Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013545C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00135469; /* jne: not equal / not zero */

loc_00135461: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x7FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00135484; /* je: equal / zero */

loc_00135469: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x98); PUSH32(esp, 0x00135474u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135474: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00135480; /* jne: not equal / not zero */

loc_00135478: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80000000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00135484; /* je: equal / zero */

loc_00135480: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00135484: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00135490
 * Original: 0x00135490 - 0x001354BF (47 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00135490: ;
    eax = ecx;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001354BA; /* je: equal / zero */

loc_00135499: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001354A8; /* jne: not equal / not zero */

loc_0013549F: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0x7FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001354BA; /* je: equal / zero */

loc_001354A8: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x001354B5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001354B5: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_001354BA: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001354C0
 * Original: 0x001354C0 - 0x00135578 (184 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001354C0(void)
{
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

loc_001354C0: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0013556A; /* je: equal / zero */

loc_001354D2: ;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001354E5; /* jne: not equal / not zero */

loc_001354D8: ;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), 0x7FFFFFFF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013556A; /* je: equal / zero */

loc_001354E5: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00135531; /* jp: parity */

loc_001354F8: ;
    ecx = MEM32(0x5BC568);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00135504u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135504: ;
    ebx = edx;
    edx = MEM32(esi);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x98); PUSH32(esp, 0x00135512u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135512: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(ebx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM64(esp + 0xC)); /* fild */
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    fp_top() = fp_top() * MEMD(0x3DA5F8); /* fmul qword ptr [0x3da5f8] */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_00135531: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x98); PUSH32(esp, 0x0013553Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013553B: ;
    ecx = MEM32(edi + 4);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(ecx);
    MEM32(esp + 8) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x0013554Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013554E: ;
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_push((double)SMEM64(esp + 8)); /* fild */
    POP32(esp, edi);
    POP32(esp, esi);
    fp_top() = fp_top() * MEMD(0x3DA5F8); /* fmul qword ptr [0x3da5f8] */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_0013556A: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00135580
 * Original: 0x00135580 - 0x001355A8 (40 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135580(void)
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

loc_00135580: ;
    eax = ecx;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001355A1; /* je: equal / zero */

loc_00135589: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00135598; /* jne: not equal / not zero */

loc_0013558F: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0x7FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001355A1; /* je: equal / zero */

loc_00135598: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x001355A0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001355A0: ;
    esp += 4; return; /* ret */

loc_001355A1: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001355B0
 * Original: 0x001355B0 - 0x001355FF (79 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001355B0(void)
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

loc_001355B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001355F9; /* je: equal / zero */

loc_001355BA: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001355C9; /* jne: not equal / not zero */

loc_001355C0: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0x7FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001355F9; /* je: equal / zero */

loc_001355C9: ;
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x001355D4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001355D4: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMD(0x3DA5F0); /* fmul qword ptr [0x3da5f0] */
    esi = MEM32(esi + 4);
    edi = MEM32(esi);
    PUSH32(esp, 0x001355E8u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001355E8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x94); PUSH32(esp, 0x001355F2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001355F2: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001355F9: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00135600
 * Original: 0x00135600 - 0x0013560E (14 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135600(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00135600: ;
    MEM32(ecx) = 0x3DC2DC;
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_00134570(); return; /* tail jmp 0x00134570 */

}

/**
 * sub_00135610
 * Original: 0x00135610 - 0x00135688 (120 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135610(void)
{

loc_00135610: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352549);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    eax = 0; /* xor self */
    MEM32(esi) = 0x3DC31C;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0x10) = 0x3DC2DC;
    MEM32(esi + 0x14) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM8(esi + 0x28) = LO8(eax);
    MEM32(esi + 0x30) = eax;
    edi = esi + 0x34;
    MEM32(edi) = eax;
    MEM8(esp + 0x14) = 3;
    PUSH32(esp, 0x00135668u); RECOMP_ABI_CALL(0x00142E40u, sub_00142E40); /* call 0x00142E40 */

loc_00135668: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00135670u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135670: ;
    eax = MEM32(edi);
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 4) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00135690
 * Original: 0x00135690 - 0x001356A3 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135690(void)
{

loc_00135690: ;
    ecx = MEM32(ecx + 4);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001356B0
 * Original: 0x001356B0 - 0x001356BB (11 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001356B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001356B0: ;
    edx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_001356C0
 * Original: 0x001356C0 - 0x001356D5 (21 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001356C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001356C0: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001356D2; /* je: equal / zero */

loc_001356C7: ;
    ecx = MEM32(eax + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001356D2; /* je: equal / zero */

loc_001356CE: ;
    eax = eax + 0x44;
    esp += 4; return; /* ret */

loc_001356D2: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_001356E0
 * Original: 0x001356E0 - 0x001356FE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001356E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001356E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001356E8u); RECOMP_ABI_CALL(0x00135700u, sub_00135700); /* call 0x00135700 */

loc_001356E8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001356F8; /* je: equal / zero */

loc_001356EF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001356F5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_001356F5: ;
    esp = esp + 4;

loc_001356F8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00135700
 * Original: 0x00135700 - 0x0013576A (106 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135700(void)
{

loc_00135700: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x35257E);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3DC31C;
    ecx = esi + 0x34;
    MEM32(esp + 0x10) = 2;
    PUSH32(esp, 0x00135733u); RECOMP_ABI_CALL(0x00133F40u, sub_00133F40); /* call 0x00133F40 */

loc_00135733: ;
    ecx = esi + 0x30;
    MEM8(esp + 0x10) = 1;
    PUSH32(esp, 0x00135740u); RECOMP_ABI_CALL(0x00134600u, sub_00134600); /* call 0x00134600 */

loc_00135740: ;
    ecx = esi + 0x14;
    MEM8(esp + 0x10) = 0;
    MEM32(esi + 0x10) = 0x3DC2DC;
    PUSH32(esp, 0x00135754u); RECOMP_ABI_CALL(0x00134570u, sub_00134570); /* call 0x00134570 */

loc_00135754: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x3DC1E4;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00135770
 * Original: 0x00135770 - 0x00135839 (201 bytes, 66 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135770(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00135770: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3525AE);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0xC) = edi;
    esi = edi + 4;
    MEM32(edi) = 0x3DC33C;
    MEM32(esp + 0x18) = 0;
    MEM32(esi) = 0;
    ebp = edi + 8;
    MEM32(ebp) = 0;
    MEM8(esp + 0x18) = 2;
    MEM8(edi + 0xC) = 0;
    PUSH32(esp, 0x001357BEu); RECOMP_ABI_CALL(0x00142DE0u, sub_00142DE0); /* call 0x00142DE0 */

loc_001357BE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001357C6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001357C6: ;
    eax = MEM32(esi);
    eax = eax + 8;
    ecx = 0xC3000000u;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(esi);
    eax = eax + 0x14;
    ecx = 0x43000000;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    PUSH32(esp, 0x001357EFu); RECOMP_ABI_CALL(0x00143380u, sub_00143380); /* call 0x00143380 */

loc_001357EF: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001357F7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001357F7: ;
    ebp = MEM32(ebp);
    esi = MEM32(esi);
    ebp = ebp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00135806; /* je: equal / zero */

loc_00135803: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00135806: ;
    ecx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00135822; /* je: equal / zero */

loc_0013580D: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00135822; /* jne: not equal / not zero */

loc_0013581D: ;
    PUSH32(esp, 0x00135822u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00135822: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ebp) = esi;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00135840
 * Original: 0x00135840 - 0x00135845 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135840(void)
{

loc_00135840: ;
    MEM8(ecx + 0xC) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00135850
 * Original: 0x00135850 - 0x00135854 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135850(void)
{

loc_00135850: ;
    SET_LO8(eax, MEM8(ecx + 0xC));
    esp += 4; return; /* ret */

}

/**
 * sub_00135860
 * Original: 0x00135860 - 0x00135871 (17 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00135860: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x2C);
    edx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00135880
 * Original: 0x00135880 - 0x0013589F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00135880: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x2C);
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00135895; /* jl: less (signed <) */

loc_0013588D: ;
    MEM32(ecx + 8) = 0;
    esp += 4; return; /* ret */

loc_00135895: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0013589Eu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0013589E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001358A0
 * Original: 0x001358A0 - 0x001358BF (31 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001358A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001358A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001358BC; /* je: equal / zero */

loc_001358A8: ;
    ecx = MEM32(ecx + 8);
    MEM32(esp + 4) = eax;
    ecx = MEM32(ecx + 0x2C);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001358BCu); RECOMP_ABI_CALL(0x001358C0u, sub_001358C0); /* call 0x001358C0 */

loc_001358BC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001358C0
 * Original: 0x001358C0 - 0x00135903 (67 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001358C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001358C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001358E5; /* jge: greater or equal (signed >=) */

loc_001358CE: ;
    edx = MEM32(esi + 0x10);
    eax = edi + 1;
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    MEM32(edx + edi * 4) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001358E5: ;
    PUSH32(esp, 4);
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001358F2u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_001358F2: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esi + 0x10);
    ecx = MEM32(eax);
    MEM32(edx + edi * 4) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00135910
 * Original: 0x00135910 - 0x00135950 (64 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135910(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00135910: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013593D; /* je: equal / zero */

loc_00135919: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x2C);
    edx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0013593D; /* jle: less or equal (signed <=) */

loc_00135928: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    /* nop */

loc_00135930: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00135941; /* je: equal / zero */

loc_00135934: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00135930; /* jl: less (signed <) */

loc_0013593C: ;
    POP32(esp, esi);

loc_0013593D: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_00135941: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0013593C; /* jl: less (signed <) */

loc_00135945: ;
    POP32(esp, esi);
    POP32(esp, edi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_001E7BB0(); return; /* tail jmp 0x001E7BB0 */

}

/**
 * sub_00135950
 * Original: 0x00135950 - 0x001359AA (90 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135950(void)
{

loc_00135950: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3525D3);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    edi = esi + 4;
    MEM32(esi) = 0x3DC364;
    MEM32(esp + 0x14) = 0;
    MEM32(edi) = 0;
    MEM8(esp + 0x14) = 1;
    PUSH32(esp, 0x0013598Fu); RECOMP_ABI_CALL(0x00142F60u, sub_00142F60); /* call 0x00142F60 */

loc_0013598F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00135997u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135997: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001359B0
 * Original: 0x001359B0 - 0x001359C2 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001359B0(void)
{

loc_001359B0: ;
    edx = MEM32(ecx + 4);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001359D0
 * Original: 0x001359D0 - 0x001359EE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001359D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001359D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001359D8u); RECOMP_ABI_CALL(0x001359F0u, sub_001359F0); /* call 0x001359F0 */

loc_001359D8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001359E8; /* je: equal / zero */

loc_001359DF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001359E5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_001359E5: ;
    esp = esp + 4;

loc_001359E8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001359F0
 * Original: 0x001359F0 - 0x00135A39 (73 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001359F0(void)
{

loc_001359F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3525E8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3DC364;
    ecx = esi + 4;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00135A23u); RECOMP_ABI_CALL(0x00134720u, sub_00134720); /* call 0x00134720 */

loc_00135A23: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x3DC1E4;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00135A40
 * Original: 0x00135A40 - 0x00135AD7 (151 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00135A40: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352613);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 8) = edi;
    MEM32(edi) = 0x3DC374;
    MEM32(esp + 0x14) = 1;
    PUSH32(esp, 0x00135A71u); RECOMP_ABI_CALL(0x00133EC0u, sub_00133EC0); /* call 0x00133EC0 */

loc_00135A71: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    ebx = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00135A7Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135A7A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00135A9F; /* jle: less or equal (signed <=) */

loc_00135A7E: ;
    PUSH32(esp, esi);
    esi = edi + 8;

loc_00135A82: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00135A89u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135A89: ;
    MEM32(esi) = 0;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00135A9Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135A9A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00135A82; /* jl: less (signed <) */

loc_00135A9E: ;
    POP32(esp, esi);

loc_00135A9F: ;
    ecx = MEM32(edi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00135AC0; /* je: equal / zero */

loc_00135AAB: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00135AC0; /* jne: not equal / not zero */

loc_00135ABB: ;
    PUSH32(esp, 0x00135AC0u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00135AC0: ;
    ecx = MEM32(esp + 0xC);
    MEM32(edi) = 0x3DC1F4;
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00135AE0
 * Original: 0x00135AE0 - 0x00135AE4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135AE0(void)
{

loc_00135AE0: ;
    SET_LO8(eax, MEM8(ecx + 0x24));
    esp += 4; return; /* ret */

}

/**
 * sub_00135AF0
 * Original: 0x00135AF0 - 0x00135B0D (29 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135AF0(void)
{

loc_00135AF0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = ecx;
    ecx = MEM32(eax + 4);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    eax = eax + 8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00135B09u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135B09: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00135B10
 * Original: 0x00135B10 - 0x00135B1B (11 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00135B10: ;
    edx = MEM32(ecx + 0x20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00135B20
 * Original: 0x00135B20 - 0x00135B45 (37 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00135B20: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00135B2Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135B2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00135B35; /* jge: greater or equal (signed >=) */

loc_00135B31: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00135B35: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00135B3Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135B3F: ;
    eax = MEM32(esi + eax * 4 + 8);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00135B50
 * Original: 0x00135B50 - 0x00135B75 (37 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00135B50: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00135B5Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135B5D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00135B65; /* jge: greater or equal (signed >=) */

loc_00135B61: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00135B65: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00135B6Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135B6F: ;
    eax = MEM32(esi + eax * 4 + 8);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00135B80
 * Original: 0x00135B80 - 0x00135BA5 (37 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00135B80: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00135B8Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135B8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00135B95; /* jge: greater or equal (signed >=) */

loc_00135B91: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00135B95: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00135B9Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135B9F: ;
    eax = MEM32(esi + eax * 4 + 8);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00135BB0
 * Original: 0x00135BB0 - 0x00135BD5 (37 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00135BB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00135BBDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135BBD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00135BC5; /* jge: greater or equal (signed >=) */

loc_00135BC1: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00135BC5: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00135BCFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135BCF: ;
    eax = MEM32(esi + eax * 4 + 8);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00135BE0
 * Original: 0x00135BE0 - 0x00135C05 (37 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00135BE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00135BEDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135BED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00135BF5; /* jge: greater or equal (signed >=) */

loc_00135BF1: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00135BF5: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00135BFFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135BFF: ;
    eax = MEM32(esi + eax * 4 + 8);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00135C10
 * Original: 0x00135C10 - 0x00135C35 (37 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00135C10: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00135C1Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135C1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00135C25; /* jge: greater or equal (signed >=) */

loc_00135C21: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00135C25: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00135C2Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135C2F: ;
    eax = MEM32(esi + eax * 4 + 8);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00135C40
 * Original: 0x00135C40 - 0x00135C65 (37 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00135C40: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00135C4Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135C4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00135C55; /* jge: greater or equal (signed >=) */

loc_00135C51: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00135C55: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00135C5Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135C5F: ;
    eax = MEM32(esi + eax * 4 + 8);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00135C70
 * Original: 0x00135C70 - 0x00135C8D (29 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00135C70: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00135C7E; /* jne: not equal / not zero */

loc_00135C7A: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00135C7E: ;
    ecx = esi;
    PUSH32(esp, 0x00135C85u); RECOMP_ABI_CALL(0x00133EC0u, sub_00133EC0); /* call 0x00133EC0 */

loc_00135C85: ;
    MEM8(esi + 0x24) = 0;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00135C90
 * Original: 0x00135C90 - 0x00135DB6 (294 bytes, 104 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00135C90: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352628);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x40;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00135CB0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135CB0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00135CC8; /* jne: not equal / not zero */

loc_00135CB4: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    ecx = MEM32(esp + 0x40);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x4C;
    esp += 16; return; /* ret 12 */

loc_00135CC8: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x5C);
    ecx = esi;
    PUSH32(esp, 0x00135CD4u); RECOMP_ABI_CALL(0x00133EC0u, sub_00133EC0); /* call 0x00133EC0 */

loc_00135CD4: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00135CDBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135CDB: ;
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00135CE9u); RECOMP_ABI_CALL(0x00134C80u, sub_00134C80); /* call 0x00134C80 */

loc_00135CE9: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x5C) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_00135CF6; /* je: equal / zero */

loc_00135CF3: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00135CF6: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x50) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00135D05u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135D05: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00135D72; /* je: equal / zero */

loc_00135D09: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00135D11u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135D11: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x46D0A0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00135D1Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135D1D: ;
    ebx = MEM32(esp + 0x64);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00135D71; /* je: equal / zero */

loc_00135D25: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00135D71; /* je: equal / zero */

loc_00135D2A: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x00135D33u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00135D33: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00135D3Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135D3A: ;
    edx = MEM32(eax);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00135D47u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135D47: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00135D71; /* je: equal / zero */

loc_00135D4B: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00135D5Eu); RECOMP_ABI_CALL(0x00242F50u, sub_00242F50); /* call 0x00242F50 */

loc_00135D5E: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00135D65u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135D65: ;
    edx = MEM32(eax);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00135D71u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135D71: ;
    POP32(esp, ebx);

loc_00135D72: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00135D7Au); RECOMP_ABI_CALL(0x00133E30u, sub_00133E30); /* call 0x00133E30 */

loc_00135D7A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM8(esi + 0x24) = 1;
    MEM32(esp + 0x50) = 0xFFFFFFFFu;
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00135DA2; /* je: equal / zero */

loc_00135D8B: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00135DA2; /* jne: not equal / not zero */

loc_00135D9B: ;
    ecx = edi;
    PUSH32(esp, 0x00135DA2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00135DA2: ;
    ecx = MEM32(esp + 0x44);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x4C;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00135DC0
 * Original: 0x00135DC0 - 0x00135E3F (127 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135DC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00135DC0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3527F1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00135DE1u); RECOMP_ABI_CALL(0x00133820u, sub_00133820); /* call 0x00133820 */

loc_00135DE1: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x1700;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5C);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    ecx = ecx | edi;
    eax = eax + esi;
    MEM32(edx) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    POP32(esp, edi);
    MEM32(esp + 0x14) = 0;
    POP32(esp, esi);
    if ((eax == 0)) goto loc_00135E2E; /* je: equal / zero */

loc_00135E18: ;
    ecx = eax;
    PUSH32(esp, 0x00135E1Fu); RECOMP_ABI_CALL(0x0013BF70u, sub_0013BF70); /* call 0x0013BF70 */

loc_00135E1F: ;
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00135E2E: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00135E40
 * Original: 0x00135E40 - 0x00135EA2 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00135E40: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x3734) = esi;
    MEM32(ecx + 0x3738) = esi;
    MEM32(ecx + 0x373C) = esi;
    edx = 0; /* xor self */
    goto loc_00135E60;

    /* nop */

loc_00135E60: ;
    eax = MEM32(ecx + 0x3734);
    edi = MEM32(ecx + 0x373C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x36C (32-bit) */
    MEM32(ecx + 0x3734) = eax;
    MEM32(ecx + 0x373C) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00135E8E; /* jl: less (signed <) */

loc_00135E81: ;
    MEM32(ecx + 0x3734) = esi;
    eax = 0x36B;
    goto loc_00135E8F;

loc_00135E8E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00135E8F: ;
    MEM32(ecx + eax * 4 + 0x2980) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x36C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00135E60; /* jl: less (signed <) */

loc_00135E9F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00135EB0
 * Original: 0x00135EB0 - 0x00135F3E (142 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00135EB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = edi + edi * 2;
    edx = MEM32(esi + eax * 4);
    ecx = esi + eax * 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00135EC5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135EC5: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = eax << 2;
    ecx = MEM32(eax + esi + 0x2910);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax + esi + 0x2910) = ecx;
    MEM32(eax + esi + 0x3740) = MEM32(eax + esi + 0x3740) & edx;
    eax = MEM32(esi + 0x3734);
    edx = MEM32(esi + 0x373C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x36C (32-bit) */
    MEM32(esi + 0x3734) = eax;
    MEM32(esi + 0x373C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00135F24; /* jl: less (signed <) */

loc_00135F13: ;
    MEM32(esi + 0x3734) = 0;
    eax = 0x36B;
    goto loc_00135F25;

loc_00135F24: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00135F25: ;
    MEM32(esi + eax * 4 + 0x2980) = edi;
    eax = MEM32(esi + 0x37B0);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x37B0) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00135F40
 * Original: 0x00135F40 - 0x00135FA2 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00135F40: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x2480) = esi;
    MEM32(ecx + 0x2484) = esi;
    MEM32(ecx + 0x2488) = esi;
    edx = 0; /* xor self */
    goto loc_00135F60;

    /* nop */

loc_00135F60: ;
    eax = MEM32(ecx + 0x2480);
    edi = MEM32(ecx + 0x2488);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC2 (32-bit) */
    MEM32(ecx + 0x2480) = eax;
    MEM32(ecx + 0x2488) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00135F8E; /* jl: less (signed <) */

loc_00135F81: ;
    MEM32(ecx + 0x2480) = esi;
    eax = 0xC1;
    goto loc_00135F8F;

loc_00135F8E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00135F8F: ;
    MEM32(ecx + eax * 4 + 0x2174) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xC2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00135F60; /* jl: less (signed <) */

loc_00135F9F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00135FB0
 * Original: 0x00135FB0 - 0x00136040 (144 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00135FB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    esi = ecx;
    edx = MEM32(eax + esi);
    ecx = eax + esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00135FC7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00135FC7: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = eax << 2;
    ecx = MEM32(eax + esi + 0x2158);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax + esi + 0x2158) = ecx;
    MEM32(eax + esi + 0x248C) = MEM32(eax + esi + 0x248C) & edx;
    eax = MEM32(esi + 0x2480);
    edx = MEM32(esi + 0x2488);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC2 (32-bit) */
    MEM32(esi + 0x2480) = eax;
    MEM32(esi + 0x2488) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00136026; /* jl: less (signed <) */

loc_00136015: ;
    MEM32(esi + 0x2480) = 0;
    eax = 0xC1;
    goto loc_00136027;

loc_00136026: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00136027: ;
    MEM32(esi + eax * 4 + 0x2174) = edi;
    eax = MEM32(esi + 0x24A8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x24A8) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00136040
 * Original: 0x00136040 - 0x001360A2 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00136040: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x2054) = esi;
    MEM32(ecx + 0x2058) = esi;
    MEM32(ecx + 0x205C) = esi;
    edx = 0; /* xor self */
    goto loc_00136060;

    /* nop */

loc_00136060: ;
    eax = MEM32(ecx + 0x2054);
    edi = MEM32(ecx + 0x205C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2AA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2AA (32-bit) */
    MEM32(ecx + 0x2054) = eax;
    MEM32(ecx + 0x205C) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0013608E; /* jl: less (signed <) */

loc_00136081: ;
    MEM32(ecx + 0x2054) = esi;
    eax = 0x2A9;
    goto loc_0013608F;

loc_0013608E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0013608F: ;
    MEM32(ecx + eax * 4 + 0x15A8) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2AA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2AA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00136060; /* jl: less (signed <) */

loc_0013609F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001360B0
 * Original: 0x001360B0 - 0x0013613B (139 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001360B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001360B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi + edi * 8);
    ecx = esi + edi * 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001360C2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001360C2: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = eax << 2;
    ecx = MEM32(eax + esi + 0x1550);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax + esi + 0x1550) = ecx;
    MEM32(eax + esi + 0x2060) = MEM32(eax + esi + 0x2060) & edx;
    eax = MEM32(esi + 0x2054);
    edx = MEM32(esi + 0x205C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2AA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2AA (32-bit) */
    MEM32(esi + 0x2054) = eax;
    MEM32(esi + 0x205C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00136121; /* jl: less (signed <) */

loc_00136110: ;
    MEM32(esi + 0x2054) = 0;
    eax = 0x2A9;
    goto loc_00136122;

loc_00136121: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00136122: ;
    MEM32(esi + eax * 4 + 0x15A8) = edi;
    eax = MEM32(esi + 0x20B8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x20B8) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00136140
 * Original: 0x00136140 - 0x001361A2 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00136140: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x98B0) = esi;
    MEM32(ecx + 0x98B4) = esi;
    MEM32(ecx + 0x98B8) = esi;
    edx = 0; /* xor self */
    goto loc_00136160;

    /* nop */

loc_00136160: ;
    eax = MEM32(ecx + 0x98B0);
    edi = MEM32(ecx + 0x98B8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28A (32-bit) */
    MEM32(ecx + 0x98B0) = eax;
    MEM32(ecx + 0x98B8) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0013618E; /* jl: less (signed <) */

loc_00136181: ;
    MEM32(ecx + 0x98B0) = esi;
    eax = 0x289;
    goto loc_0013618F;

loc_0013618E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0013618F: ;
    MEM32(ecx + eax * 4 + 0x8E84) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x28A (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00136160; /* jl: less (signed <) */

loc_0013619F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001361B0
 * Original: 0x001361B0 - 0x00136240 (144 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001361B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001361B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    esi = ecx;
    edx = MEM32(eax + esi);
    ecx = eax + esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001361C7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001361C7: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = eax << 2;
    ecx = MEM32(eax + esi + 0x8E30);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax + esi + 0x8E30) = ecx;
    MEM32(eax + esi + 0x98BC) = MEM32(eax + esi + 0x98BC) & edx;
    eax = MEM32(esi + 0x98B0);
    edx = MEM32(esi + 0x98B8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28A (32-bit) */
    MEM32(esi + 0x98B0) = eax;
    MEM32(esi + 0x98B8) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00136226; /* jl: less (signed <) */

loc_00136215: ;
    MEM32(esi + 0x98B0) = 0;
    eax = 0x289;
    goto loc_00136227;

loc_00136226: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00136227: ;
    MEM32(esi + eax * 4 + 0x8E84) = edi;
    eax = MEM32(esi + 0x9910);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x9910) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00136240
 * Original: 0x00136240 - 0x001362D1 (145 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00136240: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xA4);
    esi = ecx;
    edx = MEM32(eax + esi);
    ecx = eax + esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0013625Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013625A: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = eax << 2;
    ecx = MEM32(eax + esi + 0x1480);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax + esi + 0x1480) = ecx;
    MEM32(eax + esi + 0x1514) = MEM32(eax + esi + 0x1514) & edx;
    eax = MEM32(esi + 0x1508);
    edx = MEM32(esi + 0x1510);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEM32(esi + 0x1508) = eax;
    MEM32(esi + 0x1510) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001362B7; /* jl: less (signed <) */

loc_001362A6: ;
    MEM32(esi + 0x1508) = 0;
    eax = 0x1F;
    goto loc_001362B8;

loc_001362B7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001362B8: ;
    MEM32(esi + eax * 4 + 0x1484) = edi;
    eax = MEM32(esi + 0x1518);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x1518) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001362E0
 * Original: 0x001362E0 - 0x00136342 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001362E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001362E0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0xA40) = esi;
    MEM32(ecx + 0xA44) = esi;
    MEM32(ecx + 0xA48) = esi;
    edx = 0; /* xor self */
    goto loc_00136300;

    /* nop */

loc_00136300: ;
    eax = MEM32(ecx + 0xA40);
    edi = MEM32(ecx + 0xA48);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x82 (32-bit) */
    MEM32(ecx + 0xA40) = eax;
    MEM32(ecx + 0xA48) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0013632E; /* jl: less (signed <) */

loc_00136321: ;
    MEM32(ecx + 0xA40) = esi;
    eax = 0x81;
    goto loc_0013632F;

loc_0013632E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0013632F: ;
    MEM32(ecx + eax * 4 + 0x834) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x82 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00136300; /* jl: less (signed <) */

loc_0013633F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00136350
 * Original: 0x00136350 - 0x001363E0 (144 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00136350: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    esi = ecx;
    eax = eax << 4;
    edx = MEM32(eax + esi);
    ecx = eax + esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00136367u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00136367: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = eax << 2;
    ecx = MEM32(eax + esi + 0x820);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax + esi + 0x820) = ecx;
    MEM32(eax + esi + 0xA4C) = MEM32(eax + esi + 0xA4C) & edx;
    eax = MEM32(esi + 0xA40);
    edx = MEM32(esi + 0xA48);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x82 (32-bit) */
    MEM32(esi + 0xA40) = eax;
    MEM32(esi + 0xA48) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001363C6; /* jl: less (signed <) */

loc_001363B5: ;
    MEM32(esi + 0xA40) = 0;
    eax = 0x81;
    goto loc_001363C7;

loc_001363C6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001363C7: ;
    MEM32(esi + eax * 4 + 0x834) = edi;
    eax = MEM32(esi + 0xA60);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0xA60) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001363E0
 * Original: 0x001363E0 - 0x00136418 (56 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001363E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001363E0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x14) = esi;
    MEM32(ecx + 0x18) = esi;
    MEM32(ecx + 0x1C) = esi;
    eax = 0; /* xor self */
    /* nop */

loc_001363F0: ;
    edx = MEM32(ecx + 0x14);
    edi = MEM32(ecx + 0x1C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    MEM32(ecx + 0x14) = edx;
    MEM32(ecx + 0x1C) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0013640A; /* jl: less (signed <) */

loc_00136403: ;
    MEM32(ecx + 0x14) = esi;
    edx = 0; /* xor self */
    goto loc_0013640B;

loc_0013640A: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0013640B: ;
    MEM32(ecx + edx * 4 + 0xC) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001363F0; /* jl: less (signed <) */

loc_00136415: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00136420
 * Original: 0x00136420 - 0x00136493 (115 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00136420: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi + edi * 8);
    ecx = esi + edi * 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00136432u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00136432: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = eax << 2;
    ecx = MEM32(eax + esi + 8);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax + esi + 8) = ecx;
    MEM32(eax + esi + 0x20) = MEM32(eax + esi + 0x20) & edx;
    eax = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x1C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00136482; /* jl: less (signed <) */

loc_00136469: ;
    MEM32(esi + 0x14) = 0;
    eax = 0; /* xor self */
    MEM32(esi + eax * 4 + 0xC) = edi;
    eax = MEM32(esi + 0x24);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x24) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00136482: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + eax * 4 + 0xC) = edi;
    eax = MEM32(esi + 0x24);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x24) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001364A0
 * Original: 0x001364A0 - 0x00136502 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001364A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001364A0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0xA4B4) = esi;
    MEM32(ecx + 0xA4B8) = esi;
    MEM32(ecx + 0xA4BC) = esi;
    edx = 0; /* xor self */
    goto loc_001364C0;

    /* nop */

loc_001364C0: ;
    eax = MEM32(ecx + 0xA4B4);
    edi = MEM32(ecx + 0xA4BC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x36C (32-bit) */
    MEM32(ecx + 0xA4B4) = eax;
    MEM32(ecx + 0xA4BC) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_001364EE; /* jl: less (signed <) */

loc_001364E1: ;
    MEM32(ecx + 0xA4B4) = esi;
    eax = 0x36B;
    goto loc_001364EF;

loc_001364EE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001364EF: ;
    MEM32(ecx + eax * 4 + 0x9700) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x36C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001364C0; /* jl: less (signed <) */

loc_001364FF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00136510
 * Original: 0x00136510 - 0x001365A0 (144 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00136510: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    esi = ecx;
    edx = MEM32(eax + esi);
    ecx = eax + esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00136527u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00136527: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = eax << 2;
    ecx = MEM32(eax + esi + 0x9690);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax + esi + 0x9690) = ecx;
    MEM32(eax + esi + 0xA4C0) = MEM32(eax + esi + 0xA4C0) & edx;
    eax = MEM32(esi + 0xA4B4);
    edx = MEM32(esi + 0xA4BC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x36C (32-bit) */
    MEM32(esi + 0xA4B4) = eax;
    MEM32(esi + 0xA4BC) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00136586; /* jl: less (signed <) */

loc_00136575: ;
    MEM32(esi + 0xA4B4) = 0;
    eax = 0x36B;
    goto loc_00136587;

loc_00136586: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00136587: ;
    MEM32(esi + eax * 4 + 0x9700) = edi;
    eax = MEM32(esi + 0xA530);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0xA530) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001365A0
 * Original: 0x001365A0 - 0x001366D9 (313 bytes, 107 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001365A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001365A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352692);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = esi;
    ebx = 0; /* xor self */
    edi = esi + 4;
    MEM32(esi) = 0x3DC3D4;
    MEM32(esp + 0x20) = ebx;
    MEM32(edi) = ebx;
    ebp = esi + 8;
    MEM32(ebp) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    PUSH32(esp, 0x1A59F0);
    PUSH32(esp, 0x27080);
    PUSH32(esp, 0xD);
    eax = esi + 0x34;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    MEM8(esp + 0x34) = 5;
    MEM32(esi + 0x30) = ebx;
    PUSH32(esp, 0x00136601u); RECOMP_ABI_CALL(0x003418A8u, sub_003418A8); /* call 0x003418A8 */

loc_00136601: ;
    MEM8(esp + 0x20) = 6;
    PUSH32(esp, 0x0013660Bu); RECOMP_ABI_CALL(0x00142E40u, sub_00142E40); /* call 0x00142E40 */

loc_0013660B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00136613u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00136613: ;
    PUSH32(esp, 0x00136618u); RECOMP_ABI_CALL(0x00142DE0u, sub_00142DE0); /* call 0x00142DE0 */

loc_00136618: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00136620u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00136620: ;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    eax = MEM32(ebp);
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00136630; /* je: equal / zero */

loc_0013662D: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00136630: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013664F; /* je: equal / zero */

loc_00136637: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013664F; /* jne: not equal / not zero */

loc_00136646: ;
    PUSH32(esp, 0x0013664Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013664B: ;
    eax = MEM32(esp + 0x10);

loc_0013664F: ;
    MEM32(eax + 0xC) = edi;
    eax = esp + 0x10;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013665Eu); RECOMP_ABI_CALL(0x00134BE0u, sub_00134BE0); /* call 0x00134BE0 */

loc_0013665E: ;
    esp = esp + 8;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM8(esp + 0x20) = 7;
    if (CMP_EQ(_fa, _fb)) goto loc_0013666F; /* je: equal / zero */

loc_0013666C: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0013666F: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013668B; /* je: equal / zero */

loc_00136676: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013668B; /* jne: not equal / not zero */

loc_00136686: ;
    PUSH32(esp, 0x0013668Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013668B: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0xC) = edi;
    MEM8(esp + 0x20) = 6;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001366B5; /* je: equal / zero */

loc_0013669D: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_001366B5; /* jne: not equal / not zero */

loc_001366B0: ;
    PUSH32(esp, 0x001366B5u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001366B5: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp);
    PUSH32(esp, 0x001366C1u); RECOMP_ABI_CALL(0x00259CC0u, sub_00259CC0); /* call 0x00259CC0 */

loc_001366C1: ;
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(esi + 0x18) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001366E0
 * Original: 0x001366E0 - 0x00136703 (35 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001366E0(void)
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

loc_001366E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001366EAu); RECOMP_ABI_CALL(0x00139730u, sub_00139730); /* call 0x00139730 */

loc_001366EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001366FA; /* je: equal / zero */

loc_001366EE: ;
    fp_push((double)SMEM64(eax + 0x30)); /* fild */
    fp_top() = fp_top() * MEMD(0x3DA5F8); /* fmul qword ptr [0x3da5f8] */
    esp += 8; return; /* ret 4 */

loc_001366FA: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00136710
 * Original: 0x00136710 - 0x00136732 (34 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136710(void)
{

loc_00136710: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x3C); PUSH32(esp, 0x0013671Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013671F: ;
    ebx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x64); PUSH32(esp, 0x0013672Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013672A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00136740
 * Original: 0x00136740 - 0x00136759 (25 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136740(void)
{

loc_00136740: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x3C); PUSH32(esp, 0x0013674Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013674E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x6C); PUSH32(esp, 0x00136754u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00136754: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00136760
 * Original: 0x00136760 - 0x00136785 (37 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136760(void)
{

loc_00136760: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x3C); PUSH32(esp, 0x0013677Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013677A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x78); PUSH32(esp, 0x00136780u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00136780: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00136790
 * Original: 0x00136790 - 0x001367D4 (68 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136790(void)
{

loc_00136790: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0013679Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013679F: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x001367C3u); RECOMP_ABI_CALL(0x00139730u, sub_00139730); /* call 0x00139730 */

loc_001367C3: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001367D0u); RECOMP_ABI_CALL(0x00139320u, sub_00139320); /* call 0x00139320 */

loc_001367D0: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001367E0
 * Original: 0x001367E0 - 0x0013681C (60 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001367E0(void)
{

loc_001367E0: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x0013680Bu); RECOMP_ABI_CALL(0x00139730u, sub_00139730); /* call 0x00139730 */

loc_0013680B: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00136818u); RECOMP_ABI_CALL(0x00139320u, sub_00139320); /* call 0x00139320 */

loc_00136818: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00136820
 * Original: 0x00136820 - 0x0013686A (74 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136820(void)
{

loc_00136820: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0013682Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013682F: ;
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x00136859u); RECOMP_ABI_CALL(0x00139730u, sub_00139730); /* call 0x00139730 */

loc_00136859: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00136866u); RECOMP_ABI_CALL(0x00139320u, sub_00139320); /* call 0x00139320 */

loc_00136866: ;
    POP32(esp, esi);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00136870
 * Original: 0x00136870 - 0x001368B2 (66 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136870(void)
{

loc_00136870: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x001368A1u); RECOMP_ABI_CALL(0x00139730u, sub_00139730); /* call 0x00139730 */

loc_001368A1: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001368AEu); RECOMP_ABI_CALL(0x00139320u, sub_00139320); /* call 0x00139320 */

loc_001368AE: ;
    POP32(esp, esi);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001368C0
 * Original: 0x001368C0 - 0x001368F0 (48 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001368C0(void)
{

loc_001368C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x001368CFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001368CF: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x001368DFu); RECOMP_ABI_CALL(0x00139730u, sub_00139730); /* call 0x00139730 */

loc_001368DF: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001368ECu); RECOMP_ABI_CALL(0x00139220u, sub_00139220); /* call 0x00139220 */

loc_001368EC: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001368F0
 * Original: 0x001368F0 - 0x00136920 (48 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001368F0(void)
{

loc_001368F0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x00136907u); RECOMP_ABI_CALL(0x00139730u, sub_00139730); /* call 0x00139730 */

loc_00136907: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00136914u); RECOMP_ABI_CALL(0x00139220u, sub_00139220); /* call 0x00139220 */

loc_00136914: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00136920
 * Original: 0x00136920 - 0x00136958 (56 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136920(void)
{

loc_00136920: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0);
    MEM32(esi + 0x18) = 0;
    PUSH32(esp, 0x00136947u); RECOMP_ABI_CALL(0x00139730u, sub_00139730); /* call 0x00139730 */

loc_00136947: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00136954u); RECOMP_ABI_CALL(0x00139320u, sub_00139320); /* call 0x00139320 */

loc_00136954: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00136960
 * Original: 0x00136960 - 0x00136973 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136960(void)
{

loc_00136960: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00136980
 * Original: 0x00136980 - 0x0013699D (29 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00136980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00136980: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013699A; /* je: equal / zero */

loc_00136987: ;
    eax = MEM32(eax + 0x2C);
    eax = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013699C; /* jne: not equal / not zero */

loc_00136994: ;
    eax = 0x3C806C;
    esp += 4; return; /* ret */

loc_0013699A: ;
    eax = 0; /* xor self */

loc_0013699C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001369A0
 * Original: 0x001369A0 - 0x001369BD (29 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001369A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001369A0: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001369BA; /* je: equal / zero */

loc_001369A7: ;
    eax = MEM32(eax + 0x20);
    eax = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001369BC; /* jne: not equal / not zero */

loc_001369B4: ;
    eax = 0x3C806C;
    esp += 4; return; /* ret */

loc_001369BA: ;
    eax = 0; /* xor self */

loc_001369BC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001369C0
 * Original: 0x001369C0 - 0x001369D4 (20 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001369C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001369C0: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001369CE; /* je: equal / zero */

loc_001369C7: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001369D3; /* jne: not equal / not zero */

loc_001369CE: ;
    eax = 0x3C806C;

loc_001369D3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001369E0
 * Original: 0x001369E0 - 0x00136A20 (64 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001369E0(void)
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

loc_001369E0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001369EBu); RECOMP_ABI_CALL(0x00138B00u, sub_00138B00); /* call 0x00138B00 */

loc_001369EB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00136A16; /* je: equal / zero */

loc_001369F1: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMD(0x3DA5F0); /* fmul qword ptr [0x3da5f0] */
    PUSH32(esp, 0x00136A00u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00136A00: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00136A09u); RECOMP_ABI_CALL(0x0024B7B0u, sub_0024B7B0); /* call 0x0024B7B0 */

loc_00136A09: ;
    fp_push((double)SMEM64(esi + 0x28)); /* fild */
    POP32(esp, esi);
    fp_top() = fp_top() * MEMD(0x3DA5F8); /* fmul qword ptr [0x3da5f8] */
    esp += 12; return; /* ret 8 */

loc_00136A16: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00136A20
 * Original: 0x00136A20 - 0x00136AD0 (176 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136A20(void)
{
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

loc_00136A20: ;
    eax = MEM32(esp + 8);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00136A34; /* je: equal / zero */

loc_00136A2C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00136A32u); RECOMP_ABI_CALL(0x00138B00u, sub_00138B00); /* call 0x00138B00 */

loc_00136A32: ;
    goto loc_00136A48;

loc_00136A34: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00136AC2; /* je: equal / zero */

loc_00136A3F: ;
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00136A48u); RECOMP_ABI_CALL(0x00136AD0u, sub_00136AD0); /* call 0x00136AD0 */

loc_00136A48: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00136AB4; /* je: equal / zero */

loc_00136A4F: ;
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00136AB4; /* je: equal / zero */

loc_00136A56: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMD(0x3DA5F0); /* fmul qword ptr [0x3da5f0] */
    PUSH32(esp, 0x00136A65u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00136A65: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00136A6Eu); RECOMP_ABI_CALL(0x0024B7B0u, sub_0024B7B0); /* call 0x0024B7B0 */

loc_00136A6E: ;
    fp_push((double)SMEM64(edi + 0x30)); /* fild */
    fp_top() = fp_top() / MEMF(esi + 0x38); /* fdiv dword ptr [esi + 0x38] */
    PUSH32(esp, 0x00136A79u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00136A79: ;
    edi = MEM32(esi + 0x28);
    ecx = MEM32(esi + 0x2C);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = edx;
    fp_push((double)SMEM64(esp + 8)); /* fild */
    fp_top() = fp_top() * MEMD(0x3DA5F8); /* fmul qword ptr [0x3da5f8] */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00136AAC; /* jne: not equal / not zero */

loc_00136AA4: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6DE4)); /* fld float */

loc_00136AAC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

loc_00136AB4: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

loc_00136AC2: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00136AD0
 * Original: 0x00136AD0 - 0x00136AFB (43 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00136AD0: ;
    eax = MEM32(ecx + 0x38);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00136AF4; /* jle: less or equal (signed <=) */

loc_00136ADE: ;
    edx = MEM32(eax + 0x10);
    edi = MEM32(esp + 0xC);

loc_00136AE5: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00136AF6; /* je: equal / zero */

loc_00136AEC: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00136AE5; /* jl: less (signed <) */

loc_00136AF4: ;
    eax = 0; /* xor self */

loc_00136AF6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00136B00
 * Original: 0x00136B00 - 0x00136B33 (51 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136B00(void)
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

loc_00136B00: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00136B10; /* je: equal / zero */

loc_00136B08: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00136B0Eu); RECOMP_ABI_CALL(0x00138B00u, sub_00138B00); /* call 0x00138B00 */

loc_00136B0E: ;
    goto loc_00136B20;

loc_00136B10: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00136B2A; /* je: equal / zero */

loc_00136B17: ;
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00136B20u); RECOMP_ABI_CALL(0x00136AD0u, sub_00136AD0); /* call 0x00136AD0 */

loc_00136B20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00136B2A; /* je: equal / zero */

loc_00136B24: ;
    fp_push(MEMF(eax + 0x38)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_00136B2A: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00136B40
 * Original: 0x00136B40 - 0x00136B88 (72 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136B40(void)
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

loc_00136B40: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00136B51; /* je: equal / zero */

loc_00136B49: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00136B4Fu); RECOMP_ABI_CALL(0x00138B00u, sub_00138B00); /* call 0x00138B00 */

loc_00136B4F: ;
    goto loc_00136B61;

loc_00136B51: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00136B84; /* je: equal / zero */

loc_00136B58: ;
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00136B61u); RECOMP_ABI_CALL(0x00136AD0u, sub_00136AD0); /* call 0x00136AD0 */

loc_00136B61: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00136B84; /* je: equal / zero */

loc_00136B67: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMD(0x3DA5F0); /* fmul qword ptr [0x3da5f0] */
    PUSH32(esp, 0x00136B76u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00136B76: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00136B84u); RECOMP_ABI_CALL(0x00136B90u, sub_00136B90); /* call 0x00136B90 */

loc_00136B84: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00136B90
 * Original: 0x00136B90 - 0x00136C08 (120 bytes, 38 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136B90(void)
{
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

loc_00136B90: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, 0x12);
    PUSH32(esp, 0x00136BA2u); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_00136BA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00136BB4; /* jge: greater or equal (signed >=) */

loc_00136BAE: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_00136BB4: ;
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * MEMF(esi + 0x38); /* fmul dword ptr [esi + 0x38] */
    PUSH32(esp, 0x00136BC0u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00136BC0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00136BCEu); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_00136BCE: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ecx = MEM32(esi + 0x40);
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    eax = MEM32(esi + 0x44);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(esi + 0x40) = ecx;
    MEM32(esi + 0x44) = eax;
    PUSH32(esp, 0x00136BEBu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00136BEB: ;
    ecx = MEM32(esi + 0x40);
    edx = (edx << 0x12) | (eax >> (32 - 0x12)); /* shld */
    if (0x12) _cf = (int)(((eax) >> (32 - (0x12))) & 1);
    eax = eax << 0x12;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    { uint64_t _t = (uint64_t)(MEM32(esi + 0x44)) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(esi + 0x44) = (uint32_t)_t; }  /* sbb */
    eax = MEM32(esp + 8);
    MEM32(esi + 0x40) = ecx;
    MEM32(esi + 0x38) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00136C10
 * Original: 0x00136C10 - 0x00136C21 (17 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00136C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00136C10: ;
    eax = MEM32(ecx + 0x14);
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00136C1E; /* je: equal / zero */

loc_00136C1A: ;
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

loc_00136C1E: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00136C30
 * Original: 0x00136C30 - 0x00136C61 (49 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136C30(void)
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

loc_00136C30: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00136C45; /* je: equal / zero */

loc_00136C38: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00136C45; /* je: equal / zero */

loc_00136C3D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00136C43u); RECOMP_ABI_CALL(0x001396D0u, sub_001396D0); /* call 0x001396D0 */

loc_00136C43: ;
    goto loc_00136C48;

loc_00136C45: ;
    eax = MEM32(ecx + 0x10);

loc_00136C48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00136C58; /* je: equal / zero */

loc_00136C4C: ;
    fp_push((double)SMEM64(eax + 0x30)); /* fild */
    fp_top() = fp_top() * MEMD(0x3DA5F8); /* fmul qword ptr [0x3da5f8] */
    esp += 8; return; /* ret 4 */

loc_00136C58: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00136C70
 * Original: 0x00136C70 - 0x00136C9E (46 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00136C70: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00136C8B; /* jne: not equal / not zero */

loc_00136C7C: ;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00136C8B; /* jne: not equal / not zero */

loc_00136C86: ;
    eax = 0x3C806C;

loc_00136C8B: ;
    edi = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x3C); PUSH32(esp, 0x00136C93u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00136C93: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x58); PUSH32(esp, 0x00136C99u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00136C99: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00136CA0
 * Original: 0x00136CA0 - 0x00136CC0 (32 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136CA0(void)
{

loc_00136CA0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00136CB4u); RECOMP_ABI_CALL(0x00136CC0u, sub_00136CC0); /* call 0x00136CC0 */

loc_00136CB4: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00136CBCu); RECOMP_ABI_CALL(0x00138A10u, sub_00138A10); /* call 0x00138A10 */

loc_00136CBC: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00136CC0
 * Original: 0x00136CC0 - 0x00136CE1 (33 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00136CC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00136CC0: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00136CDC; /* je: equal / zero */

loc_00136CC7: ;
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00136CDC; /* je: equal / zero */

loc_00136CCE: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00136CDC; /* je: equal / zero */

loc_00136CD5: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x64)); return; /* indirect tail jmp */

loc_00136CDC: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00136CF0
 * Original: 0x00136CF0 - 0x00136D0C (28 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136CF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00136CF0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00136CFD; /* jl: less (signed <) */

loc_00136CF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00136CFF; /* jl: less (signed <) */

loc_00136CFD: ;
    eax = 0; /* xor self */

loc_00136CFF: ;
    eax = MEM32(ecx + eax * 4 + 0x6C);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00138A10(); return; /* tail jmp 0x00138A10 */

}

/**
 * sub_00136D10
 * Original: 0x00136D10 - 0x00136D34 (36 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136D10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00136D10: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00136D1D; /* jge: greater or equal (signed >=) */

loc_00136D18: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

loc_00136D1D: ;
    PUSH32(esp, esi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0xAF;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    POP32(esp, esi);
    ecx = MEM32(ecx + eax * 4 + 0x1C);
    eax = MEM32(ecx);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_00136D40
 * Original: 0x00136D40 - 0x00136D76 (54 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00136D40: ;
    eax = MEM32(esp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00136D59; /* jge: greater or equal (signed >=) */

loc_00136D4A: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    esp += 12; return; /* ret 8 */

loc_00136D59: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0xAF;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    esi = MEM32(esp + 8);
    ecx = MEM32(ecx + eax * 4 + 0x1C);
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00136D70u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00136D70: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00136D80
 * Original: 0x00136D80 - 0x00136DA8 (40 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136D80(void)
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

loc_00136D80: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00136D91; /* jge: greater or equal (signed >=) */

loc_00136D88: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_00136D91: ;
    PUSH32(esp, esi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0xAF;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    POP32(esp, esi);
    ecx = MEM32(ecx + eax * 4 + 0x1C);
    eax = MEM32(ecx);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00136DB0
 * Original: 0x00136DB0 - 0x00136DD4 (36 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136DB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00136DB0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00136DBD; /* jge: greater or equal (signed >=) */

loc_00136DB8: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

loc_00136DBD: ;
    PUSH32(esp, esi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0xAF;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    POP32(esp, esi);
    ecx = MEM32(ecx + eax * 4 + 0x1C);
    eax = MEM32(ecx);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC)); return; /* indirect tail jmp */

}

/**
 * sub_00136DE0
 * Original: 0x00136DE0 - 0x00136DFE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00136DE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00136DE8u); RECOMP_ABI_CALL(0x00136E00u, sub_00136E00); /* call 0x00136E00 */

loc_00136DE8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00136DF8; /* je: equal / zero */

loc_00136DEF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00136DF5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00136DF5: ;
    esp = esp + 4;

loc_00136DF8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00136E00
 * Original: 0x00136E00 - 0x00136EDA (218 bytes, 64 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00136E00: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3526EA);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3DC3D4;
    MEM32(esp + 0x10) = 6;
    PUSH32(esp, 0x00136E30u); RECOMP_ABI_CALL(0x00136EE0u, sub_00136EE0); /* call 0x00136EE0 */

loc_00136E30: ;
    PUSH32(esp, 0x1A59F0);
    PUSH32(esp, 0xD);
    eax = esi + 0x34;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    MEM8(esp + 0x20) = 5;
    PUSH32(esp, 0x00136E47u); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_00136E47: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = 4;
    if (TEST_Z(_fa, _fb)) goto loc_00136E68; /* je: equal / zero */

loc_00136E53: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00136E68; /* jne: not equal / not zero */

loc_00136E63: ;
    PUSH32(esp, 0x00136E68u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00136E68: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = 3;
    if (TEST_Z(_fa, _fb)) goto loc_00136E89; /* je: equal / zero */

loc_00136E74: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00136E89; /* jne: not equal / not zero */

loc_00136E84: ;
    PUSH32(esp, 0x00136E89u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00136E89: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = 2;
    if (TEST_Z(_fa, _fb)) goto loc_00136EAA; /* je: equal / zero */

loc_00136E95: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00136EAA; /* jne: not equal / not zero */

loc_00136EA5: ;
    PUSH32(esp, 0x00136EAAu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00136EAA: ;
    ecx = esi + 8;
    MEM8(esp + 0x10) = 1;
    PUSH32(esp, 0x00136EB7u); RECOMP_ABI_CALL(0x00133F40u, sub_00133F40); /* call 0x00133F40 */

loc_00136EB7: ;
    ecx = esi + 4;
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x00136EC4u); RECOMP_ABI_CALL(0x00132FC0u, sub_00132FC0); /* call 0x00132FC0 */

loc_00136EC4: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x3DC1E4;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00136EE0
 * Original: 0x00136EE0 - 0x00136FAD (205 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00136EE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x34;
    ebx = 0xD;
    /* nop */

loc_00136EF0: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00136EF8u); RECOMP_ABI_CALL(0x00011A40u, sub_00011A40); /* call 0x00011A40 */

loc_00136EF8: ;
    MEM32(edi) = 0;
    esp = esp + 4;
    edi = edi + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00136EF0; /* jne: not equal / not zero */

loc_00136F07: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00136F10u); RECOMP_ABI_CALL(0x00011A40u, sub_00011A40); /* call 0x00011A40 */

loc_00136F10: ;
    MEM32(esi + 0xC) = 0;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00136F20u); RECOMP_ABI_CALL(0x00011A40u, sub_00011A40); /* call 0x00011A40 */

loc_00136F20: ;
    MEM32(esi + 0x10) = 0;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00136F30u); RECOMP_ABI_CALL(0x00011A40u, sub_00011A40); /* call 0x00011A40 */

loc_00136F30: ;
    edi = esi + 8;
    MEM32(esi + 0x14) = 0;
    eax = MEM32(edi);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00136F71; /* je: equal / zero */

loc_00136F43: ;
    PUSH32(esp, 0x00136F48u); RECOMP_ABI_CALL(0x00142E40u, sub_00142E40); /* call 0x00142E40 */

loc_00136F48: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00136F50u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00136F50: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00136F6B; /* je: equal / zero */

loc_00136F56: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00136F6B; /* jne: not equal / not zero */

loc_00136F66: ;
    PUSH32(esp, 0x00136F6Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00136F6B: ;
    MEM32(edi) = 0;

loc_00136F71: ;
    eax = MEM32(esi + 4);
    esi = esi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00136FA9; /* je: equal / zero */

loc_00136F7B: ;
    PUSH32(esp, 0x00136F80u); RECOMP_ABI_CALL(0x00142DE0u, sub_00142DE0); /* call 0x00142DE0 */

loc_00136F80: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00136F88u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00136F88: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00136FA3; /* je: equal / zero */

loc_00136F8E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00136FA3; /* jne: not equal / not zero */

loc_00136F9E: ;
    PUSH32(esp, 0x00136FA3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00136FA3: ;
    MEM32(esi) = 0;

loc_00136FA9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00136FB0
 * Original: 0x00136FB0 - 0x00136FCE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00136FB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00136FB8u); RECOMP_ABI_CALL(0x00136FD0u, sub_00136FD0); /* call 0x00136FD0 */

loc_00136FB8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00136FC8; /* je: equal / zero */

loc_00136FBF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00136FC5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00136FC5: ;
    esp = esp + 4;

loc_00136FC8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00136FD0
 * Original: 0x00136FD0 - 0x00137020 (80 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136FD0(void)
{

loc_00136FD0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352713);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    ecx = esi + 8;
    MEM32(esp + 0x10) = 1;
    PUSH32(esp, 0x00136FFDu); RECOMP_ABI_CALL(0x00134690u, sub_00134690); /* call 0x00134690 */

loc_00136FFD: ;
    ecx = esi + 4;
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x0013700Au); RECOMP_ABI_CALL(0x00132FC0u, sub_00132FC0); /* call 0x00132FC0 */

loc_0013700A: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x3DC1E4;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00137020
 * Original: 0x00137020 - 0x0013703E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00137020: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00137028u); RECOMP_ABI_CALL(0x00135A40u, sub_00135A40); /* call 0x00135A40 */

loc_00137028: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00137038; /* je: equal / zero */

loc_0013702F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00137035u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00137035: ;
    esp = esp + 4;

loc_00137038: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137040
 * Original: 0x00137040 - 0x001370A9 (105 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00137040: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3527F1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00137061u); RECOMP_ABI_CALL(0x001347B0u, sub_001347B0); /* call 0x001347B0 */

loc_00137061: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x2910;
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(edx) = MEM32(edx) | edi;
    edx = eax + eax * 2;
    ecx = esi + edx * 4;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    POP32(esp, edi);
    MEM32(esp + 0x14) = eax;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0013709A; /* je: equal / zero */

loc_00137095: ;
    PUSH32(esp, 0x0013709Au); RECOMP_ABI_CALL(0x001339F0u, sub_001339F0); /* call 0x001339F0 */

loc_0013709A: ;
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001370B0
 * Original: 0x001370B0 - 0x0013712F (127 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001370B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001370B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3527F1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001370D1u); RECOMP_ABI_CALL(0x00134820u, sub_00134820); /* call 0x00134820 */

loc_001370D1: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x2158;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    ecx = ecx | edi;
    eax = eax + esi;
    MEM32(edx) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    POP32(esp, edi);
    MEM32(esp + 0x14) = 0;
    POP32(esp, esi);
    if ((eax == 0)) goto loc_0013711E; /* je: equal / zero */

loc_00137108: ;
    ecx = eax;
    PUSH32(esp, 0x0013710Fu); RECOMP_ABI_CALL(0x00134D60u, sub_00134D60); /* call 0x00134D60 */

loc_0013710F: ;
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0013711E: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00137130
 * Original: 0x00137130 - 0x00137196 (102 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00137130: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3527F1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00137151u); RECOMP_ABI_CALL(0x00134890u, sub_00134890); /* call 0x00134890 */

loc_00137151: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x1550;
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(edx) = MEM32(edx) | edi;
    ecx = esi + eax * 8;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    POP32(esp, edi);
    MEM32(esp + 0x14) = eax;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00137187; /* je: equal / zero */

loc_00137182: ;
    PUSH32(esp, 0x00137187u); RECOMP_ABI_CALL(0x00135950u, sub_00135950); /* call 0x00135950 */

loc_00137187: ;
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001371A0
 * Original: 0x001371A0 - 0x0013721F (127 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001371A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001371A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3527F1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001371C1u); RECOMP_ABI_CALL(0x00134900u, sub_00134900); /* call 0x00134900 */

loc_001371C1: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x8E30;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    ecx = ecx | edi;
    eax = eax + esi;
    MEM32(edx) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    POP32(esp, edi);
    MEM32(esp + 0x14) = 0;
    POP32(esp, esi);
    if ((eax == 0)) goto loc_0013720E; /* je: equal / zero */

loc_001371F8: ;
    ecx = eax;
    PUSH32(esp, 0x001371FFu); RECOMP_ABI_CALL(0x00135610u, sub_00135610); /* call 0x00135610 */

loc_001371FF: ;
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0013720E: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00137220
 * Original: 0x00137220 - 0x001372A2 (130 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137220(void)
{
    int _flags = 0; /* fallback flag var */

loc_00137220: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3527F1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00137241u); RECOMP_ABI_CALL(0x00134970u, sub_00134970); /* call 0x00134970 */

loc_00137241: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x1480;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xA4);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    ecx = ecx | edi;
    eax = eax + esi;
    MEM32(edx) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    POP32(esp, edi);
    MEM32(esp + 0x14) = 0;
    POP32(esp, esi);
    if ((eax == 0)) goto loc_00137291; /* je: equal / zero */

loc_0013727B: ;
    ecx = eax;
    PUSH32(esp, 0x00137282u); RECOMP_ABI_CALL(0x001365A0u, sub_001365A0); /* call 0x001365A0 */

loc_00137282: ;
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00137291: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001372B0
 * Original: 0x001372B0 - 0x0013732F (127 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001372B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001372B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3527F1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001372D1u); RECOMP_ABI_CALL(0x001349D0u, sub_001349D0); /* call 0x001349D0 */

loc_001372D1: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x820;
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    eax = eax << 4;
    ecx = ecx | edi;
    eax = eax + esi;
    MEM32(edx) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    POP32(esp, edi);
    MEM32(esp + 0x14) = 0;
    POP32(esp, esi);
    if ((eax == 0)) goto loc_0013731E; /* je: equal / zero */

loc_00137308: ;
    ecx = eax;
    PUSH32(esp, 0x0013730Fu); RECOMP_ABI_CALL(0x00135770u, sub_00135770); /* call 0x00135770 */

loc_0013730F: ;
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0013731E: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00137330
 * Original: 0x00137330 - 0x001373C6 (150 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00137330: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3527F1);
    PUSH32(esp, eax);
    eax = ecx;
    MEM32(XBOX_FS_BASE) = esp;
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + ecx * 4 + 0xC);
    esp = esp - 8;
    PUSH32(esp, esi);
    ecx = edx;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    ecx = ecx << 2;
    PUSH32(esp, edi);
    MEM32(ecx + eax + 0x20) = MEM32(ecx + eax + 0x20) | esi;
    edi = MEM32(eax + 0x18);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    MEM32(eax + 0x18) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0013737E; /* jl: less (signed <) */

loc_00137377: ;
    MEM32(eax + 0x18) = 0;

loc_0013737E: ;
    MEM32(eax + 0x1C) = MEM32(eax + 0x1C) - 1;
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 0x24) = MEM32(eax + 0x24) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + eax + 8) = MEM32(ecx + eax + 8) | esi;
    ecx = eax + edx * 8;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, edi);
    MEM32(esp + 0x14) = 0;
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_001373B5; /* je: equal / zero */

loc_001373A1: ;
    PUSH32(esp, 0x001373A6u); RECOMP_ABI_CALL(0x00132D80u, sub_00132D80); /* call 0x00132D80 */

loc_001373A6: ;
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_001373B5: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001373D0
 * Original: 0x001373D0 - 0x00137472 (162 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001373D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001373D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    ecx = esi + 0x1700;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(esi + 0x180C) = edi;
    MEM32(esi + 0x1810) = edi;
    MEM32(esi + 0x1814) = edi;
    edx = 0; /* xor self */
    eax = esi + 0x1818;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    ecx = esi;
    MEM32(esi + 0x1820) = edi;
    PUSH32(esp, 0x0013740Fu); RECOMP_ABI_CALL(0x00134AB0u, sub_00134AB0); /* call 0x00134AB0 */

loc_0013740F: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x1924) = edi;
    MEM32(esi + 0x1928) = edi;
    ecx = 0x3F;
    edx = 0; /* xor self */

loc_00137424: ;
    eax = eax + eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    eax = eax | 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00137424; /* jne: not equal / not zero */

loc_00137430: ;
    MEM32(esi + 0x1924) = eax;
    MEM32(esi + 0x1928) = edx;
    eax = 0; /* xor self */
    edx = esi + 0x1824;
    goto loc_00137450;

    /* nop */
    /* nop */

loc_00137450: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x1928);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00137450; /* jl: less (signed <) */

loc_0013746D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00137480
 * Original: 0x00137480 - 0x001374DE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137480(void)
{

loc_00137480: ;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x2158;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(esi + 0x2480) = eax;
    MEM32(esi + 0x2484) = eax;
    MEM32(esi + 0x2488) = eax;
    edx = 0; /* xor self */
    ecx = esi + 0x248C;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x14) = edx;
    MEM32(ecx + 0x18) = edx;
    ecx = esi;
    MEM32(esi + 0x24A8) = eax;
    PUSH32(esp, 0x001374DAu); RECOMP_ABI_CALL(0x00135F40u, sub_00135F40); /* call 0x00135F40 */

loc_001374DA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001374E0
 * Original: 0x001374E0 - 0x00137532 (82 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001374E0(void)
{

loc_001374E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    ecx = esi + 0x820;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(esi + 0xA40) = eax;
    MEM32(esi + 0xA44) = eax;
    MEM32(esi + 0xA48) = eax;
    edx = 0; /* xor self */
    ecx = esi + 0xA4C;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = edx;
    ecx = esi;
    MEM32(esi + 0xA60) = eax;
    PUSH32(esp, 0x0013752Eu); RECOMP_ABI_CALL(0x001362E0u, sub_001362E0); /* call 0x001362E0 */

loc_0013752E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00137540
 * Original: 0x00137540 - 0x001375B3 (115 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137540(void)
{
    int _flags = 0; /* fallback flag var */

loc_00137540: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    ecx = ecx - esi;
    eax = 0xB21642C9u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((6) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    PUSH32(esp, edi);
    eax = eax + edx;
    edi = MEM32(esi + eax * 4 + 0x1824);
    edi = edi & MEM32(esi + 0x1924);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00137572u); RECOMP_ABI_CALL(0x00134B10u, sub_00134B10); /* call 0x00134B10 */

loc_00137572: ;
    ecx = MEM32(esi + 0x1928);
    eax = MEM32(esi + edi * 4 + 0x1824);
    edx = 1;
    edx = edx << LO8(ecx);
    eax = eax + edx;
    MEM32(esi + edi * 4 + 0x1824) = eax;
    if (((int32_t)eax >= 0)) goto loc_001375AE; /* jns: not sign (positive) */

loc_00137591: ;
    MEM32(esi + edi * 4 + 0x1824) = edi;
    ecx = MEM32(esi + 0x1928);
    eax = 1;
    eax = eax << LO8(ecx);
    eax = eax | edi;
    MEM32(esi + edi * 4 + 0x1824) = eax;

loc_001375AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001375C0
 * Original: 0x001375C0 - 0x00137665 (165 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001375C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001375C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ebx = 0; /* xor self */
    ecx = 0x1C;
    edi = esi + 0x2910;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0x3734) = ebx;
    MEM32(esi + 0x3738) = ebx;
    MEM32(esi + 0x373C) = ebx;
    ecx = 0x1C;
    edi = esi + 0x3740;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    MEM32(esi + 0x37B0) = ebx;
    PUSH32(esp, 0x00137602u); RECOMP_ABI_CALL(0x00135E40u, sub_00135E40); /* call 0x00135E40 */

loc_00137602: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x4564) = ebx;
    MEM32(esi + 0x4568) = ebx;
    ecx = 0x36B;
    edx = 0; /* xor self */

loc_00137617: ;
    eax = eax + eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    eax = eax | 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00137617; /* jne: not equal / not zero */

loc_00137623: ;
    MEM32(esi + 0x4564) = eax;
    MEM32(esi + 0x4568) = edx;
    eax = 0; /* xor self */
    edx = esi + 0x37B4;
    goto loc_00137640;

    /* nop */

loc_00137640: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x4568);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x36C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00137640; /* jl: less (signed <) */

loc_0013765F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00137670
 * Original: 0x00137670 - 0x001376D4 (100 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00137670: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00137679u); RECOMP_ABI_CALL(0x00137480u, sub_00137480); /* call 0x00137480 */

loc_00137679: ;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(esi + 0x27B4) = eax;
    MEM32(esi + 0x27B8) = eax;
    edx = 0xC1;
    edi = 0; /* xor self */

loc_00137690: ;
    ecx = ecx + ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    ecx = ecx | 1;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00137690; /* jne: not equal / not zero */

loc_0013769C: ;
    MEM32(esi + 0x27B4) = ecx;
    MEM32(esi + 0x27B8) = edi;
    edx = esi + 0x24AC;
    edi = edi;

loc_001376B0: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x27B8);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001376B0; /* jl: less (signed <) */

loc_001376CF: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001376E0
 * Original: 0x001376E0 - 0x00137785 (165 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001376E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001376E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ebx = 0; /* xor self */
    ecx = 0x16;
    edi = esi + 0x1550;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0x2054) = ebx;
    MEM32(esi + 0x2058) = ebx;
    MEM32(esi + 0x205C) = ebx;
    ecx = 0x16;
    edi = esi + 0x2060;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    MEM32(esi + 0x20B8) = ebx;
    PUSH32(esp, 0x00137722u); RECOMP_ABI_CALL(0x00136040u, sub_00136040); /* call 0x00136040 */

loc_00137722: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x2B64) = ebx;
    MEM32(esi + 0x2B68) = ebx;
    ecx = 0x2A9;
    edx = 0; /* xor self */

loc_00137737: ;
    eax = eax + eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    eax = eax | 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00137737; /* jne: not equal / not zero */

loc_00137743: ;
    MEM32(esi + 0x2B64) = eax;
    MEM32(esi + 0x2B68) = edx;
    eax = 0; /* xor self */
    edx = esi + 0x20BC;
    goto loc_00137760;

    /* nop */

loc_00137760: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x2B68);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2AA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2AA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00137760; /* jl: less (signed <) */

loc_0013777F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00137790
 * Original: 0x00137790 - 0x00137835 (165 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00137790: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ebx = 0; /* xor self */
    ecx = 0x15;
    edi = esi + 0x8E30;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0x98B0) = ebx;
    MEM32(esi + 0x98B4) = ebx;
    MEM32(esi + 0x98B8) = ebx;
    ecx = 0x15;
    edi = esi + 0x98BC;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    MEM32(esi + 0x9910) = ebx;
    PUSH32(esp, 0x001377D2u); RECOMP_ABI_CALL(0x00136140u, sub_00136140); /* call 0x00136140 */

loc_001377D2: ;
    eax = 0; /* xor self */
    MEM32(esi + 0xA33C) = ebx;
    MEM32(esi + 0xA340) = ebx;
    ecx = 0x289;
    edx = 0; /* xor self */

loc_001377E7: ;
    eax = eax + eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    eax = eax | 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001377E7; /* jne: not equal / not zero */

loc_001377F3: ;
    MEM32(esi + 0xA33C) = eax;
    MEM32(esi + 0xA340) = edx;
    eax = 0; /* xor self */
    edx = esi + 0x9914;
    goto loc_00137810;

    /* nop */

loc_00137810: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0xA340);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28A (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00137810; /* jl: less (signed <) */

loc_0013782F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00137840
 * Original: 0x00137840 - 0x001378D2 (146 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00137840: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(esi + 0x1480) = edi;
    MEM32(esi + 0x1508) = edi;
    MEM32(esi + 0x150C) = edi;
    MEM32(esi + 0x1510) = edi;
    MEM32(esi + 0x1514) = edi;
    MEM32(esi + 0x1518) = edi;
    PUSH32(esp, 0x0013786Fu); RECOMP_ABI_CALL(0x000B1A50u, sub_000B1A50); /* call 0x000B1A50 */

loc_0013786F: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x159C) = edi;
    MEM32(esi + 0x15A0) = edi;
    ecx = 0x1F;
    edx = 0; /* xor self */

loc_00137884: ;
    eax = eax + eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    eax = eax | 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00137884; /* jne: not equal / not zero */

loc_00137890: ;
    MEM32(esi + 0x159C) = eax;
    MEM32(esi + 0x15A0) = edx;
    eax = 0; /* xor self */
    edx = esi + 0x151C;
    goto loc_001378B0;

    /* nop */
    /* nop */

loc_001378B0: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x15A0);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001378B0; /* jl: less (signed <) */

loc_001378CD: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001378E0
 * Original: 0x001378E0 - 0x00137944 (100 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001378E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001378E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001378E9u); RECOMP_ABI_CALL(0x001374E0u, sub_001374E0); /* call 0x001374E0 */

loc_001378E9: ;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(esi + 0xC6C) = eax;
    MEM32(esi + 0xC70) = eax;
    edx = 0x81;
    edi = 0; /* xor self */

loc_00137900: ;
    ecx = ecx + ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    ecx = ecx | 1;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00137900; /* jne: not equal / not zero */

loc_0013790C: ;
    MEM32(esi + 0xC6C) = ecx;
    MEM32(esi + 0xC70) = edi;
    edx = esi + 0xA64;
    edi = edi;

loc_00137920: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0xC70);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x82 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00137920; /* jl: less (signed <) */

loc_0013793F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00137950
 * Original: 0x00137950 - 0x001379F5 (165 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00137950: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ebx = 0; /* xor self */
    ecx = 0x1C;
    edi = esi + 0x9690;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0xA4B4) = ebx;
    MEM32(esi + 0xA4B8) = ebx;
    MEM32(esi + 0xA4BC) = ebx;
    ecx = 0x1C;
    edi = esi + 0xA4C0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    MEM32(esi + 0xA530) = ebx;
    PUSH32(esp, 0x00137992u); RECOMP_ABI_CALL(0x001364A0u, sub_001364A0); /* call 0x001364A0 */

loc_00137992: ;
    eax = 0; /* xor self */
    MEM32(esi + 0xB2E4) = ebx;
    MEM32(esi + 0xB2E8) = ebx;
    ecx = 0x36B;
    edx = 0; /* xor self */

loc_001379A7: ;
    eax = eax + eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    eax = eax | 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001379A7; /* jne: not equal / not zero */

loc_001379B3: ;
    MEM32(esi + 0xB2E4) = eax;
    MEM32(esi + 0xB2E8) = edx;
    eax = 0; /* xor self */
    edx = esi + 0xA534;
    goto loc_001379D0;

    /* nop */

loc_001379D0: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0xB2E8);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x36C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001379D0; /* jl: less (signed <) */

loc_001379EF: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00137A00
 * Original: 0x00137A00 - 0x00137A5B (91 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137A00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00137A00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0xC);
    ecx = ecx - edi;
    eax = 0x2E8BA2E9;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    esi = edx;
    esi = esi >> 0x1F;
    esi = esi + edx;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00137A23u); RECOMP_ABI_CALL(0x00136510u, sub_00136510); /* call 0x00136510 */

loc_00137A23: ;
    ecx = MEM32(edi + 0xB2E8);
    eax = 1;
    eax = eax << LO8(ecx);
    MEM32(edi + esi * 4 + 0xA534) = MEM32(edi + esi * 4 + 0xA534) + eax;
    if (((int32_t)MEM32(edi + esi * 4 + 0xA534) >= 0)) goto loc_00137A56; /* jns: not sign (positive) */

loc_00137A39: ;
    MEM32(edi + esi * 4 + 0xA534) = esi;
    ecx = MEM32(edi + 0xB2E8);
    edx = 1;
    edx = edx << LO8(ecx);
    edx = edx | esi;
    MEM32(edi + esi * 4 + 0xA534) = edx;

loc_00137A56: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137A60
 * Original: 0x00137A60 - 0x00137A65 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137A60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00137A60: ;
    g_seh_ebp = ebp; sub_00133780(); return; /* tail jmp 0x00133780 */

}

/**
 * sub_00137A70
 * Original: 0x00137A70 - 0x00137AE0 (112 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137A70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00137A70: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    ecx = ecx - esi;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    PUSH32(esp, edi);
    eax = eax + edx;
    edi = MEM32(esi + eax * 4 + 0x37B4);
    edi = edi & MEM32(esi + 0x4564);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00137A9Fu); RECOMP_ABI_CALL(0x00135EB0u, sub_00135EB0); /* call 0x00135EB0 */

loc_00137A9F: ;
    ecx = MEM32(esi + 0x4568);
    eax = MEM32(esi + edi * 4 + 0x37B4);
    edx = 1;
    edx = edx << LO8(ecx);
    eax = eax + edx;
    MEM32(esi + edi * 4 + 0x37B4) = eax;
    if (((int32_t)eax >= 0)) goto loc_00137ADB; /* jns: not sign (positive) */

loc_00137ABE: ;
    MEM32(esi + edi * 4 + 0x37B4) = edi;
    ecx = MEM32(esi + 0x4568);
    eax = 1;
    eax = eax << LO8(ecx);
    eax = eax | edi;
    MEM32(esi + edi * 4 + 0x37B4) = eax;

loc_00137ADB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137AE0
 * Original: 0x00137AE0 - 0x00137B51 (113 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137AE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00137AE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    ecx = ecx - esi;
    eax = 0x2E8BA2E9;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    PUSH32(esp, edi);
    eax = eax + edx;
    edi = MEM32(esi + eax * 4 + 0x24AC);
    edi = edi & MEM32(esi + 0x27B4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00137B10u); RECOMP_ABI_CALL(0x00135FB0u, sub_00135FB0); /* call 0x00135FB0 */

loc_00137B10: ;
    ecx = MEM32(esi + 0x27B8);
    eax = MEM32(esi + edi * 4 + 0x24AC);
    edx = 1;
    edx = edx << LO8(ecx);
    eax = eax + edx;
    MEM32(esi + edi * 4 + 0x24AC) = eax;
    if (((int32_t)eax >= 0)) goto loc_00137B4C; /* jns: not sign (positive) */

loc_00137B2F: ;
    MEM32(esi + edi * 4 + 0x24AC) = edi;
    ecx = MEM32(esi + 0x27B8);
    eax = 1;
    eax = eax << LO8(ecx);
    eax = eax | edi;
    MEM32(esi + edi * 4 + 0x24AC) = eax;

loc_00137B4C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137B60
 * Original: 0x00137B60 - 0x00137BC3 (99 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137B60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00137B60: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0x2B64);
    eax = eax - esi;
    PUSH32(esp, edi);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    edi = MEM32(esi + eax * 4 + 0x20BC);
    edi = edi & edx;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00137B82u); RECOMP_ABI_CALL(0x001360B0u, sub_001360B0); /* call 0x001360B0 */

loc_00137B82: ;
    ecx = MEM32(esi + 0x2B68);
    eax = MEM32(esi + edi * 4 + 0x20BC);
    edx = 1;
    edx = edx << LO8(ecx);
    eax = eax + edx;
    MEM32(esi + edi * 4 + 0x20BC) = eax;
    if (((int32_t)eax >= 0)) goto loc_00137BBE; /* jns: not sign (positive) */

loc_00137BA1: ;
    MEM32(esi + edi * 4 + 0x20BC) = edi;
    ecx = MEM32(esi + 0x2B68);
    eax = 1;
    eax = eax << LO8(ecx);
    eax = eax | edi;
    MEM32(esi + edi * 4 + 0x20BC) = eax;

loc_00137BBE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137BD0
 * Original: 0x00137BD0 - 0x00137C43 (115 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137BD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00137BD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    ecx = ecx - esi;
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    PUSH32(esp, edi);
    eax = eax + edx;
    edi = MEM32(esi + eax * 4 + 0x9914);
    edi = edi & MEM32(esi + 0xA33C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00137C02u); RECOMP_ABI_CALL(0x001361B0u, sub_001361B0); /* call 0x001361B0 */

loc_00137C02: ;
    ecx = MEM32(esi + 0xA340);
    eax = MEM32(esi + edi * 4 + 0x9914);
    edx = 1;
    edx = edx << LO8(ecx);
    eax = eax + edx;
    MEM32(esi + edi * 4 + 0x9914) = eax;
    if (((int32_t)eax >= 0)) goto loc_00137C3E; /* jns: not sign (positive) */

loc_00137C21: ;
    MEM32(esi + edi * 4 + 0x9914) = edi;
    ecx = MEM32(esi + 0xA340);
    eax = 1;
    eax = eax << LO8(ecx);
    eax = eax | edi;
    MEM32(esi + edi * 4 + 0x9914) = eax;

loc_00137C3E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137C50
 * Original: 0x00137C50 - 0x00137CC1 (113 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137C50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00137C50: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    ecx = ecx - esi;
    eax = 0x63E7063F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((6) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    PUSH32(esp, edi);
    eax = eax + edx;
    edi = MEM32(esi + eax * 4 + 0x151C);
    edi = edi & MEM32(esi + 0x159C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00137C80u); RECOMP_ABI_CALL(0x00136240u, sub_00136240); /* call 0x00136240 */

loc_00137C80: ;
    ecx = MEM32(esi + 0x15A0);
    eax = MEM32(esi + edi * 4 + 0x151C);
    edx = 1;
    edx = edx << LO8(ecx);
    eax = eax + edx;
    MEM32(esi + edi * 4 + 0x151C) = eax;
    if (((int32_t)eax >= 0)) goto loc_00137CBC; /* jns: not sign (positive) */

loc_00137C9F: ;
    MEM32(esi + edi * 4 + 0x151C) = edi;
    ecx = MEM32(esi + 0x15A0);
    eax = 1;
    eax = eax << LO8(ecx);
    eax = eax | edi;
    MEM32(esi + edi * 4 + 0x151C) = eax;

loc_00137CBC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137CD0
 * Original: 0x00137CD0 - 0x00137D33 (99 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137CD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00137CD0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0xC6C);
    eax = eax - esi;
    PUSH32(esp, edi);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    edi = MEM32(esi + eax * 4 + 0xA64);
    edi = edi & edx;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00137CF2u); RECOMP_ABI_CALL(0x00136350u, sub_00136350); /* call 0x00136350 */

loc_00137CF2: ;
    ecx = MEM32(esi + 0xC70);
    eax = MEM32(esi + edi * 4 + 0xA64);
    edx = 1;
    edx = edx << LO8(ecx);
    eax = eax + edx;
    MEM32(esi + edi * 4 + 0xA64) = eax;
    if (((int32_t)eax >= 0)) goto loc_00137D2E; /* jns: not sign (positive) */

loc_00137D11: ;
    MEM32(esi + edi * 4 + 0xA64) = edi;
    ecx = MEM32(esi + 0xC70);
    eax = 1;
    eax = eax << LO8(ecx);
    eax = eax | edi;
    MEM32(esi + edi * 4 + 0xA64) = eax;

loc_00137D2E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137D40
 * Original: 0x00137D40 - 0x00137D94 (84 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137D40(void)
{

loc_00137D40: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352733);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3DC494;
    MEM32(esp + 0x10) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3DC4A4); PUSH32(esp, 0x00137D71u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00137D71: ;
    ecx = esi + 4;
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x00137D7Eu); RECOMP_ABI_CALL(0x00133780u, sub_00133780); /* call 0x00133780 */

loc_00137D7E: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x3DC254;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00137DA0
 * Original: 0x00137DA0 - 0x00137DA7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137DA0(void)
{

loc_00137DA0: ;
    eax = MEM32(ecx + 0xA534);
    esp += 4; return; /* ret */

}

/**
 * sub_00137DB0
 * Original: 0x00137DB0 - 0x00137DC2 (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00137DB0: ;
    edx = MEM32(ecx + 0xA534);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x36C (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00137DD0
 * Original: 0x00137DD0 - 0x00137DD8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137DD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00137DD0: ;
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_00137DE0(); return; /* tail jmp 0x00137DE0 */

}

/**
 * sub_00137DE0
 * Original: 0x00137DE0 - 0x00137E35 (85 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00137DE0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00137E2E; /* je: equal / zero */

loc_00137DEC: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    ecx = eax;
    eax = 0x2E8BA2E9;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    if (((3) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((3) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    esi = edx;
    if (0x1F) _cf = (int)(((esi) >> ((0x1F) - 1)) & 1);
    esi = esi >> 0x1F;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(edx)) >> 32) & 1);
    esi = esi + edx;
    if (((int32_t)esi < 0)) goto loc_00137E2E; /* js: sign (negative) */

loc_00137E03: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x36C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00137E2E; /* jge: greater or equal (signed >=) */

loc_00137E0B: ;
    ecx = esi;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    eax = 1;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(esi)) >> ((((5) & 31u)) - 1)) & 1);
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((5) & 31u));
    ecx = MEM32(edi + esi * 4 + 0xA4C0);
    POP32(esp, edi);
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00137E2E: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137E40
 * Original: 0x00137E40 - 0x00137E64 (36 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00137E40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + 4;
    ecx = edi;
    PUSH32(esp, 0x00137E4Cu); RECOMP_ABI_CALL(0x00137E70u, sub_00137E70); /* call 0x00137E70 */

loc_00137E4C: ;
    esi = 0; /* xor self */
    edi = edi;

loc_00137E50: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00137E58u); RECOMP_ABI_CALL(0x00132D40u, sub_00132D40); /* call 0x00132D40 */

loc_00137E58: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x36C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00137E50; /* jl: less (signed <) */

loc_00137E61: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00137E70
 * Original: 0x00137E70 - 0x00137E9D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137E70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00137E70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    MEM32(esi + 0xA530) = 0;
    ecx = 0x1C;
    edi = esi + 0xA4C0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    PUSH32(esp, 0x00137E94u); RECOMP_ABI_CALL(0x00133780u, sub_00133780); /* call 0x00133780 */

loc_00137E94: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001364A0(); return; /* tail jmp 0x001364A0 */

}

/**
 * sub_00137EA0
 * Original: 0x00137EA0 - 0x00137EA5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137EA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00137EA0: ;
    g_seh_ebp = ebp; sub_00133160(); return; /* tail jmp 0x00133160 */

}

/**
 * sub_00137EB0
 * Original: 0x00137EB0 - 0x00137EB5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137EB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00137EB0: ;
    g_seh_ebp = ebp; sub_00133200(); return; /* tail jmp 0x00133200 */

}

/**
 * sub_00137EC0
 * Original: 0x00137EC0 - 0x00137EC5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137EC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00137EC0: ;
    g_seh_ebp = ebp; sub_001332B0(); return; /* tail jmp 0x001332B0 */

}

/**
 * sub_00137ED0
 * Original: 0x00137ED0 - 0x00137ED5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137ED0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00137ED0: ;
    g_seh_ebp = ebp; sub_00133350(); return; /* tail jmp 0x00133350 */

}

/**
 * sub_00137EE0
 * Original: 0x00137EE0 - 0x00137EE5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137EE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00137EE0: ;
    g_seh_ebp = ebp; sub_001333F0(); return; /* tail jmp 0x001333F0 */

}

/**
 * sub_00137EF0
 * Original: 0x00137EF0 - 0x00137EF5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137EF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00137EF0: ;
    g_seh_ebp = ebp; sub_001334F0(); return; /* tail jmp 0x001334F0 */

}

/**
 * sub_00137F00
 * Original: 0x00137F00 - 0x00137F05 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137F00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00137F00: ;
    g_seh_ebp = ebp; sub_001335A0(); return; /* tail jmp 0x001335A0 */

}

/**
 * sub_00137F10
 * Original: 0x00137F10 - 0x00137F15 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137F10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00137F10: ;
    g_seh_ebp = ebp; sub_001336A0(); return; /* tail jmp 0x001336A0 */

}

/**
 * sub_00137F20
 * Original: 0x00137F20 - 0x00137F3E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00137F20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00137F28u); RECOMP_ABI_CALL(0x00137D40u, sub_00137D40); /* call 0x00137D40 */

loc_00137F28: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00137F38; /* je: equal / zero */

loc_00137F2F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00137F35u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00137F35: ;
    esp = esp + 4;

loc_00137F38: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137F40
 * Original: 0x00137F40 - 0x00137FDE (158 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137F40(void)
{

loc_00137F40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00137F4Au); RECOMP_ABI_CALL(0x001375C0u, sub_001375C0); /* call 0x001375C0 */

loc_00137F4A: ;
    ecx = edi + 0x456C;
    PUSH32(esp, 0x00137F55u); RECOMP_ABI_CALL(0x00137670u, sub_00137670); /* call 0x00137670 */

loc_00137F55: ;
    ecx = edi + 0x6D28;
    PUSH32(esp, 0x00137F60u); RECOMP_ABI_CALL(0x001376E0u, sub_001376E0); /* call 0x001376E0 */

loc_00137F60: ;
    ecx = edi + 0x9894;
    PUSH32(esp, 0x00137F6Bu); RECOMP_ABI_CALL(0x00137790u, sub_00137790); /* call 0x00137790 */

loc_00137F6B: ;
    ecx = edi + 0x13BD8;
    PUSH32(esp, 0x00137F76u); RECOMP_ABI_CALL(0x00137840u, sub_00137840); /* call 0x00137840 */

loc_00137F76: ;
    ecx = edi + 0x1517C;
    PUSH32(esp, 0x00137F81u); RECOMP_ABI_CALL(0x001378E0u, sub_001378E0); /* call 0x001378E0 */

loc_00137F81: ;
    ecx = edi + 0x15DF0;
    PUSH32(esp, 0x00137F8Cu); RECOMP_ABI_CALL(0x001373D0u, sub_001373D0); /* call 0x001373D0 */

loc_00137F8C: ;
    esi = edi + 0x1771C;
    ebx = 0; /* xor self */
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    ecx = esi;
    MEM32(esi + 0x24) = ebx;
    PUSH32(esp, 0x00137FADu); RECOMP_ABI_CALL(0x001363E0u, sub_001363E0); /* call 0x001363E0 */

loc_00137FAD: ;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x28) = ebx;
    ecx = MEM32(esi + 0x30);
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = edi + 0x17754;
    MEM32(esi + 0x28) = eax;
    MEM32(edi + 0x17750) = 0x3DC494;
    PUSH32(esp, 0x00137FD8u); RECOMP_ABI_CALL(0x00137950u, sub_00137950); /* call 0x00137950 */

loc_00137FD8: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00137FE0
 * Original: 0x00137FE0 - 0x0013809F (191 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137FE0(void)
{

loc_00137FE0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3527AA);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    ecx = esi + 0x17750;
    MEM32(esp + 0x10) = 7;
    PUSH32(esp, 0x00138010u); RECOMP_ABI_CALL(0x00137D40u, sub_00137D40); /* call 0x00137D40 */

loc_00138010: ;
    ecx = esi + 0x1771C;
    MEM8(esp + 0x10) = 6;
    PUSH32(esp, 0x00138020u); RECOMP_ABI_CALL(0x001336A0u, sub_001336A0); /* call 0x001336A0 */

loc_00138020: ;
    ecx = esi + 0x15DF0;
    MEM8(esp + 0x10) = 5;
    PUSH32(esp, 0x00138030u); RECOMP_ABI_CALL(0x001335A0u, sub_001335A0); /* call 0x001335A0 */

loc_00138030: ;
    ecx = esi + 0x1517C;
    MEM8(esp + 0x10) = 4;
    PUSH32(esp, 0x00138040u); RECOMP_ABI_CALL(0x001334F0u, sub_001334F0); /* call 0x001334F0 */

loc_00138040: ;
    ecx = esi + 0x13BD8;
    MEM8(esp + 0x10) = 3;
    PUSH32(esp, 0x00138050u); RECOMP_ABI_CALL(0x001333F0u, sub_001333F0); /* call 0x001333F0 */

loc_00138050: ;
    ecx = esi + 0x9894;
    MEM8(esp + 0x10) = 2;
    PUSH32(esp, 0x00138060u); RECOMP_ABI_CALL(0x00133350u, sub_00133350); /* call 0x00133350 */

loc_00138060: ;
    ecx = esi + 0x6D28;
    MEM8(esp + 0x10) = 1;
    PUSH32(esp, 0x00138070u); RECOMP_ABI_CALL(0x001332B0u, sub_001332B0); /* call 0x001332B0 */

loc_00138070: ;
    ecx = esi + 0x456C;
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x00138080u); RECOMP_ABI_CALL(0x00133200u, sub_00133200); /* call 0x00133200 */

loc_00138080: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0013808Fu); RECOMP_ABI_CALL(0x00133160u, sub_00133160); /* call 0x00133160 */

loc_0013808F: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001380A0
 * Original: 0x001380A0 - 0x001380DA (58 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001380A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001380A0: ;
    SET_LO8(ecx, MEM8(0x546060));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001380D4; /* jne: not equal / not zero */

loc_001380AF: ;
    edx = MEM32(0x546060);
    edx = edx | eax;
    ecx = 0x523620;
    MEM32(0x546060) = edx;
    PUSH32(esp, 0x001380C7u); RECOMP_ABI_CALL(0x00137F40u, sub_00137F40); /* call 0x00137F40 */

loc_001380C7: ;
    PUSH32(esp, 0x35A3A0);
    PUSH32(esp, 0x001380D1u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_001380D1: ;
    esp = esp + 4;

loc_001380D4: ;
    eax = 0x523620;
    esp += 4; return; /* ret */

}

/**
 * sub_001380E0
 * Original: 0x001380E0 - 0x001380F6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001380E0(void)
{

loc_001380E0: ;
    PUSH32(esp, 0x001380E5u); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_001380E5: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = eax + 0x15DF0;
    PUSH32(esp, 0x001380F5u); RECOMP_ABI_CALL(0x00137540u, sub_00137540); /* call 0x00137540 */

loc_001380F5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00138100
 * Original: 0x00138100 - 0x00138159 (89 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138100(void)
{
    int _flags = 0; /* fallback flag var */

loc_00138100: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00138107u); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_00138107: ;
    esi = eax;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esi + 0x17748);
    esi = esi + 0x1771C;
    eax = eax - esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    edi = MEM32(esi + eax * 4 + 0x28);
    edi = edi & edx;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0013812Cu); RECOMP_ABI_CALL(0x00136420u, sub_00136420); /* call 0x00136420 */

loc_0013812C: ;
    ecx = MEM32(esi + 0x30);
    eax = MEM32(esi + edi * 4 + 0x28);
    edx = 1;
    edx = edx << LO8(ecx);
    eax = eax + edx;
    MEM32(esi + edi * 4 + 0x28) = eax;
    if (((int32_t)eax >= 0)) goto loc_00138156; /* jns: not sign (positive) */

loc_00138142: ;
    MEM32(esi + edi * 4 + 0x28) = edi;
    ecx = MEM32(esi + 0x30);
    eax = 1;
    eax = eax << LO8(ecx);
    eax = eax | edi;
    MEM32(esi + edi * 4 + 0x28) = eax;

loc_00138156: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00138160
 * Original: 0x00138160 - 0x0013823A (218 bytes, 57 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138160(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00138160: ;
    PUSH32(esp, 0x00138165u); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_00138165: ;
    ecx = eax + 0x17750;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00138170u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00138170: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00138177; /* je: equal / zero */

loc_00138174: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

loc_00138177: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO8(ebx, 1);
    esi = 0; /* xor self */

loc_00138182: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00138234; /* jge: greater or equal (signed >=) */

loc_0013818B: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00138193u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00138193: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0013822B; /* jl: less (signed <) */

loc_0013819B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0013822B; /* ja: above (unsigned >) */

loc_001381A4: ;
    { uint32_t _jt = MEM32(esi * 4 + 0x13823C); /* switch: 8 entries, 8 targets */
    if (_jt == 0x001381ABu) goto loc_001381AB;
    if (_jt == 0x001381BCu) goto loc_001381BC;
    if (_jt == 0x001381CDu) goto loc_001381CD;
    if (_jt == 0x001381DEu) goto loc_001381DE;
    if (_jt == 0x001381EFu) goto loc_001381EF;
    if (_jt == 0x001381FDu) goto loc_001381FD;
    if (_jt == 0x0013820Eu) goto loc_0013820E;
    if (_jt == 0x0013821Cu) goto loc_0013821C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001381AB: ;
    PUSH32(esp, 0x001381B0u); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_001381B0: ;
    _fa = (uint32_t)(MEM32(eax + 0x37B0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x37B0), 0x36C (32-bit) */
    goto loc_00138228;

loc_001381BC: ;
    PUSH32(esp, 0x001381C1u); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_001381C1: ;
    _fa = (uint32_t)(MEM32(eax + 0x6A14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x6A14), 0xC2 (32-bit) */
    goto loc_00138228;

loc_001381CD: ;
    PUSH32(esp, 0x001381D2u); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_001381D2: ;
    _fa = (uint32_t)(MEM32(eax + 0x8DE0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2AA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x8DE0), 0x2AA (32-bit) */
    goto loc_00138228;

loc_001381DE: ;
    PUSH32(esp, 0x001381E3u); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_001381E3: ;
    _fa = (uint32_t)(MEM32(eax + 0x131A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x131A4), 0x28A (32-bit) */
    goto loc_00138228;

loc_001381EF: ;
    PUSH32(esp, 0x001381F4u); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_001381F4: ;
    _fa = (uint32_t)(MEM32(eax + 0x150F0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x150F0), 0x20 (32-bit) */
    goto loc_00138228;

loc_001381FD: ;
    PUSH32(esp, 0x00138202u); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_00138202: ;
    _fa = (uint32_t)(MEM32(eax + 0x15BDC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x15BDC), 0x82 (32-bit) */
    goto loc_00138228;

loc_0013820E: ;
    PUSH32(esp, 0x00138213u); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_00138213: ;
    _fa = (uint32_t)(MEM32(eax + 0x17610)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x17610), 0x40 (32-bit) */
    goto loc_00138228;

loc_0013821C: ;
    PUSH32(esp, 0x00138221u); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_00138221: ;
    _fa = (uint32_t)(MEM32(eax + 0x17740)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x17740), 1 (32-bit) */

loc_00138228: ;
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */

loc_0013822B: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00138182; /* jne: not equal / not zero */

loc_00138234: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013823A
 * Original: 0x0013823A - 0x00138260 (38 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013823A(void)
{
    int _cf = 0; /* carry flag */

loc_0013823A: ;
    edi = edi;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    { uint64_t _t = (uint64_t)(MEM32(ebx)) + (uint64_t)(0x1381BC00) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebx) = (uint32_t)_t; }  /* adc */
    _cf = (int)((((uint64_t)(HI8(ecx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_HI8(ecx, HI8(ecx) + LO8(ecx));
    { uint64_t _t = (uint64_t)(MEM32(ebx)) + (uint64_t)(0x1381DE00) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebx) = (uint32_t)_t; }  /* adc */
    _cf = (int)((((uint64_t)(HI8(ebx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    SET_HI8(ebx, HI8(ebx) + HI8(ecx));
    { uint64_t _t = (uint64_t)(MEM32(ebx)) + (uint64_t)(0x1381FD00) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebx) = (uint32_t)_t; }  /* adc */
    _cf = (int)((((uint64_t)(MEM8(esi)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esi) = MEM8(esi) + LO8(ecx);
    { uint64_t _t = (uint64_t)(MEM8(ebx)) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(ebx) = (uint32_t)_t; }  /* adc */
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(0x82) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(MEM32(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00138260
 * Original: 0x00138260 - 0x001383D3 (371 bytes, 107 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138260(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00138260: ;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00138269u); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_00138269: ;
    ecx = MEM32(eax + 0x21C84);
    ebx = 0x36C;
    ebx = ebx - ecx;
    ecx = esp + 4;
    PUSH32(esp, 0x0013827Fu); RECOMP_ABI_CALL(0x000C1670u, sub_000C1670); /* call 0x000C1670 */

loc_0013827F: ;
    ecx = ecx | 0xFFFFFFFFu;
    eax = 8;
    PUSH32(esp, esi);
    goto loc_00138290;

    /* nop */

loc_00138290: ;
    edx = MEM32(esp + 0x2C);
    MEM32(esp + edx * 4 + 8) = ecx;
    esi = MEM32(esp + 0x2C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x2C) = esi;
    if ((_fa != 0)) goto loc_00138290; /* jne: not equal / not zero */

loc_001382A4: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x38);
    esi = 0; /* xor self */
    goto loc_001382B0;

    /* nop */

loc_001382B0: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001382B8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001382B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00138394; /* jl: less (signed <) */

loc_001382C0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00138394; /* ja: above (unsigned >) */

loc_001382C9: ;
    { uint32_t _jt = MEM32(esi * 4 + 0x1383D4); /* switch: 8 entries, 8 targets */
    if (_jt == 0x001382D0u) goto loc_001382D0;
    if (_jt == 0x001382EBu) goto loc_001382EB;
    if (_jt == 0x00138306u) goto loc_00138306;
    if (_jt == 0x0013831Eu) goto loc_0013831E;
    if (_jt == 0x00138336u) goto loc_00138336;
    if (_jt == 0x0013834Eu) goto loc_0013834E;
    if (_jt == 0x00138366u) goto loc_00138366;
    if (_jt == 0x0013837Eu) goto loc_0013837E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001382D0: ;
    PUSH32(esp, 0x001382D5u); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_001382D5: ;
    edx = MEM32(eax + 0x37B0);
    ecx = 0x36C;
    ecx = ecx - edx;
    MEM32(esp + 0xC) = ecx;
    goto loc_00138394;

loc_001382EB: ;
    PUSH32(esp, 0x001382F0u); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_001382F0: ;
    ecx = MEM32(eax + 0x6A14);
    edx = 0xC2;
    edx = edx - ecx;
    MEM32(esp + 0x10) = edx;
    goto loc_00138394;

loc_00138306: ;
    PUSH32(esp, 0x0013830Bu); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_0013830B: ;
    edx = MEM32(eax + 0x8DE0);
    ecx = 0x2AA;
    ecx = ecx - edx;
    MEM32(esp + 0x14) = ecx;
    goto loc_00138394;

loc_0013831E: ;
    PUSH32(esp, 0x00138323u); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_00138323: ;
    ecx = MEM32(eax + 0x131A4);
    edx = 0x28A;
    edx = edx - ecx;
    MEM32(esp + 0x18) = edx;
    goto loc_00138394;

loc_00138336: ;
    PUSH32(esp, 0x0013833Bu); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_0013833B: ;
    edx = MEM32(eax + 0x150F0);
    ecx = 0x20;
    ecx = ecx - edx;
    MEM32(esp + 0x1C) = ecx;
    goto loc_00138394;

loc_0013834E: ;
    PUSH32(esp, 0x00138353u); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_00138353: ;
    ecx = MEM32(eax + 0x15BDC);
    edx = 0x82;
    edx = edx - ecx;
    MEM32(esp + 0x20) = edx;
    goto loc_00138394;

loc_00138366: ;
    PUSH32(esp, 0x0013836Bu); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_0013836B: ;
    edx = MEM32(eax + 0x17610);
    ecx = 0x40;
    ecx = ecx - edx;
    MEM32(esp + 0x24) = ecx;
    goto loc_00138394;

loc_0013837E: ;
    PUSH32(esp, 0x00138383u); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_00138383: ;
    ecx = MEM32(eax + 0x17740);
    edx = 1;
    edx = edx - ecx;
    MEM32(esp + 0x28) = edx;

loc_00138394: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001382B0; /* jl: less (signed <) */

loc_0013839E: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x001383A7u); RECOMP_ABI_CALL(0x000FB660u, sub_000FB660); /* call 0x000FB660 */

loc_001383A7: ;
    edx = MEM32(esp + 0x30);
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    POP32(esp, edi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001383C7; /* jle: less or equal (signed <=) */

loc_001383B4: ;
    esi = MEM32(esp + ecx * 4 + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001383C3; /* jge: greater or equal (signed >=) */

loc_001383BC: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001383B4; /* jl: less (signed <) */

loc_001383C1: ;
    goto loc_001383C7;

loc_001383C3: ;
    eax = MEM32(esp + ecx * 4 + 8);

loc_001383C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_001383CE; /* jl: less (signed <) */

loc_001383CC: ;
    eax = ebx;

loc_001383CE: ;
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_00138400
 * Original: 0x00138400 - 0x00138424 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138400: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00138406u); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_00138406: ;
    esi = MEM32(esp + 8);
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013841C; /* je: equal / zero */

loc_00138410: ;
    PUSH32(esp, ecx);
    ecx = eax + 0x17754;
    PUSH32(esp, 0x0013841Cu); RECOMP_ABI_CALL(0x00137A00u, sub_00137A00); /* call 0x00137A00 */

loc_0013841C: ;
    MEM32(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00138430
 * Original: 0x00138430 - 0x0013851F (239 bytes, 70 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138430(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00138430: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0013843Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013843E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0013845A; /* jle: less or equal (signed <=) */

loc_00138442: ;
    ebx = esi + 8;

loc_00138445: ;
    MEM32(ebx) = 0;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00138456u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00138456: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00138445; /* jl: less (signed <) */

loc_0013845A: ;
    ebx = 0; /* xor self */
    /* nop */

loc_00138460: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00138469u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00138469: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00138511; /* jl: less (signed <) */

loc_00138473: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00138511; /* ja: above (unsigned >) */

loc_0013847C: ;
    { uint32_t _jt = MEM32(ebx * 4 + 0x138520); /* switch: 8 entries, 8 targets */
    if (_jt == 0x00138483u) goto loc_00138483;
    if (_jt == 0x00138491u) goto loc_00138491;
    if (_jt == 0x001384A3u) goto loc_001384A3;
    if (_jt == 0x001384B5u) goto loc_001384B5;
    if (_jt == 0x001384C7u) goto loc_001384C7;
    if (_jt == 0x001384D9u) goto loc_001384D9;
    if (_jt == 0x001384EBu) goto loc_001384EB;
    if (_jt == 0x001384FDu) goto loc_001384FD;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00138483: ;
    PUSH32(esp, 0x00138488u); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_00138488: ;
    ecx = eax;
    PUSH32(esp, 0x0013848Fu); RECOMP_ABI_CALL(0x00137040u, sub_00137040); /* call 0x00137040 */

loc_0013848F: ;
    goto loc_0013850D;

loc_00138491: ;
    PUSH32(esp, 0x00138496u); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_00138496: ;
    ecx = eax + 0x456C;
    PUSH32(esp, 0x001384A1u); RECOMP_ABI_CALL(0x001370B0u, sub_001370B0); /* call 0x001370B0 */

loc_001384A1: ;
    goto loc_0013850D;

loc_001384A3: ;
    PUSH32(esp, 0x001384A8u); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_001384A8: ;
    ecx = eax + 0x6D28;
    PUSH32(esp, 0x001384B3u); RECOMP_ABI_CALL(0x00137130u, sub_00137130); /* call 0x00137130 */

loc_001384B3: ;
    goto loc_0013850D;

loc_001384B5: ;
    PUSH32(esp, 0x001384BAu); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_001384BA: ;
    ecx = eax + 0x9894;
    PUSH32(esp, 0x001384C5u); RECOMP_ABI_CALL(0x001371A0u, sub_001371A0); /* call 0x001371A0 */

loc_001384C5: ;
    goto loc_0013850D;

loc_001384C7: ;
    PUSH32(esp, 0x001384CCu); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_001384CC: ;
    ecx = eax + 0x13BD8;
    PUSH32(esp, 0x001384D7u); RECOMP_ABI_CALL(0x00137220u, sub_00137220); /* call 0x00137220 */

loc_001384D7: ;
    goto loc_0013850D;

loc_001384D9: ;
    PUSH32(esp, 0x001384DEu); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_001384DE: ;
    ecx = eax + 0x1517C;
    PUSH32(esp, 0x001384E9u); RECOMP_ABI_CALL(0x001372B0u, sub_001372B0); /* call 0x001372B0 */

loc_001384E9: ;
    goto loc_0013850D;

loc_001384EB: ;
    PUSH32(esp, 0x001384F0u); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_001384F0: ;
    ecx = eax + 0x15DF0;
    PUSH32(esp, 0x001384FBu); RECOMP_ABI_CALL(0x00135DC0u, sub_00135DC0); /* call 0x00135DC0 */

loc_001384FB: ;
    goto loc_0013850D;

loc_001384FD: ;
    PUSH32(esp, 0x00138502u); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_00138502: ;
    ecx = eax + 0x1771C;
    PUSH32(esp, 0x0013850Du); RECOMP_ABI_CALL(0x00137330u, sub_00137330); /* call 0x00137330 */

loc_0013850D: ;
    MEM32(esi + edi * 4 + 8) = eax;

loc_00138511: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00138460; /* jl: less (signed <) */

loc_0013851B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00138540
 * Original: 0x00138540 - 0x0013862D (237 bytes, 85 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00138540(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138540: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3527D3);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = esi;
    edi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    MEM32(esi) = 0x3DC374;
    MEM32(esi + 4) = edi;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esp + 0x34) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM8(esp + 0x34) = 1;
    MEM8(esi + 0x24) = LO8(ebx);
    MEM32(esi + 0x28) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013858Fu); RECOMP_ABI_CALL(0x00138430u, sub_00138430); /* call 0x00138430 */

loc_0013858F: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    MEM32(esp + 0x10) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0013859Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013859A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001385F7; /* jle: less or equal (signed <=) */

loc_0013859F: ;
    edi = esi + 0xC;

loc_001385A2: ;
    ecx = MEM32(edi + -4);
    eax = esp + 0x20;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = ebx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001385B7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001385B7: ;
    ecx = MEM32(edi);
    eax = esp + 0x18;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = ebx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001385CBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001385CB: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001385DD; /* je: equal / zero */

loc_001385D3: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001385DDu); RECOMP_ABI_CALL(0x00259CC0u, sub_00259CC0); /* call 0x00259CC0 */

loc_001385DD: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    edi = edi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001385EBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001385EB: ;
    ecx = MEM32(esp + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001385A2; /* jl: less (signed <) */

loc_001385F4: ;
    edi = MEM32(ebp + 8);

loc_001385F7: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    edx = esi + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00138603u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00138603: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0013860Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013860C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00138617; /* jl: less (signed <) */

loc_00138610: ;
    ecx = MEM32(esi + eax * 4 + 8);
    MEM32(esi + 0x28) = ecx;

loc_00138617: ;
    ecx = MEM32(esp + 0x2C);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00138630
 * Original: 0x00138630 - 0x00138646 (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138630(void)
{

loc_00138630: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00138638u); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_00138638: ;
    PUSH32(esp, esi);
    ecx = eax + 0x13BD8;
    PUSH32(esp, 0x00138644u); RECOMP_ABI_CALL(0x00137C50u, sub_00137C50); /* call 0x00137C50 */

loc_00138644: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00138650
 * Original: 0x00138650 - 0x00138666 (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138650(void)
{

loc_00138650: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00138658u); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_00138658: ;
    PUSH32(esp, esi);
    ecx = eax + 0x456C;
    PUSH32(esp, 0x00138664u); RECOMP_ABI_CALL(0x00137AE0u, sub_00137AE0); /* call 0x00137AE0 */

loc_00138664: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00138670
 * Original: 0x00138670 - 0x00138678 (8 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138670(void)
{

loc_00138670: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00138676u); RECOMP_ABI_CALL(0x00138100u, sub_00138100); /* call 0x00138100 */

loc_00138676: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00138680
 * Original: 0x00138680 - 0x00138696 (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138680(void)
{

loc_00138680: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00138688u); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_00138688: ;
    PUSH32(esp, esi);
    ecx = eax + 0x9894;
    PUSH32(esp, 0x00138694u); RECOMP_ABI_CALL(0x00137BD0u, sub_00137BD0); /* call 0x00137BD0 */

loc_00138694: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001386A0
 * Original: 0x001386A0 - 0x001386B6 (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001386A0(void)
{

loc_001386A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001386A8u); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_001386A8: ;
    PUSH32(esp, esi);
    ecx = eax + 0x1517C;
    PUSH32(esp, 0x001386B4u); RECOMP_ABI_CALL(0x00137CD0u, sub_00137CD0); /* call 0x00137CD0 */

loc_001386B4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001386C0
 * Original: 0x001386C0 - 0x001386D2 (18 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001386C0(void)
{

loc_001386C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001386C8u); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_001386C8: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x001386D0u); RECOMP_ABI_CALL(0x00137A70u, sub_00137A70); /* call 0x00137A70 */

loc_001386D0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001386E0
 * Original: 0x001386E0 - 0x001386F6 (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001386E0(void)
{

loc_001386E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001386E8u); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_001386E8: ;
    PUSH32(esp, esi);
    ecx = eax + 0x6D28;
    PUSH32(esp, 0x001386F4u); RECOMP_ABI_CALL(0x00137B60u, sub_00137B60); /* call 0x00137B60 */

loc_001386F4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00138700
 * Original: 0x00138700 - 0x0013880A (266 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138700: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3527F1);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    PUSH32(esp, 0x00138726u); RECOMP_ABI_CALL(0x00138160u, sub_00138160); /* call 0x00138160 */

loc_00138726: ;
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001387F3; /* je: equal / zero */

loc_00138731: ;
    SET_LO8(eax, MEM8(0x546060));
    PUSH32(esp, ebx);
    ebx = 1;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00138765; /* jne: not equal / not zero */

loc_00138740: ;
    edx = MEM32(0x546060);
    edx = edx | ebx;
    ecx = 0x523620;
    MEM32(0x546060) = edx;
    PUSH32(esp, 0x00138758u); RECOMP_ABI_CALL(0x00137F40u, sub_00137F40); /* call 0x00137F40 */

loc_00138758: ;
    PUSH32(esp, 0x35A3A0);
    PUSH32(esp, 0x00138762u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00138762: ;
    esp = esp + 4;

loc_00138765: ;
    ecx = 0x53AD74;
    PUSH32(esp, 0x0013876Fu); RECOMP_ABI_CALL(0x00134A40u, sub_00134A40); /* call 0x00134A40 */

loc_0013876F: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = ecx * 4 + 0x544404;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    ecx = ecx & 0x1F;
    esi = ebx;
    esi = esi << LO8(ecx);
    ecx = MEM32(edx);
    ecx = ecx | esi;
    eax = eax + 0x53AD74;
    esi = eax;
    MEM32(edx) = ecx;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x1C) = 0;
    if ((eax == 0)) goto loc_001387AE; /* je: equal / zero */

loc_001387A6: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001387AEu); RECOMP_ABI_CALL(0x00138540u, sub_00138540); /* call 0x00138540 */

loc_001387AE: ;
    _fa = (uint32_t)(MEM8(0x546060)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x546060), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001387DB; /* jne: not equal / not zero */

loc_001387B6: ;
    edx = MEM32(0x546060);
    edx = edx | ebx;
    ecx = 0x523620;
    MEM32(0x546060) = edx;
    PUSH32(esp, 0x001387CEu); RECOMP_ABI_CALL(0x00137F40u, sub_00137F40); /* call 0x00137F40 */

loc_001387CE: ;
    PUSH32(esp, 0x35A3A0);
    PUSH32(esp, 0x001387D8u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_001387D8: ;
    esp = esp + 4;

loc_001387DB: ;
    eax = MEM32(esp + 0x24);
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(eax) = esi;
    POP32(esp, esi);
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_001387F3: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x10);
    MEM32(eax) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00138810
 * Original: 0x00138810 - 0x00138815 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138810(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00138810: ;
    g_seh_ebp = ebp; sub_001F52B0(); return; /* tail jmp 0x001F52B0 */

}

/**
 * sub_00138820
 * Original: 0x00138820 - 0x00138869 (73 bytes, 23 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138820(void)
{
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

loc_00138820: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, 0x12);
    PUSH32(esp, 0x00138832u); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_00138832: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00138844; /* jge: greater or equal (signed >=) */

loc_0013883E: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_00138844: ;
    fp_top() = fp_top() * MEMF(esi + 0x38); /* fmul dword ptr [esi + 0x38] */
    PUSH32(esp, 0x0013884Cu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0013884C: ;
    ecx = MEM32(esp + 8);
    edx = (edx << 0x12) | (eax >> (32 - 0x12)); /* shld */
    if (0x12) _cf = (int)(((eax) >> (32 - (0x12))) & 1);
    eax = eax << 0x12;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    eax = MEM32(esp + 0xC);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    MEM32(esi + 0x40) = ecx;
    MEM32(esi + 0x44) = eax;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}



/**
 * sub_001388C0
 * Original: 0x001388C0 - 0x001388DE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001388C0(void)
{

loc_001388C0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    edx = esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    MEM32(esp + 8) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x001388D7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001388D7: ;
    eax = MEM32(esp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001388E0
 * Original: 0x001388E0 - 0x0013895D (125 bytes, 59 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001388E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001388E0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00138949; /* jle: less or equal (signed <=) */

loc_001388F5: ;
    ebp = MEM32(eax + 0x10);

loc_001388F8: ;
    edi = MEM32(ebp);
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00138907; /* jne: not equal / not zero */

loc_00138902: ;
    ecx = 0x3C806C;

loc_00138907: ;
    esi = MEM32(esp + 0x18);
    goto loc_00138910;

    /* nop */

loc_00138910: ;
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00138934; /* jne: not equal / not zero */

loc_00138918: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00138930; /* je: equal / zero */

loc_0013891C: ;
    SET_LO8(eax, MEM8(ecx + 1));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00138934; /* jne: not equal / not zero */

loc_00138926: ;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00138910; /* jne: not equal / not zero */

loc_00138930: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    goto loc_00138939;

loc_00138934: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */

loc_00138939: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00138953; /* je: equal / zero */

loc_0013893D: ;
    eax = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(4)) >> 32) & 1);
    ebp = ebp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001388F8; /* jl: less (signed <) */

loc_00138949: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00138953: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00138960
 * Original: 0x00138960 - 0x001389DD (125 bytes, 59 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138960(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00138960: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x1C);
    ecx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001389C9; /* jle: less or equal (signed <=) */

loc_00138975: ;
    ebp = MEM32(eax + 0x10);

loc_00138978: ;
    edi = MEM32(ebp);
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00138987; /* jne: not equal / not zero */

loc_00138982: ;
    ecx = 0x3C806C;

loc_00138987: ;
    esi = MEM32(esp + 0x18);
    goto loc_00138990;

    /* nop */

loc_00138990: ;
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001389B4; /* jne: not equal / not zero */

loc_00138998: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001389B0; /* je: equal / zero */

loc_0013899C: ;
    SET_LO8(eax, MEM8(ecx + 1));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001389B4; /* jne: not equal / not zero */

loc_001389A6: ;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00138990; /* jne: not equal / not zero */

loc_001389B0: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    goto loc_001389B9;

loc_001389B4: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */

loc_001389B9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001389D3; /* je: equal / zero */

loc_001389BD: ;
    eax = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(4)) >> 32) & 1);
    ebp = ebp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00138978; /* jl: less (signed <) */

loc_001389C9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_001389D3: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001389E0
 * Original: 0x001389E0 - 0x00138A04 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001389E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001389E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001389F2; /* jge: greater or equal (signed >=) */

loc_001389E8: ;
    eax = 0; /* xor self */
    eax = MEM32(eax * 4 + 0x455D54);
    esp += 4; return; /* ret */

loc_001389F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001389FC; /* jle: less or equal (signed <=) */

loc_001389F7: ;
    eax = 0xD;

loc_001389FC: ;
    eax = MEM32(eax * 4 + 0x455D54);
    esp += 4; return; /* ret */

}

/**
 * sub_00138A10
 * Original: 0x00138A10 - 0x00138ADA (202 bytes, 72 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138A10(void)
{
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

loc_00138A10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00138AD3; /* je: equal / zero */

loc_00138A1F: ;
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_00138AD3; /* jl: less (signed <) */

loc_00138A2B: ;
    eax = MEM32(edi + 0x14);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00138A36u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00138A36: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00138AD3; /* jge: greater or equal (signed >=) */

loc_00138A3E: ;
    eax = MEM32(edi + 0xC);
    SET_LO8(ecx, MEM8(eax + 0x79));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00138A52; /* je: equal / zero */

loc_00138A48: ;
    ecx = MEM32(eax + 0x24);
    if (6) _cf = (int)(((esi) >> (32 - (6))) & 1);
    esi = esi << 6;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ecx)) >> 32) & 1);
    esi = esi + ecx;
    goto loc_00138A5F;

loc_00138A52: ;
    eax = MEM32(eax + 0x20);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00138A5Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00138A5D: ;
    esi = eax;

loc_00138A5F: ;
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3F800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3C), 0x3F800000 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00138AAC; /* jne: not equal / not zero */

loc_00138A68: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00138AAC; /* jp: parity */

loc_00138A7A: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00138AAC; /* jp: parity */

loc_00138A8C: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00138AAC; /* jp: parity */

loc_00138A9E: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = esi;
    PUSH32(esp, 0x00138AAAu); RECOMP_ABI_CALL(0x0004AF50u, sub_0004AF50); /* call 0x0004AF50 */

loc_00138AAA: ;
    goto loc_00138ABE;

loc_00138AAC: ;
    esi = MEM32(esp + 0x10);
    PUSH32(esp, 0x5BCA90);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00138ABBu); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_00138ABB: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;

loc_00138ABE: ;
    PUSH32(esp, esi);
    ecx = 0x5BCA90;
    PUSH32(esp, 0x00138AC9u); RECOMP_ABI_CALL(0x0023E160u, sub_0023E160); /* call 0x0023E160 */

loc_00138AC9: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    POP32(esp, edi);
    POP32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

loc_00138AD3: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00138AE0
 * Original: 0x00138AE0 - 0x00138B00 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138AE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00138AE0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = fp_top() * MEMD(0x3DA5F0); /* fmul qword ptr [0x3da5f0] */
    esi = ecx;
    PUSH32(esp, 0x00138AF2u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00138AF2: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00138AFCu); RECOMP_ABI_CALL(0x00277250u, sub_00277250); /* call 0x00277250 */

loc_00138AFC: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00138B00
 * Original: 0x00138B00 - 0x00138B74 (116 bytes, 54 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138B00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00138B00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    eax = ecx;
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x38);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00138B5D; /* je: equal / zero */

loc_00138B14: ;
    eax = MEM32(esi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00138B4B; /* jle: less or equal (signed <=) */

loc_00138B1D: ;
    /* nop */

loc_00138B20: ;
    eax = MEM32(esi + 0x10);
    edi = MEM32(eax + ebx * 4);
    eax = MEM32(edi + 8);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00138B35; /* jne: not equal / not zero */

loc_00138B30: ;
    eax = 0x3C806C;

loc_00138B35: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00138B3Cu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00138B3C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00138B54; /* je: equal / zero */

loc_00138B43: ;
    eax = MEM32(esi + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00138B20; /* jl: less (signed <) */

loc_00138B4B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00138B54: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00138B5D: ;
    edx = MEM32(esi + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00138B4B; /* jle: less or equal (signed <=) */

loc_00138B64: ;
    edx = MEM32(eax + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00136AD0(); return; /* tail jmp 0x00136AD0 */

}

/**
 * sub_00138B80
 * Original: 0x00138B80 - 0x00138C32 (178 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138B80(void)
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

loc_00138B80: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    eax = MEM32(ecx + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x38);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 4) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00138C2B; /* je: equal / zero */

loc_00138B96: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    PUSH32(esp, ebp);
    fp_top() = fp_top() * MEMD(0x3DA5F0); /* fmul qword ptr [0x3da5f0] */
    PUSH32(esp, 0x00138BA6u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00138BA6: ;
    ecx = MEM32(esi + 8);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = edx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00138C2A; /* jle: less or equal (signed <=) */

loc_00138BB7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    SET_LO8(ecx, 0x12);
    PUSH32(esp, 0x00138BC0u); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_00138BC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x20) = eax;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00138BD2; /* jge: greater or equal (signed >=) */

loc_00138BCC: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_00138BD2: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00138BE0;

loc_00138BD8: ;
    esi = MEM32(esp + 0x10);
    /* nop */

loc_00138BE0: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esi + 0x10);
    esi = MEM32(ecx + ebp * 4);
    eax = MEM32(esp + 0x14);
    edi = MEM32(esi + 0x28);
    ebx = MEM32(esi + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00138BFFu); RECOMP_ABI_CALL(0x00136B90u, sub_00136B90); /* call 0x00136B90 */

loc_00138BFF: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x38); /* fmul dword ptr [esi + 0x38] */
    PUSH32(esp, 0x00138C0Bu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00138C0B: ;
    ecx = MEM32(esp + 0x10);
    edx = (edx << 0x12) | (eax >> (32 - 0x12)); /* shld */
    if (0x12) _cf = (int)(((eax) >> (32 - (0x12))) & 1);
    eax = eax << 0x12;
    _cf = (int)((uint32_t)(edi) < (uint32_t)(eax));
    edi = edi - eax;
    { uint64_t _t = (uint64_t)(ebx) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebx = (uint32_t)_t; }  /* sbb */
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x44) = ebx;
    eax = MEM32(ecx + 8);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00138BD8; /* jl: less (signed <) */

loc_00138C28: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00138C2A: ;
    POP32(esp, ebp);

loc_00138C2B: ;
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00138C40
 * Original: 0x00138C40 - 0x00138CF5 (181 bytes, 62 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138C40(void)
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

loc_00138C40: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    eax = MEM32(ecx + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x38);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 4) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00138CEE; /* je: equal / zero */

loc_00138C56: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    PUSH32(esp, ebp);
    fp_top() = fp_top() * MEMD(0x3DA5F0); /* fmul qword ptr [0x3da5f0] */
    PUSH32(esp, 0x00138C66u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00138C66: ;
    ecx = MEM32(esi + 8);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = edx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00138CED; /* jle: less or equal (signed <=) */

loc_00138C77: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    SET_LO8(ecx, 0x12);
    PUSH32(esp, 0x00138C80u); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_00138C80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x20) = eax;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00138C92; /* jge: greater or equal (signed >=) */

loc_00138C8C: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_00138C92: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00138CA0;

loc_00138C98: ;
    esi = MEM32(esp + 0x10);
    /* nop */

loc_00138CA0: ;
    ecx = MEM32(esi + 0x10);
    esi = MEM32(ecx + ebp * 4);
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x24);
    edi = MEM32(esi + 0x28);
    ebx = MEM32(esi + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00138CC2u); RECOMP_ABI_CALL(0x00136B90u, sub_00136B90); /* call 0x00136B90 */

loc_00138CC2: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x38); /* fmul dword ptr [esi + 0x38] */
    PUSH32(esp, 0x00138CCEu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00138CCE: ;
    edx = (edx << 0x12) | (eax >> (32 - 0x12)); /* shld */
    if (0x12) _cf = (int)(((eax) >> (32 - (0x12))) & 1);
    eax = eax << 0x12;
    _cf = (int)((uint32_t)(edi) < (uint32_t)(eax));
    edi = edi - eax;
    { uint64_t _t = (uint64_t)(ebx) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebx = (uint32_t)_t; }  /* sbb */
    edx = MEM32(esp + 0x10);
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x44) = ebx;
    eax = MEM32(edx + 8);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00138C98; /* jl: less (signed <) */

loc_00138CEB: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00138CED: ;
    POP32(esp, ebp);

loc_00138CEE: ;
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00138D00
 * Original: 0x00138D00 - 0x00138D4C (76 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138D00(void)
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

loc_00138D00: ;
    eax = MEM32(ecx + 0x14);
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00138D49; /* je: equal / zero */

loc_00138D0A: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00138D49; /* jl: less (signed <) */

loc_00138D10: ;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx);
    fp_push(MEMF(ecx + 0x38)); /* fld float */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00138D49; /* jp: parity */

loc_00138D27: ;
    eax = MEM32(ecx + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = MEM32(ecx + 0x44);
    if (CMP_NE(_fa, _fb)) goto loc_00138D3A; /* jne: not equal / not zero */

loc_00138D32: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00138D49; /* je: equal / zero */

loc_00138D3A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00138D46; /* jne: not equal / not zero */

loc_00138D3E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80000000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00138D49; /* je: equal / zero */

loc_00138D46: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00138D49: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00138D50
 * Original: 0x00138D50 - 0x00138DB4 (100 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138D50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00138D50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x14);
    ebp = MEM32(eax + 0x38);
    esi = MEM32(edi + 0x10);
    eax = ebp;
    edx = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00138D7F; /* jle: less or equal (signed <=) */

loc_00138D6A: ;
    eax = MEM32(eax + 0x10);
    /* nop */

loc_00138D70: ;
    ebx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00138D7F; /* je: equal / zero */

loc_00138D77: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00138D70; /* jl: less (signed <) */

loc_00138D7F: ;
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00138DAF; /* js: sign (negative) */

loc_00138D87: ;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + esi * 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00138DA0; /* je: equal / zero */

loc_00138D95: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00138DA0; /* je: equal / zero */

loc_00138D9B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00138DA9; /* jl: less (signed <) */

loc_00138DA0: ;
    ecx = MEM32(edi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00138DA9u); RECOMP_ABI_CALL(0x002627E0u, sub_002627E0); /* call 0x002627E0 */

loc_00138DA9: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00138D87; /* jge: greater or equal (signed >=) */

loc_00138DAF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00138DC0
 * Original: 0x00138DC0 - 0x00138DC8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138DC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00138DC0: ;
    ecx = MEM32(ecx + 0x14);
    g_seh_ebp = ebp; sub_00262650(); return; /* tail jmp 0x00262650 */

}

/**
 * sub_00138DD0
 * Original: 0x00138DD0 - 0x00138EA4 (212 bytes, 77 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138DD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00138DE0; /* je: equal / zero */

loc_00138DDD: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00138DE0: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00138DFC; /* je: equal / zero */

loc_00138DE7: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00138DFC; /* jne: not equal / not zero */

loc_00138DF7: ;
    PUSH32(esp, 0x00138DFCu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00138DFC: ;
    MEM32(esi + 0x20) = edi;
    eax = edi;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00138E09u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00138E09: ;
    edi = eax;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00138E16u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00138E16: ;
    ebx = eax;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00138E2F; /* je: equal / zero */

loc_00138E1F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00138E25u); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_00138E25: ;
    esp = esp + 4;
    MEM32(esi + 0x24) = 0;

loc_00138E2F: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00138E46; /* je: equal / zero */

loc_00138E36: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00138E3Cu); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_00138E3C: ;
    esp = esp + 4;
    MEM32(esi + 0x28) = 0;

loc_00138E46: ;
    ecx = esi;
    PUSH32(esp, 0x00138E4Du); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00138E4D: ;
    ecx = MEM32(0x5BD4C0);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00138E60u); RECOMP_ABI_CALL(0x001F7560u, sub_001F7560); /* call 0x001F7560 */

loc_00138E60: ;
    ecx = esi;
    PUSH32(esp, 0x00138E67u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00138E67: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BD650);
    PUSH32(esp, 0x00138E7Au); RECOMP_ABI_CALL(0x001F7560u, sub_001F7560); /* call 0x001F7560 */

loc_00138E7A: ;
    ecx = MEM32(0x5BD4C0);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00138E8Cu); RECOMP_ABI_CALL(0x001E9D80u, sub_001E9D80); /* call 0x001E9D80 */

loc_00138E8C: ;
    ecx = MEM32(0x5BD650);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00138E9Eu); RECOMP_ABI_CALL(0x001E9D80u, sub_001E9D80); /* call 0x001E9D80 */

loc_00138E9E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00138EB0
 * Original: 0x00138EB0 - 0x00138F3A (138 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138EB0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352808);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00138F27; /* je: equal / zero */

loc_00138ECD: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 4) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00138EDC; /* je: equal / zero */

loc_00138ED9: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00138EDC: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x00138EF0u); RECOMP_ABI_CALL(0x00262FB0u, sub_00262FB0); /* call 0x00262FB0 */

loc_00138EF0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_00138F13; /* je: equal / zero */

loc_00138EFC: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00138F13; /* jne: not equal / not zero */

loc_00138F0C: ;
    ecx = esi;
    PUSH32(esp, 0x00138F13u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00138F13: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_00138F27: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, 0); /* xor self */
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00138F40
 * Original: 0x00138F40 - 0x001390FE (446 bytes, 133 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138F40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00138F40: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352841);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x210;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0x218) = eax;
    esi = ecx;
    PUSH32(esp, 0x00138F71u); RECOMP_ABI_CALL(0x0012F280u, sub_0012F280); /* call 0x0012F280 */

loc_00138F71: ;
    ebp = MEM32(esp + 0x22C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00138F80u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00138F80: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00138F8D; /* jne: not equal / not zero */

loc_00138F86: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_001390D8;

loc_00138F8D: ;
    edx = MEM32(eax);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00138F95u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00138F95: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00138FA2; /* je: equal / zero */

loc_00138F9F: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00138FA2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 0x228) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_001390D5; /* je: equal / zero */

loc_00138FB1: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001390B3; /* je: equal / zero */

loc_00138FBA: ;
    PUSH32(esp, 0x100);
    eax = esp + 0x20;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00138FCAu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00138FCA: ;
    ecx = esp + 0x128;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    MEM8(esp + 0x12F) = LO8(ebx);
    MEM8(esp + 0x130) = LO8(ebx);
    PUSH32(esp, 0x00138FEAu); RECOMP_ABI_CALL(0x00125580u, sub_00125580); /* call 0x00125580 */

loc_00138FEA: ;
    eax = MEM32(esi + 0xC);
    ebp = MEM32(eax + 0x2C);
    esp = esp + 0x14;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    MEM32(esp + 0x14) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00138FFE; /* je: equal / zero */

loc_00138FFB: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00138FFE: ;
    eax = esp + 0x11C;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0013900Du); RECOMP_ABI_CALL(0x00138960u, sub_00138960); /* call 0x00138960 */

loc_0013900D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0013901A; /* je: equal / zero */

loc_00139017: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0013901A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM8(esp + 0x228) = 2;
    if (CMP_NE(_fa, _fb)) goto loc_00139040; /* jne: not equal / not zero */

loc_00139026: ;
    eax = MEM32(edi + 0x1C);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00139038u); RECOMP_ABI_CALL(0x001C2500u, sub_001C2500); /* call 0x001C2500 */

loc_00139038: ;
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139048; /* je: equal / zero */

loc_00139040: ;
    ecx = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00139048u); RECOMP_ABI_CALL(0x00257560u, sub_00257560); /* call 0x00257560 */

loc_00139048: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM8(esp + 0x228) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0013906B; /* je: equal / zero */

loc_00139054: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013906B; /* jne: not equal / not zero */

loc_00139064: ;
    ecx = esi;
    PUSH32(esp, 0x0013906Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013906B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    MEM8(esp + 0x228) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0013908D; /* je: equal / zero */

loc_00139076: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013908D; /* jne: not equal / not zero */

loc_00139086: ;
    ecx = ebp;
    PUSH32(esp, 0x0013908Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013908D: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esp + 0x228) = 0xFFFFFFFFu;
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001390AF; /* jne: not equal / not zero */

loc_001390A8: ;
    ecx = edi;
    PUSH32(esp, 0x001390AFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001390AF: ;
    SET_LO8(eax, 1);
    goto loc_001390D7;

loc_001390B3: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esp + 0x228) = 0xFFFFFFFFu;
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001390D5; /* jne: not equal / not zero */

loc_001390CE: ;
    ecx = edi;
    PUSH32(esp, 0x001390D5u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001390D5: ;
    SET_LO8(eax, 0); /* xor self */

loc_001390D7: ;
    POP32(esp, edi);

loc_001390D8: ;
    ecx = MEM32(esp + 0x21C);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x210);
    POP32(esp, ebx);
    PUSH32(esp, 0x001390F5u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_001390F5: ;
    esp = esp + 0x21C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139100
 * Original: 0x00139100 - 0x00139220 (288 bytes, 84 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139100(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00139100: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x35285B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x20C;
    eax = MEM32(0x47A050);
    MEM32(esp + 0x208) = eax;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001391FA; /* je: equal / zero */

loc_00139135: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x2C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    MEM32(esp + 0xC) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00139144; /* je: equal / zero */

loc_00139141: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00139144: ;
    PUSH32(esp, ebp);
    eax = MEM32(esp + 0x228);
    ebp = MEM32(ebx + 0x10);
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    MEM32(esp + 0x22C) = esi;
    PUSH32(esp, 0x00139166u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00139166: ;
    edx = esp + 0x120;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    MEM8(esp + 0x127) = 0;
    MEM8(esp + 0x128) = 0;
    PUSH32(esp, 0x00139188u); RECOMP_ABI_CALL(0x00125580u, sub_00125580); /* call 0x00125580 */

loc_00139188: ;
    eax = MEM32(ebp + 8);
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001391D2; /* jle: less or equal (signed <=) */

loc_00139196: ;
    PUSH32(esp, edi);

loc_00139197: ;
    ecx = MEM32(ebp + 0x10);
    edi = MEM32(ecx + esi * 4);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001391A9; /* jne: not equal / not zero */

loc_001391A4: ;
    eax = 0x3C806C;

loc_001391A9: ;
    edx = esp + 0x118;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001391B7u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_001391B7: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001391C9; /* je: equal / zero */

loc_001391BE: ;
    eax = MEM32(esp + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00139197; /* jl: less (signed <) */

loc_001391C7: ;
    goto loc_001391D1;

loc_001391C9: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001391D1u); RECOMP_ABI_CALL(0x00257570u, sub_00257570); /* call 0x00257570 */

loc_001391D1: ;
    POP32(esp, edi);

loc_001391D2: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esp + 0x220) = 0xFFFFFFFFu;
    MEM32(ebx + 4) = ecx;
    POP32(esp, ebp);
    if (TEST_NZ(_fa, _fb)) goto loc_001391F5; /* jne: not equal / not zero */

loc_001391EE: ;
    ecx = ebx;
    PUSH32(esp, 0x001391F5u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001391F5: ;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    goto loc_001391FC;

loc_001391FA: ;
    SET_LO8(eax, 0); /* xor self */

loc_001391FC: ;
    ecx = MEM32(esp + 0x210);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x20C);
    POP32(esp, esi);
    PUSH32(esp, 0x00139217u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00139217: ;
    esp = esp + 0x218;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139220
 * Original: 0x00139220 - 0x00139311 (241 bytes, 87 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139220(void)
{
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

loc_00139220: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00139308; /* je: equal / zero */

loc_00139230: ;
    ecx = MEM32(edi + 0x14);
    PUSH32(esp, 0x00139238u); RECOMP_ABI_CALL(0x00262650u, sub_00262650); /* call 0x00262650 */

loc_00139238: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00139257; /* je: equal / zero */

loc_00139242: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00139257; /* jne: not equal / not zero */

loc_00139252: ;
    PUSH32(esp, 0x00139257u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00139257: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    MEM32(edi + 0x10) = esi;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(edi + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEM32(esp + 0x44) = eax;
    PUSH32(esp, 0x00139287u); RECOMP_ABI_CALL(0x00286980u, sub_00286980); /* call 0x00286980 */

loc_00139287: ;
    edi = MEM32(edi + 0x14);
    edx = MEM32(edi + 0x38);
    ecx = MEM32(edx + 8);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001392AF; /* jle: less or equal (signed <=) */

loc_00139296: ;
    edx = MEM32(edx + 0x10);
    /* nop */

loc_001392A0: ;
    edi = MEM32(edx);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013930D; /* je: equal / zero */

loc_001392A7: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(4)) >> 32) & 1);
    edx = edx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001392A0; /* jl: less (signed <) */

loc_001392AF: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */

loc_001392B1: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMD(0x3DA5F0); /* fmul qword ptr [0x3da5f0] */
    PUSH32(esp, 0x001392C0u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001392C0: ;
    SET_LO8(ecx, 0x12);
    edi = eax;
    ebx = edx;
    PUSH32(esp, 0x001392CBu); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_001392CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001392DD; /* jge: greater or equal (signed >=) */

loc_001392D7: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_001392DD: ;
    fp_top() = fp_top() * MEMF(esi + 0x38); /* fmul dword ptr [esi + 0x38] */
    PUSH32(esp, 0x001392E5u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001392E5: ;
    edx = (edx << 0x12) | (eax >> (32 - 0x12)); /* shld */
    if (0x12) _cf = (int)(((eax) >> (32 - (0x12))) & 1);
    eax = eax << 0x12;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    PUSH32(esp, ebx);
    MEM32(esi + 0x44) = edx;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esi + 0x40) = eax;
    PUSH32(esp, 0x00139307u); RECOMP_ABI_CALL(0x00136B90u, sub_00136B90); /* call 0x00136B90 */

loc_00139307: ;
    POP32(esp, ebx);

loc_00139308: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0013930D: ;
    esi = edi;
    goto loc_001392B1;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00139320
 * Original: 0x00139320 - 0x001394B4 (404 bytes, 143 insns)
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139320(void)
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

loc_00139320: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00139339; /* jne: not equal / not zero */

loc_0013932F: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    esp += 44; return; /* ret 40 */

loc_00139339: ;
    eax = MEM32(esi + 0x14);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    ecx = MEM32(eax + 0x38);
    fp_top() = fp_top() * MEMD(0x3DA5F0); /* fmul qword ptr [0x3da5f0] */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, 0x00139354u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00139354: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() * MEMD(0x3DA5F0); /* fmul qword ptr [0x3da5f0] */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x0013936Bu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0013936B: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fp_top() * MEMD(0x3DA5F0); /* fmul qword ptr [0x3da5f0] */
    ebx = eax;
    ebp = edx;
    PUSH32(esp, 0x0013937Eu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0013937E: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00139394; /* jl: less (signed <) */

loc_00139384: ;
    if (CMP_G(_fas, _fbs)) goto loc_0013938A; /* jg: greater (signed >) */

loc_00139386: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00139394; /* jbe: below or equal (unsigned <=) */

loc_0013938A: ;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = edx;
    goto loc_0013939C;

loc_00139394: ;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = ecx;

loc_0013939C: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_001393B2; /* jg: greater (signed >) */

loc_001393A2: ;
    if (CMP_L(_fas, _fbs)) goto loc_001393AA; /* jl: less (signed <) */

loc_001393A4: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001393B2; /* jae: above or equal (unsigned >=) */

loc_001393AA: ;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = ecx;

loc_001393B2: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001393D1; /* je: equal / zero */

loc_001393BC: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001393D1; /* jne: not equal / not zero */

loc_001393CC: ;
    PUSH32(esp, 0x001393D1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001393D1: ;
    edx = MEM32(esp + 0x28);
    MEM32(esi + 0x10) = edi;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001393E6; /* jle: less or equal (signed <=) */

loc_001393DF: ;
    ecx = esi;
    PUSH32(esp, 0x001393E6u); RECOMP_ABI_CALL(0x00138D50u, sub_00138D50); /* call 0x00138D50 */

loc_001393E6: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, edx);
    MEM32(esp + 0x38) = eax;
    eax = MEM32(esp + 0x50);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00139422u); RECOMP_ABI_CALL(0x00286980u, sub_00286980); /* call 0x00286980 */

loc_00139422: ;
    esi = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x38);
    eax = MEM32(ecx + 8);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00139443; /* jle: less or equal (signed <=) */

loc_00139431: ;
    ecx = MEM32(ecx + 0x10);

loc_00139434: ;
    esi = MEM32(ecx);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00139445; /* je: equal / zero */

loc_0013943B: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00139434; /* jl: less (signed <) */

loc_00139443: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */

loc_00139445: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    SET_LO8(ecx, 0x12);
    PUSH32(esp, 0x00139454u); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_00139454: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x28) = eax;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00139466; /* jge: greater or equal (signed >=) */

loc_00139460: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_00139466: ;
    fp_top() = fp_top() * MEMF(esi + 0x38); /* fmul dword ptr [esi + 0x38] */
    PUSH32(esp, 0x0013946Eu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0013946E: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    edx = (edx << 0x12) | (eax >> (32 - 0x12)); /* shld */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    if (0x12) _cf = (int)(((eax) >> (32 - (0x12))) & 1);
    eax = eax << 0x12;
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(eax));
    ebx = ebx - eax;
    { uint64_t _t = (uint64_t)(ebp) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebp = (uint32_t)_t; }  /* sbb */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esi + 0x44) = ebp;
    POP32(esp, ebp);
    MEM32(esi + 0x40) = ebx;
    POP32(esp, ebx);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001394AA; /* jnp: not parity */

loc_00139494: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001394AAu); RECOMP_ABI_CALL(0x00136B90u, sub_00136B90); /* call 0x00136B90 */

loc_001394AA: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    esp += 44; return; /* ret 40 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001394C0
 * Original: 0x001394C0 - 0x00139566 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001394C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001394C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352891);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x001394E5u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_001394E5: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x001394F1u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_001394F1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001394F9u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_001394F9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001394FFu); RECOMP_ABI_CALL(0x0028DFF0u, sub_0028DFF0); /* call 0x0028DFF0 */

loc_001394FF: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x00139513u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00139513: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0013951Bu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0013951B: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0013952B; /* je: equal / zero */

loc_00139528: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0013952B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00139553; /* je: equal / zero */

loc_0013953C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00139553; /* jne: not equal / not zero */

loc_0013954C: ;
    ecx = esi;
    PUSH32(esp, 0x00139553u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00139553: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00139570
 * Original: 0x00139570 - 0x00139616 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139570: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352891);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00139595u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_00139595: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x001395A1u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_001395A1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001395A9u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_001395A9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001395AFu); RECOMP_ABI_CALL(0x0028DCB0u, sub_0028DCB0); /* call 0x0028DCB0 */

loc_001395AF: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x001395C3u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_001395C3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001395CBu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_001395CB: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_001395DB; /* je: equal / zero */

loc_001395D8: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001395DB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00139603; /* je: equal / zero */

loc_001395EC: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00139603; /* jne: not equal / not zero */

loc_001395FC: ;
    ecx = esi;
    PUSH32(esp, 0x00139603u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00139603: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00139620
 * Original: 0x00139620 - 0x001396C6 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139620: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352891);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00139645u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_00139645: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00139651u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00139651: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00139659u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_00139659: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013965Fu); RECOMP_ABI_CALL(0x00254FE0u, sub_00254FE0); /* call 0x00254FE0 */

loc_0013965F: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x00139673u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00139673: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0013967Bu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0013967B: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0013968B; /* je: equal / zero */

loc_00139688: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0013968B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001396B3; /* je: equal / zero */

loc_0013969C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001396B3; /* jne: not equal / not zero */

loc_001396AC: ;
    ecx = esi;
    PUSH32(esp, 0x001396B3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001396B3: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001396D0
 * Original: 0x001396D0 - 0x00139723 (83 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001396D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001396D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00139719; /* je: equal / zero */

loc_001396E0: ;
    ecx = MEM32(edi + 0x30);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0013971C; /* jle: less or equal (signed <=) */

loc_001396E9: ;
    esi = edi + 0x1C;
    /* nop */

loc_001396F0: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00139707; /* je: equal / zero */

loc_001396F6: ;
    eax = MEM32(ecx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001396FCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001396FC: ;
    ecx = eax;
    PUSH32(esp, 0x00139703u); RECOMP_ABI_CALL(0x001388E0u, sub_001388E0); /* call 0x001388E0 */

loc_00139703: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013971C; /* jne: not equal / not zero */

loc_00139707: ;
    ecx = MEM32(edi + 0x30);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001396F0; /* jl: less (signed <) */

loc_00139712: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00139719: ;
    eax = MEM32(edi + 0x10);

loc_0013971C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139730
 * Original: 0x00139730 - 0x00139785 (85 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139730(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00139730: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebx = ecx;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00139745; /* jge: greater or equal (signed >=) */

loc_0013973E: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00139745: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xAF;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ecx = MEM32(ebx + edi * 4 + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    esi = edx;
    if (TEST_Z(_fa, _fb)) goto loc_0013977C; /* je: equal / zero */

loc_0013975B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00139760u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00139760: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013976A; /* jl: less (signed <) */

loc_00139768: ;
    esi = 0; /* xor self */

loc_0013976A: ;
    ecx = MEM32(ebx + edi * 4 + 0x1C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00139773u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00139773: ;
    eax = MEM32(eax + 0x18);
    ecx = MEM32(eax + 0x10);
    ebp = MEM32(ecx + esi * 4);

loc_0013977C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139790
 * Original: 0x00139790 - 0x0013985A (202 bytes, 82 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139790(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00139790: ;
    esp = esp - 8;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    esi = ecx;
    MEM32(esp + 0xC) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00139850; /* je: equal / zero */

loc_001397A9: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139850; /* je: equal / zero */

loc_001397B3: ;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), ebp (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_0013982C; /* jle: less or equal (signed <=) */

loc_001397BE: ;
    ebx = esi + 0x1C;

loc_001397C1: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00139821; /* je: equal / zero */

loc_001397C7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001397CCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001397CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00139821; /* je: equal / zero */

loc_001397D0: ;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001397D7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001397D7: ;
    esi = MEM32(eax + 0x18);
    edi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00139810; /* je: equal / zero */

loc_001397E0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00139810; /* jge: greater or equal (signed >=) */

loc_001397E5: ;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013980D; /* je: equal / zero */

loc_001397EF: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001397FB; /* jne: not equal / not zero */

loc_001397F6: ;
    eax = 0x3C806C;

loc_001397FB: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00139806u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00139806: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00139838; /* je: equal / zero */

loc_0013980D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001397E0;

loc_00139810: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x14);
    eax = eax + 0xAF;
    MEM32(esp + 0x10) = eax;

loc_00139821: ;
    eax = MEM32(esi + 0x30);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001397C1; /* jl: less (signed <) */

loc_0013982C: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

loc_00139838: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x20);
    edi = edi + edx;
    MEM32(eax) = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

loc_00139850: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00139860
 * Original: 0x00139860 - 0x0013988E (46 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00139860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139860: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00139889; /* jl: less (signed <) */

loc_00139868: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x30) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00139889; /* jge: greater or equal (signed >=) */

loc_0013986D: ;
    ecx = MEM32(ecx + eax * 4 + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00139889; /* je: equal / zero */

loc_00139875: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0013987Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013987A: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013988B; /* jne: not equal / not zero */

loc_00139881: ;
    eax = 0x3C806C;
    esp += 8; return; /* ret 4 */

loc_00139889: ;
    eax = 0; /* xor self */

loc_0013988B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139890
 * Original: 0x00139890 - 0x001398DB (75 bytes, 28 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139890: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    if (TEST_S(_fas, _fbs)) goto loc_001398D5; /* jl: less (signed <) */

loc_001398B1: ;
    PUSH32(esp, ebx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = 0xAF;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    POP32(esp, ebx);
    ecx = MEM32(ecx + eax * 4 + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001398D5; /* je: equal / zero */

loc_001398C3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001398D1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001398D1: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001398D5: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001398E0
 * Original: 0x001398E0 - 0x00139927 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001398E0(void)
{

loc_001398E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x001398EFu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_001398EF: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00139902u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_00139902: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00139914u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00139914: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013991Fu); RECOMP_ABI_CALL(0x001394C0u, sub_001394C0); /* call 0x001394C0 */

loc_0013991F: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00139930
 * Original: 0x00139930 - 0x00139977 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139930(void)
{

loc_00139930: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x0013993Fu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_0013993F: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00139952u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_00139952: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00139964u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00139964: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013996Fu); RECOMP_ABI_CALL(0x00139570u, sub_00139570); /* call 0x00139570 */

loc_0013996F: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00139980
 * Original: 0x00139980 - 0x001399C7 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139980(void)
{

loc_00139980: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x0013998Fu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_0013998F: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001399A2u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_001399A2: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001399B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001399B4: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001399BFu); RECOMP_ABI_CALL(0x00139620u, sub_00139620); /* call 0x00139620 */

loc_001399BF: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001399D0
 * Original: 0x001399D0 - 0x00139D83 (947 bytes, 311 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001399D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001399D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3528D7);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x218;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x220) = eax;
    esi = ecx;
    PUSH32(esp, 0x00139A01u); RECOMP_ABI_CALL(0x0012F280u, sub_0012F280); /* call 0x0012F280 */

loc_00139A01: ;
    ebp = MEM32(esp + 0x234);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00139A10u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00139A10: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00139A1D; /* jne: not equal / not zero */

loc_00139A16: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_00139D5D;

loc_00139A1D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00139A25u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00139A25: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(esp + 0x18) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00139A32; /* je: equal / zero */

loc_00139A2F: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00139A32: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(esp + 0x230) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00139A44; /* jne: not equal / not zero */

loc_00139A3D: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_00139D5C;

loc_00139A44: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139A60; /* je: equal / zero */

loc_00139A4B: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00139A60; /* jne: not equal / not zero */

loc_00139A5B: ;
    PUSH32(esp, 0x00139A60u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00139A60: ;
    MEM32(esi + 0x10) = edi;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139A7F; /* je: equal / zero */

loc_00139A6A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00139A7F; /* jne: not equal / not zero */

loc_00139A7A: ;
    PUSH32(esp, 0x00139A7Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00139A7F: ;
    eax = esp + 0x1C;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    MEM32(esi + 0x14) = edi;
    PUSH32(esp, 0x00139A8Eu); RECOMP_ABI_CALL(0x001398E0u, sub_001398E0); /* call 0x001398E0 */

loc_00139A8E: ;
    esp = esp + 8;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM8(esp + 0x230) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_00139AA2; /* je: equal / zero */

loc_00139A9F: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00139AA2: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00139ABE; /* je: equal / zero */

loc_00139AA9: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00139ABE; /* jne: not equal / not zero */

loc_00139AB9: ;
    PUSH32(esp, 0x00139ABEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00139ABE: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x14) = edi;
    MEM8(esp + 0x230) = 0;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00139AEB; /* je: equal / zero */

loc_00139AD3: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_00139AEB; /* jne: not equal / not zero */

loc_00139AE6: ;
    PUSH32(esp, 0x00139AEBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00139AEB: ;
    eax = MEM32(ebx + 0x14);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00139AFE; /* je: equal / zero */

loc_00139AFB: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00139AFE: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    MEM8(esp + 0x234) = 2;
    PUSH32(esp, 0x00139B0Fu); RECOMP_ABI_CALL(0x00287A00u, sub_00287A00); /* call 0x00287A00 */

loc_00139B0F: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00139B1Bu); RECOMP_ABI_CALL(0x00138DD0u, sub_00138DD0); /* call 0x00138DD0 */

loc_00139B1B: ;
    edx = esp + 0x10;
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00139B27u); RECOMP_ABI_CALL(0x00139930u, sub_00139930); /* call 0x00139930 */

loc_00139B27: ;
    PUSH32(esp, 0x100);
    eax = esp + 0x30;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    MEM8(esp + 0x244) = 3;
    PUSH32(esp, 0x00139B3Fu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00139B3F: ;
    ecx = esp + 0x138;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    MEM8(esp + 0x13F) = 0;
    MEM8(esp + 0x140) = 0;
    PUSH32(esp, 0x00139B61u); RECOMP_ABI_CALL(0x00125580u, sub_00125580); /* call 0x00125580 */

loc_00139B61: ;
    esp = esp + 0x1C;
    eax = esp + 0x124;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00139B73u); RECOMP_ABI_CALL(0x00138960u, sub_00138960); /* call 0x00138960 */

loc_00139B73: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(esp + 0x14) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_00139B80; /* je: equal / zero */

loc_00139B7D: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00139B80: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM8(esp + 0x230) = 4;
    if (TEST_NZ(_fa, _fb)) goto loc_00139BA6; /* jne: not equal / not zero */

loc_00139B8C: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ecx + 0x1C);
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00139BA2u); RECOMP_ABI_CALL(0x001C2500u, sub_001C2500); /* call 0x001C2500 */

loc_00139BA2: ;
    ebx = MEM32(esp + 0x14);

loc_00139BA6: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00139BB0u); RECOMP_ABI_CALL(0x002997A0u, sub_002997A0); /* call 0x002997A0 */

loc_00139BB0: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edi = MEM32(esi + 0xC);
    ebp = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00139BC0; /* je: equal / zero */

loc_00139BBD: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00139BC0: ;
    ecx = MEM32(edi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00139BDC; /* je: equal / zero */

loc_00139BC7: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00139BDC; /* jne: not equal / not zero */

loc_00139BD7: ;
    PUSH32(esp, 0x00139BDCu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00139BDC: ;
    MEM32(edi + 0x2C) = ebp;
    eax = MEM32(esi + 0xC);
    SET_LO8(ecx, MEM8(eax + 0x79));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00139BEE; /* je: equal / zero */

loc_00139BE9: ;
    edi = MEM32(eax + 0x24);
    goto loc_00139BFA;

loc_00139BEE: ;
    eax = MEM32(eax + 0x20);
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00139BF8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00139BF8: ;
    edi = eax;

loc_00139BFA: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 0x20);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00139C08u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00139C08: ;
    eax = eax << 6;
    ecx = eax;
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
    edi = 0x455D54;
    ebp = esi + 0x6C;

loc_00139C25: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = MEM32(edi);
    if (TEST_Z(_fa, _fb)) goto loc_00139C48; /* je: equal / zero */

loc_00139C2E: ;
    ecx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00139C48; /* je: equal / zero */

loc_00139C35: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139C48; /* je: equal / zero */

loc_00139C3B: ;
    eax = ecx;
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x00139C46u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00139C46: ;
    goto loc_00139C4A;

loc_00139C48: ;
    eax = 0; /* xor self */

loc_00139C4A: ;
    MEM32(ebp) = eax;
    edi = edi + 4;
    ebp = ebp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x455D88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x455D88 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00139C25; /* jl: less (signed <) */

loc_00139C5B: ;
    edi = esi + 0x34;
    ebp = 0xD;

loc_00139C63: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00139C7E; /* je: equal / zero */

loc_00139C69: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00139C7E; /* jne: not equal / not zero */

loc_00139C79: ;
    PUSH32(esp, 0x00139C7Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00139C7E: ;
    MEM32(edi) = 0;
    edi = edi + 4;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00139C63; /* jne: not equal / not zero */

loc_00139C8A: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 0x2C);
    eax = MEM32(eax + 0xC);
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00139CA3; /* je: equal / zero */

loc_00139C9A: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00139CA3u); RECOMP_ABI_CALL(0x001EA8E0u, sub_001EA8E0); /* call 0x001EA8E0 */

loc_00139CA3: ;
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = MEM32(esi + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_00139CB0; /* je: equal / zero */

loc_00139CAD: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00139CB0: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    ebp = 0x7FFFFF;
    if (TEST_Z(_fa, _fb)) goto loc_00139CCE; /* je: equal / zero */

loc_00139CBC: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00139CCE; /* jne: not equal / not zero */

loc_00139CC9: ;
    PUSH32(esp, 0x00139CCEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00139CCE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(esi + 0xC) = edi;
    MEM8(esp + 0x230) = 3;
    if (TEST_Z(_fa, _fb)) goto loc_00139CF1; /* je: equal / zero */

loc_00139CDD: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00139CF1; /* jne: not equal / not zero */

loc_00139CEA: ;
    ecx = ebx;
    PUSH32(esp, 0x00139CF1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00139CF1: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esp + 0x230) = 2;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00139D17; /* je: equal / zero */

loc_00139D03: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, edx (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00139D17; /* jne: not equal / not zero */

loc_00139D12: ;
    PUSH32(esp, 0x00139D17u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00139D17: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x230) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00139D39; /* je: equal / zero */

loc_00139D27: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00139D39; /* jne: not equal / not zero */

loc_00139D34: ;
    PUSH32(esp, 0x00139D39u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00139D39: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(esp + 0x230) = 0xFFFFFFFFu;
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00139D5A; /* jne: not equal / not zero */

loc_00139D55: ;
    PUSH32(esp, 0x00139D5Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00139D5A: ;
    SET_LO8(eax, 1);

loc_00139D5C: ;
    POP32(esp, ebx);

loc_00139D5D: ;
    ecx = MEM32(esp + 0x224);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x218);
    POP32(esp, ebp);
    PUSH32(esp, 0x00139D7Au); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00139D7A: ;
    esp = esp + 0x224;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139D90
 * Original: 0x00139D90 - 0x00139E5E (206 bytes, 62 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139D90: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352900);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    eax = MEM32(ecx + 0xC);
    esp = esp - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00139E4B; /* je: equal / zero */

loc_00139DB3: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00139DC2; /* je: equal / zero */

loc_00139DBF: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00139DC2: ;
    eax = esp + 4;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x00139DD6u); RECOMP_ABI_CALL(0x00139980u, sub_00139980); /* call 0x00139980 */

loc_00139DD6: ;
    esp = esp + 8;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(esp + 0x1C) = 1;
    PUSH32(esp, 0x00139DEFu); RECOMP_ABI_CALL(0x00277F50u, sub_00277F50); /* call 0x00277F50 */

loc_00139DEF: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esp + 0x14) = 0;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00139E14; /* je: equal / zero */

loc_00139DFE: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00139E14; /* jne: not equal / not zero */

loc_00139E0F: ;
    PUSH32(esp, 0x00139E14u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00139E14: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_00139E37; /* je: equal / zero */

loc_00139E20: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00139E37; /* jne: not equal / not zero */

loc_00139E30: ;
    ecx = esi;
    PUSH32(esp, 0x00139E37u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00139E37: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

loc_00139E4B: ;
    ecx = MEM32(esp + 8);
    SET_LO8(eax, 0); /* xor self */
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139E60
 * Original: 0x00139E60 - 0x00139E8E (46 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139E60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00139E68u); RECOMP_ABI_CALL(0x0012F280u, sub_0012F280); /* call 0x0012F280 */

loc_00139E68: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00139E74u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00139E74: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00139E88; /* je: equal / zero */

loc_00139E78: ;
    edx = MEM32(esi + 0x30);
    MEM32(esi + edx * 4 + 0x1C) = eax;
    MEM32(esi + 0x30) = MEM32(esi + 0x30) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00139E88: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139E90
 * Original: 0x00139E90 - 0x00139ED4 (68 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139E90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00139E98u); RECOMP_ABI_CALL(0x0012F280u, sub_0012F280); /* call 0x0012F280 */

loc_00139E98: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00139EA4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00139EA4: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esi + 0x30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00139EC3; /* jg: greater (signed >) */

loc_00139EAF: ;
    MEM32(esi + edx * 4 + 0x1C) = eax;
    MEM32(esi + 0x30) = MEM32(esi + 0x30) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(ecx));
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00139EC3: ;
    MEM32(esi + ecx * 4 + 0x1C) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(ecx));
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00139EE0
 * Original: 0x00139EE0 - 0x00139F74 (148 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139EE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00139EE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = edi + 4;
    if (TEST_NZ(_fa, _fb)) goto loc_00139F09; /* jne: not equal / not zero */

loc_00139EEE: ;
    PUSH32(esp, 0x00139EF3u); RECOMP_ABI_CALL(0x00143020u, sub_00143020); /* call 0x00143020 */

loc_00139EF3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00139EFBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00139EFB: ;
    eax = MEM32(esi);
    ecx = MEM32(edi + 0x28);
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00139F09u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00139F09: ;
    ecx = MEM32(esi);
    eax = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x00139F15u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00139F15: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00139F35; /* jne: not equal / not zero */

loc_00139F1A: ;
    PUSH32(esp, 0x00139F1Fu); RECOMP_ABI_CALL(0x00143020u, sub_00143020); /* call 0x00143020 */

loc_00139F1F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00139F27u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00139F27: ;
    eax = MEM32(esi);
    ecx = MEM32(edi + 0x28);
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00139F35u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00139F35: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00139F3Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00139F3E: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = edi + 8;
    if (TEST_NZ(_fa, _fb)) goto loc_00139F63; /* jne: not equal / not zero */

loc_00139F48: ;
    PUSH32(esp, 0x00139F4Du); RECOMP_ABI_CALL(0x00143080u, sub_00143080); /* call 0x00143080 */

loc_00139F4D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00139F55u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00139F55: ;
    eax = MEM32(esi);
    ecx = MEM32(edi + 0x28);
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00139F63u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00139F63: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x78)); return; /* indirect tail jmp */

}

/**
 * sub_00139F80
 * Original: 0x00139F80 - 0x0013A045 (197 bytes, 79 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139F80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00139F80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = ebp + 0x10;
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_00139FAB; /* jne: not equal / not zero */

loc_00139F90: ;
    PUSH32(esp, 0x00139F95u); RECOMP_ABI_CALL(0x00143140u, sub_00143140); /* call 0x00143140 */

loc_00139F95: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00139F9Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00139F9D: ;
    eax = MEM32(esi);
    ecx = MEM32(ebp + 0x28);
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00139FABu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00139FAB: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00139FB4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00139FB4: ;
    eax = MEM32(esp + 0x14);
    eax = eax - 0;
    edi = 4;
    ebx = 5;
    if ((eax == 0)) goto loc_00139FDF; /* je: equal / zero */

loc_00139FC7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00139FD6; /* je: equal / zero */

loc_00139FCA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00139FE9; /* jne: not equal / not zero */

loc_00139FCD: ;
    edi = 0; /* xor self */
    ebx = 3;
    goto loc_00139FE9;

loc_00139FD6: ;
    edi = 1;
    ebx = edi;
    goto loc_00139FE9;

loc_00139FDF: ;
    edi = 4;
    ebx = 5;

loc_00139FE9: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = ebp + 0xC;
    if (TEST_NZ(_fa, _fb)) goto loc_0013A00E; /* jne: not equal / not zero */

loc_00139FF3: ;
    PUSH32(esp, 0x00139FF8u); RECOMP_ABI_CALL(0x001430E0u, sub_001430E0); /* call 0x001430E0 */

loc_00139FF8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0013A000u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013A000: ;
    eax = MEM32(esi);
    ecx = MEM32(ebp + 0x28);
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013A00Eu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0013A00E: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0013A016u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013A016: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013A036; /* jne: not equal / not zero */

loc_0013A01B: ;
    PUSH32(esp, 0x0013A020u); RECOMP_ABI_CALL(0x001430E0u, sub_001430E0); /* call 0x001430E0 */

loc_0013A020: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0013A028u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013A028: ;
    eax = MEM32(esi);
    ecx = MEM32(ebp + 0x28);
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013A036u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0013A036: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0013A03Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013A03E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013A050
 * Original: 0x0013A050 - 0x0013A097 (71 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013A050: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx + 4;
    MEM32(ecx + 8) = ebx;
    MEM32(ecx + 0xC) = ebx;
    MEM32(ecx + 0x10) = ebx;
    MEM32(ecx + 0x14) = ebx;
    MEM8(ecx + 0x18) = LO8(ebx);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A094; /* je: equal / zero */

loc_0013A06A: ;
    PUSH32(esp, 0x0013A06Fu); RECOMP_ABI_CALL(0x00142EA0u, sub_00142EA0); /* call 0x00142EA0 */

loc_0013A06F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0013A077u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013A077: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A092; /* je: equal / zero */

loc_0013A07D: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013A092; /* jne: not equal / not zero */

loc_0013A08D: ;
    PUSH32(esp, 0x0013A092u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013A092: ;
    MEM32(esi) = ebx;

loc_0013A094: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013A0A0
 * Original: 0x0013A0A0 - 0x0013A269 (457 bytes, 156 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A0A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013A0A0: ;
    esp = esp - 0x88;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x98);
    PUSH32(esp, 0x80);
    MEM32(esp + 0x94) = eax;
    eax = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0013A0CEu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0013A0CE: ;
    PUSH32(esp, 0x3CAA94);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    MEM8(esp + 0xA3) = LO8(ebx);
    PUSH32(esp, 0x0013A0E2u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_0013A0E2: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013A111; /* jne: not equal / not zero */

loc_0013A0E9: ;
    PUSH32(esp, 0x80);
    ecx = esp + 0x14;
    PUSH32(esp, 0x3CD2FC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0013A0FDu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0013A0FD: ;
    esp = esp + 0xC;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    MEM8(esp + 0x93) = LO8(ebx);
    PUSH32(esp, 0x0013A111u); RECOMP_ABI_CALL(0x0005EAB0u, sub_0005EAB0); /* call 0x0005EAB0 */

loc_0013A111: ;
    PUSH32(esp, 0x0013A116u); RECOMP_ABI_CALL(0x001326E0u, sub_001326E0); /* call 0x001326E0 */

loc_0013A116: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0013A122u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013A122: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013A140; /* jne: not equal / not zero */

loc_0013A126: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x84);
    PUSH32(esp, 0x0013A137u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0013A137: ;
    esp = esp + 0x88;
    esp += 12; return; /* ret 8 */

loc_0013A140: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esi + 8) = eax;
    MEM32(esp + 0xC) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0013A17F; /* je: equal / zero */

loc_0013A14E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0013A153u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013A153: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0013A164; /* jle: less or equal (signed <=) */

loc_0013A157: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0013A160u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013A160: ;
    MEM32(esp + 0xC) = eax;

loc_0013A164: ;
    ecx = esi + 0x34;
    MEM32(esi + 4) = ebx;
    PUSH32(esp, 0x0013A16Fu); RECOMP_ABI_CALL(0x00133050u, sub_00133050); /* call 0x00133050 */

loc_0013A16F: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x0013A177u); RECOMP_ABI_CALL(0x0013A050u, sub_0013A050); /* call 0x0013A050 */

loc_0013A177: ;
    ecx = esi + 0x30;
    PUSH32(esp, 0x0013A17Fu); RECOMP_ABI_CALL(0x00133120u, sub_00133120); /* call 0x00133120 */

loc_0013A17F: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), ebx (32-bit) */
    PUSH32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0013A1C7; /* je: equal / zero */

loc_0013A188: ;
    PUSH32(esp, 0x0013A18Du); RECOMP_ABI_CALL(0x001433E0u, sub_001433E0); /* call 0x001433E0 */

loc_0013A18D: ;
    edx = MEM32(eax);
    edi = esi + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0013A198u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013A198: ;
    eax = MEM32(esi + 8);
    edi = MEM32(edi);
    ebp = MEM32(eax + 0x10);
    edi = edi + 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A1AA; /* je: equal / zero */

loc_0013A1A7: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0013A1AA: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A1C5; /* je: equal / zero */

loc_0013A1B0: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013A1C5; /* jne: not equal / not zero */

loc_0013A1C0: ;
    PUSH32(esp, 0x0013A1C5u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013A1C5: ;
    MEM32(edi) = ebp;

loc_0013A1C7: ;
    eax = MEM32(esi + 8);
    edx = MEM32(eax + 0x20);
    edi = MEM32(eax + 0x24);
    ecx = edx;
    ecx = ecx | edi;
    if ((ecx != 0)) goto loc_0013A1F4; /* jne: not equal / not zero */

loc_0013A1D6: ;
    ecx = MEM32(eax + 0x18);
    ecx = ecx | MEM32(eax + 0x1C);
    if ((ecx != 0)) goto loc_0013A1F4; /* jne: not equal / not zero */

loc_0013A1DE: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A1ED; /* je: equal / zero */

loc_0013A1E5: ;
    MEM32(esi + 4) = ecx;
    edx = MEM32(eax);
    PUSH32(esp, edx);
    goto loc_0013A238;

loc_0013A1ED: ;
    eax = MEM32(eax);
    MEM32(esi + 4) = eax;
    goto loc_0013A23D;

loc_0013A1F4: ;
    ebp = MEM32(eax + 0x18);
    SET_LO8(ecx, MEM8(eax + 0x28));
    MEM32(esi + 0x18) = ebp;
    eax = MEM32(eax + 0x1C);
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = edx;
    MEM32(esi + 0x24) = edi;
    MEM8(esi + 0x28) = LO8(ecx);
    PUSH32(esp, 0x0013A211u); RECOMP_ABI_CALL(0x00142EA0u, sub_00142EA0); /* call 0x00142EA0 */

loc_0013A211: ;
    edx = MEM32(eax);
    ecx = esi + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0013A21Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013A21C: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ecx = MEM32(esi + 0x14);
    MEM32(esi + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0013A232; /* je: equal / zero */

loc_0013A229: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013A22Fu); RECOMP_ABI_CALL(0x00259CC0u, sub_00259CC0); /* call 0x00259CC0 */

loc_0013A22F: ;
    ecx = MEM32(esi + 0x30);

loc_0013A232: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edx);
    PUSH32(esp, eax);

loc_0013A238: ;
    PUSH32(esp, 0x0013A23Du); RECOMP_ABI_CALL(0x00259CC0u, sub_00259CC0); /* call 0x00259CC0 */

loc_0013A23D: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0013A24F; /* je: equal / zero */

loc_0013A246: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0013A24Fu); RECOMP_ABI_CALL(0x00259CC0u, sub_00259CC0); /* call 0x00259CC0 */

loc_0013A24F: ;
    ecx = MEM32(esp + 0x90);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    PUSH32(esp, 0x0013A260u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0013A260: ;
    esp = esp + 0x88;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013A270
 * Original: 0x0013A270 - 0x0013A27D (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A270(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0013A270: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 0x10); /* fsub dword ptr [ecx + 0x10] */
    fp_top() = fp_top() * MEMF(ecx + 8); /* fmul dword ptr [ecx + 8] */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013A280
 * Original: 0x0013A280 - 0x0013A378 (248 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013A280: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352944);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 4;
    if (TEST_Z(_fa, _fb)) goto loc_0013A2C1; /* je: equal / zero */

loc_0013A2AC: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013A2C1; /* jne: not equal / not zero */

loc_0013A2BC: ;
    PUSH32(esp, 0x0013A2C1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013A2C1: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = 3;
    if (TEST_Z(_fa, _fb)) goto loc_0013A2E2; /* je: equal / zero */

loc_0013A2CD: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013A2E2; /* jne: not equal / not zero */

loc_0013A2DD: ;
    PUSH32(esp, 0x0013A2E2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013A2E2: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = 2;
    if (TEST_Z(_fa, _fb)) goto loc_0013A303; /* je: equal / zero */

loc_0013A2EE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013A303; /* jne: not equal / not zero */

loc_0013A2FE: ;
    PUSH32(esp, 0x0013A303u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013A303: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_0013A324; /* je: equal / zero */

loc_0013A30F: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013A324; /* jne: not equal / not zero */

loc_0013A31F: ;
    PUSH32(esp, 0x0013A324u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013A324: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0013A345; /* je: equal / zero */

loc_0013A330: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013A345; /* jne: not equal / not zero */

loc_0013A340: ;
    PUSH32(esp, 0x0013A345u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013A345: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0013A369; /* je: equal / zero */

loc_0013A354: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013A369; /* jne: not equal / not zero */

loc_0013A364: ;
    PUSH32(esp, 0x0013A369u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013A369: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A380
 * Original: 0x0013A380 - 0x0013A477 (247 bytes, 75 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A380(void)
{

loc_0013A380: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(ecx + 0x24);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(ecx + 0x28);
    MEM32(eax + 0x28) = edx;
    edx = MEM32(ecx + 0x2C);
    MEM32(eax + 0x2C) = edx;
    edx = MEM32(ecx + 0x30);
    MEM32(eax + 0x30) = edx;
    edx = MEM32(ecx + 0x34);
    MEM32(eax + 0x34) = edx;
    edx = MEM32(ecx + 0x38);
    MEM32(eax + 0x38) = edx;
    edx = MEM32(ecx + 0x3C);
    MEM32(eax + 0x3C) = edx;
    edx = MEM32(ecx + 0x40);
    MEM32(eax + 0x40) = edx;
    edx = MEM32(ecx + 0x44);
    MEM32(eax + 0x44) = edx;
    edx = MEM32(ecx + 0x48);
    MEM32(eax + 0x48) = edx;
    edx = MEM32(ecx + 0x4C);
    MEM32(eax + 0x4C) = edx;
    edx = MEM32(ecx + 0x50);
    MEM32(eax + 0x50) = edx;
    edx = MEM32(ecx + 0x54);
    MEM32(eax + 0x54) = edx;
    edx = MEM32(ecx + 0x58);
    MEM32(eax + 0x58) = edx;
    edx = MEM32(ecx + 0x5C);
    MEM32(eax + 0x5C) = edx;
    edx = MEM32(ecx + 0x60);
    MEM32(eax + 0x60) = edx;
    edx = MEM32(ecx + 0x64);
    MEM32(eax + 0x64) = edx;
    edx = MEM32(ecx + 0x68);
    MEM32(eax + 0x68) = edx;
    edx = MEM32(ecx + 0x6C);
    MEM32(eax + 0x6C) = edx;
    edx = MEM32(ecx + 0x70);
    MEM32(eax + 0x70) = edx;
    edx = MEM32(ecx + 0x74);
    MEM32(eax + 0x74) = edx;
    edx = MEM32(ecx + 0x78);
    MEM32(eax + 0x78) = edx;
    edx = MEM32(ecx + 0x7C);
    MEM32(eax + 0x7C) = edx;
    edx = MEM32(ecx + 0x80);
    MEM32(eax + 0x80) = edx;
    edx = MEM32(ecx + 0x84);
    MEM32(eax + 0x84) = edx;
    edx = MEM32(ecx + 0x88);
    MEM32(eax + 0x88) = edx;
    ecx = MEM32(ecx + 0x8C);
    MEM32(eax + 0x8C) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013A480
 * Original: 0x0013A480 - 0x0013A487 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A480(void)
{

loc_0013A480: ;
    MEM32(ecx) = 0x3DC1E4;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A490
 * Original: 0x0013A490 - 0x0013A4A5 (21 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A490(void)
{

loc_0013A490: ;
    ecx = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = ecx + 0x20;
    PUSH32(esp, 0x0013A4A2u); RECOMP_ABI_CALL(0x0023E4A0u, sub_0023E4A0); /* call 0x0023E4A0 */

loc_0013A4A2: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0013A4B0
 * Original: 0x0013A4B0 - 0x0013A4B9 (9 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A4B0(void)
{

loc_0013A4B0: ;
    eax = MEM32(ecx + 4);
    eax = MEM32(eax);
    eax = eax + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A4C0
 * Original: 0x0013A4C0 - 0x0013A516 (86 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A4C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013A4C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352958);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0013A500; /* je: equal / zero */

loc_0013A4EB: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013A500; /* jne: not equal / not zero */

loc_0013A4FB: ;
    PUSH32(esp, 0x0013A500u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013A500: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A520
 * Original: 0x0013A520 - 0x0013A5E9 (201 bytes, 66 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A520(void)
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

loc_0013A520: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352978);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013A563; /* je: equal / zero */

loc_0013A540: ;
    eax = MEM32(esi + 4);
    eax = MEM32(eax);
    PUSH32(esp, edi);
    ecx = esi + 0x1C;
    edi = eax + 0x20;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0013A554u); RECOMP_ABI_CALL(0x00242660u, sub_00242660); /* call 0x00242660 */

loc_0013A554: ;
    edx = MEM32(esi + 4);
    ecx = MEM32(edx);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x0013A562u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013A562: ;
    POP32(esp, edi);

loc_0013A563: ;
    ecx = MEM32(esi + 4);
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013A570; /* je: equal / zero */

loc_0013A56D: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0013A570: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x10); /* fsub dword ptr [esi + 0x10] */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    fp_top() = fp_top() * MEMF(esi + 8); /* fmul dword ptr [esi + 8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi + 0xc] */
    POP32(esp, esi);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013A5BE; /* jne: not equal / not zero */

loc_0013A58D: ;
    MEM32(ecx + 0x28) = 0;
    fp_pop(); /* fstp st(0) */
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013A5AB; /* jne: not equal / not zero */

loc_0013A5A6: ;
    PUSH32(esp, 0x0013A5ABu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013A5AB: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_0013A5BE: ;
    MEMF(ecx + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013A5D6; /* jne: not equal / not zero */

loc_0013A5D1: ;
    PUSH32(esp, 0x0013A5D6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013A5D6: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, 1);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013A5F0
 * Original: 0x0013A5F0 - 0x0013A696 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013A5F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3529B1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0013A615u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_0013A615: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0013A621u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0013A621: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0013A629u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0013A629: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013A62Fu); RECOMP_ABI_CALL(0x001E1BF0u, sub_001E1BF0); /* call 0x001E1BF0 */

loc_0013A62F: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x0013A643u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0013A643: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0013A64Bu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0013A64B: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0013A65B; /* je: equal / zero */

loc_0013A658: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0013A65B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0013A683; /* je: equal / zero */

loc_0013A66C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013A683; /* jne: not equal / not zero */

loc_0013A67C: ;
    ecx = esi;
    PUSH32(esp, 0x0013A683u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013A683: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A6A0
 * Original: 0x0013A6A0 - 0x0013A746 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A6A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013A6A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3529B1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0013A6C5u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_0013A6C5: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0013A6D1u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0013A6D1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0013A6D9u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0013A6D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013A6DFu); RECOMP_ABI_CALL(0x002881E0u, sub_002881E0); /* call 0x002881E0 */

loc_0013A6DF: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x0013A6F3u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0013A6F3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0013A6FBu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0013A6FB: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0013A70B; /* je: equal / zero */

loc_0013A708: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0013A70B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0013A733; /* je: equal / zero */

loc_0013A71C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013A733; /* jne: not equal / not zero */

loc_0013A72C: ;
    ecx = esi;
    PUSH32(esp, 0x0013A733u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013A733: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A750
 * Original: 0x0013A750 - 0x0013A7F6 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013A750: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3529B1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0013A775u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_0013A775: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0013A781u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0013A781: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0013A789u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0013A789: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013A78Fu); RECOMP_ABI_CALL(0x00288560u, sub_00288560); /* call 0x00288560 */

loc_0013A78F: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x0013A7A3u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0013A7A3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0013A7ABu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0013A7AB: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0013A7BB; /* je: equal / zero */

loc_0013A7B8: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0013A7BB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0013A7E3; /* je: equal / zero */

loc_0013A7CC: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013A7E3; /* jne: not equal / not zero */

loc_0013A7DC: ;
    ecx = esi;
    PUSH32(esp, 0x0013A7E3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013A7E3: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A800
 * Original: 0x0013A800 - 0x0013A8A6 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013A800: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3529B1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0013A825u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_0013A825: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0013A831u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0013A831: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0013A839u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0013A839: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013A83Fu); RECOMP_ABI_CALL(0x00296390u, sub_00296390); /* call 0x00296390 */

loc_0013A83F: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x0013A853u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0013A853: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0013A85Bu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0013A85B: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0013A86B; /* je: equal / zero */

loc_0013A868: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0013A86B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0013A893; /* je: equal / zero */

loc_0013A87C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013A893; /* jne: not equal / not zero */

loc_0013A88C: ;
    ecx = esi;
    PUSH32(esp, 0x0013A893u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013A893: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A8B0
 * Original: 0x0013A8B0 - 0x0013A956 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A8B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013A8B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3529B1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0013A8D5u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_0013A8D5: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0013A8E1u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0013A8E1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0013A8E9u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0013A8E9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013A8EFu); RECOMP_ABI_CALL(0x001DFB60u, sub_001DFB60); /* call 0x001DFB60 */

loc_0013A8EF: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x0013A903u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0013A903: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0013A90Bu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0013A90B: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0013A91B; /* je: equal / zero */

loc_0013A918: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0013A91B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0013A943; /* je: equal / zero */

loc_0013A92C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013A943; /* jne: not equal / not zero */

loc_0013A93C: ;
    ecx = esi;
    PUSH32(esp, 0x0013A943u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013A943: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A960
 * Original: 0x0013A960 - 0x0013AA06 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013A960: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3529B1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0013A985u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_0013A985: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0013A991u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0013A991: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0013A999u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0013A999: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013A99Fu); RECOMP_ABI_CALL(0x001E18B0u, sub_001E18B0); /* call 0x001E18B0 */

loc_0013A99F: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x0013A9B3u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0013A9B3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0013A9BBu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0013A9BB: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0013A9CB; /* je: equal / zero */

loc_0013A9C8: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0013A9CB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0013A9F3; /* je: equal / zero */

loc_0013A9DC: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013A9F3; /* jne: not equal / not zero */

loc_0013A9EC: ;
    ecx = esi;
    PUSH32(esp, 0x0013A9F3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013A9F3: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AA10
 * Original: 0x0013AA10 - 0x0013AAB6 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013AA10: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3529B1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0013AA35u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_0013AA35: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0013AA41u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0013AA41: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0013AA49u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0013AA49: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013AA4Fu); RECOMP_ABI_CALL(0x00246D40u, sub_00246D40); /* call 0x00246D40 */

loc_0013AA4F: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x0013AA63u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0013AA63: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0013AA6Bu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0013AA6B: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0013AA7B; /* je: equal / zero */

loc_0013AA78: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0013AA7B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0013AAA3; /* je: equal / zero */

loc_0013AA8C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013AAA3; /* jne: not equal / not zero */

loc_0013AA9C: ;
    ecx = esi;
    PUSH32(esp, 0x0013AAA3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013AAA3: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AAC0
 * Original: 0x0013AAC0 - 0x0013ABB1 (241 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AAC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013AAC0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x600);
    PUSH32(esp, edi);
    edi = ebx + 0x600;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013AAF1; /* jne: not equal / not zero */

loc_0013AAD6: ;
    ecx = ecx & 0xFFFFFFE0u;
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013ABA7; /* jge: greater or equal (signed >=) */

loc_0013AAE5: ;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013AAD6; /* je: equal / zero */

loc_0013AAF1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013AAFE; /* jne: not equal / not zero */

loc_0013AAF8: ;
    ecx = ecx + 0x10;
    eax = eax >> 0x10;

loc_0013AAFE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013AB08; /* jne: not equal / not zero */

loc_0013AB02: ;
    ecx = ecx + 8;
    eax = eax >> 8;

loc_0013AB08: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013AB12; /* jne: not equal / not zero */

loc_0013AB0C: ;
    ecx = ecx + 4;
    eax = eax >> 4;

loc_0013AB12: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013AB1D; /* jne: not equal / not zero */

loc_0013AB16: ;
    eax = eax >> 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013AB16; /* je: equal / zero */

loc_0013AB1D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013ABA7; /* jge: greater or equal (signed >=) */

loc_0013AB26: ;
    PUSH32(esp, esi);
    esi = ecx;
    /* nop */

loc_0013AB30: ;
    ecx = esi + esi * 2;
    ecx = ebx + ecx * 8;
    PUSH32(esp, 0x0013AB3Bu); RECOMP_ABI_CALL(0x0013A280u, sub_0013A280); /* call 0x0013A280 */

loc_0013AB3B: ;
    eax = esi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013ABA6; /* jge: greater or equal (signed >=) */

loc_0013AB43: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    edx = MEM32(edi + edx * 4);
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013AB6D; /* jne: not equal / not zero */

loc_0013AB56: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013ABA6; /* jge: greater or equal (signed >=) */

loc_0013AB61: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = MEM32(edi + ecx * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013AB56; /* je: equal / zero */

loc_0013AB6D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013AB7B; /* jne: not equal / not zero */

loc_0013AB75: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_0013AB7B: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013AB85; /* jne: not equal / not zero */

loc_0013AB7F: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_0013AB85: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013AB90; /* jne: not equal / not zero */

loc_0013AB8A: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_0013AB90: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013AB9D; /* jne: not equal / not zero */

loc_0013AB95: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013AB95; /* je: equal / zero */

loc_0013AB9D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013ABA6; /* jge: greater or equal (signed >=) */

loc_0013ABA2: ;
    esi = eax;
    goto loc_0013AB30;

loc_0013ABA6: ;
    POP32(esp, esi);

loc_0013ABA7: ;
    edx = 0; /* xor self */
    MEM32(edi) = edx;
    MEM32(edi + 4) = edx;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013ABC0
 * Original: 0x0013ABC0 - 0x0013AC07 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013ABC0(void)
{

loc_0013ABC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x0013ABCFu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_0013ABCF: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0013ABE2u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_0013ABE2: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0013ABF4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013ABF4: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013ABFFu); RECOMP_ABI_CALL(0x0013A5F0u, sub_0013A5F0); /* call 0x0013A5F0 */

loc_0013ABFF: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013AC10
 * Original: 0x0013AC10 - 0x0013AC57 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AC10(void)
{

loc_0013AC10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x0013AC1Fu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_0013AC1F: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0013AC32u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_0013AC32: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0013AC44u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013AC44: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013AC4Fu); RECOMP_ABI_CALL(0x0013A6A0u, sub_0013A6A0); /* call 0x0013A6A0 */

loc_0013AC4F: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013AC60
 * Original: 0x0013AC60 - 0x0013ACA7 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AC60(void)
{

loc_0013AC60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x0013AC6Fu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_0013AC6F: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0013AC82u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_0013AC82: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0013AC94u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013AC94: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013AC9Fu); RECOMP_ABI_CALL(0x0013A750u, sub_0013A750); /* call 0x0013A750 */

loc_0013AC9F: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013ACB0
 * Original: 0x0013ACB0 - 0x0013ACF7 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013ACB0(void)
{

loc_0013ACB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x0013ACBFu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_0013ACBF: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0013ACD2u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_0013ACD2: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0013ACE4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013ACE4: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013ACEFu); RECOMP_ABI_CALL(0x0013A800u, sub_0013A800); /* call 0x0013A800 */

loc_0013ACEF: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013AD00
 * Original: 0x0013AD00 - 0x0013AD47 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AD00(void)
{

loc_0013AD00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x0013AD0Fu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_0013AD0F: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0013AD22u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_0013AD22: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0013AD34u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013AD34: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013AD3Fu); RECOMP_ABI_CALL(0x0013A8B0u, sub_0013A8B0); /* call 0x0013A8B0 */

loc_0013AD3F: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013AD50
 * Original: 0x0013AD50 - 0x0013AD97 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AD50(void)
{

loc_0013AD50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x0013AD5Fu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_0013AD5F: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0013AD72u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_0013AD72: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0013AD84u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013AD84: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013AD8Fu); RECOMP_ABI_CALL(0x0013A960u, sub_0013A960); /* call 0x0013A960 */

loc_0013AD8F: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013ADA0
 * Original: 0x0013ADA0 - 0x0013ADE7 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013ADA0(void)
{

loc_0013ADA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x0013ADAFu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_0013ADAF: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0013ADC2u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_0013ADC2: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0013ADD4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013ADD4: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013ADDFu); RECOMP_ABI_CALL(0x0013AA10u, sub_0013AA10); /* call 0x0013AA10 */

loc_0013ADDF: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013ADF0
 * Original: 0x0013ADF0 - 0x0013AE4E (94 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013ADF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013ADF0: ;
    eax = MEM32(XBOX_FS_BASE);
    SET_LO8(ecx, MEM8(0x546068));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3529CE);
    PUSH32(esp, eax);
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_0013AE3B; /* jne: not equal / not zero */

loc_0013AE14: ;
    MEM32(0x546068) = MEM32(0x546068) | eax;
    PUSH32(esp, 3);
    PUSH32(esp, 0x546064);
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0013AE2Eu); RECOMP_ABI_CALL(0x0013ABC0u, sub_0013ABC0); /* call 0x0013ABC0 */

loc_0013AE2E: ;
    PUSH32(esp, 0x35A3B0);
    PUSH32(esp, 0x0013AE38u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_0013AE38: ;
    esp = esp + 0xC;

loc_0013AE3B: ;
    ecx = MEM32(esp);
    eax = 0x546064;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AE50
 * Original: 0x0013AE50 - 0x0013B0CA (634 bytes, 209 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AE50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013AE50: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352A2F);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 3;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = edi;
    PUSH32(esp, 0x0013AE7Eu); RECOMP_ABI_CALL(0x0013AC10u, sub_0013AC10); /* call 0x0013AC10 */

loc_0013AE7E: ;
    eax = edi + 4;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esp + 0x40) = 0;
    PUSH32(esp, 0x0013AE90u); RECOMP_ABI_CALL(0x0013AD50u, sub_0013AD50); /* call 0x0013AD50 */

loc_0013AE90: ;
    eax = edi + 8;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM8(esp + 0x48) = 1;
    PUSH32(esp, 0x0013AE9Fu); RECOMP_ABI_CALL(0x0013ACB0u, sub_0013ACB0); /* call 0x0013ACB0 */

loc_0013AE9F: ;
    esi = edi + 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM8(esp + 0x50) = 2;
    PUSH32(esp, 0x0013AEAEu); RECOMP_ABI_CALL(0x0013AD00u, sub_0013AD00); /* call 0x0013AD00 */

loc_0013AEAE: ;
    ebp = edi + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM8(esp + 0x58) = LO8(ebx);
    PUSH32(esp, 0x0013AEBCu); RECOMP_ABI_CALL(0x0013AC60u, sub_0013AC60); /* call 0x0013AC60 */

loc_0013AEBC: ;
    esp = esp + 0x28;
    MEM32(edi + 0x14) = 0;
    eax = MEM32(ebp);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    MEM8(esp + 0x34) = 5;
    PUSH32(esp, 0x0013AED6u); RECOMP_ABI_CALL(0x00259CC0u, sub_00259CC0); /* call 0x00259CC0 */

loc_0013AED6: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(ebp);
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013AEE5u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0013AEE5: ;
    edx = MEM32(ebp);
    eax = MEM32(edi + 0x14);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0013AEFC; /* je: equal / zero */

loc_0013AEF9: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0013AEFC: ;
    ecx = MEM32(edx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013AF1C; /* je: equal / zero */

loc_0013AF03: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + 4), 0x7FFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013AF1C; /* jne: not equal / not zero */

loc_0013AF0F: ;
    PUSH32(esp, 0x0013AF14u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013AF14: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);

loc_0013AF1C: ;
    MEM32(edx + 0xC) = eax;
    eax = esp + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013AF2Au); RECOMP_ABI_CALL(0x0013ADA0u, sub_0013ADA0); /* call 0x0013ADA0 */

loc_0013AF2A: ;
    esp = esp + 8;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM8(esp + 0x30) = 6;
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013AF3F; /* je: equal / zero */

loc_0013AF3C: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0013AF3F: ;
    ecx = MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013AF5E; /* je: equal / zero */

loc_0013AF46: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013AF5E; /* jne: not equal / not zero */

loc_0013AF55: ;
    PUSH32(esp, 0x0013AF5Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013AF5A: ;
    eax = MEM32(esp + 0x14);

loc_0013AF5E: ;
    MEM32(edi + 0x14) = eax;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM8(esp + 0x30) = 5;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013AF86; /* je: equal / zero */

loc_0013AF70: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013AF86; /* jne: not equal / not zero */

loc_0013AF81: ;
    PUSH32(esp, 0x0013AF86u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013AF86: ;
    eax = MEM32(edi + 0x14);
    ecx = 0xC3480000u;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    eax = MEM32(edi + 0x14);
    ecx = 0x43480000;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    eax = MEM32(esi);
    MEM32(eax + 0xC) = ebx;
    eax = MEM32(esi);
    MEM32(eax + 0x14) = ebx;
    eax = MEM32(esi);
    MEM32(eax + 0x10) = ebx;
    eax = MEM32(esi);
    MEM32(eax + 0x18) = ebp;
    eax = MEM32(esi);
    MEM32(eax + 8) = ebx;
    eax = MEM32(esi);
    MEM32(eax + 0x1C) = ebp;
    eax = MEM32(esi);
    MEM32(eax + 0x20) = 1;
    eax = MEM32(esi);
    MEM32(eax + 0x24) = ebp;
    eax = MEM32(esi);
    MEM32(eax + 0x2C) = ebx;
    eax = MEM32(esi);
    MEM32(eax + 0x28) = ebx;
    eax = MEM32(edi + 8);
    MEM8(eax + 0xC) = 0;
    PUSH32(esp, 0x0013AFEAu); RECOMP_ABI_CALL(0x001941B0u, sub_001941B0); /* call 0x001941B0 */

loc_0013AFEA: ;
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0013AFF9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013AFF9: ;
    eax = MEM32(eax);
    ecx = MEM32(edi + 4);
    esi = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x28);
    PUSH32(esp, esi);
    MEM8(esp + 0x44) = 7;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0013B014u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013B014: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM8(esp + 0x30) = 5;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013B03B; /* je: equal / zero */

loc_0013B023: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0013B03B; /* jne: not equal / not zero */

loc_0013B036: ;
    PUSH32(esp, 0x0013B03Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013B03B: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x28);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0013B04Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013B04A: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x0013B056u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013B056: ;
    ebx = MEM32(edi + 4);
    PUSH32(esp, 0x0013B05Eu); RECOMP_ABI_CALL(0x0013ADF0u, sub_0013ADF0); /* call 0x0013ADF0 */

loc_0013B05E: ;
    esi = MEM32(eax);
    esi = esi + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B06A; /* je: equal / zero */

loc_0013B067: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0013B06A: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B085; /* je: equal / zero */

loc_0013B070: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013B085; /* jne: not equal / not zero */

loc_0013B080: ;
    PUSH32(esp, 0x0013B085u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013B085: ;
    MEM32(esi) = ebx;
    MEM32(esp + 0x1C) = 0x3F800000;
    MEM32(esp + 0x20) = 0x3F800000;
    MEM32(esp + 0x24) = 0x3F800000;
    PUSH32(esp, 0x0013B0A4u); RECOMP_ABI_CALL(0x0013ADF0u, sub_0013ADF0); /* call 0x0013ADF0 */

loc_0013B0A4: ;
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, 0x0013B0B5u); RECOMP_ABI_CALL(0x001BA5B0u, sub_001BA5B0); /* call 0x001BA5B0 */

loc_0013B0B5: ;
    ecx = MEM32(esp + 0x28);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B0D0
 * Original: 0x0013B0D0 - 0x0013B0D5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B0D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013B0D0: ;
    g_seh_ebp = ebp; sub_0013AAC0(); return; /* tail jmp 0x0013AAC0 */

}

/**
 * sub_0013B0E0
 * Original: 0x0013B0E0 - 0x0013B1CF (239 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B0E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B0E0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352A68);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x9C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    MEM32(esi + 0x104) = ebx;
    eax = 0; /* xor self */
    MEM32(esi + 0x708) = eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = esi;
    MEM32(esi + 0x70C) = eax;
    eax = MEM32(esi + 0x104);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    MEM32(esp + 0xB0) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0013B192; /* je: equal / zero */

loc_0013B12E: ;
    edi = edi;

loc_0013B130: ;
    ecx = edi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = esi + ecx * 4 + 0x708;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    MEM32(eax) = MEM32(eax) | edx;
    eax = edi + edi * 2;
    ecx = esi + eax * 8 + 0x108;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM8(esp + 0xB0) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0013B16D; /* je: equal / zero */

loc_0013B168: ;
    PUSH32(esp, 0x0013B16Du); RECOMP_ABI_CALL(0x0013AE50u, sub_0013AE50); /* call 0x0013AE50 */

loc_0013B16D: ;
    ecx = MEM32(esi + 0x104);
    MEM32(esi + ecx * 4) = edi;
    edx = MEM32(esi + 0x104);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    MEM8(esp + 0xB0) = LO8(ebx);
    MEM32(esi + 0x104) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0013B130; /* jne: not equal / not zero */

loc_0013B192: ;
    edi = esi + 0x710;
    ebx = 0x28;
    /* nop */

loc_0013B1A0: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0013B1ACu); RECOMP_ABI_CALL(0x0013A380u, sub_0013A380); /* call 0x0013A380 */

loc_0013B1AC: ;
    edi = edi + 0x90;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0013B1A0; /* jne: not equal / not zero */

loc_0013B1B5: ;
    ecx = MEM32(esp + 0xA8);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xA8;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B1D0
 * Original: 0x0013B1D0 - 0x0013B21F (79 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B1D0(void)
{

loc_0013B1D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352A8E);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = ecx;
    esi = ecx + 0x108;
    ecx = esi;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0013B200u); RECOMP_ABI_CALL(0x0013AAC0u, sub_0013AAC0); /* call 0x0013AAC0 */

loc_0013B200: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0013B20Fu); RECOMP_ABI_CALL(0x0013AAC0u, sub_0013AAC0); /* call 0x0013AAC0 */

loc_0013B20F: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B220
 * Original: 0x0013B220 - 0x0013B27C (92 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B220: ;
    eax = MEM32(XBOX_FS_BASE);
    SET_LO8(ecx, MEM8(0x547E00));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352AAE);
    PUSH32(esp, eax);
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_0013B269; /* jne: not equal / not zero */

loc_0013B244: ;
    MEM32(0x547E00) = MEM32(0x547E00) | eax;
    ecx = 0x546070;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0013B25Cu); RECOMP_ABI_CALL(0x0013B0E0u, sub_0013B0E0); /* call 0x0013B0E0 */

loc_0013B25C: ;
    PUSH32(esp, 0x35A3C0);
    PUSH32(esp, 0x0013B266u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_0013B266: ;
    esp = esp + 4;

loc_0013B269: ;
    ecx = MEM32(esp);
    eax = 0x546070;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B280
 * Original: 0x0013B280 - 0x0013B2AF (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B280: ;
    ecx = MEM32(ecx + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x0013B288u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013B288: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0013B2AE; /* jle: less or equal (signed <=) */

loc_0013B28C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    edi = eax;

loc_0013B292: ;
    PUSH32(esp, 0x0013B297u); RECOMP_ABI_CALL(0x0013B220u, sub_0013B220); /* call 0x0013B220 */

loc_0013B297: ;
    ecx = eax + esi + 0x710;
    PUSH32(esp, 0x0013B2A3u); RECOMP_ABI_CALL(0x001ACD50u, sub_001ACD50); /* call 0x001ACD50 */

loc_0013B2A3: ;
    esi = esi + 0x90;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0013B292; /* jne: not equal / not zero */

loc_0013B2AC: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0013B2AE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B2B0
 * Original: 0x0013B2B0 - 0x0013B32C (124 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B2B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B2B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352AC8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    MEM32(esi) = 0x3DC58C;
    edi = MEM32(esi + 4);
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x0013B2E4u); RECOMP_ABI_CALL(0x0013B220u, sub_0013B220); /* call 0x0013B220 */

loc_0013B2E4: ;
    ecx = eax;
    edi = edi - ecx;
    edi = edi - 0x108;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = MEM32(ecx + 0x104);
    MEM32(ecx + edx * 4) = eax;
    MEM32(ecx + 0x104) = MEM32(ecx + 0x104) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x104)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0x3DC1E4;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B330
 * Original: 0x0013B330 - 0x0013B345 (21 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B330(void)
{

loc_0013B330: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(eax);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 0;
    esp += 8; return; /* ret 4 */

}
