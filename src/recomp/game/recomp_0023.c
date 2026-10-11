#include "engine/scripting/raven_script_extensions.h"
#include "engine/world/raven_progress_guest.h"
#include "ui/pc_menu.h"
#include "engine/saves/save_name.h"
#include "app/build_settings.h"
#include "engine/core/motionpath_name.h"
/**
 * X-Men Legends - Recompiled code chunk 23
 * Functions: 250 (0x001187E0 - 0x00121110)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "game/xml1/newgame_plus.h"
#include "game/xml1/character_limits.h"
#include <math.h>

/**
 * sub_001187E0
 * Original: 0x001187E0 - 0x00118852 (114 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001187E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001187E0: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x4C4;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x4B8);
    edi = MEM32(eax + 0x4C0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3C (32-bit) */
    MEM32(eax + 0x4B8) = ecx;
    MEM32(eax + 0x4C0) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00118838; /* jl: less (signed <) */

loc_00118827: ;
    MEM32(eax + 0x4B8) = 0;
    ecx = 0x3B;
    goto loc_00118839;

loc_00118838: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00118839: ;
    MEM32(eax + ecx * 4 + 0x3C4) = esi;
    ecx = MEM32(eax + 0x4CC);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x4CC) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00118860
 * Original: 0x00118860 - 0x00118919 (185 bytes, 56 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118860: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xC;
    ecx = edi;
    PUSH32(esp, 0x0011886Eu); RECOMP_ABI_CALL(0x000250D0u, sub_000250D0); /* call 0x000250D0 */

loc_0011886E: ;
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
    PUSH32(esp, 0x001188A3u); RECOMP_ABI_CALL(0x001994F0u, sub_001994F0); /* call 0x001994F0 */

loc_001188A3: ;
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
    eax = ecx + ecx * 2;
    eax = esi + eax * 4 + 0x2A8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001188F8; /* je: equal / zero */

loc_001188E4: ;
    edx = MEM32(esp + 0x10);
    edi = MEM32(edx);
    MEM32(eax) = edi;
    edi = MEM32(edx + 4);
    MEM32(eax + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;

loc_001188F8: ;
    eax = ecx;
    ecx = ecx & 0x1F;
    edx = 1;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = esi + eax * 4 + 0x428;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00118920
 * Original: 0x00118920 - 0x00118932 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118920(void)
{

loc_00118920: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00118928u); RECOMP_ABI_CALL(0x001187A0u, sub_001187A0); /* call 0x001187A0 */

loc_00118928: ;
    MEM32(esi) = 0x3DA24C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00118940
 * Original: 0x00118940 - 0x00118965 (37 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118940: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    eax = eax << 4;
    PUSH32(esp, esi);
    esi = MEM32(eax + ecx + 0x18);
    edx = edx << 4;
    edx = MEM32(edx + ecx + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    SET_LO8(ebx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00118970
 * Original: 0x00118970 - 0x001189E2 (114 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118970: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x294;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x288);
    edi = MEM32(eax + 0x290);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    MEM32(eax + 0x288) = ecx;
    MEM32(eax + 0x290) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_001189C8; /* jl: less (signed <) */

loc_001189B7: ;
    MEM32(eax + 0x288) = 0;
    ecx = 0x1F;
    goto loc_001189C9;

loc_001189C8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001189C9: ;
    MEM32(eax + ecx * 4 + 0x204) = esi;
    ecx = MEM32(eax + 0x298);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x298) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001189F0
 * Original: 0x001189F0 - 0x00119085 (1685 bytes, 454 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001189F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001189F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351708);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 4;
    MEM32(esp + 0xC) = edi;
    MEM32(edi) = 0x3DA184;
    eax = esi;
    ecx = 0x3C;
    ebx = 0; /* xor self */

loc_00118A21: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    eax = eax + 8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00118A21; /* jne: not equal / not zero */

loc_00118A2C: ;
    MEM32(esi + 0x1E4) = ebx;
    MEM32(esi + 0x1E4) = ebx;
    PUSH32(esp, 0x3DA310);
    MEM32(esp + 0x1C) = ebx;
    MEM32(edi) = 0x3DA30C;
    PUSH32(esp, 0x00118A4Cu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00118A4C: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA310);
    PUSH32(esp, 0x00118A5Bu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00118A5B: ;
    ecx = eax;
    PUSH32(esp, 0x00118A62u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00118A62: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 0; /* xor self */
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    eax = MEM32(esi + 0x1E4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA2F8);
    MEM32(esi + 0x1E4) = eax;
    PUSH32(esp, 0x00118A89u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00118A89: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA2F8);
    PUSH32(esp, 0x00118A98u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00118A98: ;
    ecx = eax;
    PUSH32(esp, 0x00118A9Fu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00118A9F: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 1;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    ecx = MEM32(esi + 0x1E4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA2E8);
    MEM32(esi + 0x1E4) = ecx;
    PUSH32(esp, 0x00118AC9u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00118AC9: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA2E8);
    PUSH32(esp, 0x00118AD8u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00118AD8: ;
    ecx = eax;
    PUSH32(esp, 0x00118ADFu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00118ADF: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 2;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    ebx = MEM32(esi + 0x1E4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA2D8);
    MEM32(esi + 0x1E4) = ebx;
    PUSH32(esp, 0x00118B09u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00118B09: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA2D8);
    PUSH32(esp, 0x00118B18u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00118B18: ;
    ecx = eax;
    PUSH32(esp, 0x00118B1Fu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00118B1F: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 3;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    eax = MEM32(esi + 0x1E4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA2D4);
    MEM32(esi + 0x1E4) = eax;
    PUSH32(esp, 0x00118B49u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00118B49: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA2D4);
    PUSH32(esp, 0x00118B58u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00118B58: ;
    ecx = eax;
    PUSH32(esp, 0x00118B5Fu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00118B5F: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 4;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    ecx = MEM32(esi + 0x1E4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA2C8);
    MEM32(esi + 0x1E4) = ecx;
    PUSH32(esp, 0x00118B89u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00118B89: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA2C8);
    PUSH32(esp, 0x00118B98u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00118B98: ;
    ecx = eax;
    PUSH32(esp, 0x00118B9Fu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00118B9F: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 6;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    ebx = MEM32(esi + 0x1E4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA2C0);
    MEM32(esi + 0x1E4) = ebx;
    PUSH32(esp, 0x00118BC9u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00118BC9: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA2C0);
    PUSH32(esp, 0x00118BD8u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00118BD8: ;
    ecx = eax;
    PUSH32(esp, 0x00118BDFu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00118BDF: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 5;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    eax = MEM32(esi + 0x1E4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA2B8);
    MEM32(esi + 0x1E4) = eax;
    PUSH32(esp, 0x00118C09u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00118C09: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA2B8);
    PUSH32(esp, 0x00118C18u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00118C18: ;
    ecx = eax;
    PUSH32(esp, 0x00118C1Fu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00118C1F: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 8;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    ecx = MEM32(esi + 0x1E4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA2B4);
    MEM32(esi + 0x1E4) = ecx;
    PUSH32(esp, 0x00118C49u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00118C49: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA2B4);
    PUSH32(esp, 0x00118C58u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00118C58: ;
    ecx = eax;
    PUSH32(esp, 0x00118C5Fu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00118C5F: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 9;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    ebx = MEM32(esi + 0x1E4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA2B0);
    MEM32(esi + 0x1E4) = ebx;
    PUSH32(esp, 0x00118C89u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00118C89: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA2B0);
    PUSH32(esp, 0x00118C98u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00118C98: ;
    ecx = eax;
    PUSH32(esp, 0x00118C9Fu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00118C9F: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 7;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    eax = MEM32(esi + 0x1E4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3C93CC);
    MEM32(esi + 0x1E4) = eax;
    PUSH32(esp, 0x00118CC9u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00118CC9: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C93CC);
    PUSH32(esp, 0x00118CD8u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00118CD8: ;
    ecx = eax;
    PUSH32(esp, 0x00118CDFu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00118CDF: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 0xA;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    ecx = MEM32(esi + 0x1E4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA2AC);
    MEM32(esi + 0x1E4) = ecx;
    PUSH32(esp, 0x00118D09u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00118D09: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA2AC);
    PUSH32(esp, 0x00118D18u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00118D18: ;
    ecx = eax;
    PUSH32(esp, 0x00118D1Fu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00118D1F: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 0xD;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    ebx = MEM32(esi + 0x1E4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA2A4);
    MEM32(esi + 0x1E4) = ebx;
    PUSH32(esp, 0x00118D49u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00118D49: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA2A4);
    PUSH32(esp, 0x00118D58u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00118D58: ;
    ecx = eax;
    PUSH32(esp, 0x00118D5Fu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00118D5F: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 0xB;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    eax = MEM32(esi + 0x1E4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA29C);
    MEM32(esi + 0x1E4) = eax;
    PUSH32(esp, 0x00118D89u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00118D89: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA29C);
    PUSH32(esp, 0x00118D98u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00118D98: ;
    ecx = eax;
    PUSH32(esp, 0x00118D9Fu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00118D9F: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 0xC;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    MEM32(esi + 0x1E4) = MEM32(esi + 0x1E4) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1E4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA294);
    PUSH32(esp, 0x00118DC2u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00118DC2: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA294);
    PUSH32(esp, 0x00118DD1u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00118DD1: ;
    ecx = eax;
    PUSH32(esp, 0x00118DD8u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00118DD8: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 0x10;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    ebx = MEM32(esi + 0x1E4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA28C);
    MEM32(esi + 0x1E4) = ebx;
    PUSH32(esp, 0x00118E02u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00118E02: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA28C);
    PUSH32(esp, 0x00118E11u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00118E11: ;
    ecx = eax;
    PUSH32(esp, 0x00118E18u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00118E18: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 0x11;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    eax = MEM32(esi + 0x1E4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA284);
    MEM32(esi + 0x1E4) = eax;
    PUSH32(esp, 0x00118E42u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00118E42: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA284);
    PUSH32(esp, 0x00118E51u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00118E51: ;
    ecx = eax;
    PUSH32(esp, 0x00118E58u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00118E58: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 0x12;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    ecx = MEM32(esi + 0x1E4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA27C);
    MEM32(esi + 0x1E4) = ecx;
    PUSH32(esp, 0x00118E82u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00118E82: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA27C);
    PUSH32(esp, 0x00118E91u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00118E91: ;
    ecx = eax;
    PUSH32(esp, 0x00118E98u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00118E98: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 0x13;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    ebx = MEM32(esi + 0x1E4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA278);
    MEM32(esi + 0x1E4) = ebx;
    PUSH32(esp, 0x00118EC2u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00118EC2: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA278);
    PUSH32(esp, 0x00118ED1u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00118ED1: ;
    ecx = eax;
    PUSH32(esp, 0x00118ED8u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00118ED8: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 0xF;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    eax = MEM32(esi + 0x1E4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3D64E0);
    MEM32(esi + 0x1E4) = eax;
    PUSH32(esp, 0x00118F02u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00118F02: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D64E0);
    PUSH32(esp, 0x00118F11u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00118F11: ;
    ecx = eax;
    PUSH32(esp, 0x00118F18u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00118F18: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 0x1D;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    ecx = MEM32(esi + 0x1E4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA27C);
    MEM32(esi + 0x1E4) = ecx;
    PUSH32(esp, 0x00118F42u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00118F42: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA27C);
    PUSH32(esp, 0x00118F51u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00118F51: ;
    ecx = eax;
    PUSH32(esp, 0x00118F58u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00118F58: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 0x14;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    ebx = MEM32(esi + 0x1E4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA2C8);
    MEM32(esi + 0x1E4) = ebx;
    PUSH32(esp, 0x00118F82u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00118F82: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA2C8);
    PUSH32(esp, 0x00118F91u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00118F91: ;
    ecx = eax;
    PUSH32(esp, 0x00118F98u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00118F98: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 0x15;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    eax = MEM32(esi + 0x1E4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA2C0);
    MEM32(esi + 0x1E4) = eax;
    PUSH32(esp, 0x00118FC2u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00118FC2: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA2C0);
    PUSH32(esp, 0x00118FD1u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00118FD1: ;
    ecx = eax;
    PUSH32(esp, 0x00118FD8u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00118FD8: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 0x18;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    ecx = MEM32(esi + 0x1E4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA2B4);
    MEM32(esi + 0x1E4) = ecx;
    PUSH32(esp, 0x00119002u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119002: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA2B4);
    PUSH32(esp, 0x00119011u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119011: ;
    ecx = eax;
    PUSH32(esp, 0x00119018u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00119018: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 0x16;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    ebx = MEM32(esi + 0x1E4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA2AC);
    MEM32(esi + 0x1E4) = ebx;
    PUSH32(esp, 0x00119042u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119042: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA2AC);
    PUSH32(esp, 0x00119051u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119051: ;
    ecx = eax;
    PUSH32(esp, 0x00119058u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00119058: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 0x17;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(edx + 4) = eax;
    MEM32(esi + 0x1E4) = MEM32(esi + 0x1E4) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1E4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00119090
 * Original: 0x00119090 - 0x001190AE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119090: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00119098u); RECOMP_ABI_CALL(0x001173B0u, sub_001173B0); /* call 0x001173B0 */

loc_00119098: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001190A8; /* je: equal / zero */

loc_0011909F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001190A5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_001190A5: ;
    esp = esp + 4;

loc_001190A8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001190B0
 * Original: 0x001190B0 - 0x00119785 (1749 bytes, 471 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001190B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001190B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351708);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 4;
    MEM32(esp + 0xC) = edi;
    MEM32(edi) = 0x3DA184;
    eax = esi;
    ecx = 0x3C;
    ebx = 0; /* xor self */

loc_001190E1: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    eax = eax + 8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001190E1; /* jne: not equal / not zero */

loc_001190EC: ;
    MEM32(esi + 0x1E4) = ebx;
    MEM32(esi + 0x1E4) = ebx;
    PUSH32(esp, 0x3DA310);
    MEM32(esp + 0x1C) = ebx;
    MEM32(edi) = 0x3DA390;
    PUSH32(esp, 0x0011910Cu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011910C: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA310);
    PUSH32(esp, 0x0011911Bu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011911B: ;
    ecx = eax;
    PUSH32(esp, 0x00119122u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00119122: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 0; /* xor self */
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    ebx = MEM32(esi + 0x1E4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA2F8);
    MEM32(esi + 0x1E4) = ebx;
    PUSH32(esp, 0x00119149u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119149: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA2F8);
    PUSH32(esp, 0x00119158u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119158: ;
    ecx = eax;
    PUSH32(esp, 0x0011915Fu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011915F: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 1;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    eax = MEM32(esi + 0x1E4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA2E8);
    MEM32(esi + 0x1E4) = eax;
    PUSH32(esp, 0x00119189u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119189: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA2E8);
    PUSH32(esp, 0x00119198u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119198: ;
    ecx = eax;
    PUSH32(esp, 0x0011919Fu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011919F: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 2;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    ecx = MEM32(esi + 0x1E4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA2D8);
    MEM32(esi + 0x1E4) = ecx;
    PUSH32(esp, 0x001191C9u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_001191C9: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA2D8);
    PUSH32(esp, 0x001191D8u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_001191D8: ;
    ecx = eax;
    PUSH32(esp, 0x001191DFu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_001191DF: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 3;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    ebx = MEM32(esi + 0x1E4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA388);
    MEM32(esi + 0x1E4) = ebx;
    PUSH32(esp, 0x00119209u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119209: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA388);
    PUSH32(esp, 0x00119218u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119218: ;
    ecx = eax;
    PUSH32(esp, 0x0011921Fu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011921F: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 4;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    eax = MEM32(esi + 0x1E4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA384);
    MEM32(esi + 0x1E4) = eax;
    PUSH32(esp, 0x00119249u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119249: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA384);
    PUSH32(esp, 0x00119258u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119258: ;
    ecx = eax;
    PUSH32(esp, 0x0011925Fu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011925F: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 6;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    ecx = MEM32(esi + 0x1E4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA380);
    MEM32(esi + 0x1E4) = ecx;
    PUSH32(esp, 0x00119289u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119289: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA380);
    PUSH32(esp, 0x00119298u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119298: ;
    ecx = eax;
    PUSH32(esp, 0x0011929Fu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011929F: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 5;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    ebx = MEM32(esi + 0x1E4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA370);
    MEM32(esi + 0x1E4) = ebx;
    PUSH32(esp, 0x001192C9u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_001192C9: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA370);
    PUSH32(esp, 0x001192D8u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_001192D8: ;
    ecx = eax;
    PUSH32(esp, 0x001192DFu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_001192DF: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 7;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    eax = MEM32(esi + 0x1E4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA368);
    MEM32(esi + 0x1E4) = eax;
    PUSH32(esp, 0x00119309u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119309: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA368);
    PUSH32(esp, 0x00119318u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119318: ;
    ecx = eax;
    PUSH32(esp, 0x0011931Fu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011931F: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 0xD;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    ecx = MEM32(esi + 0x1E4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA2D4);
    MEM32(esi + 0x1E4) = ecx;
    PUSH32(esp, 0x00119349u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119349: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA2D4);
    PUSH32(esp, 0x00119358u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119358: ;
    ecx = eax;
    PUSH32(esp, 0x0011935Fu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011935F: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 8;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    ebx = MEM32(esi + 0x1E4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA358);
    MEM32(esi + 0x1E4) = ebx;
    PUSH32(esp, 0x00119389u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119389: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA358);
    PUSH32(esp, 0x00119398u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119398: ;
    ecx = eax;
    PUSH32(esp, 0x0011939Fu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011939F: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 0xA;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    eax = MEM32(esi + 0x1E4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA350);
    MEM32(esi + 0x1E4) = eax;
    PUSH32(esp, 0x001193C9u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_001193C9: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA350);
    PUSH32(esp, 0x001193D8u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_001193D8: ;
    ecx = eax;
    PUSH32(esp, 0x001193DFu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_001193DF: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 9;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    ecx = MEM32(esi + 0x1E4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA2A4);
    MEM32(esi + 0x1E4) = ecx;
    PUSH32(esp, 0x00119409u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119409: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA2A4);
    PUSH32(esp, 0x00119418u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119418: ;
    ecx = eax;
    PUSH32(esp, 0x0011941Fu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011941F: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 0xB;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    ebx = MEM32(esi + 0x1E4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA29C);
    MEM32(esi + 0x1E4) = ebx;
    PUSH32(esp, 0x00119449u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119449: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA29C);
    PUSH32(esp, 0x00119458u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119458: ;
    ecx = eax;
    PUSH32(esp, 0x0011945Fu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011945F: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 0xC;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    MEM32(esi + 0x1E4) = MEM32(esi + 0x1E4) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1E4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA294);
    PUSH32(esp, 0x00119482u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119482: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA294);
    PUSH32(esp, 0x00119491u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119491: ;
    ecx = eax;
    PUSH32(esp, 0x00119498u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00119498: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 0x10;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    ecx = MEM32(esi + 0x1E4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA28C);
    MEM32(esi + 0x1E4) = ecx;
    PUSH32(esp, 0x001194C2u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_001194C2: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA28C);
    PUSH32(esp, 0x001194D1u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_001194D1: ;
    ecx = eax;
    PUSH32(esp, 0x001194D8u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_001194D8: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 0x11;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    ebx = MEM32(esi + 0x1E4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA348);
    MEM32(esi + 0x1E4) = ebx;
    PUSH32(esp, 0x00119502u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119502: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA348);
    PUSH32(esp, 0x00119511u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119511: ;
    ecx = eax;
    PUSH32(esp, 0x00119518u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00119518: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 0x12;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    eax = MEM32(esi + 0x1E4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA27C);
    MEM32(esi + 0x1E4) = eax;
    PUSH32(esp, 0x00119542u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119542: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA27C);
    PUSH32(esp, 0x00119551u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119551: ;
    ecx = eax;
    PUSH32(esp, 0x00119558u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00119558: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 0x13;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    ecx = MEM32(esi + 0x1E4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA27C);
    MEM32(esi + 0x1E4) = ecx;
    PUSH32(esp, 0x00119582u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119582: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA27C);
    PUSH32(esp, 0x00119591u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119591: ;
    ecx = eax;
    PUSH32(esp, 0x00119598u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00119598: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 0x14;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    ebx = MEM32(esi + 0x1E4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA348);
    MEM32(esi + 0x1E4) = ebx;
    PUSH32(esp, 0x001195C2u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_001195C2: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA348);
    PUSH32(esp, 0x001195D1u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_001195D1: ;
    ecx = eax;
    PUSH32(esp, 0x001195D8u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_001195D8: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 0x15;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    eax = MEM32(esi + 0x1E4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA380);
    MEM32(esi + 0x1E4) = eax;
    PUSH32(esp, 0x00119602u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119602: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA380);
    PUSH32(esp, 0x00119611u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119611: ;
    ecx = eax;
    PUSH32(esp, 0x00119618u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00119618: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 0x15;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    ecx = MEM32(esi + 0x1E4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA384);
    MEM32(esi + 0x1E4) = ecx;
    PUSH32(esp, 0x00119642u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119642: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA384);
    PUSH32(esp, 0x00119651u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119651: ;
    ecx = eax;
    PUSH32(esp, 0x00119658u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00119658: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 0x18;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    ebx = MEM32(esi + 0x1E4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA370);
    MEM32(esi + 0x1E4) = ebx;
    PUSH32(esp, 0x00119682u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119682: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA370);
    PUSH32(esp, 0x00119691u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119691: ;
    ecx = eax;
    PUSH32(esp, 0x00119698u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00119698: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 0x16;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    eax = MEM32(esi + 0x1E4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA358);
    MEM32(esi + 0x1E4) = eax;
    PUSH32(esp, 0x001196C2u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_001196C2: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA358);
    PUSH32(esp, 0x001196D1u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_001196D1: ;
    ecx = eax;
    PUSH32(esp, 0x001196D8u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_001196D8: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 0x17;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    ecx = MEM32(esi + 0x1E4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA334);
    MEM32(esi + 0x1E4) = ecx;
    PUSH32(esp, 0x00119702u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119702: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA334);
    PUSH32(esp, 0x00119711u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119711: ;
    ecx = eax;
    PUSH32(esp, 0x00119718u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00119718: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 0xF;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    ebx = MEM32(esi + 0x1E4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3DA320);
    MEM32(esi + 0x1E4) = ebx;
    PUSH32(esp, 0x00119742u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119742: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA320);
    PUSH32(esp, 0x00119751u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119751: ;
    ecx = eax;
    PUSH32(esp, 0x00119758u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00119758: ;
    edx = MEM32(esi + 0x1E4);
    ecx = 0x1D;
    edx = esi + edx * 8;
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(edx + 4) = eax;
    MEM32(esi + 0x1E4) = MEM32(esi + 0x1E4) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1E4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00119790
 * Original: 0x00119790 - 0x001198A1 (273 bytes, 84 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119790: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351730);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 8;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001197B8u); RECOMP_ABI_CALL(0x001198B0u, sub_001198B0); /* call 0x001198B0 */

loc_001197B8: ;
    esp = esp + 8;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x18) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001197CC; /* je: equal / zero */

loc_001197C9: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001197CC: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001197D5u); RECOMP_ABI_CALL(0x00011A40u, sub_00011A40); /* call 0x00011A40 */

loc_001197D5: ;
    eax = MEM32(esp + 0xC);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 8) = edi;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00119805; /* je: equal / zero */

loc_001197ED: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_00119805; /* jne: not equal / not zero */

loc_00119800: ;
    PUSH32(esp, 0x00119805u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00119805: ;
    edx = esp + 0xC;
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00119811u); RECOMP_ABI_CALL(0x001199B0u, sub_001199B0); /* call 0x001199B0 */

loc_00119811: ;
    esp = esp + 8;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x18) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_00119825; /* je: equal / zero */

loc_00119822: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00119825: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011982Eu); RECOMP_ABI_CALL(0x00011A40u, sub_00011A40); /* call 0x00011A40 */

loc_0011982E: ;
    eax = MEM32(esp + 0x10);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 4) = edi;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0011985E; /* je: equal / zero */

loc_00119846: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_0011985E; /* jne: not equal / not zero */

loc_00119859: ;
    PUSH32(esp, 0x0011985Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0011985E: ;
    ecx = MEM32(esi + 4);
    MEM32(ecx + 0x34) = 0x119AB0;
    edx = MEM32(esi + 4);
    ecx = esi;
    MEM32(edx + 0x38) = 0x119AB0;
    PUSH32(esp, 0x00119879u); RECOMP_ABI_CALL(0x00119AD0u, sub_00119AD0); /* call 0x00119AD0 */

loc_00119879: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00119882u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00119882: ;
    SET_LO8(eax, MEM8(esi + 0xE58));
    ecx = MEM32(esp + 0x10);
    SET_LO8(eax, LO8(eax) | 2);
    MEM8(esi + 0xE58) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001198B0
 * Original: 0x001198B0 - 0x001198F7 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001198B0(void)
{

loc_001198B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x001198BFu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_001198BF: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001198D2u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_001198D2: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001198E4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001198E4: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001198EFu); RECOMP_ABI_CALL(0x00119900u, sub_00119900); /* call 0x00119900 */

loc_001198EF: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00119900
 * Original: 0x00119900 - 0x001199A6 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119900: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351761);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00119925u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_00119925: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00119931u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00119931: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00119939u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_00119939: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011993Fu); RECOMP_ABI_CALL(0x00247E10u, sub_00247E10); /* call 0x00247E10 */

loc_0011993F: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x00119953u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00119953: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0011995Bu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0011995B: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0011996B; /* je: equal / zero */

loc_00119968: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0011996B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00119993; /* je: equal / zero */

loc_0011997C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00119993; /* jne: not equal / not zero */

loc_0011998C: ;
    ecx = esi;
    PUSH32(esp, 0x00119993u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00119993: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001199B0
 * Original: 0x001199B0 - 0x001199F7 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001199B0(void)
{

loc_001199B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x001199BFu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_001199BF: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001199D2u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_001199D2: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001199E4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001199E4: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001199EFu); RECOMP_ABI_CALL(0x00119A00u, sub_00119A00); /* call 0x00119A00 */

loc_001199EF: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00119A00
 * Original: 0x00119A00 - 0x00119AA6 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119A00: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351761);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00119A25u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_00119A25: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00119A31u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00119A31: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00119A39u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_00119A39: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00119A3Fu); RECOMP_ABI_CALL(0x00248CE0u, sub_00248CE0); /* call 0x00248CE0 */

loc_00119A3F: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x00119A53u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00119A53: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00119A5Bu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_00119A5B: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00119A6B; /* je: equal / zero */

loc_00119A68: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00119A6B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00119A93; /* je: equal / zero */

loc_00119A7C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00119A93; /* jne: not equal / not zero */

loc_00119A8C: ;
    ecx = esi;
    PUSH32(esp, 0x00119A93u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00119A93: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00119AB0
 * Original: 0x00119AB0 - 0x00119ACB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119AB0(void)
{

loc_00119AB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00119AB6u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_00119AB6: ;
    eax = eax + 8;
    eax = MEM32(eax);
    ecx = MEM32(eax + 8);
    esi = MEM32(ecx + 8);
    PUSH32(esp, 0x00119AC6u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_00119AC6: ;
    MEM32(eax + 0xC) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00119AD0
 * Original: 0x00119AD0 - 0x0011A6E9 (3097 bytes, 814 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119AD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119AD0: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x4FFEBC;
    MEM32(0x4FFEB4) = 0x3FFFFFFF;
    PUSH32(esp, 0x00119AE9u); RECOMP_ABI_CALL(0x0011A6F0u, sub_0011A6F0); /* call 0x0011A6F0 */

loc_00119AE9: ;
    PUSH32(esp, 0x3DA51C);
    esi = 0; /* xor self */
    PUSH32(esp, 0x00119AF5u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119AF5: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA51C);
    PUSH32(esp, 0x00119B04u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119B04: ;
    ecx = eax;
    PUSH32(esp, 0x00119B0Bu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00119B0B: ;
    MEM32(esp + 8) = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x00119B1Eu); RECOMP_ABI_CALL(0x0011A710u, sub_0011A710); /* call 0x0011A710 */

loc_00119B1E: ;
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x00119B28u); RECOMP_ABI_CALL(0x000B8440u, sub_000B8440); /* call 0x000B8440 */

loc_00119B28: ;
    ecx = MEM32(0x4FFEB8);
    MEM32(ecx * 4 + 0x50038C) = esi;
    PUSH32(esp, 0x3DA514);
    esi = 1;
    PUSH32(esp, 0x00119B44u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119B44: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA514);
    PUSH32(esp, 0x00119B53u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119B53: ;
    ecx = eax;
    PUSH32(esp, 0x00119B5Au); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00119B5A: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = 0x4FFEB0;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x00119B6Du); RECOMP_ABI_CALL(0x0011A710u, sub_0011A710); /* call 0x0011A710 */

loc_00119B6D: ;
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x00119B77u); RECOMP_ABI_CALL(0x000B8440u, sub_000B8440); /* call 0x000B8440 */

loc_00119B77: ;
    eax = MEM32(0x4FFEB8);
    MEM32(eax * 4 + 0x50038C) = esi;
    PUSH32(esp, 0x3DA508);
    esi = 2;
    PUSH32(esp, 0x00119B92u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119B92: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA508);
    PUSH32(esp, 0x00119BA1u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119BA1: ;
    ecx = eax;
    PUSH32(esp, 0x00119BA8u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00119BA8: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = 0x4FFEB0;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x00119BBBu); RECOMP_ABI_CALL(0x0011A710u, sub_0011A710); /* call 0x0011A710 */

loc_00119BBB: ;
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x00119BC5u); RECOMP_ABI_CALL(0x000B8440u, sub_000B8440); /* call 0x000B8440 */

loc_00119BC5: ;
    edx = MEM32(0x4FFEB8);
    MEM32(edx * 4 + 0x50038C) = esi;
    PUSH32(esp, 0x3DA4FC);
    esi = 3;
    PUSH32(esp, 0x00119BE1u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119BE1: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA4FC);
    PUSH32(esp, 0x00119BF0u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119BF0: ;
    ecx = eax;
    PUSH32(esp, 0x00119BF7u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00119BF7: ;
    MEM32(esp + 8) = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x00119C0Au); RECOMP_ABI_CALL(0x0011A710u, sub_0011A710); /* call 0x0011A710 */

loc_00119C0A: ;
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x00119C14u); RECOMP_ABI_CALL(0x000B8440u, sub_000B8440); /* call 0x000B8440 */

loc_00119C14: ;
    ecx = MEM32(0x4FFEB8);
    MEM32(ecx * 4 + 0x50038C) = esi;
    PUSH32(esp, 0x3D2510);
    esi = 4;
    PUSH32(esp, 0x00119C30u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119C30: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D2510);
    PUSH32(esp, 0x00119C3Fu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119C3F: ;
    ecx = eax;
    PUSH32(esp, 0x00119C46u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00119C46: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = 0x4FFEB0;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x00119C59u); RECOMP_ABI_CALL(0x0011A710u, sub_0011A710); /* call 0x0011A710 */

loc_00119C59: ;
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x00119C63u); RECOMP_ABI_CALL(0x000B8440u, sub_000B8440); /* call 0x000B8440 */

loc_00119C63: ;
    eax = MEM32(0x4FFEB8);
    MEM32(eax * 4 + 0x50038C) = esi;
    PUSH32(esp, 0x3D2508);
    esi = 5;
    PUSH32(esp, 0x00119C7Eu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119C7E: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D2508);
    PUSH32(esp, 0x00119C8Du); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119C8D: ;
    ecx = eax;
    PUSH32(esp, 0x00119C94u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00119C94: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = 0x4FFEB0;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x00119CA7u); RECOMP_ABI_CALL(0x0011A710u, sub_0011A710); /* call 0x0011A710 */

loc_00119CA7: ;
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x00119CB1u); RECOMP_ABI_CALL(0x000B8440u, sub_000B8440); /* call 0x000B8440 */

loc_00119CB1: ;
    edx = MEM32(0x4FFEB8);
    MEM32(edx * 4 + 0x50038C) = esi;
    PUSH32(esp, 0x3DA4F4);
    esi = 6;
    PUSH32(esp, 0x00119CCDu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119CCD: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA4F4);
    PUSH32(esp, 0x00119CDCu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119CDC: ;
    ecx = eax;
    PUSH32(esp, 0x00119CE3u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00119CE3: ;
    MEM32(esp + 8) = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x00119CF6u); RECOMP_ABI_CALL(0x0011A710u, sub_0011A710); /* call 0x0011A710 */

loc_00119CF6: ;
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x00119D00u); RECOMP_ABI_CALL(0x000B8440u, sub_000B8440); /* call 0x000B8440 */

loc_00119D00: ;
    ecx = MEM32(0x4FFEB8);
    MEM32(ecx * 4 + 0x50038C) = esi;
    PUSH32(esp, 0x3DA4EC);
    esi = 7;
    PUSH32(esp, 0x00119D1Cu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119D1C: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA4EC);
    PUSH32(esp, 0x00119D2Bu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119D2B: ;
    ecx = eax;
    PUSH32(esp, 0x00119D32u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00119D32: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = 0x4FFEB0;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x00119D45u); RECOMP_ABI_CALL(0x0011A710u, sub_0011A710); /* call 0x0011A710 */

loc_00119D45: ;
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x00119D4Fu); RECOMP_ABI_CALL(0x000B8440u, sub_000B8440); /* call 0x000B8440 */

loc_00119D4F: ;
    eax = MEM32(0x4FFEB8);
    MEM32(eax * 4 + 0x50038C) = esi;
    PUSH32(esp, 0x3DA4E4);
    esi = 8;
    PUSH32(esp, 0x00119D6Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119D6A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA4E4);
    PUSH32(esp, 0x00119D79u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119D79: ;
    ecx = eax;
    PUSH32(esp, 0x00119D80u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00119D80: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = 0x4FFEB0;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x00119D93u); RECOMP_ABI_CALL(0x0011A710u, sub_0011A710); /* call 0x0011A710 */

loc_00119D93: ;
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x00119D9Du); RECOMP_ABI_CALL(0x000B8440u, sub_000B8440); /* call 0x000B8440 */

loc_00119D9D: ;
    edx = MEM32(0x4FFEB8);
    MEM32(edx * 4 + 0x50038C) = esi;
    PUSH32(esp, 0x3DA4DC);
    esi = 9;
    PUSH32(esp, 0x00119DB9u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119DB9: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA4DC);
    PUSH32(esp, 0x00119DC8u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119DC8: ;
    ecx = eax;
    PUSH32(esp, 0x00119DCFu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00119DCF: ;
    MEM32(esp + 8) = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x00119DE2u); RECOMP_ABI_CALL(0x0011A710u, sub_0011A710); /* call 0x0011A710 */

loc_00119DE2: ;
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x00119DECu); RECOMP_ABI_CALL(0x000B8440u, sub_000B8440); /* call 0x000B8440 */

loc_00119DEC: ;
    ecx = MEM32(0x4FFEB8);
    PUSH32(esp, 0x3DA4D4);
    MEM32(ecx * 4 + 0x50038C) = esi;
    MEM32(esp + 0xC) = 0xA;
    PUSH32(esp, 0x00119E0Bu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119E0B: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA4D4);
    PUSH32(esp, 0x00119E1Au); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119E1A: ;
    ecx = eax;
    PUSH32(esp, 0x00119E21u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00119E21: ;
    edx = esp + 8;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x00119E39u); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_00119E39: ;
    PUSH32(esp, 0x3DA4CC);
    MEM32(esp + 0x10) = 0xB;
    PUSH32(esp, 0x00119E4Bu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119E4B: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA4CC);
    PUSH32(esp, 0x00119E5Au); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119E5A: ;
    ecx = eax;
    PUSH32(esp, 0x00119E61u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00119E61: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = 0x4FFEB0;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00119E79u); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_00119E79: ;
    PUSH32(esp, 0x3DA4C4);
    MEM32(esp + 0x10) = 0xC;
    PUSH32(esp, 0x00119E8Bu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119E8B: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA4C4);
    PUSH32(esp, 0x00119E9Au); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119E9A: ;
    ecx = eax;
    PUSH32(esp, 0x00119EA1u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00119EA1: ;
    MEM32(esp + 8) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x00119EB9u); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_00119EB9: ;
    PUSH32(esp, 0x3DA4B8);
    MEM32(esp + 0x10) = 0xD;
    PUSH32(esp, 0x00119ECBu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119ECB: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA4B8);
    PUSH32(esp, 0x00119EDAu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119EDA: ;
    ecx = eax;
    PUSH32(esp, 0x00119EE1u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00119EE1: ;
    edx = esp + 0xC;
    MEM32(esp + 8) = eax;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x00119EF9u); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_00119EF9: ;
    PUSH32(esp, 0x3DA4AC);
    MEM32(esp + 0x10) = 0xE;
    PUSH32(esp, 0x00119F0Bu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119F0B: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA4AC);
    PUSH32(esp, 0x00119F1Au); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119F1A: ;
    ecx = eax;
    PUSH32(esp, 0x00119F21u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00119F21: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = 0x4FFEB0;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00119F39u); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_00119F39: ;
    PUSH32(esp, 0x3DA4A0);
    MEM32(esp + 0x10) = 0xF;
    PUSH32(esp, 0x00119F4Bu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119F4B: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA4A0);
    PUSH32(esp, 0x00119F5Au); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119F5A: ;
    ecx = eax;
    PUSH32(esp, 0x00119F61u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00119F61: ;
    MEM32(esp + 8) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x00119F79u); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_00119F79: ;
    edi = 0x10;
    PUSH32(esp, 0x3DA494);
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0x00119F8Cu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119F8C: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA494);
    PUSH32(esp, 0x00119F9Bu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119F9B: ;
    ecx = eax;
    PUSH32(esp, 0x00119FA2u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00119FA2: ;
    edx = esp + 0xC;
    MEM32(esp + 8) = eax;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x00119FBAu); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_00119FBA: ;
    esi = 0x11;
    PUSH32(esp, 0x3DA488);
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0x00119FCDu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00119FCD: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA488);
    PUSH32(esp, 0x00119FDCu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00119FDC: ;
    ecx = eax;
    PUSH32(esp, 0x00119FE3u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00119FE3: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = 0x4FFEB0;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00119FFBu); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_00119FFB: ;
    PUSH32(esp, 0x3DA480);
    MEM32(esp + 0x10) = 0x12;
    PUSH32(esp, 0x0011A00Du); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011A00D: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA480);
    PUSH32(esp, 0x0011A01Cu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011A01C: ;
    ecx = eax;
    PUSH32(esp, 0x0011A023u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011A023: ;
    MEM32(esp + 8) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x0011A03Bu); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_0011A03B: ;
    PUSH32(esp, 0x3DA478);
    MEM32(esp + 0x10) = 0x13;
    PUSH32(esp, 0x0011A04Du); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011A04D: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA478);
    PUSH32(esp, 0x0011A05Cu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011A05C: ;
    ecx = eax;
    PUSH32(esp, 0x0011A063u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011A063: ;
    edx = esp + 0xC;
    MEM32(esp + 8) = eax;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x0011A07Bu); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_0011A07B: ;
    PUSH32(esp, 0x3DA470);
    MEM32(esp + 0x10) = 0x14;
    PUSH32(esp, 0x0011A08Du); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011A08D: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA470);
    PUSH32(esp, 0x0011A09Cu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011A09C: ;
    ecx = eax;
    PUSH32(esp, 0x0011A0A3u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011A0A3: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = 0x4FFEB0;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0011A0BBu); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_0011A0BB: ;
    PUSH32(esp, 0x3DA464);
    MEM32(esp + 0x10) = 0x15;
    PUSH32(esp, 0x0011A0CDu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011A0CD: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA464);
    PUSH32(esp, 0x0011A0DCu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011A0DC: ;
    ecx = eax;
    PUSH32(esp, 0x0011A0E3u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011A0E3: ;
    MEM32(esp + 8) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x0011A0FBu); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_0011A0FB: ;
    PUSH32(esp, 0x3DA458);
    MEM32(esp + 0x10) = 4;
    PUSH32(esp, 0x0011A10Du); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011A10D: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA458);
    PUSH32(esp, 0x0011A11Cu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011A11C: ;
    ecx = eax;
    PUSH32(esp, 0x0011A123u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011A123: ;
    edx = esp + 0xC;
    MEM32(esp + 8) = eax;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x0011A13Bu); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_0011A13B: ;
    PUSH32(esp, 0x3DA448);
    MEM32(esp + 0x10) = 8;
    PUSH32(esp, 0x0011A14Du); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011A14D: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA448);
    PUSH32(esp, 0x0011A15Cu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011A15C: ;
    ecx = eax;
    PUSH32(esp, 0x0011A163u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011A163: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = 0x4FFEB0;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0011A17Bu); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_0011A17B: ;
    PUSH32(esp, 0x3DA43C);
    MEM32(esp + 0x10) = 0x18;
    PUSH32(esp, 0x0011A18Du); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011A18D: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA43C);
    PUSH32(esp, 0x0011A19Cu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011A19C: ;
    ecx = eax;
    PUSH32(esp, 0x0011A1A3u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011A1A3: ;
    MEM32(esp + 8) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x0011A1BBu); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_0011A1BB: ;
    PUSH32(esp, 0x3DA430);
    MEM32(esp + 0x10) = 0x16;
    PUSH32(esp, 0x0011A1CDu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011A1CD: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA430);
    PUSH32(esp, 0x0011A1DCu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011A1DC: ;
    ecx = eax;
    PUSH32(esp, 0x0011A1E3u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011A1E3: ;
    edx = esp + 0xC;
    MEM32(esp + 8) = eax;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x0011A1FBu); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_0011A1FB: ;
    PUSH32(esp, 0x3DA424);
    MEM32(esp + 0x10) = 0x17;
    PUSH32(esp, 0x0011A20Du); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011A20D: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA424);
    PUSH32(esp, 0x0011A21Cu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011A21C: ;
    ecx = eax;
    PUSH32(esp, 0x0011A223u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011A223: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = 0x4FFEB0;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0011A23Bu); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_0011A23B: ;
    PUSH32(esp, 0x3DA418);
    MEM32(esp + 0x10) = 9;
    PUSH32(esp, 0x0011A24Du); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011A24D: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA418);
    PUSH32(esp, 0x0011A25Cu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011A25C: ;
    ecx = eax;
    PUSH32(esp, 0x0011A263u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011A263: ;
    MEM32(esp + 8) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x0011A27Bu); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_0011A27B: ;
    PUSH32(esp, 0x3DA40C);
    MEM32(esp + 0x10) = 0x19;
    PUSH32(esp, 0x0011A28Du); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011A28D: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA40C);
    PUSH32(esp, 0x0011A29Cu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011A29C: ;
    ecx = eax;
    PUSH32(esp, 0x0011A2A3u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011A2A3: ;
    edx = esp + 0xC;
    MEM32(esp + 8) = eax;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x0011A2BBu); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_0011A2BB: ;
    PUSH32(esp, 0x3DA400);
    MEM32(esp + 0x10) = 0x1A;
    PUSH32(esp, 0x0011A2CDu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011A2CD: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA400);
    PUSH32(esp, 0x0011A2DCu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011A2DC: ;
    ecx = eax;
    PUSH32(esp, 0x0011A2E3u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011A2E3: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = 0x4FFEB0;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0011A2FBu); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_0011A2FB: ;
    PUSH32(esp, 0x3DA3F4);
    MEM32(esp + 0x10) = 0x1B;
    PUSH32(esp, 0x0011A30Du); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011A30D: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA3F4);
    PUSH32(esp, 0x0011A31Cu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011A31C: ;
    ecx = eax;
    PUSH32(esp, 0x0011A323u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011A323: ;
    MEM32(esp + 8) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x0011A33Bu); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_0011A33B: ;
    PUSH32(esp, 0x3DA3E8);
    MEM32(esp + 0x10) = 0x1C;
    PUSH32(esp, 0x0011A34Du); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011A34D: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA3E8);
    PUSH32(esp, 0x0011A35Cu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011A35C: ;
    ecx = eax;
    PUSH32(esp, 0x0011A363u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011A363: ;
    edx = esp + 0xC;
    MEM32(esp + 8) = eax;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x0011A37Bu); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_0011A37B: ;
    PUSH32(esp, 0x3DA3DC);
    MEM32(esp + 0x10) = 0x1D;
    PUSH32(esp, 0x0011A38Du); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011A38D: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA3DC);
    PUSH32(esp, 0x0011A39Cu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011A39C: ;
    ecx = eax;
    PUSH32(esp, 0x0011A3A3u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011A3A3: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = 0x4FFEB0;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0011A3BBu); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_0011A3BB: ;
    PUSH32(esp, 0x3DA2A4);
    MEM32(esp + 0x10) = 0xB;
    PUSH32(esp, 0x0011A3CDu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011A3CD: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA2A4);
    PUSH32(esp, 0x0011A3DCu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011A3DC: ;
    ecx = eax;
    PUSH32(esp, 0x0011A3E3u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011A3E3: ;
    MEM32(esp + 8) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x0011A3FBu); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_0011A3FB: ;
    PUSH32(esp, 0x3DA29C);
    MEM32(esp + 0x10) = 0xC;
    PUSH32(esp, 0x0011A40Du); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011A40D: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA29C);
    PUSH32(esp, 0x0011A41Cu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011A41C: ;
    ecx = eax;
    PUSH32(esp, 0x0011A423u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011A423: ;
    edx = esp + 0xC;
    MEM32(esp + 8) = eax;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x0011A43Bu); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_0011A43B: ;
    PUSH32(esp, 0x3DA294);
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0x0011A449u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011A449: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA294);
    PUSH32(esp, 0x0011A458u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011A458: ;
    ecx = eax;
    PUSH32(esp, 0x0011A45Fu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011A45F: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = 0x4FFEB0;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0011A477u); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_0011A477: ;
    PUSH32(esp, 0x3DA28C);
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0x0011A485u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011A485: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA28C);
    PUSH32(esp, 0x0011A494u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011A494: ;
    ecx = eax;
    PUSH32(esp, 0x0011A49Bu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011A49B: ;
    MEM32(esp + 8) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x0011A4B3u); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_0011A4B3: ;
    PUSH32(esp, 0x3DA3D4);
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0x0011A4C1u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011A4C1: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA3D4);
    PUSH32(esp, 0x0011A4D0u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011A4D0: ;
    ecx = eax;
    PUSH32(esp, 0x0011A4D7u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011A4D7: ;
    edx = esp + 0xC;
    MEM32(esp + 8) = eax;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x0011A4EFu); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_0011A4EF: ;
    PUSH32(esp, 0x3DA3CC);
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0x0011A4FDu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011A4FD: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA3CC);
    PUSH32(esp, 0x0011A50Cu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011A50C: ;
    ecx = eax;
    PUSH32(esp, 0x0011A513u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011A513: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = 0x4FFEB0;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0011A52Bu); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_0011A52B: ;
    PUSH32(esp, 0x3DA3C8);
    MEM32(esp + 0x10) = 0xB;
    PUSH32(esp, 0x0011A53Du); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011A53D: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA3C8);
    PUSH32(esp, 0x0011A54Cu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011A54C: ;
    ecx = eax;
    PUSH32(esp, 0x0011A553u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011A553: ;
    MEM32(esp + 8) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x0011A56Bu); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_0011A56B: ;
    PUSH32(esp, 0x3DA3C4);
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0x0011A579u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011A579: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA3C4);
    PUSH32(esp, 0x0011A588u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011A588: ;
    ecx = eax;
    PUSH32(esp, 0x0011A58Fu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011A58F: ;
    edx = esp + 0xC;
    MEM32(esp + 8) = eax;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x0011A5A7u); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_0011A5A7: ;
    PUSH32(esp, 0x3DA3C0);
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0x0011A5B5u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011A5B5: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA3C0);
    PUSH32(esp, 0x0011A5C4u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011A5C4: ;
    ecx = eax;
    PUSH32(esp, 0x0011A5CBu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011A5CB: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = 0x4FFEB0;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0011A5E3u); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_0011A5E3: ;
    PUSH32(esp, 0x3DA3BC);
    MEM32(esp + 0x10) = 0xC;
    PUSH32(esp, 0x0011A5F5u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011A5F5: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA3BC);
    PUSH32(esp, 0x0011A604u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011A604: ;
    ecx = eax;
    PUSH32(esp, 0x0011A60Bu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011A60B: ;
    MEM32(esp + 8) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x0011A623u); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_0011A623: ;
    PUSH32(esp, 0x3DA3B4);
    MEM32(esp + 0x10) = 0xF;
    PUSH32(esp, 0x0011A635u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011A635: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA3B4);
    PUSH32(esp, 0x0011A644u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011A644: ;
    ecx = eax;
    PUSH32(esp, 0x0011A64Bu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011A64B: ;
    edx = esp + 0xC;
    MEM32(esp + 8) = eax;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x0011A663u); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_0011A663: ;
    PUSH32(esp, 0x3DA3A4);
    MEM32(esp + 0x10) = 7;
    PUSH32(esp, 0x0011A675u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011A675: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA3A4);
    PUSH32(esp, 0x0011A684u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011A684: ;
    ecx = eax;
    PUSH32(esp, 0x0011A68Bu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011A68B: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = 0x4FFEB0;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0011A6A3u); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_0011A6A3: ;
    PUSH32(esp, 0x3DA394);
    MEM32(esp + 0x10) = 0x1D;
    PUSH32(esp, 0x0011A6B5u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011A6B5: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA394);
    PUSH32(esp, 0x0011A6C4u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011A6C4: ;
    ecx = eax;
    PUSH32(esp, 0x0011A6CBu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011A6CB: ;
    MEM32(esp + 8) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x0011A6E3u); RECOMP_ABI_CALL(0x0011A7D0u, sub_0011A7D0); /* call 0x0011A7D0 */

loc_0011A6E3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0011A6F0
 * Original: 0x0011A6F0 - 0x0011A70C (28 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A6F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011A6F0: ;
    edx = ecx + 0x4C4;
    MEM32(ecx + 0x4CC) = 0;
    eax = 0; /* xor self */
    MEM32(edx) = eax;
    MEM32(edx + 4) = eax;
    g_seh_ebp = ebp; sub_001173E0(); return; /* tail jmp 0x001173E0 */

}

/**
 * sub_0011A710
 * Original: 0x0011A710 - 0x0011A74A (58 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A710(void)
{

loc_0011A710: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xC;
    ecx = edi;
    PUSH32(esp, 0x0011A71Eu); RECOMP_ABI_CALL(0x0011A750u, sub_0011A750); /* call 0x0011A750 */

loc_0011A71E: ;
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
 * sub_0011A750
 * Original: 0x0011A750 - 0x0011A79A (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A750(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011A750: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x4BC);
    eax = esi + 0x3C4;
    PUSH32(esp, edi);
    edi = MEM32(eax + ecx * 4);
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(esi + edx * 4 + 0x4C4);
    edx = esi + edx * 4 + 0x4C4;
    ecx = ecx | ebx;
    MEM32(edx) = ecx;
    ecx = eax;
    PUSH32(esp, 0x0011A78Eu); RECOMP_ABI_CALL(0x0011A7A0u, sub_0011A7A0); /* call 0x0011A7A0 */

loc_0011A78E: ;
    MEM32(esi + 0x4CC) = MEM32(esi + 0x4CC) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x4CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011A7A0
 * Original: 0x0011A7A0 - 0x0011A7CA (42 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011A7A0: ;
    eax = MEM32(ecx + 0xF8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0xF8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C (32-bit) */
    eax = MEM32(ecx + 0xFC);
    if (CMP_L(_fas, _fbs)) goto loc_0011A7C2; /* jl: less (signed <) */

loc_0011A7B8: ;
    MEM32(ecx + 0xF8) = 0;

loc_0011A7C2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0xFC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0011A7D0
 * Original: 0x0011A7D0 - 0x0011A858 (136 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A7D0(void)
{

loc_0011A7D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xC;
    ecx = edi;
    PUSH32(esp, 0x0011A7DEu); RECOMP_ABI_CALL(0x0011A750u, sub_0011A750); /* call 0x0011A750 */

loc_0011A7DE: ;
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
    PUSH32(esp, 0x0011A813u); RECOMP_ABI_CALL(0x001994F0u, sub_001994F0); /* call 0x001994F0 */

loc_0011A813: ;
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
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 8);
    edx = MEM32(eax);
    POP32(esp, edi);
    MEM32(esi + ecx * 4 + 0x4DC) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011A860
 * Original: 0x0011A860 - 0x0011A872 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A860(void)
{

loc_0011A860: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0011A868u); RECOMP_ABI_CALL(0x00118920u, sub_00118920); /* call 0x00118920 */

loc_0011A868: ;
    MEM32(esi) = 0x3DA528;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011A880
 * Original: 0x0011A880 - 0x0011A891 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A880(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011A880: ;
    MEM32(ecx) = 0x3DA540;
    ecx = ecx + 0x2AC;
    g_seh_ebp = ebp; sub_00117280(); return; /* tail jmp 0x00117280 */

}

/**
 * sub_0011A8A0
 * Original: 0x0011A8A0 - 0x0011A8FF (95 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A8A0(void)
{

loc_0011A8A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3DA540;
    ecx = esi + 0x10;
    MEM32(esi + 8) = 0x3FFFFFFF;
    MEM32(esi + 0xC) = 0xFFFFFFFFu;
    MEM32(esi + 4) = 0x3DA264;
    PUSH32(esp, 0x0011A8C6u); RECOMP_ABI_CALL(0x00118400u, sub_00118400); /* call 0x00118400 */

loc_0011A8C6: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x42C) = eax;
    MEM32(esi + 4) = 0x3DA548;
    ecx = esi + 0x10;
    MEM32(esi + 8) = 0x3FFFFFFF;
    MEM32(ecx + 0x298) = eax;
    MEM32(ecx + 0x294) = eax;
    PUSH32(esp, 0x0011A8F0u); RECOMP_ABI_CALL(0x001183A0u, sub_001183A0); /* call 0x001183A0 */

loc_0011A8F0: ;
    ecx = esi + 0x2AC;
    PUSH32(esp, 0x0011A8FBu); RECOMP_ABI_CALL(0x00117280u, sub_00117280); /* call 0x00117280 */

loc_0011A8FB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011A900
 * Original: 0x0011A900 - 0x0011AFE7 (1767 bytes, 463 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A900(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011A900: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351778);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0x0011A925u); RECOMP_ABI_CALL(0x0011A8A0u, sub_0011A8A0); /* call 0x0011A8A0 */

loc_0011A925: ;
    PUSH32(esp, 0x3DA310);
    MEM32(esp + 0x28) = 0;
    MEM32(edi) = 0x3DA560;
    PUSH32(esp, 0x0011A93Du); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011A93D: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA310);
    PUSH32(esp, 0x0011A94Cu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011A94C: ;
    ecx = eax;
    PUSH32(esp, 0x0011A953u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011A953: ;
    SET_LO8(edx, MEM8(esp + 0x19));
    MEM32(esp + 8) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    SET_LO8(edx, LO8(edx) & 0xFE);
    esi = edi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x18) = 0x20;
    MEM32(esp + 0x1C) = 0x3E19999A;
    MEM8(esp + 0x20) = 0;
    MEM8(esp + 0x21) = LO8(edx);
    PUSH32(esp, 0x0011A98Bu); RECOMP_ABI_CALL(0x00118860u, sub_00118860); /* call 0x00118860 */

loc_0011A98B: ;
    PUSH32(esp, 0x3DA2F8);
    PUSH32(esp, 0x0011A995u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011A995: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA2F8);
    PUSH32(esp, 0x0011A9A4u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011A9A4: ;
    ecx = eax;
    PUSH32(esp, 0x0011A9ABu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011A9AB: ;
    SET_LO8(ecx, MEM8(esp + 0x19));
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    edx = esp + 0x10;
    MEM32(esp + 8) = eax;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    MEM8(esp + 0x1D) = LO8(ecx);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x18) = 0x21;
    MEM32(esp + 0x1C) = 0x3E19999A;
    MEM8(esp + 0x20) = 1;
    PUSH32(esp, 0x0011A9E0u); RECOMP_ABI_CALL(0x00118860u, sub_00118860); /* call 0x00118860 */

loc_0011A9E0: ;
    PUSH32(esp, 0x3DA2E8);
    PUSH32(esp, 0x0011A9EAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011A9EA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA2E8);
    PUSH32(esp, 0x0011A9F9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011A9F9: ;
    ecx = eax;
    PUSH32(esp, 0x0011AA00u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011AA00: ;
    MEM32(esp + 8) = eax;
    SET_LO8(eax, MEM8(esp + 0x19));
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    SET_LO8(eax, LO8(eax) & 0xFE);
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x18) = 0x22;
    MEM32(esp + 0x1C) = 0x3E19999A;
    MEM8(esp + 0x20) = 2;
    MEM8(esp + 0x21) = LO8(eax);
    PUSH32(esp, 0x0011AA34u); RECOMP_ABI_CALL(0x00118860u, sub_00118860); /* call 0x00118860 */

loc_0011AA34: ;
    PUSH32(esp, 0x3DA2D8);
    PUSH32(esp, 0x0011AA3Eu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011AA3E: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA2D8);
    PUSH32(esp, 0x0011AA4Du); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011AA4D: ;
    ecx = eax;
    PUSH32(esp, 0x0011AA54u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011AA54: ;
    SET_LO8(edx, MEM8(esp + 0x19));
    MEM32(esp + 8) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    SET_LO8(edx, LO8(edx) & 0xFE);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x18) = 0x23;
    MEM32(esp + 0x1C) = 0x3E19999A;
    MEM8(esp + 0x20) = 3;
    MEM8(esp + 0x21) = LO8(edx);
    PUSH32(esp, 0x0011AA89u); RECOMP_ABI_CALL(0x00118860u, sub_00118860); /* call 0x00118860 */

loc_0011AA89: ;
    PUSH32(esp, 0x3DA388);
    PUSH32(esp, 0x0011AA93u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011AA93: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA388);
    PUSH32(esp, 0x0011AAA2u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011AAA2: ;
    ecx = eax;
    PUSH32(esp, 0x0011AAA9u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011AAA9: ;
    SET_LO8(ecx, MEM8(esp + 0x19));
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    edx = esp + 0x10;
    MEM32(esp + 8) = eax;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    MEM8(esp + 0x1D) = LO8(ecx);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x18) = 0xE;
    MEM32(esp + 0x1C) = 0x3E19999A;
    MEM8(esp + 0x20) = 4;
    PUSH32(esp, 0x0011AADEu); RECOMP_ABI_CALL(0x00118860u, sub_00118860); /* call 0x00118860 */

loc_0011AADE: ;
    PUSH32(esp, 0x3DA380);
    PUSH32(esp, 0x0011AAE8u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011AAE8: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA380);
    PUSH32(esp, 0x0011AAF7u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011AAF7: ;
    ecx = eax;
    PUSH32(esp, 0x0011AAFEu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011AAFE: ;
    MEM32(esp + 8) = eax;
    SET_LO8(eax, MEM8(esp + 0x19));
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    SET_LO8(eax, LO8(eax) & 0xFE);
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x18) = 0xD;
    MEM32(esp + 0x1C) = 0x3E19999A;
    MEM8(esp + 0x20) = 5;
    MEM8(esp + 0x21) = LO8(eax);
    PUSH32(esp, 0x0011AB32u); RECOMP_ABI_CALL(0x00118860u, sub_00118860); /* call 0x00118860 */

loc_0011AB32: ;
    PUSH32(esp, 0x3DA2D4);
    PUSH32(esp, 0x0011AB3Cu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011AB3C: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA2D4);
    PUSH32(esp, 0x0011AB4Bu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011AB4B: ;
    ecx = eax;
    PUSH32(esp, 0x0011AB52u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011AB52: ;
    SET_LO8(edx, MEM8(esp + 0x19));
    MEM32(esp + 8) = eax;
    eax = esp + 0x10;
    ecx = esp + 8;
    PUSH32(esp, eax);
    SET_LO8(edx, LO8(edx) & 0xFE);
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = 0xF;
    MEM32(esp + 0x1C) = 0x3E19999A;
    MEM8(esp + 0x20) = 6;
    MEM8(esp + 0x21) = LO8(edx);
    ecx = esi;
    PUSH32(esp, 0x0011AB87u); RECOMP_ABI_CALL(0x00118860u, sub_00118860); /* call 0x00118860 */

loc_0011AB87: ;
    PUSH32(esp, 0x3DA384);
    PUSH32(esp, 0x0011AB91u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011AB91: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA384);
    PUSH32(esp, 0x0011ABA0u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011ABA0: ;
    ecx = eax;
    PUSH32(esp, 0x0011ABA7u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011ABA7: ;
    SET_LO8(ecx, MEM8(esp + 0x19));
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    edx = esp + 0x10;
    MEM32(esp + 8) = eax;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    MEM8(esp + 0x1D) = LO8(ecx);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x18) = 0xC;
    MEM32(esp + 0x1C) = 0x3E19999A;
    MEM8(esp + 0x20) = 7;
    PUSH32(esp, 0x0011ABDCu); RECOMP_ABI_CALL(0x00118860u, sub_00118860); /* call 0x00118860 */

loc_0011ABDC: ;
    PUSH32(esp, 0x3DA368);
    PUSH32(esp, 0x0011ABE6u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011ABE6: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA368);
    PUSH32(esp, 0x0011ABF5u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011ABF5: ;
    ecx = eax;
    PUSH32(esp, 0x0011ABFCu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011ABFC: ;
    MEM32(esp + 8) = eax;
    SET_LO8(eax, MEM8(esp + 0x19));
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    SET_LO8(eax, LO8(eax) & 0xFE);
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x18) = 9;
    MEM32(esp + 0x1C) = 0x3E19999A;
    MEM8(esp + 0x20) = 8;
    MEM8(esp + 0x21) = LO8(eax);
    PUSH32(esp, 0x0011AC30u); RECOMP_ABI_CALL(0x00118860u, sub_00118860); /* call 0x00118860 */

loc_0011AC30: ;
    PUSH32(esp, 0x3DA350);
    PUSH32(esp, 0x0011AC3Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011AC3A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA350);
    PUSH32(esp, 0x0011AC49u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011AC49: ;
    ecx = eax;
    PUSH32(esp, 0x0011AC50u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011AC50: ;
    SET_LO8(edx, MEM8(esp + 0x19));
    MEM32(esp + 8) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    SET_LO8(edx, LO8(edx) & 0xFE);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x18) = 8;
    MEM32(esp + 0x1C) = 0x3E19999A;
    MEM8(esp + 0x20) = 9;
    MEM8(esp + 0x21) = LO8(edx);
    PUSH32(esp, 0x0011AC85u); RECOMP_ABI_CALL(0x00118860u, sub_00118860); /* call 0x00118860 */

loc_0011AC85: ;
    PUSH32(esp, 0x3DA358);
    PUSH32(esp, 0x0011AC8Fu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011AC8F: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA358);
    PUSH32(esp, 0x0011AC9Eu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011AC9E: ;
    ecx = eax;
    PUSH32(esp, 0x0011ACA5u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011ACA5: ;
    MEM32(esp + 8) = eax;
    eax = 0xA;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = 0x3E19999A;
    MEM8(esp + 0x18) = LO8(eax);
    SET_LO8(ecx, MEM8(esp + 0x19));
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    MEM8(esp + 0x1D) = LO8(ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011ACDAu); RECOMP_ABI_CALL(0x00118860u, sub_00118860); /* call 0x00118860 */

loc_0011ACDA: ;
    PUSH32(esp, 0x3DA370);
    PUSH32(esp, 0x0011ACE4u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011ACE4: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA370);
    PUSH32(esp, 0x0011ACF3u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011ACF3: ;
    ecx = eax;
    PUSH32(esp, 0x0011ACFAu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011ACFA: ;
    MEM32(esp + 8) = eax;
    eax = 0xB;
    MEM32(esp + 0x10) = eax;
    MEM8(esp + 0x18) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x19));
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    SET_LO8(eax, LO8(eax) & 0xFE);
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x1C) = 0x3E19999A;
    MEM8(esp + 0x21) = LO8(eax);
    PUSH32(esp, 0x0011AD2Eu); RECOMP_ABI_CALL(0x00118860u, sub_00118860); /* call 0x00118860 */

loc_0011AD2E: ;
    PUSH32(esp, 0x3DA320);
    PUSH32(esp, 0x0011AD38u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011AD38: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA320);
    PUSH32(esp, 0x0011AD47u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011AD47: ;
    ecx = eax;
    PUSH32(esp, 0x0011AD4Eu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011AD4E: ;
    SET_LO8(edx, MEM8(esp + 0x19));
    MEM32(esp + 8) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    SET_LO8(edx, LO8(edx) & 0xFE);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x18) = 1;
    MEM32(esp + 0x1C) = 0x3E19999A;
    MEM8(esp + 0x20) = 0xC;
    MEM8(esp + 0x21) = LO8(edx);
    PUSH32(esp, 0x0011AD83u); RECOMP_ABI_CALL(0x00118860u, sub_00118860); /* call 0x00118860 */

loc_0011AD83: ;
    PUSH32(esp, 0x3DA334);
    PUSH32(esp, 0x0011AD8Du); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011AD8D: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA334);
    PUSH32(esp, 0x0011AD9Cu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011AD9C: ;
    ecx = eax;
    PUSH32(esp, 0x0011ADA3u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011ADA3: ;
    SET_LO8(ecx, MEM8(esp + 0x19));
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    edx = esp + 0x10;
    MEM32(esp + 8) = eax;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    MEM8(esp + 0x1D) = LO8(ecx);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x18) = 2;
    MEM32(esp + 0x1C) = 0x3E19999A;
    MEM8(esp + 0x20) = 0xD;
    PUSH32(esp, 0x0011ADD8u); RECOMP_ABI_CALL(0x00118860u, sub_00118860); /* call 0x00118860 */

loc_0011ADD8: ;
    PUSH32(esp, 0x3DA348);
    PUSH32(esp, 0x0011ADE2u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011ADE2: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA348);
    PUSH32(esp, 0x0011ADF1u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011ADF1: ;
    ecx = eax;
    PUSH32(esp, 0x0011ADF8u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011ADF8: ;
    MEM32(esp + 8) = eax;
    SET_LO8(eax, MEM8(esp + 0x19));
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    SET_LO8(eax, LO8(eax) & 0xFE);
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0x3E19999A;
    MEM8(esp + 0x20) = 0xE;
    MEM8(esp + 0x21) = LO8(eax);
    PUSH32(esp, 0x0011AE2Cu); RECOMP_ABI_CALL(0x00118860u, sub_00118860); /* call 0x00118860 */

loc_0011AE2C: ;
    PUSH32(esp, 0x3DA27C);
    PUSH32(esp, 0x0011AE36u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011AE36: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA27C);
    PUSH32(esp, 0x0011AE45u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011AE45: ;
    ecx = eax;
    PUSH32(esp, 0x0011AE4Cu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011AE4C: ;
    SET_LO8(edx, MEM8(esp + 0x19));
    MEM32(esp + 8) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    SET_LO8(edx, LO8(edx) & 0xFE);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x18) = 3;
    MEM32(esp + 0x1C) = 0x3E19999A;
    MEM8(esp + 0x20) = 0xF;
    MEM8(esp + 0x21) = LO8(edx);
    PUSH32(esp, 0x0011AE81u); RECOMP_ABI_CALL(0x00118860u, sub_00118860); /* call 0x00118860 */

loc_0011AE81: ;
    PUSH32(esp, 0x3DA2A4);
    PUSH32(esp, 0x0011AE8Bu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011AE8B: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA2A4);
    PUSH32(esp, 0x0011AE9Au); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011AE9A: ;
    ecx = eax;
    PUSH32(esp, 0x0011AEA1u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011AEA1: ;
    SET_LO8(ecx, MEM8(esp + 0x19));
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    edx = esp + 0x10;
    MEM32(esp + 8) = eax;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    MEM8(esp + 0x1D) = LO8(ecx);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x18) = 4;
    MEM32(esp + 0x1C) = 0x3E19999A;
    MEM8(esp + 0x20) = 0x10;
    PUSH32(esp, 0x0011AED6u); RECOMP_ABI_CALL(0x00118860u, sub_00118860); /* call 0x00118860 */

loc_0011AED6: ;
    PUSH32(esp, 0x3DA29C);
    PUSH32(esp, 0x0011AEE0u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011AEE0: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA29C);
    PUSH32(esp, 0x0011AEEFu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011AEEF: ;
    ecx = eax;
    PUSH32(esp, 0x0011AEF6u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011AEF6: ;
    MEM32(esp + 8) = eax;
    SET_LO8(eax, MEM8(esp + 0x19));
    ecx = esp + 0x10;
    SET_LO8(eax, LO8(eax) & 0xFE);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    MEM32(esp + 0x14) = 6;
    MEM32(esp + 0x18) = 0x3E19999A;
    MEM8(esp + 0x1C) = 0x11;
    MEM8(esp + 0x1D) = LO8(eax);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0011AF2Au); RECOMP_ABI_CALL(0x00118860u, sub_00118860); /* call 0x00118860 */

loc_0011AF2A: ;
    PUSH32(esp, 0x3DA294);
    PUSH32(esp, 0x0011AF34u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011AF34: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA294);
    PUSH32(esp, 0x0011AF43u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011AF43: ;
    ecx = eax;
    PUSH32(esp, 0x0011AF4Au); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011AF4A: ;
    SET_LO8(edx, MEM8(esp + 0x19));
    MEM32(esp + 8) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    SET_LO8(edx, LO8(edx) & 0xFE);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x18) = 5;
    MEM32(esp + 0x1C) = 0x3E19999A;
    MEM8(esp + 0x20) = 0x12;
    MEM8(esp + 0x21) = LO8(edx);
    PUSH32(esp, 0x0011AF7Fu); RECOMP_ABI_CALL(0x00118860u, sub_00118860); /* call 0x00118860 */

loc_0011AF7F: ;
    PUSH32(esp, 0x3DA28C);
    PUSH32(esp, 0x0011AF89u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011AF89: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA28C);
    PUSH32(esp, 0x0011AF98u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011AF98: ;
    ecx = eax;
    PUSH32(esp, 0x0011AF9Fu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011AF9F: ;
    SET_LO8(ecx, MEM8(esp + 0x19));
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    edx = esp + 0x10;
    MEM32(esp + 8) = eax;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    MEM8(esp + 0x1D) = LO8(ecx);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x18) = 7;
    MEM32(esp + 0x1C) = 0x3E19999A;
    MEM8(esp + 0x20) = 0x13;
    PUSH32(esp, 0x0011AFD4u); RECOMP_ABI_CALL(0x00118860u, sub_00118860); /* call 0x00118860 */

loc_0011AFD4: ;
    ecx = MEM32(esp + 0x1C);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0011AFF0
 * Original: 0x0011AFF0 - 0x0011B00E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011AFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011AFF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0011AFF8u); RECOMP_ABI_CALL(0x0011A880u, sub_0011A880); /* call 0x0011A880 */

loc_0011AFF8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011B008; /* je: equal / zero */

loc_0011AFFF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011B005u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_0011B005: ;
    esp = esp + 4;

loc_0011B008: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011B010
 * Original: 0x0011B010 - 0x0011B083 (115 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B010(void)
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

loc_0011B010: ;
    fp_push(MEMF(ecx)); /* fld float */
    edx = MEM32(esp + 4);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011B023; /* jne: not equal / not zero */

loc_0011B01F: ;
    eax = MEM32(edx);
    MEM32(ecx) = eax;

loc_0011B023: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011B036; /* jne: not equal / not zero */

loc_0011B030: ;
    eax = MEM32(edx + 4);
    MEM32(ecx + 4) = eax;

loc_0011B036: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011B049; /* jne: not equal / not zero */

loc_0011B043: ;
    eax = MEM32(edx + 8);
    MEM32(ecx + 8) = eax;

loc_0011B049: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0011B05A; /* jp: parity */

loc_0011B055: ;
    eax = MEM32(edx);
    MEM32(ecx + 0xC) = eax;

loc_0011B05A: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0011B06D; /* jp: parity */

loc_0011B067: ;
    eax = MEM32(edx + 4);
    MEM32(ecx + 0x10) = eax;

loc_0011B06D: ;
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0011B080; /* jp: parity */

loc_0011B07A: ;
    edx = MEM32(edx + 8);
    MEM32(ecx + 0x14) = edx;

loc_0011B080: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011B090
 * Original: 0x0011B090 - 0x0011B1C9 (313 bytes, 92 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B090(void)
{

loc_0011B090: ;
    esp = esp - 0xC0;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 8);
    MEM32(esp + 4) = eax;
    eax = ecx;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi);
    MEM32(esp + 8) = ecx;
    ecx = edx;
    MEM32(esp + 0x1C) = eax;
    eax = ecx;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esi + 0xC);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esi);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esi + 4);
    MEM32(esp + 0x34) = eax;
    eax = ecx;
    MEM32(esp + 0x44) = eax;
    eax = MEM32(esi);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(esi + 0xC);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(esi + 0xC);
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(esi + 0x10);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esi + 0x10);
    MEM32(esp + 0x58) = eax;
    PUSH32(esp, 8);
    MEM32(esp + 0x54) = ecx;
    MEM32(esp + 0x60) = ecx;
    eax = esp + 0x68;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x34) = edx;
    edx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xD4);
    MEM32(esp + 0x48) = edx;
    MEM32(esp + 0x54) = edx;
    MEM32(esp + 0x60) = edx;
    MEM32(esp + 0x6C) = edx;
    PUSH32(esp, 0x0011B13Fu); RECOMP_ABI_CALL(0x0023F140u, sub_0023F140); /* call 0x0023F140 */

loc_0011B13F: ;
    edx = MEM32(esp + 0x64);
    ecx = MEM32(esp + 0x6C);
    eax = MEM32(esp + 0x68);
    MEM32(esi) = edx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0xC) = edx;
    edx = esp + 0x70;
    MEM32(esi + 0x14) = ecx;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x0011B168u); RECOMP_ABI_CALL(0x0011B010u, sub_0011B010); /* call 0x0011B010 */

loc_0011B168: ;
    eax = esp + 0x7C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011B174u); RECOMP_ABI_CALL(0x0011B010u, sub_0011B010); /* call 0x0011B010 */

loc_0011B174: ;
    ecx = esp + 0x88;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0011B183u); RECOMP_ABI_CALL(0x0011B010u, sub_0011B010); /* call 0x0011B010 */

loc_0011B183: ;
    edx = esp + 0x94;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0011B192u); RECOMP_ABI_CALL(0x0011B010u, sub_0011B010); /* call 0x0011B010 */

loc_0011B192: ;
    eax = esp + 0xA0;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011B1A1u); RECOMP_ABI_CALL(0x0011B010u, sub_0011B010); /* call 0x0011B010 */

loc_0011B1A1: ;
    ecx = esp + 0xAC;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0011B1B0u); RECOMP_ABI_CALL(0x0011B010u, sub_0011B010); /* call 0x0011B010 */

loc_0011B1B0: ;
    edx = esp + 0xB8;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0011B1BFu); RECOMP_ABI_CALL(0x0011B010u, sub_0011B010); /* call 0x0011B010 */

loc_0011B1BF: ;
    POP32(esp, esi);
    esp = esp + 0xC0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011B1D0
 * Original: 0x0011B1D0 - 0x0011B1EF (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B1D0: ;
    eax = MEM32(0x5016C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011B1EE; /* je: equal / zero */

loc_0011B1D9: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011B1E1u); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_0011B1E1: ;
    esp = esp + 8;
    MEM32(0x5016C0) = 0;

loc_0011B1EE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011B1F0
 * Original: 0x0011B1F0 - 0x0011B289 (153 bytes, 58 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B1F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B1F0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C2 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0011B207; /* jl: less (signed <) */

loc_0011B1FE: ;
    eax = 0x1C2;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0011B207: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + ecx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_0011B21A; /* jne: not equal / not zero */

loc_0011B218: ;
    edx = ~edx;

loc_0011B21A: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011B244; /* jne: not equal / not zero */

loc_0011B225: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011B27F; /* jge: greater or equal (signed >=) */

loc_0011B232: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + edx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_0011B240; /* jne: not equal / not zero */

loc_0011B23E: ;
    edx = ~edx;

loc_0011B240: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011B225; /* je: equal / zero */

loc_0011B244: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011B252; /* jne: not equal / not zero */

loc_0011B24C: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_0011B252: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011B25C; /* jne: not equal / not zero */

loc_0011B256: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_0011B25C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011B267; /* jne: not equal / not zero */

loc_0011B261: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_0011B267: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011B278; /* jne: not equal / not zero */

loc_0011B26C: ;
    /* nop */

loc_0011B270: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011B270; /* je: equal / zero */

loc_0011B278: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011B284; /* jl: less (signed <) */

loc_0011B27F: ;
    eax = 0x1C2;

loc_0011B284: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011B290
 * Original: 0x0011B290 - 0x0011B2A2 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B290: ;
    edx = MEM32(ecx + 0x9430);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1C2 (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B2B0
 * Original: 0x0011B2B0 - 0x0011B323 (115 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B2B0: ;
    eax = MEM32(ecx + 0x93F4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011B2DE; /* jne: not equal / not zero */

loc_0011B2BC: ;
    /* nop */

loc_0011B2C0: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1C2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011B312; /* jge: greater or equal (signed >=) */

loc_0011B2CE: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(ecx + eax * 4 + 0x93F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011B2C0; /* je: equal / zero */

loc_0011B2DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011B2EB; /* jne: not equal / not zero */

loc_0011B2E5: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_0011B2EB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011B2F5; /* jne: not equal / not zero */

loc_0011B2EF: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_0011B2F5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011B2FF; /* jne: not equal / not zero */

loc_0011B2F9: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_0011B2FF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011B30A; /* jne: not equal / not zero */

loc_0011B303: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011B303; /* je: equal / zero */

loc_0011B30A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1C2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011B317; /* jl: less (signed <) */

loc_0011B312: ;
    edx = 0x1C2;

loc_0011B317: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011B330
 * Original: 0x0011B330 - 0x0011B370 (64 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0011B330: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0x9B3C);
    _cf = 0; /* logical op clears CF */
    edx = edx & eax;
    _fa = (uint32_t)(MEM32(esi + edx * 4 + 0x9434)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + edx * 4 + 0x9434), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0011B36A; /* jne: not equal / not zero */

loc_0011B348: ;
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    eax = 1;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((5) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ecx = MEM32(esi + edx * 4 + 0x93F4);
    POP32(esp, esi);
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    esp += 8; return; /* ret 4 */

loc_0011B36A: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011B370
 * Original: 0x0011B370 - 0x0011B387 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B370(void)
{

loc_0011B370: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x70C) = ecx;
    MEM32(eax + 0x710) = ecx;
    MEM32(eax + 0x714) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0011B390
 * Original: 0x0011B390 - 0x0011B3F2 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B390: ;
    edx = ecx;
    eax = MEM32(edx + 0x93B4);
    eax = MEM32(edx + eax * 4 + 0x8CA4);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x93BC;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x93B4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1C2 (32-bit) */
    MEM32(edx + 0x93B4) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0011B3DC; /* jl: less (signed <) */

loc_0011B3D2: ;
    MEM32(edx + 0x93B4) = 0;

loc_0011B3DC: ;
    MEM32(edx + 0x93B8) = MEM32(edx + 0x93B8) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x93B8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x93F8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x93F8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011B400
 * Original: 0x0011B400 - 0x0011B462 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B400: ;
    edx = ecx;
    eax = MEM32(edx + 0x93EC);
    eax = MEM32(edx + eax * 4 + 0x8CDC);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x93F4;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x93EC);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1C2 (32-bit) */
    MEM32(edx + 0x93EC) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0011B44C; /* jl: less (signed <) */

loc_0011B442: ;
    MEM32(edx + 0x93EC) = 0;

loc_0011B44C: ;
    MEM32(edx + 0x93F0) = MEM32(edx + 0x93F0) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x93F0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x9430);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x9430) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011B470
 * Original: 0x0011B470 - 0x0011B4B9 (73 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B470: ;
    eax = MEM32(ecx + 0x70C);
    edx = MEM32(ecx + 0x714);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C2 (32-bit) */
    MEM32(ecx + 0x70C) = eax;
    MEM32(ecx + 0x714) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0011B4AC; /* jl: less (signed <) */

loc_0011B491: ;
    edx = MEM32(esp + 4);
    MEM32(ecx + 0x70C) = 0;
    edx = MEM32(edx);
    eax = 0x1C1;
    MEM32(ecx + eax * 4) = edx;
    esp += 8; return; /* ret 4 */

loc_0011B4AC: ;
    edx = MEM32(esp + 4);
    edx = MEM32(edx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + eax * 4) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011B4C0
 * Original: 0x0011B4C0 - 0x0011B533 (115 bytes, 47 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B4C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011B4C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3FFFFFFF (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0011B51C; /* je: equal / zero */

loc_0011B4D5: ;
    ebp = MEM32(esp + 0x18);
    /* nop */

loc_0011B4E0: ;
    ecx = MEM32(esp + 0x10);
    eax = esi + esi * 4;
    eax = eax << 4;
    edi = eax + ecx;
    ebx = edi + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0011B4F7u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0011B4F7: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0011B503; /* jge: greater or equal (signed >=) */

loc_0011B4FE: ;
    esi = MEM32(edi + 0x10);
    goto loc_0011B514;

loc_0011B503: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0011B50Au); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0011B50A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0011B529; /* jge: greater or equal (signed >=) */

loc_0011B511: ;
    esi = MEM32(edi + 0x14);

loc_0011B514: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B4E0; /* jne: not equal / not zero */

loc_0011B51C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x3FFFFFFF;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0011B529: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011B540
 * Original: 0x0011B540 - 0x0011B5A2 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B540: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x93E8) = esi;
    MEM32(ecx + 0x93EC) = esi;
    MEM32(ecx + 0x93F0) = esi;
    edx = 0; /* xor self */
    goto loc_0011B560;

    /* nop */

loc_0011B560: ;
    eax = MEM32(ecx + 0x93E8);
    edi = MEM32(ecx + 0x93F0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C2 (32-bit) */
    MEM32(ecx + 0x93E8) = eax;
    MEM32(ecx + 0x93F0) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0011B58E; /* jl: less (signed <) */

loc_0011B581: ;
    MEM32(ecx + 0x93E8) = esi;
    eax = 0x1C1;
    goto loc_0011B58F;

loc_0011B58E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0011B58F: ;
    MEM32(ecx + eax * 4 + 0x8CDC) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1C2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011B560; /* jl: less (signed <) */

loc_0011B59F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011B5B0
 * Original: 0x0011B5B0 - 0x0011B5BC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B5B0(void)
{

loc_0011B5B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0011B5B8u); RECOMP_ABI_CALL(0x0011B370u, sub_0011B370); /* call 0x0011B370 */

loc_0011B5B8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011B5C0
 * Original: 0x0011B5C0 - 0x0011B622 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B5C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B5C0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x93B0) = esi;
    MEM32(ecx + 0x93B4) = esi;
    MEM32(ecx + 0x93B8) = esi;
    edx = 0; /* xor self */
    goto loc_0011B5E0;

    /* nop */

loc_0011B5E0: ;
    eax = MEM32(ecx + 0x93B0);
    edi = MEM32(ecx + 0x93B8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C2 (32-bit) */
    MEM32(ecx + 0x93B0) = eax;
    MEM32(ecx + 0x93B8) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0011B60E; /* jl: less (signed <) */

loc_0011B601: ;
    MEM32(ecx + 0x93B0) = esi;
    eax = 0x1C1;
    goto loc_0011B60F;

loc_0011B60E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0011B60F: ;
    MEM32(ecx + eax * 4 + 0x8CA4) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1C2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011B5E0; /* jl: less (signed <) */

loc_0011B61F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011B630
 * Original: 0x0011B630 - 0x0011B6B2 (130 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B630: ;
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
    edi = MEM32(ecx + eax + 0x8CA0);
    edx = ~edx;
    edi = edi & edx;
    MEM32(ecx + eax + 0x8CA0) = edi;
    MEM32(ecx + eax + 0x93F4) = MEM32(ecx + eax + 0x93F4) & edx;
    ecx = MEM32(eax + 0x93E8);
    edx = MEM32(eax + 0x93F0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1C2 (32-bit) */
    MEM32(eax + 0x93E8) = ecx;
    MEM32(eax + 0x93F0) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0011B698; /* jl: less (signed <) */

loc_0011B687: ;
    MEM32(eax + 0x93E8) = 0;
    ecx = 0x1C1;
    goto loc_0011B699;

loc_0011B698: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0011B699: ;
    MEM32(eax + ecx * 4 + 0x8CDC) = esi;
    ecx = MEM32(eax + 0x9430);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x9430) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011B6C0
 * Original: 0x0011B6C0 - 0x0011B705 (69 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B6C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0xC;
    ecx = 0x1C2;
    /* nop */

loc_0011B6D0: ;
    MEM8(eax) = 0;
    eax = eax + 0x50;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0011B6D0; /* jne: not equal / not zero */

loc_0011B6D9: ;
    ecx = esi + 0x8CA4;
    PUSH32(esp, 0x0011B6E4u); RECOMP_ABI_CALL(0x0011B5B0u, sub_0011B5B0); /* call 0x0011B5B0 */

loc_0011B6E4: ;
    eax = 0; /* xor self */
    ecx = 0xF;
    edi = esi + 0x93BC;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    MEM32(esi + 0x93F8) = eax;
    PUSH32(esp, 0x0011B700u); RECOMP_ABI_CALL(0x0011B5C0u, sub_0011B5C0); /* call 0x0011B5C0 */

loc_0011B700: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011B710
 * Original: 0x0011B710 - 0x0011B7B5 (165 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B710: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ebx = 0; /* xor self */
    ecx = 0xF;
    edi = esi + 0x8CA0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0x93E8) = ebx;
    MEM32(esi + 0x93EC) = ebx;
    MEM32(esi + 0x93F0) = ebx;
    ecx = 0xF;
    edi = esi + 0x93F4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    MEM32(esi + 0x9430) = ebx;
    PUSH32(esp, 0x0011B752u); RECOMP_ABI_CALL(0x0011B540u, sub_0011B540); /* call 0x0011B540 */

loc_0011B752: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x9B3C) = ebx;
    MEM32(esi + 0x9B40) = ebx;
    ecx = 0x1C1;
    edx = 0; /* xor self */

loc_0011B767: ;
    eax = eax + eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    eax = eax | 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B767; /* jne: not equal / not zero */

loc_0011B773: ;
    MEM32(esi + 0x9B3C) = eax;
    MEM32(esi + 0x9B40) = edx;
    eax = 0; /* xor self */
    edx = esi + 0x9434;
    goto loc_0011B790;

    /* nop */

loc_0011B790: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x9B40);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011B790; /* jl: less (signed <) */

loc_0011B7AF: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011B7C0
 * Original: 0x0011B7C0 - 0x0011B83D (125 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B7C0: ;
    eax = MEM32(esp + 4);
    esp = esp - 0x44;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0011B833; /* je: equal / zero */

loc_0011B7CF: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011B7DCu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0011B7DC: ;
    ecx = MEM32(edi + 0x9B48);
    esi = edi + 0x9B44;
    esp = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(esp + 0x53) = 0;
    PUSH32(esp, 0x0011B7FDu); RECOMP_ABI_CALL(0x0011B4C0u, sub_0011B4C0); /* call 0x0011B4C0 */

loc_0011B7FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B808; /* jne: not equal / not zero */

loc_0011B804: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B833; /* je: equal / zero */

loc_0011B808: ;
    esi = MEM32(esi + eax * 4 + 0x9408);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0011B817u); RECOMP_ABI_CALL(0x0011B330u, sub_0011B330); /* call 0x0011B330 */

loc_0011B817: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011B833; /* je: equal / zero */

loc_0011B81B: ;
    eax = MEM32(edi + 0x9B3C);
    eax = eax & esi;
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x44;
    esp += 8; return; /* ret 4 */

loc_0011B833: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x44;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011B840
 * Original: 0x0011B840 - 0x0011B9DC (412 bytes, 129 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B840(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011B840: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = esp + 8;
    PUSH32(esp, eax);
    ebp = ecx;
    PUSH32(esp, 0x0011B851u); RECOMP_ABI_CALL(0x0011B2B0u, sub_0011B2B0); /* call 0x0011B2B0 */

loc_0011B851: ;
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x1C2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B9D4; /* je: equal / zero */

loc_0011B861: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0011B863: ;
    esi = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x1C);
    ecx = ebx + ebx * 4;
    ecx = ecx << 4;
    edi = ecx + esi;
    _fa = (uint32_t)(MEM32(edi + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x44), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B943; /* jne: not equal / not zero */

loc_0011B87D: ;
    ecx = MEM32(edi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B943; /* jne: not equal / not zero */

loc_0011B88A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x4C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0011B893u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011B893: ;
    ecx = MEM32(ebp + 0x9B48);
    esi = ebp + 0x9B44;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0011B8A8u); RECOMP_ABI_CALL(0x0011B4C0u, sub_0011B4C0); /* call 0x0011B4C0 */

loc_0011B8A8: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B8DF; /* je: equal / zero */

loc_0011B8B2: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0011B8BAu); RECOMP_ABI_CALL(0x00199920u, sub_00199920); /* call 0x00199920 */

loc_0011B8BA: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    eax = 1;
    eax = eax << LO8(ecx);
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ecx = MEM32(esi + edx * 4 + 0x9B10);
    esi = esi + edx * 4 + 0x9B10;
    eax = ~eax;
    ecx = ecx & eax;
    MEM32(esi) = ecx;

loc_0011B8DF: ;
    ecx = MEM32(esp + 0x14);
    esi = ebx;
    PUSH32(esp, 1);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    ecx = ecx + 0x93F4;
    PUSH32(esp, 0x0011B8F4u); RECOMP_ABI_CALL(0x0011B1F0u, sub_0011B1F0); /* call 0x0011B1F0 */

loc_0011B8F4: ;
    PUSH32(esp, esi);
    ecx = ebp;
    ebx = eax;
    PUSH32(esp, 0x0011B8FEu); RECOMP_ABI_CALL(0x0011B630u, sub_0011B630); /* call 0x0011B630 */

loc_0011B8FE: ;
    ecx = MEM32(ebp + 0x9B40);
    eax = MEM32(ebp + esi * 4 + 0x9434);
    edx = 1;
    edx = edx << LO8(ecx);
    eax = eax + edx;
    MEM32(ebp + esi * 4 + 0x9434) = eax;
    if (((int32_t)eax >= 0)) goto loc_0011B9C6; /* jns: not sign (positive) */

loc_0011B921: ;
    MEM32(ebp + esi * 4 + 0x9434) = esi;
    ecx = MEM32(ebp + 0x9B40);
    eax = 1;
    eax = eax << LO8(ecx);
    eax = eax | esi;
    MEM32(ebp + esi * 4 + 0x9434) = eax;
    goto loc_0011B9C6;

loc_0011B943: ;
    edx = ebx + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1C2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011B9BF; /* jge: greater or equal (signed >=) */

loc_0011B94E: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4 + 0x93F4);
    esi = esi + 0x93F4;
    ecx = edx;
    ecx = ecx & 0x1F;
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011B98A; /* jne: not equal / not zero */

loc_0011B96B: ;
    goto loc_0011B970;

    /* nop */

loc_0011B970: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1C2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011B9BF; /* jge: greater or equal (signed >=) */

loc_0011B97E: ;
    ecx = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = MEM32(esi + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011B970; /* je: equal / zero */

loc_0011B98A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011B997; /* jne: not equal / not zero */

loc_0011B991: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_0011B997: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011B9A1; /* jne: not equal / not zero */

loc_0011B99B: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_0011B9A1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011B9AB; /* jne: not equal / not zero */

loc_0011B9A5: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_0011B9AB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011B9B7; /* jne: not equal / not zero */

loc_0011B9AF: ;
    /* nop */

loc_0011B9B0: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011B9B0; /* je: equal / zero */

loc_0011B9B7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1C2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011B9C4; /* jl: less (signed <) */

loc_0011B9BF: ;
    edx = 0x1C2;

loc_0011B9C4: ;
    ebx = edx;

loc_0011B9C6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x1C2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B863; /* jne: not equal / not zero */

loc_0011B9D2: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0011B9D4: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011B9E0
 * Original: 0x0011B9E0 - 0x0011BA91 (177 bytes, 57 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B9E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B9E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = ebx + 0xC;
    ecx = edi;
    PUSH32(esp, 0x0011B9EFu); RECOMP_ABI_CALL(0x0011B390u, sub_0011B390); /* call 0x0011B390 */

loc_0011B9EF: ;
    esi = MEM32(esp + 0x10);
    edx = eax + eax * 4;
    edx = edx << 4;
    edi = edx + edi + 0xC;
    ecx = 0x11;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEM32(ebx + 8) = eax;
    edi = 0x3FFFFFFF;
    esi = ebx + 4;
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(edx + ebx + 0x10) = edi;
    MEM32(edx + ebx + 0x14) = edi;
    MEM32(edx + ebx + 0xC) = 0x7FFFFFFF;
    PUSH32(esp, 0x0011BA27u); RECOMP_ABI_CALL(0x001994F0u, sub_001994F0); /* call 0x001994F0 */

loc_0011BA27: ;
    eax = MEM32(esi);
    eax = eax + eax * 4;
    eax = eax << 4;
    ecx = MEM32(eax + ebx + 0xC);
    eax = eax + ebx + 0xC;
    ecx = ecx & 0xBFFFFFFFu;
    MEM32(eax) = ecx;
    esi = MEM32(esi);
    ecx = esi + esi * 4;
    ecx = ecx << 4;
    edx = MEM32(ecx + ebx + 0xC);
    eax = ecx + ebx + 0xC;
    edx = edx & 0x40000000;
    edx = edx | edi;
    MEM32(eax) = edx;
    ecx = MEM32(ebx + 8);
    eax = ebx + ecx * 4 + 0x9408;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011BA6F; /* je: equal / zero */

loc_0011BA67: ;
    edx = MEM32(esp + 0x14);
    edx = MEM32(edx);
    MEM32(eax) = edx;

loc_0011BA6F: ;
    eax = ecx;
    ecx = ecx & 0x1F;
    edx = 1;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = ebx + eax * 4 + 0x9B10;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011BAA0
 * Original: 0x0011BAA0 - 0x0011BAB1 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BAA0(void)
{

loc_0011BAA0: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + ecx + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011BAC0
 * Original: 0x0011BAC0 - 0x0011BAED (45 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BAC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BAC0: ;
    eax = MEM32(ecx + 8);
    eax = eax + eax * 4;
    eax = eax << 4;
    edx = eax + ecx + 0x18;
    eax = MEM32(esp + 4);
    eax = eax + eax * 4;
    eax = eax << 4;
    ecx = eax + ecx + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011BAE2u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0011BAE2: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_S(_fas, _fbs)) ? 1 : 0); /* setl */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011BAF0
 * Original: 0x0011BAF0 - 0x0011BB1D (45 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BAF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BAF0: ;
    eax = MEM32(ecx + 8);
    eax = eax + eax * 4;
    eax = eax << 4;
    edx = eax + ecx + 0x18;
    eax = MEM32(esp + 4);
    PUSH32(esp, edx);
    edx = eax + eax * 4;
    edx = edx << 4;
    eax = edx + ecx + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011BB12u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0011BB12: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_S(_fas, _fbs)) ? 1 : 0); /* setl */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011BB20
 * Original: 0x0011BB20 - 0x0011BB28 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BB20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011BB20: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_0011BB30(); return; /* tail jmp 0x0011BB30 */

}

/**
 * sub_0011BB30
 * Original: 0x0011BB30 - 0x0011BB61 (49 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BB30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BB30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esi + 0x93BC;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x0011BB47u); RECOMP_ABI_CALL(0x0014A7A0u, sub_0014A7A0); /* call 0x0014A7A0 */

loc_0011BB47: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi + 0x8CA4;
    PUSH32(esp, 0x0011BB57u); RECOMP_ABI_CALL(0x0011B470u, sub_0011B470); /* call 0x0011B470 */

loc_0011BB57: ;
    MEM32(esi + 0x93F8) = MEM32(esi + 0x93F8) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x93F8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011BB70
 * Original: 0x0011BB70 - 0x0011BCA6 (310 bytes, 90 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BB70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011BB70: ;
    esp = esp - 0x14C;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0x150) = eax;
    _fa = (uint32_t)(MEM32(edi + 0x9430)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x9430), 0x1C2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011BC8D; /* jge: greater or equal (signed >=) */

loc_0011BB96: ;
    ecx = MEM32(esp + 0x158);
    ebp = MEM32(esp + 0x15C);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    MEM8(esp + 0x5C) = 0;
    PUSH32(esp, 0x0011BBB5u); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_0011BBB5: ;
    esp = esp + 0xC;
    edx = esp + 0x50;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0011BBC4u); RECOMP_ABI_CALL(0x0011B7C0u, sub_0011B7C0); /* call 0x0011B7C0 */

loc_0011BBC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011BC8D; /* jne: not equal / not zero */

loc_0011BBCC: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0011BBD4u); RECOMP_ABI_CALL(0x0011B400u, sub_0011B400); /* call 0x0011B400 */

loc_0011BBD4: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = edi + ecx * 4 + 0x8CA0;
    ecx = eax;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = MEM32(edx);
    ecx = ecx | esi;
    esi = eax + eax * 4;
    esi = esi << 4;
    esi = esi + edi;
    MEM32(edx) = ecx;
    if ((esi == 0)) goto loc_0011BC27; /* je: equal / zero */

loc_0011BBFC: ;
    PUSH32(esp, 0x44);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011BC09u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0011BC09: ;
    eax = MEM32(esp + 0x170);
    ecx = MEM32(esp + 0x174);
    MEM8(esi + 0x43) = 0;
    esp = esp + 0xC;
    MEM32(esi + 0x44) = ebp;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = ecx;

loc_0011BC27: ;
    esi = esi - edi;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    ecx = MEM32(edi + eax * 4 + 0x9434);
    PUSH32(esp, 0x44);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, 0x0011BC56u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0011BC56: ;
    esp = esp + 0xC;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi + 0x9B44;
    MEM8(esp + 0x5B) = 0;
    PUSH32(esp, 0x0011BC73u); RECOMP_ABI_CALL(0x0011B9E0u, sub_0011B9E0); /* call 0x0011B9E0 */

loc_0011BC73: ;
    POP32(esp, esi);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x148);
    PUSH32(esp, 0x0011BC84u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0011BC84: ;
    esp = esp + 0x14C;
    esp += 20; return; /* ret 16 */

loc_0011BC8D: ;
    ecx = MEM32(esp + 0x150);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    PUSH32(esp, 0x0011BC9Du); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0011BC9D: ;
    esp = esp + 0x14C;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0011BCB0
 * Original: 0x0011BCB0 - 0x0011BD00 (80 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BCB0(void)
{

loc_0011BCB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0011BCB9u); RECOMP_ABI_CALL(0x0011B710u, sub_0011B710); /* call 0x0011B710 */

loc_0011BCB9: ;
    ecx = esi + 0x9B50;
    MEM32(esi + 0x9B48) = 0x3FFFFFFF;
    MEM32(esi + 0x9B4C) = 0xFFFFFFFFu;
    MEM32(esi + 0x9B44) = 0x3DA570;
    PUSH32(esp, 0x0011BCE2u); RECOMP_ABI_CALL(0x0011B6C0u, sub_0011B6C0); /* call 0x0011B6C0 */

loc_0011BCE2: ;
    eax = 0; /* xor self */
    edi = esi + 0x13654;
    ecx = 0xF;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    MEM32(esi + 0x9B44) = 0x3DA588;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011BD00
 * Original: 0x0011BD00 - 0x0011BD41 (65 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BD00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BD00: ;
    eax = MEM32(0x5016C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011BD40; /* jne: not equal / not zero */

loc_0011BD09: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x13690);
    PUSH32(esp, 0x0011BD17u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_0011BD17: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011BD27; /* je: equal / zero */

loc_0011BD1E: ;
    ecx = eax;
    PUSH32(esp, 0x0011BD25u); RECOMP_ABI_CALL(0x0011BCB0u, sub_0011BCB0); /* call 0x0011BCB0 */

loc_0011BD25: ;
    goto loc_0011BD29;

loc_0011BD27: ;
    eax = 0; /* xor self */

loc_0011BD29: ;
    PUSH32(esp, 0x11B1D0);
    MEM32(0x5016C0) = eax;
    PUSH32(esp, 0x0011BD38u); RECOMP_ABI_CALL(0x000119F0u, sub_000119F0); /* call 0x000119F0 */

loc_0011BD38: ;
    eax = MEM32(0x5016C0);
    esp = esp + 4;

loc_0011BD40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011BD50
 * Original: 0x0011BD50 - 0x0011BD57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BD50(void)
{

loc_0011BD50: ;
    MEM32(ecx) = 0x3DA5A4;
    esp += 4; return; /* ret */

}

/**
 * sub_0011BD60
 * Original: 0x0011BD60 - 0x0011BD7F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BD60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BD60: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3DA5A4;
    if (TEST_Z(_fa, _fb)) goto loc_0011BD79; /* je: equal / zero */

loc_0011BD70: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011BD76u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_0011BD76: ;
    esp = esp + 4;

loc_0011BD79: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011BD80
 * Original: 0x0011BD80 - 0x0011BDD7 (87 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BD80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BD80: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351798);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0011BDC1; /* je: equal / zero */

loc_0011BDAC: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0011BDC1; /* jne: not equal / not zero */

loc_0011BDBC: ;
    PUSH32(esp, 0x0011BDC1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0011BDC1: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x3DA5A4;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0011BDE0
 * Original: 0x0011BDE0 - 0x0011BE86 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BDE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BDE0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3517D1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0011BE05u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_0011BE05: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0011BE11u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0011BE11: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0011BE19u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0011BE19: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011BE1Fu); RECOMP_ABI_CALL(0x00235B40u, sub_00235B40); /* call 0x00235B40 */

loc_0011BE1F: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x0011BE33u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0011BE33: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0011BE3Bu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0011BE3B: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0011BE4B; /* je: equal / zero */

loc_0011BE48: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0011BE4B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0011BE73; /* je: equal / zero */

loc_0011BE5C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0011BE73; /* jne: not equal / not zero */

loc_0011BE6C: ;
    ecx = esi;
    PUSH32(esp, 0x0011BE73u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0011BE73: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0011BE90
 * Original: 0x0011BE90 - 0x0011BED7 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BE90(void)
{

loc_0011BE90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x0011BE9Fu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_0011BE9F: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0011BEB2u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_0011BEB2: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0011BEC4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011BEC4: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011BECFu); RECOMP_ABI_CALL(0x0011BDE0u, sub_0011BDE0); /* call 0x0011BDE0 */

loc_0011BECF: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011BEE0
 * Original: 0x0011BEE0 - 0x0011BF48 (104 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BEE0(void)
{

loc_0011BEE0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3517F3);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = esi;
    edi = esi + 4;
    PUSH32(esp, 3);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = ebx;
    MEM32(esi) = 0x3DA5CC;
    PUSH32(esp, 0x0011BF16u); RECOMP_ABI_CALL(0x0011BE90u, sub_0011BE90); /* call 0x0011BE90 */

loc_0011BF16: ;
    esp = esp + 8;
    ecx = MEM32(edi);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM8(esi + 0x18) = LO8(ebx);
    eax = MEM32(ecx);
    MEM8(esp + 0x18) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x0011BF34u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011BF34: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0011BF50
 * Original: 0x0011BF50 - 0x0011BF76 (38 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BF50(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0011BF50: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = fp_top() * MEMD(0x3DA5F0); /* fmul qword ptr [0x3da5f0] */
    esi = ecx;
    PUSH32(esp, 0x0011BF62u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0011BF62: ;
    ecx = MEM32(esi + 0x10);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    eax = MEM32(esi + 0x14);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011BF80
 * Original: 0x0011BF80 - 0x0011BFBF (63 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BF80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0011BF80: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ecx = MEM32(esi + 4);
    if (TEST_NZ(_fa, _fb)) goto loc_0011BF9E; /* jne: not equal / not zero */

loc_0011BF8D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0011BF92u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011BF92: ;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = edx;
    MEM8(esi + 0x18) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011BF9E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0011BFA3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011BFA3: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esi + 8)));
    eax = eax - MEM32(esi + 8);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(MEM32(esi + 0xC)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    ecx = MEM32(esi + 0x10);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    eax = MEM32(esi + 0x14);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = eax;
    MEM8(esi + 0x18) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011BFC0
 * Original: 0x0011BFC0 - 0x0011BFDE (30 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BFC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BFC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011BFDC; /* jne: not equal / not zero */

loc_0011BFCA: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0011BFD2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011BFD2: ;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = edx;
    MEM8(esi + 0x18) = 1;

loc_0011BFDC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011BFE0
 * Original: 0x0011BFE0 - 0x0011C00E (46 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BFE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0011BFE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0011C00C; /* je: equal / zero */

loc_0011BFEA: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0011BFF2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011BFF2: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esi + 8)));
    eax = eax - MEM32(esi + 8);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(MEM32(esi + 0xC)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    ecx = MEM32(esi + 0x10);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    eax = MEM32(esi + 0x14);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = eax;
    MEM8(esi + 0x18) = 0;

loc_0011C00C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011C010
 * Original: 0x0011C010 - 0x0011C02F (31 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C010(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0011C010: ;
    esp = esp - 8;
    ecx = MEM32(ecx + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0011C01Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011C01B: ;
    MEM32(esp) = eax;
    MEM32(esp + 4) = edx;
    fp_push((double)SMEM64(esp)); /* fild */
    fp_top() = fp_top() * MEMD(0x3DA5F8); /* fmul qword ptr [0x3da5f8] */
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011C030
 * Original: 0x0011C030 - 0x0011C04C (28 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C030(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0011C030: ;
    esp = esp - 8;
    PUSH32(esp, 0x0011C038u); RECOMP_ABI_CALL(0x0011C050u, sub_0011C050); /* call 0x0011C050 */

loc_0011C038: ;
    MEM32(esp) = eax;
    MEM32(esp + 4) = edx;
    fp_push((double)SMEM64(esp)); /* fild */
    fp_top() = fp_top() * MEMD(0x3DA5F8); /* fmul qword ptr [0x3da5f8] */
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011C050
 * Original: 0x0011C050 - 0x0011C07C (44 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0011C050: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0011C06C; /* je: equal / zero */

loc_0011C05A: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0x14);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    edx = MEM32(esi + 0xC);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011C06C: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0011C074u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011C074: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esi + 0x10)));
    eax = eax - MEM32(esi + 0x10);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(MEM32(esi + 0x14)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011C080
 * Original: 0x0011C080 - 0x0011C098 (24 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C080(void)
{

loc_0011C080: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011C08Cu); RECOMP_ABI_CALL(0x00011A40u, sub_00011A40); /* call 0x00011A40 */

loc_0011C08C: ;
    esp = esp + 4;
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011C0A0
 * Original: 0x0011C0A0 - 0x0011C0BE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C0A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C0A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0011C0A8u); RECOMP_ABI_CALL(0x0011BD80u, sub_0011BD80); /* call 0x0011BD80 */

loc_0011C0A8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011C0B8; /* je: equal / zero */

loc_0011C0AF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011C0B5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_0011C0B5: ;
    esp = esp + 4;

loc_0011C0B8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011C0C0
 * Original: 0x0011C0C0 - 0x0011C11C (92 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C0C0: ;
    eax = MEM32(XBOX_FS_BASE);
    SET_LO8(ecx, MEM8(0x5016E8));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x35180E);
    PUSH32(esp, eax);
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_0011C109; /* jne: not equal / not zero */

loc_0011C0E4: ;
    MEM32(0x5016E8) = MEM32(0x5016E8) | eax;
    ecx = 0x5016C8;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0011C0FCu); RECOMP_ABI_CALL(0x0011BEE0u, sub_0011BEE0); /* call 0x0011BEE0 */

loc_0011C0FC: ;
    PUSH32(esp, 0x35A2C0);
    PUSH32(esp, 0x0011C106u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_0011C106: ;
    esp = esp + 4;

loc_0011C109: ;
    ecx = MEM32(esp);
    eax = 0x5016C8;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0011C120
 * Original: 0x0011C120 - 0x0011C185 (101 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C120: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    eax = ecx + 0x46C;
    MEM8(eax) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0011C180; /* je: equal / zero */

loc_0011C135: ;
    edx = MEM32(edi);
    PUSH32(esp, ebx);

loc_0011C138: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011C147; /* je: equal / zero */

loc_0011C13C: ;
    SET_LO8(ebx, MEM8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011C147; /* je: equal / zero */

loc_0011C142: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x20 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011C14C; /* jle: less or equal (signed <=) */

loc_0011C147: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0x3B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0x3B (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011C150; /* jne: not equal / not zero */

loc_0011C14C: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0011C138;

    /* nop */

loc_0011C150: ;
    SET_LO8(ebx, MEM8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x20 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011C16B; /* jle: less or equal (signed <=) */

loc_0011C157: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x3B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x3B (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011C16B; /* je: equal / zero */

loc_0011C15C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x200 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011C171; /* jge: greater or equal (signed >=) */

loc_0011C164: ;
    MEM8(eax + esi) = LO8(ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0011C150; /* jne: not equal / not zero */

loc_0011C16B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x200 (32-bit) */

loc_0011C171: ;
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0011C176; /* jne: not equal / not zero */

loc_0011C174: ;
    esi = 0; /* xor self */

loc_0011C176: ;
    MEM8(esi + ecx + 0x46C) = 0;
    MEM32(edi) = edx;

loc_0011C180: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011C190
 * Original: 0x0011C190 - 0x0011C1D7 (71 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C190: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    eax = ecx + 0x46C;
    MEM8(eax) = LO8(edx);
    if (TEST_Z(_fa, _fb)) goto loc_0011C1D3; /* je: equal / zero */

loc_0011C1A3: ;
    PUSH32(esp, esi);
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011C1C8; /* je: equal / zero */

loc_0011C1AA: ;
    PUSH32(esp, ebx);
    goto loc_0011C1B0;

    /* nop */

loc_0011C1B0: ;
    SET_LO8(ebx, MEM8(esi));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011C1BD; /* je: equal / zero */

loc_0011C1B6: ;
    MEM8(eax + edx) = LO8(ebx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0011C1B0; /* jne: not equal / not zero */

loc_0011C1BD: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x200 (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0011C1C8; /* jne: not equal / not zero */

loc_0011C1C6: ;
    edx = 0; /* xor self */

loc_0011C1C8: ;
    MEM8(edx + ecx + 0x46C) = 0;
    MEM32(edi) = esi;
    POP32(esp, esi);

loc_0011C1D3: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011C1E0
 * Original: 0x0011C1E0 - 0x0011C200 (32 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C1E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C1E0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0011C1EAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011C1EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011C1FD; /* je: equal / zero */

loc_0011C1EE: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0011C1FAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011C1FA: ;
    esp = esp + 8;

loc_0011C1FD: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0011C200
 * Original: 0x0011C200 - 0x0011C220 (32 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C200: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0011C20Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011C20A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011C216; /* je: equal / zero */

loc_0011C20E: ;
    ecx = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0011C215u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011C215: ;
    POP32(esp, ecx);

loc_0011C216: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011C220
 * Original: 0x0011C220 - 0x0011C236 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C220: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011C235; /* je: equal / zero */

loc_0011C228: ;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;

loc_0011C235: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011C240
 * Original: 0x0011C240 - 0x0011C315 (213 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C240: ;
    eax = MEM32(ecx + 0x200);
    PUSH32(esp, esi);
    esi = ecx + 0x200;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011C26E; /* jne: not equal / not zero */

loc_0011C253: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011C30C; /* jge: greater or equal (signed >=) */

loc_0011C262: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011C253; /* je: equal / zero */

loc_0011C26E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011C27B; /* jne: not equal / not zero */

loc_0011C275: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_0011C27B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011C285; /* jne: not equal / not zero */

loc_0011C27F: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_0011C285: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011C28F; /* jne: not equal / not zero */

loc_0011C289: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_0011C28F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011C29A; /* jne: not equal / not zero */

loc_0011C293: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011C293; /* je: equal / zero */

loc_0011C29A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011C30C; /* jge: greater or equal (signed >=) */

loc_0011C29F: ;
    /* nop */

loc_0011C2A0: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011C30C; /* jge: greater or equal (signed >=) */

loc_0011C2A6: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    ecx = edx;
    ecx = ecx & 0x1F;
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011C2D7; /* jne: not equal / not zero */

loc_0011C2B9: ;
    /* nop */

loc_0011C2C0: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011C30C; /* jge: greater or equal (signed >=) */

loc_0011C2CB: ;
    ecx = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = MEM32(esi + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011C2C0; /* je: equal / zero */

loc_0011C2D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011C2E4; /* jne: not equal / not zero */

loc_0011C2DE: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_0011C2E4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011C2EE; /* jne: not equal / not zero */

loc_0011C2E8: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_0011C2EE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011C2F8; /* jne: not equal / not zero */

loc_0011C2F2: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_0011C2F8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011C307; /* jne: not equal / not zero */

loc_0011C2FC: ;
    /* nop */

loc_0011C300: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011C300; /* je: equal / zero */

loc_0011C307: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011C2A0; /* jl: less (signed <) */

loc_0011C30C: ;
    edx = 0; /* xor self */
    MEM32(esi) = edx;
    MEM32(esi + 4) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011C320
 * Original: 0x0011C320 - 0x0011C32E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C320(void)
{

loc_0011C320: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0011C330
 * Original: 0x0011C330 - 0x0011C38F (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C330: ;
    edx = ecx;
    eax = MEM32(edx + 0x124);
    eax = MEM32(edx + eax * 4 + 0x114);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x12C;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x124);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    MEM32(edx + 0x124) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0011C379; /* jl: less (signed <) */

loc_0011C36F: ;
    MEM32(edx + 0x124) = 0;

loc_0011C379: ;
    MEM32(edx + 0x128) = MEM32(edx + 0x128) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x128)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x130);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x130) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011C390
 * Original: 0x0011C390 - 0x0011C39C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C390(void)
{

loc_0011C390: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0011C398u); RECOMP_ABI_CALL(0x0011C320u, sub_0011C320); /* call 0x0011C320 */

loc_0011C398: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011C3A0
 * Original: 0x0011C3A0 - 0x0011C3FF (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C3A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C3A0: ;
    edx = ecx;
    eax = MEM32(edx + 0x50C);
    eax = MEM32(edx + eax * 4 + 0x404);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x514;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x50C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    MEM32(edx + 0x50C) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0011C3E9; /* jl: less (signed <) */

loc_0011C3DF: ;
    MEM32(edx + 0x50C) = 0;

loc_0011C3E9: ;
    MEM32(edx + 0x510) = MEM32(edx + 0x510) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x510)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x51C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x51C) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011C400
 * Original: 0x0011C400 - 0x0011C469 (105 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C400: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011C419; /* je: equal / zero */

loc_0011C40B: ;
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x88);
    edx = MEM32(edx + ecx + 4);
    goto loc_0011C41F;

loc_0011C419: ;
    edx = MEM32(ecx + 0x138);

loc_0011C41F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x88);
    esi = esi + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 4) = edx;
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0011C445; /* je: equal / zero */

loc_0011C439: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x88);
    MEM32(eax + ecx + 4) = edi;
    goto loc_0011C44B;

loc_0011C445: ;
    MEM32(ecx + 0x138) = edi;

loc_0011C44B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011C45E; /* je: equal / zero */

loc_0011C450: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x88);
    MEM32(edx + ecx) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0011C45E: ;
    MEM32(ecx + 0x134) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011C470
 * Original: 0x0011C470 - 0x0011C4E2 (114 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C470: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x12C;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x120);
    edi = MEM32(eax + 0x128);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    MEM32(eax + 0x120) = ecx;
    MEM32(eax + 0x128) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0011C4C8; /* jl: less (signed <) */

loc_0011C4B7: ;
    MEM32(eax + 0x120) = 0;
    ecx = 1;
    goto loc_0011C4C9;

loc_0011C4C8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0011C4C9: ;
    MEM32(eax + ecx * 4 + 0x114) = esi;
    ecx = MEM32(eax + 0x130);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x130) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011C4F0
 * Original: 0x0011C4F0 - 0x0011C54D (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C4F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C4F0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x120) = esi;
    MEM32(ecx + 0x124) = esi;
    MEM32(ecx + 0x128) = esi;
    edx = 0; /* xor self */
    goto loc_0011C510;

    /* nop */

loc_0011C510: ;
    eax = MEM32(ecx + 0x120);
    edi = MEM32(ecx + 0x128);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(ecx + 0x120) = eax;
    MEM32(ecx + 0x128) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0011C53C; /* jl: less (signed <) */

loc_0011C52F: ;
    MEM32(ecx + 0x120) = esi;
    eax = 1;
    goto loc_0011C53D;

loc_0011C53C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0011C53D: ;
    MEM32(ecx + eax * 4 + 0x114) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011C510; /* jl: less (signed <) */

loc_0011C54A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011C550
 * Original: 0x0011C550 - 0x0011C595 (69 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C550: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0xC;
    ecx = 0x40;
    goto loc_0011C560;

    /* nop */

loc_0011C560: ;
    MEM32(eax) = 0;
    eax = eax + 0x10;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0011C560; /* jne: not equal / not zero */

loc_0011C56C: ;
    ecx = esi + 0x404;
    PUSH32(esp, 0x0011C577u); RECOMP_ABI_CALL(0x00014800u, sub_00014800); /* call 0x00014800 */

loc_0011C577: ;
    eax = 0; /* xor self */
    ecx = esi + 0x514;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    ecx = esi;
    MEM32(esi + 0x51C) = eax;
    PUSH32(esp, 0x0011C591u); RECOMP_ABI_CALL(0x00188D40u, sub_00188D40); /* call 0x00188D40 */

loc_0011C591: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011C5A0
 * Original: 0x0011C5A0 - 0x0011C5E5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C5A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C5A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 8;
    ecx = 2;
    goto loc_0011C5B0;

    /* nop */

loc_0011C5B0: ;
    MEM8(eax) = 0;
    eax = eax + 0x88;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0011C5B0; /* jne: not equal / not zero */

loc_0011C5BB: ;
    ecx = esi + 0x114;
    PUSH32(esp, 0x0011C5C6u); RECOMP_ABI_CALL(0x0011C390u, sub_0011C390); /* call 0x0011C390 */

loc_0011C5C6: ;
    MEM32(esi + 0x12C) = 0;
    ecx = esi;
    MEM32(esi + 0x130) = 0;
    PUSH32(esp, 0x0011C5E1u); RECOMP_ABI_CALL(0x0011C4F0u, sub_0011C4F0); /* call 0x0011C4F0 */

loc_0011C5E1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011C5F0
 * Original: 0x0011C5F0 - 0x0011C67E (142 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C5F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0011C61F; /* je: equal / zero */

loc_0011C5FC: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011C61F; /* je: equal / zero */

loc_0011C601: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011C607u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011C607: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011C612u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011C612: ;
    ecx = eax;
    PUSH32(esp, 0x0011C619u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011C619: ;
    MEM32(esp + 0xC) = eax;
    goto loc_0011C627;

loc_0011C61F: ;
    MEM32(esp + 0xC) = 0;

loc_0011C627: ;
    eax = MEM32(edi + 8);
    esi = edi + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0011C63Au); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_0011C63A: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011C648; /* jne: not equal / not zero */

loc_0011C644: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011C677; /* je: equal / zero */

loc_0011C648: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0011C650u); RECOMP_ABI_CALL(0x00199920u, sub_00199920); /* call 0x00199920 */

loc_0011C650: ;
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = esi + edx * 4 + 0x328;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_0011C677: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}



/**
 * sub_0011C720
 * Original: 0x0011C720 - 0x0011C788 (104 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C720: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0011C74F; /* je: equal / zero */

loc_0011C72C: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011C74F; /* je: equal / zero */

loc_0011C731: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011C737u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011C737: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011C742u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011C742: ;
    ecx = eax;
    PUSH32(esp, 0x0011C749u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011C749: ;
    MEM32(esp + 0xC) = eax;
    goto loc_0011C757;

loc_0011C74F: ;
    MEM32(esp + 0xC) = 0;

loc_0011C757: ;
    eax = MEM32(edi + 8);
    esi = edi + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0011C76Au); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_0011C76A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011C77C; /* jne: not equal / not zero */

loc_0011C771: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011C77C; /* jne: not equal / not zero */

loc_0011C775: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011C77C: ;
    eax = MEM32(esi + eax * 8 + 0x52C);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011C790
 * Original: 0x0011C790 - 0x0011C7F8 (104 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C790: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0011C7BF; /* je: equal / zero */

loc_0011C79C: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011C7BF; /* je: equal / zero */

loc_0011C7A1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011C7A7u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011C7A7: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011C7B2u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011C7B2: ;
    ecx = eax;
    PUSH32(esp, 0x0011C7B9u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011C7B9: ;
    MEM32(esp + 0xC) = eax;
    goto loc_0011C7C7;

loc_0011C7BF: ;
    MEM32(esp + 0xC) = 0;

loc_0011C7C7: ;
    eax = MEM32(edi + 8);
    esi = edi + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0011C7DAu); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_0011C7DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011C7EC; /* jne: not equal / not zero */

loc_0011C7E1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011C7EC; /* jne: not equal / not zero */

loc_0011C7E5: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011C7EC: ;
    eax = MEM32(esi + eax * 8 + 0x530);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011C800
 * Original: 0x0011C800 - 0x0011C846 (70 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C800(void)
{

loc_0011C800: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x0011C80Du); RECOMP_ABI_CALL(0x0011C330u, sub_0011C330); /* call 0x0011C330 */

loc_0011C80D: ;
    esi = MEM32(esp + 0x18);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x88);
    PUSH32(esp, eax);
    edi = edx + ebx + 8;
    ecx = 0x20;
    eax = esp + 0x10;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x0011C83Du); RECOMP_ABI_CALL(0x0011C400u, sub_0011C400); /* call 0x0011C400 */

loc_0011C83D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011C850
 * Original: 0x0011C850 - 0x0011C858 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C850(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011C850: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_0011C860(); return; /* tail jmp 0x0011C860 */

}

/**
 * sub_0011C860
 * Original: 0x0011C860 - 0x0011C8D2 (114 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C860: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x514;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x508);
    edi = MEM32(eax + 0x510);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    MEM32(eax + 0x508) = ecx;
    MEM32(eax + 0x510) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0011C8B8; /* jl: less (signed <) */

loc_0011C8A7: ;
    MEM32(eax + 0x508) = 0;
    ecx = 0x3F;
    goto loc_0011C8B9;

loc_0011C8B8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0011C8B9: ;
    MEM32(eax + ecx * 4 + 0x404) = esi;
    ecx = MEM32(eax + 0x51C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x51C) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011C8E0
 * Original: 0x0011C8E0 - 0x0011C9C7 (231 bytes, 63 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C8E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011C8E0: ;
    esp = esp - 0x84;
    eax = MEM32(0x47A050);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0x84) = eax;
    eax = MEM32(edi + 0x460);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0011C9B1; /* jle: less or equal (signed <=) */

loc_0011C903: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = edi + 0x330;
    goto loc_0011C910;

    /* nop */

loc_0011C910: ;
    eax = MEM32(esi + 0x134);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x88);
    PUSH32(esp, 0x80);
    ecx = eax + esi + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011C930u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0011C930: ;
    ecx = MEM32(edi + 0x464);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x88);
    eax = eax + esi;
    MEM8(esp + 0x97) = 0;
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011C961; /* je: equal / zero */

loc_0011C955: ;
    ebp = eax;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x88);
    MEM32(esi + ebp + 4) = edx;

loc_0011C961: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011C971; /* je: equal / zero */

loc_0011C966: ;
    ebp = edx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x88);
    MEM32(esi + ebp) = eax;

loc_0011C971: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x138)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x138) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011C97F; /* jne: not equal / not zero */

loc_0011C979: ;
    MEM32(esi + 0x138) = edx;

loc_0011C97F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x134)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x134) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011C98D; /* jne: not equal / not zero */

loc_0011C987: ;
    MEM32(esi + 0x134) = eax;

loc_0011C98D: ;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0011C995u); RECOMP_ABI_CALL(0x0011C470u, sub_0011C470); /* call 0x0011C470 */

loc_0011C995: ;
    edx = MEM32(edi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0011C9A1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011C9A1: ;
    eax = MEM32(edi + 0x460);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_0011C910; /* jg: greater (signed >) */

loc_0011C9AF: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0011C9B1: ;
    ecx = MEM32(esp + 0x84);
    POP32(esp, edi);
    PUSH32(esp, 0x0011C9BEu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0011C9BE: ;
    esp = esp + 0x84;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011C9D0
 * Original: 0x0011C9D0 - 0x0011CA32 (98 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C9D0: ;
    eax = MEM32(esp + 4);
    esp = esp - 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0011CA26; /* je: equal / zero */

loc_0011C9E1: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011CA26; /* je: equal / zero */

loc_0011C9E6: ;
    _fa = (uint32_t)(MEM32(esi + 0x460)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x460), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011CA26; /* je: equal / zero */

loc_0011C9EF: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011C9FFu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0011C9FF: ;
    esp = esp + 0xC;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi + 0x330;
    MEM8(esp + 0x87) = 0;
    PUSH32(esp, 0x0011CA1Au); RECOMP_ABI_CALL(0x0011C800u, sub_0011C800); /* call 0x0011C800 */

loc_0011CA1A: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x80;
    esp += 8; return; /* ret 4 */

loc_0011CA26: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 0x80;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011CA40
 * Original: 0x0011CA40 - 0x0011CAEA (170 bytes, 51 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011CA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011CA40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xC;
    ecx = edi;
    PUSH32(esp, 0x0011CA4Eu); RECOMP_ABI_CALL(0x000250D0u, sub_000250D0); /* call 0x000250D0 */

loc_0011CA4E: ;
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
    PUSH32(esp, 0x0011CA83u); RECOMP_ABI_CALL(0x001994F0u, sub_001994F0); /* call 0x001994F0 */

loc_0011CA83: ;
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
    eax = esi + ecx * 4 + 0x2A8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011CAC9; /* je: equal / zero */

loc_0011CAC1: ;
    edx = MEM32(esp + 0x10);
    edx = MEM32(edx);
    MEM32(eax) = edx;

loc_0011CAC9: ;
    eax = ecx;
    ecx = ecx & 0x1F;
    edx = 1;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = esi + eax * 4 + 0x328;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011CAF0
 * Original: 0x0011CAF0 - 0x0011CBA2 (178 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011CAF0(void)
{

loc_0011CAF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xC;
    ecx = edi;
    PUSH32(esp, 0x0011CAFFu); RECOMP_ABI_CALL(0x0011C3A0u, sub_0011C3A0); /* call 0x0011C3A0 */

loc_0011CAFF: ;
    edx = MEM32(esp + 0x10);
    edx = MEM32(edx);
    ecx = eax;
    ecx = ecx << 4;
    MEM32(ecx + edi + 0xC) = edx;
    MEM32(esi + 8) = eax;
    ebx = 0x3FFFFFFF;
    MEM32(ecx + esi + 0x10) = ebx;
    MEM32(ecx + esi + 0x14) = ebx;
    MEM32(ecx + esi + 0xC) = 0x7FFFFFFF;
    edi = esi + 4;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0011CB31u); RECOMP_ABI_CALL(0x001994F0u, sub_001994F0); /* call 0x001994F0 */

loc_0011CB31: ;
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
    edx = edx | ebx;
    MEM32(eax) = edx;
    edi = MEM32(esi + 8);
    ebx = edi * 8;
    eax = ebx + esi + 0x52C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011CB74u); RECOMP_ABI_CALL(0x0011C220u, sub_0011C220); /* call 0x0011C220 */

loc_0011CB74: ;
    ecx = edi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = esi + ecx * 4 + 0x72C;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    esp = esp + 4;
    POP32(esp, edi);
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    eax = ebx + esi + 0x52C;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011CBB0
 * Original: 0x0011CBB0 - 0x0011CC53 (163 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011CBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011CBB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0011CBDF; /* je: equal / zero */

loc_0011CBBC: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011CBDF; /* je: equal / zero */

loc_0011CBC1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011CBC7u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011CBC7: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011CBD2u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011CBD2: ;
    ecx = eax;
    PUSH32(esp, 0x0011CBD9u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011CBD9: ;
    MEM32(esp + 0xC) = eax;
    goto loc_0011CBE7;

loc_0011CBDF: ;
    MEM32(esp + 0xC) = 0;

loc_0011CBE7: ;
    eax = MEM32(edi + 8);
    edi = edi + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0011CBFAu); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_0011CBFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011CC4C; /* jne: not equal / not zero */

loc_0011CC01: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011CC4C; /* jne: not equal / not zero */

loc_0011CC05: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011CC2C; /* je: equal / zero */

loc_0011CC09: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011CC2C; /* je: equal / zero */

loc_0011CC0E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011CC14u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011CC14: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011CC1Fu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011CC1F: ;
    ecx = eax;
    PUSH32(esp, 0x0011CC26u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011CC26: ;
    MEM32(esp + 0xC) = eax;
    goto loc_0011CC34;

loc_0011CC2C: ;
    MEM32(esp + 0xC) = 0;

loc_0011CC34: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0011CC45u); RECOMP_ABI_CALL(0x0011CA40u, sub_0011CA40); /* call 0x0011CA40 */

loc_0011CC45: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0011CC4C: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011CC60
 * Original: 0x0011CC60 - 0x0011CD0B (171 bytes, 63 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011CC60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011CC60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0011CC8F; /* je: equal / zero */

loc_0011CC6C: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011CC8F; /* je: equal / zero */

loc_0011CC71: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011CC77u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011CC77: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011CC82u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011CC82: ;
    ecx = eax;
    PUSH32(esp, 0x0011CC89u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011CC89: ;
    MEM32(esp + 0xC) = eax;
    goto loc_0011CC97;

loc_0011CC8F: ;
    MEM32(esp + 0xC) = 0;

loc_0011CC97: ;
    eax = MEM32(edi + 8);
    edi = edi + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0011CCAAu); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_0011CCAA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011CCB5; /* jne: not equal / not zero */

loc_0011CCB1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011CCBC; /* je: equal / zero */

loc_0011CCB5: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0011CCBC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011CCE3; /* je: equal / zero */

loc_0011CCC0: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011CCE3; /* je: equal / zero */

loc_0011CCC5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011CCCBu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011CCCB: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011CCD6u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011CCD6: ;
    ecx = eax;
    PUSH32(esp, 0x0011CCDDu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011CCDD: ;
    MEM32(esp + 0xC) = eax;
    goto loc_0011CCEB;

loc_0011CCE3: ;
    MEM32(esp + 0xC) = 0;

loc_0011CCEB: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0011CCF7u); RECOMP_ABI_CALL(0x0011CAF0u, sub_0011CAF0); /* call 0x0011CAF0 */

loc_0011CCF7: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0011CD10
 * Original: 0x0011CD10 - 0x0011CD6E (94 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011CD10(void)
{

loc_0011CD10: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3DA650;
    PUSH32(esp, edi);
    ecx = esi + 0x10;
    MEM32(esi + 8) = 0x3FFFFFFF;
    MEM32(esi + 0xC) = 0xFFFFFFFFu;
    MEM32(esi + 4) = 0x3DA264;
    PUSH32(esp, 0x0011CD37u); RECOMP_ABI_CALL(0x00118400u, sub_00118400); /* call 0x00118400 */

loc_0011CD37: ;
    edi = esi + 0x330;
    MEM32(esi + 0x32C) = 0;
    ecx = edi;
    MEM32(esi + 4) = 0x3DA620;
    PUSH32(esp, 0x0011CD55u); RECOMP_ABI_CALL(0x0011C5A0u, sub_0011C5A0); /* call 0x0011C5A0 */

loc_0011CD55: ;
    MEM32(edi + 0x134) = 0xFFFFFFFFu;
    MEM32(edi + 0x138) = 0xFFFFFFFFu;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011CD70
 * Original: 0x0011CD70 - 0x0011CD7B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011CD70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011CD70: ;
    ecx = ecx + 0x2AC;
    g_seh_ebp = ebp; sub_0013F970(); return; /* tail jmp 0x0013F970 */

}

/**
 * sub_0011CD80
 * Original: 0x0011CD80 - 0x0011CD8B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011CD80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011CD80: ;
    ecx = ecx + 0x530;
    g_seh_ebp = ebp; sub_0011C240(); return; /* tail jmp 0x0011C240 */

}



/**
 * sub_0011CDD0
 * Original: 0x0011CDD0 - 0x0011CE48 (120 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011CDD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011CDD0: ;
    SET_LO8(ecx, MEM8(0x502498));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011CE42; /* jne: not equal / not zero */

loc_0011CDDF: ;
    edx = MEM32(0x502498);
    edx = edx | eax;
    ecx = 0x501D70;
    MEM32(0x502498) = edx;
    MEM32(0x501D60) = 0x3DA670;
    MEM32(0x501D68) = 0x3FFFFFFF;
    MEM32(0x501D6C) = 0xFFFFFFFFu;
    MEM32(0x501D64) = 0x3DA608;
    PUSH32(esp, 0x0011CE1Fu); RECOMP_ABI_CALL(0x0011C550u, sub_0011C550); /* call 0x0011C550 */

loc_0011CE1F: ;
    eax = 0; /* xor self */
    MEM32(0x502490) = eax;
    PUSH32(esp, 0x35A2E0);
    MEM32(0x502494) = eax;
    MEM32(0x501D64) = 0x3DA638;
    PUSH32(esp, 0x0011CE3Fu); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_0011CE3F: ;
    esp = esp + 4;

loc_0011CE42: ;
    eax = 0x501D60;
    esp += 4; return; /* ret */

}

/**
 * sub_0011CE50
 * Original: 0x0011CE50 - 0x0011CE5B (11 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011CE50(void)
{

loc_0011CE50: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DA6D0);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0011CE5Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011CE5A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011CE60
 * Original: 0x0011CE60 - 0x0011CE7A (26 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011CE60(void)
{

loc_0011CE60: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011CE6Fu); RECOMP_ABI_CALL(0x0022A440u, sub_0022A440); /* call 0x0022A440 */

loc_0011CE6F: ;
    MEM32(esi) = eax;
    esp = esp + 4;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011CE80
 * Original: 0x0011CE80 - 0x0011CE87 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011CE80(void)
{

loc_0011CE80: ;
    MEM32(ecx) = 0x3DA68C;
    esp += 4; return; /* ret */

}

/**
 * sub_0011CE90
 * Original: 0x0011CE90 - 0x0011CEAF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011CE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011CE90: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3DA68C;
    if (TEST_Z(_fa, _fb)) goto loc_0011CEA9; /* je: equal / zero */

loc_0011CEA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011CEA6u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_0011CEA6: ;
    esp = esp + 4;

loc_0011CEA9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011CEB0
 * Original: 0x0011CEB0 - 0x0011CF00 (80 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011CEB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011CEB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011CEC0; /* jne: not equal / not zero */

loc_0011CEBA: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0011CEC0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011CECEu); RECOMP_ABI_CALL(0x0022CF20u, sub_0022CF20); /* call 0x0022CF20 */

loc_0011CECE: ;
    edi = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esi + 4);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011CEE8u); RECOMP_ABI_CALL(0x00230B50u, sub_00230B50); /* call 0x00230B50 */

loc_0011CEE8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011CEF8; /* jne: not equal / not zero */

loc_0011CEEC: ;
    MEM8(esi + 8) = 1;
    MEM32(ebx) = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0011CEF8: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0011CF00
 * Original: 0x0011CF00 - 0x0011CF53 (83 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011CF00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011CF00: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011CF10; /* jne: not equal / not zero */

loc_0011CF0A: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0011CF10: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011CF1Du); RECOMP_ABI_CALL(0x0022CF20u, sub_0022CF20); /* call 0x0022CF20 */

loc_0011CF1D: ;
    edx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x14);
    ecx = MEM32(esi + 4);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011CF37u); RECOMP_ABI_CALL(0x00230BE0u, sub_00230BE0); /* call 0x00230BE0 */

loc_0011CF37: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011CF4C; /* jne: not equal / not zero */

loc_0011CF3B: ;
    eax = MEM32(esp + 0x18);
    MEM8(esi + 8) = 1;
    MEM32(edi) = eax;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0011CF4C: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0011CF60
 * Original: 0x0011CF60 - 0x0011CFC4 (100 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011CF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011CF60: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011CF70; /* jne: not equal / not zero */

loc_0011CF6A: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_0011CF70: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011CF7Eu); RECOMP_ABI_CALL(0x0022CF20u, sub_0022CF20); /* call 0x0022CF20 */

loc_0011CF7E: ;
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(ebx + 4);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011CF99u); RECOMP_ABI_CALL(0x001A64B0u, sub_001A64B0); /* call 0x001A64B0 */

loc_0011CF99: ;
    esp = esp + 0x18;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011CFBC; /* jne: not equal / not zero */

loc_0011CFA0: ;
    MEM8(ebx + 8) = 1;
    eax = MEM32(esi);
    MEM32(edi) = eax;
    ecx = MEM32(esi + 4);
    MEM32(edi + 4) = ecx;
    edx = MEM32(esi + 8);
    MEM32(edi + 8) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_0011CFBC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0011CFD0
 * Original: 0x0011CFD0 - 0x0011D03A (106 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011CFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011CFD0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011CFE0; /* jne: not equal / not zero */

loc_0011CFDA: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_0011CFE0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011CFEEu); RECOMP_ABI_CALL(0x0022CF20u, sub_0022CF20); /* call 0x0022CF20 */

loc_0011CFEE: ;
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(ebx + 4);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011D009u); RECOMP_ABI_CALL(0x001A65A0u, sub_001A65A0); /* call 0x001A65A0 */

loc_0011D009: ;
    esp = esp + 0x18;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011D032; /* jne: not equal / not zero */

loc_0011D010: ;
    MEM8(ebx + 8) = 1;
    eax = MEM32(esi);
    MEM32(edi) = eax;
    ecx = MEM32(esi + 4);
    MEM32(edi + 4) = ecx;
    edx = MEM32(esi + 8);
    MEM32(edi + 8) = edx;
    eax = MEM32(esi + 0xC);
    MEM32(edi + 0xC) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_0011D032: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0011D040
 * Original: 0x0011D040 - 0x0011D090 (80 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D040: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011D050; /* jne: not equal / not zero */

loc_0011D04A: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0011D050: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011D05Eu); RECOMP_ABI_CALL(0x0022CF20u, sub_0022CF20); /* call 0x0022CF20 */

loc_0011D05E: ;
    ebx = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esi + 4);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011D078u); RECOMP_ABI_CALL(0x002311C0u, sub_002311C0); /* call 0x002311C0 */

loc_0011D078: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011D088; /* jne: not equal / not zero */

loc_0011D07C: ;
    MEM8(esi + 8) = 1;
    MEM8(edi) = LO8(ebx);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0011D088: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0011D090
 * Original: 0x0011D090 - 0x0011D0C1 (49 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D090: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011D0BD; /* je: equal / zero */

loc_0011D09A: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011D0A6u); RECOMP_ABI_CALL(0x0022CF20u, sub_0022CF20); /* call 0x0022CF20 */

loc_0011D0A6: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011D0B9u); RECOMP_ABI_CALL(0x002303E0u, sub_002303E0); /* call 0x002303E0 */

loc_0011D0B9: ;
    MEM8(esi + 8) = 1;

loc_0011D0BD: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0011D0D0
 * Original: 0x0011D0D0 - 0x0011D101 (49 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D0D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D0D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011D0FD; /* je: equal / zero */

loc_0011D0DA: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011D0E6u); RECOMP_ABI_CALL(0x0022CF20u, sub_0022CF20); /* call 0x0022CF20 */

loc_0011D0E6: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011D0F9u); RECOMP_ABI_CALL(0x00230420u, sub_00230420); /* call 0x00230420 */

loc_0011D0F9: ;
    MEM8(esi + 8) = 1;

loc_0011D0FD: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0011D110
 * Original: 0x0011D110 - 0x0011D15D (77 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D110: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011D159; /* je: equal / zero */

loc_0011D11A: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011D126u); RECOMP_ABI_CALL(0x0022CF20u, sub_0022CF20); /* call 0x0022CF20 */

loc_0011D126: ;
    SET_LO8(eax, MEM8(0x50249C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011D155; /* jne: not equal / not zero */

loc_0011D12F: ;
    PUSH32(esp, 0x3DA6D8);
    PUSH32(esp, 0x0011D139u); RECOMP_ABI_CALL(0x001F8390u, sub_001F8390); /* call 0x001F8390 */

loc_0011D139: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011D149; /* jne: not equal / not zero */

loc_0011D141: ;
    /* int3: debug-trap slide byte, stepped over */
    MEM8(esi + 8) = LO8(eax);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0011D149: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011D155; /* jne: not equal / not zero */

loc_0011D14E: ;
    MEM8(0x50249C) = 1;

loc_0011D155: ;
    MEM8(esi + 8) = 1;

loc_0011D159: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0011D160
 * Original: 0x0011D160 - 0x0011D1AD (77 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D160: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011D1A9; /* je: equal / zero */

loc_0011D16A: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011D176u); RECOMP_ABI_CALL(0x0022CF20u, sub_0022CF20); /* call 0x0022CF20 */

loc_0011D176: ;
    SET_LO8(eax, MEM8(0x50249D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011D1A5; /* jne: not equal / not zero */

loc_0011D17F: ;
    PUSH32(esp, 0x3DA770);
    PUSH32(esp, 0x0011D189u); RECOMP_ABI_CALL(0x001F8390u, sub_001F8390); /* call 0x001F8390 */

loc_0011D189: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011D199; /* jne: not equal / not zero */

loc_0011D191: ;
    /* int3: debug-trap slide byte, stepped over */
    MEM8(esi + 8) = LO8(eax);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0011D199: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011D1A5; /* jne: not equal / not zero */

loc_0011D19E: ;
    MEM8(0x50249D) = 1;

loc_0011D1A5: ;
    MEM8(esi + 8) = 1;

loc_0011D1A9: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0011D1B0
 * Original: 0x0011D1B0 - 0x0011D1E1 (49 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D1B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011D1DD; /* je: equal / zero */

loc_0011D1BA: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011D1C6u); RECOMP_ABI_CALL(0x0022CF20u, sub_0022CF20); /* call 0x0022CF20 */

loc_0011D1C6: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011D1D9u); RECOMP_ABI_CALL(0x00230490u, sub_00230490); /* call 0x00230490 */

loc_0011D1D9: ;
    MEM8(esi + 8) = 1;

loc_0011D1DD: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0011D1F0
 * Original: 0x0011D1F0 - 0x0011D275 (133 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D1F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D1F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351833);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3DA80C;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_0011D237; /* je: equal / zero */

loc_0011D222: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0011D237; /* jne: not equal / not zero */

loc_0011D232: ;
    PUSH32(esp, 0x0011D237u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0011D237: ;
    MEM32(esi + 4) = 0;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0011D25F; /* je: equal / zero */

loc_0011D24A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0011D25F; /* jne: not equal / not zero */

loc_0011D25A: ;
    PUSH32(esp, 0x0011D25Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0011D25F: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x3DA68C;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0011D280
 * Original: 0x0011D280 - 0x0011D2B2 (50 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D280: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DA6D0);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0011D28Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011D28D: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011D2A9; /* je: equal / zero */

loc_0011D294: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0011D2A9; /* jne: not equal / not zero */

loc_0011D2A4: ;
    PUSH32(esp, 0x0011D2A9u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0011D2A9: ;
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011D2C0
 * Original: 0x0011D2C0 - 0x0011D366 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D2C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351861);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0011D2E5u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_0011D2E5: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0011D2F1u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0011D2F1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0011D2F9u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0011D2F9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011D2FFu); RECOMP_ABI_CALL(0x00234DD0u, sub_00234DD0); /* call 0x00234DD0 */

loc_0011D2FF: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x0011D313u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0011D313: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0011D31Bu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0011D31B: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0011D32B; /* je: equal / zero */

loc_0011D328: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0011D32B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0011D353; /* je: equal / zero */

loc_0011D33C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0011D353; /* jne: not equal / not zero */

loc_0011D34C: ;
    ecx = esi;
    PUSH32(esp, 0x0011D353u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0011D353: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0011D370
 * Original: 0x0011D370 - 0x0011D416 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D370: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351861);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0011D395u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_0011D395: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0011D3A1u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0011D3A1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0011D3A9u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0011D3A9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011D3AFu); RECOMP_ABI_CALL(0x0022A440u, sub_0022A440); /* call 0x0022A440 */

loc_0011D3AF: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x0011D3C3u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_0011D3C3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0011D3CBu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0011D3CB: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0011D3DB; /* je: equal / zero */

loc_0011D3D8: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0011D3DB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0011D403; /* je: equal / zero */

loc_0011D3EC: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0011D403; /* jne: not equal / not zero */

loc_0011D3FC: ;
    ecx = esi;
    PUSH32(esp, 0x0011D403u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0011D403: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0011D420
 * Original: 0x0011D420 - 0x0011D425 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D420(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011D420: ;
    g_seh_ebp = ebp; sub_0011D1F0(); return; /* tail jmp 0x0011D1F0 */

}

/**
 * sub_0011D430
 * Original: 0x0011D430 - 0x0011D44E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D430: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0011D438u); RECOMP_ABI_CALL(0x0011D420u, sub_0011D420); /* call 0x0011D420 */

loc_0011D438: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011D448; /* je: equal / zero */

loc_0011D43F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011D445u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_0011D445: ;
    esp = esp + 4;

loc_0011D448: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011D450
 * Original: 0x0011D450 - 0x0011D46E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D450: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0011D458u); RECOMP_ABI_CALL(0x0011D1F0u, sub_0011D1F0); /* call 0x0011D1F0 */

loc_0011D458: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011D468; /* je: equal / zero */

loc_0011D45F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011D465u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_0011D465: ;
    esp = esp + 4;

loc_0011D468: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011D470
 * Original: 0x0011D470 - 0x0011D4B7 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D470(void)
{

loc_0011D470: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x0011D47Fu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_0011D47F: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0011D492u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_0011D492: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0011D4A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011D4A4: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011D4AFu); RECOMP_ABI_CALL(0x0011D2C0u, sub_0011D2C0); /* call 0x0011D2C0 */

loc_0011D4AF: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011D4C0
 * Original: 0x0011D4C0 - 0x0011D507 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D4C0(void)
{

loc_0011D4C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x0011D4CFu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_0011D4CF: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0011D4E2u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_0011D4E2: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0011D4F4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011D4F4: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011D4FFu); RECOMP_ABI_CALL(0x0011D370u, sub_0011D370); /* call 0x0011D370 */

loc_0011D4FF: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011D510
 * Original: 0x0011D510 - 0x0011D556 (70 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D510: ;
    SET_LO8(ecx, MEM8(0x5024B0));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011D550; /* jne: not equal / not zero */

loc_0011D51F: ;
    edx = MEM32(0x5024B0);
    edx = edx | eax;
    eax = 0; /* xor self */
    PUSH32(esp, 0x35A2F0);
    MEM32(0x5024B0) = edx;
    MEM32(0x5024A0) = 0x3DA80C;
    MEM32(0x5024A4) = eax;
    MEM8(0x5024A8) = LO8(eax);
    PUSH32(esp, 0x0011D54Du); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_0011D54D: ;
    esp = esp + 4;

loc_0011D550: ;
    eax = 0x5024A0;
    esp += 4; return; /* ret */

}

/**
 * sub_0011D560
 * Original: 0x0011D560 - 0x0011D6B4 (340 bytes, 108 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D560: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351880);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0011D5EA; /* jne: not equal / not zero */

loc_0011D581: ;
    eax = esp + 8;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011D58Du); RECOMP_ABI_CALL(0x0011D470u, sub_0011D470); /* call 0x0011D470 */

loc_0011D58D: ;
    esp = esp + 8;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0011D5A1; /* je: equal / zero */

loc_0011D59E: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0011D5A1: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011D5BD; /* je: equal / zero */

loc_0011D5A8: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0011D5BD; /* jne: not equal / not zero */

loc_0011D5B8: ;
    PUSH32(esp, 0x0011D5BDu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0011D5BD: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 4) = edi;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0011D5EA; /* je: equal / zero */

loc_0011D5D2: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_0011D5EA; /* jne: not equal / not zero */

loc_0011D5E5: ;
    PUSH32(esp, 0x0011D5EAu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0011D5EA: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x0011D5F1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011D5F1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011D60C; /* jne: not equal / not zero */

loc_0011D5F5: ;
    POP32(esp, edi);
    MEM8(esi + 8) = 1;
    POP32(esp, esi);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_0011D60C: ;
    edi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011D6A1; /* je: equal / zero */

loc_0011D619: ;
    eax = esp + 0x1C;
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011D625u); RECOMP_ABI_CALL(0x0011D4C0u, sub_0011D4C0); /* call 0x0011D4C0 */

loc_0011D625: ;
    esp = esp + 8;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = 1;
    MEM32(esi + 0xC) = edi;
    PUSH32(esp, 0x0011D63Du); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_0011D63D: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA8A4);
    PUSH32(esp, 0x0011D651u); RECOMP_ABI_CALL(0x001F8580u, sub_001F8580); /* call 0x001F8580 */

loc_0011D651: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011D661; /* jne: not equal / not zero */

loc_0011D65C: ;
    eax = MEM32(0x46A3C8);

loc_0011D661: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011D66Fu); RECOMP_ABI_CALL(0x002330E0u, sub_002330E0); /* call 0x002330E0 */

loc_0011D66F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011D677; /* jne: not equal / not zero */

loc_0011D673: ;
    MEM8(esi + 8) = 1;

loc_0011D677: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0011D6A1; /* je: equal / zero */

loc_0011D689: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0011D6A1; /* jne: not equal / not zero */

loc_0011D69C: ;
    PUSH32(esp, 0x0011D6A1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0011D6A1: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011D6C0
 * Original: 0x0011D6C0 - 0x0011D7F1 (305 bytes, 101 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D6C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351898);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011D6F4; /* jne: not equal / not zero */

loc_0011D6E0: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

loc_0011D6F4: ;
    PUSH32(esp, edi);
    eax = esp + 8;
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011D701u); RECOMP_ABI_CALL(0x0011D4C0u, sub_0011D4C0); /* call 0x0011D4C0 */

loc_0011D701: ;
    esp = esp + 8;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esi + 4);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x0011D71Bu); RECOMP_ABI_CALL(0x0022CF20u, sub_0022CF20); /* call 0x0022CF20 */

loc_0011D71B: ;
    edi = MEM32(esp + 0x2C);
    ecx = MEM32(esi + 4);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011D735u); RECOMP_ABI_CALL(0x00230C80u, sub_00230C80); /* call 0x00230C80 */

loc_0011D735: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011D78F; /* jne: not equal / not zero */

loc_0011D739: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEM8(esi + 8) = 1;
    PUSH32(esp, 0x0011D74Du); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0011D74D: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0011D77A; /* je: equal / zero */

loc_0011D762: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0011D77A; /* jne: not equal / not zero */

loc_0011D775: ;
    PUSH32(esp, 0x0011D77Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0011D77A: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

loc_0011D78F: ;
    edx = MEM32(esp + 8);
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011D79F; /* jne: not equal / not zero */

loc_0011D79A: ;
    eax = MEM32(0x46A3C8);

loc_0011D79F: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011D7AFu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0011D7AF: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0011D7DC; /* je: equal / zero */

loc_0011D7C4: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0011D7DC; /* jne: not equal / not zero */

loc_0011D7D7: ;
    PUSH32(esp, 0x0011D7DCu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0011D7DC: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0011D800
 * Original: 0x0011D800 - 0x0011D8BB (187 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D800: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351898);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011D8A9; /* je: equal / zero */

loc_0011D824: ;
    PUSH32(esp, edi);
    eax = esp + 8;
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011D831u); RECOMP_ABI_CALL(0x0011D4C0u, sub_0011D4C0); /* call 0x0011D4C0 */

loc_0011D831: ;
    esp = esp + 8;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esi + 4);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x0011D84Bu); RECOMP_ABI_CALL(0x0022CF20u, sub_0022CF20); /* call 0x0022CF20 */

loc_0011D84B: ;
    ecx = MEM32(esp + 8);
    edi = eax;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011D85Bu); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_0011D85B: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011D86B; /* jne: not equal / not zero */

loc_0011D866: ;
    eax = MEM32(0x46A3C8);

loc_0011D86B: ;
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011D87Au); RECOMP_ABI_CALL(0x00230460u, sub_00230460); /* call 0x00230460 */

loc_0011D87A: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esi + 8) = 1;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    ecx = eax;
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0011D8A9; /* je: equal / zero */

loc_0011D891: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0011D8A9; /* jne: not equal / not zero */

loc_0011D8A4: ;
    PUSH32(esp, 0x0011D8A9u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0011D8A9: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0011D8C0
 * Original: 0x0011D8C0 - 0x0011D906 (70 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D8C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D8C0: ;
    SET_LO8(ecx, MEM8(0x5024C4));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011D900; /* jne: not equal / not zero */

loc_0011D8CF: ;
    edx = MEM32(0x5024C4);
    edx = edx | eax;
    eax = 0; /* xor self */
    PUSH32(esp, 0x35A300);
    MEM32(0x5024C4) = edx;
    MEM32(0x5024B8) = eax;
    MEM8(0x5024BC) = LO8(eax);
    MEM32(0x5024B4) = 0x3DA85C;
    PUSH32(esp, 0x0011D8FDu); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_0011D8FD: ;
    esp = esp + 4;

loc_0011D900: ;
    eax = 0x5024B4;
    esp += 4; return; /* ret */

}

/**
 * sub_0011D910
 * Original: 0x0011D910 - 0x0011D921 (17 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D910(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011D910: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0011D917u); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_0011D917: ;
    edx = MEM32(eax);
    esp = esp + 4;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x24)); return; /* indirect tail jmp */

}

/**
 * sub_0011D930
 * Original: 0x0011D930 - 0x0011D941 (17 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D930(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011D930: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0011D937u); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_0011D937: ;
    edx = MEM32(eax);
    esp = esp + 4;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x28)); return; /* indirect tail jmp */

}

/**
 * sub_0011D950
 * Original: 0x0011D950 - 0x0011D961 (17 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D950(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011D950: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0011D957u); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_0011D957: ;
    edx = MEM32(eax);
    esp = esp + 4;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x2C)); return; /* indirect tail jmp */

}

/**
 * sub_0011D970
 * Original: 0x0011D970 - 0x0011D981 (17 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D970(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011D970: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0011D977u); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_0011D977: ;
    edx = MEM32(eax);
    esp = esp + 4;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x30)); return; /* indirect tail jmp */

}

/**
 * sub_0011D990
 * Original: 0x0011D990 - 0x0011D99F (15 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D990(void)
{

loc_0011D990: ;
    eax = MEM32(ecx + 0x84);
    eax = eax - MEM32(ecx + 0xCC);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011D9A0
 * Original: 0x0011D9A0 - 0x0011D9B1 (17 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D9A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011D9A0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0011D9A7u); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_0011D9A7: ;
    edx = MEM32(eax);
    esp = esp + 4;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x20)); return; /* indirect tail jmp */

}

/**
 * sub_0011D9C0
 * Original: 0x0011D9C0 - 0x0011D9D0 (16 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D9C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011D9C0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0011D9C7u); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_0011D9C7: ;
    edx = MEM32(eax);
    esp = esp + 4;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx)); return; /* indirect tail jmp */

}

/**
 * sub_0011D9D0
 * Original: 0x0011D9D0 - 0x0011D9F0 (32 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D9D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011D9D0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0011D9D7u); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_0011D9D7: ;
    edx = MEM32(eax);
    esp = esp + 4;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

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
 * sub_0011D9F0
 * Original: 0x0011D9F0 - 0x0011DA78 (136 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D9F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D9F0: ;
    esp = esp - 0x804;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xCC);
    MEM32(esp + 0x804) = eax;
    eax = MEM32(esi + 0x84);
    eax = eax - ecx;
    if (((int32_t)eax < 0)) goto loc_0011DA64; /* js: sign (negative) */

loc_0011DA15: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x800 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011DA47; /* jle: less or equal (signed <=) */

loc_0011DA1C: ;
    /* nop */

loc_0011DA20: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2A);
    PUSH32(esp, 0x800);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x0011DA33u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011DA33: ;
    edx = MEM32(esi + 0x84);
    edx = edx - MEM32(esi + 0xCC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x800 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0011DA20; /* jg: greater (signed >) */

loc_0011DA47: ;
    edx = MEM32(esi + 0xCC);
    ecx = MEM32(esi + 0x84);
    eax = MEM32(esi);
    ecx = ecx - edx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2A);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x0011DA64u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011DA64: ;
    ecx = MEM32(esp + 0x804);
    POP32(esp, esi);
    PUSH32(esp, 0x0011DA71u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0011DA71: ;
    esp = esp + 0x804;
    esp += 4; return; /* ret */

}

/**
 * sub_0011DA80
 * Original: 0x0011DA80 - 0x0011DAA7 (39 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DA80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DA80: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    ecx = esi + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0011DA93u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011DA93: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011DA9D; /* jne: not equal / not zero */

loc_0011DA97: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011DA9D: ;
    eax = MEM32(esi + 0x84);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011DAB0
 * Original: 0x0011DAB0 - 0x0011DAFD (77 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DAB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DAB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x84);
    edx = MEM32(esi + 0xCC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = eax - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011DACC; /* jle: less or equal (signed <=) */

loc_0011DACA: ;
    edi = eax;

loc_0011DACC: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0011DAD3u); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_0011DAD3: ;
    ecx = MEM32(esi + 0xC8);
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0011DAEAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011DAEA: ;
    ecx = MEM32(esi + 0xCC);
    ecx = ecx + eax;
    POP32(esp, edi);
    MEM32(esi + 0xCC) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0011DB00
 * Original: 0x0011DB00 - 0x0011DB16 (22 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DB00: ;
    eax = MEM32(ecx);
    edx = ecx + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0011DB0Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011DB0E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011DB20
 * Original: 0x0011DB20 - 0x0011DB34 (20 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DB20(void)
{

loc_0011DB20: ;
    eax = ecx;
    SET_LO8(ecx, 0); /* xor self */
    MEM32(eax) = 0x3DA8BC;
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 0x88) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011DB40
 * Original: 0x0011DB40 - 0x0011DB57 (23 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DB40(void)
{

loc_0011DB40: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0xC8) = eax;
    MEM32(ecx + 0xD0) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011DB60
 * Original: 0x0011DB60 - 0x0011DC56 (246 bytes, 84 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DB60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011DB60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x0011DB6Bu); RECOMP_ABI_CALL(0x00011320u, sub_00011320); /* call 0x00011320 */

loc_0011DB6B: ;
    edx = MEM32(eax);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0011DB75u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011DB75: ;
    eax = MEM32(ebx + 0xCC);
    ecx = MEM32(ebx + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    ebp = ebx + 0x84;
    if (CMP_GE(_fas, _fbs)) goto loc_0011DB92; /* jge: greater or equal (signed >=) */

loc_0011DB8B: ;
    ecx = ebx;
    PUSH32(esp, 0x0011DB92u); RECOMP_ABI_CALL(0x0011D9F0u, sub_0011D9F0); /* call 0x0011D9F0 */

loc_0011DB92: ;
    edx = MEM32(ebx);
    PUSH32(esp, 0x2A);
    PUSH32(esp, 0x80);
    esi = ebx + 4;
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(ebx + 0xCC) = edi;
    MEM32(ebp) = 0xC4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0011DBB1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011DBB1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011DBE5; /* jne: not equal / not zero */

loc_0011DBB5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0011DBBCu); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_0011DBBC: ;
    ecx = MEM32(ebx + 0xC8);
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0011DBCDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011DBCD: ;
    MEM32(ebx + 0xC8) = edi;
    MEM32(ebx + 0xCC) = edi;
    MEM32(ebp) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0011DBE5: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2A);
    eax = ebx + 0x88;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0011DBF7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011DBF7: ;
    eax = MEM32(ebx);
    PUSH32(esp, 0x2A);
    PUSH32(esp, 4);
    PUSH32(esp, ebp);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x0011DC03u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011DC03: ;
    edi = MEM32(esp + 0x14);
    ecx = 0x20;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    edi = MEM32(esp + 0x18);
    eax = ebx + 4;
    PUSH32(esp, 0x3CFBD4);
    ecx = 0x10;
    esi = ebx + 0x88;
    PUSH32(esp, eax);
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    PUSH32(esp, 0x0011DC2Du); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_0011DC2D: ;
    ecx = MEM32(ebp);
    eax = MEM32(ebx + 0xD0);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011DC44; /* jle: less or equal (signed <=) */

loc_0011DC3D: ;
    MEM32(ebp) = 0;

loc_0011DC44: ;
    eax = MEM32(ebp);
    POP32(esp, edi);
    eax = eax + 0xC4;
    POP32(esp, esi);
    MEM32(ebp) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011DC60
 * Original: 0x0011DC60 - 0x0011DCB3 (83 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DC60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011DC60: ;
    eax = MEM32(esp + 4);
    ecx = eax + -14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0011DCB0; /* ja: above (unsigned >) */

loc_0011DC6C: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x11DCB4); /* switch: 8 entries, 8 targets */
    if (_jt == 0x0011DC73u) goto loc_0011DC73;
    if (_jt == 0x0011DC7Bu) goto loc_0011DC7B;
    if (_jt == 0x0011DC83u) goto loc_0011DC83;
    if (_jt == 0x0011DC8Bu) goto loc_0011DC8B;
    if (_jt == 0x0011DC93u) goto loc_0011DC93;
    if (_jt == 0x0011DC9Bu) goto loc_0011DC9B;
    if (_jt == 0x0011DCA3u) goto loc_0011DCA3;
    if (_jt == 0x0011DCABu) goto loc_0011DCAB;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0011DC73: ;
    eax = 3;
    esp += 8; return; /* ret 4 */

loc_0011DC7B: ;
    eax = 4;
    esp += 8; return; /* ret 4 */

loc_0011DC83: ;
    eax = 8;
    esp += 8; return; /* ret 4 */

loc_0011DC8B: ;
    eax = 9;
    esp += 8; return; /* ret 4 */

loc_0011DC93: ;
    eax = 0xA;
    esp += 8; return; /* ret 4 */

loc_0011DC9B: ;
    eax = 0xB;
    esp += 8; return; /* ret 4 */

loc_0011DCA3: ;
    eax = 0xC;
    esp += 8; return; /* ret 4 */

loc_0011DCAB: ;
    eax = 0xD;

loc_0011DCB0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011DCE0
 * Original: 0x0011DCE0 - 0x0011DCE7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DCE0(void)
{

loc_0011DCE0: ;
    MEM32(ecx) = 0x3DA91C;
    esp += 4; return; /* ret */

}

/**
 * sub_0011DCF0
 * Original: 0x0011DCF0 - 0x0011DD0F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DCF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DCF0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3DA91C;
    if (TEST_Z(_fa, _fb)) goto loc_0011DD09; /* je: equal / zero */

loc_0011DD00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011DD06u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_0011DD06: ;
    esp = esp + 4;

loc_0011DD09: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011DD10
 * Original: 0x0011DD10 - 0x0011DD17 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DD10(void)
{

loc_0011DD10: ;
    MEM32(ecx) = 0x3DA950;
    esp += 4; return; /* ret */

}

/**
 * sub_0011DD20
 * Original: 0x0011DD20 - 0x0011DD3F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DD20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DD20: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3DA950;
    if (TEST_Z(_fa, _fb)) goto loc_0011DD39; /* je: equal / zero */

loc_0011DD30: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011DD36u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_0011DD36: ;
    esp = esp + 4;

loc_0011DD39: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011DD40
 * Original: 0x0011DD40 - 0x0011DD4B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DD40(void)
{

loc_0011DD40: ;
    eax = MEM32(0x453F28);
    MEM32(0x5BB630) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0011DD50
 * Original: 0x0011DD50 - 0x0011DE4E (254 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DD50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DD50: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x160);
    PUSH32(esp, edi);
    edi = ebx + 0x160;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011DD81; /* jne: not equal / not zero */

loc_0011DD66: ;
    ecx = ecx & 0xFFFFFFE0u;
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x16 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011DE45; /* jge: greater or equal (signed >=) */

loc_0011DD75: ;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011DD66; /* je: equal / zero */

loc_0011DD81: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011DD8E; /* jne: not equal / not zero */

loc_0011DD88: ;
    ecx = ecx + 0x10;
    eax = eax >> 0x10;

loc_0011DD8E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011DD98; /* jne: not equal / not zero */

loc_0011DD92: ;
    ecx = ecx + 8;
    eax = eax >> 8;

loc_0011DD98: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011DDA2; /* jne: not equal / not zero */

loc_0011DD9C: ;
    ecx = ecx + 4;
    eax = eax >> 4;

loc_0011DDA2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011DDAD; /* jne: not equal / not zero */

loc_0011DDA6: ;
    eax = eax >> 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011DDA6; /* je: equal / zero */

loc_0011DDAD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x16 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011DE45; /* jge: greater or equal (signed >=) */

loc_0011DDB6: ;
    PUSH32(esp, esi);
    esi = ecx;
    /* nop */

loc_0011DDC0: ;
    ecx = esi;
    ecx = ecx << 4;
    edx = MEM32(ecx + ebx);
    ecx = ecx + ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0011DDCEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011DDCE: ;
    eax = esi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011DE44; /* jge: greater or equal (signed >=) */

loc_0011DDD6: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    edx = MEM32(edi + edx * 4);
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011DE07; /* jne: not equal / not zero */

loc_0011DDE9: ;
    /* nop */

loc_0011DDF0: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011DE44; /* jge: greater or equal (signed >=) */

loc_0011DDFB: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = MEM32(edi + ecx * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011DDF0; /* je: equal / zero */

loc_0011DE07: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011DE15; /* jne: not equal / not zero */

loc_0011DE0F: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_0011DE15: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011DE1F; /* jne: not equal / not zero */

loc_0011DE19: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_0011DE1F: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011DE2A; /* jne: not equal / not zero */

loc_0011DE24: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_0011DE2A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011DE38; /* jne: not equal / not zero */

loc_0011DE2F: ;
    /* nop */

loc_0011DE30: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011DE30; /* je: equal / zero */

loc_0011DE38: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011DE44; /* jge: greater or equal (signed >=) */

loc_0011DE3D: ;
    esi = eax;
    goto loc_0011DDC0;

loc_0011DE44: ;
    POP32(esp, esi);

loc_0011DE45: ;
    MEM32(edi) = 0;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011DE50
 * Original: 0x0011DE50 - 0x0011DEF8 (168 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DE50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DE50: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3518D6);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    MEM32(esp + 0x14) = 0;
    MEM32(esi) = 0x3DA978;
    MEM32(esi + 4) = 0;
    MEM32(esi + 0xC) = 0;
    edi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM8(esp + 0x14) = 3;
    if (TEST_Z(_fa, _fb)) goto loc_0011DE9A; /* je: equal / zero */

loc_0011DE97: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0011DE9A: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011DEB6; /* je: equal / zero */

loc_0011DEA1: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0011DEB6; /* jne: not equal / not zero */

loc_0011DEB1: ;
    PUSH32(esp, 0x0011DEB6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0011DEB6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    eax = MEM32(esp + 0x20);
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = eax;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_0011DEE3; /* je: equal / zero */

loc_0011DECC: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0011DEE3; /* jne: not equal / not zero */

loc_0011DEDC: ;
    ecx = edi;
    PUSH32(esp, 0x0011DEE3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0011DEE3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011DF00
 * Original: 0x0011DF00 - 0x0011DF0E (14 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DF00(void)
{

loc_0011DF00: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011DF10
 * Original: 0x0011DF10 - 0x0011DF3A (42 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DF10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DF10: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0011DF18u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011DF18: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011DF36; /* je: equal / zero */

loc_0011DF1C: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0011DF23u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011DF23: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x0011DF2Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011DF2D: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0011DF36; /* jbe: below or equal (unsigned <=) */

loc_0011DF32: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011DF36: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011DF40
 * Original: 0x0011DF40 - 0x0011DF5E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DF40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DF40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0011DF48u); RECOMP_ABI_CALL(0x0011DF60u, sub_0011DF60); /* call 0x0011DF60 */

loc_0011DF48: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011DF58; /* je: equal / zero */

loc_0011DF4F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011DF55u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_0011DF55: ;
    esp = esp + 4;

loc_0011DF58: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011DF60
 * Original: 0x0011DF60 - 0x0011DFDE (126 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DF60: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3518F3);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3DA978;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_0011DFA7; /* je: equal / zero */

loc_0011DF92: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0011DFA7; /* jne: not equal / not zero */

loc_0011DFA2: ;
    PUSH32(esp, 0x0011DFA7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0011DFA7: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0011DFC8; /* je: equal / zero */

loc_0011DFB3: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0011DFC8; /* jne: not equal / not zero */

loc_0011DFC3: ;
    PUSH32(esp, 0x0011DFC8u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0011DFC8: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x3DA950;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0011DFE0
 * Original: 0x0011DFE0 - 0x0011E0AA (202 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DFE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DFE0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351921);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x0011E009u); RECOMP_ABI_CALL(0x00234DF0u, sub_00234DF0); /* call 0x00234DF0 */

loc_0011E009: ;
    esi = eax;
    esp = esp + 4;
    MEM32(esp + 0xC) = esi;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = MEM32(esi);
    MEM32(esp + 0x18) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_0011E03A; /* je: equal / zero */

loc_0011E024: ;
    ecx = MEM32(esp + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0011E038u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011E038: ;
    goto loc_0011E04C;

loc_0011E03A: ;
    eax = MEM32(esp + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0011E04Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011E04C: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0011E060u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011E060: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x0011E067u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011E067: ;
    edi = MEM32(esp + 0x20);
    MEM32(edi) = esi;
    edx = MEM32(esi + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 4) = edx;
    ecx = edx;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x18) = 0;
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0011E097; /* jne: not equal / not zero */

loc_0011E090: ;
    ecx = esi;
    PUSH32(esp, 0x0011E097u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0011E097: ;
    ecx = MEM32(esp + 0x10);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0011E0B0
 * Original: 0x0011E0B0 - 0x0011E0E8 (56 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E0B0: ;
    eax = MEM32(ecx + 0x5C);
    edx = MEM32(ecx + 0x64);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    MEM32(ecx + 0x5C) = eax;
    MEM32(ecx + 0x64) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0011E0DB; /* jl: less (signed <) */

loc_0011E0C3: ;
    edx = MEM32(esp + 4);
    MEM32(ecx + 0x5C) = 0;
    edx = MEM32(edx);
    eax = 0x15;
    MEM32(ecx + eax * 4) = edx;
    esp += 8; return; /* ret 4 */

loc_0011E0DB: ;
    edx = MEM32(esp + 4);
    edx = MEM32(edx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + eax * 4) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011E0F0
 * Original: 0x0011E0F0 - 0x0011E14D (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E0F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E0F0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x1C0) = esi;
    MEM32(ecx + 0x1C4) = esi;
    MEM32(ecx + 0x1C8) = esi;
    edx = 0; /* xor self */
    goto loc_0011E110;

    /* nop */

loc_0011E110: ;
    eax = MEM32(ecx + 0x1C0);
    edi = MEM32(ecx + 0x1C8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    MEM32(ecx + 0x1C0) = eax;
    MEM32(ecx + 0x1C8) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0011E13C; /* jl: less (signed <) */

loc_0011E12F: ;
    MEM32(ecx + 0x1C0) = esi;
    eax = 0x15;
    goto loc_0011E13D;

loc_0011E13C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0011E13D: ;
    MEM32(ecx + eax * 4 + 0x164) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x16 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011E110; /* jl: less (signed <) */

loc_0011E14A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011E150
 * Original: 0x0011E150 - 0x0011E1AF (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E150: ;
    edx = ecx;
    eax = MEM32(edx + 0x1C4);
    eax = MEM32(edx + eax * 4 + 0x164);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x1CC;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x1C4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x16 (32-bit) */
    MEM32(edx + 0x1C4) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0011E199; /* jl: less (signed <) */

loc_0011E18F: ;
    MEM32(edx + 0x1C4) = 0;

loc_0011E199: ;
    MEM32(edx + 0x1C8) = MEM32(edx + 0x1C8) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x1C8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x1D0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x1D0) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011E1B0
 * Original: 0x0011E1B0 - 0x0011E1B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E1B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E1B0: ;
    g_seh_ebp = ebp; sub_0011DD50(); return; /* tail jmp 0x0011DD50 */

}

/**
 * sub_0011E1C0
 * Original: 0x0011E1C0 - 0x0011E21C (92 bytes, 32 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E1C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E1C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0011E1CFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011E1CF: ;
    ecx = eax;
    ecx = ecx - 2;
    if ((ecx != 0)) goto loc_0011E1DB; /* jne: not equal / not zero */

loc_0011E1D6: ;
    eax = 4;

loc_0011E1DB: ;
    edx = MEM32(esi + 0x170);
    esi = esi + 0x16C;
    MEM32(esp + 8) = eax;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011E1F8u); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_0011E1F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E203; /* jne: not equal / not zero */

loc_0011E1FF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011E216; /* je: equal / zero */

loc_0011E203: ;
    ecx = MEM32(esi + eax * 4 + 0x1E0);
    edx = MEM32(esp + 0xC);
    MEM32(edx) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0011E216: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011E220
 * Original: 0x0011E220 - 0x0011E266 (70 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E220: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0011E234u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_0011E234: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011E260; /* je: equal / zero */

loc_0011E238: ;
    edx = MEM32(esp + 8);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0011E24Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011E24A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x0011E254u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011E254: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0011E260: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011E270
 * Original: 0x0011E270 - 0x0011E2B6 (70 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E270: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0011E284u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_0011E284: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011E2B0; /* je: equal / zero */

loc_0011E288: ;
    edx = MEM32(esp + 8);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0011E29Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011E29A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x0011E2A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011E2A4: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0011E2B0: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011E2C0
 * Original: 0x0011E2C0 - 0x0011E306 (70 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E2C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0011E2D4u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_0011E2D4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011E300; /* je: equal / zero */

loc_0011E2D8: ;
    edx = MEM32(esp + 8);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0011E2EAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011E2EA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x198); PUSH32(esp, 0x0011E2F4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011E2F4: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0011E300: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011E310
 * Original: 0x0011E310 - 0x0011E356 (70 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E310: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0011E324u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_0011E324: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011E350; /* je: equal / zero */

loc_0011E328: ;
    edx = MEM32(esp + 8);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0011E33Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011E33A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x19C); PUSH32(esp, 0x0011E344u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011E344: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0011E350: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011E360
 * Original: 0x0011E360 - 0x0011E39F (63 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E360: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0011E374u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_0011E374: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011E399; /* je: equal / zero */

loc_0011E378: ;
    edx = MEM32(esp + 8);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    edx = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0011E38Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011E38F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011E399; /* je: equal / zero */

loc_0011E393: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0011E399: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011E3A0
 * Original: 0x0011E3A0 - 0x0011E3E6 (70 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E3A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E3A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0011E3B4u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_0011E3B4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011E3E0; /* je: equal / zero */

loc_0011E3B8: ;
    edx = MEM32(esp + 8);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0011E3CAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011E3CA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0011E3D4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011E3D4: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0011E3E0: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011E3F0
 * Original: 0x0011E3F0 - 0x0011E449 (89 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E3F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E3F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0011E404u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_0011E404: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011E441; /* je: equal / zero */

loc_0011E408: ;
    edx = MEM32(esi);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0011E415u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011E415: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011E441; /* je: equal / zero */

loc_0011E419: ;
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0011E426u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011E426: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    eax = MEM32(esp + 0x14);
    SET_LO8(edx, (CMP_A(_fa, _fb)) ? 1 : 0); /* seta */
    POP32(esp, edi);
    MEM8(eax) = LO8(edx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0011E441: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011E450
 * Original: 0x0011E450 - 0x0011E493 (67 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E450: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0011E464u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_0011E464: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011E48D; /* je: equal / zero */

loc_0011E468: ;
    edx = MEM32(esp + 8);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0011E47Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011E47A: ;
    ecx = eax;
    PUSH32(esp, 0x0011E481u); RECOMP_ABI_CALL(0x001EC570u, sub_001EC570); /* call 0x001EC570 */

loc_0011E481: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0011E48D: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011E4A0
 * Original: 0x0011E4A0 - 0x0011E4F5 (85 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E4A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E4A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0011E4B4u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_0011E4B4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011E4EF; /* je: equal / zero */

loc_0011E4B8: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x5BC498);
    edx = edx << 4;
    esi = edx + esi + 4;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0011E4D0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011E4D0: ;
    ecx = eax;
    PUSH32(esp, 0x0011E4D7u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0011E4D7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011E4E9; /* je: equal / zero */

loc_0011E4DB: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0011E4E2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011E4E2: ;
    ecx = eax;
    PUSH32(esp, 0x0011E4E9u); RECOMP_ABI_CALL(0x00205170u, sub_00205170); /* call 0x00205170 */

loc_0011E4E9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011E4EF: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011E500
 * Original: 0x0011E500 - 0x0011E56C (108 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E500: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0011E514u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_0011E514: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011E566; /* je: equal / zero */

loc_0011E518: ;
    edx = MEM32(esp + 8);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0011E52Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011E52A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0011E533u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011E533: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0011E53Cu); RECOMP_ABI_CALL(0x0011E4A0u, sub_0011E4A0); /* call 0x0011E4A0 */

loc_0011E53C: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x0011E545u); RECOMP_ABI_CALL(0x0011E4A0u, sub_0011E4A0); /* call 0x0011E4A0 */

loc_0011E545: ;
    PUSH32(esp, 5);
    ecx = esi;
    PUSH32(esp, 0x0011E54Eu); RECOMP_ABI_CALL(0x0011E4A0u, sub_0011E4A0); /* call 0x0011E4A0 */

loc_0011E54E: ;
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x0011E557u); RECOMP_ABI_CALL(0x0011E4A0u, sub_0011E4A0); /* call 0x0011E4A0 */

loc_0011E557: ;
    PUSH32(esp, 7);
    ecx = esi;
    PUSH32(esp, 0x0011E560u); RECOMP_ABI_CALL(0x0011E4A0u, sub_0011E4A0); /* call 0x0011E4A0 */

loc_0011E560: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011E566: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011E570
 * Original: 0x0011E570 - 0x0011E578 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E570(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E570: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_0011E580(); return; /* tail jmp 0x0011E580 */

}

/**
 * sub_0011E580
 * Original: 0x0011E580 - 0x0011E5B1 (49 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E580(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E580: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esi + 0x1CC;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x0011E597u); RECOMP_ABI_CALL(0x0014A7A0u, sub_0014A7A0); /* call 0x0014A7A0 */

loc_0011E597: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi + 0x164;
    PUSH32(esp, 0x0011E5A7u); RECOMP_ABI_CALL(0x0011E0B0u, sub_0011E0B0); /* call 0x0011E0B0 */

loc_0011E5A7: ;
    MEM32(esi + 0x1D0) = MEM32(esi + 0x1D0) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x1D0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011E5C0
 * Original: 0x0011E5C0 - 0x0011E648 (136 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E5C0(void)
{

loc_0011E5C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xC;
    ecx = edi;
    PUSH32(esp, 0x0011E5CEu); RECOMP_ABI_CALL(0x0011E150u, sub_0011E150); /* call 0x0011E150 */

loc_0011E5CE: ;
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
    PUSH32(esp, 0x0011E603u); RECOMP_ABI_CALL(0x001994F0u, sub_001994F0); /* call 0x001994F0 */

loc_0011E603: ;
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
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 8);
    edx = MEM32(eax);
    POP32(esp, edi);
    MEM32(esi + ecx * 4 + 0x1E0) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011E650
 * Original: 0x0011E650 - 0x0011E797 (327 bytes, 103 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E650(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E650: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351941);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x170);
    esi = edi + 0x16C;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0x0011E693u); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_0011E693: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E747; /* jne: not equal / not zero */

loc_0011E69E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E747; /* jne: not equal / not zero */

loc_0011E6A6: ;
    PUSH32(esp, 0x0011E6ABu); RECOMP_ABI_CALL(0x001F5BE0u, sub_001F5BE0); /* call 0x001F5BE0 */

loc_0011E6AB: ;
    ebx = MEM32(esp + 0x2C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0011E6BFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011E6BF: ;
    ebp = MEM32(edi + 0x168);
    edx = edi + 4;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebp;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x160;
    MEM32(edx + 0x164) = ebp;
    ecx = eax;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    ecx = MEM32(esi);
    eax = eax << 4;
    ecx = ecx | ebp;
    eax = eax + edx;
    MEM32(esi) = ecx;
    esi = eax;
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0x10) = esi;
    ebp = 0;
    MEM32(esp + 0x24) = ebp;
    if ((eax == 0)) goto loc_0011E727; /* je: equal / zero */

loc_0011E70A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0011E710u); RECOMP_ABI_CALL(0x001F5BE0u, sub_001F5BE0); /* call 0x001F5BE0 */

loc_0011E710: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(esp + 0x20) = esp;
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0011E720; /* je: equal / zero */

loc_0011E71D: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0011E720: ;
    ecx = esi;
    PUSH32(esp, 0x0011E727u); RECOMP_ABI_CALL(0x0011DE50u, sub_0011DE50); /* call 0x0011DE50 */

loc_0011E727: ;
    edx = MEM32(edi + 0x168);
    edx = edx << 4;
    eax = MEM32(edx + edi + -12);
    ecx = edx + edi + -12;
    MEM32(esp + 0x24) = 0xFFFFFFFFu;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0011E743u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011E743: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011E75E; /* jne: not equal / not zero */

loc_0011E747: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = MEM32(esp + 0x1C);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

loc_0011E75E: ;
    ecx = MEM32(edi + 0x168);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, 0x0011E780u); RECOMP_ABI_CALL(0x0011E5C0u, sub_0011E5C0); /* call 0x0011E5C0 */

loc_0011E780: ;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011E7A0
 * Original: 0x0011E7A0 - 0x0011E924 (388 bytes, 123 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E7A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E7A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x35197A);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0x10) = 0;
    ecx = MEM32(edi + 0x170);
    eax = MEM32(esp + 0x30);
    ebp = edi + 0x16C;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = ebp;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x0011E7E7u); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_0011E7E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E8D2; /* jne: not equal / not zero */

loc_0011E7F2: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E8D2; /* jne: not equal / not zero */

loc_0011E7FA: ;
    ebx = MEM32(edi + 0x168);
    edx = edi + 4;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x160;
    MEM32(edx + 0x164) = ebx;
    ecx = eax;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(esi);
    eax = eax << 4;
    ecx = ecx | ebx;
    eax = eax + edx;
    MEM32(esi) = ecx;
    esi = eax;
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x28) = 0;
    if ((eax == 0)) goto loc_0011E885; /* je: equal / zero */

loc_0011E844: ;
    eax = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011E85Bu); RECOMP_ABI_CALL(0x0011DFE0u, sub_0011DFE0); /* call 0x0011DFE0 */

loc_0011E85B: ;
    eax = MEM32(eax);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebx = 1;
    ecx = esp;
    MEM8(esp + 0x30) = LO8(ebx);
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x3C) = esp;
    MEM32(ecx) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0011E87C; /* je: equal / zero */

loc_0011E879: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0011E87C: ;
    ecx = esi;
    PUSH32(esp, 0x0011E883u); RECOMP_ABI_CALL(0x0011DE50u, sub_0011DE50); /* call 0x0011DE50 */

loc_0011E883: ;
    goto loc_0011E88A;

loc_0011E885: ;
    ebx = 1;

loc_0011E88A: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), LO8(ebx) (8-bit) */
    MEM32(esp + 0x28) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_0011E8BA; /* je: equal / zero */

loc_0011E898: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0011E8BA; /* je: equal / zero */

loc_0011E8A2: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0011E8BA; /* jne: not equal / not zero */

loc_0011E8B5: ;
    PUSH32(esp, 0x0011E8BAu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0011E8BA: ;
    ecx = MEM32(edi + 0x168);
    ecx = ecx << 4;
    edx = MEM32(ecx + edi + -12);
    ecx = ecx + edi + -12;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0011E8CEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011E8CE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011E8E9; /* jne: not equal / not zero */

loc_0011E8D2: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = MEM32(esp + 0x20);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 16; return; /* ret 12 */

loc_0011E8E9: ;
    eax = MEM32(edi + 0x168);
    ecx = MEM32(esp + 0x30);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esp + 0x34;
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0011E90Du); RECOMP_ABI_CALL(0x0011E5C0u, sub_0011E5C0); /* call 0x0011E5C0 */

loc_0011E90D: ;
    ecx = MEM32(esp + 0x20);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0011E930
 * Original: 0x0011E930 - 0x0011E979 (73 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E930(void)
{

loc_0011E930: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351998);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3DA9D0;
    ecx = esi + 4;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0011E963u); RECOMP_ABI_CALL(0x0011DD50u, sub_0011DD50); /* call 0x0011DD50 */

loc_0011E963: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x3DA91C;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0011E980
 * Original: 0x0011E980 - 0x0011EB86 (518 bytes, 160 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E980: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3519C3);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 8) = esi;
    ebx = 0; /* xor self */
    MEM32(esi) = 0x3DA9D0;
    MEM32(esi + 0x164) = ebx;
    MEM32(esp + 0x14) = ebx;
    MEM32(esi + 0x168) = ebx;
    ecx = esi + 0x178;
    MEM32(esi + 0x170) = 0x3FFFFFFF;
    MEM32(esi + 0x174) = 0xFFFFFFFFu;
    MEM32(esi + 0x16C) = 0x3DA9A0;
    MEM32(ecx + 0x1C0) = ebx;
    MEM32(ecx + 0x1C4) = ebx;
    MEM32(ecx + 0x1C8) = ebx;
    MEM32(ecx + 0x1CC) = ebx;
    MEM8(esp + 0x14) = 1;
    MEM32(ecx + 0x1D0) = ebx;
    PUSH32(esp, 0x0011EA02u); RECOMP_ABI_CALL(0x0011E0F0u, sub_0011E0F0); /* call 0x0011E0F0 */

loc_0011EA02: ;
    MEM32(esi + 0x16C) = 0x3DA9B8;
    _fa = (uint32_t)(MEM8(0x5024C8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5024C8), LO8(ebx) (8-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0011EAAC; /* je: equal / zero */

loc_0011EA1A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0011EA20u); RECOMP_ABI_CALL(0x0011E650u, sub_0011E650); /* call 0x0011E650 */

loc_0011EA20: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0011EA2Cu); RECOMP_ABI_CALL(0x0011E7A0u, sub_0011E7A0); /* call 0x0011E7A0 */

loc_0011EA2C: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x0011EA38u); RECOMP_ABI_CALL(0x0011E7A0u, sub_0011E7A0); /* call 0x0011E7A0 */

loc_0011EA38: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x0011EA44u); RECOMP_ABI_CALL(0x0011E7A0u, sub_0011E7A0); /* call 0x0011E7A0 */

loc_0011EA44: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 5);
    ecx = esi;
    PUSH32(esp, 0x0011EA50u); RECOMP_ABI_CALL(0x0011E7A0u, sub_0011E7A0); /* call 0x0011E7A0 */

loc_0011EA50: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x0011EA5Cu); RECOMP_ABI_CALL(0x0011E7A0u, sub_0011E7A0); /* call 0x0011E7A0 */

loc_0011EA5C: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 7);
    ecx = esi;
    PUSH32(esp, 0x0011EA68u); RECOMP_ABI_CALL(0x0011E7A0u, sub_0011E7A0); /* call 0x0011E7A0 */

loc_0011EA68: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 8);
    ecx = esi;
    PUSH32(esp, 0x0011EA74u); RECOMP_ABI_CALL(0x0011E7A0u, sub_0011E7A0); /* call 0x0011E7A0 */

loc_0011EA74: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 9);
    ecx = esi;
    PUSH32(esp, 0x0011EA80u); RECOMP_ABI_CALL(0x0011E7A0u, sub_0011E7A0); /* call 0x0011E7A0 */

loc_0011EA80: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xA);
    ecx = esi;
    PUSH32(esp, 0x0011EA8Cu); RECOMP_ABI_CALL(0x0011E7A0u, sub_0011E7A0); /* call 0x0011E7A0 */

loc_0011EA8C: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xB);
    ecx = esi;
    PUSH32(esp, 0x0011EA98u); RECOMP_ABI_CALL(0x0011E7A0u, sub_0011E7A0); /* call 0x0011E7A0 */

loc_0011EA98: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xC);
    ecx = esi;
    PUSH32(esp, 0x0011EAA4u); RECOMP_ABI_CALL(0x0011E7A0u, sub_0011E7A0); /* call 0x0011E7A0 */

loc_0011EAA4: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    goto loc_0011EB6A;

loc_0011EAAC: ;
    eax = MEM32(0x453F28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011EAB7u); RECOMP_ABI_CALL(0x0011E650u, sub_0011E650); /* call 0x0011E650 */

loc_0011EAB7: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0011EAC3u); RECOMP_ABI_CALL(0x0011E7A0u, sub_0011E7A0); /* call 0x0011E7A0 */

loc_0011EAC3: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x710400);
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x0011EAD3u); RECOMP_ABI_CALL(0x0011E7A0u, sub_0011E7A0); /* call 0x0011E7A0 */

loc_0011EAD3: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0xF8000);
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x0011EAE3u); RECOMP_ABI_CALL(0x0011E7A0u, sub_0011E7A0); /* call 0x0011E7A0 */

loc_0011EAE3: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x3FC000);
    PUSH32(esp, 5);
    ecx = esi;
    PUSH32(esp, 0x0011EAF3u); RECOMP_ABI_CALL(0x0011E7A0u, sub_0011E7A0); /* call 0x0011E7A0 */

loc_0011EAF3: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0xE8000);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x0011EB03u); RECOMP_ABI_CALL(0x0011E7A0u, sub_0011E7A0); /* call 0x0011E7A0 */

loc_0011EB03: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0xD0000);
    PUSH32(esp, 7);
    ecx = esi;
    PUSH32(esp, 0x0011EB13u); RECOMP_ABI_CALL(0x0011E7A0u, sub_0011E7A0); /* call 0x0011E7A0 */

loc_0011EB13: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x68000);
    PUSH32(esp, 8);
    ecx = esi;
    PUSH32(esp, 0x0011EB23u); RECOMP_ABI_CALL(0x0011E7A0u, sub_0011E7A0); /* call 0x0011E7A0 */

loc_0011EB23: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x68000);
    PUSH32(esp, 9);
    ecx = esi;
    PUSH32(esp, 0x0011EB33u); RECOMP_ABI_CALL(0x0011E7A0u, sub_0011E7A0); /* call 0x0011E7A0 */

loc_0011EB33: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x68000);
    PUSH32(esp, 0xA);
    ecx = esi;
    PUSH32(esp, 0x0011EB43u); RECOMP_ABI_CALL(0x0011E7A0u, sub_0011E7A0); /* call 0x0011E7A0 */

loc_0011EB43: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x68000);
    PUSH32(esp, 0xB);
    ecx = esi;
    PUSH32(esp, 0x0011EB53u); RECOMP_ABI_CALL(0x0011E7A0u, sub_0011E7A0); /* call 0x0011E7A0 */

loc_0011EB53: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0xB77000);
    PUSH32(esp, 0xC);
    ecx = esi;
    PUSH32(esp, 0x0011EB63u); RECOMP_ABI_CALL(0x0011E7A0u, sub_0011E7A0); /* call 0x0011E7A0 */

loc_0011EB63: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0xA4000);

loc_0011EB6A: ;
    ecx = esi;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x0011EB73u); RECOMP_ABI_CALL(0x0011E7A0u, sub_0011E7A0); /* call 0x0011E7A0 */

loc_0011EB73: ;
    ecx = MEM32(esp + 0xC);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0011EB90
 * Original: 0x0011EB90 - 0x0011EBAE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EB90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EB90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0011EB98u); RECOMP_ABI_CALL(0x0011E930u, sub_0011E930); /* call 0x0011E930 */

loc_0011EB98: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011EBA8; /* je: equal / zero */

loc_0011EB9F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011EBA5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_0011EBA5: ;
    esp = esp + 4;

loc_0011EBA8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011EBB0
 * Original: 0x0011EBB0 - 0x0011EC0C (92 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EBB0: ;
    eax = MEM32(XBOX_FS_BASE);
    SET_LO8(ecx, MEM8(0x502878));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3519DE);
    PUSH32(esp, eax);
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_0011EBF9; /* jne: not equal / not zero */

loc_0011EBD4: ;
    MEM32(0x502878) = MEM32(0x502878) | eax;
    ecx = 0x5024D0;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0011EBECu); RECOMP_ABI_CALL(0x0011E980u, sub_0011E980); /* call 0x0011E980 */

loc_0011EBEC: ;
    PUSH32(esp, 0x35A310);
    PUSH32(esp, 0x0011EBF6u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_0011EBF6: ;
    esp = esp + 4;

loc_0011EBF9: ;
    ecx = MEM32(esp);
    eax = 0x5024D0;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0011EC10
 * Original: 0x0011EC10 - 0x0011EC15 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EC10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011EC10: ;
    g_seh_ebp = ebp; sub_0011EBB0(); return; /* tail jmp 0x0011EBB0 */

}

/**
 * sub_0011EC20
 * Original: 0x0011EC20 - 0x0011EC26 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EC20(void)
{

loc_0011EC20: ;
    eax = 0x502888;
    esp += 4; return; /* ret */

}

/**
 * sub_0011EC30
 * Original: 0x0011EC30 - 0x0011EC6B (59 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EC30(void)
{

loc_0011EC30: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM8(eax + 9) = LO8(ecx);
    MEM8(eax + 0x19) = LO8(ecx);
    edx = eax + 0x10;
    MEM8(edx + 0x19) = LO8(ecx);
    edx = edx + 0x10;
    MEM8(edx + 0x19) = LO8(ecx);
    edx = edx + 0x10;
    MEM8(edx + 0x19) = LO8(ecx);
    edx = edx + 0x10;
    MEM8(edx + 0x19) = LO8(ecx);
    edx = edx + 0x10;
    edx = edx + 0x10;
    MEM8(edx + 9) = LO8(ecx);
    edx = edx + 0x10;
    MEM8(edx + 9) = LO8(ecx);
    MEM8(edx + 0x19) = LO8(ecx);
    MEM32(eax + 0x94) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0011EC70
 * Original: 0x0011EC70 - 0x0011ECFE (142 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EC70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EC70: ;
    esp = esp - 0x14;
    eax = MEM32(0x47A050);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 4);
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    eax = esp + 0x11;
    esi = ecx;
    PUSH32(esp, 0x3DAD30);
    PUSH32(esp, eax);
    MEM32(esi + 0x658) = 0;
    MEM8(esp + 0x19) = 0;
    PUSH32(esp, 0x0011ECAAu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0011ECAA: ;
    ecx = MEM32(esi + 0x658);
    edx = MEM32(esp + 0x10);
    eax = esi + 0x5C4;
    ecx = ecx << 4;
    ecx = ecx + eax;
    MEM8(esp + 0x1C) = 0;
    MEM8(esp + 0x18) = 1;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + 0xC) = edx;
    ecx = MEM32(eax + 0x94);
    esp = esp + 0xC;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x94) = ecx;
    ecx = MEM32(esp + 0x14);
    POP32(esp, esi);
    PUSH32(esp, 0x0011ECFAu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0011ECFA: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0011ED00
 * Original: 0x0011ED00 - 0x0011ED0C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ED00(void)
{

loc_0011ED00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0011ED08u); RECOMP_ABI_CALL(0x0011EC30u, sub_0011EC30); /* call 0x0011EC30 */

loc_0011ED08: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011ED10
 * Original: 0x0011ED10 - 0x0011ED5C (76 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ED10(void)
{

loc_0011ED10: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3DAD3C;
    MEM8(esi + 4) = LO8(eax);
    MEM8(esi + 0x84) = LO8(eax);
    MEM8(esi + 0xA4) = LO8(eax);
    MEM8(esi + 0xD4) = LO8(eax);
    MEM8(esi + 0x154) = LO8(eax);
    ecx = esi + 0x5C4;
    MEM8(esi + 0x17C) = LO8(eax);
    PUSH32(esp, 0x0011ED47u); RECOMP_ABI_CALL(0x0011ED00u, sub_0011ED00); /* call 0x0011ED00 */

loc_0011ED47: ;
    ecx = esi;
    PUSH32(esp, 0x0011ED4Eu); RECOMP_ABI_CALL(0x0011EC70u, sub_0011EC70); /* call 0x0011EC70 */

loc_0011ED4E: ;
    MEM32(esi + 0x27C) = 0xFFFFFFFFu;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011ED60
 * Original: 0x0011ED60 - 0x0011ED67 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ED60(void)
{

loc_0011ED60: ;
    eax = MEM32(esp + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011ED70
 * Original: 0x0011ED70 - 0x0011ED7E (14 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ED70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011ED70: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0011ED7Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011ED7A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011ED80
 * Original: 0x0011ED80 - 0x0011ED90 (16 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ED80(void)
{

loc_0011ED80: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0011ED8Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011ED8A: ;
    eax = eax << 0xE;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011ED90
 * Original: 0x0011ED90 - 0x0011EDB0 (32 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ED90(void)
{

loc_0011ED90: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0011ED9Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011ED9A: ;
    eax = eax << 0xE;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011EDA0
 * Original: 0x0011EDA0 - 0x0011EDB0 (16 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EDA0(void)
{

loc_0011EDA0: ;
    eax = MEM32(ecx + 0xC4);
    esp += 4; return; /* ret */

}

/**
 * sub_0011EDB0
 * Original: 0x0011EDB0 - 0x0011EDBC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EDB0(void)
{

loc_0011EDB0: ;
    eax = MEM32(esp + 8);
    MEM8(eax) = 0;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011EDC0
 * Original: 0x0011EDC0 - 0x0011EDF4 (52 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EDC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EDC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0011EDCFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011EDCF: ;
    _fa = (uint32_t)(MEM32(esi + 0xC4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC4), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011EDDD; /* jge: greater or equal (signed >=) */

loc_0011EDD7: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0011EDDD: ;
    _fa = (uint32_t)(MEM32(esi + 0xD0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xD0), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011EDD7; /* jne: not equal / not zero */

loc_0011EDE6: ;
    _fa = (uint32_t)(MEM32(esi + 0xCC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xCC), 0xC (32-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011EE00
 * Original: 0x0011EE00 - 0x0011EE07 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EE00(void)
{

loc_0011EE00: ;
    eax = MEM32(ecx + 0x658);
    esp += 4; return; /* ret */

}

/**
 * sub_0011EE10
 * Original: 0x0011EE10 - 0x0011EE3B (43 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EE10(void)
{

loc_0011EE10: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    esi = ecx + 0x17C;
    PUSH32(esp, 0x0011EE26u); RECOMP_ABI_CALL(0x0011EE40u, sub_0011EE40); /* call 0x0011EE40 */

loc_0011EE26: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011EE32u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_0011EE32: ;
    esp = esp + 0x10;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0011EE40
 * Original: 0x0011EE40 - 0x0011F0C6 (646 bytes, 231 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EE40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011EE40: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x33) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x33 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0011F0B5; /* ja: above (unsigned >) */

loc_0011EE50: ;
    eax = ZX8(MEM8(eax + 0x11F13C));
    { uint32_t _jt = MEM32(eax * 4 + 0x11F0C8); /* switch: 29 entries, 29 targets */
    if (_jt == 0x0011EE5Eu) goto loc_0011EE5E;
    if (_jt == 0x0011EE74u) goto loc_0011EE74;
    if (_jt == 0x0011EE8Au) goto loc_0011EE8A;
    if (_jt == 0x0011EEA0u) goto loc_0011EEA0;
    if (_jt == 0x0011EEB6u) goto loc_0011EEB6;
    if (_jt == 0x0011EECCu) goto loc_0011EECC;
    if (_jt == 0x0011EEE2u) goto loc_0011EEE2;
    if (_jt == 0x0011EEF8u) goto loc_0011EEF8;
    if (_jt == 0x0011EF0Eu) goto loc_0011EF0E;
    if (_jt == 0x0011EF24u) goto loc_0011EF24;
    if (_jt == 0x0011EF3Au) goto loc_0011EF3A;
    if (_jt == 0x0011EF50u) goto loc_0011EF50;
    if (_jt == 0x0011EF66u) goto loc_0011EF66;
    if (_jt == 0x0011EF7Cu) goto loc_0011EF7C;
    if (_jt == 0x0011EF92u) goto loc_0011EF92;
    if (_jt == 0x0011EFA8u) goto loc_0011EFA8;
    if (_jt == 0x0011EFBEu) goto loc_0011EFBE;
    if (_jt == 0x0011EFD4u) goto loc_0011EFD4;
    if (_jt == 0x0011EFEAu) goto loc_0011EFEA;
    if (_jt == 0x0011F000u) goto loc_0011F000;
    if (_jt == 0x0011F016u) goto loc_0011F016;
    if (_jt == 0x0011F02Cu) goto loc_0011F02C;
    if (_jt == 0x0011F042u) goto loc_0011F042;
    if (_jt == 0x0011F058u) goto loc_0011F058;
    if (_jt == 0x0011F06Eu) goto loc_0011F06E;
    if (_jt == 0x0011F084u) goto loc_0011F084;
    if (_jt == 0x0011F09Au) goto loc_0011F09A;
    if (_jt == 0x0011F0B0u) goto loc_0011F0B0;
    if (_jt == 0x0011F0B5u) goto loc_0011F0B5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0011EE5E: ;
    esi = 0xCEF;
    PUSH32(esp, 0x0011EE68u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011EE68: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011EE70u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011EE70: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011EE74: ;
    esi = 0xCE4;
    PUSH32(esp, 0x0011EE7Eu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011EE7E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011EE86u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011EE86: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011EE8A: ;
    esi = 0xCE5;
    PUSH32(esp, 0x0011EE94u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011EE94: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011EE9Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011EE9C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011EEA0: ;
    esi = 0xCE6;
    PUSH32(esp, 0x0011EEAAu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011EEAA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011EEB2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011EEB2: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011EEB6: ;
    esi = 0xCF0;
    PUSH32(esp, 0x0011EEC0u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011EEC0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011EEC8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011EEC8: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011EECC: ;
    esi = 0xCE8;
    PUSH32(esp, 0x0011EED6u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011EED6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011EEDEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011EEDE: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011EEE2: ;
    esi = 0xCE9;
    PUSH32(esp, 0x0011EEECu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011EEEC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011EEF4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011EEF4: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011EEF8: ;
    esi = 0xCEA;
    PUSH32(esp, 0x0011EF02u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011EF02: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011EF0Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011EF0A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011EF0E: ;
    esi = 0xCEB;
    PUSH32(esp, 0x0011EF18u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011EF18: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011EF20u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011EF20: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011EF24: ;
    esi = 0xCEC;
    PUSH32(esp, 0x0011EF2Eu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011EF2E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011EF36u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011EF36: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011EF3A: ;
    esi = 0xCED;
    PUSH32(esp, 0x0011EF44u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011EF44: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011EF4Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011EF4C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011EF50: ;
    esi = 0xCEE;
    PUSH32(esp, 0x0011EF5Au); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011EF5A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011EF62u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011EF62: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011EF66: ;
    esi = 0xCF5;
    PUSH32(esp, 0x0011EF70u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011EF70: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011EF78u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011EF78: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011EF7C: ;
    esi = 0xCF2;
    PUSH32(esp, 0x0011EF86u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011EF86: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011EF8Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011EF8E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011EF92: ;
    esi = 0xCF1;
    PUSH32(esp, 0x0011EF9Cu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011EF9C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011EFA4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011EFA4: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011EFA8: ;
    esi = 0xCF8;
    PUSH32(esp, 0x0011EFB2u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011EFB2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011EFBAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011EFBA: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011EFBE: ;
    esi = 0xCF7;
    PUSH32(esp, 0x0011EFC8u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011EFC8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011EFD0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011EFD0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011EFD4: ;
    esi = 0xCF9;
    PUSH32(esp, 0x0011EFDEu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011EFDE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011EFE6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011EFE6: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011EFEA: ;
    esi = 0xCFB;
    PUSH32(esp, 0x0011EFF4u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011EFF4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011EFFCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011EFFC: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011F000: ;
    esi = 0xCFF;
    PUSH32(esp, 0x0011F00Au); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011F00A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011F012u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011F012: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011F016: ;
    esi = 0xD00;
    PUSH32(esp, 0x0011F020u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011F020: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011F028u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011F028: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011F02C: ;
    esi = 0x7F1;
    PUSH32(esp, 0x0011F036u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011F036: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011F03Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011F03E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011F042: ;
    esi = 0x7EF;
    PUSH32(esp, 0x0011F04Cu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011F04C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011F054u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011F054: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011F058: ;
    esi = 0xD01;
    PUSH32(esp, 0x0011F062u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011F062: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011F06Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011F06A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011F06E: ;
    esi = 0xD02;
    PUSH32(esp, 0x0011F078u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011F078: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011F080u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011F080: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011F084: ;
    esi = 0xD03;
    PUSH32(esp, 0x0011F08Eu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011F08E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011F096u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011F096: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011F09A: ;
    esi = 0xD04;
    PUSH32(esp, 0x0011F0A4u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011F0A4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011F0ACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011F0AC: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011F0B0: ;
    esi = 0xD05;

loc_0011F0B5: ;
    PUSH32(esp, 0x0011F0BAu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011F0BA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011F0C2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011F0C2: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011F0C6
 * Original: 0x0011F0C6 - 0x0011F175 (175 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F0C6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011F0C6: ;
    edi = edi;
    POP32(esp, esi);
    /* TODO: out dx, al */
    { uint64_t _t = (uint64_t)(MEM32(eax)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax) = (uint32_t)_t; }  /* adc */
    if ((MEM32(eax) == 0)) { g_seh_ebp = ebp; sub_0011F0BC(); return; } /* je: equal / zero */

loc_0011F0CE: ;
    { uint64_t _t = (uint64_t)(MEM32(eax)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax) = (uint32_t)_t; }  /* adc */

loc_0011F0D0: ;
    SET_HI8(ecx, HI8(edx));
    { uint64_t _t = (uint64_t)(MEM32(eax)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax) = (uint32_t)_t; }  /* adc */
    SET_LO8(eax, MEM8(0xB60011EEu));
    /* TODO: out dx, al */
    { uint64_t _t = (uint64_t)(MEM32(eax)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax) = (uint32_t)_t; }  /* adc */
    /* int3: debug-trap slide byte, stepped over */
    /* TODO: out dx, al */
    { uint64_t _t = (uint64_t)(MEM32(eax)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax) = (uint32_t)_t; }  /* adc */
    if (_flags /* loop: loop */) goto loc_0011F0D0;

loc_0011F0E2: ;
    { uint64_t _t = (uint64_t)(MEM32(eax)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax) = (uint32_t)_t; }  /* adc */
    _cf = 0; /* clc */
    /* TODO: out dx, al */
    { uint64_t _t = (uint64_t)(MEM32(eax)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax) = (uint32_t)_t; }  /* adc */
    PUSH32(esp, 0 /* seg:cs */);
    /* TODO: out dx, eax */
    { uint64_t _t = (uint64_t)(MEM32(eax)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax) = (uint32_t)_t; }  /* adc */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xEF);
    { uint64_t _t = (uint64_t)(MEM32(eax)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(HI8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(ecx), HI8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    { uint64_t _t = (uint64_t)(MEM32(eax)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax) = (uint32_t)_t; }  /* adc */
    PUSH32(esp, eax);
    /* TODO: out dx, eax */
    { uint64_t _t = (uint64_t)(MEM32(eax)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax) = (uint32_t)_t; }  /* adc */
    /* TODO: out dx, ax */
    { uint64_t _t = (uint64_t)(MEM32(eax)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax) = (uint32_t)_t; }  /* adc */
    if (_flags /* jl: less (signed <) */) (void)0; /* goto loc_0011F0ED - dead code, label not in function */

loc_0011F0FE: ;
    { uint64_t _t = (uint64_t)(MEM32(eax)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax) = (uint32_t)_t; }  /* adc */
    { uint32_t _tmp = edx;
    edx = eax;
    eax = _tmp; }
    /* TODO: out dx, eax */
    { uint64_t _t = (uint64_t)(MEM32(eax)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xEF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xEF (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    { uint64_t _t = (uint64_t)(MEM32(eax)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax) = (uint32_t)_t; }  /* adc */
    esi = 0xEA0011EFu;
    /* TODO: out dx, eax */
    { uint64_t _t = (uint64_t)(MEM32(eax)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax) = (uint32_t)_t; }  /* adc */
    /* TODO: aam 0xef */
    { uint64_t _t = (uint64_t)(MEM32(eax)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax) = (uint32_t)_t; }  /* adc */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + HI8(edx));
    { uint64_t _t = (uint64_t)(MEM32(eax)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax) = (uint32_t)_t; }  /* adc */
    PUSH32(esp, 0 /* seg:ss */);
    /* TODO: lock adc dword ptr [eax], eax */
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(0xF0));
    SET_LO8(eax, LO8(eax) - 0xF0);
    { uint64_t _t = (uint64_t)(MEM32(eax)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax) = (uint32_t)_t; }  /* adc */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* TODO: lock adc dword ptr [eax], eax */
    POP32(esp, eax);
    /* TODO: lock adc dword ptr [eax], eax */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(HI8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), HI8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    { uint64_t _t = (uint64_t)(MEM32(eax)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax) = (uint32_t)_t; }  /* adc */
    /* TODO: outsb dx, byte ptr [esi] */
    /* TODO: lock adc dword ptr [eax], eax */
    SET_LO8(eax, 0xF0);
    { uint64_t _t = (uint64_t)(MEM32(eax)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax) = (uint32_t)_t; }  /* adc */
    /* TODO: lcall 0x11f0, 0xb50011f0 */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(0x1C) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    _cf = (int)((((uint64_t)(MEM32(edx + eax)) + (uint64_t)(ebx)) >> 32) & 1);
    MEM32(edx + eax) = MEM32(edx + eax) + ebx;
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(MEM32(esp + ebx))) >> 32) & 1);
    ebx = ebx + MEM32(esp + ebx);
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(5)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 5);
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(0x1C) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(0x1C) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(0x1C) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(6) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _cf = 0; /* logical op clears CF */
    MEM8(ecx) = MEM8(ecx) | LO8(ecx);
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(0x1C) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(0xA) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(0xB) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0xD);
    PUSH32(esp, 0 /* seg:cs */);
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(0xF) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    { uint64_t _t = (uint64_t)(MEM8(ecx)) + (uint64_t)(LO8(edx)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(ecx) = (uint32_t)_t; }  /* adc */
    { uint64_t _t = (uint64_t)(LO8(ebx)) + (uint64_t)(MEM8(esp + ebx)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(ebx, (uint32_t)_t); }  /* adc */
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(4) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(0x1C) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(MEM32(edx + 0x18171C16)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    { uint64_t _t = (uint64_t)(MEM32(edx)) - (uint64_t)(ebx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(edx) = (uint32_t)_t; }  /* sbb */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(ebx + 0x50A148EC)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

}

/**
 * sub_0011F170
 * Original: 0x0011F170 - 0x0011F3FD (653 bytes, 200 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F170(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011F170: ;
    esp = esp - 0x48;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x54);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x4C) = eax;
    ebx = ecx;
    if (TEST_S(_fas, _fbs)) goto loc_0011F3EA; /* jl: less (signed <) */

loc_0011F18C: ;
    eax = MEM32(ebx + 0x658);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0011F3EA; /* jg: greater (signed >) */

loc_0011F19B: ;
    _fa = (uint32_t)(MEM32(ebx + 0x27C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x27C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F1A9; /* je: equal / zero */

loc_0011F1A3: ;
    MEM32(ebx + 0x27C) = edi;

loc_0011F1A9: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x60);
    PUSH32(esp, 0x20);
    ebp = esi + 0x80;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, ebp);
    MEM32(esi + 0xCC) = 1;
    PUSH32(esp, 0x0011F1CCu); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_0011F1CC: ;
    PUSH32(esp, 0x20);
    eax = esi + 0xA0;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011F1DFu); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_0011F1DF: ;
    esp = esp + 0x18;
    MEM32(esi + 0xC0) = 0;
    PUSH32(esp, 0x0011F1F1u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011F1F1: ;
    edi = edi << 4;
    SET_LO8(ecx, MEM8(edi + ebx + 0x5C8));
    edi = edi + ebx;
    SET_LO8(ecx, LO8(ecx) + 0x41);
    edx = SX8(LO8(ecx));
    SET_LO8(ecx, MEM8(edi + 0x5C4));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, edx);
    SET_LO8(ecx, LO8(ecx) + 0x31);
    edx = SX8(LO8(ecx));
    PUSH32(esp, edx);
    edx = MEM32(eax);
    PUSH32(esp, 0xBB8);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011F222u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011F222: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011F22Eu); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_0011F22E: ;
    eax = MEM32(esi + 0xCC);
    esp = esp + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011F3CB; /* jne: not equal / not zero */

loc_0011F240: ;
    MEM8(esp + 0x30) = 0;
    PUSH32(esp, 0x0011F24Au); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011F24A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xBBA);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011F256u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011F256: ;
    PUSH32(esp, 0x0011F25Bu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011F25B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xBBB);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011F267u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011F267: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011F273u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_0011F273: ;
    esp = esp + 0xC;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    edi = edi + 0x5CD;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011F291u); RECOMP_ABI_CALL(0x0019CB9Eu, sub_0019CB9E); /* call 0x0019CB9E */

loc_0011F291: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011F3D5; /* je: equal / zero */

loc_0011F299: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x10);
    eax = (eax >> 0xE) | (ecx << (32 - 0xE)); /* shrd */
    ecx = ecx >> 0xE;
    ecx = MEM32(esp + 0x14);
    edx = (edx >> 0xE) | (ecx << (32 - 0xE)); /* shrd */
    ecx = ecx >> 0xE;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC350) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC350 (32-bit) */
    MEM32(esi + 0xC0) = edx;
    MEM8(esp + 0x28) = 0;
    if (CMP_G(_fas, _fbs)) goto loc_0011F2D8; /* jg: greater (signed >) */

loc_0011F2C9: ;
    PUSH32(esp, 0xA);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011F2D6u); RECOMP_ABI_CALL(0x003424A8u, sub_003424A8); /* call 0x003424A8 */

loc_0011F2D6: ;
    goto loc_0011F2F6;

loc_0011F2D8: ;
    PUSH32(esp, 0x0011F2DDu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011F2DD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xBBC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011F2E9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011F2E9: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011F2F6u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_0011F2F6: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x0011F2FEu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011F2FE: ;
    edx = MEM32(eax);
    ecx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xBBD);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011F30Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011F30F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0011F318u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_0011F318: ;
    eax = MEM32(esi + 0xC0);
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC350) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC350 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0011F337; /* jg: greater (signed >) */

loc_0011F328: ;
    PUSH32(esp, 0xA);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011F335u); RECOMP_ABI_CALL(0x003424A8u, sub_003424A8); /* call 0x003424A8 */

loc_0011F335: ;
    goto loc_0011F355;

loc_0011F337: ;
    PUSH32(esp, 0x0011F33Cu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011F33C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xBBC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011F348u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011F348: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011F355u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_0011F355: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x0011F35Du); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011F35D: ;
    edx = MEM32(eax);
    ecx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xBBE);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011F36Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011F36E: ;
    PUSH32(esp, eax);
    eax = esi + 0xA0;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011F37Du); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_0011F37D: ;
    eax = MEM32(esp + 0x6C);
    esp = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0011F38Cu); RECOMP_ABI_CALL(0x0011F400u, sub_0011F400); /* call 0x0011F400 */

loc_0011F38C: ;
    MEM32(esi + 0xC8) = eax;
    _fa = (uint32_t)(MEM32(esi + 0xCC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xCC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F3AC; /* je: equal / zero */

loc_0011F39B: ;
    PUSH32(esp, 0x0011F3A0u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011F3A0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xBB9);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011F3ACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011F3AC: ;
    edi = ebx + 4;
    ecx = 0x34;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, 0x0011F3C5u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0011F3C5: ;
    esp = esp + 0x48;
    esp += 12; return; /* ret 8 */

loc_0011F3CB: ;
    edi = ebx + 4;
    ecx = 0x34;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */

loc_0011F3D5: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, 0x0011F3E4u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0011F3E4: ;
    esp = esp + 0x48;
    esp += 12; return; /* ret 8 */

loc_0011F3EA: ;
    ecx = MEM32(esp + 0x4C);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    PUSH32(esp, 0x0011F3F7u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0011F3F7: ;
    esp = esp + 0x48;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011F400
 * Original: 0x0011F400 - 0x0011F564 (356 bytes, 109 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F400(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011F400: ;
    esp = esp - 0x4D0;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x4E0);
    ebx = ecx;
    MEM32(esp + 0x4D8) = eax;
    _fa = (uint32_t)(MEM32(ebx + 0x27C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x27C), esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0011F42D; /* je: equal / zero */

loc_0011F427: ;
    MEM32(ebx + 0x27C) = esi;

loc_0011F42D: ;
    ebp = 0; /* xor self */
    PUSH32(esp, 0x0011F434u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011F434: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xBAE);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011F440u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011F440: ;
    edx = eax + 1;

loc_0011F443: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011F443; /* jne: not equal / not zero */

loc_0011F44A: ;
    eax = eax - edx;
    edi = eax;
    eax = esp + 0x198;
    esi = esi << 4;
    PUSH32(esp, eax);
    ecx = esi + ebx + 0x5CD;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011F466u); RECOMP_ABI_CALL(0x0019D802u, sub_0019D802); /* call 0x0019D802 */

loc_0011F466: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F549; /* je: equal / zero */

loc_0011F471: ;
    esi = esp + edi + 0x15;
    goto loc_0011F480;

    /* nop */
    edi = edi;

loc_0011F480: ;
    PUSH32(esp, 0x104);
    edx = esp + 0x2DC;
    PUSH32(esp, edx);
    eax = esp + 0x9C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011F49Au); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_0011F49A: ;
    eax = esp + 0xA0;
    esp = esp + 0xC;
    edx = eax + 1;

loc_0011F4A7: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011F4A7; /* jne: not equal / not zero */

loc_0011F4AE: ;
    eax = eax - edx;
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x104) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x104 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011F4E3; /* jge: greater or equal (signed >=) */

loc_0011F4BA: ;
    edi = esp + 0x94;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0011F4C2: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011F4C2; /* jne: not equal / not zero */

loc_0011F4CA: ;
    ecx = MEM32(0x3DAA4C);
    edx = MEM32(0x3DAA50);
    SET_LO8(eax, MEM8(0x3DAA54));
    MEM32(edi) = ecx;
    MEM32(edi + 4) = edx;
    MEM8(edi + 8) = LO8(eax);

loc_0011F4E3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    edx = esp + 0x3F0;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0011F504u); RECOMP_ABI_CALL(0x0019DCBDu, sub_0019DCBD); /* call 0x0019DCBD */

loc_0011F504: ;
    { /* Cross-language save slot. */ unsigned _slot=xml1_save_slot_offset((const unsigned char*)((uintptr_t)g_xbox_mem_offset+esp+0x14),128); if(_slot)esi=esp+0x14+_slot; }
    PUSH32(esp, 0xA);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011F511u); RECOMP_ABI_CALL(0x0034267Bu, sub_0034267B); /* call 0x0034267B */

loc_0011F511: ;
    esp = esp + 0xC;
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011F521u); RECOMP_ABI_CALL(0x0019D9A9u, sub_0019D9A9); /* call 0x0019D9A9 */

loc_0011F521: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F52D; /* je: equal / zero */

loc_0011F526: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F52D; /* je: equal / zero */

loc_0011F52C: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0011F52D: ;
    edx = esp + 0x198;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0011F53Bu); RECOMP_ABI_CALL(0x0019D90Cu, sub_0019D90C); /* call 0x0019D90C */

loc_0011F53B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011F480; /* jne: not equal / not zero */

loc_0011F543: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0011F549u); RECOMP_ABI_CALL(0x0019D953u, sub_0019D953); /* call 0x0019D953 */

loc_0011F549: ;
    ecx = MEM32(esp + 0x4DC);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x0011F55Bu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0011F55B: ;
    esp = esp + 0x4D0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011F570
 * Original: 0x0011F570 - 0x0011F820 (688 bytes, 212 insns)
 * Category: game_io
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F570(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011F570: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1A0));
    esp = esp - 0x1A0;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    MEM32(esp + 0x1A4) = eax;
    eax = MEM32(ebp + 0x27C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0xC) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0011F5A2; /* je: equal / zero */

loc_0011F59C: ;
    MEM32(ebp + 0x27C) = esi;

loc_0011F5A2: ;
    PUSH32(esp, 0x0011F5A7u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011F5A7: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xBAE);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011F5B3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011F5B3: ;
    edx = eax + 1;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */

loc_0011F5B8: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0011F5B8; /* jne: not equal / not zero */

loc_0011F5BF: ;
    ecx = MEM32(esp + 0x1BC);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x18) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0011F5FA; /* jle: less or equal (signed <=) */

loc_0011F5D0: ;
    eax = MEM32(esp + 0x1B8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xA4)) >> 32) & 1);
    eax = eax + 0xA4;
    /* nop */

loc_0011F5E0: ;
    MEM8(eax + 1) = LO8(ebx);
    MEM8(eax) = 1;
    MEM8(eax + -164) = LO8(ebx);
    MEM8(eax + -36) = LO8(ebx);
    MEM32(eax + -4) = ebx;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xA8)) >> 32) & 1);
    eax = eax + 0xA8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0011F5E0; /* jne: not equal / not zero */

loc_0011F5FA: ;
    eax = ebp + 0x280;
    PUSH32(esp, eax);
    if (4) _cf = (int)(((esi) >> (32 - (4))) & 1);
    esi = esi << 4;
    eax = esi + ebp + 0x5CD;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011F611u); RECOMP_ABI_CALL(0x0019D802u, sub_0019D802); /* call 0x0019D802 */

loc_0011F611: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0011F806; /* je: equal / zero */

loc_0011F61E: ;
    PUSH32(esp, edi);
    /* nop */

loc_0011F620: ;
    PUSH32(esp, 0x104);
    eax = ebp + 0x3C0;
    PUSH32(esp, eax);
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011F639u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_0011F639: ;
    eax = esp + 0xB4;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    edx = eax + 1;

loc_0011F646: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0011F646; /* jne: not equal / not zero */

loc_0011F64D: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x104) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x104 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0011F682; /* jge: greater or equal (signed >=) */

loc_0011F659: ;
    edi = esp + 0xA8;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0011F661: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0011F661; /* jne: not equal / not zero */

loc_0011F669: ;
    edx = MEM32(0x3DAA4C);
    eax = MEM32(0x3DAA50);
    SET_LO8(ecx, MEM8(0x3DAA54));
    MEM32(edi) = edx;
    MEM32(edi + 4) = eax;
    MEM8(edi + 8) = LO8(ecx);

loc_0011F682: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x80);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x80000000u);
    edx = esp + 0xC0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011F69Eu); RECOMP_ABI_CALL(0x0019E34Bu, sub_0019E34B); /* call 0x0019E34B */

loc_0011F69E: ;
    esi = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011F6A7u); RECOMP_ABI_CALL(0x0019E310u, sub_0019E310); /* call 0x0019E310 */

loc_0011F6A7: ;
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0011F6AFu); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_0011F6AF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0011F7E2; /* je: equal / zero */

loc_0011F6B8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x80);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x4C4)) >> 32) & 1);
    ebp = ebp + 0x4C4;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0011F6D4u); RECOMP_ABI_CALL(0x0019DCBDu, sub_0019DCBD); /* call 0x0019DCBD */

loc_0011F6D4: ;
    { /* Cross-language save slot. */ unsigned _slot=xml1_save_slot_offset((const unsigned char*)((uintptr_t)g_xbox_mem_offset+esp+0x28),128); if(_slot)MEM32(esp+0x1C)=_slot-1; }
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, 0xA);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    esi = esp + esi + 0x31;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011F6E9u); RECOMP_ABI_CALL(0x0034267Bu, sub_0034267B); /* call 0x0034267B */

loc_0011F6E9: ;
    edx = MEM32(esp + 0x1C4);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0011F7DE; /* jg: greater (signed >) */

loc_0011F6FC: ;
    ecx = MEM32(esp + 0x1C0);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0011F7DE; /* jge: greater or equal (signed >=) */

loc_0011F70D: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0011F7DE; /* je: equal / zero */

loc_0011F719: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    edx = MEM32(esp + 0x1BC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xA8);
    esi = eax + edx;
    edx = esi;
    edi = edi;

loc_0011F730: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0011F730; /* jne: not equal / not zero */

loc_0011F73A: ;
    eax = MEM32(esp + 0x1B4);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x3DAA4C);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011F751u); RECOMP_ABI_CALL(0x0011F820u, sub_0011F820); /* call 0x0011F820 */

loc_0011F751: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(esi + 0xA5) = LO8(eax);
    MEM8(esi + 0xA4) = LO8(ebx);
    if (CMP_L(_fas, _fbs)) goto loc_0011F7D7; /* jl: less (signed <) */

loc_0011F767: ;
    MEM32(esi + 0xA0) = edi;
    if (0xE) _cf = (int)(((edi) >> ((0xE) - 1)) & 1);
    edi = edi >> 0xE;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC350) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC350 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(esp + 0x20) = LO8(ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_0011F78C; /* jge: greater or equal (signed >=) */

loc_0011F77D: ;
    PUSH32(esp, 0xA);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011F78Au); RECOMP_ABI_CALL(0x003424A8u, sub_003424A8); /* call 0x003424A8 */

loc_0011F78A: ;
    goto loc_0011F7AA;

loc_0011F78C: ;
    PUSH32(esp, 0x0011F791u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011F791: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xBBC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011F79Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011F79D: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011F7AAu); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_0011F7AA: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    PUSH32(esp, 0x0011F7B2u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011F7B2: ;
    edx = MEM32(eax);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xBBF);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011F7C3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011F7C3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x20);
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x80)) >> 32) & 1);
    esi = esi + 0x80;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011F7D2u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_0011F7D2: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    goto loc_0011F7DE;

loc_0011F7D7: ;
    MEM8(esi + 0xA5) = 1;

loc_0011F7DE: ;
    ebp = MEM32(esp + 0x10);

loc_0011F7E2: ;
    eax = ebp + 0x280;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011F7F3u); RECOMP_ABI_CALL(0x0019D90Cu, sub_0019D90C); /* call 0x0019D90C */

loc_0011F7F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0011F620; /* jne: not equal / not zero */

loc_0011F7FB: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011F805u); RECOMP_ABI_CALL(0x0019D953u, sub_0019D953); /* call 0x0019D953 */

loc_0011F805: ;
    POP32(esp, edi);

loc_0011F806: ;
    ecx = MEM32(esp + 0x1A8);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    PUSH32(esp, 0x0011F817u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0011F817: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1A0)) >> 32) & 1);
    esp = esp + 0x1A0;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0011F820
 * Original: 0x0011F820 - 0x0011FA8C (620 bytes, 201 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F820(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011F820: ;
    esp = esp - 0x53C;
    eax = MEM32(0x47A050);
    edx = MEM32(ecx + 0x27C);
    MEM32(esp + 0x538) = eax;
    eax = MEM32(esp + 0x540);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F849; /* je: equal / zero */

loc_0011F843: ;
    MEM32(ecx + 0x27C) = eax;

loc_0011F849: ;
    SET_LO8(edx, MEM8(0x502880));
    eax = eax << 4;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    edx = esp + 0x34;
    PUSH32(esp, 0x104);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x54C);
    MEM32(esp + 8) = 0;
    MEM8(esp + 0x3C) = 0;
    eax = eax + ecx + 0x5CD;
    if (TEST_Z(_fa, _fb)) goto loc_0011F87F; /* je: equal / zero */

loc_0011F87B: ;
    PUSH32(esp, 0);
    goto loc_0011F881;

loc_0011F87F: ;
    PUSH32(esp, 1);

loc_0011F881: ;
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011F88Au); RECOMP_ABI_CALL(0x0019D4CFu, sub_0019D4CF); /* call 0x0019D4CF */

loc_0011F88A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011F8A5; /* je: equal / zero */

loc_0011F88E: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = MEM32(esp + 0x538);
    PUSH32(esp, 0x0011F89Cu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0011F89C: ;
    esp = esp + 0x53C;
    esp += 16; return; /* ret 12 */

loc_0011F8A5: ;
    eax = esp + 0x34;
    edx = eax + 1;
    /* nop */

loc_0011F8B0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011F8B0; /* jne: not equal / not zero */

loc_0011F8B7: ;
    PUSH32(esp, esi);
    eax = eax - edx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x550);
    edx = eax;
    eax = edi;
    esi = eax + 1;
    /* nop */

loc_0011F8D0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011F8D0; /* jne: not equal / not zero */

loc_0011F8D7: ;
    eax = eax - esi;
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x104) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x104 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011F90C; /* jge: greater or equal (signed >=) */

loc_0011F8E2: ;
    eax = edi;
    edx = edi;

loc_0011F8E6: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011F8E6; /* jne: not equal / not zero */

loc_0011F8ED: ;
    edi = esp + 0x3C;
    eax = eax - edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0011F8F4: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011F8F4; /* jne: not equal / not zero */

loc_0011F8FC: ;
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

loc_0011F90C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80000000u);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011F929u); RECOMP_ABI_CALL(0x0019E34Bu, sub_0019E34B); /* call 0x0019E34B */

loc_0011F929: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011FA72; /* je: equal / zero */

loc_0011F934: ;
    PUSH32(esp, 0);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0011F948u); RECOMP_ABI_CALL(0x0019DDC9u, sub_0019DDC9); /* call 0x0019DDC9 */

loc_0011F948: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011FA6C; /* je: equal / zero */

loc_0011F950: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011FA6C; /* jne: not equal / not zero */

loc_0011F95B: ;
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x14);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0011F96Fu); RECOMP_ABI_CALL(0x0019DDC9u, sub_0019DDC9); /* call 0x0019DDC9 */

loc_0011F96F: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011FA6C; /* je: equal / zero */

loc_0011F979: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011FA6C; /* jne: not equal / not zero */

loc_0011F984: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0011F98Cu); RECOMP_ABI_CALL(0x0019EAC2u, sub_0019EAC2); /* call 0x0019EAC2 */

loc_0011F98C: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011F9B4; /* jne: not equal / not zero */

loc_0011F993: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0011F999u); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_0011F999: ;
    SET_LO8(eax, 0); /* xor self */

loc_0011F99B: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x538);
    PUSH32(esp, 0x0011F9ABu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0011F9AB: ;
    esp = esp + 0x53C;
    esp += 16; return; /* ret 12 */

loc_0011F9B4: ;
    esi = MEM32(esp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0011FA0A; /* jle: less or equal (signed <=) */

loc_0011F9BC: ;
    /* nop */

loc_0011F9C0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011FA0A; /* je: equal / zero */

loc_0011F9C4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x400 (32-bit) */
    eax = 0x400;
    if (CMP_G(_fas, _fbs)) goto loc_0011F9D3; /* jg: greater (signed >) */

loc_0011F9D1: ;
    eax = esi;

loc_0011F9D3: ;
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x154;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0011F9E9u); RECOMP_ABI_CALL(0x0019DDC9u, sub_0019DDC9); /* call 0x0019DDC9 */

loc_0011F9E9: ;
    edi = eax;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011FA0A; /* je: equal / zero */

loc_0011F9F3: ;
    PUSH32(esp, eax);
    eax = esp + 0x14C;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0011FA02u); RECOMP_ABI_CALL(0x0019EAD6u, sub_0019EAD6); /* call 0x0019EAD6 */

loc_0011FA02: ;
    esi = esi - MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_0011F9C0; /* jg: greater (signed >) */

loc_0011FA0A: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0011FA15u); RECOMP_ABI_CALL(0x0019EB24u, sub_0019EB24); /* call 0x0019EB24 */

loc_0011FA15: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_0011F993; /* jg: greater (signed >) */

loc_0011FA1D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011F993; /* je: equal / zero */

loc_0011FA25: ;
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    eax = esp + 0x23;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0011FA39u); RECOMP_ABI_CALL(0x0019DDC9u, sub_0019DDC9); /* call 0x0019DDC9 */

loc_0011FA39: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011F993; /* je: equal / zero */

loc_0011FA41: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011F993; /* jne: not equal / not zero */

loc_0011FA4D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0011FA53u); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_0011FA53: ;
    ecx = 5;
    edi = esp + 0x1C;
    esi = esp + 0x30;
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    SET_LO8(eax, ((edx == 0)) ? 1 : 0); /* sete */
    goto loc_0011F99B;

loc_0011FA6C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0011FA72u); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_0011FA72: ;
    ecx = MEM32(esp + 0x544);
    POP32(esp, ebp);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    PUSH32(esp, 0x0011FA83u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0011FA83: ;
    esp = esp + 0x53C;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0011FA90
 * Original: 0x0011FA90 - 0x0011FBFA (362 bytes, 130 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FA90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011FA90: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x88));
    esp = esp - 0x88;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x27C);
    MEM32(esp + 0x8C) = eax;
    eax = MEM32(esp + 0x94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0011FABD; /* je: equal / zero */

loc_0011FAB7: ;
    MEM32(esi + 0x27C) = eax;

loc_0011FABD: ;
    ecx = esi + 0x280;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    PUSH32(esp, ecx);
    eax = eax + esi + 0x5CD;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0x0011FAD8u); RECOMP_ABI_CALL(0x0019D802u, sub_0019D802); /* call 0x0019D802 */

loc_0011FAD8: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0011FAF8; /* jne: not equal / not zero */

loc_0011FADF: ;
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x84);
    PUSH32(esp, 0x0011FAEFu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0011FAEF: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x88)) >> 32) & 1);
    esp = esp + 0x88;
    esp += 8; return; /* ret 4 */

loc_0011FAF8: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edi = esi + 0x4C4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011FB14u); RECOMP_ABI_CALL(0x003426A9u, sub_003426A9); /* call 0x003426A9 */

loc_0011FB14: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0011FB23u); RECOMP_ABI_CALL(0x0019DCBDu, sub_0019DCBD); /* call 0x0019DCBD */

loc_0011FB23: ;
    PUSH32(esp, 0x0011FB28u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011FB28: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xBC0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011FB34u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011FB34: ;
    ebp = eax;
    esi = ebp;
    eax = esp + 0x14;
    /* nop */

loc_0011FB40: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0011FB64; /* jne: not equal / not zero */

loc_0011FB48: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0011FB60; /* je: equal / zero */

loc_0011FB4C: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0011FB64; /* jne: not equal / not zero */

loc_0011FB56: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0011FB40; /* jne: not equal / not zero */

loc_0011FB60: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_0011FB69;

loc_0011FB64: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_0011FB69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0011FBD5; /* je: equal / zero */

loc_0011FB6D: ;
    /* nop */

loc_0011FB70: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0011FB7Bu); RECOMP_ABI_CALL(0x0019D90Cu, sub_0019D90C); /* call 0x0019D90C */

loc_0011FB7B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0011FBF6; /* je: equal / zero */

loc_0011FB7F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011FB93u); RECOMP_ABI_CALL(0x003426A9u, sub_003426A9); /* call 0x003426A9 */

loc_0011FB93: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0011FBA2u); RECOMP_ABI_CALL(0x0019DCBDu, sub_0019DCBD); /* call 0x0019DCBD */

loc_0011FBA2: ;
    esi = ebp;
    eax = esp + 0x14;

loc_0011FBA8: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0011FBCC; /* jne: not equal / not zero */

loc_0011FBB0: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0011FBC8; /* je: equal / zero */

loc_0011FBB4: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0011FBCC; /* jne: not equal / not zero */

loc_0011FBBE: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0011FBA8; /* jne: not equal / not zero */

loc_0011FBC8: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_0011FBD1;

loc_0011FBCC: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_0011FBD1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0011FB70; /* jne: not equal / not zero */

loc_0011FBD5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0011FBDBu); RECOMP_ABI_CALL(0x0019D953u, sub_0019D953); /* call 0x0019D953 */

loc_0011FBDB: ;
    SET_LO8(eax, 1);

loc_0011FBDD: ;
    ecx = MEM32(esp + 0x94);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x0011FBEDu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0011FBED: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x88)) >> 32) & 1);
    esp = esp + 0x88;
    esp += 8; return; /* ret 4 */

loc_0011FBF6: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    goto loc_0011FBDD;

}

/**
 * sub_0011FC00
 * Original: 0x0011FC00 - 0x0011FC2A (42 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FC00(void)
{

loc_0011FC00: ;
    eax = MEM32(ecx + 0x27C);
    eax = eax << 4;
    ecx = eax + ecx + 0x5CD;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011FC16u); RECOMP_ABI_CALL(0x0019CFE2u, sub_0019CFE2); /* call 0x0019CFE2 */

loc_0011FC16: ;
    edx = MEM32(esp + 4);
    ecx = eax;
    eax = ecx + edx + 0x17;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = eax + 2;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011FC30
 * Original: 0x0011FC30 - 0x0011FCBD (141 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FC30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011FC30: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebp = 0; /* xor self */
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0011FC42u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011FC42: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011FC54; /* jne: not equal / not zero */

loc_0011FC46: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0011FC52u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011FC52: ;
    ebp = eax;

loc_0011FC54: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x0011FC60u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011FC60: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0011FC9B; /* je: equal / zero */

loc_0011FC6A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_0011FC76; /* jg: greater (signed >) */

loc_0011FC6E: ;
    MEM32(ecx) = 0;
    goto loc_0011FC9B;

loc_0011FC76: ;
    eax = MEM32(esi + 0xC4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0011FC8F; /* jl: less (signed <) */

loc_0011FC83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011FC8F; /* jle: less or equal (signed <=) */

loc_0011FC88: ;
    eax = 0xA;
    goto loc_0011FC99;

loc_0011FC8F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(edx, (TEST_S(_fas, _fbs)) ? 1 : 0); /* setl */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edx;

loc_0011FC99: ;
    MEM32(ecx) = eax;

loc_0011FC9B: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0011FCA3u); RECOMP_ABI_CALL(0x0011F400u, sub_0011F400); /* call 0x0011F400 */

loc_0011FCA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011FCA9; /* jne: not equal / not zero */

loc_0011FCA7: ;
    ebp = ebp + edi;

loc_0011FCA9: ;
    ecx = MEM32(esi + 0xC4);
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    POP32(esp, ebp);
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0011FCC0
 * Original: 0x0011FCC0 - 0x0011FD64 (164 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FCC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011FCC0: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x104));
    esp = esp - 0x104;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x110);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x110);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0x10C) = eax;
    MEM8(ebx) = 0;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0011FCEEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011FCEE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0011FD4A; /* je: equal / zero */

loc_0011FCF2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011FCF8u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011FCF8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xBC0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011FD04u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011FD04: ;
    ecx = eax;
    edi = ecx + 1;
    /* nop */

loc_0011FD10: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0011FD10; /* jne: not equal / not zero */

loc_0011FD17: ;
    PUSH32(esp, 0x80);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edi));
    ecx = ecx - edi;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0011FD2Fu); RECOMP_ABI_CALL(0x0019DC02u, sub_0019DC02); /* call 0x0019DC02 */

loc_0011FD2F: ;
    PUSH32(esp, 0x3DAA3C);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0011FD41u); RECOMP_ABI_CALL(0x0011F820u, sub_0011F820); /* call 0x0011F820 */

loc_0011FD41: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebx) = LO8(eax);
    POP32(esp, edi);

loc_0011FD4A: ;
    ecx = MEM32(esp + 0x10C);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    PUSH32(esp, 0x0011FD5Bu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0011FD5B: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x104)) >> 32) & 1);
    esp = esp + 0x104;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011FD70
 * Original: 0x0011FD70 - 0x0011FE03 (147 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FD70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0011FD70: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x104));
    esp = esp - 0x104;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x110);
    ebx = ecx;
    MEM32(esp + 0x108) = eax;
    _fa = (uint32_t)(MEM32(ebx + 0x27C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x27C), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0011FD9C; /* je: equal / zero */

loc_0011FD96: ;
    MEM32(ebx + 0x27C) = esi;

loc_0011FD9C: ;
    PUSH32(esp, 0x0011FDA1u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011FDA1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xBC0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011FDADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011FDAD: ;
    ecx = eax;
    edi = ecx + 1;

loc_0011FDB2: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0011FDB2; /* jne: not equal / not zero */

loc_0011FDB9: ;
    PUSH32(esp, 0x80);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edi));
    ecx = ecx - edi;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0011FDD1u); RECOMP_ABI_CALL(0x0019DC02u, sub_0019DC02); /* call 0x0019DC02 */

loc_0011FDD1: ;
    eax = esp + 0xC;
    if (4) _cf = (int)(((esi) >> (32 - (4))) & 1);
    esi = esi << 4;
    PUSH32(esp, eax);
    ecx = esi + ebx + 0x5CD;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011FDE6u); RECOMP_ABI_CALL(0x0019D732u, sub_0019D732); /* call 0x0019D732 */

loc_0011FDE6: ;
    ecx = MEM32(esp + 0x10C);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, edi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    PUSH32(esp, 0x0011FDFAu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0011FDFA: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x104)) >> 32) & 1);
    esp = esp + 0x104;
    esp += 8; return; /* ret 4 */

}



/**
 * sub_0011FE50
 * Original: 0x0011FE50 - 0x00120089 (569 bytes, 198 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FE50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011FE50: ;
    esp = esp - 0x224;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    MEM32(esp + 0x228) = eax;
    eax = MEM32(ebx + 0x27C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x234);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011FE7E; /* je: equal / zero */

loc_0011FE78: ;
    MEM32(ebx + 0x27C) = edi;

loc_0011FE7E: ;
    eax = MEM32(esp + 0x240);
    esi = MEM32(esp + 0x238);
    MEM32(esp + 0x10) = eax;
    eax = esi;
    MEM32(esp + 0xC) = 0;
    MEM8(esp + 0x28) = 0;
    edx = eax + 1;

loc_0011FEA2: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011FEA2; /* jne: not equal / not zero */

loc_0011FEA9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax - edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0011FEBBu); RECOMP_ABI_CALL(0x0019DC02u, sub_0019DC02); /* call 0x0019DC02 */

loc_0011FEBB: ;
    eax = esi;
    edx = eax + 1;

loc_0011FEC0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011FEC0; /* jne: not equal / not zero */

loc_0011FEC7: ;
    PUSH32(esp, 0x80);
    eax = eax - edx;
    ecx = esp + 0x130;
    PUSH32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0011FEE2u); RECOMP_ABI_CALL(0x0019DC02u, sub_0019DC02); /* call 0x0019DC02 */

loc_0011FEE2: ;
    SET_LO8(eax, MEM8(0x502880));
    edi = edi << 4;
    edx = esp + 0x28;
    PUSH32(esp, 0x104);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ecx = edi + ebx + 0x5CD;
    PUSH32(esp, edx);
    eax = esp + 0x134;
    if (TEST_Z(_fa, _fb)) goto loc_0011FF2F; /* je: equal / zero */

loc_0011FF06: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011FF11u); RECOMP_ABI_CALL(0x0019D4CFu, sub_0019D4CF); /* call 0x0019D4CF */

loc_0011FF11: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011FF3E; /* je: equal / zero */

loc_0011FF15: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x220);
    PUSH32(esp, 0x0011FF26u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0011FF26: ;
    esp = esp + 0x224;
    esp += 28; return; /* ret 24 */

loc_0011FF2F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011FF3Au); RECOMP_ABI_CALL(0x0019D4CFu, sub_0019D4CF); /* call 0x0019D4CF */

loc_0011FF3A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011FFBC; /* jne: not equal / not zero */

loc_0011FF3E: ;
    eax = esp + 0x28;
    edx = eax + 1;

loc_0011FF45: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011FF45; /* jne: not equal / not zero */

loc_0011FF4C: ;
    eax = eax - edx;
    ebx = esp + eax + 0x28;
    eax = MEM32(esp + 0x23C);
    edx = ebx;
    edx = edx - eax;
    /* nop */

loc_0011FF60: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011FF60; /* jne: not equal / not zero */

loc_0011FF6A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    PUSH32(esp, xml1_progress_options_disposition(MEM32(esp + 0x24C)));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011FF86u); RECOMP_ABI_CALL(0x0019E34Bu, sub_0019E34B); /* call 0x0019E34B */

loc_0011FF86: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011FFBC; /* je: equal / zero */

loc_0011FF8D: ;
    PUSH32(esp, 0);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011FFA1u); RECOMP_ABI_CALL(0x0019DEB6u, sub_0019DEB6); /* call 0x0019DEB6 */

loc_0011FFA1: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011FFB6; /* jne: not equal / not zero */

loc_0011FFA8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0011FFAFu); RECOMP_ABI_CALL(0x0019EAC2u, sub_0019EAC2); /* call 0x0019EAC2 */

loc_0011FFAF: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011FFD6; /* jne: not equal / not zero */

loc_0011FFB6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011FFBCu); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_0011FFBC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x220);
    PUSH32(esp, 0x0011FFCDu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0011FFCD: ;
    esp = esp + 0x224;
    esp += 28; return; /* ret 24 */

loc_0011FFD6: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x248);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011FFEAu); RECOMP_ABI_CALL(0x0019EAD6u, sub_0019EAD6); /* call 0x0019EAD6 */

loc_0011FFEA: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011FFF5u); RECOMP_ABI_CALL(0x0019EB24u, sub_0019EB24); /* call 0x0019EB24 */

loc_0011FFF5: ;
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x14);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120009u); RECOMP_ABI_CALL(0x0019DEB6u, sub_0019DEB6); /* call 0x0019DEB6 */

loc_00120009: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012001A; /* je: equal / zero */

loc_00120010: ;
    PUSH32(esp, esi);

loc_00120011: ;
    PUSH32(esp, 0x00120016u); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_00120016: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_00120070;

loc_0012001A: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012002Du); RECOMP_ABI_CALL(0x0019DEB6u, sub_0019DEB6); /* call 0x0019DEB6 */

loc_0012002D: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x14) (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00120011; /* jne: not equal / not zero */

loc_00120038: ;
    PUSH32(esp, 0x0012003Du); RECOMP_ABI_CALL(0x0019DF8Cu, sub_0019DF8C); /* call 0x0019DF8C */

loc_0012003D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120043u); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_00120043: ;
    esi = MEM32(esp + 0x24C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012006E; /* je: equal / zero */

loc_0012004E: ;
    eax = 0x3DAA18;
    edx = ebx;
    edx = edx - eax;

loc_00120057: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00120057; /* jne: not equal / not zero */

loc_00120061: ;
    PUSH32(esp, 0);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012006Eu); RECOMP_ABI_CALL(0x0019E7B8u, sub_0019E7B8); /* call 0x0019E7B8 */

loc_0012006E: ;
    SET_LO8(eax, 1);

loc_00120070: ;
    ecx = MEM32(esp + 0x230);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x00120080u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00120080: ;
    esp = esp + 0x224;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00120011
 * Original: 0x00120011 - 0x00120089 (120 bytes, 43 insns)
 * Category: game_io
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120011(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120011: ;
    PUSH32(esp, 0x00120016u); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_00120016: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_00120070;

    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012002Du); RECOMP_ABI_CALL(0x0019DEB6u, sub_0019DEB6); /* call 0x0019DEB6 */

loc_0012002D: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x14) (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00120011; /* jne: not equal / not zero */

loc_00120038: ;
    PUSH32(esp, 0x0012003Du); RECOMP_ABI_CALL(0x0019DF8Cu, sub_0019DF8C); /* call 0x0019DF8C */

loc_0012003D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120043u); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_00120043: ;
    esi = MEM32(esp + 0x24C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012006E; /* je: equal / zero */

loc_0012004E: ;
    eax = 0x3DAA18;
    edx = ebx;
    edx = edx - eax;

loc_00120057: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00120057; /* jne: not equal / not zero */

loc_00120061: ;
    PUSH32(esp, 0);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012006Eu); RECOMP_ABI_CALL(0x0019E7B8u, sub_0019E7B8); /* call 0x0019E7B8 */

loc_0012006E: ;
    SET_LO8(eax, 1);

loc_00120070: ;
    ecx = MEM32(esp + 0x230);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x00120080u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00120080: ;
    esp = esp + 0x224;
    esp += 28; return; /* ret 24 */

}



/**
 * sub_00120120
 * Original: 0x00120120 - 0x0012033A (538 bytes, 185 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120120(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120120: ;
    esp = esp - 0x13C;
    eax = MEM32(0x47A050);
    edx = MEM32(ecx + 0x27C);
    MEM32(esp + 0x138) = eax;
    eax = MEM32(esp + 0x140);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120149; /* je: equal / zero */

loc_00120143: ;
    MEM32(ecx + 0x27C) = eax;

loc_00120149: ;
    SET_LO8(edx, MEM8(0x502880));
    eax = eax << 4;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    edx = esp + 0x34;
    PUSH32(esp, 0x104);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14C);
    MEM32(esp + 8) = 0;
    MEM8(esp + 0x3C) = 0;
    eax = eax + ecx + 0x5CD;
    if (TEST_Z(_fa, _fb)) goto loc_0012017F; /* je: equal / zero */

loc_0012017B: ;
    PUSH32(esp, 0);
    goto loc_00120181;

loc_0012017F: ;
    PUSH32(esp, 1);

loc_00120181: ;
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012018Au); RECOMP_ABI_CALL(0x0019D4CFu, sub_0019D4CF); /* call 0x0019D4CF */

loc_0012018A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001201A5; /* je: equal / zero */

loc_0012018E: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = MEM32(esp + 0x138);
    PUSH32(esp, 0x0012019Cu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0012019C: ;
    esp = esp + 0x13C;
    esp += 24; return; /* ret 20 */

loc_001201A5: ;
    eax = esp + 0x34;
    edx = eax + 1;
    /* nop */

loc_001201B0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001201B0; /* jne: not equal / not zero */

loc_001201B7: ;
    PUSH32(esp, esi);
    eax = eax - edx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x150);
    edx = eax;
    eax = edi;
    esi = eax + 1;
    /* nop */

loc_001201D0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001201D0; /* jne: not equal / not zero */

loc_001201D7: ;
    eax = eax - esi;
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x104) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x104 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012020C; /* jge: greater or equal (signed >=) */

loc_001201E2: ;
    eax = edi;
    edx = edi;

loc_001201E6: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001201E6; /* jne: not equal / not zero */

loc_001201ED: ;
    edi = esp + 0x3C;
    eax = eax - edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001201F4: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001201F4; /* jne: not equal / not zero */

loc_001201FC: ;
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

loc_0012020C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80000000u);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00120229u); RECOMP_ABI_CALL(0x0019E34Bu, sub_0019E34B); /* call 0x0019E34B */

loc_00120229: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012027B; /* je: equal / zero */

loc_00120230: ;
    PUSH32(esp, 0);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00120244u); RECOMP_ABI_CALL(0x0019DDC9u, sub_0019DDC9); /* call 0x0019DDC9 */

loc_00120244: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120275; /* jne: not equal / not zero */

loc_0012024B: ;
    edi = MEM32(esp + 0x158);
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00120275; /* ja: above (unsigned >) */

loc_0012025A: ;
    PUSH32(esp, 0);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x14);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0012026Eu); RECOMP_ABI_CALL(0x0019DDC9u, sub_0019DDC9); /* call 0x0019DDC9 */

loc_0012026E: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120295; /* je: equal / zero */

loc_00120275: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0012027Bu); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_0012027B: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x138);
    PUSH32(esp, 0x0012028Cu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0012028C: ;
    esp = esp + 0x13C;
    esp += 24; return; /* ret 20 */

loc_00120295: ;
    edx = MEM32(edi);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x160);
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001202AEu); RECOMP_ABI_CALL(0x0019DDC9u, sub_0019DDC9); /* call 0x0019DDC9 */

