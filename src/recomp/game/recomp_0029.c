#include "engine/progression/talent_package_guest.h"
#include "ui/pc_menu.h"
#include "engine/progression/raven_talent_runtime.h"
#include "engine/resources/pkgb_decode.h"
#include "app/build_settings.h"
/**
 * X-Men Legends - Recompiled code chunk 29
 * Functions: 250 (0x001494F0 - 0x00151DD0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001494F0
 * Original: 0x001494F0 - 0x00149511 (33 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001494F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001494F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + 4;
    ecx = edi;
    PUSH32(esp, 0x001494FCu); RECOMP_ABI_CALL(0x00149520u, sub_00149520); /* call 0x00149520 */

loc_001494FC: ;
    esi = 0; /* xor self */
    edi = edi;

loc_00149500: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00149508u); RECOMP_ABI_CALL(0x00147AB0u, sub_00147AB0); /* call 0x00147AB0 */

loc_00149508: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00149500; /* jl: less (signed <) */

loc_0014950E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00149520
 * Original: 0x00149520 - 0x0014953E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149520(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00149520: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    MEM32(esi + 0x2034) = eax;
    MEM32(esi + 0x2030) = eax;
    PUSH32(esp, 0x00149536u); RECOMP_ABI_CALL(0x00147D80u, sub_00147D80); /* call 0x00147D80 */

loc_00149536: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00148970(); return; /* tail jmp 0x00148970 */

}

/**
 * sub_00149540
 * Original: 0x00149540 - 0x0014955E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00149540: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00149556; /* je: equal / zero */

loc_0014954B: ;
    PUSH32(esp, eax);
    ecx = 0x557E04;
    PUSH32(esp, 0x00149556u); RECOMP_ABI_CALL(0x00149460u, sub_00149460); /* call 0x00149460 */

loc_00149556: ;
    MEM32(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00149560
 * Original: 0x00149560 - 0x0014957B (27 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149560(void)
{

loc_00149560: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 4;
    MEM32(esi) = 0x3DCCC4;
    PUSH32(esp, 0x00149571u); RECOMP_ABI_CALL(0x001493C0u, sub_001493C0); /* call 0x001493C0 */

loc_00149571: ;
    MEM32(esi) = 0x3DCCE0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00149580
 * Original: 0x00149580 - 0x0014959E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00149580: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00149588u); RECOMP_ABI_CALL(0x001494C0u, sub_001494C0); /* call 0x001494C0 */

loc_00149588: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00149598; /* je: equal / zero */

loc_0014958F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00149595u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00149595: ;
    esp = esp + 4;

loc_00149598: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001495A0
 * Original: 0x001495A0 - 0x001495A5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001495A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001495A0: ;
    g_seh_ebp = ebp; sub_00144100(); return; /* tail jmp 0x00144100 */

}

/**
 * sub_001495B0
 * Original: 0x001495B0 - 0x00149645 (149 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001495B0(void)
{

loc_001495B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3536A8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x001495D8u); RECOMP_ABI_CALL(0x00144730u, sub_00144730); /* call 0x00144730 */

loc_001495D8: ;
    MEM32(esi + 0x160) = 0x3DCD00;
    ecx = MEM32(esi + 0x130);
    MEM32(esi) = 0x3DCD1C;
    MEM32(esi + 0x160) = 0x3DCD0C;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(esp + 0x18) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00149607u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00149607: ;
    PUSH32(esp, 2);
    ecx = esi;
    MEM8(esi + 0x19) = 0;
    PUSH32(esp, 0x00149614u); RECOMP_ABI_CALL(0x001436A0u, sub_001436A0); /* call 0x001436A0 */

loc_00149614: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edi = esi + 0xAC;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x00149627u); RECOMP_ABI_CALL(0x001307E0u, sub_001307E0); /* call 0x001307E0 */

loc_00149627: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x00149630u); RECOMP_ABI_CALL(0x001300F0u, sub_001300F0); /* call 0x001300F0 */

loc_00149630: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00149650
 * Original: 0x00149650 - 0x0014965E (14 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00149650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00149650: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014965B; /* je: equal / zero */

loc_00149654: ;
    eax = ecx + 0x160;
    esp += 4; return; /* ret */

loc_0014965B: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00149660
 * Original: 0x00149660 - 0x001496DE (126 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149660(void)
{

loc_00149660: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3536C8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0x00149687u); RECOMP_ABI_CALL(0x001495B0u, sub_001495B0); /* call 0x001495B0 */

loc_00149687: ;
    ecx = MEM32(esi + 0x130);
    MEM32(esi) = 0x3DCD94;
    MEM32(esi + 0x160) = 0x3DCD84;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    MEM32(esp + 0x14) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x001496ACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001496AC: ;
    PUSH32(esp, 2);
    ecx = esi;
    MEM8(esi + 0x19) = 0;
    PUSH32(esp, 0x001496B9u); RECOMP_ABI_CALL(0x001436A0u, sub_001436A0); /* call 0x001436A0 */

loc_001496B9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0xAC;
    PUSH32(esp, 0x001496CAu); RECOMP_ABI_CALL(0x001307E0u, sub_001307E0); /* call 0x001307E0 */

loc_001496CA: ;
    ecx = MEM32(esp + 8);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001496E0
 * Original: 0x001496E0 - 0x001496E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001496E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001496E0: ;
    g_seh_ebp = ebp; sub_001444E0(); return; /* tail jmp 0x001444E0 */

}

/**
 * sub_001496F0
 * Original: 0x001496F0 - 0x0014977B (139 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001496F0(void)
{

loc_001496F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3536C8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0x00149717u); RECOMP_ABI_CALL(0x001495B0u, sub_001495B0); /* call 0x001495B0 */

loc_00149717: ;
    ecx = MEM32(esi + 0x12C);
    MEM32(esi) = 0x3DCE0C;
    MEM32(esi + 0x160) = 0x3DCDFC;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(esp + 0x14) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0014973Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014973C: ;
    ecx = MEM32(esi + 0x130);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00149749u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00149749: ;
    PUSH32(esp, 2);
    ecx = esi;
    MEM8(esi + 0x19) = 0;
    PUSH32(esp, 0x00149756u); RECOMP_ABI_CALL(0x001436A0u, sub_001436A0); /* call 0x001436A0 */

loc_00149756: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0xAC;
    PUSH32(esp, 0x00149767u); RECOMP_ABI_CALL(0x001307E0u, sub_001307E0); /* call 0x001307E0 */

loc_00149767: ;
    ecx = MEM32(esp + 8);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00149780
 * Original: 0x00149780 - 0x0014979E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00149780: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00149788u); RECOMP_ABI_CALL(0x001496E0u, sub_001496E0); /* call 0x001496E0 */

loc_00149788: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00149798; /* je: equal / zero */

loc_0014978F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00149795u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00149795: ;
    esp = esp + 4;

loc_00149798: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001497A0
 * Original: 0x001497A0 - 0x001497DC (60 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001497A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001497A0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001497D7; /* je: equal / zero */

loc_001497AC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 8);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x001497B7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001497B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_001497D6; /* jg: greater (signed >) */

loc_001497BB: ;
    ecx = MEM32(edi + -348);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001497C7u); RECOMP_ABI_CALL(0x00259CC0u, sub_00259CC0); /* call 0x00259CC0 */

loc_001497C7: ;
    ecx = MEM32(ebx + 0x38);
    PUSH32(esp, ecx);
    ecx = edi + -352;
    PUSH32(esp, 0x001497D6u); RECOMP_ABI_CALL(0x001435E0u, sub_001435E0); /* call 0x001435E0 */

loc_001497D6: ;
    POP32(esp, esi);

loc_001497D7: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001497E0
 * Original: 0x001497E0 - 0x00149814 (52 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001497E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001497E0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00149810; /* je: equal / zero */

loc_001497E9: ;
    eax = MEM32(ecx + -352);
    PUSH32(esp, esi);
    esi = ecx + -352;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x001497FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001497FD: ;
    ecx = MEM32(edi + 0x38);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00149808u); RECOMP_ABI_CALL(0x00143970u, sub_00143970); /* call 0x00143970 */

loc_00149808: ;
    ecx = edi;
    PUSH32(esp, 0x0014980Fu); RECOMP_ABI_CALL(0x00147C50u, sub_00147C50); /* call 0x00147C50 */

loc_0014980F: ;
    POP32(esp, esi);

loc_00149810: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00149820
 * Original: 0x00149820 - 0x00149827 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149820(void)
{

loc_00149820: ;
    MEM32(ecx) = 0x3DC10C;
    esp += 4; return; /* ret */

}

/**
 * sub_00149830
 * Original: 0x00149830 - 0x0014984D (29 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149830(void)
{

loc_00149830: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    esi = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00149840u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00149840: ;
    esp = esp + 0xC;
    MEM8(esi + 0xF) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00149850
 * Original: 0x00149850 - 0x001498E0 (144 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00149850: ;
    eax = MEM32(ecx + 0x400);
    PUSH32(esp, esi);
    esi = ecx + 0x400;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014987D; /* jne: not equal / not zero */

loc_00149863: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001498C5; /* jge: greater or equal (signed >=) */

loc_00149871: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00149863; /* je: equal / zero */

loc_0014987D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014988A; /* jne: not equal / not zero */

loc_00149884: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_0014988A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00149894; /* jne: not equal / not zero */

loc_0014988E: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_00149894: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014989E; /* jne: not equal / not zero */

loc_00149898: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_0014989E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001498A9; /* jne: not equal / not zero */

loc_001498A2: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001498A2; /* je: equal / zero */

loc_001498A9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001498C5; /* jge: greater or equal (signed >=) */

loc_001498B1: ;
    eax = edx;

loc_001498B3: ;
    PUSH32(esp, 1);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001498BEu); RECOMP_ABI_CALL(0x000A2F60u, sub_000A2F60); /* call 0x000A2F60 */

loc_001498BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001498B3; /* jl: less (signed <) */

loc_001498C5: ;
    ecx = 0; /* xor self */
    MEM32(esi) = ecx;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001498E0
 * Original: 0x001498E0 - 0x00149942 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001498E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001498E0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x824) = esi;
    MEM32(ecx + 0x828) = esi;
    MEM32(ecx + 0x82C) = esi;
    edx = 0; /* xor self */
    goto loc_00149900;

    /* nop */

loc_00149900: ;
    eax = MEM32(ecx + 0x824);
    edi = MEM32(ecx + 0x82C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    MEM32(ecx + 0x824) = eax;
    MEM32(ecx + 0x82C) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0014992E; /* jl: less (signed <) */

loc_00149921: ;
    MEM32(ecx + 0x824) = esi;
    eax = 0xFF;
    goto loc_0014992F;

loc_0014992E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0014992F: ;
    MEM32(ecx + eax * 4 + 0x420) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x100 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00149900; /* jl: less (signed <) */

loc_0014993F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00149950
 * Original: 0x00149950 - 0x001499B4 (100 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149950(void)
{

loc_00149950: ;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x400;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(esi + 0x824) = eax;
    MEM32(esi + 0x828) = eax;
    MEM32(esi + 0x82C) = eax;
    edx = 0; /* xor self */
    ecx = esi + 0x830;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x14) = edx;
    MEM32(ecx + 0x18) = edx;
    MEM32(ecx + 0x1C) = edx;
    ecx = esi;
    MEM32(esi + 0x850) = eax;
    PUSH32(esp, 0x001499B0u); RECOMP_ABI_CALL(0x001498E0u, sub_001498E0); /* call 0x001498E0 */

loc_001499B0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001499C0
 * Original: 0x001499C0 - 0x00149A24 (100 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001499C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001499C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001499C9u); RECOMP_ABI_CALL(0x00149950u, sub_00149950); /* call 0x00149950 */

loc_001499C9: ;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(esi + 0xC54) = eax;
    MEM32(esi + 0xC58) = eax;
    edx = 0xFF;
    edi = 0; /* xor self */

loc_001499E0: ;
    ecx = ecx + ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    ecx = ecx | 1;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001499E0; /* jne: not equal / not zero */

loc_001499EC: ;
    MEM32(esi + 0xC54) = ecx;
    MEM32(esi + 0xC58) = edi;
    edx = esi + 0x854;
    edi = edi;

loc_00149A00: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0xC58);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00149A00; /* jl: less (signed <) */

loc_00149A1F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00149A30
 * Original: 0x00149A30 - 0x00149A35 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149A30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00149A30: ;
    g_seh_ebp = ebp; sub_00149850(); return; /* tail jmp 0x00149850 */

}

/**
 * sub_00149A40
 * Original: 0x00149A40 - 0x00149B2C (236 bytes, 73 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00149A40: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3536F3);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 8) = edi;
    ecx = edi + 4;
    MEM32(esp + 0x14) = 0;
    MEM32(edi) = 0x3DCE98;
    PUSH32(esp, 0x00149A74u); RECOMP_ABI_CALL(0x001499C0u, sub_001499C0); /* call 0x001499C0 */

loc_00149A74: ;
    esi = edi + 0xC64;
    MEM8(esp + 0x14) = 1;
    MEM8(esi) = 0;
    PUSH32(esp, 0x00149A87u); RECOMP_ABI_CALL(0x0011D8C0u, sub_0011D8C0); /* call 0x0011D8C0 */

loc_00149A87: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DCE90);
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3DCE84);
    PUSH32(esp, 0x3CD008);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00149AA0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00149AA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00149AA6u); RECOMP_ABI_CALL(0x00199B50u, sub_00199B50); /* call 0x00199B50 */

loc_00149AA6: ;
    PUSH32(esp, 0x3DCE80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00149AB1u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00149AB1: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00149B19; /* je: equal / zero */

loc_00149AB8: ;
    PUSH32(esp, 0x3DCE7C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00149AC3u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00149AC3: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00149B19; /* je: equal / zero */

loc_00149ACA: ;
    PUSH32(esp, 0x3DCE78);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00149AD5u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00149AD5: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00149B19; /* je: equal / zero */

loc_00149ADC: ;
    PUSH32(esp, 0x00149AE1u); RECOMP_ABI_CALL(0x0019ED15u, sub_0019ED15); /* call 0x0019ED15 */

loc_00149AE1: ;
    eax = eax - 3;
    if ((eax == 0)) goto loc_00149B0D; /* je: equal / zero */

loc_00149AE6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00149B04; /* je: equal / zero */

loc_00149AE9: ;
    PUSH32(esp, 0x3DCE74);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00149AF4u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00149AF4: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00149B0F; /* je: equal / zero */

loc_00149AFD: ;
    PUSH32(esp, 0x3DCE80);
    goto loc_00149B14;

loc_00149B04: ;
    PUSH32(esp, 0x3DCE7C);
    ecx = esi;
    goto loc_00149B14;

loc_00149B0D: ;
    ecx = esi;

loc_00149B0F: ;
    PUSH32(esp, 0x3DCE78);

loc_00149B14: ;
    PUSH32(esp, 0x00149B19u); RECOMP_ABI_CALL(0x00149830u, sub_00149830); /* call 0x00149830 */

loc_00149B19: ;
    /* build.ini selects the native text resource language. */
    for(unsigned _lang=0;_lang<4;++_lang) MEM8(edi+0xC64+_lang)=xml1_build_settings.text_language[_lang];
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00149B30
 * Original: 0x00149B30 - 0x00149B37 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149B30(void)
{

loc_00149B30: ;
    eax = ecx + 0xC64;
    esp += 4; return; /* ret */

}

/**
 * sub_00149B40
 * Original: 0x00149B40 - 0x00149D7C (572 bytes, 190 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149B40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00149B40: ;
    esp = esp - 0x204;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x214);
    PUSH32(esp, 0x80);
    MEM32(esp + 0x210) = eax;
    eax = esp + 0x90;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ebx = ecx;
    MEM8(esp + 0x118) = 0;
    PUSH32(esp, 0x00149B79u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_00149B79: ;
    ecx = esp + 0x98;
    PUSH32(esp, 0x3D2D80);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00149B8Bu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_00149B8B: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00149BBB; /* jne: not equal / not zero */

loc_00149B92: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00149B98u); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_00149B98: ;
    PUSH32(esp, 0x3C8838);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00149BA5u); RECOMP_ABI_CALL(0x00123610u, sub_00123610); /* call 0x00123610 */

loc_00149BA5: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    edx = esp + 0xA4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00149BB8u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_00149BB8: ;
    esp = esp + 0x1C;

loc_00149BBB: ;
    PUSH32(esp, 0x00149BC0u); RECOMP_ABI_CALL(0x0011EC10u, sub_0011EC10); /* call 0x0011EC10 */

loc_00149BC0: ;
    ecx = MEM32(esp + 0x218);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00149BCFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00149BCF: ;
    ebp = eax;
    edx = esp + 0x10C;
    PUSH32(esp, edx);
    eax = esp + 0x90;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00149BE7u); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_00149BE7: ;
    ecx = esp + 0x118;
    esp = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00149BF7u); RECOMP_ABI_CALL(0x0011BD00u, sub_0011BD00); /* call 0x0011BD00 */

loc_00149BF7: ;
    ecx = eax;
    PUSH32(esp, 0x00149BFEu); RECOMP_ABI_CALL(0x0011B7C0u, sub_0011B7C0); /* call 0x0011B7C0 */

loc_00149BFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00149C41; /* jne: not equal / not zero */

loc_00149C02: ;
    PUSH32(esp, 0x00149C07u); RECOMP_ABI_CALL(0x0011EC10u, sub_0011EC10); /* call 0x0011EC10 */

loc_00149C07: ;
    edx = esp + 0x10C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(eax);
    ecx = esp + 0x90;
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00149C20u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00149C20: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00149C26u); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_00149C26: ;
    eax = esp + 0x118;
    esp = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00149C36u); RECOMP_ABI_CALL(0x0011BD00u, sub_0011BD00); /* call 0x0011BD00 */

loc_00149C36: ;
    ecx = eax;
    PUSH32(esp, 0x00149C3Du); RECOMP_ABI_CALL(0x0011B7C0u, sub_0011B7C0); /* call 0x0011B7C0 */

loc_00149C3D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00149C5B; /* je: equal / zero */

loc_00149C41: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x200);
    PUSH32(esp, 0x00149C52u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00149C52: ;
    esp = esp + 0x204;
    esp += 12; return; /* ret 8 */

loc_00149C5B: ;
    ecx = esp + 0x8C;
    PUSH32(esp, 0x3C8838);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00149C6Du); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_00149C6D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00149D62; /* je: equal / zero */

loc_00149C78: ;
    PUSH32(esp, 0x80);
    edx = esp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00149C88u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_00149C88: ;
    eax = esp + 0x18;
    esp = esp + 0xC;
    edx = eax + 1;

loc_00149C92: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00149C92; /* jne: not equal / not zero */

loc_00149C99: ;
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00149CB0; /* jl: less (signed <) */

loc_00149CA0: ;
    SET_LO8(ecx, MEM8(esp + eax + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2E (8-bit) */
    eax = esp + eax + 8;
    if (CMP_NE(_fa, _fb)) goto loc_00149CB0; /* jne: not equal / not zero */

loc_00149CAD: ;
    MEM8(eax) = 0;

loc_00149CB0: ;
    eax = esp + 0xC;
    edx = eax + 1;

loc_00149CB7: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00149CB7; /* jne: not equal / not zero */

loc_00149CBE: ;
    eax = eax - edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_00149CE1; /* jge: greater or equal (signed >=) */

loc_00149CC9: ;
    edi = esp + 0x10;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_00149CD0: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00149CD0; /* jne: not equal / not zero */

loc_00149CD8: ;
    SET_LO16(eax, MEM16(0x3D2D80));
    MEM16(edi) = LO16(eax);

loc_00149CE1: ;
    eax = esp + 0x10;
    edi = ebx + 0xC64;
    edx = eax + 1;
    edi = edi;

loc_00149CF0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00149CF0; /* jne: not equal / not zero */

loc_00149CF7: ;
    eax = eax - edx;
    edx = eax;
    eax = edi;
    esi = eax + 1;

loc_00149D00: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00149D00; /* jne: not equal / not zero */

loc_00149D07: ;
    eax = eax - esi;
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00149D3C; /* jge: greater or equal (signed >=) */

loc_00149D12: ;
    eax = edi;
    edx = edi;

loc_00149D16: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00149D16; /* jne: not equal / not zero */

loc_00149D1D: ;
    edi = esp + 0x10;
    eax = eax - edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00149D24: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00149D24; /* jne: not equal / not zero */

loc_00149D2C: ;
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

loc_00149D3C: ;
    edx = MEM32(ebx);
    PUSH32(esp, ebp);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00149D49u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00149D49: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x200);
    PUSH32(esp, 0x00149D59u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00149D59: ;
    esp = esp + 0x204;
    esp += 12; return; /* ret 8 */

loc_00149D62: ;
    ecx = MEM32(esp + 0x20C);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    PUSH32(esp, 0x00149D73u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00149D73: ;
    esp = esp + 0x204;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00149D80
 * Original: 0x00149D80 - 0x00149EF1 (369 bytes, 108 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00149D80: ;
    esp = esp - 0x208;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x214);
    PUSH32(esp, 0x100);
    MEM32(esp + 0x210) = eax;
    eax = esp + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    MEM8(esp + 0x118) = 0;
    PUSH32(esp, 0x00149DB5u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_00149DB5: ;
    ecx = esp + 0x118;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00149DC7u); RECOMP_ABI_CALL(0x00125580u, sub_00125580); /* call 0x00125580 */

loc_00149DC7: ;
    PUSH32(esp, 0x100);
    eax = esp + 0x24;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00149DD7u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_00149DD7: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00149DE6u); RECOMP_ABI_CALL(0x00125610u, sub_00125610); /* call 0x00125610 */

loc_00149DE6: ;
    esp = esp + 0x28;
    PUSH32(esp, 0x00149DEEu); RECOMP_ABI_CALL(0x0011EC10u, sub_0011EC10); /* call 0x0011EC10 */

loc_00149DEE: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00149DFAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00149DFA: ;
    edx = esp + 0x10C;
    PUSH32(esp, 0x2E);
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00149E0Du); RECOMP_ABI_CALL(0x003426D0u, sub_003426D0); /* call 0x003426D0 */

loc_00149E0D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00149E44; /* jne: not equal / not zero */

loc_00149E14: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00149E1Au); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_00149E1A: ;
    PUSH32(esp, 0x3C8838);
    eax = esp + 0x114;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00149E2Eu); RECOMP_ABI_CALL(0x00123610u, sub_00123610); /* call 0x00123610 */

loc_00149E2E: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    ecx = esp + 0x124;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00149E41u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_00149E41: ;
    esp = esp + 0x1C;

loc_00149E44: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    eax = esp + 0x110;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00149E58u); RECOMP_ABI_CALL(0x00149F00u, sub_00149F00); /* call 0x00149F00 */

loc_00149E58: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00149E80; /* je: equal / zero */

loc_00149E5C: ;
    ecx = MEM32(esi + 0xC58);
    ecx = ecx & MEM32(eax + 0x4C);
    eax = MEM32(esi + ecx * 4 + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0x00149E77u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00149E77: ;
    esp = esp + 0x208;
    esp += 8; return; /* ret 4 */

loc_00149E80: ;
    edx = esp + 0x10C;
    PUSH32(esp, 0x3DAF00);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00149E92u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_00149E92: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00149EAE; /* jne: not equal / not zero */

loc_00149E99: ;
    eax = esp + 0x10C;
    PUSH32(esp, 0x3CFBD4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00149EABu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_00149EAB: ;
    esp = esp + 8;

loc_00149EAE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00149EB5u); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_00149EB5: ;
    edx = MEM32(eax);
    esp = esp + 4;
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00149EBFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00149EBF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00149ED8; /* jne: not equal / not zero */

loc_00149EC3: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ecx = esp + 0x110;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00149ED4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00149ED4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00149EDA; /* jne: not equal / not zero */

loc_00149ED8: ;
    eax = 0; /* xor self */

loc_00149EDA: ;
    ecx = MEM32(esp + 0x20C);
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x00149EE8u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00149EE8: ;
    esp = esp + 0x208;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00149F00
 * Original: 0x00149F00 - 0x0014A12C (556 bytes, 181 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149F00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00149F00: ;
    esp = esp - 0x204;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x214);
    PUSH32(esp, 0x80);
    MEM32(esp + 0x210) = eax;
    eax = esp + 0x90;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ebp = ecx;
    MEM8(esp + 0x118) = 0;
    PUSH32(esp, 0x00149F39u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_00149F39: ;
    ecx = esp + 0x98;
    PUSH32(esp, 0x3D2D80);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00149F4Bu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_00149F4B: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00149F7B; /* jne: not equal / not zero */

loc_00149F52: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00149F58u); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_00149F58: ;
    PUSH32(esp, 0x3C8838);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00149F65u); RECOMP_ABI_CALL(0x00123610u, sub_00123610); /* call 0x00123610 */

loc_00149F65: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    edx = esp + 0xA4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00149F78u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_00149F78: ;
    esp = esp + 0x1C;

loc_00149F7B: ;
    PUSH32(esp, 0x00149F80u); RECOMP_ABI_CALL(0x0011EC10u, sub_0011EC10); /* call 0x0011EC10 */

loc_00149F80: ;
    ecx = MEM32(esp + 0x218);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00149F8Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00149F8F: ;
    ebx = eax;
    edx = esp + 0x10C;
    PUSH32(esp, edx);
    eax = esp + 0x90;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00149FA7u); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_00149FA7: ;
    ecx = esp + 0x118;
    esp = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00149FB7u); RECOMP_ABI_CALL(0x0011BD00u, sub_0011BD00); /* call 0x0011BD00 */

loc_00149FB7: ;
    ecx = eax;
    PUSH32(esp, 0x00149FBEu); RECOMP_ABI_CALL(0x0011B7C0u, sub_0011B7C0); /* call 0x0011B7C0 */

loc_00149FBE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014A114; /* jne: not equal / not zero */

loc_00149FC6: ;
    PUSH32(esp, 0x00149FCBu); RECOMP_ABI_CALL(0x0011EC10u, sub_0011EC10); /* call 0x0011EC10 */

loc_00149FCB: ;
    edx = esp + 0x10C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(eax);
    ecx = esp + 0x90;
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00149FE4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00149FE4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00149FEAu); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_00149FEA: ;
    eax = esp + 0x118;
    esp = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00149FFAu); RECOMP_ABI_CALL(0x0011BD00u, sub_0011BD00); /* call 0x0011BD00 */

loc_00149FFA: ;
    ecx = eax;
    PUSH32(esp, 0x0014A001u); RECOMP_ABI_CALL(0x0011B7C0u, sub_0011B7C0); /* call 0x0011B7C0 */

loc_0014A001: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014A114; /* jne: not equal / not zero */

loc_0014A009: ;
    ecx = esp + 0x8C;
    PUSH32(esp, 0x3C8838);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014A01Bu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_0014A01B: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014A112; /* je: equal / zero */

loc_0014A026: ;
    PUSH32(esp, 0x80);
    edx = esp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014A036u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_0014A036: ;
    eax = esp + 0x18;
    esp = esp + 0xC;
    edx = eax + 1;

loc_0014A040: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014A040; /* jne: not equal / not zero */

loc_0014A047: ;
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014A05E; /* jl: less (signed <) */

loc_0014A04E: ;
    SET_LO8(ecx, MEM8(esp + eax + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2E (8-bit) */
    eax = esp + eax + 8;
    if (CMP_NE(_fa, _fb)) goto loc_0014A05E; /* jne: not equal / not zero */

loc_0014A05B: ;
    MEM8(eax) = 0;

loc_0014A05E: ;
    eax = esp + 0xC;
    edx = eax + 1;

loc_0014A065: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014A065; /* jne: not equal / not zero */

loc_0014A06C: ;
    eax = eax - edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_0014A091; /* jge: greater or equal (signed >=) */

loc_0014A077: ;
    edi = esp + 0x10;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_0014A080: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014A080; /* jne: not equal / not zero */

loc_0014A088: ;
    SET_LO16(eax, MEM16(0x3D2D80));
    MEM16(edi) = LO16(eax);

loc_0014A091: ;
    eax = esp + 0x10;
    edi = ebp + 0xC64;
    edx = eax + 1;
    edi = edi;

loc_0014A0A0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014A0A0; /* jne: not equal / not zero */

loc_0014A0A7: ;
    eax = eax - edx;
    edx = eax;
    eax = edi;
    esi = eax + 1;

loc_0014A0B0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014A0B0; /* jne: not equal / not zero */

loc_0014A0B7: ;
    eax = eax - esi;
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014A0EC; /* jge: greater or equal (signed >=) */

loc_0014A0C2: ;
    eax = edi;
    edx = edi;

loc_0014A0C6: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014A0C6; /* jne: not equal / not zero */

loc_0014A0CD: ;
    edi = esp + 0x10;
    eax = eax - edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0014A0D4: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014A0D4; /* jne: not equal / not zero */

loc_0014A0DC: ;
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

loc_0014A0EC: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0014A0F9u); RECOMP_ABI_CALL(0x00149F00u, sub_00149F00); /* call 0x00149F00 */

loc_0014A0F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x200);
    PUSH32(esp, 0x0014A109u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0014A109: ;
    esp = esp + 0x204;
    esp += 12; return; /* ret 8 */

loc_0014A112: ;
    eax = 0; /* xor self */

loc_0014A114: ;
    ecx = MEM32(esp + 0x20C);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x0014A123u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0014A123: ;
    esp = esp + 0x204;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0014A130
 * Original: 0x0014A130 - 0x0014A44E (798 bytes, 256 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A130(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014A130: ;
    esp = esp - 0x204;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x210) = eax;
    ebp = ecx;
    PUSH32(esp, 0x0014A14Du); RECOMP_ABI_CALL(0x0011EC10u, sub_0011EC10); /* call 0x0011EC10 */

loc_0014A14D: ;
    ecx = MEM32(esp + 0x21C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0014A15Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014A15C: ;
    esi = MEM32(esp + 0x218);
    PUSH32(esp, 0x80);
    edx = esp + 0x14;
    ebx = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    MEM32(esp + 0x228) = ebx;
    MEM8(esp + 0x11C) = 0;
    PUSH32(esp, 0x0014A184u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_0014A184: ;
    eax = esp + 0x1C;
    PUSH32(esp, 0x2E);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014A190u); RECOMP_ABI_CALL(0x003426D0u, sub_003426D0); /* call 0x003426D0 */

loc_0014A190: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014A1BD; /* jne: not equal / not zero */

loc_0014A197: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014A19Du); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_0014A19D: ;
    PUSH32(esp, 0x3C8838);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014A1AAu); RECOMP_ABI_CALL(0x00123610u, sub_00123610); /* call 0x00123610 */

loc_0014A1AA: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014A1BAu); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_0014A1BA: ;
    esp = esp + 0x1C;

loc_0014A1BD: ;
    PUSH32(esp, 0x80);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x98;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014A1D4u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_0014A1D4: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x3CFBD4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014A1E3u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_0014A1E3: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014A2B8; /* jne: not equal / not zero */

loc_0014A1EE: ;
    eax = esp + 0x90;
    edx = eax + 1;

loc_0014A1F8: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014A1F8; /* jne: not equal / not zero */

loc_0014A1FF: ;
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014A21C; /* jl: less (signed <) */

loc_0014A206: ;
    SET_LO8(ecx, MEM8(esp + eax + 0x8C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2E (8-bit) */
    eax = esp + eax + 0x8C;
    if (CMP_NE(_fa, _fb)) goto loc_0014A21C; /* jne: not equal / not zero */

loc_0014A219: ;
    MEM8(eax) = 0;

loc_0014A21C: ;
    eax = esp + 0x90;
    edx = eax + 1;

loc_0014A226: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014A226; /* jne: not equal / not zero */

loc_0014A22D: ;
    eax = eax - edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014A252; /* jge: greater or equal (signed >=) */

loc_0014A237: ;
    edi = esp + 0x90;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_0014A240: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014A240; /* jne: not equal / not zero */

loc_0014A248: ;
    SET_LO16(edx, MEM16(0x3D2D80));
    MEM16(edi) = LO16(edx);

loc_0014A252: ;
    eax = esp + 0x90;
    edi = ebp + 0xC64;
    edx = eax + 1;

loc_0014A262: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014A262; /* jne: not equal / not zero */

loc_0014A269: ;
    eax = eax - edx;
    edx = eax;
    eax = edi;
    esi = eax + 1;

loc_0014A272: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014A272; /* jne: not equal / not zero */

loc_0014A279: ;
    eax = eax - esi;
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014A2B8; /* jge: greater or equal (signed >=) */

loc_0014A284: ;
    eax = edi;
    edx = edi;

loc_0014A288: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014A288; /* jne: not equal / not zero */

loc_0014A28F: ;
    edi = esp + 0x90;
    eax = eax - edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_0014A2A0: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014A2A0; /* jne: not equal / not zero */

loc_0014A2A8: ;
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

loc_0014A2B8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0014A2BFu); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_0014A2BF: ;
    edx = MEM32(eax);
    esp = esp + 4;
    ecx = esp + 0x90;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0014A2D1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014A2D1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014A2E7; /* je: equal / zero */

loc_0014A2D5: ;
    ecx = 0x20;
    esi = esp + 0x90;
    edi = esp + 0x10;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */

loc_0014A2E7: ;
    edx = esp + 0x110;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0014A2FAu); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_0014A2FA: ;
    ecx = esp + 0x11C;
    esp = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014A30Au); RECOMP_ABI_CALL(0x0011BD00u, sub_0011BD00); /* call 0x0011BD00 */

loc_0014A30A: ;
    ecx = eax;
    PUSH32(esp, 0x0014A311u); RECOMP_ABI_CALL(0x0011B7C0u, sub_0011B7C0); /* call 0x0011B7C0 */

loc_0014A311: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014A329; /* je: equal / zero */

loc_0014A315: ;
    ecx = MEM32(eax + 0x4C);
    edx = MEM32(ebp + 0xC58);
    edx = edx & ecx;
    eax = MEM32(ebp + edx * 4 + 4);
    goto loc_0014A435;

loc_0014A329: ;
    PUSH32(esp, 0x0014A32Eu); RECOMP_ABI_CALL(0x0011EC10u, sub_0011EC10); /* call 0x0011EC10 */

loc_0014A32E: ;
    ecx = esp + 0x110;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = MEM32(eax);
    PUSH32(esp, 3);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0014A344u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014A344: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014A34Au); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_0014A34A: ;
    eax = esp + 0x11C;
    esp = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014A35Au); RECOMP_ABI_CALL(0x0011BD00u, sub_0011BD00); /* call 0x0011BD00 */

loc_0014A35A: ;
    ecx = eax;
    PUSH32(esp, 0x0014A361u); RECOMP_ABI_CALL(0x0011B7C0u, sub_0011B7C0); /* call 0x0011B7C0 */

loc_0014A361: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014A379; /* je: equal / zero */

loc_0014A365: ;
    edx = MEM32(eax + 0x4C);
    ecx = MEM32(ebp + 0xC58);
    ecx = ecx & edx;
    eax = MEM32(ebp + ecx * 4 + 4);
    goto loc_0014A435;

loc_0014A379: ;
    _fa = (uint32_t)(MEM32(ebp + 0x854)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x854), 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014A3C3; /* jge: greater or equal (signed >=) */

loc_0014A385: ;
    PUSH32(esp, 0x0014A38Au); RECOMP_ABI_CALL(0x0011BD00u, sub_0011BD00); /* call 0x0011BD00 */

loc_0014A38A: ;
    ecx = eax;
    PUSH32(esp, 0x0014A391u); RECOMP_ABI_CALL(0x0011B290u, sub_0011B290); /* call 0x0011B290 */

loc_0014A391: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014A3C3; /* jne: not equal / not zero */

loc_0014A395: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0014A39Cu); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_0014A39C: ;
    edx = MEM32(eax);
    esp = esp + 4;
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0014A3ABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014A3AB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_0014A3C7; /* jg: greater (signed >) */

loc_0014A3B1: ;
    edx = MEM32(esp + 0x218);
    PUSH32(esp, 0x2E);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014A3C0u); RECOMP_ABI_CALL(0x003426D0u, sub_003426D0); /* call 0x003426D0 */

loc_0014A3C0: ;
    esp = esp + 8;

loc_0014A3C3: ;
    eax = 0; /* xor self */
    goto loc_0014A435;

loc_0014A3C7: ;
    eax = ebx + 0x51;
    PUSH32(esp, eax);
    ecx = esi + 1;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014A3D5u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_0014A3D5: ;
    PUSH32(esp, 0);
    edi = eax;
    PUSH32(esp, 0x0014A3DEu); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_0014A3DE: ;
    edx = MEM32(eax);
    esp = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0014A3EEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014A3EE: ;
    MEM8(edi + esi) = 0;
    /* The XML resource cache owns this buffer. 0014A3D5 allocated esi+1
       bytes with category ebx/tag ebx+0x51; 0014A406 publishes edi. Decode
       before publication so cache hits, menus and resident XML share the
       same lifetime as retail text. Never bypass the native cache. */
    if (esi>=4 && MEM32(edi)==0x000011B1u) {
        unsigned _xml_size=0; char _error[256];
        char *_xml=xml1_decode_runtime_xmlb((const void *)((uintptr_t)g_xbox_mem_offset+edi),esi,&_xml_size,_error,sizeof(_error));
        if(!_xml) { fprintf(stderr,"[XMLB CACHE ERROR] %s\n",_error); _exit(4); }
        uint32_t _old_buffer=edi, _saved_sp=esp;
        PUSH32(esp,ebx+0x51); PUSH32(esp,ebx); PUSH32(esp,_xml_size+1);
        PUSH32(esp,0x0014A3EEu); RECOMP_ABI_CALL(0x00123490u,sub_00123490);
        esp+=12;
        if(!eax || esp!=_saved_sp) { fprintf(stderr,"[XMLB CACHE ERROR] allocation/ABI\n"); _exit(4); }
        edi=eax;
        for(unsigned _i=0;_i<=_xml_size;++_i) MEM8(edi+_i)=(unsigned char)_xml[_i];
        xml1_free_decoded_pkgb(_xml);
        PUSH32(esp,ebx); PUSH32(esp,_old_buffer);
        PUSH32(esp,0x0014A3EEu); RECOMP_ABI_CALL(0x001234F0u,sub_001234F0);
        esp+=8;
        if(esp!=_saved_sp) { fprintf(stderr,"[XMLB CACHE ERROR] free ABI\n"); _exit(4); }
        fprintf(stderr,"[XMLB CACHE] binary=%u text=%u\n",esi,_xml_size);
    }
    esi = ebp + 4;
    ecx = esi;
    PUSH32(esp, 0x0014A3FCu); RECOMP_ABI_CALL(0x0014A480u, sub_0014A480); /* call 0x0014A480 */

loc_0014A3FC: ;
    ebx = eax;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0014A406u); RECOMP_ABI_CALL(0x0014A450u, sub_0014A450); /* call 0x0014A450 */

loc_0014A406: ;
    ebx = MEM32(esi + ebx * 4 + 0x854);
    edx = MEM32(esi + 0xC54);
    eax = MEM32(esp + 0x21C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    edx = edx & ebx;
    PUSH32(esp, ecx);
    MEM32(esi + edx * 4) = edi;
    PUSH32(esp, 0x0014A42Cu); RECOMP_ABI_CALL(0x0011BD00u, sub_0011BD00); /* call 0x0011BD00 */

loc_0014A42C: ;
    ecx = eax;
    PUSH32(esp, 0x0014A433u); RECOMP_ABI_CALL(0x0011BB70u, sub_0011BB70); /* call 0x0011BB70 */

loc_0014A433: ;
    eax = edi;

loc_0014A435: ;
    ecx = MEM32(esp + 0x210);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x0014A445u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0014A445: ;
    esp = esp + 0x204;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0014A450
 * Original: 0x0014A450 - 0x0014A47E (46 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014A450: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = eax + ecx * 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014A463; /* je: equal / zero */

loc_0014A45D: ;
    MEM32(edx) = 0;

loc_0014A463: ;
    edx = ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = eax + edx * 4 + 0x400;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    MEM32(eax) = MEM32(eax) | edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014A480
 * Original: 0x0014A480 - 0x0014A4CA (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A480(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014A480: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x828);
    eax = esi + 0x420;
    PUSH32(esp, edi);
    edi = MEM32(eax + ecx * 4);
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(esi + edx * 4 + 0x830);
    edx = esi + edx * 4 + 0x830;
    ecx = ecx | ebx;
    MEM32(edx) = ecx;
    ecx = eax;
    PUSH32(esp, 0x0014A4BEu); RECOMP_ABI_CALL(0x000A31D0u, sub_000A31D0); /* call 0x000A31D0 */

loc_0014A4BE: ;
    MEM32(esi + 0x850) = MEM32(esi + 0x850) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x850)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0014A4D0
 * Original: 0x0014A4D0 - 0x0014A51F (79 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A4D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014A4D0: ;
    eax = MEM32(ecx + 0xC58);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx + 4;
    eax = eax & ebx;
    _fa = (uint32_t)(MEM32(esi + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + eax * 4), 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0014A501; /* je: equal / zero */

loc_0014A4E8: ;
    xml1_talent_package_release(MEM32(esi + eax * 4));
    edx = MEM32(esi + 0xC54);
    ecx = MEM32(esp + 0x14);
    edx = edx & ebx;
    eax = MEM32(esi + edx * 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014A4FEu); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_0014A4FE: ;
    esp = esp + 8;

loc_0014A501: ;
    edi = MEM32(esi + 0xC54);
    edi = edi & ebx;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0014A511u); RECOMP_ABI_CALL(0x0014A560u, sub_0014A560); /* call 0x0014A560 */

loc_0014A511: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0014A519u); RECOMP_ABI_CALL(0x0014A520u, sub_0014A520); /* call 0x0014A520 */

loc_0014A519: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0014A520
 * Original: 0x0014A520 - 0x0014A55E (62 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A520(void)
{
    int _flags = 0; /* fallback flag var */

loc_0014A520: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(eax + 0xC58);
    PUSH32(esp, esi);
    esi = 1;
    esi = esi << LO8(ecx);
    MEM32(eax + edx * 4 + 0x854) = MEM32(eax + edx * 4 + 0x854) + esi;
    if (((int32_t)MEM32(eax + edx * 4 + 0x854) >= 0)) goto loc_0014A55A; /* jns: not sign (positive) */

loc_0014A53D: ;
    MEM32(eax + edx * 4 + 0x854) = edx;
    ecx = MEM32(eax + 0xC58);
    esi = 1;
    esi = esi << LO8(ecx);
    esi = esi | edx;
    MEM32(eax + edx * 4 + 0x854) = esi;

loc_0014A55A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014A560
 * Original: 0x0014A560 - 0x0014A5DF (127 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014A560: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0014A56Eu); RECOMP_ABI_CALL(0x0014A5E0u, sub_0014A5E0); /* call 0x0014A5E0 */

loc_0014A56E: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    ecx = MEM32(esi + eax * 4 + 0x830);
    eax = esi + eax * 4 + 0x830;
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;
    eax = MEM32(esi + 0x824);
    edx = MEM32(esi + 0x82C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    MEM32(esi + 0x824) = eax;
    MEM32(esi + 0x82C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0014A5C5; /* jl: less (signed <) */

loc_0014A5B4: ;
    MEM32(esi + 0x824) = 0;
    eax = 0xFF;
    goto loc_0014A5C6;

loc_0014A5C5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0014A5C6: ;
    MEM32(esi + eax * 4 + 0x420) = edi;
    eax = MEM32(esi + 0x850);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x850) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014A5E0
 * Original: 0x0014A5E0 - 0x0014A607 (39 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A5E0(void)
{

loc_0014A5E0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = eax + edx * 4 + 0x400;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014A610
 * Original: 0x0014A610 - 0x0014A638 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A610(void)
{

loc_0014A610: ;
    PUSH32(esp, esi);
    esi = ecx;
    edx = esi + 4;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = edx;
    MEM32(esi) = 0x3DCE98;
    ecx = 0x317;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    PUSH32(esp, 0x0014A62Fu); RECOMP_ABI_CALL(0x00149850u, sub_00149850); /* call 0x00149850 */

loc_0014A62F: ;
    POP32(esp, edi);
    MEM32(esi) = 0x3DC10C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014A640
 * Original: 0x0014A640 - 0x0014A65E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014A640: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014A648u); RECOMP_ABI_CALL(0x0014A610u, sub_0014A610); /* call 0x0014A610 */

loc_0014A648: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014A658; /* je: equal / zero */

loc_0014A64F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014A655u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_0014A655: ;
    esp = esp + 4;

loc_0014A658: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014A660
 * Original: 0x0014A660 - 0x0014A6BC (92 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014A660: ;
    eax = MEM32(XBOX_FS_BASE);
    SET_LO8(ecx, MEM8(0x55AACC));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x35370E);
    PUSH32(esp, eax);
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_0014A6A9; /* jne: not equal / not zero */

loc_0014A684: ;
    MEM32(0x55AACC) = MEM32(0x55AACC) | eax;
    ecx = 0x559E58;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0014A69Cu); RECOMP_ABI_CALL(0x00149A40u, sub_00149A40); /* call 0x00149A40 */

loc_0014A69C: ;
    PUSH32(esp, 0x35A550);
    PUSH32(esp, 0x0014A6A6u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_0014A6A6: ;
    esp = esp + 4;

loc_0014A6A9: ;
    ecx = MEM32(esp);
    eax = 0x559E58;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0014A6C0
 * Original: 0x0014A6C0 - 0x0014A6C5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A6C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014A6C0: ;
    g_seh_ebp = ebp; sub_001439B0(); return; /* tail jmp 0x001439B0 */

}

/**
 * sub_0014A6D0
 * Original: 0x0014A6D0 - 0x0014A6D5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A6D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014A6D0: ;
    g_seh_ebp = ebp; sub_001439D0(); return; /* tail jmp 0x001439D0 */

}

/**
 * sub_0014A6E0
 * Original: 0x0014A6E0 - 0x0014A70B (43 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A6E0(void)
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

loc_0014A6E0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0014A6FE; /* jp: parity */

loc_0014A6F1: ;
    MEM32(ecx + 0x2484) = 0x3F800000;
    esp += 8; return; /* ret 4 */

loc_0014A6FE: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x2484) = eax;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014A710
 * Original: 0x0014A710 - 0x0014A726 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A710(void)
{

loc_0014A710: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = 1;
    edx = edx << LO8(ecx);
    MEM32(eax + 0x2480) = MEM32(eax + 0x2480) | edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014A730
 * Original: 0x0014A730 - 0x0014A750 (32 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A730(void)
{

loc_0014A730: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax + 0x2480);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax + 0x2480) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014A750
 * Original: 0x0014A750 - 0x0014A79B (75 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0014A750(void)
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

loc_0014A750: ;
    edx = MEM32(esp + 4);
    fp_push(MEMF(edx)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0014A796; /* jp: parity */

loc_0014A761: ;
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0014A796; /* jp: parity */

loc_0014A770: ;
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_push(MEMF(ecx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0014A796; /* jp: parity */

loc_0014A77F: ;
    fp_push(MEMF(edx + 0xC)); /* fld float */
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0014A796; /* jp: parity */

loc_0014A78E: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_0014A796: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014A7A0
 * Original: 0x0014A7A0 - 0x0014A7C3 (35 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A7A0(void)
{

loc_0014A7A0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = eax + edx * 4;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014A7D0
 * Original: 0x0014A7D0 - 0x0014A7D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A7D0(void)
{

loc_0014A7D0: ;
    eax = MEM32(0x5BD8AC);
    esp += 4; return; /* ret */

}

/**
 * sub_0014A7E0
 * Original: 0x0014A7E0 - 0x0014A847 (103 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A7E0(void)
{

loc_0014A7E0: ;
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
    SET_LO8(ecx, MEM8(ecx + 0x3C));
    MEM8(eax + 0x3C) = LO8(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014A850
 * Original: 0x0014A850 - 0x0014A9B1 (353 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A850(void)
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

loc_0014A850: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    MEM32(esp + 0x14) = 0x3DCF28;
    MEM32(esp + 0x18) = 0x3DCF24;
    MEM32(esp + 0x1C) = 0x3DCF20;
    edi = 1;

loc_0014A875: ;
    eax = MEM32(esp + edi * 4 + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0014A880u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_0014A880: ;
    esi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014A89C; /* jne: not equal / not zero */

loc_0014A889: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014A875; /* jl: less (signed <) */

loc_0014A88F: ;
    ecx = MEM32(esp + 0x24);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx) = eax;
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0014A89C: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + edi * 4 + 0x14);
    MEM32(ecx) = edi;
    edx = eax + 1;
    /* nop */

loc_0014A8B0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014A8B0; /* jne: not equal / not zero */

loc_0014A8B7: ;
    eax = eax - edx;
    esi = esi + eax;
    PUSH32(esp, 0x3DCF1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014A8C6u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_0014A8C6: ;
    ebx = eax;
    esp = esp + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014A8E0; /* jne: not equal / not zero */

loc_0014A8CF: ;
    eax = esi;
    edx = eax + 1;

loc_0014A8D4: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014A8D4; /* jne: not equal / not zero */

loc_0014A8DB: ;
    eax = eax - edx;
    ebx = eax + esi;

loc_0014A8E0: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0014A959; /* jae: above or equal (unsigned >=) */

loc_0014A8E7: ;
    goto loc_0014A8F0;

    /* nop */

loc_0014A8F0: ;
    PUSH32(esp, 0x3DCF18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014A8FBu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_0014A8FB: ;
    PUSH32(esp, 0x3D2D80);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0014A908u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_0014A908: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014A913; /* je: equal / zero */

loc_0014A90F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0014A915; /* jbe: below or equal (unsigned <=) */

loc_0014A913: ;
    edi = ebx;

loc_0014A915: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0014A92C; /* ja: above (unsigned >) */

loc_0014A919: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014A92C; /* je: equal / zero */

loc_0014A91D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014A923u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_0014A923: ;
    edx = MEM32(esp + 0x30);
    MEMF(edx + ebp * 4) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0014A941;

loc_0014A92C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014A932u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_0014A932: ;
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    eax = MEM32(esp + 0x30);
    MEMF(eax + ebp * 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_0014A941: ;
    SET_LO8(eax, MEM8(edi));
    esp = esp + 4;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    esi = edi;
    if (TEST_Z(_fa, _fb)) goto loc_0014A950; /* je: equal / zero */

loc_0014A94D: ;
    esi = edi + 1;

loc_0014A950: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0014A8F0; /* jb: below (unsigned <) */

loc_0014A954: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014A96B; /* jge: greater or equal (signed >=) */

loc_0014A959: ;
    ecx = MEM32(esp + 0x28);
    MEM32(ecx) = 0;

loc_0014A963: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0014A96B: ;
    edx = MEM32(esp + 0x28);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014A963; /* jne: not equal / not zero */

loc_0014A974: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    esi = MEM32(esp + 0x2C);
    fp_push(MEMF(esi + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0014A963; /* jnp: not parity */

loc_0014A98A: ;
    eax = MEM32(esi + 8);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x0014A996u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_0014A996: ;
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    PUSH32(esp, 0x0014A9A3u); RECOMP_ABI_CALL(0x00341916u, sub_00341916); /* call 0x00341916 */

loc_0014A9A3: ;
    fp_top() = fp_top() + MEMF(esi + 4); /* fadd dword ptr [esi + 4] */
    POP32(esp, ebp);
    POP32(esp, edi);
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014A9C0
 * Original: 0x0014A9C0 - 0x0014AA1F (95 bytes, 33 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0014A9C0(void)
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

loc_0014A9C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    edx = ecx;
    esi = MEM32(edx + 0x2458);
    PUSH32(esp, edi);
    ecx = 0; /* xor self */

loc_0014A9D0: ;
    edi = 1;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014A9DF; /* je: equal / zero */

loc_0014A9DB: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A9EA; /* je: equal / zero */

loc_0014A9DF: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014A9D0; /* jl: less (signed <) */

loc_0014A9E5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0014A9EA: ;
    fp_push(MEMF(edx + 0x245C)); /* fld float */
    POP32(esp, edi);
    fp_top() = fp_top() * MEMF(eax + 0x2C); /* fmul dword ptr [eax + 0x2c] */
    POP32(esp, esi);
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x30)); /* fld float */
    fp_top() = fp_top() * MEMF(edx + 0x245C); /* fmul dword ptr [edx + 0x245c] */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x34)); /* fld float */
    fp_top() = fp_top() * MEMF(edx + 0x245C); /* fmul dword ptr [edx + 0x245c] */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x38)); /* fld float */
    fp_top() = fp_top() * MEMF(edx + 0x245C); /* fmul dword ptr [edx + 0x245c] */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014AA20
 * Original: 0x0014AA20 - 0x0014AAAF (143 bytes, 45 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0014AA20(void)
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

loc_0014AA20: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    edx = ecx;
    esi = MEM32(edx + 0x2458);
    PUSH32(esp, edi);
    ecx = 0; /* xor self */

loc_0014AA30: ;
    edi = 1;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014AA3F; /* je: equal / zero */

loc_0014AA3B: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014AA4A; /* je: equal / zero */

loc_0014AA3F: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014AA30; /* jl: less (signed <) */

loc_0014AA45: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0014AA4A: ;
    fp_push(MEMF(edx + 0x245C)); /* fld float */
    POP32(esp, edi);
    fp_top() = fp_top() * MEMF(eax + 0x2C); /* fmul dword ptr [eax + 0x2c] */
    POP32(esp, esi);
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x30)); /* fld float */
    fp_top() = fp_top() * MEMF(edx + 0x245C); /* fmul dword ptr [edx + 0x245c] */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x34)); /* fld float */
    fp_top() = fp_top() * MEMF(edx + 0x245C); /* fmul dword ptr [edx + 0x245c] */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x38)); /* fld float */
    fp_top() = fp_top() * MEMF(edx + 0x245C); /* fmul dword ptr [edx + 0x245c] */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x245C)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x1C); /* fmul dword ptr [eax + 0x1c] */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x245C)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x20); /* fmul dword ptr [eax + 0x20] */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x245C)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x24); /* fmul dword ptr [eax + 0x24] */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x245C)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x28); /* fmul dword ptr [eax + 0x28] */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014AAB0
 * Original: 0x0014AAB0 - 0x0014AAB7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AAB0(void)
{

loc_0014AAB0: ;
    eax = MEM32(ecx + 0x2694);
    esp += 4; return; /* ret */

}

/**
 * sub_0014AAC0
 * Original: 0x0014AAC0 - 0x0014AAC7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AAC0(void)
{

loc_0014AAC0: ;
    eax = MEM32(ecx + 0x258C);
    esp += 4; return; /* ret */

}

/**
 * sub_0014AAD0
 * Original: 0x0014AAD0 - 0x0014AB3D (109 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014AAD0: ;
    eax = MEM32(ecx + 0x1118);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014AAFB; /* jne: not equal / not zero */

loc_0014AADC: ;
    /* nop */

loc_0014AAE0: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014AB2C; /* jge: greater or equal (signed >=) */

loc_0014AAEB: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(ecx + eax * 4 + 0x1118);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014AAE0; /* je: equal / zero */

loc_0014AAFB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014AB08; /* jne: not equal / not zero */

loc_0014AB02: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_0014AB08: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014AB12; /* jne: not equal / not zero */

loc_0014AB0C: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_0014AB12: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014AB1C; /* jne: not equal / not zero */

loc_0014AB16: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_0014AB1C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014AB27; /* jne: not equal / not zero */

loc_0014AB20: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014AB20; /* je: equal / zero */

loc_0014AB27: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014AB31; /* jl: less (signed <) */

loc_0014AB2C: ;
    edx = 0x40;

loc_0014AB31: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014AB40
 * Original: 0x0014AB40 - 0x0014ABAF (111 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AB40(void)
{

loc_0014AB40: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = ecx + 8;
    edi = MEM32(edx);
    esi = eax + 8;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(esi + 8) = edx;
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
    SET_LO8(ecx, MEM8(ecx + 0x3C));
    POP32(esp, edi);
    MEM8(eax + 0x3C) = LO8(ecx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014ABB0
 * Original: 0x0014ABB0 - 0x0014AC56 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014ABB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014ABB0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353741);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0014ABD5u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_0014ABD5: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0014ABE1u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0014ABE1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0014ABE9u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0014ABE9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014ABEFu); RECOMP_ABI_CALL(0x0019BD50u, sub_0019BD50); /* call 0x0019BD50 */

loc_0014ABEF: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x0014AC03u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0014AC03: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0014AC0Bu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0014AC0B: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0014AC1B; /* je: equal / zero */

loc_0014AC18: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0014AC1B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0014AC43; /* je: equal / zero */

loc_0014AC2C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014AC43; /* jne: not equal / not zero */

loc_0014AC3C: ;
    ecx = esi;
    PUSH32(esp, 0x0014AC43u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014AC43: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0014AC60
 * Original: 0x0014AC60 - 0x0014ADA4 (324 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AC60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014AC60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2B24);
    eax = MEM32(eax + 0x20);
    ecx = MEM32(eax + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0014ACC9; /* jle: less or equal (signed <=) */

loc_0014AC77: ;
    ecx = MEM32(eax + 0x10);
    edi = MEM32(ecx + ebx * 4);
    ecx = MEM32(edi + 0x10);
    edi = edi + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014AC9C; /* je: equal / zero */

loc_0014AC87: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014AC9C; /* jne: not equal / not zero */

loc_0014AC97: ;
    PUSH32(esp, 0x0014AC9Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014AC9C: ;
    MEM32(edi) = 0;
    edx = MEM32(esi + 0x2B24);
    eax = MEM32(edx + 0x20);
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + ebx * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0014ACB8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014ACB8: ;
    eax = MEM32(esi + 0x2B24);
    eax = MEM32(eax + 0x20);
    ecx = MEM32(eax + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014AC77; /* jl: less (signed <) */

loc_0014ACC9: ;
    ecx = MEM32(esi + 0x2B28);
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(eax + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0014AD32; /* jle: less or equal (signed <=) */

loc_0014ACDB: ;
    goto loc_0014ACE0;

    /* nop */

loc_0014ACE0: ;
    edx = MEM32(eax + 0x10);
    edi = MEM32(edx + ebx * 4);
    ecx = MEM32(edi + 0x10);
    edi = edi + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014AD05; /* je: equal / zero */

loc_0014ACF0: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014AD05; /* jne: not equal / not zero */

loc_0014AD00: ;
    PUSH32(esp, 0x0014AD05u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014AD05: ;
    MEM32(edi) = 0;
    eax = MEM32(esi + 0x2B28);
    ecx = MEM32(eax + 0x20);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(edx + ebx * 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0014AD21u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014AD21: ;
    ecx = MEM32(esi + 0x2B28);
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(eax + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014ACE0; /* jl: less (signed <) */

loc_0014AD32: ;
    edx = MEM32(esi + 0x2B2C);
    eax = MEM32(edx + 0x20);
    ecx = MEM32(eax + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0014AD96; /* jle: less or equal (signed <=) */

loc_0014AD44: ;
    eax = MEM32(eax + 0x10);
    edi = MEM32(eax + ebx * 4);
    ecx = MEM32(edi + 0x10);
    edi = edi + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014AD69; /* je: equal / zero */

loc_0014AD54: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014AD69; /* jne: not equal / not zero */

loc_0014AD64: ;
    PUSH32(esp, 0x0014AD69u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014AD69: ;
    MEM32(edi) = 0;
    ecx = MEM32(esi + 0x2B2C);
    edx = MEM32(ecx + 0x20);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax + ebx * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0014AD85u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014AD85: ;
    eax = MEM32(esi + 0x2B2C);
    eax = MEM32(eax + 0x20);
    ecx = MEM32(eax + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014AD44; /* jl: less (signed <) */

loc_0014AD96: ;
    ecx = MEM32(esi + 0x2B30);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0019A1E0(); return; /* tail jmp 0x0019A1E0 */

}

/**
 * sub_0014ADB0
 * Original: 0x0014ADB0 - 0x0014AE39 (137 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014ADB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014ADB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0014ADC2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014ADC2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ecx = MEM32(esi);
    if (TEST_Z(_fa, _fb)) goto loc_0014ADE7; /* je: equal / zero */

loc_0014ADC8: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0014ADCDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014ADCD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014ADDC; /* je: equal / zero */

loc_0014ADD1: ;
    eax = MEM32(edi + 0x2B2C);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0014ADDC: ;
    eax = MEM32(edi + 0x2B24);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0014ADE7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0014ADECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014ADEC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014AE06; /* jne: not equal / not zero */

loc_0014ADF0: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0014ADF7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014ADF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014AE06; /* jne: not equal / not zero */

loc_0014ADFB: ;
    eax = MEM32(edi + 0x174);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0014AE06: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0014AE0Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014AE0D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014AE2E; /* je: equal / zero */

loc_0014AE11: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0014AE18u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014AE18: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0014AE1Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014AE1F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014AE2E; /* je: equal / zero */

loc_0014AE23: ;
    eax = MEM32(edi + 0x180);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0014AE2E: ;
    eax = MEM32(edi + 0x17C);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014AE40
 * Original: 0x0014AE40 - 0x0014AEB6 (118 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014AE40: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014AE4E; /* jne: not equal / not zero */

loc_0014AE4A: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0014AE4E: ;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    esi = edi + -352;
    if (TEST_Z(_fa, _fb)) goto loc_0014AE79; /* je: equal / zero */

loc_0014AE5C: ;
    SET_LO8(ecx, MEM8(esi + 0x164));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014AE79; /* jne: not equal / not zero */

loc_0014AE66: ;
    ecx = MEM32(esi + 0x2B24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014AE72u); RECOMP_ABI_CALL(0x00269400u, sub_00269400); /* call 0x00269400 */

loc_0014AE72: ;
    MEM8(esi + 0x164) = 1;

loc_0014AE79: ;
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014AE95; /* je: equal / zero */

loc_0014AE80: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014AE95; /* jne: not equal / not zero */

loc_0014AE90: ;
    PUSH32(esp, 0x0014AE95u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014AE95: ;
    MEM32(edi + 0x10) = 0;
    ecx = esi;
    MEM32(edi + 0xC) = 0;
    PUSH32(esp, 0x0014AEAAu); RECOMP_ABI_CALL(0x0014AC60u, sub_0014AC60); /* call 0x0014AC60 */

loc_0014AEAA: ;
    ecx = esi;
    PUSH32(esp, 0x0014AEB1u); RECOMP_ABI_CALL(0x001435C0u, sub_001435C0); /* call 0x001435C0 */

loc_0014AEB1: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014AEC0
 * Original: 0x0014AEC0 - 0x0014AF29 (105 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AEC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014AEC0: ;
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014AF25; /* je: equal / zero */

loc_0014AECB: ;
    ecx = MEM32(0x5BC95C);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0014AED9u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0014AED9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014AF25; /* je: equal / zero */

loc_0014AEDD: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esp + 8);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 4) = edx;
    edx = MEM32(esi + 8);
    MEM32(eax) = edx;
    ecx = MEM32(esi + 0xC);
    MEM32(eax + 4) = ecx;
    edx = MEM32(esi + 0x10);
    MEM32(eax + 8) = edx;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0x18);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 0x1C);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014AF25; /* jne: not equal / not zero */

loc_0014AF1E: ;
    ecx = esi;
    PUSH32(esp, 0x0014AF25u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014AF25: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0014AF30
 * Original: 0x0014AF30 - 0x0014AF59 (41 bytes, 15 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0014AF30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0014AF30: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    eax = MEM32(esp + 8);
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    fp_push(MEMF(eax)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = fp_top() * MEMF(ecx); /* fmul dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014AF60
 * Original: 0x0014AF60 - 0x0014B035 (213 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014AF60: ;
    eax = MEM32(ecx + 0x1000);
    PUSH32(esp, esi);
    esi = ecx + 0x1000;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014AF8E; /* jne: not equal / not zero */

loc_0014AF73: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014B02C; /* jge: greater or equal (signed >=) */

loc_0014AF82: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014AF73; /* je: equal / zero */

loc_0014AF8E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014AF9B; /* jne: not equal / not zero */

loc_0014AF95: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_0014AF9B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014AFA5; /* jne: not equal / not zero */

loc_0014AF9F: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_0014AFA5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014AFAF; /* jne: not equal / not zero */

loc_0014AFA9: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_0014AFAF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014AFBA; /* jne: not equal / not zero */

loc_0014AFB3: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014AFB3; /* je: equal / zero */

loc_0014AFBA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014B02C; /* jge: greater or equal (signed >=) */

loc_0014AFBF: ;
    /* nop */

loc_0014AFC0: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014B02C; /* jge: greater or equal (signed >=) */

loc_0014AFC6: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    ecx = edx;
    ecx = ecx & 0x1F;
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014AFF7; /* jne: not equal / not zero */

loc_0014AFD9: ;
    /* nop */

loc_0014AFE0: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014B02C; /* jge: greater or equal (signed >=) */

loc_0014AFEB: ;
    ecx = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = MEM32(esi + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014AFE0; /* je: equal / zero */

loc_0014AFF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014B004; /* jne: not equal / not zero */

loc_0014AFFE: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_0014B004: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014B00E; /* jne: not equal / not zero */

loc_0014B008: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_0014B00E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014B018; /* jne: not equal / not zero */

loc_0014B012: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_0014B018: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014B027; /* jne: not equal / not zero */

loc_0014B01C: ;
    /* nop */

loc_0014B020: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014B020; /* je: equal / zero */

loc_0014B027: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014AFC0; /* jl: less (signed <) */

loc_0014B02C: ;
    edx = 0; /* xor self */
    MEM32(esi) = edx;
    MEM32(esi + 4) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014B040
 * Original: 0x0014B040 - 0x0014B114 (212 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014B040: ;
    eax = MEM32(ecx + 0x30);
    PUSH32(esp, esi);
    esi = ecx + 0x30;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014B06B; /* jne: not equal / not zero */

loc_0014B04D: ;
    /* nop */

loc_0014B050: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014B10C; /* jge: greater or equal (signed >=) */

loc_0014B05F: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014B050; /* je: equal / zero */

loc_0014B06B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014B078; /* jne: not equal / not zero */

loc_0014B072: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_0014B078: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014B082; /* jne: not equal / not zero */

loc_0014B07C: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_0014B082: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014B08C; /* jne: not equal / not zero */

loc_0014B086: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_0014B08C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014B097; /* jne: not equal / not zero */

loc_0014B090: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014B090; /* je: equal / zero */

loc_0014B097: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014B10C; /* jge: greater or equal (signed >=) */

loc_0014B09C: ;
    /* nop */

loc_0014B0A0: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014B10C; /* jge: greater or equal (signed >=) */

loc_0014B0A6: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    ecx = edx;
    ecx = ecx & 0x1F;
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014B0D7; /* jne: not equal / not zero */

loc_0014B0B9: ;
    /* nop */

loc_0014B0C0: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014B10C; /* jge: greater or equal (signed >=) */

loc_0014B0CB: ;
    ecx = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = MEM32(esi + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014B0C0; /* je: equal / zero */

loc_0014B0D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014B0E4; /* jne: not equal / not zero */

loc_0014B0DE: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_0014B0E4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014B0EE; /* jne: not equal / not zero */

loc_0014B0E8: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_0014B0EE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014B0F8; /* jne: not equal / not zero */

loc_0014B0F2: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_0014B0F8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014B107; /* jne: not equal / not zero */

loc_0014B0FC: ;
    /* nop */

loc_0014B100: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014B100; /* je: equal / zero */

loc_0014B107: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014B0A0; /* jl: less (signed <) */

loc_0014B10C: ;
    MEM32(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014B120
 * Original: 0x0014B120 - 0x0014B1F4 (212 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014B120: ;
    eax = MEM32(ecx + 0x100);
    PUSH32(esp, esi);
    esi = ecx + 0x100;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014B14E; /* jne: not equal / not zero */

loc_0014B133: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014B1EC; /* jge: greater or equal (signed >=) */

loc_0014B142: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014B133; /* je: equal / zero */

loc_0014B14E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014B15B; /* jne: not equal / not zero */

loc_0014B155: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_0014B15B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014B165; /* jne: not equal / not zero */

loc_0014B15F: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_0014B165: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014B16F; /* jne: not equal / not zero */

loc_0014B169: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_0014B16F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014B17A; /* jne: not equal / not zero */

loc_0014B173: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014B173; /* je: equal / zero */

loc_0014B17A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014B1EC; /* jge: greater or equal (signed >=) */

loc_0014B17F: ;
    /* nop */

loc_0014B180: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014B1EC; /* jge: greater or equal (signed >=) */

loc_0014B186: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    ecx = edx;
    ecx = ecx & 0x1F;
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014B1B7; /* jne: not equal / not zero */

loc_0014B199: ;
    /* nop */

loc_0014B1A0: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014B1EC; /* jge: greater or equal (signed >=) */

loc_0014B1AB: ;
    ecx = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = MEM32(esi + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014B1A0; /* je: equal / zero */

loc_0014B1B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014B1C4; /* jne: not equal / not zero */

loc_0014B1BE: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_0014B1C4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014B1CE; /* jne: not equal / not zero */

loc_0014B1C8: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_0014B1CE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014B1D8; /* jne: not equal / not zero */

loc_0014B1D2: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_0014B1D8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014B1E7; /* jne: not equal / not zero */

loc_0014B1DC: ;
    /* nop */

loc_0014B1E0: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014B1E0; /* je: equal / zero */

loc_0014B1E7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014B180; /* jl: less (signed <) */

loc_0014B1EC: ;
    MEM32(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014B200
 * Original: 0x0014B200 - 0x0014B20A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B200(void)
{

loc_0014B200: ;
    eax = ecx;
    MEM32(eax + 0x34) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0014B210
 * Original: 0x0014B210 - 0x0014B26F (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014B210: ;
    edx = ecx;
    eax = MEM32(edx + 0x1110);
    eax = MEM32(edx + eax * 4 + 0x1008);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x1118;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x1110);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    MEM32(edx + 0x1110) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0014B259; /* jl: less (signed <) */

loc_0014B24F: ;
    MEM32(edx + 0x1110) = 0;

loc_0014B259: ;
    MEM32(edx + 0x1114) = MEM32(edx + 0x1114) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x1114)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x1120);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x1120) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014B270
 * Original: 0x0014B270 - 0x0014B283 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014B270: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014B282; /* je: equal / zero */

loc_0014B278: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014B282u); RECOMP_ABI_CALL(0x0014AB40u, sub_0014AB40); /* call 0x0014AB40 */

loc_0014B282: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0014B290
 * Original: 0x0014B290 - 0x0014B2A3 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014B290: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014B2A2; /* je: equal / zero */

loc_0014B298: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014B2A2u); RECOMP_ABI_CALL(0x0014A7E0u, sub_0014A7E0); /* call 0x0014A7E0 */

loc_0014B2A2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0014B2B0
 * Original: 0x0014B2B0 - 0x0014B356 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014B2B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353741);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0014B2D5u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_0014B2D5: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0014B2E1u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0014B2E1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0014B2E9u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0014B2E9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014B2EFu); RECOMP_ABI_CALL(0x00287710u, sub_00287710); /* call 0x00287710 */

loc_0014B2EF: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x0014B303u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0014B303: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0014B30Bu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0014B30B: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0014B31B; /* je: equal / zero */

loc_0014B318: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0014B31B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0014B343; /* je: equal / zero */

loc_0014B32C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014B343; /* jne: not equal / not zero */

loc_0014B33C: ;
    ecx = esi;
    PUSH32(esp, 0x0014B343u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014B343: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0014B360
 * Original: 0x0014B360 - 0x0014B406 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014B360: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353741);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0014B385u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_0014B385: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0014B391u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0014B391: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0014B399u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0014B399: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014B39Fu); RECOMP_ABI_CALL(0x002883E0u, sub_002883E0); /* call 0x002883E0 */

loc_0014B39F: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x0014B3B3u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0014B3B3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0014B3BBu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0014B3BB: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0014B3CB; /* je: equal / zero */

loc_0014B3C8: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0014B3CB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0014B3F3; /* je: equal / zero */

loc_0014B3DC: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014B3F3; /* jne: not equal / not zero */

loc_0014B3EC: ;
    ecx = esi;
    PUSH32(esp, 0x0014B3F3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014B3F3: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0014B410
 * Original: 0x0014B410 - 0x0014B4B6 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014B410: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353741);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0014B435u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_0014B435: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0014B441u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0014B441: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0014B449u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0014B449: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014B44Fu); RECOMP_ABI_CALL(0x0019CB80u, sub_0019CB80); /* call 0x0019CB80 */

loc_0014B44F: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x0014B463u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0014B463: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0014B46Bu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0014B46B: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0014B47B; /* je: equal / zero */

loc_0014B478: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0014B47B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0014B4A3; /* je: equal / zero */

loc_0014B48C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014B4A3; /* jne: not equal / not zero */

loc_0014B49C: ;
    ecx = esi;
    PUSH32(esp, 0x0014B4A3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014B4A3: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0014B4C0
 * Original: 0x0014B4C0 - 0x0014B566 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B4C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014B4C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353741);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0014B4E5u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_0014B4E5: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0014B4F1u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0014B4F1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0014B4F9u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0014B4F9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014B4FFu); RECOMP_ABI_CALL(0x0019BCB0u, sub_0019BCB0); /* call 0x0019BCB0 */

loc_0014B4FF: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x0014B513u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0014B513: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0014B51Bu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0014B51B: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0014B52B; /* je: equal / zero */

loc_0014B528: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0014B52B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0014B553; /* je: equal / zero */

loc_0014B53C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014B553; /* jne: not equal / not zero */

loc_0014B54C: ;
    ecx = esi;
    PUSH32(esp, 0x0014B553u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014B553: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0014B570
 * Original: 0x0014B570 - 0x0014B616 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014B570: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353741);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0014B595u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_0014B595: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0014B5A1u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0014B5A1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0014B5A9u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0014B5A9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014B5AFu); RECOMP_ABI_CALL(0x002A00A0u, sub_002A00A0); /* call 0x002A00A0 */

loc_0014B5AF: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x0014B5C3u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0014B5C3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0014B5CBu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0014B5CB: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0014B5DB; /* je: equal / zero */

loc_0014B5D8: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0014B5DB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0014B603; /* je: equal / zero */

loc_0014B5EC: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014B603; /* jne: not equal / not zero */

loc_0014B5FC: ;
    ecx = esi;
    PUSH32(esp, 0x0014B603u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014B603: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0014B620
 * Original: 0x0014B620 - 0x0014B6C6 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014B620: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353741);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0014B645u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_0014B645: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0014B651u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0014B651: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0014B659u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0014B659: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014B65Fu); RECOMP_ABI_CALL(0x002A0630u, sub_002A0630); /* call 0x002A0630 */

loc_0014B65F: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x0014B673u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0014B673: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0014B67Bu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0014B67B: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0014B68B; /* je: equal / zero */

loc_0014B688: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0014B68B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0014B6B3; /* je: equal / zero */

loc_0014B69C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014B6B3; /* jne: not equal / not zero */

loc_0014B6AC: ;
    ecx = esi;
    PUSH32(esp, 0x0014B6B3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014B6B3: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0014B6D0
 * Original: 0x0014B6D0 - 0x0014B895 (453 bytes, 138 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B6D0(void)
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

loc_0014B6D0: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0014B6E5u); RECOMP_ABI_CALL(0x0014A7E0u, sub_0014A7E0); /* call 0x0014A7E0 */

loc_0014B6E5: ;
    eax = MEM32(esi + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0014B7D8; /* je: equal / zero */

loc_0014B6EF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014B88D; /* jne: not equal / not zero */

loc_0014B6F6: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(esi + 8);
    MEM32(esp + 0x2C) = ecx;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    MEM32(esp + 0xC) = eax;
    fp_push(MEMD(0x3DCF30)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0014B88D; /* jnp: not parity */

loc_0014B71B: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    PUSH32(esp, 0x0014B736u); RECOMP_ABI_CALL(0x00341916u, sub_00341916); /* call 0x00341916 */

loc_0014B736: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    PUSH32(esp, 0x0014B747u); RECOMP_ABI_CALL(0x00341916u, sub_00341916); /* call 0x00341916 */

loc_0014B747: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 0x28); /* fdiv dword ptr [esp + 0x28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0014B796; /* jp: parity */

loc_0014B75A: ;
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(esi + 0x2C); /* fmul dword ptr [esi + 0x2c] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(esi + 0x30); /* fmul dword ptr [esi + 0x30] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * MEMF(esi + 0x34); /* fmul dword ptr [esi + 0x34] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x18);
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = fp_top() * MEMF(esi + 0x38); /* fmul dword ptr [esi + 0x38] */
    MEM32(edi + 0x34) = edx;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x1C);
    MEMF(edi + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(edi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi + 0x38) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 16; return; /* ret 12 */

loc_0014B796: ;
    fp_top() = MEMF(0x3C6E40) - fp_top(); /* fsubr dword ptr [0x3c6e40] */
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(esi + 0x2C); /* fmul dword ptr [esi + 0x2c] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(esi + 0x30); /* fmul dword ptr [esi + 0x30] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * MEMF(esi + 0x34); /* fmul dword ptr [esi + 0x34] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = fp_top() * MEMF(esi + 0x38); /* fmul dword ptr [esi + 0x38] */
    MEM32(edi + 0x34) = ecx;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x38) = edx;
    MEMF(edi + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(edi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 16; return; /* ret 12 */

loc_0014B7D8: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(esi + 8);
    edx = MEM32(esi + 0x10);
    MEM32(esp + 0x28) = ecx;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    MEM32(esp + 0x2C) = eax;
    fp_push(MEMD(0x3DCF30)); /* fld double */
    MEM32(esp + 0xC) = edx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0014B88D; /* jnp: not parity */

loc_0014B804: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_push(MEMD(0x3DCF30)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0014B88D; /* jnp: not parity */

loc_0014B817: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x2C); /* fadd dword ptr [esp + 0x2c] */
    PUSH32(esp, 0x0014B828u); RECOMP_ABI_CALL(0x00341916u, sub_00341916); /* call 0x00341916 */

loc_0014B828: ;
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014B851; /* jne: not equal / not zero */

loc_0014B83D: ;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0014B844u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_0014B844: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, 0x0014B84Du); RECOMP_ABI_CALL(0x00341916u, sub_00341916); /* call 0x00341916 */

loc_0014B84D: ;
    fp_top() = fp_top() + MEMF(esp + 0x24); /* fadd dword ptr [esp + 0x24] */

loc_0014B851: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014B88D; /* jne: not equal / not zero */

loc_0014B85C: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi + 0x2C;
    MEM32(esp + 0x2C) = 0;
    PUSH32(esp, 0x0014B876u); RECOMP_ABI_CALL(0x0014AF30u, sub_0014AF30); /* call 0x0014AF30 */

loc_0014B876: ;
    edx = MEM32(eax);
    MEM32(edi + 0x2C) = edx;
    ecx = MEM32(eax + 4);
    MEM32(edi + 0x30) = ecx;
    edx = MEM32(eax + 8);
    MEM32(edi + 0x34) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(edi + 0x38) = eax;

loc_0014B88D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014B8A0
 * Original: 0x0014B8A0 - 0x0014B8C7 (39 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B8A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014B8A0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0014B8C4; /* jl: less (signed <) */

loc_0014B8A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x2694)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x2694) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014B8C4; /* jge: greater or equal (signed >=) */

loc_0014B8B0: ;
    eax = MEM32(ecx + eax * 4 + 0x2590);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0014B8C3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014B8C3: ;
    POP32(esp, esi);

loc_0014B8C4: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0014B8D0
 * Original: 0x0014B8D0 - 0x0014B8F7 (39 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B8D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014B8D0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0014B8F4; /* jl: less (signed <) */

loc_0014B8D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x2694)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x2694) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014B8F4; /* jge: greater or equal (signed >=) */

loc_0014B8E0: ;
    eax = MEM32(ecx + eax * 4 + 0x2590);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x0014B8F3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014B8F3: ;
    POP32(esp, esi);

loc_0014B8F4: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0014B900
 * Original: 0x0014B900 - 0x0014B927 (39 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014B900: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0014B924; /* jl: less (signed <) */

loc_0014B908: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x258C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x258C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014B924; /* jge: greater or equal (signed >=) */

loc_0014B910: ;
    eax = MEM32(ecx + eax * 4 + 0x2488);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0014B923u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014B923: ;
    POP32(esp, esi);

loc_0014B924: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0014B930
 * Original: 0x0014B930 - 0x0014B957 (39 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014B930: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0014B954; /* jl: less (signed <) */

loc_0014B938: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x258C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x258C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014B954; /* jge: greater or equal (signed >=) */

loc_0014B940: ;
    eax = MEM32(ecx + eax * 4 + 0x2488);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0014B953u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014B953: ;
    POP32(esp, esi);

loc_0014B954: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0014B960
 * Original: 0x0014B960 - 0x0014B9A7 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B960(void)
{

loc_0014B960: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x0014B96Fu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_0014B96F: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0014B982u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_0014B982: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0014B994u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014B994: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014B99Fu); RECOMP_ABI_CALL(0x0014B2B0u, sub_0014B2B0); /* call 0x0014B2B0 */

loc_0014B99F: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0014B9B0
 * Original: 0x0014B9B0 - 0x0014B9F7 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B9B0(void)
{

loc_0014B9B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x0014B9BFu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_0014B9BF: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0014B9D2u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_0014B9D2: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0014B9E4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014B9E4: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014B9EFu); RECOMP_ABI_CALL(0x0014B360u, sub_0014B360); /* call 0x0014B360 */

loc_0014B9EF: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0014BA00
 * Original: 0x0014BA00 - 0x0014BA47 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BA00(void)
{

loc_0014BA00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x0014BA0Fu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_0014BA0F: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0014BA22u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_0014BA22: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0014BA34u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014BA34: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014BA3Fu); RECOMP_ABI_CALL(0x0014B410u, sub_0014B410); /* call 0x0014B410 */

loc_0014BA3F: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0014BA50
 * Original: 0x0014BA50 - 0x0014BA97 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BA50(void)
{

loc_0014BA50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x0014BA5Fu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_0014BA5F: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0014BA72u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_0014BA72: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0014BA84u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014BA84: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014BA8Fu); RECOMP_ABI_CALL(0x0014B4C0u, sub_0014B4C0); /* call 0x0014B4C0 */

loc_0014BA8F: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0014BAA0
 * Original: 0x0014BAA0 - 0x0014BAE7 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BAA0(void)
{

loc_0014BAA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x0014BAAFu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_0014BAAF: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0014BAC2u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_0014BAC2: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0014BAD4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014BAD4: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014BADFu); RECOMP_ABI_CALL(0x0014ABB0u, sub_0014ABB0); /* call 0x0014ABB0 */

loc_0014BADF: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0014BAF0
 * Original: 0x0014BAF0 - 0x0014BB37 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BAF0(void)
{

loc_0014BAF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x0014BAFFu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_0014BAFF: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0014BB12u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_0014BB12: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0014BB24u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014BB24: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014BB2Fu); RECOMP_ABI_CALL(0x0014B570u, sub_0014B570); /* call 0x0014B570 */

loc_0014BB2F: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0014BB40
 * Original: 0x0014BB40 - 0x0014BB87 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BB40(void)
{

loc_0014BB40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x0014BB4Fu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_0014BB4F: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0014BB62u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_0014BB62: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0014BB74u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014BB74: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014BB7Fu); RECOMP_ABI_CALL(0x0014B620u, sub_0014B620); /* call 0x0014B620 */

loc_0014BB7F: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0014BB90
 * Original: 0x0014BB90 - 0x0014BC00 (112 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BB90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014BB90: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(eax + 0x144);
    PUSH32(esp, esi);
    esi = eax + ecx * 4 + 0x134;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0014BBB2; /* je: equal / zero */

loc_0014BBA9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(esi) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_0014BBB2; /* je: equal / zero */

loc_0014BBAF: ;
    MEM32(edx + 4) = MEM32(edx + 4) + 1;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0014BBB2: ;
    esi = ecx;
    ecx = ecx & 0x1F;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((5) & 31u));
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(eax + esi * 4 + 0x140);
    esi = eax + esi * 4 + 0x140;
    ecx = ecx | edi;
    MEM32(esi) = ecx;
    ecx = MEM32(eax + 0x144);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    POP32(esp, edi);
    MEM32(eax + 0x144) = ecx;
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0014BBFD; /* je: equal / zero */

loc_0014BBE6: ;
    ecx = MEM32(edx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014BBFD; /* jne: not equal / not zero */

loc_0014BBF6: ;
    ecx = edx;
    PUSH32(esp, 0x0014BBFDu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014BBFD: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014BC00
 * Original: 0x0014BC00 - 0x0014BD32 (306 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BC00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014BC00: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353760);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x170);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014BD21; /* je: equal / zero */

loc_0014BC2C: ;
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014BC39u); RECOMP_ABI_CALL(0x00148580u, sub_00148580); /* call 0x00148580 */

loc_0014BC39: ;
    esp = esp + 8;
    eax = MEM32(esp + 0x10);
    MEM8(eax + 0x10) = LO8(ebx);
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    eax = MEM32(edi + 0x170);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x0014BC5Du); RECOMP_ABI_CALL(0x002781D0u, sub_002781D0); /* call 0x002781D0 */

loc_0014BC5D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014BCF6; /* je: equal / zero */

loc_0014BC67: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x10;
    PUSH32(esp, 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014BC74u); RECOMP_ABI_CALL(0x0013ADA0u, sub_0013ADA0); /* call 0x0013ADA0 */

loc_0014BC74: ;
    esp = esp + 8;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    MEM8(esp + 0x24) = 1;
    PUSH32(esp, 0x0014BC86u); RECOMP_ABI_CALL(0x001EA8E0u, sub_001EA8E0); /* call 0x001EA8E0 */

loc_0014BC86: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edi = MEM32(edi + 0x170);
    ebp = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0014BC99; /* je: equal / zero */

loc_0014BC96: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0014BC99: ;
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014BCB5; /* je: equal / zero */

loc_0014BCA0: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014BCB5; /* jne: not equal / not zero */

loc_0014BCB0: ;
    PUSH32(esp, 0x0014BCB5u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014BCB5: ;
    MEM32(edi + 0xC) = ebp;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, ebp);
    if (TEST_NZ(_fa, _fb)) goto loc_0014BCD0; /* jne: not equal / not zero */

loc_0014BCC9: ;
    ecx = esi;
    PUSH32(esp, 0x0014BCD0u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014BCD0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(esp + 0x1C) = LO8(ebx);
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0014BCF6; /* je: equal / zero */

loc_0014BCDE: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0014BCF6; /* jne: not equal / not zero */

loc_0014BCF1: ;
    PUSH32(esp, 0x0014BCF6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014BCF6: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0014BD20; /* je: equal / zero */

loc_0014BD08: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0014BD20; /* jne: not equal / not zero */

loc_0014BD1B: ;
    PUSH32(esp, 0x0014BD20u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014BD20: ;
    POP32(esp, esi);

loc_0014BD21: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0014BD40
 * Original: 0x0014BD40 - 0x0014BD64 (36 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BD40(void)
{

loc_0014BD40: ;
    edx = MEM32(esp + 4);
    eax = ecx + 0x1254;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x1224);
    ecx = ecx & edx;
    ecx = ecx << 6;
    ecx = ecx + eax;
    PUSH32(esp, 0x0014BD61u); RECOMP_ABI_CALL(0x0014A7E0u, sub_0014A7E0); /* call 0x0014A7E0 */

loc_0014BD61: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0014BD70
 * Original: 0x0014BD70 - 0x0014BD94 (36 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BD70(void)
{

loc_0014BD70: ;
    edx = MEM32(esp + 4);
    eax = ecx + 0x1254;
    ecx = MEM32(eax + 0x1224);
    ecx = ecx & edx;
    ecx = ecx << 6;
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x0014BD91u); RECOMP_ABI_CALL(0x0014A7E0u, sub_0014A7E0); /* call 0x0014A7E0 */

loc_0014BD91: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0014BDA0
 * Original: 0x0014BDA0 - 0x0014BDC1 (33 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BDA0(void)
{

loc_0014BDA0: ;
    edx = MEM32(esp + 4);
    eax = ecx + 0x28;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x1224);
    ecx = ecx & edx;
    ecx = ecx << 6;
    ecx = ecx + eax;
    PUSH32(esp, 0x0014BDBEu); RECOMP_ABI_CALL(0x0014A7E0u, sub_0014A7E0); /* call 0x0014A7E0 */

loc_0014BDBE: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0014BDD0
 * Original: 0x0014BDD0 - 0x0014BDF1 (33 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BDD0(void)
{

loc_0014BDD0: ;
    edx = MEM32(esp + 4);
    eax = ecx + 0x28;
    ecx = MEM32(eax + 0x1224);
    ecx = ecx & edx;
    ecx = ecx << 6;
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x0014BDEEu); RECOMP_ABI_CALL(0x0014A7E0u, sub_0014A7E0); /* call 0x0014A7E0 */

loc_0014BDEE: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0014BE00
 * Original: 0x0014BE00 - 0x0014BE4A (74 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BE00(void)
{

loc_0014BE00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0014BE09u); RECOMP_ABI_CALL(0x0014B210u, sub_0014B210); /* call 0x0014B210 */

loc_0014BE09: ;
    edi = eax;
    eax = MEM32(esp + 0xC);
    ecx = edi;
    ecx = ecx << 6;
    PUSH32(esp, eax);
    ecx = ecx + esi;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014BE1Du); RECOMP_ABI_CALL(0x0014B270u, sub_0014B270); /* call 0x0014B270 */

loc_0014BE1D: ;
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = esi + edx * 4 + 0x1000;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    esp = esp + 8;
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    eax = MEM32(esi + edi * 4 + 0x1124);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014BE50
 * Original: 0x0014BE50 - 0x0014BECF (127 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BE50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014BE50: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    ecx = ecx << 2;
    PUSH32(esp, edi);
    edi = MEM32(ecx + eax + 0x1000);
    edx = ~edx;
    edi = edi & edx;
    MEM32(ecx + eax + 0x1000) = edi;
    MEM32(ecx + eax + 0x1118) = MEM32(ecx + eax + 0x1118) & edx;
    ecx = MEM32(eax + 0x110C);
    edx = MEM32(eax + 0x1114);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    MEM32(eax + 0x110C) = ecx;
    MEM32(eax + 0x1114) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0014BEB5; /* jl: less (signed <) */

loc_0014BEA4: ;
    MEM32(eax + 0x110C) = 0;
    ecx = 0x3F;
    goto loc_0014BEB6;

loc_0014BEB5: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0014BEB6: ;
    MEM32(eax + ecx * 4 + 0x1008) = esi;
    ecx = MEM32(eax + 0x1120);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x1120) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014BED0
 * Original: 0x0014BED0 - 0x0014BF2D (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014BED0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x110C) = esi;
    MEM32(ecx + 0x1110) = esi;
    MEM32(ecx + 0x1114) = esi;
    edx = 0; /* xor self */
    goto loc_0014BEF0;

    /* nop */

loc_0014BEF0: ;
    eax = MEM32(ecx + 0x110C);
    edi = MEM32(ecx + 0x1114);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    MEM32(ecx + 0x110C) = eax;
    MEM32(ecx + 0x1114) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0014BF1C; /* jl: less (signed <) */

loc_0014BF0F: ;
    MEM32(ecx + 0x110C) = esi;
    eax = 0x3F;
    goto loc_0014BF1D;

loc_0014BF1C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0014BF1D: ;
    MEM32(ecx + eax * 4 + 0x1008) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014BEF0; /* jl: less (signed <) */

loc_0014BF2A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014BF30
 * Original: 0x0014BF30 - 0x0014BF35 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BF30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014BF30: ;
    g_seh_ebp = ebp; sub_0014B120(); return; /* tail jmp 0x0014B120 */

}

/**
 * sub_0014BF40
 * Original: 0x0014BF40 - 0x0014BF59 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BF40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014BF40: ;
    eax = MEM32(ecx + 0x1148);
    ecx = ecx + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014BF54; /* jne: not equal / not zero */

loc_0014BF4E: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 8; return; /* ret 4 */

loc_0014BF54: ;
    g_seh_ebp = ebp; sub_0014BE00(); return; /* tail jmp 0x0014BE00 */

}

/**
 * sub_0014BF60
 * Original: 0x0014BF60 - 0x0014BFAA (74 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BF60(void)
{

loc_0014BF60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0014BF69u); RECOMP_ABI_CALL(0x0014B210u, sub_0014B210); /* call 0x0014B210 */

loc_0014BF69: ;
    edi = eax;
    eax = MEM32(esp + 0xC);
    ecx = edi;
    ecx = ecx << 6;
    PUSH32(esp, eax);
    ecx = ecx + esi;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014BF7Du); RECOMP_ABI_CALL(0x0014B290u, sub_0014B290); /* call 0x0014B290 */

loc_0014BF7D: ;
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = esi + edx * 4 + 0x1000;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    esp = esp + 8;
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    eax = MEM32(esi + edi * 4 + 0x1124);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014BFB0
 * Original: 0x0014BFB0 - 0x0014C052 (162 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BFB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014BFB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    ecx = esi + 0x1000;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(esi + 0x110C) = edi;
    MEM32(esi + 0x1110) = edi;
    MEM32(esi + 0x1114) = edi;
    edx = 0; /* xor self */
    eax = esi + 0x1118;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    ecx = esi;
    MEM32(esi + 0x1120) = edi;
    PUSH32(esp, 0x0014BFEFu); RECOMP_ABI_CALL(0x0014BED0u, sub_0014BED0); /* call 0x0014BED0 */

loc_0014BFEF: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x1224) = edi;
    MEM32(esi + 0x1228) = edi;
    ecx = 0x3F;
    edx = 0; /* xor self */

loc_0014C004: ;
    eax = eax + eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    eax = eax | 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014C004; /* jne: not equal / not zero */

loc_0014C010: ;
    MEM32(esi + 0x1224) = eax;
    MEM32(esi + 0x1228) = edx;
    eax = 0; /* xor self */
    edx = esi + 0x1124;
    goto loc_0014C030;

    /* nop */
    /* nop */

loc_0014C030: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x1228);
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
    if (CMP_L(_fas, _fbs)) goto loc_0014C030; /* jl: less (signed <) */

loc_0014C04D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014C060
 * Original: 0x0014C060 - 0x0014C45F (1023 bytes, 269 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C060(void)
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

loc_0014C060: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x35377B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0xAC;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC0);
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(eax + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = eax + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0xC) = ecx;
    if (TEST_S(_fas, _fbs)) goto loc_0014C41A; /* jl: less (signed <) */

loc_0014C09C: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, 1);
    goto loc_0014C0A5;

loc_0014C0A1: ;
    ecx = MEM32(esp + 0x10);

loc_0014C0A5: ;
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(eax + 0x10);
    esi = MEM32(eax + ecx * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x14) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0014C0B9; /* je: equal / zero */

loc_0014C0B6: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0014C0B9: ;
    ecx = MEM32(ebp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    edx = esp + 0x80;
    PUSH32(esp, edx);
    MEM32(esp + 0xD0) = 0;
    PUSH32(esp, 0x0014C0D7u); RECOMP_ABI_CALL(0x00209950u, sub_00209950); /* call 0x00209950 */

loc_0014C0D7: ;
    eax = MEM32(esi + 0xC);
    eax = eax - 0;
    if ((eax == 0)) goto loc_0014C1E3; /* je: equal / zero */

loc_0014C0E3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014C3ED; /* jne: not equal / not zero */

loc_0014C0EA: ;
    _fa = (uint32_t)(MEM32(edi + 0x1120)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1120), 0x40 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014C3ED; /* je: equal / zero */

loc_0014C0F7: ;
    eax = MEM32(0x5BE400);
    MEM32(esp + 0x80) = 0;
    MEM32(esp + 0x7C) = 2;
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + esi);
    eax = eax + esi;
    MEM32(esp + 0x9C) = ecx;
    edx = MEM32(eax + 4);
    ecx = MEM32(0x5BE36C);
    MEM32(esp + 0xA0) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0xA4) = eax;
    eax = MEM32(ecx + 8);
    edx = MEM32(eax + esi);
    eax = eax + esi;
    MEM32(esp + 0xA8) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0xAC) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0xB0) = edx;
    eax = MEM32(eax + 0xC);
    edx = MEM32(0x5BE27C);
    MEM32(esp + 0xB4) = eax;
    eax = MEM32(edx + 8);
    ecx = edi + 0x2948;
    PUSH32(esp, ecx);
    eax = eax + esi;
    PUSH32(esp, eax);
    ecx = esp + 0x98;
    PUSH32(esp, 0x0014C184u); RECOMP_ABI_CALL(0x0023FCF0u, sub_0023FCF0); /* call 0x0023FCF0 */

loc_0014C184: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esp + 0xB8) = LO8(ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_0014C197; /* jne: not equal / not zero */

loc_0014C192: ;
    eax = 0x3C806C;

loc_0014C197: ;
    ecx = esp + 0x84;
    PUSH32(esp, ecx);
    edx = esp + 0x84;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014C1ACu); RECOMP_ABI_CALL(0x0014A850u, sub_0014A850); /* call 0x0014A850 */

loc_0014C1AC: ;
    eax = MEM32(edi + 0x1120);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014C1BF; /* jne: not equal / not zero */

loc_0014C1BA: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_0014C1CB;

loc_0014C1BF: ;
    eax = esp + 0x7C;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0014C1CBu); RECOMP_ABI_CALL(0x0014BE00u, sub_0014BE00); /* call 0x0014BE00 */

loc_0014C1CB: ;
    ecx = MEM32(edi + 0x2564);
    MEM32(edi + ecx * 4 + 0x2460) = eax;
    MEM32(edi + 0x2564) = MEM32(edi + 0x2564) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x2564)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0014C3ED;

loc_0014C1E3: ;
    _fa = (uint32_t)(MEM32(edi + 0x234C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x234C), 0x40 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014C3ED; /* je: equal / zero */

loc_0014C1F0: ;
    ecx = MEM32(0x5BE4C8);
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    ecx = MEM32(ecx + 8);
    fp_push(MEMF(ecx + esi)); /* fld float */
    ecx = ecx + esi;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0014C2F4; /* jp: parity */

loc_0014C211: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0014C2F4; /* jp: parity */

loc_0014C227: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBF800000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 0xBF800000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014C2F4; /* jne: not equal / not zero */

loc_0014C234: ;
    eax = MEM32(0x5BE36C);
    ecx = MEM32(eax + 8);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = ecx + esi;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0x3F800000;
    PUSH32(esp, 0x0014C268u); RECOMP_ABI_CALL(0x0014A750u, sub_0014A750); /* call 0x0014A750 */

loc_0014C268: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014C2F4; /* je: equal / zero */

loc_0014C270: ;
    edx = MEM32(0x5BE328);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 8);
    ecx = ecx + esi;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x38) = 0x3F800000;
    PUSH32(esp, 0x0014C2A5u); RECOMP_ABI_CALL(0x0014A750u, sub_0014A750); /* call 0x0014A750 */

loc_0014C2A5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014C2F4; /* je: equal / zero */

loc_0014C2A9: ;
    eax = MEM32(0x5BE0AC);
    eax = MEM32(eax + 8);
    fp_push(MEMF(eax + esi + 8)); /* fld float */
    eax = eax + esi;
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
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014C2F4; /* jne: not equal / not zero */

loc_0014C2DF: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi + 0x292C;
    PUSH32(esp, 0x0014C2EFu); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_0014C2EF: ;
    goto loc_0014C3ED;

loc_0014C2F4: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014C300; /* jne: not equal / not zero */

loc_0014C2FB: ;
    eax = 0x3C806C;

loc_0014C300: ;
    PUSH32(esp, 0x3DCF38);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014C30Bu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_0014C30B: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x38) = 3;
    if (TEST_NZ(_fa, _fb)) goto loc_0014C322; /* jne: not equal / not zero */

loc_0014C31A: ;
    MEM32(esp + 0x38) = 2;

loc_0014C322: ;
    edx = MEM32(0x5BE400);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + esi);
    edx = MEM32(eax + esi + 4);
    eax = eax + esi;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(0x5BE0AC);
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + esi + 4);
    eax = eax + esi;
    MEM32(esp + 0x4C) = edx;
    edx = MEM32(eax);
    MEM32(esp + 0x54) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x58) = ecx;
    ecx = MEM32(0x5BE36C);
    MEM32(esp + 0x60) = eax;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + esi + 4);
    eax = eax + esi;
    MEM32(esp + 0x5C) = edx;
    edx = MEM32(eax);
    MEM32(esp + 0x64) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x68) = ecx;
    ecx = MEM32(0x5BE4C8);
    MEM32(esp + 0x70) = eax;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + esi + 4);
    eax = eax + esi;
    MEM32(esp + 0x6C) = edx;
    edx = MEM32(eax);
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM32(edi + 0x234C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x234C), 0x40 (32-bit) */
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x44) = edx;
    MEM8(esp + 0x74) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0014C3C3; /* jne: not equal / not zero */

loc_0014C3BE: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_0014C3D3;

loc_0014C3C3: ;
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = edi + 0x122C;
    PUSH32(esp, 0x0014C3D3u); RECOMP_ABI_CALL(0x0014BF60u, sub_0014BF60); /* call 0x0014BF60 */

loc_0014C3D3: ;
    _fa = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x38), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014C3ED; /* jne: not equal / not zero */

loc_0014C3DA: ;
    ecx = MEM32(edi + 0x266C);
    MEM32(edi + ecx * 4 + 0x2568) = eax;
    MEM32(edi + 0x266C) = MEM32(edi + 0x266C) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x266C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0014C3ED: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esp + 0xC4) = 0xFFFFFFFFu;
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014C40F; /* jne: not equal / not zero */

loc_0014C408: ;
    ecx = esi;
    PUSH32(esp, 0x0014C40Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014C40F: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0014C0A1; /* jns: not sign (positive) */

loc_0014C419: ;
    POP32(esp, ebx);

loc_0014C41A: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0014C422u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014C422: ;
    esi = eax;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0014C445; /* js: sign (negative) */

loc_0014C427: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0014C430u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014C430: ;
    ecx = MEM32(ebp + 0x1C);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014C442; /* jne: not equal / not zero */

loc_0014C43A: ;
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x0014C442u); RECOMP_ABI_CALL(0x00269400u, sub_00269400); /* call 0x00269400 */

loc_0014C442: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0014C427; /* jns: not sign (positive) */

loc_0014C445: ;
    ecx = MEM32(esp + 0xB8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xB8;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014C460
 * Original: 0x0014C460 - 0x0014C5EF (399 bytes, 126 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C460(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014C460: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x35379B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x84;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x9C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebx = ecx;
    MEM32(esp + 8) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0014C491; /* je: equal / zero */

loc_0014C48E: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0014C491: ;
    eax = MEM32(0x5BD9C8);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x98) = 0;
    PUSH32(esp, 0x0014C4A9u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0014C4A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014C4C5; /* jne: not equal / not zero */

loc_0014C4AD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x94) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_0014C5D6; /* je: equal / zero */

loc_0014C4C0: ;
    goto loc_0014C5BF;

loc_0014C4C5: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    PUSH32(esp, 0x46D0A0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014C4D6u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0014C4D6: ;
    ebp = ebx + 0x2948;
    edx = esp + 0x5C;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014C4E7u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0014C4E7: ;
    eax = MEM32(esi);
    edi = MEM32(0x5BD8C8);
    esp = esp + 0x10;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0014C4F7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014C4F7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014C51A; /* jne: not equal / not zero */

loc_0014C4FB: ;
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014C509u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0014C509: ;
    esp = esp + 8;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0014C518u); RECOMP_ABI_CALL(0x00242660u, sub_00242660); /* call 0x00242660 */

loc_0014C518: ;
    goto loc_0014C561;

loc_0014C51A: ;
    edx = MEM32(esi);
    edi = MEM32(0x5BD8AC);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0014C527u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014C527: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    eax = MEM32(esi);
    if (CMP_NE(_fa, _fb)) goto loc_0014C54A; /* jne: not equal / not zero */

loc_0014C52D: ;
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0014C53Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014C53C: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0014C548u); RECOMP_ABI_CALL(0x00242660u, sub_00242660); /* call 0x00242660 */

loc_0014C548: ;
    goto loc_0014C561;

loc_0014C54A: ;
    edi = MEM32(0x5BDA2C);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0014C555u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014C555: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014C561; /* jne: not equal / not zero */

loc_0014C559: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0014C561u); RECOMP_ABI_CALL(0x0014C060u, sub_0014C060); /* call 0x0014C060 */

loc_0014C561: ;
    ecx = MEM32(0x5BDA80);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0014C56Fu); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0014C56F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014C5A4; /* je: equal / zero */

loc_0014C573: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014C57F; /* je: equal / zero */

loc_0014C57A: ;
    eax = MEM32(eax + 8);
    goto loc_0014C581;

loc_0014C57F: ;
    eax = 0; /* xor self */

loc_0014C581: ;
    edi = eax + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0014C5A4; /* jl: less (signed <) */

loc_0014C588: ;
    goto loc_0014C590;

    /* nop */

loc_0014C590: ;
    eax = MEM32(esi + 0x1C);
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + edi * 4);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0014C5A1u); RECOMP_ABI_CALL(0x0014C460u, sub_0014C460); /* call 0x0014C460 */

loc_0014C5A1: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0014C590; /* jns: not sign (positive) */

loc_0014C5A4: ;
    eax = esp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0014C5AFu); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0014C5AF: ;
    esp = esp + 8;
    POP32(esp, edi);
    MEM32(esp + 0x98) = 0xFFFFFFFFu;
    POP32(esp, ebp);

loc_0014C5BF: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ecx;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014C5D6; /* jne: not equal / not zero */

loc_0014C5CF: ;
    ecx = esi;
    PUSH32(esp, 0x0014C5D6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014C5D6: ;
    ecx = MEM32(esp + 0x8C);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x90;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014C5F0
 * Original: 0x0014C5F0 - 0x0014C60A (26 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C5F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014C5F0: ;
    _fa = (uint32_t)(MEM32(ecx + 0x2374)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x2374), 0x40 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014C5FF; /* jne: not equal / not zero */

loc_0014C5F9: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 8; return; /* ret 4 */

loc_0014C5FF: ;
    ecx = ecx + 0x1254;
    g_seh_ebp = ebp; sub_0014BF60(); return; /* tail jmp 0x0014BF60 */

}

/**
 * sub_0014C610
 * Original: 0x0014C610 - 0x0014C708 (248 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014C610: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x1120) = 0;
    eax = 0; /* xor self */
    ecx = esi + 0x1118;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0014C633u); RECOMP_ABI_CALL(0x0014AF60u, sub_0014AF60); /* call 0x0014AF60 */

loc_0014C633: ;
    ecx = esi;
    PUSH32(esp, 0x0014C63Au); RECOMP_ABI_CALL(0x0014BED0u, sub_0014BED0); /* call 0x0014BED0 */

loc_0014C63A: ;
    edx = 2;
    eax = esi + 0x1128;
    goto loc_0014C650;

    /* nop */
    edi = edi;

loc_0014C650: ;
    ecx = MEM32(esi + 0x1228);
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(eax + -4) = MEM32(eax + -4) + edi;
    if (((int32_t)MEM32(eax + -4) >= 0)) goto loc_0014C67A; /* jns: not sign (positive) */

loc_0014C662: ;
    edi = edx + -2;
    MEM32(eax + -4) = edi;
    ecx = MEM32(esi + 0x1228);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ebx = ebx | edi;
    MEM32(eax + -4) = ebx;

loc_0014C67A: ;
    ecx = MEM32(esi + 0x1228);
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(eax) = MEM32(eax) + edi;
    if (((int32_t)MEM32(eax) >= 0)) goto loc_0014C6A1; /* jns: not sign (positive) */

loc_0014C68B: ;
    edi = edx + -1;
    MEM32(eax) = edi;
    ecx = MEM32(esi + 0x1228);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ebx = ebx | edi;
    MEM32(eax) = ebx;

loc_0014C6A1: ;
    ecx = MEM32(esi + 0x1228);
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(eax + 4) = MEM32(eax + 4) + edi;
    if (((int32_t)MEM32(eax + 4) >= 0)) goto loc_0014C6C8; /* jns: not sign (positive) */

loc_0014C6B3: ;
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 0x1228);
    edi = 1;
    edi = edi << LO8(ecx);
    edi = edi | edx;
    MEM32(eax + 4) = edi;

loc_0014C6C8: ;
    ecx = MEM32(esi + 0x1228);
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(eax + 8) = MEM32(eax + 8) + edi;
    if (((int32_t)MEM32(eax + 8) >= 0)) goto loc_0014C6F2; /* jns: not sign (positive) */

loc_0014C6DA: ;
    edi = edx + 1;
    MEM32(eax + 8) = edi;
    ecx = MEM32(esi + 0x1228);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ebx = ebx | edi;
    MEM32(eax + 8) = ebx;

loc_0014C6F2: ;
    edx = edx + 4;
    ecx = edx + -2;
    eax = eax + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014C650; /* jl: less (signed <) */

loc_0014C704: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0014C710
 * Original: 0x0014C710 - 0x0014C7AF (159 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014C710: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1224);
    edi = edi & ecx;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0014C728u); RECOMP_ABI_CALL(0x0014BE50u, sub_0014BE50); /* call 0x0014BE50 */

loc_0014C728: ;
    ecx = MEM32(esi + 0x1228);
    eax = 1;
    eax = eax << LO8(ecx);
    MEM32(esi + edi * 4 + 0x1124) = MEM32(esi + edi * 4 + 0x1124) + eax;
    if (((int32_t)MEM32(esi + edi * 4 + 0x1124) >= 0)) goto loc_0014C75B; /* jns: not sign (positive) */

loc_0014C73E: ;
    MEM32(esi + edi * 4 + 0x1124) = edi;
    ecx = MEM32(esi + 0x1228);
    edx = 1;
    edx = edx << LO8(ecx);
    edx = edx | edi;
    MEM32(esi + edi * 4 + 0x1124) = edx;

loc_0014C75B: ;
    eax = MEM32(esi + 0x2674);
    esi = esi + 0x2670;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0014C774u); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_0014C774: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014C782; /* jne: not equal / not zero */

loc_0014C77E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014C7AA; /* je: equal / zero */

loc_0014C782: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0014C78Au); RECOMP_ABI_CALL(0x00199920u, sub_00199920); /* call 0x00199920 */

loc_0014C78A: ;
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = esi + edx * 4 + 0xA8;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;

loc_0014C7AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014C7B0
 * Original: 0x0014C7B0 - 0x0014C802 (82 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C7B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0014C7B0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x2450);
    PUSH32(esp, edi);
    edi = ecx + 0x122C;
    esi = esi & MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0014C7CAu); RECOMP_ABI_CALL(0x0014BE50u, sub_0014BE50); /* call 0x0014BE50 */

loc_0014C7CA: ;
    ecx = MEM32(edi + 0x1228);
    eax = 1;
    eax = eax << LO8(ecx);
    MEM32(edi + esi * 4 + 0x1124) = MEM32(edi + esi * 4 + 0x1124) + eax;
    if (((int32_t)MEM32(edi + esi * 4 + 0x1124) >= 0)) goto loc_0014C7FD; /* jns: not sign (positive) */

loc_0014C7E0: ;
    MEM32(edi + esi * 4 + 0x1124) = esi;
    ecx = MEM32(edi + 0x1228);
    edx = 1;
    edx = edx << LO8(ecx);
    edx = edx | esi;
    MEM32(edi + esi * 4 + 0x1124) = edx;

loc_0014C7FD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014C810
 * Original: 0x0014C810 - 0x0014C815 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C810(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014C810: ;
    g_seh_ebp = ebp; sub_0014AF60(); return; /* tail jmp 0x0014AF60 */

}

/**
 * sub_0014C820
 * Original: 0x0014C820 - 0x0014C828 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C820(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014C820: ;
    ecx = ecx + 0x28;
    g_seh_ebp = ebp; sub_0014C7B0(); return; /* tail jmp 0x0014C7B0 */

}

/**
 * sub_0014C830
 * Original: 0x0014C830 - 0x0014C838 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C830(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014C830: ;
    ecx = ecx + 0x28;
    g_seh_ebp = ebp; sub_0014C710(); return; /* tail jmp 0x0014C710 */

}

/**
 * sub_0014C840
 * Original: 0x0014C840 - 0x0014C8E7 (167 bytes, 52 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014C840: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x0014C851u); RECOMP_ABI_CALL(0x00049810u, sub_00049810); /* call 0x00049810 */

loc_0014C851: ;
    MEM32(esi + 8) = eax;
    eax = eax << 4;
    eax = eax + esi + 0xC;
    edi = esi + 4;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(eax + 4) = 0x3FFFFFFF;
    MEM32(eax + 8) = 0x3FFFFFFF;
    MEM32(eax) = 0x7FFFFFFF;
    PUSH32(esp, 0x0014C87Au); RECOMP_ABI_CALL(0x001994F0u, sub_001994F0); /* call 0x001994F0 */

loc_0014C87A: ;
    ecx = MEM32(edi);
    ecx = ecx << 4;
    eax = ecx + esi + 0xC;
    MEM32(eax) = MEM32(eax) & 0xBFFFFFFFu;
    edx = MEM32(edi);
    edx = edx << 4;
    ecx = MEM32(edx + esi + 0xC);
    eax = edx + esi + 0xC;
    ecx = ecx & 0x40000000;
    ecx = ecx | 0x3FFFFFFF;
    MEM32(eax) = ecx;
    ecx = MEM32(esi + 8);
    edx = ecx + ecx * 2;
    eax = esi + edx * 4 + 0x78;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014C8C6; /* je: equal / zero */

loc_0014C8B2: ;
    edx = MEM32(esp + 0x10);
    edi = MEM32(edx);
    MEM32(eax) = edi;
    edi = MEM32(edx + 4);
    MEM32(eax + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;

loc_0014C8C6: ;
    eax = ecx;
    ecx = ecx & 0x1F;
    edx = 1;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = esi + eax * 4 + 0xA8;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0014C8F0
 * Original: 0x0014C8F0 - 0x0014C8F8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C8F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014C8F0: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_0014C900(); return; /* tail jmp 0x0014C900 */

}

/**
 * sub_0014C900
 * Original: 0x0014C900 - 0x0014C928 (40 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C900(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014C900: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esi + 0x64;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x0014C914u); RECOMP_ABI_CALL(0x0014A7A0u, sub_0014A7A0); /* call 0x0014A7A0 */

loc_0014C914: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi + 0x44;
    PUSH32(esp, 0x0014C921u); RECOMP_ABI_CALL(0x00049870u, sub_00049870); /* call 0x00049870 */

loc_0014C921: ;
    MEM32(esi + 0x68) = MEM32(esi + 0x68) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014C930
 * Original: 0x0014C930 - 0x0014D1A7 (2167 bytes, 629 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C930(void)
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

loc_0014C930: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xE0));
    esp = esp - 0xE0;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(esp + 0x10) = esi;
    eax = MEM32(esp + 0xF4);
    ecx = MEM32(eax + 0x20);
    MEM32(esi + 0x293C) = ecx;
    edx = MEM32(eax + 0x24);
    MEM32(esi + 0x2940) = edx;
    ecx = MEM32(eax + 0x28);
    MEM32(esi + 0x2944) = ecx;
    edx = MEM32(eax + 0x30);
    MEM32(esi + 0x2930) = edx;
    ecx = MEM32(eax + 0x34);
    MEM32(esi + 0x2934) = ecx;
    edx = MEM32(eax + 0x38);
    MEM32(esi + 0x2938) = edx;
    fp_push(MEMF(esi + 0x293C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3DCF58); /* fmul dword ptr [0x3dcf58] */
    eax = MEM32(esp + 0xF8);
    fp_push(MEMF(esi + 0x2940)); /* fld float */
    ebp = MEM32(esi + 0x2988);
    fp_top() = fp_top() * MEMF(0x3DCF58); /* fmul dword ptr [0x3dcf58] */
    ecx = MEM32(esp + 0xFC);
    fp_push(MEMF(esi + 0x2944)); /* fld float */
    ebx = MEM32(esi + 0x298C);
    fp_top() = fp_top() * MEMF(0x3DCF58); /* fmul dword ptr [0x3dcf58] */
    edx = eax;
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ebp));
    edx = edx - ebp;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    edi = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { uint64_t _t = (uint64_t)(edi) - (uint64_t)(ebx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edi = (uint32_t)_t; }  /* sbb */
    fp_top() = fp_top() * MEMF(0x3CB260); /* fmul dword ptr [0x3cb260] */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = edi;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(0x3CB260); /* fmul dword ptr [0x3cb260] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CB260); /* fmul dword ptr [0x3cb260] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x2930); /* fadd dword ptr [esi + 0x2930] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + MEMF(esi + 0x2934); /* fadd dword ptr [esi + 0x2934] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(esi + 0x2938); /* fadd dword ptr [esi + 0x2938] */
    MEM32(esi + 0x2988) = eax;
    MEM32(esi + 0x298C) = ecx;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM64(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMD(0x3DA5F8); /* fmul qword ptr [0x3da5f8] */
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0014CA3E; /* jp: parity */

loc_0014CA36: ;
    MEM32(esp + 0x28) = 0;

loc_0014CA3E: ;
    ecx = esp + 0x78;
    PUSH32(esp, 0x0014CA47u); RECOMP_ABI_CALL(0x000A0C70u, sub_000A0C70); /* call 0x000A0C70 */

loc_0014CA47: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0014CA53u); RECOMP_ABI_CALL(0x0014AAD0u, sub_0014AAD0); /* call 0x0014AAD0 */

loc_0014CA53: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    _cf = (int)(_fa < _fb);
    edi = MEM32(eax + 4);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0014CBF7; /* je: equal / zero */

loc_0014CA69: ;
    ebx = MEM32(esp + 0xAC);
    edx = ecx;
    if (6) _cf = (int)(((edx) >> (32 - (6))) & 1);
    edx = edx << 6;
    eax = edx + edi;
    SET_LO8(edx, MEM8(eax + 0x3C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0014CB6E; /* je: equal / zero */

loc_0014CA83: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() - MEMF(eax + 0x1C); /* fsub dword ptr [eax + 0x1c] */
    ecx = MEM32(esi + ecx * 4 + 0x1124);
    fp_push(MEMF(esp + 0x30)); /* fld float */
    edx = MEM32(eax);
    fp_top() = fp_top() - MEMF(eax + 0x18); /* fsub dword ptr [eax + 0x18] */
    MEM32(esp + 0x1C) = ecx;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    MEM32(esp + 0x20) = edx;
    fp_top() = fp_top() - MEMF(eax + 0x14); /* fsub dword ptr [eax + 0x14] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014CAE7; /* jge: greater or equal (signed >=) */

loc_0014CAC8: ;
    eax = ebx + ebx * 2;
    eax = esp + eax * 4 + 0x78;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(esp + 0xAC) = MEM32(esp + 0xAC) + 1;
    _fa = (uint32_t)(MEM32(esp + 0xAC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0014CB6E;

loc_0014CAE7: ;
    _cf = 0; /* logical op clears CF */
    edx = edx | 0xFFFFFFFFu;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0014CB6E; /* jle: less or equal (signed <=) */

loc_0014CAF0: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    esi = 0xFFFFFFF4u;
    ebx = esp + 0x7C;
    goto loc_0014CB00;

    /* nop */

loc_0014CB00: ;
    ecx = MEM32(ebx);
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0014CB1A; /* jg: greater (signed >) */

loc_0014CB0A: ;
    if (CMP_NE(_fa, _fb)) goto loc_0014CB3D; /* jne: not equal / not zero */

loc_0014CB0C: ;
    fp_push(MEMF(ebx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0014CB3D; /* jne: not equal / not zero */

loc_0014CB1A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_0014CB39; /* jl: less (signed <) */

loc_0014CB1E: ;
    eax = MEM32(esp + esi + 0x7C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0014CB39; /* jg: greater (signed >) */

loc_0014CB26: ;
    if (CMP_NE(_fa, _fb)) goto loc_0014CB3D; /* jne: not equal / not zero */

loc_0014CB28: ;
    fp_push(MEMF(ebx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + esi + 0x80)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + esi + 0x80] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0014CB3D; /* jne: not equal / not zero */

loc_0014CB39: ;
    edx = edi;
    esi = ebp;

loc_0014CB3D: ;
    eax = MEM32(esp + 0xAC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0xC)) >> 32) & 1);
    ebp = ebp + 0xC;
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0xC)) >> 32) & 1);
    ebx = ebx + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0014CB00; /* jl: less (signed <) */

loc_0014CB4F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_0014CB6E; /* jl: less (signed <) */

loc_0014CB53: ;
    ecx = MEM32(esp + 0x1C);
    edx = edx + edx * 2;
    eax = esp + edx * 4 + 0x78;
    edx = MEM32(esp + 0x20);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;

loc_0014CB6E: ;
    edx = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x18);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0014CBDF; /* jge: greater or equal (signed >=) */

loc_0014CB7C: ;
    eax = edx;
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((5) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4 + 0x1118);
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    if (LO8(ecx)) _cf = (int)(((eax) >> ((LO8(ecx)) - 1)) & 1);
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0014CBAE; /* jne: not equal / not zero */

loc_0014CB93: ;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFFFFFE0u;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x20)) >> 32) & 1);
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0014CBDF; /* jge: greater or equal (signed >=) */

loc_0014CB9E: ;
    ecx = edx;
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> ((((5) & 31u)) - 1)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = MEM32(edi + ecx * 4 + 0x1118);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0014CB93; /* je: equal / zero */

loc_0014CBAE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0014CBBB; /* jne: not equal / not zero */

loc_0014CBB5: ;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x10)) >> 32) & 1);
    edx = edx + 0x10;
    if (0x10) _cf = (int)(((eax) >> ((0x10) - 1)) & 1);
    eax = eax >> 0x10;

loc_0014CBBB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0014CBC5; /* jne: not equal / not zero */

loc_0014CBBF: ;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(8)) >> 32) & 1);
    edx = edx + 8;
    if (8) _cf = (int)(((eax) >> ((8) - 1)) & 1);
    eax = eax >> 8;

loc_0014CBC5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0014CBCF; /* jne: not equal / not zero */

loc_0014CBC9: ;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(4)) >> 32) & 1);
    edx = edx + 4;
    if (4) _cf = (int)(((eax) >> ((4) - 1)) & 1);
    eax = eax >> 4;

loc_0014CBCF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0014CBDA; /* jne: not equal / not zero */

loc_0014CBD3: ;
    if (1) _cf = (int)(((eax) >> ((1) - 1)) & 1);
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0014CBD3; /* je: equal / zero */

loc_0014CBDA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0014CBE4; /* jl: less (signed <) */

loc_0014CBDF: ;
    edx = 0x40;

loc_0014CBE4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = MEM32(esp + 0x10);
    ecx = edx;
    MEM32(esp + 0x14) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0014CA69; /* jne: not equal / not zero */

loc_0014CBF7: ;
    eax = MEM32(esi + 0x2674);
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x2670)) >> 32) & 1);
    esi = esi + 0x2670;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0014CC23; /* je: equal / zero */

loc_0014CC0A: ;
    edx = eax + 1;
    if (4) _cf = (int)(((edx) >> (32 - (4))) & 1);
    edx = edx << 4;
    ecx = MEM32(edx + esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0014CC23; /* je: equal / zero */

loc_0014CC1B: ;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0014CC23u); RECOMP_ABI_CALL(0x00171BB0u, sub_00171BB0); /* call 0x00171BB0 */

loc_0014CC23: ;
    ebx = eax;

loc_0014CC25: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3FFFFFFF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0014CC35; /* jne: not equal / not zero */

loc_0014CC2D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0014CCFC; /* je: equal / zero */

loc_0014CC35: ;
    eax = ebx + ebx * 2 + 0x1E;
    PUSH32(esp, ebx);
    ecx = esi;
    edi = ebx;
    ebp = esi + eax * 4;
    PUSH32(esp, 0x0014CC46u); RECOMP_ABI_CALL(0x000EA8E0u, sub_000EA8E0); /* call 0x000EA8E0 */

loc_0014CC46: ;
    ebx = eax;
    eax = MEM32(ebp + 4);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0));
    eax = eax - 0;
    if ((eax == 0)) goto loc_0014CCBE; /* je: equal / zero */

loc_0014CC50: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0014CC97; /* je: equal / zero */

loc_0014CC53: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014CC25; /* jne: not equal / not zero */

loc_0014CC56: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() + MEMF(ebp + 8); /* fadd dword ptr [ebp + 8] */
    MEMF(ebp + 8) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3DCEB8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3dceb8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0014CC25; /* jne: not equal / not zero */

loc_0014CC6D: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0014CC75u); RECOMP_ABI_CALL(0x00199920u, sub_00199920); /* call 0x00199920 */

loc_0014CC75: ;
    ecx = edi;
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> ((((5) & 31u)) - 1)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = esi + ecx * 4 + 0xA8;
    ecx = edi;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    edx = 1;
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    edx = ~edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edx;
    MEM32(eax) = ecx;
    goto loc_0014CC25;

loc_0014CC97: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() + MEMF(ebp + 8); /* fadd dword ptr [ebp + 8] */
    MEMF(ebp + 8) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3DCEB8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3dceb8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0014CC25; /* jne: not equal / not zero */

loc_0014CCB2: ;
    MEM32(ebp + 4) = 0;
    goto loc_0014CC25;

loc_0014CCBE: ;
    ecx = MEM32(esp + 0xAC);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0014CCE9; /* jle: less or equal (signed <=) */

loc_0014CCCB: ;
    edx = MEM32(ebp);
    ecx = esp + 0x78;

loc_0014CCD2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0014CC25; /* je: equal / zero */

loc_0014CCDA: ;
    edi = MEM32(esp + 0xAC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xC)) >> 32) & 1);
    ecx = ecx + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0014CCD2; /* jl: less (signed <) */

loc_0014CCE9: ;
    MEM32(ebp + 8) = 0;
    MEM32(ebp + 4) = 2;
    goto loc_0014CC25;

loc_0014CCFC: ;
    eax = MEM32(esp + 0xAC);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0014CD9F; /* jle: less or equal (signed <=) */

loc_0014CD0D: ;
    edi = esp + 0x78;

loc_0014CD11: ;
    ebx = MEM32(esi + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3FFFFFFF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0014CD20; /* jne: not equal / not zero */

loc_0014CD1C: ;
    eax = ebx;
    goto loc_0014CD51;

loc_0014CD20: ;
    ecx = MEM32(edi);
    eax = ebx;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    edx = MEM32(eax + esi + 0x18);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0014CD3F; /* jle: less or equal (signed <=) */

loc_0014CD31: ;
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0014CD3Du); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_0014CD3D: ;
    goto loc_0014CD51;

loc_0014CD3F: ;
    if (CMP_GE(_fas, _fbs)) goto loc_0014CD4F; /* jge: greater or equal (signed >=) */

loc_0014CD41: ;
    edx = MEM32(eax + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0014CD4Du); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_0014CD4D: ;
    goto loc_0014CD51;

loc_0014CD4F: ;
    eax = ebx;

loc_0014CD51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0014CD8C; /* jne: not equal / not zero */

loc_0014CD58: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0014CD8C; /* jne: not equal / not zero */

loc_0014CD5C: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(eax + 0x26E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x26E4), 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0014CD8C; /* je: equal / zero */

loc_0014CD69: ;
    ecx = MEM32(edi);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    MEM32(esp + 0x30) = ecx;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esp + 0x38) = 1;
    MEM32(esp + 0x3C) = 0;
    PUSH32(esp, 0x0014CD8Cu); RECOMP_ABI_CALL(0x0014C840u, sub_0014C840); /* call 0x0014C840 */

loc_0014CD8C: ;
    eax = MEM32(esp + 0xAC);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xC)) >> 32) & 1);
    edi = edi + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0014CD11; /* jl: less (signed <) */

loc_0014CD9F: ;
    edi = MEM32(esp + 0x10);
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x271C)) >> 32) & 1);
    edi = edi + 0x271C;
    ecx = edi;
    PUSH32(esp, 0x0014CDB0u); RECOMP_ABI_CALL(0x0014B120u, sub_0014B120); /* call 0x0014B120 */

loc_0014CDB0: ;
    MEM32(edi + 0x104) = 0;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0014CDDD; /* je: equal / zero */

loc_0014CDC4: ;
    ecx = eax + 1;
    if (4) _cf = (int)(((ecx) >> (32 - (4))) & 1);
    ecx = ecx << 4;
    ecx = MEM32(ecx + esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0014CDDD; /* je: equal / zero */

loc_0014CDD5: ;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0014CDDDu); RECOMP_ABI_CALL(0x00171BB0u, sub_00171BB0); /* call 0x00171BB0 */

loc_0014CDDD: ;
    ebp = MEM32(esp + 0x10);

loc_0014CDE1: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3FFFFFFF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0014CDF3; /* jne: not equal / not zero */

loc_0014CDEB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0014CEE5; /* je: equal / zero */

loc_0014CDF3: ;
    _fa = (uint32_t)(MEM32(ebp + 0x2820)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x2820), 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0014CED8; /* je: equal / zero */

loc_0014CE00: ;
    ecx = MEM32(esp + 0x10);
    fp_push((double)SMEM64(esp + 0xF8)); /* fild */
    edx = ebx + ebx * 2 + 0x1E;
    ebp = esi + edx * 4;
    edx = MEM32(ecx + 0x1224);
    fp_top() = fp_top() * MEMD(0x3DA5F8); /* fmul qword ptr [0x3da5f8] */
    eax = esp + 0x38;
    PUSH32(esp, eax);
    _cf = 0; /* logical op clears CF */
    edx = edx & MEM32(ebp);
    if (6) _cf = (int)(((edx) >> (32 - (6))) & 1);
    edx = edx << 6;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x48) = 0;
    PUSH32(esp, 0x0014CE3Du); RECOMP_ABI_CALL(0x0014B6D0u, sub_0014B6D0); /* call 0x0014B6D0 */

loc_0014CE3D: ;
    ecx = MEM32(esp + 0x10);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014CE4Bu); RECOMP_ABI_CALL(0x0014A9C0u, sub_0014A9C0); /* call 0x0014A9C0 */

loc_0014CE4B: ;
    fp_push(MEMF(0x3DCEB8)); /* fld float */
    fp_top() = fp_top() - MEMF(ebp + 8); /* fsub dword ptr [ebp + 8] */
    ebp = MEM32(ebp + 4);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_top() = fp_top() * MEMF(0x3C6DE0); /* fmul dword ptr [0x3c6de0] */
    if ((_fa == 0)) goto loc_0014CE65; /* je: equal / zero */

loc_0014CE60: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014CE93; /* jne: not equal / not zero */

loc_0014CE63: ;
    goto loc_0014CE6B;

loc_0014CE65: ;
    fp_top() = MEMF(0x3C6E40) - fp_top(); /* fsubr dword ptr [0x3c6e40] */

loc_0014CE6B: ;
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x68)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x70)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */

loc_0014CE93: ;
    ebp = MEM32(edi + 0x104);
    fp_pop(); /* fstp st(0) */
    edx = ebp;
    ecx = esp + 0x38;
    if (6) _cf = (int)(((edx) >> (32 - (6))) & 1);
    edx = edx << 6;
    PUSH32(esp, ecx);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(edi)) >> 32) & 1);
    edx = edx + edi;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014CEADu); RECOMP_ABI_CALL(0x0014B270u, sub_0014B270); /* call 0x0014B270 */

loc_0014CEAD: ;
    ecx = ebp;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    eax = ebp;
    ebp = MEM32(esp + 0x18);
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((5) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = edi + eax * 4 + 0x100;
    edx = 1;
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    MEM32(edi + 0x104) = MEM32(edi + 0x104) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x104)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0014CED8: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0014CEE0u); RECOMP_ABI_CALL(0x000EA8E0u, sub_000EA8E0); /* call 0x000EA8E0 */

loc_0014CEE0: ;
    goto loc_0014CDE1;

loc_0014CEE5: ;
    ecx = esp + 0x38;
    PUSH32(esp, 0x0014CEEEu); RECOMP_ABI_CALL(0x000A0C70u, sub_000A0C70); /* call 0x000A0C70 */

loc_0014CEEE: ;
    eax = esp + 0x1C;
    ecx = ebp + 0x122C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014CEFEu); RECOMP_ABI_CALL(0x0014AAD0u, sub_0014AAD0); /* call 0x0014AAD0 */

loc_0014CEFE: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40 (32-bit) */
    _cf = (int)(_fa < _fb);
    edi = MEM32(eax + 4);
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0014D074; /* je: equal / zero */

loc_0014CF14: ;
    ecx = MEM32(esp + 0x6C);
    edx = esi;
    if (6) _cf = (int)(((edx) >> (32 - (6))) & 1);
    edx = edx << 6;
    eax = edx + edi;
    SET_LO8(edx, MEM8(eax + 0x3C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0014CFEA; /* je: equal / zero */

loc_0014CF2B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = MEM32(ebp + esi * 4 + 0x2350);
    eax = MEM32(eax);
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = 0;
    if (CMP_GE(_fas, _fbs)) goto loc_0014CF65; /* jge: greater or equal (signed >=) */

loc_0014CF49: ;
    ecx = ecx + ecx * 2;
    edx = esp + ecx * 4 + 0x38;
    MEM32(edx) = esi;
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(edx + 8) = eax;
    MEM32(esp + 0x6C) = MEM32(esp + 0x6C) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x6C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0014CFEA;

loc_0014CF65: ;
    _cf = 0; /* logical op clears CF */
    ebx = ebx | 0xFFFFFFFFu;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0014CFEA; /* jle: less or equal (signed <=) */

loc_0014CF6E: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    ebp = 0xFFFFFFF4u;
    esi = esp + 0x3C;
    /* nop */

loc_0014CF80: ;
    ecx = MEM32(esi);
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0014CF9C; /* jg: greater (signed >) */

loc_0014CF8A: ;
    if (CMP_NE(_fa, _fb)) goto loc_0014CFBC; /* jne: not equal / not zero */

loc_0014CF8C: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0014CFBC; /* jne: not equal / not zero */

loc_0014CF9C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_0014CFB8; /* jl: less (signed <) */

loc_0014CFA0: ;
    eax = MEM32(esp + ebp + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0014CFB8; /* jg: greater (signed >) */

loc_0014CFA8: ;
    if (CMP_NE(_fa, _fb)) goto loc_0014CFBC; /* jne: not equal / not zero */

loc_0014CFAA: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + ebp + 0x40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + ebp + 0x40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0014CFBC; /* jne: not equal / not zero */

loc_0014CFB8: ;
    ebx = edx;
    ebp = edi;

loc_0014CFBC: ;
    eax = MEM32(esp + 0x6C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xC)) >> 32) & 1);
    edi = edi + 0xC;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xC)) >> 32) & 1);
    esi = esi + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0014CF80; /* jl: less (signed <) */

loc_0014CFCB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_0014CFEA; /* jl: less (signed <) */

loc_0014CFCF: ;
    eax = MEM32(esp + 0x1C);
    ecx = ebx + ebx * 2;
    edx = esp + ecx * 4 + 0x38;
    ecx = MEM32(esp + 0x20);
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;

loc_0014CFEA: ;
    edx = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x18);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0014D05C; /* jge: greater or equal (signed >=) */

loc_0014CFF8: ;
    eax = edx;
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((5) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4 + 0x1118);
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    if (LO8(ecx)) _cf = (int)(((eax) >> ((LO8(ecx)) - 1)) & 1);
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0014D02B; /* jne: not equal / not zero */

loc_0014D00F: ;
    /* nop */

loc_0014D010: ;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFFFFFE0u;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x20)) >> 32) & 1);
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0014D05C; /* jge: greater or equal (signed >=) */

loc_0014D01B: ;
    ecx = edx;
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> ((((5) & 31u)) - 1)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = MEM32(edi + ecx * 4 + 0x1118);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0014D010; /* je: equal / zero */

loc_0014D02B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0014D038; /* jne: not equal / not zero */

loc_0014D032: ;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x10)) >> 32) & 1);
    edx = edx + 0x10;
    if (0x10) _cf = (int)(((eax) >> ((0x10) - 1)) & 1);
    eax = eax >> 0x10;

loc_0014D038: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0014D042; /* jne: not equal / not zero */

loc_0014D03C: ;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(8)) >> 32) & 1);
    edx = edx + 8;
    if (8) _cf = (int)(((eax) >> ((8) - 1)) & 1);
    eax = eax >> 8;

loc_0014D042: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0014D04C; /* jne: not equal / not zero */

loc_0014D046: ;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(4)) >> 32) & 1);
    edx = edx + 4;
    if (4) _cf = (int)(((eax) >> ((4) - 1)) & 1);
    eax = eax >> 4;

loc_0014D04C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0014D057; /* jne: not equal / not zero */

loc_0014D050: ;
    if (1) _cf = (int)(((eax) >> ((1) - 1)) & 1);
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0014D050; /* je: equal / zero */

loc_0014D057: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0014D061; /* jl: less (signed <) */

loc_0014D05C: ;
    edx = 0x40;

loc_0014D061: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    _cf = (int)(_fa < _fb);
    ebp = MEM32(esp + 0x10);
    esi = edx;
    MEM32(esp + 0x14) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0014CF14; /* jne: not equal / not zero */

loc_0014D074: ;
    eax = MEM32(esp + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebp + 0x2928) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0014D19A; /* jle: less or equal (signed <=) */

loc_0014D08A: ;
    ebx = esp + 0x38;
    MEM32(esp + 0x28) = eax;

loc_0014D092: ;
    _fa = (uint32_t)(MEM32(ebp + 0x2928)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x2928), 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0014D188; /* je: equal / zero */

loc_0014D09F: ;
    eax = MEM32(ebp + 0x2450);
    esi = MEM32(ebx);
    ecx = ebp + 0x122C;
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    if (6) _cf = (int)(((eax) >> (32 - (6))) & 1);
    eax = eax << 6;
    edx = MEM32(eax + ecx);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0xB4) = ecx;
    ecx = MEM32(eax + 0xC);
    MEM32(esp + 0xB0) = edx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0xBC) = ecx;
    ecx = MEM32(eax + 0x14);
    MEM32(esp + 0xB8) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(esp + 0xC4) = ecx;
    ecx = MEM32(eax + 0x1C);
    MEM32(esp + 0xC0) = edx;
    edx = MEM32(eax + 0x18);
    MEM32(esp + 0xCC) = ecx;
    ecx = MEM32(eax + 0x24);
    MEM32(esp + 0xC8) = edx;
    edx = MEM32(eax + 0x20);
    MEM32(esp + 0xD4) = ecx;
    ecx = MEM32(eax + 0x2C);
    MEM32(esp + 0xD0) = edx;
    edx = MEM32(eax + 0x28);
    MEM32(esp + 0xDC) = ecx;
    ecx = MEM32(eax + 0x34);
    MEM32(esp + 0xD8) = edx;
    edx = MEM32(eax + 0x30);
    MEM32(esp + 0xE4) = ecx;
    MEM32(esp + 0xE0) = edx;
    edx = MEM32(eax + 0x38);
    SET_LO8(eax, MEM8(eax + 0x3C));
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0xEC) = edx;
    MEM8(esp + 0xF0) = LO8(eax);
    PUSH32(esp, 0x0014D163u); RECOMP_ABI_CALL(0x0014AA20u, sub_0014AA20); /* call 0x0014AA20 */

loc_0014D163: ;
    edi = MEM32(ebp + 0x2928);
    eax = ebp + 0x2824;
    if (6) _cf = (int)(((edi) >> (32 - (6))) & 1);
    edi = edi << 6;
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(eax)) >> 32) & 1);
    edi = edi + eax;
    ecx = 0x10;
    esi = esp + 0xB0;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEM32(eax + 0x104) = MEM32(eax + 0x104) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x104)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0014D188: ;
    eax = MEM32(esp + 0x28);
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0xC)) >> 32) & 1);
    ebx = ebx + 0xC;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = eax;
    if ((_fa != 0)) goto loc_0014D092; /* jne: not equal / not zero */

loc_0014D19A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xE0)) >> 32) & 1);
    esp = esp + 0xE0;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014D1B0
 * Original: 0x0014D1B0 - 0x0014D3F6 (582 bytes, 193 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D1B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014D1B0: ;
    esp = esp - 0x4C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x0014D1BEu); RECOMP_ABI_CALL(0x0014AC60u, sub_0014AC60); /* call 0x0014AC60 */

loc_0014D1BE: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0014D1C7u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0014D1C7: ;
    esi = MEM32(edi + 0x10);
    ebx = MEM32(edi + 0x14);
    ecx = edi;
    PUSH32(esp, 0x0014D1D4u); RECOMP_ABI_CALL(0x00143680u, sub_00143680); /* call 0x00143680 */

loc_0014D1D4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = esp + 0x24;
    eax = eax + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, 0x0014D1E5u); RECOMP_ABI_CALL(0x00259CA0u, sub_00259CA0); /* call 0x00259CA0 */

loc_0014D1E5: ;
    edx = MEM32(edi + 0x14);
    eax = MEM32(edi + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = edi + 0x188;
    PUSH32(esp, 0x0014D1FDu); RECOMP_ABI_CALL(0x0014C930u, sub_0014C930); /* call 0x0014C930 */

loc_0014D1FD: ;
    eax = MEM32(edi + 0x29A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0014D214; /* jle: less or equal (signed <=) */

loc_0014D20C: ;
    MEM32(esp + 0x14) = 4;

loc_0014D214: ;
    eax = MEM32(esp + 0x14);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0014D2D6; /* jle: less or equal (signed <=) */

loc_0014D222: ;
    ebx = edi + 0x28D0;
    MEM32(esp + 0x10) = ebx;
    goto loc_0014D232;

loc_0014D22E: ;
    ebx = MEM32(esp + 0x10);

loc_0014D232: ;
    edx = MEM32(edi + 0x2B18);
    eax = MEM32(edx + 0x1C);
    ecx = MEM32(eax + 0x10);
    esi = MEM32(ecx + ebp * 4);
    edx = MEM32(esi);
    eax = ebx + -12;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0014D24Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014D24F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5BCA00);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0014D25Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014D25B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0014D263u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014D263: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5BCA00);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0014D272u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014D272: ;
    eax = MEM32(esi);
    ebx = ebx + 0xFFFFFFE8u;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0014D280u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014D280: ;
    ecx = MEM32(edi + 0x2B24);
    edx = MEM32(ecx + 0x20);
    ecx = MEM32(esi + 4);
    eax = MEM32(edx + 0x10);
    ebx = MEM32(eax + ebp * 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ecx;
    ecx = MEM32(ebx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014D2B2; /* je: equal / zero */

loc_0014D29D: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014D2B2; /* jne: not equal / not zero */

loc_0014D2AD: ;
    PUSH32(esp, 0x0014D2B2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014D2B2: ;
    MEM32(ebx + 0x10) = esi;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0014D2BEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014D2BE: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0014D22E; /* jl: less (signed <) */

loc_0014D2D6: ;
    eax = MEM32(edi + 0x2AB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0014D2F1; /* jle: less or equal (signed <=) */

loc_0014D2E5: ;
    MEM32(esp + 0x10) = 4;
    eax = MEM32(esp + 0x10);

loc_0014D2F1: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = ebx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0014D3BF; /* jle: less or equal (signed <=) */

loc_0014D2FF: ;
    ebp = edi + 0x29C8;
    goto loc_0014D310;

loc_0014D307: ;
    ebx = MEM32(esp + 0x18);
    goto loc_0014D310;

    /* nop */

loc_0014D310: ;
    eax = MEM32(edi + 0x2B1C);
    ecx = MEM32(eax + 0x1C);
    edx = MEM32(ecx + 0x10);
    esi = MEM32(edx + ebx * 4);
    eax = MEM32(esi);
    ecx = ebp + -12;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x0014D32Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014D32D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0014D335u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014D335: ;
    eax = MEM32(esi);
    ecx = ebp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0014D340u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014D340: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5BCA00);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0014D34Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014D34F: ;
    eax = MEM32(esi);
    ecx = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x0014D35Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014D35D: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014D36B; /* jne: not equal / not zero */

loc_0014D363: ;
    edx = MEM32(edi + 0x2B2C);
    goto loc_0014D371;

loc_0014D36B: ;
    edx = MEM32(edi + 0x2B28);

loc_0014D371: ;
    eax = MEM32(edx + 0x20);
    ecx = MEM32(eax + 0x10);
    ebx = MEM32(ecx + ebx * 4);
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014D399; /* je: equal / zero */

loc_0014D384: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014D399; /* jne: not equal / not zero */

loc_0014D394: ;
    PUSH32(esp, 0x0014D399u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014D399: ;
    MEM32(ebx + 0x10) = esi;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0014D3A5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014D3A5: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0014D307; /* jl: less (signed <) */

loc_0014D3BD: ;
    eax = ecx;

loc_0014D3BF: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014D3D0; /* jne: not equal / not zero */

loc_0014D3C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esp + 0x18) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0014D3D5; /* je: equal / zero */

loc_0014D3D0: ;
    MEM8(esp + 0x18) = 1;

loc_0014D3D5: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0014D3E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014D3E1: ;
    edx = MEM32(edi + 4);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0014D3EEu); RECOMP_ABI_CALL(0x00143EE0u, sub_00143EE0); /* call 0x00143EE0 */

loc_0014D3EE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

}

/**
 * sub_0014D400
 * Original: 0x0014D400 - 0x0014D4CE (206 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D400(void)
{

loc_0014D400: ;
    eax = MEM32(0x5BC9D0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x2930) = eax;
    ecx = MEM32(0x5BC9D4);
    MEM32(esi + 0x2934) = ecx;
    edx = MEM32(0x5BC9D8);
    MEM32(esi + 0x2938) = edx;
    eax = MEM32(0x5BC9D0);
    MEM32(esi + 0x293C) = eax;
    ecx = MEM32(0x5BC9D4);
    PUSH32(esp, edi);
    MEM32(esi + 0x2940) = ecx;
    edx = MEM32(0x5BC9D8);
    eax = esi + 0x2948;
    PUSH32(esp, 0x46D0A0);
    PUSH32(esp, eax);
    MEM32(esi + 0x2944) = edx;
    PUSH32(esp, 0x0014D45Cu); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0014D45C: ;
    edi = 0; /* xor self */
    MEM32(esi + 0x2458) = edi;
    MEM32(esi + 0x245C) = edi;
    MEM32(esi + 0x2564) = edi;
    esp = esp + 8;
    ecx = esi;
    MEM32(esi + 0x266C) = edi;
    PUSH32(esp, 0x0014D480u); RECOMP_ABI_CALL(0x0014C610u, sub_0014C610); /* call 0x0014C610 */

loc_0014D480: ;
    ecx = esi + 0x122C;
    PUSH32(esp, 0x0014D48Bu); RECOMP_ABI_CALL(0x0014C610u, sub_0014C610); /* call 0x0014C610 */

loc_0014D48B: ;
    ecx = esi + 0x267C;
    MEM32(esi + 0x2674) = 0x3FFFFFFF;
    MEM32(ecx + 0x68) = edi;
    MEM32(ecx + 0x64) = edi;
    PUSH32(esp, 0x0014D4A6u); RECOMP_ABI_CALL(0x000C00F0u, sub_000C00F0); /* call 0x000C00F0 */

loc_0014D4A6: ;
    ecx = esi + 0x26E8;
    PUSH32(esp, 0x0014D4B1u); RECOMP_ABI_CALL(0x0014B040u, sub_0014B040); /* call 0x0014B040 */

loc_0014D4B1: ;
    ebx = esi + 0x271C;
    ecx = ebx;
    PUSH32(esp, 0x0014D4BEu); RECOMP_ABI_CALL(0x0014B120u, sub_0014B120); /* call 0x0014B120 */

loc_0014D4BE: ;
    MEM32(ebx + 0x104) = edi;
    MEM32(esi + 0x2928) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0014D4D0
 * Original: 0x0014D4D0 - 0x0014D681 (433 bytes, 105 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D4D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014D4D0: ;
    esp = esp - 0x40;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x292C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014D4F5; /* je: equal / zero */

loc_0014D4E0: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014D4F5; /* jne: not equal / not zero */

loc_0014D4F0: ;
    PUSH32(esp, 0x0014D4F5u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014D4F5: ;
    ecx = esi;
    MEM32(esi + 0x292C) = 0;
    PUSH32(esp, 0x0014D506u); RECOMP_ABI_CALL(0x0014D400u, sub_0014D400); /* call 0x0014D400 */

loc_0014D506: ;
    eax = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0014D512u); RECOMP_ABI_CALL(0x0014C460u, sub_0014C460); /* call 0x0014C460 */

loc_0014D512: ;
    ecx = MEM32(esi + 0x292C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014D67A; /* je: equal / zero */

loc_0014D520: ;
    eax = MEM32(esi + 0x266C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_0014D5E5; /* jg: greater (signed >) */

loc_0014D52E: ;
    edx = MEM32(0x5BE0AC);
    eax = MEM32(edx + 8);
    edx = MEM32(eax + ecx + 4);
    eax = eax + ecx;
    ecx = MEM32(eax);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(MEM32(esi + 0x234C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x234C), 0x40 (32-bit) */
    MEM32(esp + 4) = 2;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x14) = 0x3F800000;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x38) = 0;
    MEM32(esp + 0x3C) = 0x3F800000;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0xBF800000u;
    MEM8(esp + 0x40) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_0014D5C0; /* jne: not equal / not zero */

loc_0014D5BB: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_0014D5D0;

loc_0014D5C0: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi + 0x122C;
    PUSH32(esp, 0x0014D5D0u); RECOMP_ABI_CALL(0x0014BF60u, sub_0014BF60); /* call 0x0014BF60 */

loc_0014D5D0: ;
    ecx = MEM32(esi + 0x266C);
    MEM32(esi + ecx * 4 + 0x2568) = eax;
    MEM32(esi + 0x266C) = MEM32(esi + 0x266C) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x266C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0014D651;

loc_0014D5E5: ;
    ecx = MEM32(esi + 0x2568);
    edx = MEM32(esi + 0x2450);
    PUSH32(esp, edi);
    edi = esi + 0x122C;
    edx = edx & ecx;
    edx = edx << 6;
    edx = edx + edi;
    PUSH32(esp, edx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0014D609u); RECOMP_ABI_CALL(0x0014A7E0u, sub_0014A7E0); /* call 0x0014A7E0 */

loc_0014D609: ;
    eax = MEM32(0x5BE0AC);
    eax = MEM32(eax + 8);
    edx = MEM32(esi + 0x292C);
    ecx = MEM32(eax + edx);
    eax = eax + edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(edi + 0x1224);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = ecx & MEM32(esi + 0x2568);
    ecx = ecx << 6;
    ecx = ecx + edi;
    MEM32(esp + 0x34) = edx;
    PUSH32(esp, 0x0014D650u); RECOMP_ABI_CALL(0x0014A7E0u, sub_0014A7E0); /* call 0x0014A7E0 */

loc_0014D650: ;
    POP32(esp, edi);

loc_0014D651: ;
    ecx = MEM32(esi + 0x292C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014D670; /* je: equal / zero */

loc_0014D65B: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014D670; /* jne: not equal / not zero */

loc_0014D66B: ;
    PUSH32(esp, 0x0014D670u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014D670: ;
    MEM32(esi + 0x292C) = 0;

loc_0014D67A: ;
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014D690
 * Original: 0x0014D690 - 0x0014D698 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D690(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014D690: ;
    ecx = ecx + 0x78;
    g_seh_ebp = ebp; sub_0014B040(); return; /* tail jmp 0x0014B040 */

}

/**
 * sub_0014D6A0
 * Original: 0x0014D6A0 - 0x0014D7BF (287 bytes, 90 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D6A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014D6A0: ;
    esp = esp - 0x104;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0x104) = eax;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014D6D4; /* je: equal / zero */

loc_0014D6BC: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x100);
    PUSH32(esp, 0x0014D6CBu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0014D6CB: ;
    esp = esp + 0x104;
    esp += 12; return; /* ret 8 */

loc_0014D6D4: ;
    ecx = MEM32(esp + 0x10C);
    PUSH32(esp, edi);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xC);
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0x0014D6EEu); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_0014D6EE: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x0014D6F6u); RECOMP_ABI_CALL(0x001326E0u, sub_001326E0); /* call 0x001326E0 */

loc_0014D6F6: ;
    edx = MEM32(eax);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0014D702u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014D702: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014D721; /* jne: not equal / not zero */

loc_0014D708: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x100);
    PUSH32(esp, 0x0014D718u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0014D718: ;
    esp = esp + 0x104;
    esp += 12; return; /* ret 8 */

loc_0014D721: ;
    PUSH32(esp, ebp);
    MEM32(esi + 8) = edi;
    ebp = MEM32(edi);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014D72E; /* je: equal / zero */

loc_0014D72B: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0014D72E: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014D74A; /* je: equal / zero */

loc_0014D735: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014D74A; /* jne: not equal / not zero */

loc_0014D745: ;
    PUSH32(esp, 0x0014D74Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014D74A: ;
    MEM32(esi + 0x10) = ebp;
    ebp = esi + -352;
    ecx = ebp;
    PUSH32(esp, 0x0014D75Au); RECOMP_ABI_CALL(0x0014BC00u, sub_0014BC00); /* call 0x0014BC00 */

loc_0014D75A: ;
    eax = MEM32(edi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014D766; /* je: equal / zero */

loc_0014D761: ;
    eax = edi + 0x44;
    goto loc_0014D768;

loc_0014D766: ;
    eax = 0; /* xor self */

loc_0014D768: ;
    ecx = edi;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x0014D772u); RECOMP_ABI_CALL(0x00130D00u, sub_00130D00); /* call 0x00130D00 */

loc_0014D772: ;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    ecx = esi + 0x28;
    PUSH32(esp, 0x0014D77Eu); RECOMP_ABI_CALL(0x0014D4D0u, sub_0014D4D0); /* call 0x0014D4D0 */

loc_0014D77E: ;
    eax = MEM32(ebp + 0x170);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014D7A5; /* je: equal / zero */

loc_0014D788: ;
    SET_LO8(ecx, MEM8(ebp + 0x164));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014D7A5; /* je: equal / zero */

loc_0014D792: ;
    ecx = MEM32(ebp + 0x2B24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014D79Eu); RECOMP_ABI_CALL(0x00259CC0u, sub_00259CC0); /* call 0x00259CC0 */

loc_0014D79E: ;
    MEM8(ebp + 0x164) = 0;

loc_0014D7A5: ;
    ecx = MEM32(esp + 0x10C);
    POP32(esp, ebp);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    PUSH32(esp, 0x0014D7B6u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0014D7B6: ;
    esp = esp + 0x104;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0014D7C0
 * Original: 0x0014D7C0 - 0x0014D883 (195 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D7C0(void)
{

loc_0014D7C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3537F0);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0x0014D7E3u); RECOMP_ABI_CALL(0x0014BFB0u, sub_0014BFB0); /* call 0x0014BFB0 */

loc_0014D7E3: ;
    edi = 0; /* xor self */
    ecx = esi + 0x122C;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0x0014D7F4u); RECOMP_ABI_CALL(0x0014BFB0u, sub_0014BFB0); /* call 0x0014BFB0 */

loc_0014D7F4: ;
    MEM32(esi + 0x2564) = edi;
    MEM32(esi + 0x266C) = edi;
    ecx = esi + 0x267C;
    MEM32(esi + 0x2674) = 0x3FFFFFFF;
    MEM32(esi + 0x2678) = 0xFFFFFFFFu;
    MEM32(esi + 0x2670) = 0x3DCF44;
    MEM32(ecx + 0x58) = edi;
    MEM32(ecx + 0x5C) = edi;
    MEM32(ecx + 0x60) = edi;
    MEM32(ecx + 0x64) = edi;
    MEM32(ecx + 0x68) = edi;
    PUSH32(esp, 0x0014D838u); RECOMP_ABI_CALL(0x000C00F0u, sub_000C00F0); /* call 0x000C00F0 */

loc_0014D838: ;
    MEM32(esi + 0x2718) = edi;
    MEM32(esi + 0x2670) = 0x3DCF60;
    MEM32(esi + 0x281C) = edi;
    MEM32(esi + 0x2820) = edi;
    MEM32(esi + 0x2928) = edi;
    MEM32(esi + 0x292C) = edi;
    ecx = esi + 0x2948;
    MEM8(esp + 0x14) = 4;
    PUSH32(esp, 0x0014D870u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0014D870: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0014D890
 * Original: 0x0014D890 - 0x0014D90C (124 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014D890: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353832);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    ecx = MEM32(esi + 0x292C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 3;
    if (TEST_Z(_fa, _fb)) goto loc_0014D8D4; /* je: equal / zero */

loc_0014D8BF: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014D8D4; /* jne: not equal / not zero */

loc_0014D8CF: ;
    PUSH32(esp, 0x0014D8D4u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014D8D4: ;
    ecx = esi + 0x271C;
    PUSH32(esp, 0x0014D8DFu); RECOMP_ABI_CALL(0x0014B120u, sub_0014B120); /* call 0x0014B120 */

loc_0014D8DF: ;
    ecx = esi + 0x26E8;
    PUSH32(esp, 0x0014D8EAu); RECOMP_ABI_CALL(0x0014B040u, sub_0014B040); /* call 0x0014B040 */

loc_0014D8EA: ;
    ecx = esi + 0x122C;
    PUSH32(esp, 0x0014D8F5u); RECOMP_ABI_CALL(0x0014AF60u, sub_0014AF60); /* call 0x0014AF60 */

loc_0014D8F5: ;
    ecx = esi;
    PUSH32(esp, 0x0014D8FCu); RECOMP_ABI_CALL(0x0014AF60u, sub_0014AF60); /* call 0x0014AF60 */

loc_0014D8FC: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0014D910
 * Original: 0x0014D910 - 0x0014DC0D (765 bytes, 222 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014D910: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x35390C);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x160;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3DCFD4;
    MEM32(ecx) = 0x3DCF7C;
    MEM32(esp + 0x10) = 0xE;
    PUSH32(esp, 0x0014D94Cu); RECOMP_ABI_CALL(0x0014AE40u, sub_0014AE40); /* call 0x0014AE40 */

loc_0014D94C: ;
    ecx = MEM32(esi + 0x174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014D96B; /* je: equal / zero */

loc_0014D956: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014D96B; /* jne: not equal / not zero */

loc_0014D966: ;
    PUSH32(esp, 0x0014D96Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014D96B: ;
    MEM32(esi + 0x174) = 0;
    ecx = MEM32(esi + 0x178);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014D994; /* je: equal / zero */

loc_0014D97F: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014D994; /* jne: not equal / not zero */

loc_0014D98F: ;
    PUSH32(esp, 0x0014D994u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014D994: ;
    PUSH32(esp, edi);
    edi = esi + 0x188;
    ecx = edi;
    MEM32(esi + 0x178) = 0;
    PUSH32(esp, 0x0014D9ACu); RECOMP_ABI_CALL(0x0014D400u, sub_0014D400); /* call 0x0014D400 */

loc_0014D9AC: ;
    ecx = esi;
    PUSH32(esp, 0x0014D9B3u); RECOMP_ABI_CALL(0x0014AC60u, sub_0014AC60); /* call 0x0014AC60 */

loc_0014D9B3: ;
    eax = MEM32(esi + 0x2B18);
    eax = MEM32(eax + 0x1C);
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x0014D9C5u); RECOMP_ABI_CALL(0x002098D0u, sub_002098D0); /* call 0x002098D0 */

loc_0014D9C5: ;
    eax = MEM32(esi + 0x2B1C);
    eax = MEM32(eax + 0x1C);
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x0014D9D7u); RECOMP_ABI_CALL(0x002098D0u, sub_002098D0); /* call 0x002098D0 */

loc_0014D9D7: ;
    eax = MEM32(esi + 0x2B24);
    eax = MEM32(eax + 0x20);
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x0014D9E9u); RECOMP_ABI_CALL(0x002098D0u, sub_002098D0); /* call 0x002098D0 */

loc_0014D9E9: ;
    eax = MEM32(esi + 0x2B28);
    eax = MEM32(eax + 0x20);
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x0014D9FBu); RECOMP_ABI_CALL(0x002098D0u, sub_002098D0); /* call 0x002098D0 */

loc_0014D9FB: ;
    eax = MEM32(esi + 0x2B2C);
    eax = MEM32(eax + 0x20);
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x0014DA0Du); RECOMP_ABI_CALL(0x002098D0u, sub_002098D0); /* call 0x002098D0 */

loc_0014DA0D: ;
    ecx = MEM32(esi + 0x2B34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x14) = 0xD;
    if (TEST_Z(_fa, _fb)) goto loc_0014DA31; /* je: equal / zero */

loc_0014DA1C: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014DA31; /* jne: not equal / not zero */

loc_0014DA2C: ;
    PUSH32(esp, 0x0014DA31u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014DA31: ;
    ecx = MEM32(esi + 0x2B30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x14) = 0xC;
    if (TEST_Z(_fa, _fb)) goto loc_0014DA55; /* je: equal / zero */

loc_0014DA40: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014DA55; /* jne: not equal / not zero */

loc_0014DA50: ;
    PUSH32(esp, 0x0014DA55u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014DA55: ;
    ecx = MEM32(esi + 0x2B2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x14) = 0xB;
    if (TEST_Z(_fa, _fb)) goto loc_0014DA79; /* je: equal / zero */

loc_0014DA64: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014DA79; /* jne: not equal / not zero */

loc_0014DA74: ;
    PUSH32(esp, 0x0014DA79u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014DA79: ;
    ecx = MEM32(esi + 0x2B28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x14) = 0xA;
    if (TEST_Z(_fa, _fb)) goto loc_0014DA9D; /* je: equal / zero */

loc_0014DA88: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014DA9D; /* jne: not equal / not zero */

loc_0014DA98: ;
    PUSH32(esp, 0x0014DA9Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014DA9D: ;
    ecx = MEM32(esi + 0x2B24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x14) = 9;
    if (TEST_Z(_fa, _fb)) goto loc_0014DAC1; /* je: equal / zero */

loc_0014DAAC: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014DAC1; /* jne: not equal / not zero */

loc_0014DABC: ;
    PUSH32(esp, 0x0014DAC1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014DAC1: ;
    ecx = MEM32(esi + 0x2B20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x14) = 8;
    if (TEST_Z(_fa, _fb)) goto loc_0014DAE5; /* je: equal / zero */

loc_0014DAD0: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014DAE5; /* jne: not equal / not zero */

loc_0014DAE0: ;
    PUSH32(esp, 0x0014DAE5u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014DAE5: ;
    ecx = MEM32(esi + 0x2B1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x14) = 7;
    if (TEST_Z(_fa, _fb)) goto loc_0014DB09; /* je: equal / zero */

loc_0014DAF4: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014DB09; /* jne: not equal / not zero */

loc_0014DB04: ;
    PUSH32(esp, 0x0014DB09u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014DB09: ;
    ecx = MEM32(esi + 0x2B18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x14) = 6;
    if (TEST_Z(_fa, _fb)) goto loc_0014DB2D; /* je: equal / zero */

loc_0014DB18: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014DB2D; /* jne: not equal / not zero */

loc_0014DB28: ;
    PUSH32(esp, 0x0014DB2Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014DB2D: ;
    ecx = edi;
    MEM8(esp + 0x14) = 5;
    PUSH32(esp, 0x0014DB39u); RECOMP_ABI_CALL(0x0014D890u, sub_0014D890); /* call 0x0014D890 */

loc_0014DB39: ;
    ecx = MEM32(esi + 0x180);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x14) = 4;
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0014DB5E; /* je: equal / zero */

loc_0014DB49: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014DB5E; /* jne: not equal / not zero */

loc_0014DB59: ;
    PUSH32(esp, 0x0014DB5Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014DB5E: ;
    ecx = MEM32(esi + 0x17C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = 3;
    if (TEST_Z(_fa, _fb)) goto loc_0014DB82; /* je: equal / zero */

loc_0014DB6D: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014DB82; /* jne: not equal / not zero */

loc_0014DB7D: ;
    PUSH32(esp, 0x0014DB82u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014DB82: ;
    ecx = MEM32(esi + 0x178);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = 2;
    if (TEST_Z(_fa, _fb)) goto loc_0014DBA6; /* je: equal / zero */

loc_0014DB91: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014DBA6; /* jne: not equal / not zero */

loc_0014DBA1: ;
    PUSH32(esp, 0x0014DBA6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014DBA6: ;
    ecx = MEM32(esi + 0x174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_0014DBCA; /* je: equal / zero */

loc_0014DBB5: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014DBCA; /* jne: not equal / not zero */

loc_0014DBC5: ;
    PUSH32(esp, 0x0014DBCAu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014DBCA: ;
    ecx = MEM32(esi + 0x170);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0014DBEE; /* je: equal / zero */

loc_0014DBD9: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014DBEE; /* jne: not equal / not zero */

loc_0014DBE9: ;
    PUSH32(esp, 0x0014DBEEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014DBEE: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0014DBFDu); RECOMP_ABI_CALL(0x001444E0u, sub_001444E0); /* call 0x001444E0 */

loc_0014DBFD: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0014DC10
 * Original: 0x0014DC10 - 0x0014E2B6 (1702 bytes, 509 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014DC10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014DC10: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353A2C);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x14;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = esi;
    PUSH32(esp, 0x0014DC3Cu); RECOMP_ABI_CALL(0x00144730u, sub_00144730); /* call 0x00144730 */

loc_0014DC3C: ;
    MEM32(esi + 0x160) = 0x3DCEC4;
    ebp = 0; /* xor self */
    MEM32(esi) = 0x3DCFD4;
    MEM32(esi + 0x160) = 0x3DCF7C;
    MEM8(esi + 0x164) = 1;
    MEM32(esi + 0x168) = ebp;
    MEM32(esi + 0x16C) = ebp;
    MEM32(esp + 0x2C) = ebp;
    MEM32(esi + 0x170) = ebp;
    edi = esi + 0x174;
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    MEM8(esp + 0x34) = 1;
    PUSH32(esp, 0x0014DC88u); RECOMP_ABI_CALL(0x0013E170u, sub_0013E170); /* call 0x0013E170 */

loc_0014DC88: ;
    ebx = esi + 0x178;
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    MEM8(esp + 0x3C) = 2;
    PUSH32(esp, 0x0014DC9Bu); RECOMP_ABI_CALL(0x0013E170u, sub_0013E170); /* call 0x0013E170 */

loc_0014DC9B: ;
    esp = esp + 0x10;
    MEM32(esi + 0x17C) = ebp;
    MEM32(esi + 0x180) = ebp;
    ecx = esi + 0x188;
    MEM8(esp + 0x2C) = 5;
    PUSH32(esp, 0x0014DCBAu); RECOMP_ABI_CALL(0x0014D7C0u, sub_0014D7C0); /* call 0x0014D7C0 */

loc_0014DCBA: ;
    eax = esi + 0x2B18;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    MEM8(esp + 0x34) = 6;
    PUSH32(esp, 0x0014DCCDu); RECOMP_ABI_CALL(0x0014B960u, sub_0014B960); /* call 0x0014B960 */

loc_0014DCCD: ;
    eax = esi + 0x2B1C;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    MEM8(esp + 0x3C) = 7;
    PUSH32(esp, 0x0014DCE0u); RECOMP_ABI_CALL(0x0014B960u, sub_0014B960); /* call 0x0014B960 */

loc_0014DCE0: ;
    ecx = esi + 0x2B20;
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    MEM8(esp + 0x44) = 8;
    PUSH32(esp, 0x0014DCF3u); RECOMP_ABI_CALL(0x0014B960u, sub_0014B960); /* call 0x0014B960 */

loc_0014DCF3: ;
    eax = esi + 0x2B24;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    MEM8(esp + 0x4C) = 9;
    PUSH32(esp, 0x0014DD06u); RECOMP_ABI_CALL(0x0014B9B0u, sub_0014B9B0); /* call 0x0014B9B0 */

loc_0014DD06: ;
    eax = esi + 0x2B28;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    MEM8(esp + 0x54) = 0xA;
    PUSH32(esp, 0x0014DD19u); RECOMP_ABI_CALL(0x0014B9B0u, sub_0014B9B0); /* call 0x0014B9B0 */

loc_0014DD19: ;
    eax = esi + 0x2B2C;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    MEM8(esp + 0x5C) = 0xB;
    PUSH32(esp, 0x0014DD2Cu); RECOMP_ABI_CALL(0x0014B9B0u, sub_0014B9B0); /* call 0x0014B9B0 */

loc_0014DD2C: ;
    eax = esi + 0x2B30;
    PUSH32(esp, 3);
    MEM8(esp + 0x60) = 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014DD3Fu); RECOMP_ABI_CALL(0x0014BA00u, sub_0014BA00); /* call 0x0014BA00 */

loc_0014DD3F: ;
    eax = esi + 0x2B34;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    MEM8(esp + 0x6C) = 0xD;
    PUSH32(esp, 0x0014DD52u); RECOMP_ABI_CALL(0x0014BA50u, sub_0014BA50); /* call 0x0014BA50 */

loc_0014DD52: ;
    esp = esp + 0x40;
    ecx = MEM32(esi + 0x130);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    MEM8(esp + 0x30) = 0xE;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0014DD67u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014DD67: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x0014DD70u); RECOMP_ABI_CALL(0x001436A0u, sub_001436A0); /* call 0x001436A0 */

loc_0014DD70: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    ecx = esi + 0xAC;
    PUSH32(esp, 0x0014DD7Fu); RECOMP_ABI_CALL(0x001307E0u, sub_001307E0); /* call 0x001307E0 */

loc_0014DD7F: ;
    eax = MEM32(edi);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014DD8Au); RECOMP_ABI_CALL(0x00259CC0u, sub_00259CC0); /* call 0x00259CC0 */

loc_0014DD8A: ;
    eax = esp + 0x18;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014DD96u); RECOMP_ABI_CALL(0x0013DFE0u, sub_0013DFE0); /* call 0x0013DFE0 */

loc_0014DD96: ;
    esp = esp + 8;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    MEM8(esp + 0x30) = 0xF;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0014DDA8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014DDA8: ;
    eax = MEM32(edi);
    ecx = MEM32(esp + 0x18);
    eax = MEM32(eax + 0x20);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0014DDB9u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0014DDB9: ;
    eax = MEM32(ebx);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014DDC3u); RECOMP_ABI_CALL(0x00259CC0u, sub_00259CC0); /* call 0x00259CC0 */

loc_0014DDC3: ;
    edx = esp + 0x34;
    PUSH32(esp, 7);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014DDCFu); RECOMP_ABI_CALL(0x0014BAA0u, sub_0014BAA0); /* call 0x0014BAA0 */

loc_0014DDCF: ;
    esp = esp + 8;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM8(esp + 0x2C) = 0x10;
    if (CMP_EQ(_fa, _fb)) goto loc_0014DDE0; /* je: equal / zero */

loc_0014DDDD: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0014DDE0: ;
    ecx = MEM32(esi + 0x17C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014DDFF; /* je: equal / zero */

loc_0014DDEA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014DDFF; /* jne: not equal / not zero */

loc_0014DDFA: ;
    PUSH32(esp, 0x0014DDFFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014DDFF: ;
    eax = MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esi + 0x17C) = edi;
    MEM8(esp + 0x2C) = 0xF;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0014DE2C; /* je: equal / zero */

loc_0014DE14: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_0014DE2C; /* jne: not equal / not zero */

loc_0014DE27: ;
    PUSH32(esp, 0x0014DE2Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014DE2C: ;
    eax = MEM32(esi + 0x17C);
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 0x80 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0014DE4A; /* jg: greater (signed >) */

loc_0014DE3E: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x0014DE4Au); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_0014DE4A: ;
    eax = MEM32(esi + 0x17C);
    ecx = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014DE58u); RECOMP_ABI_CALL(0x00259CC0u, sub_00259CC0); /* call 0x00259CC0 */

loc_0014DE58: ;
    eax = esp + 0x34;
    PUSH32(esp, 7);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014DE64u); RECOMP_ABI_CALL(0x0014BAA0u, sub_0014BAA0); /* call 0x0014BAA0 */

loc_0014DE64: ;
    esp = esp + 8;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM8(esp + 0x2C) = 0x11;
    if (CMP_EQ(_fa, _fb)) goto loc_0014DE75; /* je: equal / zero */

loc_0014DE72: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0014DE75: ;
    ecx = MEM32(esi + 0x180);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014DE94; /* je: equal / zero */

loc_0014DE7F: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014DE94; /* jne: not equal / not zero */

loc_0014DE8F: ;
    PUSH32(esp, 0x0014DE94u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014DE94: ;
    eax = MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esi + 0x180) = edi;
    MEM8(esp + 0x2C) = 0xF;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0014DEC1; /* je: equal / zero */

loc_0014DEA9: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_0014DEC1; /* jne: not equal / not zero */

loc_0014DEBC: ;
    PUSH32(esp, 0x0014DEC1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014DEC1: ;
    eax = MEM32(esi + 0x180);
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 0x40 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0014DED9; /* jg: greater (signed >) */

loc_0014DED0: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x0014DED9u); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_0014DED9: ;
    eax = MEM32(esi + 0x180);
    ebx = MEM32(ebx);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0014DEE9u); RECOMP_ABI_CALL(0x00259CC0u, sub_00259CC0); /* call 0x00259CC0 */

loc_0014DEE9: ;
    eax = MEM32(esi + 0x180);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(esp + 0x38) = esp;
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0014DEFF; /* je: equal / zero */

loc_0014DEFC: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0014DEFF: ;
    ecx = esi;
    PUSH32(esp, 0x0014DF06u); RECOMP_ABI_CALL(0x0014BB90u, sub_0014BB90); /* call 0x0014BB90 */

loc_0014DF06: ;
    eax = MEM32(esi + 0x17C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(esp + 0x38) = esp;
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0014DF1C; /* je: equal / zero */

loc_0014DF19: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0014DF1C: ;
    ecx = esi;
    PUSH32(esp, 0x0014DF23u); RECOMP_ABI_CALL(0x0014BB90u, sub_0014BB90); /* call 0x0014BB90 */

loc_0014DF23: ;
    ecx = esi + 0x188;
    PUSH32(esp, 0x0014DF2Eu); RECOMP_ABI_CALL(0x0014D400u, sub_0014D400); /* call 0x0014D400 */

loc_0014DF2E: ;
    MEM32(esp + 0x14) = 4;
    SET_LO8(ebx, 0x12);

loc_0014DF38: ;
    ecx = esp + 0x10;
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014DF44u); RECOMP_ABI_CALL(0x0014BAF0u, sub_0014BAF0); /* call 0x0014BAF0 */

loc_0014DF44: ;
    esp = esp + 8;
    eax = MEM32(esp + 0x10);
    MEM32(eax + 0xC) = 1;
    MEM8(eax + 0x90) = 1;
    eax = MEM32(esi + 0x2B18);
    eax = MEM32(eax + 0x1C);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    ecx = eax;
    MEM8(esp + 0x30) = LO8(ebx);
    PUSH32(esp, 0x0014DF72u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0014DF72: ;
    eax = esp + 0x34;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014DF7Eu); RECOMP_ABI_CALL(0x0014BB40u, sub_0014BB40); /* call 0x0014BB40 */

loc_0014DF7E: ;
    esp = esp + 8;
    edi = MEM32(esp + 0x34);
    ecx = MEM32(edi + 0x10);
    edi = edi + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM8(esp + 0x2C) = 0x13;
    if (CMP_EQ(_fa, _fb)) goto loc_0014DFA9; /* je: equal / zero */

loc_0014DF94: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014DFA9; /* jne: not equal / not zero */

loc_0014DFA4: ;
    PUSH32(esp, 0x0014DFA9u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014DFA9: ;
    MEM32(edi) = ebp;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0014DFB5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014DFB5: ;
    eax = MEM32(esi + 0x2B24);
    ecx = MEM32(esp + 0x34);
    eax = MEM32(eax + 0x20);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0014DFCAu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0014DFCA: ;
    eax = MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM8(esp + 0x2C) = LO8(ebx);
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0014DFF0; /* je: equal / zero */

loc_0014DFD8: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_0014DFF0; /* jne: not equal / not zero */

loc_0014DFEB: ;
    PUSH32(esp, 0x0014DFF0u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014DFF0: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM8(esp + 0x2C) = 0xF;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0014E017; /* je: equal / zero */

loc_0014DFFF: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_0014E017; /* jne: not equal / not zero */

loc_0014E012: ;
    PUSH32(esp, 0x0014E017u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014E017: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014DF38; /* jne: not equal / not zero */

loc_0014E021: ;
    MEM32(esp + 0x1C) = 4;
    SET_LO8(ebx, 0x15);
    goto loc_0014E030;

    /* nop */

loc_0014E030: ;
    edx = esp + 0x14;
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014E03Cu); RECOMP_ABI_CALL(0x0014BAF0u, sub_0014BAF0); /* call 0x0014BAF0 */

loc_0014E03C: ;
    esp = esp + 8;
    eax = MEM32(esp + 0x14);
    MEM32(eax + 0xC) = ebp;
    MEM8(eax + 0x90) = 1;
    eax = MEM32(esi + 0x2B1C);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(eax + 0x1C);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM8(esp + 0x30) = 0x14;
    PUSH32(esp, 0x0014E067u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0014E067: ;
    edx = esp + 0x10;
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014E073u); RECOMP_ABI_CALL(0x0014BB40u, sub_0014BB40); /* call 0x0014BB40 */

loc_0014E073: ;
    esp = esp + 8;
    edi = MEM32(esp + 0x10);
    ecx = MEM32(edi + 0x10);
    edi = edi + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM8(esp + 0x2C) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0014E09D; /* je: equal / zero */

loc_0014E088: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014E09D; /* jne: not equal / not zero */

loc_0014E098: ;
    PUSH32(esp, 0x0014E09Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014E09D: ;
    MEM32(edi) = ebp;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0014E0A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014E0A9: ;
    eax = MEM32(esi + 0x2B28);
    ecx = MEM32(esp + 0x10);
    eax = MEM32(eax + 0x20);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0014E0BEu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0014E0BE: ;
    edx = esp + 0x34;
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014E0CAu); RECOMP_ABI_CALL(0x0014BB40u, sub_0014BB40); /* call 0x0014BB40 */

loc_0014E0CA: ;
    esp = esp + 8;
    edi = MEM32(esp + 0x34);
    ecx = MEM32(edi + 0x10);
    edi = edi + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM8(esp + 0x2C) = 0x16;
    if (CMP_EQ(_fa, _fb)) goto loc_0014E0F5; /* je: equal / zero */

loc_0014E0E0: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014E0F5; /* jne: not equal / not zero */

loc_0014E0F0: ;
    PUSH32(esp, 0x0014E0F5u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014E0F5: ;
    MEM32(edi) = ebp;
    ecx = MEM32(esp + 0x34);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0014E101u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014E101: ;
    eax = MEM32(esi + 0x2B2C);
    ecx = MEM32(esp + 0x34);
    eax = MEM32(eax + 0x20);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0014E116u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0014E116: ;
    eax = MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM8(esp + 0x2C) = LO8(ebx);
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0014E13C; /* je: equal / zero */

loc_0014E124: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_0014E13C; /* jne: not equal / not zero */

loc_0014E137: ;
    PUSH32(esp, 0x0014E13Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014E13C: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM8(esp + 0x2C) = 0x14;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0014E163; /* je: equal / zero */

loc_0014E14B: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_0014E163; /* jne: not equal / not zero */

loc_0014E15E: ;
    PUSH32(esp, 0x0014E163u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014E163: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM8(esp + 0x2C) = 0xF;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0014E18A; /* je: equal / zero */

loc_0014E172: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_0014E18A; /* jne: not equal / not zero */

loc_0014E185: ;
    PUSH32(esp, 0x0014E18Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014E18A: ;
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014E030; /* jne: not equal / not zero */

loc_0014E194: ;
    eax = MEM32(esi + 0x2B18);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014E1A3u); RECOMP_ABI_CALL(0x00259CC0u, sub_00259CC0); /* call 0x00259CC0 */

loc_0014E1A3: ;
    eax = MEM32(esi + 0x2B1C);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014E1B2u); RECOMP_ABI_CALL(0x00259CC0u, sub_00259CC0); /* call 0x00259CC0 */

loc_0014E1B2: ;
    eax = MEM32(esi + 0x2B28);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014E1C1u); RECOMP_ABI_CALL(0x00259CC0u, sub_00259CC0); /* call 0x00259CC0 */

loc_0014E1C1: ;
    eax = MEM32(esi + 0x2B24);
    ecx = MEM32(esi + 0x2B28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014E1D3u); RECOMP_ABI_CALL(0x00259CC0u, sub_00259CC0); /* call 0x00259CC0 */

loc_0014E1D3: ;
    eax = MEM32(esi + 0x2B34);
    ecx = MEM32(esi + 0x2B28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014E1E5u); RECOMP_ABI_CALL(0x00259CC0u, sub_00259CC0); /* call 0x00259CC0 */

loc_0014E1E5: ;
    eax = MEM32(esi + 0x2B2C);
    ecx = MEM32(esi + 0x2B34);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014E1F7u); RECOMP_ABI_CALL(0x00259CC0u, sub_00259CC0); /* call 0x00259CC0 */

loc_0014E1F7: ;
    eax = MEM32(esi + 0x2B30);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014E206u); RECOMP_ABI_CALL(0x00259CC0u, sub_00259CC0); /* call 0x00259CC0 */

loc_0014E206: ;
    edi = MEM32(esi + 0x2B24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    ebx = MEM32(esi + 0x2B34);
    if (CMP_EQ(_fa, _fb)) goto loc_0014E219; /* je: equal / zero */

loc_0014E216: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0014E219: ;
    ecx = MEM32(ebx + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E235; /* je: equal / zero */

loc_0014E220: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014E235; /* jne: not equal / not zero */

loc_0014E230: ;
    PUSH32(esp, 0x0014E235u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014E235: ;
    MEM32(ebx + 0x20) = edi;
    edi = MEM32(esi + 0x2B30);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    ebx = MEM32(esi + 0x2B34);
    if (CMP_EQ(_fa, _fb)) goto loc_0014E24B; /* je: equal / zero */

loc_0014E248: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0014E24B: ;
    ecx = MEM32(ebx + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E267; /* je: equal / zero */

loc_0014E252: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014E267; /* jne: not equal / not zero */

loc_0014E262: ;
    PUSH32(esp, 0x0014E267u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014E267: ;
    MEM32(ebx + 0x24) = edi;
    eax = MEM32(esi + 0x178);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0014E278u); RECOMP_ABI_CALL(0x00143590u, sub_00143590); /* call 0x00143590 */

loc_0014E278: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM8(esp + 0x2C) = 0xE;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0014E29F; /* je: equal / zero */

loc_0014E287: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_0014E29F; /* jne: not equal / not zero */

loc_0014E29A: ;
    PUSH32(esp, 0x0014E29Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014E29F: ;
    ecx = MEM32(esp + 0x24);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014E2C0
 * Original: 0x0014E2C0 - 0x0014E2DE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014E2C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014E2C8u); RECOMP_ABI_CALL(0x0014D910u, sub_0014D910); /* call 0x0014D910 */

loc_0014E2C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014E2D8; /* je: equal / zero */

loc_0014E2CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014E2D5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_0014E2D5: ;
    esp = esp + 4;

loc_0014E2D8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014E2E0
 * Original: 0x0014E2E0 - 0x0014E306 (38 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E2E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0014E2E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0014E2F0; /* jne: not equal / not zero */

loc_0014E2EC: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0014E2F0: ;
    ecx = MEM32(0x5BD8EC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0014E2FEu); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0014E2FE: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014E310
 * Original: 0x0014E310 - 0x0014E350 (64 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014E310: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014E34F; /* je: equal / zero */

loc_0014E318: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014E329u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0014E329: ;
    PUSH32(esp, 0x3D2D80);
    PUSH32(esp, esi);
    MEM8(esi + 0xFF) = 0;
    PUSH32(esp, 0x0014E33Bu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_0014E33B: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014E34E; /* jne: not equal / not zero */

loc_0014E342: ;
    PUSH32(esp, 0x3DAEBC);
    ecx = esi;
    PUSH32(esp, 0x0014E34Eu); RECOMP_ABI_CALL(0x0013CFF0u, sub_0013CFF0); /* call 0x0013CFF0 */

loc_0014E34E: ;
    POP32(esp, esi);

loc_0014E34F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0014E350
 * Original: 0x0014E350 - 0x0014E427 (215 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E350(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014E350: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014E425; /* je: equal / zero */

loc_0014E35D: ;
    eax = MEM32(0x5BD8C8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0014E36Du); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0014E36D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ebp = MEM32(esp + 0x1C);
    if (TEST_Z(_fa, _fb)) goto loc_0014E3DD; /* je: equal / zero */

loc_0014E375: ;
    esi = MEM32(ebx + 0x68);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014E3DD; /* je: equal / zero */

loc_0014E37C: ;
    ecx = MEM32(0x5BD8AC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0014E38Au); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0014E38A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014E3DD; /* je: equal / zero */

loc_0014E38E: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0014E395u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014E395: ;
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 4) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0014E3B0; /* jg: greater (signed >) */

loc_0014E39E: ;
    if (CMP_L(_fas, _fbs)) goto loc_0014E3A4; /* jl: less (signed <) */

loc_0014E3A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0014E3B0; /* jae: above or equal (unsigned >=) */

loc_0014E3A4: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x0014E3ABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014E3AB: ;
    MEM32(edi) = eax;
    MEM32(edi + 4) = edx;

loc_0014E3B0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0014E3B7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014E3B7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014E3D0; /* jl: less (signed <) */

loc_0014E3BC: ;
    if (CMP_G(_fas, _fbs)) goto loc_0014E3C3; /* jg: greater (signed >) */

loc_0014E3BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0014E3D0; /* jbe: below or equal (unsigned <=) */

loc_0014E3C3: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0014E3CAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014E3CA: ;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;

loc_0014E3D0: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E3DD; /* je: equal / zero */

loc_0014E3D6: ;
    ecx = MEM32(esp + 0x20);
    MEM8(ecx) = 1;

loc_0014E3DD: ;
    edx = MEM32(0x5BDA80);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0014E3EBu); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0014E3EB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014E422; /* je: equal / zero */

loc_0014E3EF: ;
    eax = MEM32(ebx + 0x1C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014E422; /* je: equal / zero */

loc_0014E3F8: ;
    edi = MEM32(eax + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0014E422; /* jle: less or equal (signed <=) */

loc_0014E3FF: ;
    /* nop */

loc_0014E400: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(ebx + 0x1C);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + esi * 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014E41Au); RECOMP_ABI_CALL(0x0014E350u, sub_0014E350); /* call 0x0014E350 */

loc_0014E41A: ;
    esp = esp + 0x10;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014E400; /* jl: less (signed <) */

loc_0014E422: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0014E425: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0014E430
 * Original: 0x0014E430 - 0x0014E46A (58 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E430(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014E430: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    MEM8(edx) = 0;
    MEM32(eax) = 0xFFFFFFFFu;
    MEM32(eax + 4) = 0x7FFFFFFF;
    MEM32(ecx) = 0;
    MEM32(ecx + 4) = 0x80000000u;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 8) = eax;
    g_seh_ebp = ebp; sub_0014E350(); return; /* tail jmp 0x0014E350 */

}

/**
 * sub_0014E470
 * Original: 0x0014E470 - 0x0014E558 (232 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014E470: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353A48);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 8;
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014E494u); RECOMP_ABI_CALL(0x00148530u, sub_00148530); /* call 0x00148530 */

loc_0014E494: ;
    esp = esp + 8;
    ecx = MEM32(esp + 0x20);
    esi = MEM32(esp + 8);
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = 0;
    esi = esi + 8;
    PUSH32(esp, 0x0014E4B0u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_0014E4B0: ;
    ecx = eax;
    PUSH32(esp, 0x0014E4B7u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_0014E4B7: ;
    edi = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014E4D3; /* je: equal / zero */

loc_0014E4BF: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_0014E4D3; /* jne: not equal / not zero */

loc_0014E4CB: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014E4D3u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_0014E4D3: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(esi) = edi;
    eax = MEM32(esp + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x0014E4E6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014E4E6: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    eax = MEM32(esp + 8);
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    ecx = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0014E529; /* jne: not equal / not zero */

loc_0014E4FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014E516; /* je: equal / zero */

loc_0014E4FE: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0014E516; /* jne: not equal / not zero */

loc_0014E511: ;
    PUSH32(esp, 0x0014E516u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014E516: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0014E529: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014E545; /* je: equal / zero */

loc_0014E52D: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_0014E545; /* jne: not equal / not zero */

loc_0014E540: ;
    PUSH32(esp, 0x0014E545u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014E545: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0014E560
 * Original: 0x0014E560 - 0x0014E580 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E560(void)
{

loc_0014E560: ;
    eax = 0; /* xor self */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0014E580
 * Original: 0x0014E580 - 0x0014E619 (153 bytes, 58 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014E580: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x122) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x122 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0014E597; /* jl: less (signed <) */

loc_0014E58E: ;
    eax = 0x122;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0014E597: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + ecx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_0014E5AA; /* jne: not equal / not zero */

loc_0014E5A8: ;
    edx = ~edx;

loc_0014E5AA: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014E5D4; /* jne: not equal / not zero */

loc_0014E5B5: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x122) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x122 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014E60F; /* jge: greater or equal (signed >=) */

loc_0014E5C2: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + edx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_0014E5D0; /* jne: not equal / not zero */

loc_0014E5CE: ;
    edx = ~edx;

loc_0014E5D0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014E5B5; /* je: equal / zero */

loc_0014E5D4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014E5E2; /* jne: not equal / not zero */

loc_0014E5DC: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_0014E5E2: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014E5EC; /* jne: not equal / not zero */

loc_0014E5E6: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_0014E5EC: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014E5F7; /* jne: not equal / not zero */

loc_0014E5F1: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_0014E5F7: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014E608; /* jne: not equal / not zero */

loc_0014E5FC: ;
    /* nop */

loc_0014E600: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014E600; /* je: equal / zero */

loc_0014E608: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x122) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x122 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014E614; /* jl: less (signed <) */

loc_0014E60F: ;
    eax = 0x122;

loc_0014E614: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0014E620
 * Original: 0x0014E620 - 0x0014E63D (29 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E620(void)
{

loc_0014E620: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0xA);
    esi = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014E630u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0014E630: ;
    esp = esp + 0xC;
    MEM8(esi + 9) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014E640
 * Original: 0x0014E640 - 0x0014E684 (68 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014E640: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014E682; /* je: equal / zero */

loc_0014E64C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014E667; /* je: equal / zero */

loc_0014E650: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014E659u); RECOMP_ABI_CALL(0x00191CC0u, sub_00191CC0); /* call 0x00191CC0 */

loc_0014E659: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014E662u); RECOMP_ABI_CALL(0x00191F50u, sub_00191F50); /* call 0x00191F50 */

loc_0014E662: ;
    esp = esp + 8;
    goto loc_0014E676;

loc_0014E667: ;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(esi + 4));
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014E673u); RECOMP_ABI_CALL(0x0018F690u, sub_0018F690); /* call 0x0018F690 */

loc_0014E673: ;
    esp = esp + 4;

loc_0014E676: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014E682; /* je: equal / zero */

loc_0014E67C: ;
    MEM32(0x55AAD4) = MEM32(0x55AAD4) - 1;
    _fa = (uint32_t)(MEM32(0x55AAD4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0014E682: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014E690
 * Original: 0x0014E690 - 0x0014E768 (216 bytes, 72 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E690(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014E690: ;
    esp = esp - 0x10;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x0014E6ABu); RECOMP_ABI_CALL(0x00123C70u, sub_00123C70); /* call 0x00123C70 */

loc_0014E6AB: ;
    edi = eax;
    PUSH32(esp, 0x2F);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0014E6B5u); RECOMP_ABI_CALL(0x00341D90u, sub_00341D90); /* call 0x00341D90 */

loc_0014E6B5: ;
    esp = esp + 0x10;
    esi = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014E6C1; /* jne: not equal / not zero */

loc_0014E6BF: ;
    esi = edi;

loc_0014E6C1: ;
    PUSH32(esp, 0x2E);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014E6C9u); RECOMP_ABI_CALL(0x00341D90u, sub_00341D90); /* call 0x00341D90 */

loc_0014E6C9: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014E754; /* je: equal / zero */

loc_0014E6D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0014E754; /* jbe: below or equal (unsigned <=) */

loc_0014E6D8: ;
    ecx = 0; /* xor self */
    MEM32(esp + 0xD) = ecx;
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    MEM32(esp + 0x11) = ecx;
    MEM8(esp + 0xC) = 0;
    MEM8(esp + 0x15) = LO8(ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_0014E6F7; /* jle: less or equal (signed <=) */

loc_0014E6F2: ;
    eax = 0xA;

loc_0014E6F7: ;
    PUSH32(esp, eax);
    edx = esp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014E703u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0014E703: ;
    SET_LO8(ecx, MEM8(0x55AAE4));
    eax = 1;
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014E722; /* jne: not equal / not zero */

loc_0014E715: ;
    MEM32(0x55AAE4) = MEM32(0x55AAE4) | eax;
    MEM8(0x55AAD8) = 0;

loc_0014E722: ;
    PUSH32(esp, 0xA);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x55AAD8);
    PUSH32(esp, 0x0014E733u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0014E733: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x55AAE1) = 0;
    eax = 0x55AAD8;
    POP32(esp, ebp);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x0014E74Eu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0014E74E: ;
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_0014E754: ;
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    PUSH32(esp, 0x0014E762u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0014E762: ;
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014E770
 * Original: 0x0014E770 - 0x0014E806 (150 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014E770: ;
    eax = MEM32(ecx + 0x1220);
    PUSH32(esp, esi);
    esi = ecx + 0x1220;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014E79D; /* jne: not equal / not zero */

loc_0014E783: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x122) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x122 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014E7E5; /* jge: greater or equal (signed >=) */

loc_0014E791: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014E783; /* je: equal / zero */

loc_0014E79D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014E7AA; /* jne: not equal / not zero */

loc_0014E7A4: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_0014E7AA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014E7B4; /* jne: not equal / not zero */

loc_0014E7AE: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_0014E7B4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014E7BE; /* jne: not equal / not zero */

loc_0014E7B8: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_0014E7BE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014E7C9; /* jne: not equal / not zero */

loc_0014E7C2: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014E7C2; /* je: equal / zero */

loc_0014E7C9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x122) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x122 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014E7E5; /* jge: greater or equal (signed >=) */

loc_0014E7D1: ;
    eax = edx;

loc_0014E7D3: ;
    PUSH32(esp, 1);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0014E7DEu); RECOMP_ABI_CALL(0x0014E580u, sub_0014E580); /* call 0x0014E580 */

loc_0014E7DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x122) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x122 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014E7D3; /* jl: less (signed <) */

loc_0014E7E5: ;
    ecx = 0; /* xor self */
    MEM32(esi) = ecx;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = ecx;
    MEM32(esi + 0x24) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014E810
 * Original: 0x0014E810 - 0x0014E940 (304 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E810(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014E810: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x390);
    PUSH32(esp, ebp);
    ebp = ebx + 0x390;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014E842; /* jne: not equal / not zero */

loc_0014E826: ;
    ecx = ecx & 0xFFFFFFE0u;
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x39 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014E935; /* jge: greater or equal (signed >=) */

loc_0014E835: ;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(ebp + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014E826; /* je: equal / zero */

loc_0014E842: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014E84F; /* jne: not equal / not zero */

loc_0014E849: ;
    ecx = ecx + 0x10;
    eax = eax >> 0x10;

loc_0014E84F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014E859; /* jne: not equal / not zero */

loc_0014E853: ;
    ecx = ecx + 8;
    eax = eax >> 8;

loc_0014E859: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014E863; /* jne: not equal / not zero */

loc_0014E85D: ;
    ecx = ecx + 4;
    eax = eax >> 4;

loc_0014E863: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014E86E; /* jne: not equal / not zero */

loc_0014E867: ;
    eax = eax >> 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014E867; /* je: equal / zero */

loc_0014E86E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x39 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014E935; /* jge: greater or equal (signed >=) */

loc_0014E877: ;
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, esi);
    goto loc_0014E880;

    /* nop */

loc_0014E880: ;
    esi = edi;
    esi = esi << 4;
    SET_LO8(eax, MEM8(esi + ebx + 0xC));
    esi = esi + ebx;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014E8C5; /* je: equal / zero */

loc_0014E88F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014E8AA; /* je: equal / zero */

loc_0014E893: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014E89Cu); RECOMP_ABI_CALL(0x00191CC0u, sub_00191CC0); /* call 0x00191CC0 */

loc_0014E89C: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014E8A5u); RECOMP_ABI_CALL(0x00191F50u, sub_00191F50); /* call 0x00191F50 */

loc_0014E8A5: ;
    esp = esp + 8;
    goto loc_0014E8B9;

loc_0014E8AA: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 4));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014E8B6u); RECOMP_ABI_CALL(0x0018F690u, sub_0018F690); /* call 0x0018F690 */

loc_0014E8B6: ;
    esp = esp + 4;

loc_0014E8B9: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014E8C5; /* je: equal / zero */

loc_0014E8BF: ;
    MEM32(0x55AAD4) = MEM32(0x55AAD4) - 1;
    _fa = (uint32_t)(MEM32(0x55AAD4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0014E8C5: ;
    edx = edi + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x39 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014E933; /* jge: greater or equal (signed >=) */

loc_0014E8CD: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(ebp + eax * 4);
    ecx = edx;
    ecx = ecx & 0x1F;
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014E8F9; /* jne: not equal / not zero */

loc_0014E8E1: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x39 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014E933; /* jge: greater or equal (signed >=) */

loc_0014E8EC: ;
    ecx = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = MEM32(ebp + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014E8E1; /* je: equal / zero */

loc_0014E8F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014E906; /* jne: not equal / not zero */

loc_0014E900: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_0014E906: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014E910; /* jne: not equal / not zero */

loc_0014E90A: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_0014E910: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014E91A; /* jne: not equal / not zero */

loc_0014E914: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_0014E91A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014E927; /* jne: not equal / not zero */

loc_0014E91E: ;
    edi = edi;

loc_0014E920: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014E920; /* je: equal / zero */

loc_0014E927: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x39 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014E933; /* jge: greater or equal (signed >=) */

loc_0014E92C: ;
    edi = edx;
    goto loc_0014E880;

loc_0014E933: ;
    POP32(esp, esi);
    POP32(esp, edi);

loc_0014E935: ;
    edx = 0; /* xor self */
    MEM32(ebp) = edx;
    MEM32(ebp + 4) = edx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0014E940
 * Original: 0x0014E940 - 0x0014E9A2 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014E940: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x16B0) = esi;
    MEM32(ecx + 0x16B4) = esi;
    MEM32(ecx + 0x16B8) = esi;
    edx = 0; /* xor self */
    goto loc_0014E960;

    /* nop */

loc_0014E960: ;
    eax = MEM32(ecx + 0x16B0);
    edi = MEM32(ecx + 0x16B8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x122) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x122 (32-bit) */
    MEM32(ecx + 0x16B0) = eax;
    MEM32(ecx + 0x16B8) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0014E98E; /* jl: less (signed <) */

loc_0014E981: ;
    MEM32(ecx + 0x16B0) = esi;
    eax = 0x121;
    goto loc_0014E98F;

loc_0014E98E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0014E98F: ;
    MEM32(ecx + eax * 4 + 0x1224) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x122) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x122 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014E960; /* jl: less (signed <) */

loc_0014E99F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014E9B0
 * Original: 0x0014E9B0 - 0x0014E9C7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E9B0(void)
{

loc_0014E9B0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x33C) = ecx;
    MEM32(eax + 0x340) = ecx;
    MEM32(eax + 0x344) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0014E9D0
 * Original: 0x0014E9D0 - 0x0014E9E7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E9D0(void)
{

loc_0014E9D0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x48C) = ecx;
    MEM32(eax + 0x490) = ecx;
    MEM32(eax + 0x494) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0014E9F0
 * Original: 0x0014E9F0 - 0x0014EA30 (64 bytes, 23 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E9F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014E9F0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0014EA26; /* je: equal / zero */

loc_0014E9FD: ;
    edx = MEM32(esp + 0xC);
    SET_LO16(edi, MEM16(edx));

loc_0014EA04: ;
    edx = eax;
    edx = edx << 4;
    SET_LO16(esi, MEM16(edx + ecx + 0x18));
    edx = edx + ecx;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(edi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0014EA1A; /* jbe: below or equal (unsigned <=) */

loc_0014EA15: ;
    eax = MEM32(edx + 0x10);
    goto loc_0014EA1F;

loc_0014EA1A: ;
    if (CMP_AE(_fa, _fb)) goto loc_0014EA2B; /* jae: above or equal (unsigned >=) */

loc_0014EA1C: ;
    eax = MEM32(edx + 0x14);

loc_0014EA1F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014EA04; /* jne: not equal / not zero */

loc_0014EA26: ;
    eax = 0x3FFFFFFF;

loc_0014EA2B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0014EA30
 * Original: 0x0014EA30 - 0x0014EAA0 (112 bytes, 46 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EA30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014EA30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3FFFFFFF (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0014EA89; /* je: equal / zero */

loc_0014EA45: ;
    ebp = MEM32(esp + 0x18);
    /* nop */

loc_0014EA50: ;
    ecx = MEM32(esp + 0x10);
    eax = esi + esi * 2;
    edi = ecx + eax * 8;
    ebx = edi + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0014EA64u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0014EA64: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0014EA70; /* jge: greater or equal (signed >=) */

loc_0014EA6B: ;
    esi = MEM32(edi + 0x10);
    goto loc_0014EA81;

loc_0014EA70: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0014EA77u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0014EA77: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0014EA96; /* jge: greater or equal (signed >=) */

loc_0014EA7E: ;
    esi = MEM32(edi + 0x14);

loc_0014EA81: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014EA50; /* jne: not equal / not zero */

loc_0014EA89: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x3FFFFFFF;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0014EA96: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0014EAA0
 * Original: 0x0014EAA0 - 0x0014EAAC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EAA0(void)
{

loc_0014EAA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014EAA8u); RECOMP_ABI_CALL(0x0014E9B0u, sub_0014E9B0); /* call 0x0014E9B0 */

loc_0014EAA8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014EAB0
 * Original: 0x0014EAB0 - 0x0014EB12 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EAB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014EAB0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x5AA8) = esi;
    MEM32(ecx + 0x5AAC) = esi;
    MEM32(ecx + 0x5AB0) = esi;
    edx = 0; /* xor self */
    goto loc_0014EAD0;

    /* nop */

loc_0014EAD0: ;
    eax = MEM32(ecx + 0x5AA8);
    edi = MEM32(ecx + 0x5AB0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x122) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x122 (32-bit) */
    MEM32(ecx + 0x5AA8) = eax;
    MEM32(ecx + 0x5AB0) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0014EAFE; /* jl: less (signed <) */

loc_0014EAF1: ;
    MEM32(ecx + 0x5AA8) = esi;
    eax = 0x121;
    goto loc_0014EAFF;

loc_0014EAFE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0014EAFF: ;
    MEM32(ecx + eax * 4 + 0x561C) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x122) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x122 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014EAD0; /* jl: less (signed <) */

loc_0014EB0F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014EB20
 * Original: 0x0014EB20 - 0x0014EB2C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EB20(void)
{

loc_0014EB20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014EB28u); RECOMP_ABI_CALL(0x0014E9D0u, sub_0014E9D0); /* call 0x0014E9D0 */

loc_0014EB28: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014EB30
 * Original: 0x0014EB30 - 0x0014EB92 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014EB30: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x1690) = esi;
    MEM32(ecx + 0x1694) = esi;
    MEM32(ecx + 0x1698) = esi;
    edx = 0; /* xor self */
    goto loc_0014EB50;

    /* nop */

loc_0014EB50: ;
    eax = MEM32(ecx + 0x1690);
    edi = MEM32(ecx + 0x1698);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xCE (32-bit) */
    MEM32(ecx + 0x1690) = eax;
    MEM32(ecx + 0x1698) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0014EB7E; /* jl: less (signed <) */

loc_0014EB71: ;
    MEM32(ecx + 0x1690) = esi;
    eax = 0xCD;
    goto loc_0014EB7F;

loc_0014EB7E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0014EB7F: ;
    MEM32(ecx + eax * 4 + 0x1354) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xCE (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014EB50; /* jl: less (signed <) */

loc_0014EB8F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014EBA0
 * Original: 0x0014EBA0 - 0x0014EC02 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EBA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014EBA0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x1020) = esi;
    MEM32(ecx + 0x1024) = esi;
    MEM32(ecx + 0x1028) = esi;
    edx = 0; /* xor self */
    goto loc_0014EBC0;

    /* nop */

loc_0014EBC0: ;
    eax = MEM32(ecx + 0x1020);
    edi = MEM32(ecx + 0x1028);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xCE (32-bit) */
    MEM32(ecx + 0x1020) = eax;
    MEM32(ecx + 0x1028) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0014EBEE; /* jl: less (signed <) */

loc_0014EBE1: ;
    MEM32(ecx + 0x1020) = esi;
    eax = 0xCD;
    goto loc_0014EBEF;

loc_0014EBEE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0014EBEF: ;
    MEM32(ecx + eax * 4 + 0xCE4) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xCE (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014EBC0; /* jl: less (signed <) */

loc_0014EBFF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014EC10
 * Original: 0x0014EC10 - 0x0014EC6A (90 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014EC10: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0xC;
    ecx = 0x122;
    goto loc_0014EC20;

    /* nop */

loc_0014EC20: ;
    MEM8(eax) = 0;
    eax = eax + 0x4C;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014EC20; /* jne: not equal / not zero */

loc_0014EC29: ;
    ecx = esi + 0x561C;
    PUSH32(esp, 0x0014EC34u); RECOMP_ABI_CALL(0x0014EB20u, sub_0014EB20); /* call 0x0014EB20 */

loc_0014EC34: ;
    eax = 0; /* xor self */
    ecx = esi + 0x5AB4;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    ecx = esi;
    MEM32(esi + 0x5ADC) = eax;
    PUSH32(esp, 0x0014EC66u); RECOMP_ABI_CALL(0x0014EAB0u, sub_0014EAB0); /* call 0x0014EAB0 */

loc_0014EC66: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014EC70
 * Original: 0x0014EC70 - 0x0014ECCD (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EC70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014EC70: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x47C) = esi;
    MEM32(ecx + 0x480) = esi;
    MEM32(ecx + 0x484) = esi;
    edx = 0; /* xor self */
    goto loc_0014EC90;

    /* nop */

loc_0014EC90: ;
    eax = MEM32(ecx + 0x47C);
    edi = MEM32(ecx + 0x484);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x39 (32-bit) */
    MEM32(ecx + 0x47C) = eax;
    MEM32(ecx + 0x484) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0014ECBC; /* jl: less (signed <) */

loc_0014ECAF: ;
    MEM32(ecx + 0x47C) = esi;
    eax = 0x38;
    goto loc_0014ECBD;

loc_0014ECBC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0014ECBD: ;
    MEM32(ecx + eax * 4 + 0x394) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x39 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014EC90; /* jl: less (signed <) */

loc_0014ECCA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014ECD0
 * Original: 0x0014ECD0 - 0x0014ED21 (81 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014ECD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014ECD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0xC;
    ecx = 0xCE;
    goto loc_0014ECE0;

    /* nop */

loc_0014ECE0: ;
    MEM8(eax) = 0;
    eax = eax + 0x18;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014ECE0; /* jne: not equal / not zero */

loc_0014ECE9: ;
    ecx = esi + 0x1354;
    PUSH32(esp, 0x0014ECF4u); RECOMP_ABI_CALL(0x0014EAA0u, sub_0014EAA0); /* call 0x0014EAA0 */

loc_0014ECF4: ;
    eax = 0; /* xor self */
    ecx = esi + 0x169C;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    ecx = esi;
    MEM32(esi + 0x16B8) = eax;
    PUSH32(esp, 0x0014ED1Du); RECOMP_ABI_CALL(0x0014EB30u, sub_0014EB30); /* call 0x0014EB30 */

loc_0014ED1D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014ED30
 * Original: 0x0014ED30 - 0x0014EDAF (127 bytes, 45 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014ED30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014ED30: ;
    esp = esp - 0xC;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0014ED43u); RECOMP_ABI_CALL(0x00123C70u, sub_00123C70); /* call 0x00123C70 */

loc_0014ED43: ;
    esp = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0014ED4Eu); RECOMP_ABI_CALL(0x0014E690u, sub_0014E690); /* call 0x0014E690 */

loc_0014ED4E: ;
    edi = eax;
    PUSH32(esp, 0xA);
    ecx = esp + 0xE;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014ED5Du); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0014ED5D: ;
    edx = MEM32(esi + 0x9100);
    esi = esi + 0x90FC;
    esp = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0xE;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esp + 0x1B) = 0;
    PUSH32(esp, 0x0014ED7Eu); RECOMP_ABI_CALL(0x0014EA30u, sub_0014EA30); /* call 0x0014EA30 */

loc_0014ED7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014ED89; /* jne: not equal / not zero */

loc_0014ED85: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014EDA3; /* je: equal / zero */

loc_0014ED89: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014ED93; /* je: equal / zero */

loc_0014ED91: ;
    MEM32(ecx) = edi;

loc_0014ED93: ;
    SET_LO16(eax, MEM16(esi + eax * 2 + 0x16C8));
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

loc_0014EDA3: ;
    POP32(esp, edi);
    SET_LO16(eax, LO16(eax) | 0xFFFF);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0014EDB0
 * Original: 0x0014EDB0 - 0x0014EE76 (198 bytes, 63 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EDB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014EDB0: ;
    esp = esp - 0x10;
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0xB9FA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014EE6D; /* jne: not equal / not zero */

loc_0014EDC4: ;
    ecx = MEM32(esp + 0x18);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x0014EDDDu); RECOMP_ABI_CALL(0x0014ED30u, sub_0014ED30); /* call 0x0014ED30 */

loc_0014EDDD: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0014EE6D; /* je: equal / zero */

loc_0014EDEB: ;
    SET_LO8(ecx, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014EE64; /* jne: not equal / not zero */

loc_0014EDF3: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014EDFAu); RECOMP_ABI_CALL(0x00191900u, sub_00191900); /* call 0x00191900 */

loc_0014EDFA: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0xA);
    PUSH32(esp, edx);
    eax = esp + 0x1A;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014EE0Bu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0014EE0B: ;
    ecx = MEM32(edi + 0x9100);
    esi = edi + 0x90FC;
    esp = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x12;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(esp + 0x1F) = 0;
    PUSH32(esp, 0x0014EE2Cu); RECOMP_ABI_CALL(0x0014EA30u, sub_0014EA30); /* call 0x0014EA30 */

loc_0014EE2C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014EE3B; /* je: equal / zero */

loc_0014EE33: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0014EE3Bu); RECOMP_ABI_CALL(0x00199920u, sub_00199920); /* call 0x00199920 */

loc_0014EE3B: ;
    eax = MEM32(edi + 0xA968);
    esi = edi + 0xA964;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0014EE54u); RECOMP_ABI_CALL(0x0014E9F0u, sub_0014E9F0); /* call 0x0014E9F0 */

loc_0014EE54: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014EE63; /* je: equal / zero */

loc_0014EE5B: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0014EE63u); RECOMP_ABI_CALL(0x00199920u, sub_00199920); /* call 0x00199920 */

loc_0014EE63: ;
    POP32(esp, esi);

loc_0014EE64: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_0014EE6D: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0014EE80
 * Original: 0x0014EE80 - 0x0014EEEF (111 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014EE80: ;
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0xB9FA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014EEEB; /* jne: not equal / not zero */

loc_0014EE8D: ;
    eax = MEM32(esp + 8);
    eax = eax + eax * 4;
    PUSH32(esp, esi);
    esi = edi + eax * 2 + 0xB9FC;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014EEEA; /* je: equal / zero */

loc_0014EEA1: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esp + 0x10) = LO8(ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0014EEC4; /* je: equal / zero */

loc_0014EEB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014EEB7u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0014EEB7: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014EEC4; /* jne: not equal / not zero */

loc_0014EEBE: ;
    SET_LO8(ebx, 1);
    MEM8(esp + 0x10) = LO8(ebx);

loc_0014EEC4: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0014EED1u); RECOMP_ABI_CALL(0x0014EDB0u, sub_0014EDB0); /* call 0x0014EDB0 */

loc_0014EED1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_0014EEEA; /* jne: not equal / not zero */

loc_0014EED6: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014EEE3u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0014EEE3: ;
    esp = esp + 0xC;
    MEM8(esi + 9) = 0;

loc_0014EEEA: ;
    POP32(esp, esi);

loc_0014EEEB: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0014EEF0
 * Original: 0x0014EEF0 - 0x0014EFA8 (184 bytes, 62 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EEF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014EEF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0xB9FB));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014EFA5; /* je: equal / zero */

loc_0014EF04: ;
    _fa = (uint32_t)(MEM8(edi + 0xB9FA)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0xB9FA), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014EFA5; /* jne: not equal / not zero */

loc_0014EF10: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = edi + 0xB9FC;
    ebp = 6;
    /* nop */

loc_0014EF20: ;
    _fa = (uint32_t)(MEM8(edi + 0xB9FA)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0xB9FA), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014EF48; /* jne: not equal / not zero */

loc_0014EF28: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014EF48; /* je: equal / zero */

loc_0014EF2C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0014EF35u); RECOMP_ABI_CALL(0x0014EDB0u, sub_0014EDB0); /* call 0x0014EDB0 */

loc_0014EF35: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014EF42u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0014EF42: ;
    esp = esp + 0xC;
    MEM8(esi + 9) = LO8(ebx);

loc_0014EF48: ;
    esi = esi + 0xA;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014EF20; /* jne: not equal / not zero */

loc_0014EF4E: ;
    esi = 0x3DD05C;

loc_0014EF53: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0014EF5Eu); RECOMP_ABI_CALL(0x0014EDB0u, sub_0014EDB0); /* call 0x0014EDB0 */

loc_0014EF5E: ;
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3DD064) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3DD064 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014EF53; /* jl: less (signed <) */

loc_0014EF69: ;
    eax = MEM32(0x55AAE8);
    ecx = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    MEM32(0x55AAE8) = eax;
    POP32(esp, ebp);
    if (TEST_NZ(_fa, _fb)) goto loc_0014EF9F; /* jne: not equal / not zero */

loc_0014EF7C: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x0014EF83u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014EF83: ;
    _fa = (uint32_t)(MEM8(edi + 4)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 4), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014EF9F; /* je: equal / zero */

loc_0014EF88: ;
    MEM8(edi + 4) = LO8(ebx);
    PUSH32(esp, 0x0014EF90u); RECOMP_ABI_CALL(0x00192020u, sub_00192020); /* call 0x00192020 */

loc_0014EF90: ;
    PUSH32(esp, 0x0014EF95u); RECOMP_ABI_CALL(0x0018FE40u, sub_0018FE40); /* call 0x0018FE40 */

loc_0014EF95: ;
    PUSH32(esp, 0x0014EF9Au); RECOMP_ABI_CALL(0x0018F020u, sub_0018F020); /* call 0x0018F020 */

loc_0014EF9A: ;
    PUSH32(esp, 0x0014EF9Fu); RECOMP_ABI_CALL(0x00190DE0u, sub_00190DE0); /* call 0x00190DE0 */

loc_0014EF9F: ;
    MEM8(edi + 0xB9FB) = LO8(ebx);

loc_0014EFA5: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0014EFB0
 * Original: 0x0014EFB0 - 0x0014EFBE (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EFB0(void)
{

loc_0014EFB0: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    eax = eax + ecx + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014EFC0
 * Original: 0x0014EFC0 - 0x0014EFE7 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EFC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014EFC0: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x4C);
    eax = eax + ecx + 0x18;
    ecx = edx + ecx + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014EFDCu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0014EFDC: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_S(_fas, _fbs)) ? 1 : 0); /* setl */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014EFF0
 * Original: 0x0014EFF0 - 0x0014EFF8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EFF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014EFF0: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_0014F000(); return; /* tail jmp 0x0014F000 */

}

/**
 * sub_0014F000
 * Original: 0x0014F000 - 0x0014F075 (117 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F000: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x5AB4;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x5AA8);
    edi = MEM32(eax + 0x5AB0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x122) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x122 (32-bit) */
    MEM32(eax + 0x5AA8) = ecx;
    MEM32(eax + 0x5AB0) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0014F05B; /* jl: less (signed <) */

loc_0014F04A: ;
    MEM32(eax + 0x5AA8) = 0;
    ecx = 0x121;
    goto loc_0014F05C;

loc_0014F05B: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0014F05C: ;
    MEM32(eax + ecx * 4 + 0x561C) = esi;
    ecx = MEM32(eax + 0x5ADC);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x5ADC) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014F080
 * Original: 0x0014F080 - 0x0014F088 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F080(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014F080: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_0014F090(); return; /* tail jmp 0x0014F090 */

}

/**
 * sub_0014F090
 * Original: 0x0014F090 - 0x0014F105 (117 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F090: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x16BC;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x16B0);
    edi = MEM32(eax + 0x16B8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x122) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x122 (32-bit) */
    MEM32(eax + 0x16B0) = ecx;
    MEM32(eax + 0x16B8) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0014F0EB; /* jl: less (signed <) */

loc_0014F0DA: ;
    MEM32(eax + 0x16B0) = 0;
    ecx = 0x121;
    goto loc_0014F0EC;

loc_0014F0EB: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0014F0EC: ;
    MEM32(eax + ecx * 4 + 0x1224) = esi;
    ecx = MEM32(eax + 0x16E4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x16E4) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014F110
 * Original: 0x0014F110 - 0x0014F118 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F110(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014F110: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_0014F120(); return; /* tail jmp 0x0014F120 */

}

/**
 * sub_0014F120
 * Original: 0x0014F120 - 0x0014F192 (114 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F120: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x488;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x47C);
    edi = MEM32(eax + 0x484);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x39 (32-bit) */
    MEM32(eax + 0x47C) = ecx;
    MEM32(eax + 0x484) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0014F178; /* jl: less (signed <) */

loc_0014F167: ;
    MEM32(eax + 0x47C) = 0;
    ecx = 0x38;
    goto loc_0014F179;

loc_0014F178: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0014F179: ;
    MEM32(eax + ecx * 4 + 0x394) = esi;
    ecx = MEM32(eax + 0x490);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x490) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014F1A0
 * Original: 0x0014F1A0 - 0x0014F1C7 (39 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F1A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F1A0: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + eax * 2;
    eax = ecx + eax * 8;
    edx = edx + edx * 2 + 3;
    ecx = ecx + edx * 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014F1BCu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0014F1BC: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_S(_fas, _fbs)) ? 1 : 0); /* setl */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014F1D0
 * Original: 0x0014F1D0 - 0x0014F1F7 (39 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F1D0: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + eax * 2;
    eax = ecx + eax * 8;
    PUSH32(esp, eax);
    edx = edx + edx * 2 + 3;
    eax = ecx + edx * 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014F1ECu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0014F1EC: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_S(_fas, _fbs)) ? 1 : 0); /* setl */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014F200
 * Original: 0x0014F200 - 0x0014F208 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F200(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014F200: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_0014F210(); return; /* tail jmp 0x0014F210 */

}

/**
 * sub_0014F210
 * Original: 0x0014F210 - 0x0014F285 (117 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F210: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x169C;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x1690);
    edi = MEM32(eax + 0x1698);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xCE (32-bit) */
    MEM32(eax + 0x1690) = ecx;
    MEM32(eax + 0x1698) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0014F26B; /* jl: less (signed <) */

loc_0014F25A: ;
    MEM32(eax + 0x1690) = 0;
    ecx = 0xCD;
    goto loc_0014F26C;

loc_0014F26B: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0014F26C: ;
    MEM32(eax + ecx * 4 + 0x1354) = esi;
    ecx = MEM32(eax + 0x16B8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x16B8) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014F290
 * Original: 0x0014F290 - 0x0014F2AE (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F290(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0014F290: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    eax = ZX16(MEM16(eax + ecx + 0x18));
    if (4) _cf = (int)(((edx) >> (32 - (4))) & 1);
    edx = edx << 4;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edx + ecx + 0x18)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(edx + ecx + 0x18) (16-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014F2B0
 * Original: 0x0014F2B0 - 0x0014F2B8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F2B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014F2B0: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_0014F2C0(); return; /* tail jmp 0x0014F2C0 */

}

/**
 * sub_0014F2C0
 * Original: 0x0014F2C0 - 0x0014F335 (117 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F2C0: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x102C;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x1020);
    edi = MEM32(eax + 0x1028);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xCE (32-bit) */
    MEM32(eax + 0x1020) = ecx;
    MEM32(eax + 0x1028) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0014F31B; /* jl: less (signed <) */

loc_0014F30A: ;
    MEM32(eax + 0x1020) = 0;
    ecx = 0xCD;
    goto loc_0014F31C;

loc_0014F31B: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0014F31C: ;
    MEM32(eax + ecx * 4 + 0xCE4) = esi;
    ecx = MEM32(eax + 0x1048);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x1048) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014F340
 * Original: 0x0014F340 - 0x0014F3CF (143 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F340(void)
{

loc_0014F340: ;
    edx = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(esi + 4) = 0x3FFFFFFF;
    MEM32(esi + 8) = 0xFFFFFFFFu;
    MEM32(esi) = 0x3DD09C;
    ecx = esi + 0xC;
    eax = 0; /* xor self */
    MEM32(ecx + 0x16B0) = eax;
    MEM32(ecx + 0x16B4) = eax;
    MEM32(ecx + 0x16B8) = eax;
    edi = ecx + 0x16BC;
    MEM32(edi) = edx;
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = edx;
    MEM32(edi + 0xC) = edx;
    MEM32(edi + 0x10) = edx;
    MEM32(edi + 0x14) = edx;
    MEM32(edi + 0x18) = edx;
    MEM32(edi + 0x1C) = edx;
    MEM32(edi + 0x20) = edx;
    MEM32(edi + 0x24) = edx;
    MEM32(ecx + 0x16E4) = eax;
    PUSH32(esp, 0x0014F39Fu); RECOMP_ABI_CALL(0x0014E940u, sub_0014E940); /* call 0x0014E940 */

loc_0014F39F: ;
    MEM32(esi) = 0x3DD0FC;
    eax = 0; /* xor self */
    ecx = esi + 0x2914;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014F3D0
 * Original: 0x0014F3D0 - 0x0014F42F (95 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F3D0(void)
{

loc_0014F3D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi + 4) = 0x3FFFFFFF;
    MEM32(esi + 8) = 0xFFFFFFFFu;
    MEM32(esi) = 0x3DD0B4;
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x47C) = eax;
    MEM32(ecx + 0x480) = eax;
    MEM32(ecx + 0x484) = eax;
    edi = ecx + 0x488;
    edx = 0; /* xor self */
    MEM32(edi) = edx;
    MEM32(edi + 4) = edx;
    MEM32(ecx + 0x490) = eax;
    PUSH32(esp, 0x0014F417u); RECOMP_ABI_CALL(0x0014EC70u, sub_0014EC70); /* call 0x0014EC70 */

loc_0014F417: ;
    ecx = esi + 0x830;
    MEM32(esi) = 0x3DD114;
    eax = 0; /* xor self */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014F430
 * Original: 0x0014F430 - 0x0014F43B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F430(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014F430: ;
    ecx = ecx + 0x16F4;
    g_seh_ebp = ebp; sub_0014E770(); return; /* tail jmp 0x0014E770 */

}

/**
 * sub_0014F440
 * Original: 0x0014F440 - 0x0014F44B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F440(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014F440: ;
    ecx = ecx + 0x4A0;
    g_seh_ebp = ebp; sub_0014E810(); return; /* tail jmp 0x0014E810 */

}

/**
 * sub_0014F450
 * Original: 0x0014F450 - 0x0014F5CE (382 bytes, 78 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F450: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3DD1A4;
    ebx = 0; /* xor self */
    MEM8(esi + 4) = LO8(ebx);
    PUSH32(esp, edi);
    ecx = esi + 0x14;
    MEM32(esi + 0xC) = 0x3FFFFFFF;
    MEM32(esi + 0x10) = 0xFFFFFFFFu;
    MEM32(esi + 8) = 0x3DD084;
    PUSH32(esp, 0x0014F47Du); RECOMP_ABI_CALL(0x0014EC10u, sub_0014EC10); /* call 0x0014EC10 */

loc_0014F47D: ;
    edi = esi + 0x5F80;
    ecx = edi;
    MEM32(esi + 8) = 0x3DD12C;
    PUSH32(esp, 0x0014F491u); RECOMP_ABI_CALL(0x0014F340u, sub_0014F340); /* call 0x0014F340 */

loc_0014F491: ;
    MEM32(edi) = 0x3DD144;
    edi = esi + 0x88BC;
    ecx = edi;
    PUSH32(esp, 0x0014F4A4u); RECOMP_ABI_CALL(0x0014F3D0u, sub_0014F3D0); /* call 0x0014F3D0 */

loc_0014F4A4: ;
    MEM32(edi) = 0x3DD15C;
    MEM32(esi + 0x90F4) = ebx;
    MEM32(esi + 0x90F8) = ebx;
    edi = 0x3FFFFFFF;
    ecx = esi + 0x9108;
    MEM32(esi + 0x9100) = edi;
    MEM32(esi + 0x9104) = 0xFFFFFFFFu;
    MEM32(esi + 0x90FC) = 0x3DD0CC;
    PUSH32(esp, 0x0014F4E0u); RECOMP_ABI_CALL(0x0014ECD0u, sub_0014ECD0); /* call 0x0014ECD0 */

loc_0014F4E0: ;
    MEM32(esi + 0x90FC) = 0x3DD174;
    MEM32(esi + 0xA968) = edi;
    MEM32(esi + 0xA96C) = 0xFFFFFFFFu;
    MEM32(esi + 0xA964) = 0x3DD0E4;
    ecx = esi + 0xA970;
    MEM32(ecx + 0x1020) = ebx;
    MEM32(ecx + 0x1024) = ebx;
    MEM32(ecx + 0x1028) = ebx;
    eax = 0; /* xor self */
    edx = ecx + 0x102C;
    MEM32(edx) = eax;
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = eax;
    MEM32(edx + 0x10) = eax;
    MEM32(edx + 0x14) = eax;
    MEM32(edx + 0x18) = eax;
    MEM32(ecx + 0x1048) = ebx;
    PUSH32(esp, 0x0014F543u); RECOMP_ABI_CALL(0x0014EBA0u, sub_0014EBA0); /* call 0x0014EBA0 */

loc_0014F543: ;
    MEM32(esi + 0xA964) = 0x3DD18C;
    MEM8(esi + 0xB9BC) = LO8(ebx);
    eax = 0xC61C4000u;
    MEM32(esi + 0xB9C8) = eax;
    MEM32(esi + 0xB9CC) = eax;
    MEM32(esi + 0xB9D0) = eax;
    MEM32(esi + 0xB9D4) = ebx;
    MEM32(esi + 0xB9D8) = 0x3F800000;
    MEM32(esi + 0xB9DC) = ebx;
    MEM8(esi + 0xB9EC) = 1;
    eax = MEM32(0x3DD054);
    MEM32(esi + 0xB9F0) = eax;
    ecx = MEM32(0x3DD050);
    MEM32(esi + 0xB9F4) = ecx;
    MEM8(esi + 0xB9F8) = LO8(ebx);
    MEM8(esi + 0xB9F9) = LO8(ebx);
    MEM8(esi + 0xB9FB) = LO8(ebx);
    eax = esi + 0xB9FC;
    ecx = 6;
    goto loc_0014F5C0;

    /* nop */

loc_0014F5C0: ;
    MEM8(eax) = LO8(ebx);
    eax = eax + 0xA;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014F5C0; /* jne: not equal / not zero */

loc_0014F5C8: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0014F5D0
 * Original: 0x0014F5D0 - 0x0014F5DE (14 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F5D0: ;
    SET_LO8(edx, MEM8(ecx + 0xB9FA));
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_0014F5E0
 * Original: 0x0014F5E0 - 0x0014F649 (105 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F5E0(void)
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

loc_0014F5E0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(ecx + 0xB9FA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014F647; /* jne: not equal / not zero */

loc_0014F5EB: ;
    SET_LO8(eax, MEM8(ecx + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014F647; /* je: equal / zero */

loc_0014F5F2: ;
    PUSH32(esp, 0x0014F5F7u); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_0014F5F7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0014F5FEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014F5FE: ;
    fp_push(MEMF(0x55AAEC)); /* fld float */
    fp_top() = fp_st1() - fp_top(); /* fsubr st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(0x55AAEC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8240)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8240] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014F626; /* jne: not equal / not zero */

loc_0014F61F: ;
    MEM32(esp) = 0x3DCCCCCD;

loc_0014F626: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014F631u); RECOMP_ABI_CALL(0x0018F6F0u, sub_0018F6F0); /* call 0x0018F6F0 */

loc_0014F631: ;
    PUSH32(esp, 0x0014F636u); RECOMP_ABI_CALL(0x00192060u, sub_00192060); /* call 0x00192060 */

loc_0014F636: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014F63Cu); RECOMP_ABI_CALL(0x0018F490u, sub_0018F490); /* call 0x0018F490 */

loc_0014F63C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0014F643u); RECOMP_ABI_CALL(0x00190100u, sub_00190100); /* call 0x00190100 */

loc_0014F643: ;
    esp = esp + 0xC;
    POP32(esp, esi);

loc_0014F647: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014F650
 * Original: 0x0014F650 - 0x0014F665 (21 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F650(void)
{

loc_0014F650: ;
    SET_LO8(eax, MEM8(ecx + 0xB9F8));
    edx = MEM32(esp + 4);
    MEM8(edx) = LO8(eax);
    eax = MEM32(ecx + 0xB9F4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014F670
 * Original: 0x0014F670 - 0x0014F6B6 (70 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F670: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xB9FA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014F683; /* je: equal / zero */

loc_0014F67D: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0014F683: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x34); PUSH32(esp, 0x0014F696u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014F696: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x54); PUSH32(esp, 0x0014F69Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014F69C: ;
    MEM32(esi + 0xB9F0) = eax;
    edx = MEM32(0x3DD054);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014F6C0
 * Original: 0x0014F6C0 - 0x0014F6CD (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F6C0(void)
{

loc_0014F6C0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0xB9E0) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014F6D0
 * Original: 0x0014F6D0 - 0x0014F719 (73 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F6D0(void)
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

loc_0014F6D0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0014F6EE; /* jp: parity */

loc_0014F6E1: ;
    MEM32(ecx + 0xB9E8) = 0;
    esp += 8; return; /* ret 4 */

loc_0014F6EE: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014F70C; /* jne: not equal / not zero */

loc_0014F6FF: ;
    MEM32(ecx + 0xB9E8) = 0x3F800000;
    esp += 8; return; /* ret 4 */

loc_0014F70C: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xB9E8) = eax;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014F720
 * Original: 0x0014F720 - 0x0014F727 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F720(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0014F720: ;
    fp_push(MEMF(ecx + 0xB9E8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014F730
 * Original: 0x0014F730 - 0x0014F779 (73 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F730(void)
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

loc_0014F730: ;
    MEM8(ecx + 0xB9EC) = 1; /* PC music-volume preview: native stream refresh */
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0014F74E; /* jp: parity */

loc_0014F741: ;
    MEM32(ecx + 0xB9E4) = 0;
    esp += 8; return; /* ret 4 */

loc_0014F74E: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014F76C; /* jne: not equal / not zero */

loc_0014F75F: ;
    MEM32(ecx + 0xB9E4) = 0x3F800000;
    esp += 8; return; /* ret 4 */

loc_0014F76C: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xB9E4) = eax;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014F780
 * Original: 0x0014F780 - 0x0014F787 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F780(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0014F780: ;
    fp_push(MEMF(ecx + 0xB9E4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014F790
 * Original: 0x0014F790 - 0x0014F900 (368 bytes, 129 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F790(void)
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

loc_0014F790: ;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xB9FB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014F8F9; /* je: equal / zero */

loc_0014F7A4: ;
    SET_LO8(eax, MEM8(esi + 0xB9FA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014F8F9; /* jne: not equal / not zero */

loc_0014F7B2: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0014F7B7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014F7B7: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0014F7C2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014F7C2: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014F8AF; /* jne: not equal / not zero */

loc_0014F7DB: ;
    PUSH32(esp, 0x0014F7E0u); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_0014F7E0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0014F7E7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014F7E7: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0014F7F2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014F7F2: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0014F7FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014F7FD: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014F813; /* jne: not equal / not zero */

loc_0014F808: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0014F80Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014F80F: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_0014F813: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = fp_top() / MEMF(esp + 0x28); /* fdiv dword ptr [esp + 0x28] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_0014F822: ;
    PUSH32(esp, 0x0014F827u); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_0014F827: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0014F82Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014F82E: ;
    fp_top() = fp_top() - MEMF(esp + 0x14); /* fsub dword ptr [esp + 0x14] */
    eax = MEM32(esi);
    ecx = esi;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    fp_top() = MEMF(esp + 8) - fp_top(); /* fsubr dword ptr [esp + 8] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0014F851u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014F851: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0xc] */
    edi = MEM32(esp + 0xC);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014F868; /* jne: not equal / not zero */

loc_0014F860: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0014F868u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014F868: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0014F86Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014F86F: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014F882; /* jne: not equal / not zero */

loc_0014F87A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0014F882u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014F882: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0014F88Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014F88B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0014F894u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014F894: ;
    ecx = esi;
    PUSH32(esp, 0x0014F89Bu); RECOMP_ABI_CALL(0x0014F900u, sub_0014F900); /* call 0x0014F900 */

loc_0014F89B: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0014F822; /* jnp: not parity */

loc_0014F8AE: ;
    POP32(esp, edi);

loc_0014F8AF: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0014F8B8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014F8B8: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0014F8C1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014F8C1: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0014F8CAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014F8CA: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0014F8D3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014F8D3: ;
    ecx = esi;
    PUSH32(esp, 0x0014F8DAu); RECOMP_ABI_CALL(0x0014F900u, sub_0014F900); /* call 0x0014F900 */

loc_0014F8DA: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0014F8E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014F8E1: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0014F8EDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014F8ED: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0014F8F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014F8F9: ;
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014F900
 * Original: 0x0014F900 - 0x0014F947 (71 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F900(void)
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

loc_0014F900: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014F944; /* je: equal / zero */

loc_0014F90B: ;
    PUSH32(esp, 0x0014F910u); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_0014F910: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0014F917u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014F917: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0014F920;

    /* nop */

loc_0014F920: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0014F927u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014F927: ;
    PUSH32(esp, 0x0014F92Cu); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_0014F92C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0014F933u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014F933: ;
    fp_top() = fp_top() - MEMF(esp + 4); /* fsub dword ptr [esp + 4] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3DD24C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3dd24c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0014F920; /* jnp: not parity */

loc_0014F944: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014F950
 * Original: 0x0014F950 - 0x0014F968 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F950: ;
    SET_LO8(eax, MEM8(ecx + 0xB9FA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014F95F; /* je: equal / zero */

loc_0014F95A: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

loc_0014F95F: ;
    eax = MEM32(ecx + 0x8D58);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014F970
 * Original: 0x0014F970 - 0x0014FA3F (207 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F970(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0014F970: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0x3F800000;
    PUSH32(esp, 0x0014F9A2u); RECOMP_ABI_CALL(0x0023FB50u, sub_0023FB50); /* call 0x0023FB50 */

loc_0014F9A2: ;
    ecx = esp + 8;
    PUSH32(esp, 0x0014F9ABu); RECOMP_ABI_CALL(0x000129C0u, sub_000129C0); /* call 0x000129C0 */

loc_0014F9AB: ;
    fp_pop(); /* fstp st(0) */
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax);
    MEM32(0x5DCF80) = ecx;
    edx = MEM32(edi);
    ecx = MEM32(esp + 8);
    MEM32(0x5DCFA0) = edx;
    MEM32(0x5DCF90) = ecx;
    edx = MEM32(eax + 4);
    MEM32(0x5DCF84) = edx;
    ecx = MEM32(edi + 4);
    edx = MEM32(esp + 0xC);
    MEM32(0x5DCFA4) = ecx;
    MEM32(0x5DCF94) = edx;
    ecx = MEM32(eax + 8);
    MEM32(0x5DCF88) = ecx;
    edx = MEM32(edi + 8);
    ecx = MEM32(esp + 0x10);
    MEM32(0x5DCFA8) = edx;
    MEM32(0x5DCF98) = ecx;
    edx = MEM32(eax);
    MEM32(esi + 0xB9C8) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0xB9CC) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 0xB9D0) = edx;
    eax = MEM32(edi);
    MEM32(esi + 0xB9D4) = eax;
    ecx = MEM32(edi + 4);
    MEM32(esi + 0xB9D8) = ecx;
    edx = MEM32(edi + 8);
    POP32(esp, edi);
    MEM32(esi + 0xB9DC) = edx;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014FA40
 * Original: 0x0014FA40 - 0x0014FA7D (61 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014FA40: ;
    eax = MEM32(ecx + 0x88C0);
    PUSH32(esp, esi);
    esi = ecx + 0x88BC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0014FA5Au); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_0014FA5A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014FA65; /* jne: not equal / not zero */

loc_0014FA61: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FA77; /* je: equal / zero */

loc_0014FA65: ;
    eax = eax << 4;
    SET_LO8(eax, MEM8(eax + esi + 0x4AC));
    SET_LO8(eax, LO8(eax) >> 1);
    SET_LO8(eax, LO8(eax) & 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0014FA77: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014FA80
 * Original: 0x0014FA80 - 0x0014FAD3 (83 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FA80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014FA80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD054)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DD054) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FACF; /* je: equal / zero */

loc_0014FA8F: ;
    ecx = MEM32(edi + 0x88C0);
    PUSH32(esp, esi);
    esi = edi + 0x88BC;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0014FAA9u); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_0014FAA9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014FAB4; /* jne: not equal / not zero */

loc_0014FAB0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FACE; /* je: equal / zero */

loc_0014FAB4: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    eax = eax + 0x4A;
    PUSH32(esp, ecx);
    eax = eax << 4;
    PUSH32(esp, edx);
    eax = eax + esi;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0014FACEu); RECOMP_ABI_CALL(0x0014FAE0u, sub_0014FAE0); /* call 0x0014FAE0 */

loc_0014FACE: ;
    POP32(esp, esi);

loc_0014FACF: ;
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0014FAE0
 * Original: 0x0014FAE0 - 0x0014FBD2 (242 bytes, 70 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FAE0(void)
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

loc_0014FAE0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi + 0x5F84);
    edi = esi + 0x5F80;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0014FAFEu); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_0014FAFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014FB0D; /* jne: not equal / not zero */

loc_0014FB05: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FBCC; /* je: equal / zero */

loc_0014FB0D: ;
    _fa = (uint32_t)(MEM8(ebx + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xC), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014FBA6; /* je: equal / zero */

loc_0014FB17: ;
    fp_push(MEMF(0x3C7B8C)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0014FB3E; /* jp: parity */

loc_0014FB2A: ;
    ecx = MEM32(0x4577BC);
    edx = MEM32(0x4577B8);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;

loc_0014FB3E: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    MEM32(0x4577BC) = eax;
    MEM32(0x4577B8) = ecx;
    ebx = MEM32(ebx + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014FBCC; /* je: equal / zero */

loc_0014FB58: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0xB9E4); /* fmul dword ptr [esi + 0xb9e4] */
    fp_top() = fp_top() * MEMF(0x3DD250); /* fmul dword ptr [0x3dd250] */
    PUSH32(esp, 0x0014FB6Du); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0014FB6D: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0xB9E4); /* fmul dword ptr [esi + 0xb9e4] */
    MEM8(esp + 0x14) = LO8(eax);
    MEM8(esp + 0x15) = LO8(eax);
    fp_top() = fp_top() * MEMF(0x3DD250); /* fmul dword ptr [0x3dd250] */
    PUSH32(esp, 0x0014FB8Au); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0014FB8A: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    MEM8(esp + 0x1E) = LO8(eax);
    MEM8(esp + 0x1F) = LO8(eax);
    PUSH32(esp, 0x0014FB9Du); RECOMP_ABI_CALL(0x00191E80u, sub_00191E80); /* call 0x00191E80 */

loc_0014FB9D: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0014FBA6: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = MEM32(esp + 0x14);
    fp_top() = fp_top() * MEMF(0x3DD250); /* fmul dword ptr [0x3dd250] */
    MEM32(ebx + 8) = eax;
    PUSH32(esp, 0x0014FBBCu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0014FBBC: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(ebx + 4));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014FBC9u); RECOMP_ABI_CALL(0x0018F6D0u, sub_0018F6D0); /* call 0x0018F6D0 */

loc_0014FBC9: ;
    esp = esp + 8;

loc_0014FBCC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014FBE0
 * Original: 0x0014FBE0 - 0x0014FCE5 (261 bytes, 84 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FBE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014FBE0: ;
    esp = esp - 8;
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0xB9FA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(esp + 4) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_0014FCDE; /* jne: not equal / not zero */

loc_0014FBF8: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0014FBFDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014FBFD: ;
    eax = MEM32(0x55AAF0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    MEM32(0x55AAF0) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0014FCDE; /* je: equal / zero */

loc_0014FC10: ;
    ecx = MEM32(edi + 0x88C0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edi = edi + 0x88BC;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0014FC27u); RECOMP_ABI_CALL(0x00171BB0u, sub_00171BB0); /* call 0x00171BB0 */

loc_0014FC27: ;
    ebx = eax;
    /* nop */

loc_0014FC30: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014FC40; /* jne: not equal / not zero */

loc_0014FC38: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FCD0; /* je: equal / zero */

loc_0014FC40: ;
    PUSH32(esp, ebx);
    ecx = edi;
    ebp = ebx;
    PUSH32(esp, 0x0014FC4Au); RECOMP_ABI_CALL(0x000EA8E0u, sub_000EA8E0); /* call 0x000EA8E0 */

loc_0014FC4A: ;
    esi = ebp + 0x4A;
    esi = esi << 4;
    esi = esi + edi;
    ebx = eax;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014FC30; /* je: equal / zero */

loc_0014FC5A: ;
    eax = MEM32(esi + 4);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014FC68u); RECOMP_ABI_CALL(0x00191C40u, sub_00191C40); /* call 0x00191C40 */

loc_0014FC68: ;
    eax = MEM32(esp + 0x1C);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FC98; /* je: equal / zero */

loc_0014FC74: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FC98; /* je: equal / zero */

loc_0014FC79: ;
    ecx = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(ecx + 0xB9EC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014FC30; /* je: equal / zero */

loc_0014FC87: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014FC96u); RECOMP_ABI_CALL(0x0014FAE0u, sub_0014FAE0); /* call 0x0014FAE0 */

loc_0014FC96: ;
    goto loc_0014FC30;

loc_0014FC98: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014FCB7; /* je: equal / zero */

loc_0014FC9E: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014FCB7; /* jne: not equal / not zero */

loc_0014FCA6: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014FCAFu); RECOMP_ABI_CALL(0x00191C60u, sub_00191C60); /* call 0x00191C60 */

loc_0014FCAF: ;
    esp = esp + 4;
    goto loc_0014FC30;

loc_0014FCB7: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x0014FCBFu); RECOMP_ABI_CALL(0x00199920u, sub_00199920); /* call 0x00199920 */

loc_0014FCBF: ;
    PUSH32(esp, ebp);
    ecx = edi + 0x4A0;
    PUSH32(esp, 0x0014FCCBu); RECOMP_ABI_CALL(0x0014FCF0u, sub_0014FCF0); /* call 0x0014FCF0 */

loc_0014FCCB: ;
    goto loc_0014FC30;

loc_0014FCD0: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(ecx + 0xB9EC) = 0;
    POP32(esp, ebx);

loc_0014FCDE: ;
    POP32(esp, edi);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014FCF0
 * Original: 0x0014FCF0 - 0x0014FD2D (61 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FCF0(void)
{

loc_0014FCF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    esi = ecx;
    eax = eax << 4;
    eax = eax + esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014FD05u); RECOMP_ABI_CALL(0x0014E640u, sub_0014E640); /* call 0x0014E640 */

loc_0014FD05: ;
    ecx = edi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = esi + ecx * 4 + 0x390;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    esp = esp + 4;
    POP32(esp, edi);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014FD30
 * Original: 0x0014FD30 - 0x0014FD98 (104 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FD30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014FD30: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0xB9FA));
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014FD8E; /* jne: not equal / not zero */

loc_0014FD43: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014FD83; /* je: equal / zero */

loc_0014FD4C: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FD83; /* je: equal / zero */

loc_0014FD51: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014FD57u); RECOMP_ABI_CALL(0x00123C30u, sub_00123C30); /* call 0x00123C30 */

loc_0014FD57: ;
    esp = esp + 4;
    ecx = esp + 0xC;
    PUSH32(esp, 0x0014FD63u); RECOMP_ABI_CALL(0x0014FDA0u, sub_0014FDA0); /* call 0x0014FDA0 */

loc_0014FD63: ;
    edi = edi + 0xA964;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0014FD74u); RECOMP_ABI_CALL(0x0014FDC0u, sub_0014FDC0); /* call 0x0014FDC0 */

loc_0014FD74: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014FD83; /* je: equal / zero */

loc_0014FD78: ;
    POP32(esp, esi);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_0014FD83: ;
    POP32(esp, esi);
    POP32(esp, edi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_0014FD8E: ;
    POP32(esp, edi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014FDA0
 * Original: 0x0014FDA0 - 0x0014FDB7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FDA0(void)
{

loc_0014FDA0: ;
    eax = ecx;
    SET_LO8(edx, MEM8(eax + 8));
    ecx = 0; /* xor self */
    SET_LO8(edx, LO8(edx) & 0xF8);
    MEM16(eax) = LO16(ecx);
    MEM32(eax + 4) = ecx;
    MEM8(eax + 8) = LO8(edx);
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0014FDC0
 * Original: 0x0014FDC0 - 0x0014FE85 (197 bytes, 67 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FDC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014FDC0: ;
    esp = esp - 0x104;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x114);
    PUSH32(esp, esi);
    MEM32(esp + 0x10C) = eax;
    eax = MEM32(ebp + 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0014FDE8u); RECOMP_ABI_CALL(0x00171BB0u, sub_00171BB0); /* call 0x00171BB0 */

loc_0014FDE8: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FE6A; /* je: equal / zero */

loc_0014FDF2: ;
    edx = MEM32(esp + 0x118);
    ecx = ebx;
    ecx = ecx << 4;
    SET_LO16(esi, MEM16(ecx + ebp + 0x18));
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014FE09u); RECOMP_ABI_CALL(0x0014FEE0u, sub_0014FEE0); /* call 0x0014FEE0 */

loc_0014FE09: ;
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, 0x3D2C44);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014FE19u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_0014FE19: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0014FE25u); RECOMP_ABI_CALL(0x0014FE90u, sub_0014FE90); /* call 0x0014FE90 */

loc_0014FE25: ;
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014FE2Eu); RECOMP_ABI_CALL(0x00191640u, sub_00191640); /* call 0x00191640 */

loc_0014FE2E: ;
    esp = esp + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014FE66; /* jne: not equal / not zero */

loc_0014FE35: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014FE3Cu); RECOMP_ABI_CALL(0x001915E0u, sub_001915E0); /* call 0x001915E0 */

loc_0014FE3C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014FE66; /* jne: not equal / not zero */

loc_0014FE43: ;
    PUSH32(esp, 0x3DD254);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0014FE4Eu); RECOMP_ABI_CALL(0x0014FE90u, sub_0014FE90); /* call 0x0014FE90 */

loc_0014FE4E: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014FE55u); RECOMP_ABI_CALL(0x001915E0u, sub_001915E0); /* call 0x001915E0 */

loc_0014FE55: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014FE66; /* jne: not equal / not zero */

loc_0014FE5C: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x0014FE64u); RECOMP_ABI_CALL(0x000EA8E0u, sub_000EA8E0); /* call 0x000EA8E0 */

loc_0014FE64: ;
    goto loc_0014FDE8;

loc_0014FE66: ;
    SET_LO8(eax, 1);
    goto loc_0014FE6C;

loc_0014FE6A: ;
    SET_LO8(eax, 0); /* xor self */

loc_0014FE6C: ;
    ecx = MEM32(esp + 0x110);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x0014FE7Cu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0014FE7C: ;
    esp = esp + 0x104;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0014FE90
 * Original: 0x0014FE90 - 0x0014FED4 (68 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014FE90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014FECF; /* je: equal / zero */

loc_0014FEA0: ;
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0014FEAAu); RECOMP_ABI_CALL(0x003428D2u, sub_003428D2); /* call 0x003428D2 */

loc_0014FEAA: ;
    ecx = ZX8(LO8(eax));
    esi = esi << 4;
    esi = esi + ecx;
    eax = esi;
    esp = esp + 4;
    eax = eax & 0xF0000000u;
    if ((eax == 0)) goto loc_0014FEC5; /* je: equal / zero */

loc_0014FEBE: ;
    edx = eax;
    edx = edx >> 0x18;
    esi = esi ^ edx;

loc_0014FEC5: ;
    eax = ~eax;
    esi = esi & eax;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014FEA0; /* jne: not equal / not zero */

loc_0014FECF: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014FEE0
 * Original: 0x0014FEE0 - 0x0014FF39 (89 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014FEE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D2C44);
    PUSH32(esp, 0x55AAF8);
    PUSH32(esp, 0x0014FEF4u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_0014FEF4: ;
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x55AAF8);
    PUSH32(esp, 0x0014FF00u); RECOMP_ABI_CALL(0x003426D0u, sub_003426D0); /* call 0x003426D0 */

loc_0014FF00: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014FF26; /* je: equal / zero */

loc_0014FF07: ;
    goto loc_0014FF10;

    /* nop */

loc_0014FF10: ;
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x55AAF8);
    MEM8(eax) = 0x2F;
    PUSH32(esp, 0x0014FF1Fu); RECOMP_ABI_CALL(0x003426D0u, sub_003426D0); /* call 0x003426D0 */

loc_0014FF1F: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014FF10; /* jne: not equal / not zero */

loc_0014FF26: ;
    PUSH32(esp, 0x55AAF8);
    PUSH32(esp, 0x0014FF30u); RECOMP_ABI_CALL(0x001230C0u, sub_001230C0); /* call 0x001230C0 */

loc_0014FF30: ;
    esp = esp + 4;
    eax = 0x55AAF8;
    esp += 4; return; /* ret */

}

/**
 * sub_0014FF40
 * Original: 0x0014FF40 - 0x0014FFB0 (112 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FF40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014FF40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0xB9FA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014FFA9; /* jne: not equal / not zero */

loc_0014FF4E: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD050)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DD050) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FFA9; /* je: equal / zero */

loc_0014FF5A: ;
    ecx = MEM32(edi + 0x5F84);
    esi = edi + 0x5F80;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0014FF73u); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_0014FF73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014FF7E; /* jne: not equal / not zero */

loc_0014FF7A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FFA9; /* je: equal / zero */

loc_0014FF7E: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    eax = eax << 4;
    PUSH32(esp, edx);
    eax = eax + esi + 0x16F4;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0014FFA4u); RECOMP_ABI_CALL(0x0014FFB0u, sub_0014FFB0); /* call 0x0014FFB0 */

loc_0014FFA4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

loc_0014FFA9: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0014FFB0
 * Original: 0x0014FFB0 - 0x001501BF (527 bytes, 177 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0014FFB0(void)
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

loc_0014FFB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x28;
    eax = MEM32(0x55AAD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_001501B5; /* jne: not equal / not zero */

loc_0014FFC8: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001501B5; /* je: equal / zero */

loc_0014FFD3: ;
    SET_LO8(eax, MEM8(esi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014FFE2; /* je: equal / zero */

loc_0014FFDA: ;
    fp_push(MEMF(ecx + 0xB9E4)); /* fld float */
    goto loc_0014FFE8;

loc_0014FFE2: ;
    fp_push(MEMF(ecx + 0xB9E8)); /* fld float */

loc_0014FFE8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    fp_top() = fp_top() * MEMF(ebp + 0x10); /* fmul dword ptr [ebp + 0x10] */
    MEM8(esp + 0x10) = 0x7F;
    MEM8(esp + 0x14) = 0;
    fp_top() = fp_top() * MEMF(0x3DD250); /* fmul dword ptr [0x3dd250] */
    MEM8(esp + 0x18) = 0;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    if (TEST_Z(_fa, _fb)) goto loc_001500AD; /* je: equal / zero */

loc_0015000C: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150013u); RECOMP_ABI_CALL(0x001501C0u, sub_001501C0); /* call 0x001501C0 */

loc_00150013: ;
    eax = ZX16(MEM16(eax));
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150022u); RECOMP_ABI_CALL(0x001915A0u, sub_001915A0); /* call 0x001915A0 */

loc_00150022: ;
    edi = eax;
    edx = ZX16(MEM16(edi));
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150033u); RECOMP_ABI_CALL(0x00191020u, sub_00191020); /* call 0x00191020 */

loc_00150033: ;
    esi = eax;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x30) = ecx;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x38) = edx;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    MEM32(esp + 0x40) = eax;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    MEM32(esp + 0x50) = 0x3F800000;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015006Fu); RECOMP_ABI_CALL(0x0018FC80u, sub_0018FC80); /* call 0x0018FC80 */

loc_0015006F: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150078u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00150078: ;
    ecx = MEM32(esp + 0x38);
    edx = ZX8(LO8(eax));
    eax = ZX8(MEM8(esp + 0x34));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    edx = edx >> 7;
    PUSH32(esp, ecx);
    MEM8(esp + 0x38) = LO8(edx);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, 0x8000);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001500A0u); RECOMP_ABI_CALL(0x00191EC0u, sub_00191EC0); /* call 0x00191EC0 */

loc_001500A0: ;
    esp = esp + 0x38;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

loc_001500AD: ;
    eax = MEM32(esi + 4);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001500BCu); RECOMP_ABI_CALL(0x00191640u, sub_00191640); /* call 0x00191640 */

loc_001500BC: ;
    edi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015013C; /* je: equal / zero */

loc_001500C5: ;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(eax + 8);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = ecx;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = edx;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEM32(esp + 0x40) = 0x3F800000;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001500FFu); RECOMP_ABI_CALL(0x0018FC80u, sub_0018FC80); /* call 0x0018FC80 */

loc_001500FF: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150108u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00150108: ;
    edx = ZX8(MEM8(esp + 0x24));
    ecx = ZX8(LO8(eax));
    eax = MEM32(esp + 0x2C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    ecx = ecx >> 7;
    MEM8(esp + 0x24) = LO8(ecx);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015012Fu); RECOMP_ABI_CALL(0x0018F180u, sub_0018F180); /* call 0x0018F180 */

loc_0015012F: ;
    esp = esp + 0x24;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

loc_0015013C: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150143u); RECOMP_ABI_CALL(0x001501C0u, sub_001501C0); /* call 0x001501C0 */

loc_00150143: ;
    esi = eax;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x20) = ecx;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    MEM32(esp + 0x28) = edx;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEM32(esp + 0x30) = eax;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 0x40) = 0x3F800000;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015017Eu); RECOMP_ABI_CALL(0x0018FC80u, sub_0018FC80); /* call 0x0018FC80 */

loc_0015017E: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00150187u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00150187: ;
    ecx = MEM32(esp + 0x2C);
    edx = ZX8(LO8(eax));
    eax = ZX8(MEM8(esp + 0x24));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    PUSH32(esp, 1);
    edx = edx >> 7;
    PUSH32(esp, ecx);
    MEM8(esp + 0x2C) = LO8(edx);
    edx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001501B2u); RECOMP_ABI_CALL(0x00190BA0u, sub_00190BA0); /* call 0x00190BA0 */

loc_001501B2: ;
    esp = esp + 0x2C;

loc_001501B5: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0015000E
 * Original: 0x0015000E - 0x001501BF (433 bytes, 150 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015000E(void)
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

loc_0015000E: ;
    PUSH32(esp, 0x00150013u); RECOMP_ABI_CALL(0x001501C0u, sub_001501C0); /* call 0x001501C0 */

loc_00150013: ;
    eax = ZX16(MEM16(eax));
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00150022u); RECOMP_ABI_CALL(0x001915A0u, sub_001915A0); /* call 0x001915A0 */

loc_00150022: ;
    edi = eax;
    edx = ZX16(MEM16(edi));
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00150033u); RECOMP_ABI_CALL(0x00191020u, sub_00191020); /* call 0x00191020 */

loc_00150033: ;
    esi = eax;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x30) = ecx;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x38) = edx;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    MEM32(esp + 0x40) = eax;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    MEM32(esp + 0x50) = 0x3F800000;
    PUSH32(esp, 0x0015006Fu); RECOMP_ABI_CALL(0x0018FC80u, sub_0018FC80); /* call 0x0018FC80 */

loc_0015006F: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    PUSH32(esp, 0x00150078u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00150078: ;
    ecx = MEM32(esp + 0x38);
    edx = ZX8(LO8(eax));
    eax = ZX8(MEM8(esp + 0x34));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    edx = edx >> 7;
    PUSH32(esp, ecx);
    MEM8(esp + 0x38) = LO8(edx);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, 0x8000);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001500A0u); RECOMP_ABI_CALL(0x00191EC0u, sub_00191EC0); /* call 0x00191EC0 */

loc_001500A0: ;
    esp = esp + 0x38;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    edi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015013C; /* je: equal / zero */

loc_001500C5: ;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(eax + 8);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = ecx;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = edx;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEM32(esp + 0x40) = 0x3F800000;
    PUSH32(esp, 0x001500FFu); RECOMP_ABI_CALL(0x0018FC80u, sub_0018FC80); /* call 0x0018FC80 */

loc_001500FF: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    PUSH32(esp, 0x00150108u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00150108: ;
    edx = ZX8(MEM8(esp + 0x24));
    ecx = ZX8(LO8(eax));
    eax = MEM32(esp + 0x2C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    ecx = ecx >> 7;
    MEM8(esp + 0x24) = LO8(ecx);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015012Fu); RECOMP_ABI_CALL(0x0018F180u, sub_0018F180); /* call 0x0018F180 */

loc_0015012F: ;
    esp = esp + 0x24;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

loc_0015013C: ;
    ecx = esi;
    PUSH32(esp, 0x00150143u); RECOMP_ABI_CALL(0x001501C0u, sub_001501C0); /* call 0x001501C0 */

loc_00150143: ;
    esi = eax;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x20) = ecx;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    MEM32(esp + 0x28) = edx;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEM32(esp + 0x30) = eax;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 0x40) = 0x3F800000;
    PUSH32(esp, 0x0015017Eu); RECOMP_ABI_CALL(0x0018FC80u, sub_0018FC80); /* call 0x0018FC80 */

loc_0015017E: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    PUSH32(esp, 0x00150187u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00150187: ;
    ecx = MEM32(esp + 0x2C);
    edx = ZX8(LO8(eax));
    eax = ZX8(MEM8(esp + 0x24));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    PUSH32(esp, 1);
    edx = edx >> 7;
    PUSH32(esp, ecx);
    MEM8(esp + 0x2C) = LO8(edx);
    edx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001501B2u); RECOMP_ABI_CALL(0x00190BA0u, sub_00190BA0); /* call 0x00190BA0 */

loc_001501B2: ;
    esp = esp + 0x2C;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001501C0
 * Original: 0x001501C0 - 0x001502C2 (258 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001501C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001501C0: ;
    esp = esp - 0x104;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0x108) = eax;
    SET_LO8(eax, MEM8(esi + 8));
    ebp = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015029B; /* je: equal / zero */

loc_001501E3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    PUSH32(esp, 0x3DD290);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001501F7u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_001501F7: ;
    edx = MEM32(esi + 4);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00150205u); RECOMP_ABI_CALL(0x0014FE90u, sub_0014FE90); /* call 0x0014FE90 */

loc_00150205: ;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00150211u); RECOMP_ABI_CALL(0x001915E0u, sub_001915E0); /* call 0x001915E0 */

loc_00150211: ;
    edi = eax;
    esp = esp + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00150269; /* je: equal / zero */

loc_0015021A: ;
    /* nop */

loc_00150220: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00150228u); RECOMP_ABI_CALL(0x001233C0u, xml1_guest_random_integer_range); /* call 0x001233C0 */

loc_00150228: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00150231; /* jne: not equal / not zero */

loc_0015022F: ;
    ebp = edi;

loc_00150231: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x3DD290);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00150242u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00150242: ;
    eax = MEM32(esi + 4);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00150250u); RECOMP_ABI_CALL(0x0014FE90u, sub_0014FE90); /* call 0x0014FE90 */

loc_00150250: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0015025Cu); RECOMP_ABI_CALL(0x001915E0u, sub_001915E0); /* call 0x001915E0 */

loc_0015025C: ;
    edi = eax;
    esp = esp + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00150220; /* jne: not equal / not zero */

loc_00150265: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00150282; /* jne: not equal / not zero */

loc_00150269: ;
    eax = MEM32(esi + 4);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3DD264);
    PUSH32(esp, 0x0015027Fu); RECOMP_ABI_CALL(0x00342EF1u, sub_00342EF1); /* call 0x00342EF1 */

loc_0015027F: ;
    esp = esp + 0x14;

loc_00150282: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x100);
    PUSH32(esp, 0x00150294u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00150294: ;
    esp = esp + 0x104;
    esp += 4; return; /* ret */

loc_0015029B: ;
    ecx = MEM32(esi + 4);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(esi));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001502AAu); RECOMP_ABI_CALL(0x001915E0u, sub_001915E0); /* call 0x001915E0 */

loc_001502AA: ;
    ecx = MEM32(esp + 0x110);
    esp = esp + 8;
    POP32(esp, esi);
    POP32(esp, ebp);
    PUSH32(esp, 0x001502BBu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_001502BB: ;
    esp = esp + 0x104;
    esp += 4; return; /* ret */

}

/**
 * sub_001502D0
 * Original: 0x001502D0 - 0x0015035B (139 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001502D0(void)
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

loc_001502D0: ;
    PUSH32(esp, edi);
    edi = ecx;
    fp_push(MEMF(edi + 0xB9E8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001502EC; /* jp: parity */

loc_001502E6: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_001502EC: ;
    SET_LO8(eax, MEM8(edi + 0xB9FA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_00150354; /* jne: not equal / not zero */

loc_001502F7: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD050)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DD050) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150354; /* je: equal / zero */

loc_00150303: ;
    ecx = MEM32(edi + 0x5F84);
    esi = edi + 0x5F80;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0015031Cu); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_0015031C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00150327; /* jne: not equal / not zero */

loc_00150323: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150354; /* je: equal / zero */

loc_00150327: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x3F800000);
    ecx = edi + 0xB9C8;
    eax = eax << 4;
    PUSH32(esp, ecx);
    edx = eax + esi + 0x16F4;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0015034Fu); RECOMP_ABI_CALL(0x0014FFB0u, sub_0014FFB0); /* call 0x0014FFB0 */

loc_0015034F: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_00150354: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}



/**
 * sub_001503C0
 * Original: 0x001503C0 - 0x00150441 (129 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001503C0(void)
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

loc_001503C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xB9FA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0015043D; /* jne: not equal / not zero */

loc_001503CD: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD054)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DD054) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015043D; /* je: equal / zero */

loc_001503D9: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x001503E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001503E1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015043D; /* je: equal / zero */

loc_001503E5: ;
    eax = MEM32(esi + 0x88C0);
    PUSH32(esp, edi);
    edi = esi + 0x88BC;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001503FFu); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_001503FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015040A; /* jne: not equal / not zero */

loc_00150406: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015043C; /* je: equal / zero */

loc_0015040A: ;
    esi = eax + 0x4A;
    esi = esi << 4;
    SET_LO8(eax, MEM8(esi + edi + 0xC));
    esi = esi + edi;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0015043C; /* jne: not equal / not zero */

loc_0015041A: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 8); /* fmul dword ptr [esi + 8] */
    fp_top() = fp_top() * MEMF(0x3DD250); /* fmul dword ptr [0x3dd250] */
    PUSH32(esp, 0x0015042Cu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0015042C: ;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(esi + 4));
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00150439u); RECOMP_ABI_CALL(0x0018F6D0u, sub_0018F6D0); /* call 0x0018F6D0 */

loc_00150439: ;
    esp = esp + 8;

loc_0015043C: ;
    POP32(esp, edi);

loc_0015043D: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00150450
 * Original: 0x00150450 - 0x001504EE (158 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150450: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    eax = MEM32(ebx + 0x5F84);
    esi = ebx + 0x5F80;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0015046Eu); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_0015046E: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015047C; /* jne: not equal / not zero */

loc_00150478: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001504E6; /* je: equal / zero */

loc_0015047C: ;
    edx = edi;
    edx = edx << 4;
    eax = edx + esi + 0x16F4;
    edx = MEM32(eax + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(eax + 0xC) = edx;
    if (CMP_G(_fas & _fbs, 0)) goto loc_001504DE; /* jg: greater (signed >) */

loc_00150495: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0015049Du); RECOMP_ABI_CALL(0x00199920u, sub_00199920); /* call 0x00199920 */

loc_0015049D: ;
    PUSH32(esp, edi);
    ecx = esi + 0x16F4;
    PUSH32(esp, 0x001504A9u); RECOMP_ABI_CALL(0x001504F0u, sub_001504F0); /* call 0x001504F0 */

loc_001504A9: ;
    eax = MEM32(ebx + 0xC);
    esi = ebx + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001504B7u); RECOMP_ABI_CALL(0x000B3CB0u, sub_000B3CB0); /* call 0x000B3CB0 */

loc_001504B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001504C2; /* jne: not equal / not zero */

loc_001504BE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001504E6; /* je: equal / zero */

loc_001504C2: ;
    ecx = MEM32(esi + eax * 4 + 0x5AEC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x10) (32-bit) */
    PUSH32(esp, eax);
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001504D9; /* je: equal / zero */

loc_001504D2: ;
    PUSH32(esp, 0x001504D7u); RECOMP_ABI_CALL(0x00026010u, sub_00026010); /* call 0x00026010 */

loc_001504D7: ;
    goto loc_001504B7;

loc_001504D9: ;
    PUSH32(esp, 0x001504DEu); RECOMP_ABI_CALL(0x00199920u, sub_00199920); /* call 0x00199920 */

loc_001504DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001504E6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001504F0
 * Original: 0x001504F0 - 0x00150517 (39 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001504F0(void)
{

loc_001504F0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = eax + edx * 4 + 0x1220;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00150520
 * Original: 0x00150520 - 0x0015059B (123 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150520: ;
    esp = esp - 0x44;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    MEM32(esp + 0x44) = eax;
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edi = ecx;
    PUSH32(esp, 0x0015053Au); RECOMP_ABI_CALL(0x00123C30u, sub_00123C30); /* call 0x00123C30 */

loc_0015053A: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00150547u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_00150547: ;
    edx = MEM32(edi + 0xC);
    esi = edi + 8;
    esp = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0015055Du); RECOMP_ABI_CALL(0x000B3C30u, sub_000B3C30); /* call 0x000B3C30 */

loc_0015055D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00150568; /* jne: not equal / not zero */

loc_00150564: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150588; /* je: equal / zero */

loc_00150568: ;
    eax = MEM32(esi + eax * 4 + 0x5AEC);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00150577u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00150577: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, 0x00150582u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00150582: ;
    esp = esp + 0x44;
    esp += 8; return; /* ret 4 */

loc_00150588: ;
    ecx = MEM32(esp + 0x48);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    PUSH32(esp, 0x00150595u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00150595: ;
    esp = esp + 0x44;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001505A0
 * Original: 0x001505A0 - 0x001505DF (63 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001505A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001505A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD054)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DD054) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001505B1; /* jne: not equal / not zero */

loc_001505AC: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

loc_001505B1: ;
    PUSH32(esp, esi);
    esi = ecx + 0x88BC;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001505C8u); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_001505C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001505D3; /* jne: not equal / not zero */

loc_001505CF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001505D9; /* je: equal / zero */

loc_001505D3: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001505D9: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001505E0
 * Original: 0x001505E0 - 0x00150622 (66 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001505E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001505E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xB9FA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0015061C; /* jne: not equal / not zero */

loc_001505ED: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001505F7u); RECOMP_ABI_CALL(0x00150630u, sub_00150630); /* call 0x00150630 */

loc_001505F7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DD2A4);
    PUSH32(esp, 0x55ABF8);
    PUSH32(esp, 0x00150607u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00150607: ;
    esp = esp + 0xC;
    PUSH32(esp, 0);
    PUSH32(esp, 0x55ABF8);
    ecx = esi;
    PUSH32(esp, 0x00150618u); RECOMP_ABI_CALL(0x0014EDB0u, sub_0014EDB0); /* call 0x0014EDB0 */

loc_00150618: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0015061C: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00150630
 * Original: 0x00150630 - 0x001506B3 (131 bytes, 45 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150630: ;
    eax = MEM32(0x3DD2AC);
    edx = MEM32(0x3DD2B4);
    ecx = MEM32(0x3DD2B0);
    MEM32(0x55ACF8) = eax;
    SET_LO8(eax, MEM8(0x3DD2B8));
    MEM8(0x55AD04) = LO8(eax);
    eax = MEM32(esp + 4);
    MEM32(0x55AD00) = edx;
    MEM32(0x55ACFC) = ecx;
    edx = eax;

loc_00150662: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00150662; /* jne: not equal / not zero */

loc_00150669: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x55ACF8;
    eax = eax - edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00150673: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00150673; /* jne: not equal / not zero */

loc_0015067B: ;
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
    PUSH32(esp, 2);
    PUSH32(esp, 0x55ACF8);
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    PUSH32(esp, 0x00150697u); RECOMP_ABI_CALL(0x00123E90u, sub_00123E90); /* call 0x00123E90 */

loc_00150697: ;
    esp = esp + 8;
    POP32(esp, edi);
    edx = 0x55ACF8;
    POP32(esp, esi);

loc_001506A1: ;
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
    if (TEST_NZ(_fa, _fb)) goto loc_001506A1; /* jne: not equal / not zero */

loc_001506AB: ;
    eax = 0x55ACF8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001506C0
 * Original: 0x001506C0 - 0x00150705 (69 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001506C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001506C0: ;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    esi = ecx + 8;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001506D0u); RECOMP_ABI_CALL(0x000B3CB0u, sub_000B3CB0); /* call 0x000B3CB0 */

loc_001506D0: ;
    edi = MEM32(esp + 0xC);

loc_001506D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001506DF; /* jne: not equal / not zero */

loc_001506DB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001506FE; /* je: equal / zero */

loc_001506DF: ;
    _fa = (uint32_t)(MEM32(esi + eax * 4 + 0x5AEC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + eax * 4 + 0x5AEC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001506F2; /* je: equal / zero */

loc_001506E8: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001506F0u); RECOMP_ABI_CALL(0x00026010u, sub_00026010); /* call 0x00026010 */

loc_001506F0: ;
    goto loc_001506D4;

loc_001506F2: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    POP32(esp, edi);
    eax = eax + esi + 0x18;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001506FE: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00150710
 * Original: 0x00150710 - 0x00150906 (502 bytes, 150 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150710(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00150710: ;
    esp = esp - 0x150;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0x150) = eax;
    SET_LO8(eax, MEM8(esi + 0xB9FA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001508EB; /* jne: not equal / not zero */

loc_00150733: ;
    eax = MEM32(esp + 0x158);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001508EB; /* je: equal / zero */

loc_00150742: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001508EB; /* je: equal / zero */

loc_0015074B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00150753u); RECOMP_ABI_CALL(0x00123C30u, sub_00123C30); /* call 0x00123C30 */

loc_00150753: ;
    edi = esi + 0xB9BC;
    ebp = eax;
    SET_LO8(eax, MEM8(edi));
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001507A4; /* je: equal / zero */

loc_00150764: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x3DD2D0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00150771u); RECOMP_ABI_CALL(0x00343655u, sub_00343655); /* call 0x00343655 */

loc_00150771: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015078C; /* je: equal / zero */

loc_00150778: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x3DD2C4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00150785u); RECOMP_ABI_CALL(0x00343655u, sub_00343655); /* call 0x00343655 */

loc_00150785: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001507A4; /* jne: not equal / not zero */

loc_0015078C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    eax = esp + 0x60;
    PUSH32(esp, 0x3DD2BC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015079Du); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_0015079D: ;
    esp = esp + 0x10;
    ebp = esp + 0x58;

loc_001507A4: ;
    PUSH32(esp, 0x40);
    ecx = esp + 0x1C;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001507B1u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_001507B1: ;
    edx = MEM32(esi + 0xC);
    edi = esi + 8;
    esp = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001507C7u); RECOMP_ABI_CALL(0x000B3C30u, sub_000B3C30); /* call 0x000B3C30 */

loc_001507C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001507D2; /* jne: not equal / not zero */

loc_001507CE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150832; /* je: equal / zero */

loc_001507D2: ;
    ecx = MEM32(edi + eax * 4 + 0x5AEC);
    edx = MEM32(esi + 0x5F84);
    esi = esi + 0x5F80;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001507F6u); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_001507F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00150801; /* jne: not equal / not zero */

loc_001507FD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150816; /* je: equal / zero */

loc_00150801: ;
    eax = eax << 4;
    ecx = MEM32(eax + esi + 0x1700);
    eax = eax + esi + 0x16F4;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0xC) = ecx;

loc_00150816: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x14C);
    PUSH32(esp, 0x00150829u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00150829: ;
    esp = esp + 0x150;
    esp += 16; return; /* ret 12 */

loc_00150832: ;
    ecx = MEM32(esi + 0x7670);
    eax = 0x122;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150849; /* je: equal / zero */

loc_00150841: ;
    _fa = (uint32_t)(MEM32(esi + 0x5AF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x5AF0), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00150866; /* jne: not equal / not zero */

loc_00150849: ;
    eax = MEM32(0x3DD050);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x14C);
    PUSH32(esp, 0x0015085Du); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0015085D: ;
    esp = esp + 0x150;
    esp += 16; return; /* ret 12 */

loc_00150866: ;
    PUSH32(esp, ebx);
    ebx = esi + 0x90F4;
    ecx = esi + 0x5F80;
    PUSH32(esp, ebx);
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, 0x0015087Du); RECOMP_ABI_CALL(0x00150C00u, sub_00150C00); /* call 0x00150C00 */

loc_0015087D: ;
    ecx = MEM32(esp + 0x16C);
    PUSH32(esp, ecx);
    esi = esi + 0xA964;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = eax;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x00150898u); RECOMP_ABI_CALL(0x00150960u, sub_00150960); /* call 0x00150960 */

loc_00150898: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001508C4; /* jne: not equal / not zero */

loc_0015089C: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001508A6u); RECOMP_ABI_CALL(0x00150910u, sub_00150910); /* call 0x00150910 */

loc_001508A6: ;
    eax = MEM32(0x3DD050);

loc_001508AB: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x14C);
    PUSH32(esp, 0x001508BBu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_001508BB: ;
    esp = esp + 0x150;
    esp += 16; return; /* ret 12 */

loc_001508C4: ;
    eax = MEM32(ebx);
    MEM32(esp + 0x10) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esp + 0x10;
    MEM32(ebx) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001508DEu); RECOMP_ABI_CALL(0x00150AC0u, sub_00150AC0); /* call 0x00150AC0 */

loc_001508DE: ;
    eax = MEM32(esp + 0x14);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esp + 0x10);
    goto loc_001508AB;

loc_001508EB: ;
    ecx = MEM32(esp + 0x150);
    eax = MEM32(0x3DD050);
    POP32(esp, esi);
    PUSH32(esp, 0x001508FDu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_001508FD: ;
    esp = esp + 0x150;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00150910
 * Original: 0x00150910 - 0x0015095B (75 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150910: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00150924u); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_00150924: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150956; /* je: equal / zero */

loc_0015092E: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00150936u); RECOMP_ABI_CALL(0x00199920u, sub_00199920); /* call 0x00199920 */

loc_00150936: ;
    edx = esi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = edi + edx * 4 + 0x2914;
    ecx = esi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;

loc_00150956: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00150960
 * Original: 0x00150960 - 0x00150AB1 (337 bytes, 107 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150960(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00150960: ;
    esp = esp - 0x10C;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(edx, MEM8(esi + 8));
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x124);
    SET_LO8(edx, LO8(edx) & 0xFD);
    MEM32(esp + 0x118) = eax;
    MEM8(esi + 8) = LO8(edx);
    eax = MEM32(edi + 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00150993u); RECOMP_ABI_CALL(0x00171BB0u, sub_00171BB0); /* call 0x00171BB0 */

loc_00150993: ;
    MEM32(esp + 0x10) = eax;
    goto loc_001509A0;

    /* nop */

loc_001509A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150AAD; /* je: equal / zero */

loc_001509AB: ;
    ecx = MEM32(esp + 0x120);
    eax = eax << 4;
    SET_LO16(ebp, MEM16(eax + edi + 0x18));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001509C0u); RECOMP_ABI_CALL(0x0014FEE0u, sub_0014FEE0); /* call 0x0014FEE0 */

loc_001509C0: ;
    PUSH32(esp, eax);
    edx = esp + 0x20;
    PUSH32(esp, 0x3D2C44);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001509D0u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_001509D0: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001509DCu); RECOMP_ABI_CALL(0x0014FE90u, sub_0014FE90); /* call 0x0014FE90 */

loc_001509DC: ;
    edi = eax;
    SET_LO8(eax, MEM8(esi + 8));
    esp = esp + 0x18;
    SET_LO8(eax, LO8(eax) & 0xFB);
    MEM8(esi + 8) = LO8(eax);
    /* nop */

loc_001509F0: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001509F7u); RECOMP_ABI_CALL(0x00191640u, sub_00191640); /* call 0x00191640 */

loc_001509F7: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ebx = eax;
    PUSH32(esp, 0x00150A00u); RECOMP_ABI_CALL(0x001915E0u, sub_001915E0); /* call 0x001915E0 */

loc_00150A00: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00150A4A; /* jne: not equal / not zero */

loc_00150A07: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00150A4A; /* jne: not equal / not zero */

loc_00150A0B: ;
    SET_LO8(eax, MEM8(esi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00150A29; /* jne: not equal / not zero */

loc_00150A12: ;
    SET_LO8(eax, LO8(eax) | 4);
    PUSH32(esp, 0x3DD254);
    PUSH32(esp, edi);
    MEM8(esi + 8) = LO8(eax);
    PUSH32(esp, 0x00150A22u); RECOMP_ABI_CALL(0x0014FE90u, sub_0014FE90); /* call 0x0014FE90 */

loc_00150A22: ;
    esp = esp + 8;
    edi = eax;
    goto loc_001509F0;

loc_00150A29: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x128);
    PUSH32(esp, 0x00150A3Au); RECOMP_ABI_CALL(0x000EA8E0u, sub_000EA8E0); /* call 0x000EA8E0 */

loc_00150A3A: ;
    edi = MEM32(esp + 0x124);
    MEM32(esp + 0x10) = eax;
    goto loc_001509A0;

loc_00150A4A: ;
    PUSH32(esp, ebp);
    MEM16(esi) = LO16(ebp);
    PUSH32(esp, 0x00150A53u); RECOMP_ABI_CALL(0x00190F90u, sub_00190F90); /* call 0x00190F90 */

loc_00150A53: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, MEM8(esi + 8));
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) << 1);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(ebx, LO8(eax));
    eax = esp + 0x1C;
    SET_LO8(edx, LO8(edx) & 2);
    PUSH32(esp, eax);
    SET_LO8(ebx, LO8(ebx) ^ LO8(edx));
    PUSH32(esp, 0);
    MEM8(esi + 8) = LO8(ebx);
    PUSH32(esp, 0x00150A75u); RECOMP_ABI_CALL(0x0014FE90u, sub_0014FE90); /* call 0x0014FE90 */

loc_00150A75: ;
    SET_LO8(ecx, MEM8(esi + 8));
    SET_LO8(ebx, MEM8(esp + 0x134));
    MEM32(esi + 4) = eax;
    SET_LO8(eax, MEM8(esi + 8));
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 1);
    esp = esp + 0xC;
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    MEM8(esi + 8) = LO8(eax);
    SET_LO8(eax, 1);

loc_00150A94: ;
    ecx = MEM32(esp + 0x118);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x00150AA4u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00150AA4: ;
    esp = esp + 0x10C;
    esp += 16; return; /* ret 12 */

loc_00150AAD: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_00150A94;

}

/**
 * sub_00150AC0
 * Original: 0x00150AC0 - 0x00150AE8 (40 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150AC0(void)
{

loc_00150AC0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00150ACDu); RECOMP_ABI_CALL(0x00150B30u, sub_00150B30); /* call 0x00150B30 */

loc_00150ACD: ;
    ecx = esi;
    PUSH32(esp, 0x00150AD4u); RECOMP_ABI_CALL(0x00150AF0u, sub_00150AF0); /* call 0x00150AF0 */

loc_00150AD4: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esi + 8);
    eax = MEM32(ecx);
    MEM32(esi + edx * 4 + 0x5AEC) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00150AF0
 * Original: 0x00150AF0 - 0x00150B30 (64 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150AF0(void)
{

loc_00150AF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = esi + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00150AFDu); RECOMP_ABI_CALL(0x001994F0u, sub_001994F0); /* call 0x001994F0 */

loc_00150AFD: ;
    eax = MEM32(edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    ecx = MEM32(eax + esi + 0xC);
    eax = eax + esi + 0xC;
    ecx = ecx & 0xBFFFFFFFu;
    MEM32(eax) = ecx;
    ecx = MEM32(edi);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x4C);
    edx = MEM32(ecx + esi + 0xC);
    eax = ecx + esi + 0xC;
    edx = edx & 0x40000000;
    edx = edx | 0x3FFFFFFF;
    POP32(esp, edi);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00150B30
 * Original: 0x00150B30 - 0x00150B7A (74 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150B30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00150B30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = edi + 0xC;
    ecx = ebx;
    PUSH32(esp, 0x00150B40u); RECOMP_ABI_CALL(0x00150B80u, sub_00150B80); /* call 0x00150B80 */

loc_00150B40: ;
    ebp = eax;
    eax = MEM32(esp + 0x14);
    esi = ebp;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x4C);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    ecx = esi + ebx + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00150B58u); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_00150B58: ;
    MEM32(edi + 8) = ebp;
    esp = esp + 0xC;
    eax = 0x3FFFFFFF;
    MEM32(esi + edi + 0x10) = eax;
    MEM32(esi + edi + 0x14) = eax;
    MEM32(esi + edi + 0xC) = 0x7FFFFFFF;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00150B80
 * Original: 0x00150B80 - 0x00150BCA (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150B80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150B80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x5AAC);
    eax = esi + 0x561C;
    PUSH32(esp, edi);
    edi = MEM32(eax + ecx * 4);
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(esi + edx * 4 + 0x5AB4);
    edx = esi + edx * 4 + 0x5AB4;
    ecx = ecx | ebx;
    MEM32(edx) = ecx;
    ecx = eax;
    PUSH32(esp, 0x00150BBEu); RECOMP_ABI_CALL(0x00150BD0u, sub_00150BD0); /* call 0x00150BD0 */

loc_00150BBE: ;
    MEM32(esi + 0x5ADC) = MEM32(esi + 0x5ADC) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x5ADC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00150BD0
 * Original: 0x00150BD0 - 0x00150BFC (44 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150BD0: ;
    eax = MEM32(ecx + 0x490);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x490) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x122) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x122 (32-bit) */
    eax = MEM32(ecx + 0x494);
    if (CMP_L(_fas, _fbs)) goto loc_00150BF4; /* jl: less (signed <) */

loc_00150BEA: ;
    MEM32(ecx + 0x490) = 0;

loc_00150BF4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x494) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00150C00
 * Original: 0x00150C00 - 0x00150C33 (51 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150C00(void)
{

loc_00150C00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00150C0Eu); RECOMP_ABI_CALL(0x00150CA0u, sub_00150CA0); /* call 0x00150CA0 */

loc_00150C0E: ;
    ecx = esi;
    PUSH32(esp, 0x00150C15u); RECOMP_ABI_CALL(0x000B8440u, sub_000B8440); /* call 0x000B8440 */

loc_00150C15: ;
    edi = MEM32(esi + 8);
    PUSH32(esp, edi);
    ecx = esi + 0x16F4;
    PUSH32(esp, 0x00150C24u); RECOMP_ABI_CALL(0x00150C40u, sub_00150C40); /* call 0x00150C40 */

loc_00150C24: ;
    edi = edi << 4;
    eax = edi + esi + 0x16F4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00150C40
 * Original: 0x00150C40 - 0x00150C7B (59 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150C40(void)
{

loc_00150C40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    esi = ecx;
    eax = eax << 4;
    eax = eax + esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00150C55u); RECOMP_ABI_CALL(0x00150C80u, sub_00150C80); /* call 0x00150C80 */

loc_00150C55: ;
    ecx = edi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = esi + ecx * 4 + 0x1220;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    esp = esp + 4;
    POP32(esp, edi);
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00150C80
 * Original: 0x00150C80 - 0x00150C9D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150C80: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150C9C; /* je: equal / zero */

loc_00150C8A: ;
    SET_LO8(edx, MEM8(eax + 8));
    SET_LO8(edx, LO8(edx) & 0xF8);
    MEM16(eax) = LO16(ecx);
    MEM32(eax + 4) = ecx;
    MEM8(eax + 8) = LO8(edx);
    MEM32(eax + 0xC) = ecx;

loc_00150C9C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00150CA0
 * Original: 0x00150CA0 - 0x00150CDA (58 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150CA0(void)
{

loc_00150CA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xC;
    ecx = edi;
    PUSH32(esp, 0x00150CAEu); RECOMP_ABI_CALL(0x00150CE0u, sub_00150CE0); /* call 0x00150CE0 */

loc_00150CAE: ;
    edx = MEM32(esp + 0xC);
    edx = MEM32(edx);
    ecx = eax;
    ecx = ecx << 4;
    MEM32(ecx + edi + 0xC) = edx;
    MEM32(esi + 8) = eax;
    eax = 0x3FFFFFFF;
    POP32(esp, edi);
    MEM32(ecx + esi + 0x10) = eax;
    MEM32(ecx + esi + 0x14) = eax;
    MEM32(ecx + esi + 0xC) = 0x7FFFFFFF;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00150CE0
 * Original: 0x00150CE0 - 0x00150D42 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150CE0: ;
    edx = ecx;
    eax = MEM32(edx + 0x16B4);
    eax = MEM32(edx + eax * 4 + 0x1224);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x16BC;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x16B4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x122) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x122 (32-bit) */
    MEM32(edx + 0x16B4) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00150D2C; /* jl: less (signed <) */

loc_00150D22: ;
    MEM32(edx + 0x16B4) = 0;

loc_00150D2C: ;
    MEM32(edx + 0x16B8) = MEM32(edx + 0x16B8) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x16B8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x16E4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x16E4) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00150D50
 * Original: 0x00150D50 - 0x00150E6F (287 bytes, 84 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150D50(void)
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

loc_00150D50: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xB9FB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00150D69; /* je: equal / zero */

loc_00150D60: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

loc_00150D69: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(esi + 0xB9E8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00150D9A; /* jp: parity */

loc_00150D7E: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(esi + 0xB9E4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00150D9A; /* jp: parity */

loc_00150D93: ;
    eax = 1;
    goto loc_00150D9C;

loc_00150D9A: ;
    eax = 0; /* xor self */

loc_00150D9C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esi + 0xB9FA) = LO8(eax);
    if (TEST_NZ(_fa, _fb)) goto loc_00150E5F; /* jne: not equal / not zero */

loc_00150DAA: ;
    eax = 0; /* xor self */
    MEM32(esp + 4) = eax;
    ecx = esp + 4;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x00150DC3u); RECOMP_ABI_CALL(0x00190060u, sub_00190060); /* call 0x00190060 */

loc_00150DC3: ;
    PUSH32(esp, 0x00150DC8u); RECOMP_ABI_CALL(0x0018E8B0u, sub_0018E8B0); /* call 0x0018E8B0 */

loc_00150DC8: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x7D0);
    PUSH32(esp, 0x00150DD4u); RECOMP_ABI_CALL(0x0018F600u, sub_0018F600); /* call 0x0018F600 */

loc_00150DD4: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x00150DDCu); RECOMP_ABI_CALL(0x00191980u, sub_00191980); /* call 0x00191980 */

loc_00150DDC: ;
    MEM8(esi + 4) = 1;
    SET_LO8(eax, 1);
    edi = 0x3DD05C;

loc_00150DE7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3DD064) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3DD064 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00150E19; /* jge: greater or equal (signed >=) */

loc_00150DEF: ;
    edx = MEM32(edi);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00150DF9u); RECOMP_ABI_CALL(0x00150630u, sub_00150630); /* call 0x00150630 */

loc_00150DF9: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00150E01u); RECOMP_ABI_CALL(0x00150E70u, sub_00150E70); /* call 0x00150E70 */

loc_00150E01: ;
    edi = edi + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00150DE7; /* jne: not equal / not zero */

loc_00150E08: ;
    POP32(esp, edi);
    MEM8(esi + 0xB9FB) = 1;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

loc_00150E19: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00150E5E; /* je: equal / zero */

loc_00150E1D: ;
    eax = MEM32(esi);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00150E5Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00150E5E: ;
    POP32(esp, edi);

loc_00150E5F: ;
    MEM8(esi + 0xB9FB) = 1;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00150E70
 * Original: 0x00150E70 - 0x00151079 (521 bytes, 164 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150E70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00150E70: ;
    esp = esp - 0x114;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebp);
    ebp = ecx;
    MEM32(esp + 0x114) = eax;
    SET_LO8(eax, MEM8(ebp + 0xB9FA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00151061; /* jne: not equal / not zero */

loc_00150E93: ;
    eax = MEM32(esp + 0x11C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00150EA5u); RECOMP_ABI_CALL(0x00123C70u, sub_00123C70); /* call 0x00123C70 */

loc_00150EA5: ;
    esp = esp + 8;
    edi = eax;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x00150EB2u); RECOMP_ABI_CALL(0x0014E690u, sub_0014E690); /* call 0x0014E690 */

loc_00150EB2: ;
    ebx = eax;
    PUSH32(esp, 0xA);
    ecx = esp + 0x1A;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEM8(esp + 0x21) = 1;
    PUSH32(esp, 0x00150EC6u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00150EC6: ;
    edx = MEM32(ebp + 0x9100);
    esi = ebp + 0x90FC;
    esp = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x1A;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esp + 0x27) = 0;
    PUSH32(esp, 0x00150EE7u); RECOMP_ABI_CALL(0x0014EA30u, sub_0014EA30); /* call 0x0014EA30 */

loc_00150EE7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00151044; /* jne: not equal / not zero */

loc_00150EF2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00151044; /* jne: not equal / not zero */

loc_00150EFA: ;
    edx = esp + 0x20;
    eax = edi;
    edx = edx - edi;

loc_00150F02: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00150F02; /* jne: not equal / not zero */

loc_00150F0C: ;
    eax = esp + 0x20;
    edx = eax + 1;

loc_00150F13: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00150F13; /* jne: not equal / not zero */

loc_00150F1A: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    eax = eax - edx;
    edx = esp + 0x24;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    MEM8(esp + eax + 0x2B) = 0x53;
    PUSH32(esp, 0x00150F32u); RECOMP_ABI_CALL(0x00191790u, sub_00191790); /* call 0x00191790 */

loc_00150F32: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edi = 0xCE;
    if (TEST_NZ(_fa, _fb)) goto loc_00150FB8; /* jne: not equal / not zero */

loc_00150F3E: ;
    _fa = (uint32_t)(MEM32(ebp + 0xA7C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xA7C0), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150FB8; /* je: equal / zero */

loc_00150F46: ;
    PUSH32(esp, 0xA);
    eax = esp + 0x1A;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00150F53u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00150F53: ;
    esp = esp + 0xC;
    ecx = esp + 0x16;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(esp + 0x23) = 0;
    PUSH32(esp, 0x00150F67u); RECOMP_ABI_CALL(0x001511B0u, sub_001511B0); /* call 0x001511B0 */

loc_00150F67: ;
    ecx = esi;
    PUSH32(esp, 0x00150F6Eu); RECOMP_ABI_CALL(0x001510A0u, sub_001510A0); /* call 0x001510A0 */

loc_00150F6E: ;
    eax = MEM32(esi + 8);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi + 0x16C8;
    PUSH32(esp, 0x00150F82u); RECOMP_ABI_CALL(0x00151080u, sub_00151080); /* call 0x00151080 */

loc_00150F82: ;
    ecx = esp + 0x10;
    esi = ebp + 0xA964;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00150F94u); RECOMP_ABI_CALL(0x001510E0u, sub_001510E0); /* call 0x001510E0 */

loc_00150F94: ;
    ecx = esi;
    PUSH32(esp, 0x00150F9Bu); RECOMP_ABI_CALL(0x000B8440u, sub_000B8440); /* call 0x000B8440 */

loc_00150F9B: ;
    SET_LO8(eax, MEM8(esp + 0x15));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x110);
    PUSH32(esp, 0x00150FAFu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00150FAF: ;
    esp = esp + 0x114;
    esp += 8; return; /* ret 4 */

loc_00150FB8: ;
    eax = esp + 0x20;
    edx = eax + 1;
    /* nop */

loc_00150FC0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00150FC0; /* jne: not equal / not zero */

loc_00150FC7: ;
    eax = eax - edx;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM8(esp + eax + 0x23) = 0x4D;
    eax = esp + 0x24;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00150FDFu); RECOMP_ABI_CALL(0x00191790u, sub_00191790); /* call 0x00191790 */

loc_00150FDF: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0015103F; /* jne: not equal / not zero */

loc_00150FE6: ;
    _fa = (uint32_t)(MEM32(ebp + 0xA7C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xA7C0), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015103F; /* je: equal / zero */

loc_00150FEE: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x1A;
    PUSH32(esp, 0x00150FF8u); RECOMP_ABI_CALL(0x0014E620u, sub_0014E620); /* call 0x0014E620 */

loc_00150FF8: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x1A;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00151009u); RECOMP_ABI_CALL(0x00151270u, sub_00151270); /* call 0x00151270 */

loc_00151009: ;
    eax = esp + 0x10;
    esi = ebp + 0xA964;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0015101Bu); RECOMP_ABI_CALL(0x001510E0u, sub_001510E0); /* call 0x001510E0 */

loc_0015101B: ;
    ecx = esi;
    PUSH32(esp, 0x00151022u); RECOMP_ABI_CALL(0x000B8440u, sub_000B8440); /* call 0x000B8440 */

loc_00151022: ;
    SET_LO8(eax, MEM8(esp + 0x15));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x110);
    PUSH32(esp, 0x00151036u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00151036: ;
    esp = esp + 0x114;
    esp += 8; return; /* ret 4 */

loc_0015103F: ;
    MEM8(esp + 0x15) = 0;

loc_00151044: ;
    SET_LO8(eax, MEM8(esp + 0x15));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x110);
    PUSH32(esp, 0x00151058u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00151058: ;
    esp = esp + 0x114;
    esp += 8; return; /* ret 4 */

loc_00151061: ;
    ecx = MEM32(esp + 0x114);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    PUSH32(esp, 0x00151070u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00151070: ;
    esp = esp + 0x114;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00151080
 * Original: 0x00151080 - 0x0015109A (26 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151080(void)
{

loc_00151080: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    eax = ecx + edx * 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00151094u); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_00151094: ;
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001510A0
 * Original: 0x001510A0 - 0x001510E0 (64 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001510A0(void)
{

loc_001510A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = esi + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001510ADu); RECOMP_ABI_CALL(0x001994F0u, sub_001994F0); /* call 0x001994F0 */

loc_001510AD: ;
    eax = MEM32(edi);
    eax = eax + eax * 2;
    ecx = MEM32(esi + eax * 8 + 0xC);
    eax = esi + eax * 8 + 0xC;
    ecx = ecx & 0xBFFFFFFFu;
    MEM32(eax) = ecx;
    edi = MEM32(edi);
    ecx = edi + edi * 2;
    edx = MEM32(esi + ecx * 8 + 0xC);
    eax = esi + ecx * 8 + 0xC;
    edx = edx & 0x40000000;
    edx = edx | 0x3FFFFFFF;
    POP32(esp, edi);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001510E0
 * Original: 0x001510E0 - 0x0015112A (74 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001510E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001510E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = edi + 0xC;
    ecx = ebx;
    PUSH32(esp, 0x001510F0u); RECOMP_ABI_CALL(0x00151130u, sub_00151130); /* call 0x00151130 */

loc_001510F0: ;
    ebp = eax;
    eax = MEM32(esp + 0x14);
    esi = ebp;
    PUSH32(esp, 2);
    esi = esi << 4;
    PUSH32(esp, eax);
    ecx = esi + ebx + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00151108u); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_00151108: ;
    MEM32(edi + 8) = ebp;
    esp = esp + 0xC;
    eax = 0x3FFFFFFF;
    MEM32(esi + edi + 0x10) = eax;
    MEM32(esi + edi + 0x14) = eax;
    MEM32(esi + edi + 0xC) = 0x7FFFFFFF;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00151130
 * Original: 0x00151130 - 0x0015117A (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151130(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151130: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1024);
    eax = esi + 0xCE4;
    PUSH32(esp, edi);
    edi = MEM32(eax + ecx * 4);
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(esi + edx * 4 + 0x102C);
    edx = esi + edx * 4 + 0x102C;
    ecx = ecx | ebx;
    MEM32(edx) = ecx;
    ecx = eax;
    PUSH32(esp, 0x0015116Eu); RECOMP_ABI_CALL(0x00151180u, sub_00151180); /* call 0x00151180 */

loc_0015116E: ;
    MEM32(esi + 0x1048) = MEM32(esi + 0x1048) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1048)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00151180
 * Original: 0x00151180 - 0x001511AC (44 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151180: ;
    eax = MEM32(ecx + 0x340);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x340) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xCE (32-bit) */
    eax = MEM32(ecx + 0x344);
    if (CMP_L(_fas, _fbs)) goto loc_001511A4; /* jl: less (signed <) */

loc_0015119A: ;
    MEM32(ecx + 0x340) = 0;

loc_001511A4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x344) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001511B0
 * Original: 0x001511B0 - 0x001511FB (75 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001511B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001511B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebp = edi + 0xC;
    ecx = ebp;
    PUSH32(esp, 0x001511C0u); RECOMP_ABI_CALL(0x00151200u, sub_00151200); /* call 0x00151200 */

loc_001511C0: ;
    ebx = eax;
    eax = MEM32(esp + 0x14);
    esi = ebx + ebx * 2;
    PUSH32(esp, 0xA);
    esi = esi << 3;
    PUSH32(esp, eax);
    ecx = esi + ebp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001511D9u); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_001511D9: ;
    MEM32(edi + 8) = ebx;
    esp = esp + 0xC;
    eax = 0x3FFFFFFF;
    MEM32(esi + edi + 0x10) = eax;
    MEM32(esi + edi + 0x14) = eax;
    MEM32(esi + edi + 0xC) = 0x7FFFFFFF;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00151200
 * Original: 0x00151200 - 0x00151262 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151200: ;
    edx = ecx;
    eax = MEM32(edx + 0x1694);
    eax = MEM32(edx + eax * 4 + 0x1354);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x169C;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x1694);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xCE (32-bit) */
    MEM32(edx + 0x1694) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0015124C; /* jl: less (signed <) */

loc_00151242: ;
    MEM32(edx + 0x1694) = 0;

loc_0015124C: ;
    MEM32(edx + 0x1698) = MEM32(edx + 0x1698) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x1698)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x16B8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x16B8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00151270
 * Original: 0x00151270 - 0x0015130C (156 bytes, 53 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151270(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00151270: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = esi + 0xC;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x00151280u); RECOMP_ABI_CALL(0x00151200u, sub_00151200); /* call 0x00151200 */

loc_00151280: ;
    ebx = eax;
    eax = MEM32(esp + 0x14);
    edi = ebx + ebx * 2;
    PUSH32(esp, 0xA);
    edi = edi << 3;
    PUSH32(esp, eax);
    ecx = edi + ebp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00151299u); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_00151299: ;
    MEM32(esi + 8) = ebx;
    ebx = 0x3FFFFFFF;
    MEM32(edi + esi + 0x10) = ebx;
    MEM32(edi + esi + 0x14) = ebx;
    MEM32(edi + esi + 0xC) = 0x7FFFFFFF;
    esp = esp + 0xC;
    edi = esi + 4;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001512BFu); RECOMP_ABI_CALL(0x001994F0u, sub_001994F0); /* call 0x001994F0 */

loc_001512BF: ;
    eax = MEM32(edi);
    edx = eax + eax * 2;
    ebp = MEM32(esi + edx * 8 + 0xC);
    eax = esi + edx * 8 + 0xC;
    edx = MEM32(esp + 0x18);
    ebp = ebp & 0xBFFFFFFFu;
    MEM32(eax) = ebp;
    edi = MEM32(edi);
    eax = edi + edi * 2;
    ecx = MEM32(esi + eax * 8 + 0xC);
    eax = esi + eax * 8 + 0xC;
    ecx = ecx & 0x40000000;
    ecx = ecx | ebx;
    MEM32(eax) = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    ecx = esi + eax * 2 + 0x16C8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00151302u); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_00151302: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00151310
 * Original: 0x00151310 - 0x0015138F (127 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151310: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0xB9FA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00151384; /* jne: not equal / not zero */

loc_0015131F: ;
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD050)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(0x3DD050) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151384; /* je: equal / zero */

loc_0015132B: ;
    eax = MEM32(edi + 0x5F84);
    esi = edi + 0x5F80;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00151344u); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_00151344: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015134F; /* jne: not equal / not zero */

loc_0015134B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151384; /* je: equal / zero */

loc_0015134F: ;
    eax = eax << 4;
    eax = eax + esi + 0x16F4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00151384; /* je: equal / zero */

loc_0015135D: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0015137Eu); RECOMP_ABI_CALL(0x00151390u, sub_00151390); /* call 0x00151390 */

loc_0015137E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

loc_00151384: ;
    eax = MEM32(0x3DD054);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00151390
 * Original: 0x00151390 - 0x0015157B (491 bytes, 171 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00151390(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00151390: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x24));
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x90F8);
    MEM32(esp + 0x10) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x90F8) = eax;
    eax = MEM32(0x55AAD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_001514FF; /* jne: not equal / not zero */

loc_001513C0: ;
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001514EF; /* je: equal / zero */

loc_001513CB: ;
    _fa = (uint32_t)(MEM32(esi + 0x8D58)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x8D58), 0x39 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001514EF; /* je: equal / zero */

loc_001513D8: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi + 0x88BC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001513E8u); RECOMP_ABI_CALL(0x00151630u, sub_00151630); /* call 0x00151630 */

loc_001513E8: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001514EF; /* je: equal / zero */

loc_001513F2: ;
    ecx = MEM32(ebp + 0x24);
    edx = MEM32(ebp + 0x20);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151409u); RECOMP_ABI_CALL(0x00151580u, sub_00151580); /* call 0x00151580 */

loc_00151409: ;
    SET_LO8(ecx, MEM8(edi + 8));
    SET_LO8(edx, MEM8(ebx + 0xC));
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(ecx, MEM8(ebx + 0xC));
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 2);
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    MEM8(ebx + 0xC) = LO8(ecx);
    _fa = (uint32_t)(MEM8(edi + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 8), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0015142A; /* je: equal / zero */

loc_00151422: ;
    fp_push(MEMF(esi + 0xB9E4)); /* fld float */
    goto loc_00151430;

loc_0015142A: ;
    fp_push(MEMF(esi + 0xB9E8)); /* fld float */

loc_00151430: ;
    fp_top() = fp_top() * MEMF(ebp + 0x10); /* fmul dword ptr [ebp + 0x10] */
    SET_LO8(eax, MEM8(edi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    fp_top() = fp_top() * MEMF(0x3DD250); /* fmul dword ptr [0x3dd250] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    if (TEST_Z(_fa, _fb)) goto loc_0015150D; /* je: equal / zero */

loc_00151448: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015144Fu); RECOMP_ABI_CALL(0x001501C0u, sub_001501C0); /* call 0x001501C0 */

loc_0015144F: ;
    eax = ZX16(MEM16(eax));
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(edi));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015145Eu); RECOMP_ABI_CALL(0x001915A0u, sub_001915A0); /* call 0x001915A0 */

loc_0015145E: ;
    esi = eax;
    edx = ZX16(MEM16(esi));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015146Fu); RECOMP_ABI_CALL(0x00191020u, sub_00191020); /* call 0x00191020 */

loc_0015146F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ebx + 4;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151483u); RECOMP_ABI_CALL(0x001919D0u, sub_001919D0); /* call 0x001919D0 */

loc_00151483: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001514EB; /* jne: not equal / not zero */

loc_0015148A: ;
    SET_LO8(eax, MEM8(edi + 8));
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    if (TEST_Z(_fa, _fb)) goto loc_001514A8; /* je: equal / zero */

loc_0015149D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001514A2u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001514A2: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    goto loc_001514B1;

loc_001514A8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001514ADu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001514AD: ;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);

loc_001514B1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001514B6u); RECOMP_ABI_CALL(0x00191CF0u, sub_00191CF0); /* call 0x00191CF0 */

loc_001514B6: ;
    SET_LO8(eax, MEM8(ebp + 0x24));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001514CD; /* je: equal / zero */

loc_001514C0: ;
    eax = MEM32(esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001514CAu); RECOMP_ABI_CALL(0x00191C20u, sub_00191C20); /* call 0x00191C20 */

loc_001514CA: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;

loc_001514CD: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001514D5u); RECOMP_ABI_CALL(0x00191C60u, sub_00191C60); /* call 0x00191C60 */

loc_001514D5: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00151566; /* je: equal / zero */

loc_001514E0: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001514E8u); RECOMP_ABI_CALL(0x00191F50u, sub_00191F50); /* call 0x00191F50 */

loc_001514E8: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;

loc_001514EB: ;
    esi = MEM32(esp + 0x1C);

loc_001514EF: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi + 0x88BC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001514FFu); RECOMP_ABI_CALL(0x001515C0u, sub_001515C0); /* call 0x001515C0 */

loc_001514FF: ;
    eax = MEM32(0x3DD054);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

loc_0015150D: ;
    esi = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00151528; /* je: equal / zero */

loc_00151514: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 8);
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;

loc_00151528: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015152Fu); RECOMP_ABI_CALL(0x001501C0u, sub_001501C0); /* call 0x001501C0 */

loc_0015152F: ;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = esp + 0x20;
    PUSH32(esp, 0);
    _cf = 0; /* logical op clears CF */
    esi = esi & ecx;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151542u); RECOMP_ABI_CALL(0x0018FB10u, sub_0018FB10); /* call 0x0018FB10 */

loc_00151542: ;
    SET_LO16(esi, LO16(eax));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0xFFFF (16-bit) */
    _cf = (int)(_fa < _fb);
    MEM16(ebx + 4) = LO16(esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001514EB; /* je: equal / zero */

loc_00151553: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015155Cu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0015155C: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00151563u); RECOMP_ABI_CALL(0x0018F6D0u, sub_0018F6D0); /* call 0x0018F6D0 */

loc_00151563: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;

loc_00151566: ;
    SET_LO8(eax, MEM8(ebx + 0xC));
    POP32(esp, edi);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 8);
    MEM8(ebx + 0xC) = LO8(eax);
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00151580
 * Original: 0x00151580 - 0x001515BE (62 bytes, 19 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151580: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    SET_LO8(eax, MEM8(esp + 0x10));
    MEM32(ecx + 8) = edx;
    SET_LO8(edx, MEM8(ecx + 0xC));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(edx, LO8(edx) & 0xF8);
    SET_LO8(eax, LO8(eax) << 2);
    SET_LO8(eax, LO8(eax) | LO8(edx));
    SET_LO8(edx, MEM8(esp + 0xC));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(eax, LO8(eax) | LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    MEM32(ecx + 4) = 0;
    MEM8(ecx + 0xC) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_001515BB; /* je: equal / zero */

loc_001515B5: ;
    MEM32(0x55AAD4) = MEM32(0x55AAD4) + 1;
    _fa = (uint32_t)(MEM32(0x55AAD4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001515BB: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001515C0
 * Original: 0x001515C0 - 0x00151626 (102 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001515C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001515C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001515D4u); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_001515D4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151621; /* je: equal / zero */

loc_001515DE: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001515E6u); RECOMP_ABI_CALL(0x00199920u, sub_00199920); /* call 0x00199920 */

loc_001515E6: ;
    edx = esi;
    edx = edx << 4;
    edi = edi + 0x4A0;
    edx = edx + edi;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001515F9u); RECOMP_ABI_CALL(0x0014E640u, sub_0014E640); /* call 0x0014E640 */

loc_001515F9: ;
    ecx = esi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    ecx = MEM32(edi + eax * 4 + 0x390);
    eax = edi + eax * 4 + 0x390;
    edx = ~edx;
    esp = esp + 4;
    ecx = ecx & edx;
    MEM32(eax) = ecx;

loc_00151621: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00151630
 * Original: 0x00151630 - 0x00151661 (49 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151630(void)
{

loc_00151630: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0015163Eu); RECOMP_ABI_CALL(0x00151730u, sub_00151730); /* call 0x00151730 */

loc_0015163E: ;
    ecx = esi;
    PUSH32(esp, 0x00151645u); RECOMP_ABI_CALL(0x000B8440u, sub_000B8440); /* call 0x000B8440 */

loc_00151645: ;
    edi = MEM32(esi + 8);
    PUSH32(esp, edi);
    ecx = esi + 0x4A0;
    PUSH32(esp, 0x00151654u); RECOMP_ABI_CALL(0x00151670u, sub_00151670); /* call 0x00151670 */

loc_00151654: ;
    eax = edi + 0x4A;
    eax = eax << 4;
    POP32(esp, edi);
    eax = eax + esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00151670
 * Original: 0x00151670 - 0x001516AB (59 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151670(void)
{

loc_00151670: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    esi = ecx;
    eax = eax << 4;
    eax = eax + esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00151685u); RECOMP_ABI_CALL(0x001516B0u, sub_001516B0); /* call 0x001516B0 */

loc_00151685: ;
    ecx = edi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = esi + ecx * 4 + 0x390;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    esp = esp + 4;
    POP32(esp, edi);
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001516B0
 * Original: 0x001516B0 - 0x001516F1 (65 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001516B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001516B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353A71);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001516E2; /* je: equal / zero */

loc_001516DD: ;
    PUSH32(esp, 0x001516E2u); RECOMP_ABI_CALL(0x00151700u, sub_00151700); /* call 0x00151700 */

loc_001516E2: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00151700
 * Original: 0x00151700 - 0x00151722 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151700(void)
{

loc_00151700: ;
    eax = ecx;
    ecx = MEM32(0x3DD050);
    MEM32(eax) = ecx;
    SET_LO8(ecx, MEM8(eax + 0xC));
    SET_LO8(ecx, LO8(ecx) & 0xF0);
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x3F800000;
    MEM8(eax + 0xC) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00151730
 * Original: 0x00151730 - 0x0015176A (58 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151730(void)
{

loc_00151730: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xC;
    ecx = edi;
    PUSH32(esp, 0x0015173Eu); RECOMP_ABI_CALL(0x00151770u, sub_00151770); /* call 0x00151770 */

loc_0015173E: ;
    edx = MEM32(esp + 0xC);
    edx = MEM32(edx);
    ecx = eax;
    ecx = ecx << 4;
    MEM32(ecx + edi + 0xC) = edx;
    MEM32(esi + 8) = eax;
    eax = 0x3FFFFFFF;
    POP32(esp, edi);
    MEM32(ecx + esi + 0x10) = eax;
    MEM32(ecx + esi + 0x14) = eax;
    MEM32(ecx + esi + 0xC) = 0x7FFFFFFF;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00151770
 * Original: 0x00151770 - 0x001517BA (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151770: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x480);
    eax = esi + 0x394;
    PUSH32(esp, edi);
    edi = MEM32(eax + ecx * 4);
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(esi + edx * 4 + 0x488);
    edx = esi + edx * 4 + 0x488;
    ecx = ecx | ebx;
    MEM32(edx) = ecx;
    ecx = eax;
    PUSH32(esp, 0x001517AEu); RECOMP_ABI_CALL(0x001517C0u, sub_001517C0); /* call 0x001517C0 */

loc_001517AE: ;
    MEM32(esi + 0x490) = MEM32(esi + 0x490) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x490)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001517C0
 * Original: 0x001517C0 - 0x001517EA (42 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001517C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001517C0: ;
    eax = MEM32(ecx + 0xEC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0xEC) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x39 (32-bit) */
    eax = MEM32(ecx + 0xF0);
    if (CMP_L(_fas, _fbs)) goto loc_001517E2; /* jl: less (signed <) */

loc_001517D8: ;
    MEM32(ecx + 0xEC) = 0;

loc_001517E2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0xF0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001517F0
 * Original: 0x001517F0 - 0x0015187F (143 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001517F0(void)
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

loc_001517F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0xB9FA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00151874; /* jne: not equal / not zero */

loc_001517FF: ;
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD050)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(0x3DD050) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151874; /* je: equal / zero */

loc_0015180B: ;
    fp_push(MEMF(edi + 0xB9E8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00151874; /* jne: not equal / not zero */

loc_0015181E: ;
    eax = MEM32(edi + 0x5F84);
    esi = edi + 0x5F80;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00151837u); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_00151837: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00151842; /* jne: not equal / not zero */

loc_0015183E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151874; /* je: equal / zero */

loc_00151842: ;
    eax = eax << 4;
    eax = eax + esi + 0x16F4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00151874; /* je: equal / zero */

loc_00151850: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0015186Eu); RECOMP_ABI_CALL(0x00151390u, sub_00151390); /* call 0x00151390 */

loc_0015186E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00151874: ;
    eax = MEM32(0x3DD054);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}



/**
 * sub_00151910
 * Original: 0x00151910 - 0x0015193C (44 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151910(void)
{

loc_00151910: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00151924u); RECOMP_ABI_CALL(0x00151940u, sub_00151940); /* call 0x00151940 */

loc_00151924: ;
    MEM32(esi + 0xB9F4) = edi;
    POP32(esp, edi);
    MEM8(esi + 0xB9F8) = LO8(ebx);
    MEM32(esi + 0xB9F0) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00151940
 * Original: 0x00151940 - 0x001519FD (189 bytes, 62 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151940: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xB9FA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00151956; /* je: equal / zero */

loc_0015194D: ;
    eax = MEM32(0x3DD054);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00151956: ;
    eax = MEM32(esi + 0xB9F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD054)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DD054) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151977; /* je: equal / zero */

loc_00151964: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0015196Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0015196C: ;
    eax = MEM32(0x3DD054);
    MEM32(esi + 0xB9F0) = eax;

loc_00151977: ;
    eax = MEM32(0x3DD050);
    _fa = (uint32_t)(MEM32(esi + 0xB9F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xB9F4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015198F; /* je: equal / zero */

loc_00151984: ;
    MEM32(esi + 0xB9F4) = eax;
    eax = MEM32(0x3DD050);

loc_0015198F: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001519F2; /* je: equal / zero */

loc_00151999: ;
    ecx = MEM32(esi + 0x5F84);
    edi = esi + 0x5F80;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x001519B2u); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_001519B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001519BD; /* jne: not equal / not zero */

loc_001519B9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001519F2; /* je: equal / zero */

loc_001519BD: ;
    eax = eax << 4;
    eax = eax + edi + 0x16F4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001519F2; /* je: equal / zero */

loc_001519CB: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001519ECu); RECOMP_ABI_CALL(0x00151390u, sub_00151390); /* call 0x00151390 */

loc_001519EC: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001519F2: ;
    eax = MEM32(0x3DD054);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00151A00
 * Original: 0x00151A00 - 0x00151A8B (139 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151A00: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xB9FA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00151A89; /* jne: not equal / not zero */

loc_00151A0D: ;
    ecx = esi + 0x88C8;
    MEM32(esi + 0x88C0) = 0x3FFFFFFF;
    PUSH32(esp, 0x00151A22u); RECOMP_ABI_CALL(0x00151A90u, sub_00151A90); /* call 0x00151A90 */

loc_00151A22: ;
    ecx = esi + 0x8D5C;
    PUSH32(esp, 0x00151A2Du); RECOMP_ABI_CALL(0x0014E810u, sub_0014E810); /* call 0x0014E810 */

loc_00151A2D: ;
    PUSH32(esp, 0x00151A32u); RECOMP_ABI_CALL(0x00191FD0u, sub_00191FD0); /* call 0x00191FD0 */

loc_00151A32: ;
    PUSH32(esp, 0x00151A37u); RECOMP_ABI_CALL(0x0018F020u, sub_0018F020); /* call 0x0018F020 */

loc_00151A37: ;
    PUSH32(esp, 0x00151A3Cu); RECOMP_ABI_CALL(0x0018E8B0u, sub_0018E8B0); /* call 0x0018E8B0 */

loc_00151A3C: ;
    PUSH32(esp, 0x00151A41u); RECOMP_ABI_CALL(0x0018FA90u, sub_0018FA90); /* call 0x0018FA90 */

loc_00151A41: ;
    PUSH32(esp, 0x00151A46u); RECOMP_ABI_CALL(0x00190EC0u, sub_00190EC0); /* call 0x00190EC0 */

loc_00151A46: ;
    PUSH32(esp, 0x3DD2E0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00151A52u); RECOMP_ABI_CALL(0x0014FE90u, sub_0014FE90); /* call 0x0014FE90 */

loc_00151A52: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00151A5Au); RECOMP_ABI_CALL(0x001915E0u, sub_001915E0); /* call 0x001915E0 */

loc_00151A5A: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00151A72; /* je: equal / zero */

loc_00151A61: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00151A6Fu); RECOMP_ABI_CALL(0x00190C40u, sub_00190C40); /* call 0x00190C40 */

loc_00151A6F: ;
    esp = esp + 0x14;

loc_00151A72: ;
    eax = MEM32(0x3DD054);
    MEM32(esi + 0xB9F0) = eax;
    ecx = MEM32(0x3DD050);
    MEM32(esi + 0xB9F4) = ecx;

loc_00151A89: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00151A90
 * Original: 0x00151A90 - 0x00151AAC (28 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151A90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00151A90: ;
    edx = ecx + 0x488;
    MEM32(ecx + 0x490) = 0;
    eax = 0; /* xor self */
    MEM32(edx) = eax;
    MEM32(edx + 4) = eax;
    g_seh_ebp = ebp; sub_0014EC70(); return; /* tail jmp 0x0014EC70 */

}

/**
 * sub_00151AB0
 * Original: 0x00151AB0 - 0x00151B1F (111 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151AB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00151AB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xB9FA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00151B1D; /* jne: not equal / not zero */

loc_00151ABD: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00151AC3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00151AC3: ;
    ecx = esi + 0x88C8;
    MEM32(esi + 0x88C0) = 0x3FFFFFFF;
    PUSH32(esp, 0x00151AD8u); RECOMP_ABI_CALL(0x00151A90u, sub_00151A90); /* call 0x00151A90 */

loc_00151AD8: ;
    ecx = esi + 0x8D5C;
    PUSH32(esp, 0x00151AE3u); RECOMP_ABI_CALL(0x0014E810u, sub_0014E810); /* call 0x0014E810 */

loc_00151AE3: ;
    edi = esi + 0x5F80;
    ecx = edi;
    PUSH32(esp, 0x00151AF0u); RECOMP_ABI_CALL(0x00151B20u, sub_00151B20); /* call 0x00151B20 */

loc_00151AF0: ;
    ecx = edi + 0x16F4;
    PUSH32(esp, 0x00151AFBu); RECOMP_ABI_CALL(0x0014E770u, sub_0014E770); /* call 0x0014E770 */

loc_00151AFB: ;
    ecx = esi + 8;
    PUSH32(esp, 0x00151B03u); RECOMP_ABI_CALL(0x00151B50u, sub_00151B50); /* call 0x00151B50 */

loc_00151B03: ;
    SET_LO8(eax, MEM8(esi + 0xB9F9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_00151B1D; /* jne: not equal / not zero */

loc_00151B0E: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00151B15u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00151B15: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0014F900(); return; /* tail jmp 0x0014F900 */

loc_00151B1D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00151B20
 * Original: 0x00151B20 - 0x00151B48 (40 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151B20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00151B20: ;
    PUSH32(esp, esi);
    esi = ecx + 0xC;
    MEM32(ecx + 4) = 0x3FFFFFFF;
    ecx = esi + 0x16BC;
    MEM32(esi + 0x16E4) = 0;
    PUSH32(esp, 0x00151B40u); RECOMP_ABI_CALL(0x0014E560u, sub_0014E560); /* call 0x0014E560 */

loc_00151B40: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0014E940(); return; /* tail jmp 0x0014E940 */

}

/**
 * sub_00151B50
 * Original: 0x00151B50 - 0x00151B78 (40 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151B50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00151B50: ;
    PUSH32(esp, esi);
    esi = ecx + 0xC;
    MEM32(ecx + 4) = 0x3FFFFFFF;
    ecx = esi + 0x5AB4;
    MEM32(esi + 0x5ADC) = 0;
    PUSH32(esp, 0x00151B70u); RECOMP_ABI_CALL(0x0014E560u, sub_0014E560); /* call 0x0014E560 */

loc_00151B70: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0014EAB0(); return; /* tail jmp 0x0014EAB0 */

}

/**
 * sub_00151B80
 * Original: 0x00151B80 - 0x00151D91 (529 bytes, 167 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151B80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00151B80: ;
    esp = esp - 0x10C;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0x10C) = eax;
    SET_LO8(eax, MEM8(esi + 0xB9FA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00151D79; /* jne: not equal / not zero */

loc_00151BA3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x11C);
    PUSH32(esp, 0xA);
    ebx = esi + 0xB9BC;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00151BBBu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00151BBB: ;
    eax = edi;
    esp = esp + 0xC;
    MEM8(ebx + 9) = 0;
    edx = eax + 1;

loc_00151BC7: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00151BC7; /* jne: not equal / not zero */

loc_00151BCE: ;
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00151D01; /* jle: less or equal (signed <=) */

loc_00151BD9: ;
    _fa = (uint32_t)(MEM8(eax + edi + -2)) & 0xFFu; _fb = (uint32_t)(0x5F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + edi + -2), 0x5F (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00151D01; /* jne: not equal / not zero */

loc_00151BE4: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + edi + -1);
    eax = eax + 0xFFFFFF9Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00151D01; /* ja: above (unsigned >) */

loc_00151BF5: ;
    eax = ZX8(MEM8(eax + 0x151DB0));
    { uint32_t _jt = MEM32(eax * 4 + 0x151D94); /* switch: 7 entries, 7 targets */
    if (_jt == 0x00151C03u) goto loc_00151C03;
    if (_jt == 0x00151C44u) goto loc_00151C44;
    if (_jt == 0x00151C68u) goto loc_00151C68;
    if (_jt == 0x00151C8Cu) goto loc_00151C8C;
    if (_jt == 0x00151CB3u) goto loc_00151CB3;
    if (_jt == 0x00151CDAu) goto loc_00151CDA;
    if (_jt == 0x00151D01u) goto loc_00151D01;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00151C03: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00151C0Bu); RECOMP_ABI_CALL(0x00150630u, sub_00150630); /* call 0x00150630 */

loc_00151C0B: ;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x3DD2A4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00151C1Bu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00151C1B: ;
    esp = esp + 0xC;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);

loc_00151C25: ;
    ecx = esi;
    PUSH32(esp, 0x00151C2Cu); RECOMP_ABI_CALL(0x00151DD0u, sub_00151DD0); /* call 0x00151DD0 */

loc_00151C2C: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x108);
    PUSH32(esp, 0x00151C3Bu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00151C3B: ;
    esp = esp + 0x10C;
    esp += 8; return; /* ret 4 */

loc_00151C44: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00151C4Cu); RECOMP_ABI_CALL(0x00150630u, sub_00150630); /* call 0x00150630 */

loc_00151C4C: ;
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, 0x3DD2A4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00151C5Cu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00151C5C: ;
    esp = esp + 0xC;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    goto loc_00151C25;

loc_00151C68: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00151C70u); RECOMP_ABI_CALL(0x00150630u, sub_00150630); /* call 0x00150630 */

loc_00151C70: ;
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, 0x3DD304);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00151C80u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00151C80: ;
    esp = esp + 0xC;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    goto loc_00151C25;

loc_00151C8C: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00151C94u); RECOMP_ABI_CALL(0x00150630u, sub_00150630); /* call 0x00150630 */

loc_00151C94: ;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x3DD2A4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00151CA4u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00151CA4: ;
    esp = esp + 0xC;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    goto loc_00151C25;

loc_00151CB3: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00151CBBu); RECOMP_ABI_CALL(0x00150630u, sub_00150630); /* call 0x00150630 */

loc_00151CBB: ;
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, 0x3DD2A4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00151CCBu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00151CCB: ;
    esp = esp + 0xC;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    goto loc_00151C25;

loc_00151CDA: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00151CE2u); RECOMP_ABI_CALL(0x00150630u, sub_00150630); /* call 0x00150630 */

loc_00151CE2: ;
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, 0x3DD2A4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00151CF2u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00151CF2: ;
    esp = esp + 0xC;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    goto loc_00151C25;

loc_00151D01: ;
    PUSH32(esp, ebp);
    SET_LO8(ebx, 0); /* xor self */
    MEM8(esp + 0x10) = 0x6D;
    MEM8(esp + 0x11) = 0x61;
    MEM8(esp + 0x12) = 0x63;
    MEM8(esp + 0x13) = 0x69;
    MEM8(esp + 0x14) = 0x76;
    MEM8(esp + 0x15) = 0x64;
    ebp = 0; /* xor self */

loc_00151D24: ;
    ecx = (uint32_t)(int32_t)SMEM8(esp + ebp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00151D32u); RECOMP_ABI_CALL(0x00150630u, sub_00150630); /* call 0x00150630 */

loc_00151D32: ;
    PUSH32(esp, eax);
    edx = esp + 0x20;
    PUSH32(esp, 0x3DD2F8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00151D42u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00151D42: ;
    esp = esp + 0x10;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00151D52u); RECOMP_ABI_CALL(0x00151DD0u, sub_00151DD0); /* call 0x00151DD0 */

loc_00151D52: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00151D58; /* je: equal / zero */

loc_00151D56: ;
    SET_LO8(ebx, 1);

loc_00151D58: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00151D24; /* jl: less (signed <) */

loc_00151D5E: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x108);
    PUSH32(esp, 0x00151D70u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00151D70: ;
    esp = esp + 0x10C;
    esp += 8; return; /* ret 4 */

loc_00151D79: ;
    ecx = MEM32(esp + 0x10C);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    PUSH32(esp, 0x00151D88u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00151D88: ;
    esp = esp + 0x10C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00151DD0
 * Original: 0x00151DD0 - 0x00151E2A (90 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151DD0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x00151DDFu); RECOMP_ABI_CALL(0x0014E690u, sub_0014E690); /* call 0x0014E690 */

loc_00151DDF: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00151DECu); RECOMP_ABI_CALL(0x0014EE80u, sub_0014EE80); /* call 0x0014EE80 */

loc_00151DEC: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00151DF4u); RECOMP_ABI_CALL(0x00150E70u, sub_00150E70); /* call 0x00150E70 */

loc_00151DF4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00151E22; /* je: equal / zero */

loc_00151DF8: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00151E00u); RECOMP_ABI_CALL(0x0014E690u, sub_0014E690); /* call 0x0014E690 */

loc_00151E00: ;
    ecx = edi + edi * 4;
    PUSH32(esp, 0xA);
    esi = esi + ecx * 2 + 0xB9FC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00151E13u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00151E13: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    MEM8(esi + 9) = 0;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00151E22: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}