loc_001202AE: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x18) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001202C2; /* je: equal / zero */

loc_001202B8: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001202BEu); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_001202BE: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_00120321;

loc_001202C2: ;
    PUSH32(esp, 0);
    MEM32(edi) = eax;
    PUSH32(esp, 0x001202CBu); RECOMP_ABI_CALL(0x0019EAC2u, sub_0019EAC2); /* call 0x0019EAC2 */

loc_001202CB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001202B8; /* je: equal / zero */

loc_001202D2: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001202DCu); RECOMP_ABI_CALL(0x0019EAD6u, sub_0019EAD6); /* call 0x0019EAD6 */

loc_001202DC: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001202E7u); RECOMP_ABI_CALL(0x0019EB24u, sub_0019EB24); /* call 0x0019EB24 */

loc_001202E7: ;
    ecx = 5;
    edi = esp + 0x30;
    esi = esp + 0x1C;
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((edx != 0)) goto loc_001202B8; /* jne: not equal / not zero */

loc_001202FA: ;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = esp + 0x23;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0012030Du); RECOMP_ABI_CALL(0x0019DDC9u, sub_0019DDC9); /* call 0x0019DDC9 */

loc_0012030D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001202B8; /* je: equal / zero */

loc_00120311: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001202B8; /* jne: not equal / not zero */

loc_00120319: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0012031Fu); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_0012031F: ;
    SET_LO8(eax, 1);

loc_00120321: ;
    ecx = MEM32(esp + 0x148);
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x00120331u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00120331: ;
    esp = esp + 0x13C;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00120340
 * Original: 0x00120340 - 0x001203D0 (144 bytes, 39 insns)
 * Category: game_io
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120340(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120340: ;
    esp = esp - 0x84;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    MEM32(esp + 0x84) = eax;
    esi = ecx;
    PUSH32(esp, 0x0012035Au); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0012035A: ;
    ecx = MEM32(esp + 0x94);
    edx = MEM32(esp + 0x90);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    edx = MEM32(eax);
    PUSH32(esp, 0xBAE);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00120377u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00120377: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D2E8C);
    eax = esp + 0x14;
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012038Cu); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_0012038C: ;
    ecx = MEM32(esp + 0xB4);
    edx = MEM32(esp + 0xB0);
    esp = esp + 0x18;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x94);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3DAA4C);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001203BAu); RECOMP_ABI_CALL(0x0011FE50u, sub_0011FE50); /* call 0x0011FE50 */

loc_001203BA: ;
    ecx = MEM32(esp + 0x84);
    POP32(esp, esi);
    PUSH32(esp, 0x001203C7u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_001203C7: ;
    esp = esp + 0x84;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001203D0
 * Original: 0x001203D0 - 0x00120400 (48 bytes, 20 insns)
 * Category: game_io
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001203D0(void)
{

loc_001203D0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001203DDu); RECOMP_ABI_CALL(0x00120400u, sub_00120400); /* call 0x00120400 */

loc_001203DD: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3DAA4C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001203F9u); RECOMP_ABI_CALL(0x00120120u, sub_00120120); /* call 0x00120120 */

loc_001203F9: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00120400
 * Original: 0x00120400 - 0x00120582 (386 bytes, 119 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120400(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120400: ;
    esp = esp - 0x194;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(esp + 0x1A0) = eax;
    ebx = ecx;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0x00120423u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_00120423: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xBAE);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0012042Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012042F: ;
    edx = eax + 1;

loc_00120432: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00120432; /* jne: not equal / not zero */

loc_00120439: ;
    eax = eax - edx;
    ebp = eax;
    eax = ebx + 0x280;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x27C);
    eax = eax << 4;
    ecx = eax + ebx + 0x5CD;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012045Au); RECOMP_ABI_CALL(0x0019D802u, sub_0019D802); /* call 0x0019D802 */

loc_0012045A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00120567; /* je: equal / zero */

loc_00120469: ;
    /* nop */

loc_00120470: ;
    PUSH32(esp, 0x104);
    eax = ebx + 0x3C0;
    PUSH32(esp, eax);
    edx = esp + 0xA4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00120489u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_00120489: ;
    eax = esp + 0xA8;
    esp = esp + 0xC;
    edx = eax + 1;

loc_00120496: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00120496; /* jne: not equal / not zero */

loc_0012049D: ;
    eax = eax - edx;
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x104) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x104 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001204D2; /* jge: greater or equal (signed >=) */

loc_001204A9: ;
    edi = esp + 0x9C;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001204B1: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001204B1; /* jne: not equal / not zero */

loc_001204B9: ;
    eax = MEM32(0x3DAA4C);
    ecx = MEM32(0x3DAA50);
    SET_LO8(edx, MEM8(0x3DAA54));
    MEM32(edi) = eax;
    MEM32(edi + 4) = ecx;
    MEM8(edi + 8) = LO8(edx);

loc_001204D2: ;
    eax = esp + 0x9C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001204DFu); RECOMP_ABI_CALL(0x0019D9A9u, sub_0019D9A9); /* call 0x0019D9A9 */

loc_001204DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012052E; /* je: equal / zero */

loc_001204E4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    edx = ebx + 0x4C4;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00120504u); RECOMP_ABI_CALL(0x0019DCBDu, sub_0019DCBD); /* call 0x0019DCBD */

loc_00120504: ;
    { /* Cross-language save slot. */ unsigned _slot=xml1_save_slot_offset((const unsigned char*)((uintptr_t)g_xbox_mem_offset+esp+0x1C),128); if(_slot)ebp=_slot-1; }
    PUSH32(esp, 0xA);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    esi = esp + ebp + 0x25;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120515u); RECOMP_ABI_CALL(0x0034267Bu, sub_0034267B); /* call 0x0034267B */

loc_00120515: ;
    ecx = MEM32(esp + 0x1B4);
    esp = esp + 0xC;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012052A; /* jne: not equal / not zero */

loc_00120524: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012054F; /* jne: not equal / not zero */

loc_0012052A: ;
    esi = MEM32(esp + 0x10);

loc_0012052E: ;
    eax = ebx + 0x280;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012053Bu); RECOMP_ABI_CALL(0x0019D90Cu, sub_0019D90C); /* call 0x0019D90C */

loc_0012053B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00120470; /* jne: not equal / not zero */

loc_00120543: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120549u); RECOMP_ABI_CALL(0x0019D953u, sub_0019D953); /* call 0x0019D953 */

loc_00120549: ;
    eax = MEM32(esp + 0x14);
    goto loc_00120569;

loc_0012054F: ;
    esi = MEM32(esp + 0x10);
    ebx = ebx + 0x4C4;
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x00120563u); RECOMP_ABI_CALL(0x0019D953u, sub_0019D953); /* call 0x0019D953 */

loc_00120563: ;
    eax = ebx;
    goto loc_00120569;

loc_00120567: ;
    eax = edi;

loc_00120569: ;
    ecx = MEM32(esp + 0x1A0);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x00120579u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00120579: ;
    esp = esp + 0x194;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00120590
 * Original: 0x00120590 - 0x001205D9 (73 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120590: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x27C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001205A8; /* je: equal / zero */

loc_001205A2: ;
    MEM32(esi + 0x27C) = edi;

loc_001205A8: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001205B4u); RECOMP_ABI_CALL(0x00120400u, sub_00120400); /* call 0x00120400 */

loc_001205B4: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001205CD; /* je: equal / zero */

loc_001205BA: ;
    edi = edi << 4;
    PUSH32(esp, eax);
    ecx = edi + esi + 0x5CD;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001205CBu); RECOMP_ABI_CALL(0x0019D732u, sub_0019D732); /* call 0x0019D732 */

loc_001205CB: ;
    ecx = eax;

loc_001205CD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001205E0
 * Original: 0x001205E0 - 0x00120643 (99 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001205E0(void)
{

loc_001205E0: ;
    esp = esp - 0xC04;
    eax = MEM32(0x47A050);
    edx = MEM32(esp + 0xC0C);
    MEM32(esp + 0xC00) = eax;
    eax = MEM32(esp + 0xC08);
    eax = eax << 4;
    ecx = (uint32_t)(int32_t)SMEM8(eax + ecx + 0x5CD);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEM32(esp + 8) = 2;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x0012062Eu); RECOMP_ABI_CALL(0x0019EB69u, sub_0019EB69); /* call 0x0019EB69 */

loc_0012062E: ;
    ecx = MEM32(esp + 0xC00);
    PUSH32(esp, 0x0012063Au); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0012063A: ;
    esp = esp + 0xC04;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00120650
 * Original: 0x00120650 - 0x00120658 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120650(void)
{

loc_00120650: ;
    PUSH32(esp, 0x00120655u); RECOMP_ABI_CALL(0x0011EC70u, sub_0011EC70); /* call 0x0011EC70 */

loc_00120655: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00120660
 * Original: 0x00120660 - 0x0012067E (30 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120660(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120660: ;
    edx = MEM32(ecx + 0x27C);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(ecx) = 0x3DAD3C;
    if (CMP_EQ(_fa, _fb)) goto loc_00120679; /* je: equal / zero */

loc_00120673: ;
    MEM32(ecx + 0x27C) = eax;

loc_00120679: ;
    g_seh_ebp = ebp; sub_0011EC70(); return; /* tail jmp 0x0011EC70 */

}

/**
 * sub_00120680
 * Original: 0x00120680 - 0x001206DB (91 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120680(void)
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

loc_00120680: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3DADBC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3dadbc] */
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001206AD; /* jne: not equal / not zero */

loc_00120695: ;
    fp_top() = fp_top() + MEMF(0x3DADBC); /* fadd dword ptr [0x3dadbc] */
    fp_push(MEMF(0x453F6C)); /* fld float */
    PUSH32(esp, 0x001206A6u); RECOMP_ABI_CALL(0x00341916u, sub_00341916); /* call 0x00341916 */

loc_001206A6: ;
    fp_top() = fp_top() - MEMF(0x3DADBC); /* fsub dword ptr [0x3dadbc] */
    esp += 4; return; /* ret */

loc_001206AD: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CC490)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cc490] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001206D6; /* jp: parity */

loc_001206BA: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(0x3DADBC); /* fsub dword ptr [0x3dadbc] */
    fp_push(MEMF(0x453F6C)); /* fld float */
    PUSH32(esp, 0x001206CFu); RECOMP_ABI_CALL(0x00341916u, sub_00341916); /* call 0x00341916 */

loc_001206CF: ;
    fp_top() = fp_top() + MEMF(0x3DADBC); /* fadd dword ptr [0x3dadbc] */
    esp += 4; return; /* ret */

loc_001206D6: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001206E0
 * Original: 0x001206E0 - 0x001206E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001206E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001206E0: ;
    g_seh_ebp = ebp; sub_00120680(); return; /* tail jmp 0x00120680 */

}

/**
 * sub_001206F0
 * Original: 0x001206F0 - 0x0012071C (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001206F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001206F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001206FDu); RECOMP_ABI_CALL(0x00120680u, sub_00120680); /* call 0x00120680 */

loc_001206FD: ;
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00120708u); RECOMP_ABI_CALL(0x00120680u, sub_00120680); /* call 0x00120680 */

loc_00120708: ;
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00120714u); RECOMP_ABI_CALL(0x00120680u, sub_00120680); /* call 0x00120680 */

loc_00120714: ;
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_00120720
 * Original: 0x00120720 - 0x00120798 (120 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120720(void)
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

loc_00120720: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    ecx = MEM32(esp + 4);
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0012074E; /* jp: parity */

loc_00120735: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0012074E; /* jp: parity */

loc_00120747: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    esp += 4; return; /* ret */

loc_0012074E: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0012077A; /* jnp: not parity */

loc_0012075F: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00120797; /* jp: parity */

loc_00120773: ;
    fp_top() = fp_top() + MEMF(0x3C8328); /* fadd dword ptr [0x3c8328] */
    esp += 4; return; /* ret */

loc_0012077A: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00120791; /* jne: not equal / not zero */

loc_0012078A: ;
    fp_push(MEMF(0x3C8308)); /* fld float */
    esp += 4; return; /* ret */

loc_00120791: ;
    fp_push(MEMF(0x3DADC0)); /* fld float */

loc_00120797: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001207A0
 * Original: 0x001207A0 - 0x00120856 (182 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001207A0(void)
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

loc_001207A0: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001207C2; /* jne: not equal / not zero */

loc_001207B1: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001207E4; /* jnp: not parity */

loc_001207C2: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00120851; /* jp: parity */

loc_001207D3: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00120851; /* jne: not equal / not zero */

loc_001207E4: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 4); /* fsub dword ptr [esp + 4] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    fp_push(MEMF(0x3DADBC)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0012082B; /* jp: parity */

loc_00120805: ;
    fp_top() = fp_top() - MEMF(esp + 4); /* fsub dword ptr [esp + 4] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3DADBC); /* fadd dword ptr [0x3dadbc] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00120851; /* jp: parity */

loc_00120820: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C8328); /* fadd dword ptr [0x3c8328] */
    esp += 4; return; /* ret */

loc_0012082B: ;
    fp_top() = fp_top() - MEMF(esp + 8); /* fsub dword ptr [esp + 8] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3DADBC); /* fadd dword ptr [0x3dadbc] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00120851; /* jp: parity */

loc_00120846: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(0x3C8328); /* fsub dword ptr [0x3c8328] */
    esp += 4; return; /* ret */

loc_00120851: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00120860
 * Original: 0x00120860 - 0x0012094B (235 bytes, 76 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00120860(void)
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

loc_00120860: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    ecx = MEM32(esp + 8);
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001208CF; /* jp: parity */

loc_00120875: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001208CF; /* jp: parity */

loc_00120887: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(ecx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001208B6; /* jne: not equal / not zero */

loc_0012089D: ;
    fp_push(MEMF(0x3C8308)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = -fp_top(); /* fchs */
    MEM32(eax) = 0;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

loc_001208B6: ;
    fp_push(MEMF(0x3D654C)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = -fp_top(); /* fchs */
    MEM32(eax) = 0;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

loc_001208CF: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001208FC; /* jnp: not parity */

loc_001208E0: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0012091A; /* jp: parity */

loc_001208F4: ;
    fp_top() = fp_top() + MEMF(0x3C8328); /* fadd dword ptr [0x3c8328] */
    goto loc_0012091A;

loc_001208FC: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00120914; /* jne: not equal / not zero */

loc_0012090C: ;
    fp_push(MEMF(0x3C8308)); /* fld float */
    goto loc_0012091A;

loc_00120914: ;
    fp_push(MEMF(0x3DADC0)); /* fld float */

loc_0012091A: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx)); /* fld float */
    fp_push(MEMF(ecx + 8)); /* fld float */
    MEM32(eax) = 0;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00120950
 * Original: 0x00120950 - 0x001209B4 (100 bytes, 31 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00120950(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00120950: ;
    esp = esp - 0x18;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00120962u); RECOMP_ABI_CALL(0x00120860u, sub_00120860); /* call 0x00120860 */

loc_00120962: ;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    MEM32(esp + 8) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x00120980u); RECOMP_ABI_CALL(0x00120680u, sub_00120680); /* call 0x00120680 */

loc_00120980: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012098Eu); RECOMP_ABI_CALL(0x00120680u, sub_00120680); /* call 0x00120680 */

loc_0012098E: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012099Cu); RECOMP_ABI_CALL(0x00120680u, sub_00120680); /* call 0x00120680 */

loc_0012099C: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x18);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 4) = ecx;
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001209C0
 * Original: 0x001209C0 - 0x00120A26 (102 bytes, 36 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001209C0(void)
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

loc_001209C0: ;
    ecx = MEM32(esp + 8);
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001209F5; /* jp: parity */

loc_001209D6: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = cos(fp_top()); /* fcos */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

loc_001209F5: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00120A30
 * Original: 0x00120A30 - 0x00120AFD (205 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120A30(void)
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

loc_00120A30: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0x3F800000;
    PUSH32(esp, 0x00120A62u); RECOMP_ABI_CALL(0x0023FB50u, sub_0023FB50); /* call 0x0023FB50 */

loc_00120A62: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_push(MEMF(esi)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C9760)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c9760] */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00120AB2; /* jp: parity */

loc_00120A8D: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0x3F800000;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x00120AB2u); RECOMP_ABI_CALL(0x0023FB50u, sub_0023FB50); /* call 0x0023FB50 */

loc_00120AB2: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    ecx = MEM32(esp + 0x20);
    fp_push(MEMF(esi + 4)); /* fld float */
    PUSH32(esp, edi);
    fp_push(MEMF(esi)); /* fld float */
    PUSH32(esp, esi);
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
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(esi); /* fmul dword ptr [esi] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(esi + 4); /* fmul dword ptr [esi + 4] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esi + 8); /* fmul dword ptr [esi + 8] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00120AF7u); RECOMP_ABI_CALL(0x0023FB50u, sub_0023FB50); /* call 0x0023FB50 */

loc_00120AF7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00120B00
 * Original: 0x00120B00 - 0x00120E1B (795 bytes, 253 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120B00(void)
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

loc_00120B00: ;
    esp = esp - 0x28;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 0x34);
    MEM32(esp + 4) = ecx;
    ecx = MEM32(eax);
    MEM32(esp + 8) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x40);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(eax);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x00120B55u); RECOMP_ABI_CALL(0x00120680u, sub_00120680); /* call 0x00120680 */

loc_00120B55: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00120B63u); RECOMP_ABI_CALL(0x00120680u, sub_00120680); /* call 0x00120680 */

loc_00120B63: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00120B71u); RECOMP_ABI_CALL(0x00120680u, sub_00120680); /* call 0x00120680 */

loc_00120B71: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00120B7Fu); RECOMP_ABI_CALL(0x00120680u, sub_00120680); /* call 0x00120680 */

loc_00120B7F: ;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00120B8Du); RECOMP_ABI_CALL(0x00120680u, sub_00120680); /* call 0x00120680 */

loc_00120B8D: ;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00120B9Bu); RECOMP_ABI_CALL(0x00120680u, sub_00120680); /* call 0x00120680 */

loc_00120B9B: ;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    esp = esp + 0x18;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00120BDB; /* jp: parity */

loc_00120BB5: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00120BDB; /* jp: parity */

loc_00120BC8: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00120C1F; /* jnp: not parity */

loc_00120BDB: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_00120C1F: ;
    eax = MEM32(esp + 0x38);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = esp + 0x18;
    ebp = ebp - eax;
    ecx = esp + 0x24;
    eax = eax - ecx;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    ebx = 0; /* xor self */
    goto loc_00120C40;

loc_00120C3B: ;
    eax = MEM32(esp + 0x10);
    /* nop */

loc_00120C40: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    edi = esp + ebx + 0x2C;
    fp_push(MEMF(eax + edi)); /* fld float */
    esi = eax + edi;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00120DEF; /* jnp: not parity */

loc_00120C5D: ;
    fp_push(MEMF(esi + ebp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00120D09; /* jnp: not parity */

loc_00120C71: ;
    fp_push(MEMF(esi + ebp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00120D09; /* je: equal / zero */

loc_00120C85: ;
    edx = MEM32(edi);
    eax = MEM32(esp + ebx + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00120C92u); RECOMP_ABI_CALL(0x001207A0u, sub_001207A0); /* call 0x001207A0 */

loc_00120C92: ;
    MEMF(esp + 0x48) = (float)fp_top(); /* fst */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 8;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + ebx + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + ebx + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00120CD0; /* jne: not equal / not zero */

loc_00120CAA: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() * MEMF(esi); /* fmul dword ptr [esi] */
    fp_top() = fp_top() + MEMF(esp + ebx + 0x14); /* fadd dword ptr [esp + ebx + 0x14] */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00120CC7; /* jp: parity */

loc_00120CC1: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x40)); /* fld float */

loc_00120CC7: ;
    MEMF(esp + ebx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00120DEF;

loc_00120CD0: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + ebx + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + ebx + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00120DEF; /* jp: parity */

loc_00120CE3: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() * MEMF(esi); /* fmul dword ptr [esi] */
    fp_top() = MEMF(esp + ebx + 0x14) - fp_top(); /* fsubr dword ptr [esp + ebx + 0x14] */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00120CC7; /* jne: not equal / not zero */

loc_00120CFA: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    MEMF(esp + ebx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00120DEF;

loc_00120D09: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    ecx = MEM32(esp + ebx + 0x14);
    fp_top() = fp_top() * MEMF(esi); /* fmul dword ptr [esi] */
    MEM32(esp + 0x44) = ecx;
    fp_top() = fp_top() * MEMF(esi + ebp); /* fmul dword ptr [esi + ebp] */
    fp_top() = fp_top() + MEMF(esp + ebx + 0x14); /* fadd dword ptr [esp + ebx + 0x14] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x50);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00120D2Cu); RECOMP_ABI_CALL(0x00120680u, sub_00120680); /* call 0x00120680 */

loc_00120D2C: ;
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    eax = MEM32(esp + 0x44);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edi)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edi] */
    MEM32(esp + ebx + 0x18) = eax;
    esp = esp + 4;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00120D69; /* jp: parity */

loc_00120D48: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edi)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edi] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00120D69; /* jne: not equal / not zero */

loc_00120D55: ;
    fp_push(MEMF(esi + ebp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00120DE9; /* je: equal / zero */

loc_00120D69: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edi)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edi] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00120D93; /* jne: not equal / not zero */

loc_00120D76: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edi)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edi] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00120D93; /* jp: parity */

loc_00120D83: ;
    fp_push(MEMF(esi + ebp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00120DE9; /* jnp: not parity */

loc_00120D93: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edi)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edi] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00120DBE; /* jp: parity */

loc_00120DA0: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edi)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edi] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00120DBE; /* jp: parity */

loc_00120DAD: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00120DE9; /* jp: parity */

loc_00120DBE: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edi)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edi] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00120DEF; /* jne: not equal / not zero */

loc_00120DCB: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edi)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edi] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00120DEF; /* jne: not equal / not zero */

loc_00120DD8: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00120DEF; /* jnp: not parity */

loc_00120DE9: ;
    ecx = MEM32(edi);
    MEM32(esp + ebx + 0x14) = ecx;

loc_00120DEF: ;
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00120C3B; /* jl: less (signed <) */

loc_00120DFB: ;
    eax = MEM32(esp + 0x3C);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    edx = MEM32(esp + 0x18);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00120E20
 * Original: 0x00120E20 - 0x00120E2C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120E20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120E20: ;
    PUSH32(esp, 0x00120E25u); RECOMP_ABI_CALL(0x0012F280u, sub_0012F280); /* call 0x0012F280 */

loc_00120E25: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 8)); return; /* indirect tail jmp */

}

/**
 * sub_00120E30
 * Original: 0x00120E30 - 0x00120E3C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120E30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120E30: ;
    PUSH32(esp, 0x00120E35u); RECOMP_ABI_CALL(0x0013D320u, sub_0013D320); /* call 0x0013D320 */

loc_00120E35: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 8)); return; /* indirect tail jmp */

}

/**
 * sub_00120E40
 * Original: 0x00120E40 - 0x00120E4C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120E40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120E40: ;
    PUSH32(esp, 0x00120E45u); RECOMP_ABI_CALL(0x00147A40u, sub_00147A40); /* call 0x00147A40 */

loc_00120E45: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 8)); return; /* indirect tail jmp */

}

/**
 * sub_00120E50
 * Original: 0x00120E50 - 0x00120E5C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120E50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120E50: ;
    PUSH32(esp, 0x00120E55u); RECOMP_ABI_CALL(0x0014A660u, sub_0014A660); /* call 0x0014A660 */

loc_00120E55: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 8)); return; /* indirect tail jmp */

}

/**
 * sub_00120E60
 * Original: 0x00120E60 - 0x00120E67 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120E60(void)
{

loc_00120E60: ;
    MEM32(ecx) = 0x3DADFC;
    esp += 4; return; /* ret */

}

/**
 * sub_00120E70
 * Original: 0x00120E70 - 0x00120E8F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120E70: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3DADFC;
    if (TEST_Z(_fa, _fb)) goto loc_00120E89; /* je: equal / zero */

loc_00120E80: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120E86u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00120E86: ;
    esp = esp + 4;

loc_00120E89: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00120E90
 * Original: 0x00120E90 - 0x00120E9C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120E90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120E90: ;
    PUSH32(esp, 0x00120E95u); RECOMP_ABI_CALL(0x001326E0u, sub_001326E0); /* call 0x001326E0 */

loc_00120E95: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 8)); return; /* indirect tail jmp */

}

/**
 * sub_00120EA0
 * Original: 0x00120EA0 - 0x00120EBB (27 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120EA0(void)
{

loc_00120EA0: ;
    PUSH32(esp, 0x00120EA5u); RECOMP_ABI_CALL(0x001326E0u, sub_001326E0); /* call 0x001326E0 */

loc_00120EA5: ;
    ecx = MEM32(0x502EE4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00120EB8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00120EB8: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00120EC0
 * Original: 0x00120EC0 - 0x00120EDB (27 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120EC0(void)
{

loc_00120EC0: ;
    PUSH32(esp, 0x00120EC5u); RECOMP_ABI_CALL(0x0012F280u, sub_0012F280); /* call 0x0012F280 */

loc_00120EC5: ;
    ecx = MEM32(0x502EE4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00120ED8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00120ED8: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00120EE0
 * Original: 0x00120EE0 - 0x00120F04 (36 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120EE0(void)
{

loc_00120EE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00120EE6u); RECOMP_ABI_CALL(0x00147A40u, sub_00147A40); /* call 0x00147A40 */

loc_00120EE6: ;
    ecx = MEM32(0x502EE4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00120F00u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00120F00: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00120F10
 * Original: 0x00120F10 - 0x00120F2B (27 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120F10(void)
{

loc_00120F10: ;
    PUSH32(esp, 0x00120F15u); RECOMP_ABI_CALL(0x000188C0u, sub_000188C0); /* call 0x000188C0 */

loc_00120F15: ;
    ecx = MEM32(0x502EE4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00120F28u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00120F28: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00120F30
 * Original: 0x00120F30 - 0x00120F70 (64 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120F30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120F30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = 0x3DAEAC;
    ecx = 3;
    eax = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    POP32(esp, esi);
    if ((_flags == 0)) goto loc_00120F5C; /* jne: not equal / not zero */

loc_00120F48: ;
    PUSH32(esp, 0x00120F4Du); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_00120F4D: ;
    edx = MEM32(eax);
    MEM32(esp + 4) = 0;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x38)); return; /* indirect tail jmp */

loc_00120F5C: ;
    PUSH32(esp, 0x00120F61u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_00120F61: ;
    edx = MEM32(eax);
    MEM32(esp + 4) = 1;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x38)); return; /* indirect tail jmp */

}

/**
 * sub_00120F70
 * Original: 0x00120F70 - 0x00120FA0 (48 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120F70: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00120F7Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00120F7B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00120F93; /* jne: not equal / not zero */

loc_00120F7F: ;
    PUSH32(esp, 0x00120F84u); RECOMP_ABI_CALL(0x0014A660u, sub_0014A660); /* call 0x0014A660 */

loc_00120F84: ;
    ecx = MEM32(0x502EE4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00120F93u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00120F93: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00120FA0
 * Original: 0x00120FA0 - 0x00120FC2 (34 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120FA0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00120FABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00120FAB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00120FBE; /* jne: not equal / not zero */

loc_00120FAF: ;
    PUSH32(esp, 0x00120FB4u); RECOMP_ABI_CALL(0x0014A660u, sub_0014A660); /* call 0x0014A660 */

loc_00120FB4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00120FBEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00120FBE: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00120FD0
 * Original: 0x00120FD0 - 0x00120FDC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120FD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120FD0: ;
    PUSH32(esp, 0x00120FD5u); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_00120FD5: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

}

/**
 * sub_00120FE0
 * Original: 0x00120FE0 - 0x00121035 (85 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120FE0(void)
{

loc_00120FE0: ;
    esp = esp - 0x84;
    eax = MEM32(0x47A050);
    MEM32(esp + 0x80) = eax;
    PUSH32(esp, esi);
    eax = esp + 4;
    PUSH32(esp, eax);
    esi = ecx;
    ecx = MEM32(esp + 0x90);
    PUSH32(esp, 0x3DAEB0);
    PUSH32(esp, ecx);
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x00121011u); RECOMP_ABI_CALL(0x00121040u, sub_00121040); /* call 0x00121040 */

loc_00121011: ;
    edx = MEM32(esi);
    esp = esp + 0xC;
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0012101Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012101F: ;
    ecx = MEM32(esp + 0x84);
    POP32(esp, esi);
    PUSH32(esp, 0x0012102Cu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0012102C: ;
    esp = esp + 0x84;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121040
 * Original: 0x00121040 - 0x001210D4 (148 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121040: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3519F8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00121069u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00121069: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x0012107Fu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0012107F: ;
    ecx = esp + 4;
    esi = eax;
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00121092u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00121092: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001210C2; /* je: equal / zero */

loc_00121096: ;
    ecx = esi;
    PUSH32(esp, 0x0012109Du); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0012109D: ;
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001210ADu); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_001210AD: ;
    esp = esp + 0xC;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_001210C2: ;
    ecx = MEM32(esp + 0x14);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_001210E0
 * Original: 0x001210E0 - 0x00121161 (129 bytes, 38 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001210E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001210E0: ;
    esp = esp - 0x84;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x8C);
    PUSH32(esp, 0x80);
    MEM32(esp + 0x88) = eax;
    eax = esp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012110Au); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_0012110A: ;
    PUSH32(esp, 0x3DAEBC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121115u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_00121115: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, esi);
    if (xml1_prefer_files_loose()) {
        /* Buffer ends immediately before the original stack cookie. */
        if (!xml1_motionpath_name((char *)((uintptr_t)g_xbox_mem_offset+esp),128)) {
            fprintf(stderr,"[MOTIONPATH ERROR] Invalid or oversized package name\n"); _exit(4);
        }
        goto loc_00121132;
    }
    if (TEST_NZ(_fa, _fb)) goto loc_00121132; /* jne: not equal / not zero */

loc_0012111D: ;
    ecx = esp;
    PUSH32(esp, 0x2F);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00121128u); RECOMP_ABI_CALL(0x00341D90u, sub_00341D90); /* call 0x00341D90 */

loc_00121128: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00121132; /* je: equal / zero */

loc_0012112F: ;
    MEM8(eax) = 0;

loc_00121132: ;
    PUSH32(esp, 0x00121137u); RECOMP_ABI_CALL(0x0013D320u, sub_0013D320); /* call 0x0013D320 */

loc_00121137: ;
    ecx = MEM32(0x502EE4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0012114Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012114C: ;
    ecx = MEM32(esp + 0x80);
    PUSH32(esp, 0x00121158u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00121158: ;
    esp = esp + 0x84;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121110
 * Original: 0x00121110 - 0x00121161 (81 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121110: ;
    PUSH32(esp, 0x00121115u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_00121115: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_00121132; /* jne: not equal / not zero */

loc_0012111D: ;
    ecx = esp;
    PUSH32(esp, 0x2F);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00121128u); RECOMP_ABI_CALL(0x00341D90u, sub_00341D90); /* call 0x00341D90 */

loc_00121128: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00121132; /* je: equal / zero */

loc_0012112F: ;
    MEM8(eax) = 0;

loc_00121132: ;
    PUSH32(esp, 0x00121137u); RECOMP_ABI_CALL(0x0013D320u, sub_0013D320); /* call 0x0013D320 */

loc_00121137: ;
    ecx = MEM32(0x502EE4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0012114Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012114C: ;
    ecx = MEM32(esp + 0x80);
    PUSH32(esp, 0x00121158u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00121158: ;
    esp = esp + 0x84;
    esp += 8; return; /* ret 4 */

}
