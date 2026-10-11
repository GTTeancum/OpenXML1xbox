#include "engine/actors/raven_leader_event_guest.h"
#include "engine/scripting/raven_script_extensions.h"
#include "engine/world/raven_campaign_state_guest.h"
#include "engine/world/raven_progress_guest.h"
/**
 * X-Men Legends - Recompiled code chunk 10
 * Functions: 250 (0x00082810 - 0x0008C270)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00082810
 * Original: 0x00082810 - 0x000829D7 (455 bytes, 134 insns)
 * Category: game_io
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082810(void)
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

loc_00082810: ;
    esp = esp - 0x94;
    eax = MEM32(0x47A050);
    MEM32(esp + 0x90) = eax;
    eax = MEM32(esp + 0x98);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(esp + 7) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000829BF; /* je: equal / zero */

loc_00082838: ;
    _fa = (uint32_t)(MEM32(esp + 0xA0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xA0), ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000829BF; /* jle: less or equal (signed <=) */

loc_00082845: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    PUSH32(esp, edi);
    MEM8(eax) = LO8(ebx);
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebp;

loc_00082854: ;
    PUSH32(esp, 0x00082859u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00082859: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xB8); PUSH32(esp, 0x00082864u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082864: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00082895; /* je: equal / zero */

loc_0008286A: ;
    ecx = esi;
    PUSH32(esp, 0x00082871u); RECOMP_ABI_CALL(0x00013DC0u, sub_00013DC0); /* call 0x00013DC0 */

loc_00082871: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00082895; /* je: equal / zero */

loc_00082875: ;
    PUSH32(esp, 0x0008287Au); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0008287A: ;
    edi = eax;
    eax = MEM32(edi);
    ecx = esi;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x00082889u); RECOMP_ABI_CALL(0x00013DC0u, sub_00013DC0); /* call 0x00013DC0 */

loc_00082889: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x00082893u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082893: ;
    goto loc_000828CB;

loc_00082895: ;
    PUSH32(esp, 0x0008289Au); RECOMP_ABI_CALL(0x000BF750u, sub_000BF750); /* call 0x000BF750 */

loc_0008289A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00082994; /* je: equal / zero */

loc_000828A2: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000828A8u); RECOMP_ABI_CALL(0x000C0DC0u, sub_000C0DC0); /* call 0x000C0DC0 */

loc_000828A8: ;
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00082994; /* je: equal / zero */

loc_000828B3: ;
    PUSH32(esp, 0x000828B8u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_000828B8: ;
    esi = eax;
    edi = MEM32(esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000828C2u); RECOMP_ABI_CALL(0x000C0DC0u, sub_000C0DC0); /* call 0x000C0DC0 */

loc_000828C2: ;
    esp = esp + 4;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x78); PUSH32(esp, 0x000828CBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000828CB: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00082994; /* je: equal / zero */

loc_000828D5: ;
    esi = 1;
    /* nop */

loc_000828E0: ;
    eax = ZX8(MEM8(edi + 0x370));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CEA6C);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    MEM8(esp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x000828FEu); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000828FE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00082904u); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_00082904: ;
    edx = MEM32(eax);
    esp = esp + 0x18;
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00082913u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082913: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00082986; /* je: equal / zero */

loc_00082917: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00082920u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_00082920: ;
    fp_top() = fp_top() * MEMF(0x3CEA68); /* fmul dword ptr [0x3cea68] */
    PUSH32(esp, 0x0008292Bu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0008292B: ;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    ebp = eax;
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_top() = fp_top() * MEMF(0x3CEA68); /* fmul dword ptr [0x3cea68] */
    PUSH32(esp, 0x00082942u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00082942: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00082986; /* jg: greater (signed >) */

loc_00082946: ;
    edx = ZX8(MEM8(edi + 0x370));
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3CEA48);
    eax = esp + 0x6C;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    MEM8(esp + 0x74) = LO8(ebx);
    PUSH32(esp, 0x00082964u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_00082964: ;
    ecx = MEM32(esp + 0xC0);
    eax = MEM32(esp + 0xBC);
    PUSH32(esp, ecx);
    edx = esp + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008297Eu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0008297E: ;
    esp = esp + 0x20;
    MEM8(esp + 0x13) = 1;

loc_00082986: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000828E0; /* jle: less or equal (signed <=) */

loc_00082990: ;
    ebp = MEM32(esp + 0x18);

loc_00082994: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    MEM32(esp + 0x18) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_00082854; /* jl: less (signed <) */

loc_000829A2: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x90);
    PUSH32(esp, 0x000829B6u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000829B6: ;
    esp = esp + 0x94;
    esp += 12; return; /* ret 8 */

loc_000829BF: ;
    ecx = MEM32(esp + 0x94);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    PUSH32(esp, 0x000829CEu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000829CE: ;
    esp = esp + 0x94;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000829E0
 * Original: 0x000829E0 - 0x00082E63 (1155 bytes, 376 insns)
 * Category: game_ui
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000829E0(void)
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

loc_000829E0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0x34F530);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x00082A03u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_00082A03: ;
    esi = eax;
    PUSH32(esp, 0x00082A0Au); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_00082A0A: ;
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00082A15u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082A15: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x2C); PUSH32(esp, 0x00082A1Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082A1B: ;
    PUSH32(esp, 0x00082A20u); RECOMP_ABI_CALL(0x00152650u, sub_00152650); /* call 0x00152650 */

loc_00082A20: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00082A29u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082A29: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CEBA0);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00082A3Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082A3D: ;
    PUSH32(esp, 0x00082A42u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00082A42: ;
    edx = MEM32(eax);
    ecx = ebp + 0xA0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp + 0x60;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x130); PUSH32(esp, 0x00082A57u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082A57: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CEB78);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00082A6Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082A6B: ;
    eax = MEM32(esp + 0x50);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00082A77u); RECOMP_ABI_CALL(0x00033270u, sub_00033270); /* call 0x00033270 */

loc_00082A77: ;
    xml1_recall_arrive(ebp);
    edx = MEM32(ebp);
    esp = esp + 8;
    esi = ebp + 0x1E0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00082A89u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082A89: ;
    edi = ebp + 0x20;
    ecx = 0x10;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    PUSH32(esp, 0x00082A98u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_00082A98: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00082A9Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082A9F: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CEB60);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00082AB3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082AB3: ;
    edi = 0x48585C;
    esi = 0; /* xor self */
    /* nop */

loc_00082AC0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFCu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00082ACC; /* jle: less or equal (signed <=) */

loc_00082AC5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    eax = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00082AD1; /* jl: less (signed <) */

loc_00082ACC: ;
    eax = 0x498D90;

loc_00082AD1: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x14) = ecx;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00082AE0u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_00082AE0: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00082B2F; /* jne: not equal / not zero */

loc_00082AE6: ;
    esi = esi + 4;
    edi = edi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00082AC0; /* jl: less (signed <) */

loc_00082AF1: ;
    PUSH32(esp, 0x00082AF6u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_00082AF6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00082AFDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082AFD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00082B3E; /* je: equal / zero */

loc_00082B01: ;
    PUSH32(esp, 0x00082B06u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_00082B06: ;
    ecx = MEM32(esp + 0x54);
    esi = MEM32(ecx);
    esp = esp - 0xC;
    edx = esp;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    edx = MEM32(eax);
    ecx = eax;
    MEM32(esp + 0x24) = esp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x148); PUSH32(esp, 0x00082B2Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082B2D: ;
    goto loc_00082B74;

loc_00082B2F: ;
    PUSH32(esp, 0x00082B34u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_00082B34: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x00082B3Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082B3C: ;
    goto loc_00082B74;

loc_00082B3E: ;
    PUSH32(esp, 0x00082B43u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_00082B43: ;
    edx = MEM32(esp + 0x54);
    fp_push(MEMF(edx + 8)); /* fld float */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    ecx = esp + 0x24;
    fp_push(MEMF(edx + 4)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(MEMF(edx)); /* fld float */
    ecx = eax;
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(eax);
    { uint32_t _icall_target = MEM32(esi + 0x64); PUSH32(esp, 0x00082B74u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082B74: ;
    edx = MEM32(ebp);
    ebx = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3CEB4C);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00082B88u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082B88: ;
    PUSH32(esp, 0x00082B8Du); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_00082B8D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xD4); PUSH32(esp, 0x00082B97u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082B97: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3CEB28);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00082BA9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082BA9: ;
    edi = 0; /* xor self */
    MEM32(esp + 0x54) = edi;
    goto loc_00082BB3;

loc_00082BB1: ;
    ebx = 0; /* xor self */

loc_00082BB3: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x48D8F8);
    ecx = esp + 0x18;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x00082BCAu); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_00082BCA: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x5BC9D0);
    ecx = esp + 0x34;
    MEM32(esp + 0x50) = ebx;
    PUSH32(esp, 0x00082BDEu); RECOMP_ABI_CALL(0x000386B0u, sub_000386B0); /* call 0x000386B0 */

loc_00082BDE: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00082BE9u); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_00082BE9: ;
    esi = eax;
    esp = esp + 8;
    MEM32(esp + 0x1C) = esi;
    eax = MEM32(esi);
    ecx = esi;
    MEM8(esp + 0x48) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00082BFDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082BFD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00082C6B; /* jle: less or equal (signed <=) */

loc_00082C01: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00082C4D; /* jne: not equal / not zero */

loc_00082C05: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00082C0Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082C0D: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00082C49; /* je: equal / zero */

loc_00082C13: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00082C19u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082C19: ;
    edx = MEM32(0x48338C);
    edx = edx + 0x21;
    MEM32(esp + 0x18) = eax;
    ecx = edx;
    ecx = ecx & 0x1F;
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = MEM32(esp + 0x18);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(ecx + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + edx * 4 + 0x14), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00082C49; /* je: equal / zero */

loc_00082C3F: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x00082C49u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082C49: ;
    edi = MEM32(esp + 0x54);

loc_00082C4D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00082C55u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082C55: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00082C60u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082C60: ;
    eax = MEM32(esi);
    ecx = esi;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00082C67u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082C67: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00082C01; /* jl: less (signed <) */

loc_00082C6B: ;
    PUSH32(esp, esi);
    MEM8(esp + 0x4C) = 0;
    PUSH32(esp, 0x00082C76u); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_00082C76: ;
    esp = esp + 4;
    ecx = esp + 0x10;
    MEM32(esp + 0x48) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00082C8Au); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_00082C8A: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    MEM32(esp + 0x54) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00082BB1; /* jl: less (signed <) */

loc_00082C98: ;
    esi = MEM32(esp + 0x58);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00082CA5; /* je: equal / zero */

loc_00082CA0: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00082CAB; /* jne: not equal / not zero */

loc_00082CA5: ;
    esi = ebp + 0x1E0;

loc_00082CAB: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CEB08);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00082CBFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082CBF: ;
    PUSH32(esp, 0x00082CC4u); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_00082CC4: ;
    ecx = MEM32(esp + 0x50);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00082CD1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082CD1: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CEAF4);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00082CE5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082CE5: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x00082CF0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082CF0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00082D00; /* jne: not equal / not zero */

loc_00082CF4: ;
    PUSH32(esp, 0x00082CF9u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00082CF9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00082D00u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082D00: ;
    PUSH32(esp, 0x00082D05u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00082D05: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00082D0Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082D0C: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CEADC);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00082D20u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082D20: ;
    PUSH32(esp, 0x00082D25u); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_00082D25: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00082D2Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082D2C: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CEAC8);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00082D40u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082D40: ;
    PUSH32(esp, 0x00082D45u); RECOMP_ABI_CALL(0x0007AB20u, sub_0007AB20); /* call 0x0007AB20 */

loc_00082D45: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00082D4Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082D4E: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CEAB0);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00082D62u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082D62: ;
    PUSH32(esp, 0x00082D67u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_00082D67: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00082D6Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082D6F: ;
    _fa = (uint32_t)(MEM8(ebp + 0x221)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x221), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00082D8F; /* je: equal / zero */

loc_00082D78: ;
    _fa = (uint32_t)(MEM8(ebp + 0x220)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x220), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00082D8F; /* jne: not equal / not zero */

loc_00082D81: ;
    PUSH32(esp, 0x00082D86u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_00082D86: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    goto loc_00082D98;

loc_00082D8F: ;
    PUSH32(esp, 0x00082D94u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_00082D94: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);

loc_00082D98: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00082DA2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082DA2: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CEA8C);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00082DB6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082DB6: ;
    PUSH32(esp, 0x00082DBBu); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_00082DBB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x00082DC2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082DC2: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C806C);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00082DD6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082DD6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00082DDDu); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_00082DDD: ;
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00082DEBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082DEB: ;
    PUSH32(esp, 0x00082DF0u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_00082DF0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00082DFCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082DFC: ;
    PUSH32(esp, 0x00082E01u); RECOMP_ABI_CALL(0x00059CE0u, sub_00059CE0); /* call 0x00059CE0 */

loc_00082E01: ;
    PUSH32(esp, 0x00082E06u); RECOMP_ABI_CALL(0x0005BF20u, sub_0005BF20); /* call 0x0005BF20 */

loc_00082E06: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x00082E11u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082E11: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00082E21; /* jne: not equal / not zero */

loc_00082E15: ;
    PUSH32(esp, 0x00082E1Au); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_00082E1A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00082E21u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082E21: ;
    PUSH32(esp, 0x00082E26u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00082E26: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00082E2Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082E2D: ;
    PUSH32(esp, 0x00082E32u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00082E32: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00082E39u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082E39: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00082E40u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082E40: ;
    SET_LO8(eax, MEM8(ebp + 0x220));
    ecx = MEM32(esp + 0x40);
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) & 0xFB);
    POP32(esp, esi);
    MEM8(ebp + 0x220) = LO8(eax);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x3C;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00082E70
 * Original: 0x00082E70 - 0x00082F33 (195 bytes, 68 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082E70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00082E70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CEC20);
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00082E87u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082E87: ;
    PUSH32(esp, 0x00082E8Cu); RECOMP_ABI_CALL(0x00083C80u, sub_00083C80); /* call 0x00083C80 */

loc_00082E8C: ;
    PUSH32(esp, 0x00082E91u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_00082E91: ;
    edi = eax;
    PUSH32(esp, 0x00082E98u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00082E98: ;
    edx = MEM32(edi);
    ebx = eax;
    ebp = MEM32(ebx);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00082EA3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082EA3: ;
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + 0x128); PUSH32(esp, 0x00082EB1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082EB1: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00082EBDu); RECOMP_ABI_CALL(0x00082F40u, sub_00082F40); /* call 0x00082F40 */

loc_00082EBD: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CEC00);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00082ED0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082ED0: ;
    PUSH32(esp, 0x00082ED5u); RECOMP_ABI_CALL(0x00059CE0u, sub_00059CE0); /* call 0x00059CE0 */

loc_00082ED5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00082EDDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082EDD: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CEBE0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00082EF0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082EF0: ;
    PUSH32(esp, 0x00082EF5u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_00082EF5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x00082EFFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082EFF: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CEBC4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00082F12u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082F12: ;
    PUSH32(esp, 0x00082F17u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00082F17: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x100); PUSH32(esp, 0x00082F21u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082F21: ;
    PUSH32(esp, 0x00082F26u); RECOMP_ABI_CALL(0x0007AB20u, sub_0007AB20); /* call 0x0007AB20 */

loc_00082F26: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00082F2Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082F2C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00082F40
 * Original: 0x00082F40 - 0x00082FCD (141 bytes, 48 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082F40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00082F40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x485ACC) = ebx;
    MEM32(0x485A04) = ebx;

loc_00082F52: ;
    PUSH32(esp, 0x00082F57u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00082F57: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xB8); PUSH32(esp, 0x00082F62u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082F62: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00082FC0; /* je: equal / zero */

loc_00082F68: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00082FC0; /* je: equal / zero */

loc_00082F6E: ;
    PUSH32(esp, 0x00082F73u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00082F73: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x8008;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00082FC0; /* je: equal / zero */

loc_00082F89: ;
    PUSH32(esp, 0x00082F8Eu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00082F8E: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebp = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00082F9D; /* jne: not equal / not zero */

loc_00082F96: ;
    eax = 0x3C806C;
    goto loc_00082FB3;

loc_00082F9D: ;
    PUSH32(esp, 0x00082FA2u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00082FA2: ;
    esi = esi & 0xFFFFFF;
    edx = MEM32(eax + esi * 4 + 4);
    eax = edx + eax + 0x8008;

loc_00082FB3: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x12C); PUSH32(esp, 0x00082FC0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082FC0: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00082F52; /* jl: less (signed <) */

loc_00082FC6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00082FD0
 * Original: 0x00082FD0 - 0x00083028 (88 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00082FD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */

loc_00082FD5: ;
    PUSH32(esp, 0x00082FDAu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00082FDA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xD0); PUSH32(esp, 0x00082FE5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082FE5: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00083001; /* je: equal / zero */

loc_00082FEB: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008301E; /* je: equal / zero */

loc_00082FF0: ;
    PUSH32(esp, 0x00082FF5u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00082FF5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x00083001u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00083001: ;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0008300Eu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0008300E: ;
    edx = MEM32(eax);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xD4); PUSH32(esp, 0x0008301Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008301E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00082FD5; /* jl: less (signed <) */

loc_00083024: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00083030
 * Original: 0x00083030 - 0x00083084 (84 bytes, 31 insns)
 * CC: cdecl, 16 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083030: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    edi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00083043u); RECOMP_ABI_CALL(0x00066FA0u, sub_00066FA0); /* call 0x00066FA0 */

loc_00083043: ;
    ecx = MEM32(edi + 0x19430);
    esi = edi + 0x1942C;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0008305Cu); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_0008305C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00083067; /* jne: not equal / not zero */

loc_00083063: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008307C; /* je: equal / zero */

loc_00083067: ;
    eax = MEM32(esi + eax * 4 + 0xB4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x39BC);
    eax = eax + edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 68; return; /* ret 64 */

loc_0008307C: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 68; return; /* ret 64 */

}

/**
 * sub_00083090
 * Original: 0x00083090 - 0x0008328B (507 bytes, 141 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083090(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00083090: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x0008309Eu); RECOMP_ABI_CALL(0x00199C70u, sub_00199C70); /* call 0x00199C70 */

loc_0008309E: ;
    ebx = eax;
    ecx = ebx;
    PUSH32(esp, 0x000830A7u); RECOMP_ABI_CALL(0x0006C0C0u, sub_0006C0C0); /* call 0x0006C0C0 */

loc_000830A7: ;
    esi = MEM32(edi + 0x4AC);
    esi = esi + 0x1942C;
    ecx = esi + 0xC;
    MEM32(esi + 4) = 0x3FFFFFFF;
    PUSH32(esp, 0x000830C2u); RECOMP_ABI_CALL(0x0006CBF0u, sub_0006CBF0); /* call 0x0006CBF0 */

loc_000830C2: ;
    ecx = esi + 0xB4;
    PUSH32(esp, 0x000830CDu); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_000830CD: ;
    esi = MEM32(edi + 0x4AC);
    ecx = esi;
    PUSH32(esp, 0x000830DAu); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_000830DA: ;
    xml1_leader_zone_bind(esi);
    ebp = MEM32(esp + 0x1C);
    ecx = ebp;
    MEM32(esi + 0x19428) = 0;
    PUSH32(esp, 0x000830EFu); RECOMP_ABI_CALL(0x0006E920u, sub_0006E920); /* call 0x0006E920 */

loc_000830EF: ;
    PUSH32(esp, 0x5808);
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x000830FCu); RECOMP_ABI_CALL(0x0006E830u, sub_0006E830); /* call 0x0006E830 */

loc_000830FC: ;
    ecx = ebp;
    PUSH32(esp, 0x00083103u); RECOMP_ABI_CALL(0x0006E920u, sub_0006E920); /* call 0x0006E920 */

loc_00083103: ;
    PUSH32(esp, 4);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00083111u); RECOMP_ABI_CALL(0x0006E830u, sub_0006E830); /* call 0x0006E830 */

loc_00083111: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x1C) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000831B6; /* jle: less or equal (signed <=) */

loc_00083125: ;
    goto loc_00083130;

    /* nop */
    edi = edi;

loc_00083130: ;
    eax = MEM32(edi + 0x4AC);
    ecx = MEM32(eax + 0x19428);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x19428) = ecx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x39BC);
    esi = ecx + eax + -14780;
    PUSH32(esp, 0x39BC);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x0008315Du); RECOMP_ABI_CALL(0x0006E830u, sub_0006E830); /* call 0x0006E830 */

loc_0008315D: ;
    ecx = esi;
    PUSH32(esp, 0x00083164u); RECOMP_ABI_CALL(0x0006C4C0u, sub_0006C4C0); /* call 0x0006C4C0 */

loc_00083164: ;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0008316Eu); RECOMP_ABI_CALL(0x00066FA0u, sub_00066FA0); /* call 0x00066FA0 */

loc_0008316E: ;
    esi = MEM32(edi + 0x4AC);
    ecx = esp + 0x14;
    esi = esi + 0x1942C;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00083186u); RECOMP_ABI_CALL(0x0006CC40u, sub_0006CC40); /* call 0x0006CC40 */

loc_00083186: ;
    ecx = esi;
    PUSH32(esp, 0x0008318Du); RECOMP_ABI_CALL(0x000B8440u, sub_000B8440); /* call 0x000B8440 */

loc_0008318D: ;
    eax = MEM32(esi + 8);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi + 0xB4;
    PUSH32(esp, 0x000831A1u); RECOMP_ABI_CALL(0x0006C700u, sub_0006C700); /* call 0x0006C700 */

loc_000831A1: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00083130; /* jl: less (signed <) */

loc_000831B6: ;
    ecx = ebp;
    PUSH32(esp, 0x000831BDu); RECOMP_ABI_CALL(0x0006E920u, sub_0006E920); /* call 0x0006E920 */

loc_000831BD: ;
    ecx = MEM32(edi + 0x4AC);
    ecx = ecx + 0x19500;
    PUSH32(esp, 0x184);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x000831D6u); RECOMP_ABI_CALL(0x0006E830u, sub_0006E830); /* call 0x0006E830 */

loc_000831D6: ;
    xml1_leader_zone_load(ebp, MEM32(edi + 0x4AC));
    edx = MEM32(edi + 0x4AC);
    PUSH32(esp, 0x40);
    eax = edi + 0x60;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, eax);
    MEM8(edx + 0x19684) = 1;
    PUSH32(esp, 0x000831F3u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_000831F3: ;
    SET_LO8(eax, MEM8(edi + 0x220));
    SET_LO8(eax, LO8(eax) | 4);
    esp = esp + 0xC;
    ebx = 0; /* xor self */
    MEM8(edi + 0x220) = LO8(eax);
    esi = 0; /* xor self */
    goto loc_00083210;

    /* nop */

loc_00083210: ;
    ecx = MEM32(edi + 0x4AC);
    ebp = esi + ecx + 0x195A4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00083245; /* je: equal / zero */

loc_00083221: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00083245; /* je: equal / zero */

loc_00083227: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0008322Du); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0008322D: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00083238u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00083238: ;
    ecx = eax;
    PUSH32(esp, 0x0008323Fu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0008323F: ;
    MEM32(esp + 0x14) = eax;
    goto loc_0008324D;

loc_00083245: ;
    MEM32(esp + 0x14) = 0;

loc_0008324D: ;
    PUSH32(esp, 0x00083252u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00083252: ;
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x00083262u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00083262: ;
    esi = esi + 0x20;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00083210; /* jl: less (signed <) */

loc_0008326E: ;
    eax = MEM32(edi + 0x4AC);
    edx = MEM32(edi);
    eax = eax + 0x19500;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00083281u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00083281: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00083290
 * Original: 0x00083290 - 0x0008336A (218 bytes, 60 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083290: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F551);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x19688);
    esi = ecx;
    PUSH32(esp, 0x000832B9u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_000832B9: ;
    esp = esp + 0xC;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_000832D9; /* je: equal / zero */

loc_000832D0: ;
    ecx = eax;
    PUSH32(esp, 0x000832D7u); RECOMP_ABI_CALL(0x00083370u, sub_00083370); /* call 0x00083370 */

loc_000832D7: ;
    goto loc_000832DB;

loc_000832D9: ;
    eax = 0; /* xor self */

loc_000832DB: ;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    MEM32(esi + 0x4AC) = eax;
    PUSH32(esp, 0x000832EEu); RECOMP_ABI_CALL(0x0011CDD0u, sub_0011CDD0); /* call 0x0011CDD0 */

loc_000832EE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80CC0);
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 0x3CEC78);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00083303u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00083303: ;
    PUSH32(esp, 0x00083308u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00083308: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x49B2CC);
    PUSH32(esp, 0x3CEC68);
    PUSH32(esp, 0x3C6E5C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00083320u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00083320: ;
    PUSH32(esp, 0x00083325u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00083325: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x49B2CE);
    PUSH32(esp, 0x3CEC4C);
    PUSH32(esp, 0x3C6E5C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0008333Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008333D: ;
    PUSH32(esp, 0x00083342u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00083342: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x49B2CD);
    PUSH32(esp, 0x3CEC3C);
    PUSH32(esp, 0x3C6E5C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0008335Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008335A: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00083370
 * Original: 0x00083370 - 0x000833F3 (131 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083370(void)
{

loc_00083370: ;
    xml1_leader_zone_bind(ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F584);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x836F0);
    PUSH32(esp, 0x83600);
    PUSH32(esp, 7);
    esi = ecx;
    PUSH32(esp, 0x39BC);
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0x000833A5u); RECOMP_ABI_CALL(0x003418A8u, sub_003418A8); /* call 0x003418A8 */

loc_000833A5: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x19428) = eax;
    edi = esi + 0x1942C;
    ecx = edi;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x000833BEu); RECOMP_ABI_CALL(0x00083560u, sub_00083560); /* call 0x00083560 */

loc_000833BE: ;
    MEM32(edi) = 0x3CEC88;
    ecx = esi + 0x19500;
    MEM8(esp + 0x14) = 1;
    PUSH32(esp, 0x000833D4u); RECOMP_ABI_CALL(0x00083400u, sub_00083400); /* call 0x00083400 */

loc_000833D4: ;
    ecx = esi;
    MEM8(esp + 0x14) = 2;
    PUSH32(esp, 0x000833E0u); RECOMP_ABI_CALL(0x0006CD10u, sub_0006CD10); /* call 0x0006CD10 */

loc_000833E0: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00083400
 * Original: 0x00083400 - 0x000834C8 (200 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083400(void)
{

loc_00083400: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F5A9);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x2E6B0);
    esi = ecx;
    PUSH32(esp, 4);
    eax = esi + 0x40;
    PUSH32(esp, 0x18);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = esi;
    MEM8(esi) = 0;
    PUSH32(esp, 0x00083432u); RECOMP_ABI_CALL(0x00011100u, sub_00011100); /* call 0x00011100 */

loc_00083432: ;
    PUSH32(esp, 0x2F530);
    PUSH32(esp, 4);
    eax = esi + 0xA4;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x0008344Fu); RECOMP_ABI_CALL(0x00011100u, sub_00011100); /* call 0x00011100 */

loc_0008344F: ;
    PUSH32(esp, 0x834D0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 4);
    eax = esi + 0x126;
    PUSH32(esp, eax);
    MEM8(esp + 0x20) = 1;
    PUSH32(esp, 0x00083469u); RECOMP_ABI_CALL(0x00011100u, sub_00011100); /* call 0x00011100 */

loc_00083469: ;
    MEM8(esi + 0x180) = 0xFF;
    ecx = MEM32(0x5BC9D0);
    MEM32(esi + 0x168) = ecx;
    edx = MEM32(0x5BC9D4);
    MEM32(esi + 0x16C) = edx;
    eax = MEM32(0x5BC9D8);
    MEM32(esi + 0x170) = eax;
    ecx = MEM32(0x5BC9D0);
    MEM32(esi + 0x174) = ecx;
    edx = MEM32(0x5BC9D4);
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x178) = edx;
    eax = MEM32(0x5BC9D8);
    MEM32(esi + 0x17C) = eax;
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000834D0
 * Original: 0x000834D0 - 0x000834DC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000834D0(void)
{

loc_000834D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000834D8u); RECOMP_ABI_CALL(0x000834E0u, sub_000834E0); /* call 0x000834E0 */

loc_000834D8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000834E0
 * Original: 0x000834E0 - 0x000834EE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000834E0(void)
{

loc_000834E0: ;
    SET_LO8(eax, MEM8(ecx + 2));
    MEM16(ecx) = MEM16(ecx) & 0xF000;
    SET_LO8(eax, LO8(eax) & 0xF0);
    MEM8(ecx + 2) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_000834F0
 * Original: 0x000834F0 - 0x000834F8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000834F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000834F0: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_00083500(); return; /* tail jmp 0x00083500 */

}

/**
 * sub_00083500
 * Original: 0x00083500 - 0x00083554 (84 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083500(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083500: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = ecx;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    PUSH32(esp, edi);
    edi = MEM32(esi + eax * 4 + 0xA0);
    eax = esi + eax * 4 + 0xA0;
    edx = ~edx;
    edi = edi & edx;
    MEM32(eax) = edi;
    eax = esp + 0xC;
    edi = esi + 0x74;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0008353Au); RECOMP_ABI_CALL(0x0006C1B0u, sub_0006C1B0); /* call 0x0006C1B0 */

loc_0008353A: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00083542u); RECOMP_ABI_CALL(0x0006C700u, sub_0006C700); /* call 0x0006C700 */

loc_00083542: ;
    eax = MEM32(esi + 0xA4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0xA4) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00083560
 * Original: 0x00083560 - 0x00083589 (41 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083560(void)
{

loc_00083560: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi + 4) = 0x3FFFFFFF;
    MEM32(esi + 8) = 0xFFFFFFFFu;
    MEM32(esi) = 0x3CECB8;
    PUSH32(esp, 0x0008357Fu); RECOMP_ABI_CALL(0x00083590u, sub_00083590); /* call 0x00083590 */

loc_0008357F: ;
    MEM32(esi) = 0x3CECA0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00083590
 * Original: 0x00083590 - 0x000835FE (110 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083590(void)
{

loc_00083590: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F5D3);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0xF7410);
    PUSH32(esp, 7);
    esi = ecx;
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0x000835BCu); RECOMP_ABI_CALL(0x00011100u, sub_00011100); /* call 0x00011100 */

loc_000835BC: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x10) = eax;
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 0x98) = eax;
    MEM32(esi + 0x9C) = eax;
    MEM32(esi + 0xA0) = eax;
    ecx = esi;
    MEM8(esp + 0x10) = 1;
    MEM32(esi + 0xA4) = eax;
    PUSH32(esp, 0x000835ECu); RECOMP_ABI_CALL(0x0006C770u, sub_0006C770); /* call 0x0006C770 */

loc_000835EC: ;
    ecx = MEM32(esp + 8);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00083600
 * Original: 0x00083600 - 0x00083693 (147 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083600(void)
{

loc_00083600: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F615);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x6CC10);
    PUSH32(esp, 0x836A0);
    esi = ecx;
    PUSH32(esp, 0x258);
    PUSH32(esp, 0x14);
    edi = esi + 4;
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = esi;
    MEM32(esi) = ebx;
    PUSH32(esp, 0x0008363Du); RECOMP_ABI_CALL(0x003418A8u, sub_003418A8); /* call 0x003418A8 */

loc_0008363D: ;
    MEM32(edi + 0x2EE4) = ebx;
    MEM32(esp + 0x18) = ebx;
    MEM32(esi + 0x354C) = ebx;
    MEM32(esi + 0x37AC) = ebx;
    eax = 0; /* xor self */
    ecx = 0x80;
    edi = esi + 0x37B0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi + 0x39B0;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    ecx = esi;
    MEM8(esp + 0x18) = 3;
    MEM8(esi + 0x39B8) = LO8(ebx);
    PUSH32(esp, 0x0008367Fu); RECOMP_ABI_CALL(0x0006C7D0u, sub_0006C7D0); /* call 0x0006C7D0 */

loc_0008367F: ;
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
 * sub_000836A0
 * Original: 0x000836A0 - 0x000836CA (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000836A0(void)
{

loc_000836A0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM8(eax + 0xD) = LO8(ecx);
    MEM16(eax + 0xE) = LO16(ecx);
    MEM16(eax + 0x10) = LO16(ecx);
    MEM16(eax + 0x12) = LO16(ecx);
    PUSH32(esp, esi);
    ecx = eax + 8;
    edx = 0; /* xor self */
    esi = ecx;
    MEM32(esi) = edx;
    MEM8(esi + 4) = LO8(edx);
    MEM8(ecx) = 0xFF;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000836D0
 * Original: 0x000836D0 - 0x000836E3 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000836D0(void)
{

loc_000836D0: ;
    PUSH32(esp, 0x6CC10);
    PUSH32(esp, 0x258);
    PUSH32(esp, 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000836E2u); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_000836E2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000836F0
 * Original: 0x000836F0 - 0x00083706 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000836F0(void)
{

loc_000836F0: ;
    PUSH32(esp, 0x6CC10);
    PUSH32(esp, 0x258);
    PUSH32(esp, 0x14);
    ecx = ecx + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00083705u); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_00083705: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00083710
 * Original: 0x00083710 - 0x00083723 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083710(void)
{

loc_00083710: ;
    PUSH32(esp, 0x836F0);
    PUSH32(esp, 7);
    PUSH32(esp, 0x39BC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00083722u); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_00083722: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00083730
 * Original: 0x00083730 - 0x00083739 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083730(void)
{

loc_00083730: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00083740
 * Original: 0x00083740 - 0x0008374B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083740(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00083740: ;
    eax = ZX8(MEM8(ecx));
    fp_push(MEMF(eax * 4 + 0x44E058)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00083750
 * Original: 0x00083750 - 0x0008375B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083750(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00083750: ;
    eax = ZX8(MEM8(ecx));
    fp_push(MEMF(eax * 4 + 0x44E0A0)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00083760
 * Original: 0x00083760 - 0x0008376A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083760(void)
{

loc_00083760: ;
    eax = ecx;
    MEM32(eax + 0x4C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00083770
 * Original: 0x00083770 - 0x0008377D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083770(void)
{

loc_00083770: ;
    eax = ecx;
    MEM32(eax + 0x3F4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00083780
 * Original: 0x00083780 - 0x0008378E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083780(void)
{

loc_00083780: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00083790
 * Original: 0x00083790 - 0x000837B8 (40 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083790: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_000837B0; /* jl: less (signed <) */

loc_00083798: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000837B0; /* jge: greater or equal (signed >=) */

loc_0008379D: ;
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x12 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000837B0; /* jae: above or equal (unsigned >=) */

loc_000837A3: ;
    eax = ZX8(LO8(eax));
    eax = MEM32(eax * 4 + 0x49B900);
    esp += 8; return; /* ret 4 */

loc_000837B0: ;
    eax = MEM32(0x3DD050);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000837C0
 * Original: 0x000837C0 - 0x000837E5 (37 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000837C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000837C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_000837E0; /* jl: less (signed <) */

loc_000837C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000837E0; /* jge: greater or equal (signed >=) */

loc_000837CD: ;
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x12 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000837E0; /* jae: above or equal (unsigned >=) */

loc_000837D3: ;
    eax = ZX8(LO8(eax));
    eax = MEM32(eax * 4 + 0x49C108);
    esp += 8; return; /* ret 4 */

loc_000837E0: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000837F0
 * Original: 0x000837F0 - 0x000837FC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000837F0(void)
{

loc_000837F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000837F8u); RECOMP_ABI_CALL(0x00083760u, sub_00083760); /* call 0x00083760 */

loc_000837F8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00083800
 * Original: 0x00083800 - 0x0008380C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083800(void)
{

loc_00083800: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00083808u); RECOMP_ABI_CALL(0x00083770u, sub_00083770); /* call 0x00083770 */

loc_00083808: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00083810
 * Original: 0x00083810 - 0x0008386F (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083810: ;
    edx = ecx;
    eax = MEM32(edx + 0x174);
    eax = MEM32(edx + eax * 4 + 0x124);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x17C;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x174);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x12 (32-bit) */
    MEM32(edx + 0x174) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00083859; /* jl: less (signed <) */

loc_0008384F: ;
    MEM32(edx + 0x174) = 0;

loc_00083859: ;
    MEM32(edx + 0x178) = MEM32(edx + 0x178) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x178)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x180);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x180) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00083870
 * Original: 0x00083870 - 0x0008387C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083870(void)
{

loc_00083870: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00083878u); RECOMP_ABI_CALL(0x00083780u, sub_00083780); /* call 0x00083780 */

loc_00083878: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00083880
 * Original: 0x00083880 - 0x000838BE (62 bytes, 22 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083880: ;
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x12 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000838BB; /* jae: above or equal (unsigned >=) */

loc_00083886: ;
    eax = ZX8(LO8(eax));
    PUSH32(esp, esi);
    esi = MEM32(eax * 4 + 0x49BCF8);
    _fa = (uint32_t)(MEM32(0x3DD050)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3DD050), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000838BA; /* je: equal / zero */

loc_00083899: ;
    PUSH32(esp, 0x0008389Eu); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0008389E: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x43160000);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x000838BAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000838BA: ;
    POP32(esp, esi);

loc_000838BB: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000838C0
 * Original: 0x000838C0 - 0x0008390B (75 bytes, 27 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000838C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000838C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00083908; /* jl: less (signed <) */

loc_000838C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00083908; /* jge: greater or equal (signed >=) */

loc_000838CD: ;
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x12 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00083908; /* jae: above or equal (unsigned >=) */

loc_000838D3: ;
    eax = ZX8(LO8(eax));
    PUSH32(esp, esi);
    esi = MEM32(eax * 4 + 0x49B900);
    _fa = (uint32_t)(MEM32(0x3DD050)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3DD050), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00083907; /* je: equal / zero */

loc_000838E6: ;
    PUSH32(esp, 0x000838EBu); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_000838EB: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x43160000);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00083907u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00083907: ;
    POP32(esp, esi);

loc_00083908: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00083910
 * Original: 0x00083910 - 0x0008396D (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083910: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x170) = esi;
    MEM32(ecx + 0x174) = esi;
    MEM32(ecx + 0x178) = esi;
    edx = 0; /* xor self */
    goto loc_00083930;

    /* nop */

loc_00083930: ;
    eax = MEM32(ecx + 0x170);
    edi = MEM32(ecx + 0x178);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    MEM32(ecx + 0x170) = eax;
    MEM32(ecx + 0x178) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0008395C; /* jl: less (signed <) */

loc_0008394F: ;
    MEM32(ecx + 0x170) = esi;
    eax = 0x11;
    goto loc_0008395D;

loc_0008395C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0008395D: ;
    MEM32(ecx + eax * 4 + 0x124) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00083930; /* jl: less (signed <) */

loc_0008396A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00083970
 * Original: 0x00083970 - 0x000839B6 (70 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083970: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0xC;
    ecx = 0x12;
    goto loc_00083980;

    /* nop */

loc_00083980: ;
    MEM32(eax) = 0;
    eax = eax + 0x10;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00083980; /* jne: not equal / not zero */

loc_0008398C: ;
    ecx = esi + 0x124;
    PUSH32(esp, 0x00083997u); RECOMP_ABI_CALL(0x00083870u, sub_00083870); /* call 0x00083870 */

loc_00083997: ;
    MEM32(esi + 0x17C) = 0;
    ecx = esi;
    MEM32(esi + 0x180) = 0;
    PUSH32(esp, 0x000839B2u); RECOMP_ABI_CALL(0x00083910u, sub_00083910); /* call 0x00083910 */

loc_000839B2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000839C0
 * Original: 0x000839C0 - 0x00083A06 (70 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000839C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000839C0: ;
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x12 (8-bit) */
    PUSH32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_00083A02; /* jae: above or equal (unsigned >=) */

loc_000839C7: ;
    eax = ZX8(LO8(eax));
    esi = MEM32(eax * 4 + 0x49B8B0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00083A02; /* je: equal / zero */

loc_000839D5: ;
    PUSH32(esp, 0x000839DAu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000839DA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000839E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000839E1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    MEM32(ecx) = 0;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00083A02u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00083A02: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00083A10
 * Original: 0x00083A10 - 0x00083A63 (83 bytes, 33 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083A10: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    if (TEST_S(_fas, _fbs)) goto loc_00083A5F; /* jl: less (signed <) */

loc_00083A19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00083A5F; /* jge: greater or equal (signed >=) */

loc_00083A1E: ;
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x12 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00083A5F; /* jae: above or equal (unsigned >=) */

loc_00083A24: ;
    eax = ZX8(LO8(eax));
    esi = MEM32(eax * 4 + 0x49C108);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00083A5F; /* je: equal / zero */

loc_00083A32: ;
    PUSH32(esp, 0x00083A37u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00083A37: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00083A3Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00083A3E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    MEM32(ecx) = 0;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00083A5Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00083A5F: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00083A70
 * Original: 0x00083A70 - 0x00083A7C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083A70(void)
{

loc_00083A70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00083A78u); RECOMP_ABI_CALL(0x00083970u, sub_00083970); /* call 0x00083970 */

loc_00083A78: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00083A80
 * Original: 0x00083A80 - 0x00083B01 (129 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00083A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083A80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00083AAC; /* je: equal / zero */

loc_00083A89: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00083AAC; /* je: equal / zero */

loc_00083A8E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00083A94u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00083A94: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00083A9Fu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00083A9F: ;
    ecx = eax;
    PUSH32(esp, 0x00083AA6u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00083AA6: ;
    MEM32(esp + 8) = eax;
    goto loc_00083AB4;

loc_00083AAC: ;
    MEM32(esp + 8) = 0;

loc_00083AB4: ;
    eax = MEM32(0x49BF2C);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = 0x49BF28;
    PUSH32(esp, 0x00083AC9u); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_00083AC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00083AD9; /* je: equal / zero */

loc_00083AD1: ;
    eax = MEM32(eax * 4 + 0x49C0B8);
    esp += 4; return; /* ret */

loc_00083AD9: ;
    edx = MEM32(0x49BD4C);
    PUSH32(esp, edx);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = 0x49BD48;
    PUSH32(esp, 0x00083AEFu); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_00083AEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00083AFE; /* je: equal / zero */

loc_00083AF6: ;
    eax = MEM32(eax * 4 + 0x49BED8);
    esp += 4; return; /* ret */

loc_00083AFE: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00083B10
 * Original: 0x00083B10 - 0x00083B33 (35 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083B10(void)
{

loc_00083B10: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi + 4) = 0x3FFFFFFF;
    MEM32(esi + 8) = 0xFFFFFFFFu;
    MEM32(esi) = 0x3CED84;
    PUSH32(esp, 0x00083B2Fu); RECOMP_ABI_CALL(0x00083A70u, sub_00083A70); /* call 0x00083A70 */

loc_00083B2F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00083B40
 * Original: 0x00083B40 - 0x00083B48 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083B40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00083B40: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_00083B50(); return; /* tail jmp 0x00083B50 */

}

/**
 * sub_00083B50
 * Original: 0x00083B50 - 0x00083BC2 (114 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083B50: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x17C;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x170);
    edi = MEM32(eax + 0x178);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x12 (32-bit) */
    MEM32(eax + 0x170) = ecx;
    MEM32(eax + 0x178) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00083BA8; /* jl: less (signed <) */

loc_00083B97: ;
    MEM32(eax + 0x170) = 0;
    ecx = 0x11;
    goto loc_00083BA9;

loc_00083BA8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00083BA9: ;
    MEM32(eax + ecx * 4 + 0x124) = esi;
    ecx = MEM32(eax + 0x180);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x180) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00083BD0
 * Original: 0x00083BD0 - 0x00083C58 (136 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083BD0(void)
{

loc_00083BD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xC;
    ecx = edi;
    PUSH32(esp, 0x00083BDEu); RECOMP_ABI_CALL(0x00083810u, sub_00083810); /* call 0x00083810 */

loc_00083BDE: ;
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
    PUSH32(esp, 0x00083C13u); RECOMP_ABI_CALL(0x001994F0u, sub_001994F0); /* call 0x001994F0 */

loc_00083C13: ;
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
    MEM32(esi + ecx * 4 + 0x190) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00083C60
 * Original: 0x00083C60 - 0x00083C72 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083C60(void)
{

loc_00083C60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00083C68u); RECOMP_ABI_CALL(0x00083B10u, sub_00083B10); /* call 0x00083B10 */

loc_00083C68: ;
    MEM32(esi) = 0x3CED9C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00083C80
 * Original: 0x00083C80 - 0x00084203 (1411 bytes, 518 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083C80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00083C80: ;
    esp = esp - 0x4C;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0x50) = eax;
    eax = MEM32(0x49C0B4);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_00083D50; /* jge: greater or equal (signed >=) */

loc_00083CA0: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x10) = eax;
    goto loc_00083CB0;

    /* nop */
    /* nop */

loc_00083CB0: ;
    esi = MEM32(eax * 4 + 0x44DFC8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00083CDD; /* je: equal / zero */

loc_00083CBB: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00083CDD; /* je: equal / zero */

loc_00083CBF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00083CC5u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00083CC5: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00083CD0u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00083CD0: ;
    ecx = eax;
    PUSH32(esp, 0x00083CD7u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00083CD7: ;
    MEM32(esp + 0x14) = eax;
    goto loc_00083CE1;

loc_00083CDD: ;
    MEM32(esp + 0x14) = ebx;

loc_00083CE1: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = 0x49BF28;
    PUSH32(esp, 0x00083CF5u); RECOMP_ABI_CALL(0x00083BD0u, sub_00083BD0); /* call 0x00083BD0 */

loc_00083CF5: ;
    edx = MEM32(esp + 0x10);
    esi = MEM32(edx * 4 + 0x44E010);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00083D26; /* je: equal / zero */

loc_00083D04: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00083D26; /* je: equal / zero */

loc_00083D08: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00083D0Eu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00083D0E: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00083D19u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00083D19: ;
    ecx = eax;
    PUSH32(esp, 0x00083D20u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00083D20: ;
    MEM32(esp + 0x14) = eax;
    goto loc_00083D2A;

loc_00083D26: ;
    MEM32(esp + 0x14) = ebx;

loc_00083D2A: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = 0x49BD48;
    PUSH32(esp, 0x00083D3Eu); RECOMP_ABI_CALL(0x00083BD0u, sub_00083BD0); /* call 0x00083BD0 */

loc_00083D3E: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00083CB0; /* jl: less (signed <) */

loc_00083D50: ;
    ebp = 0; /* xor self */

loc_00083D52: ;
    PUSH32(esp, 0x40);
    edx = esp + 0x1C;
    PUSH32(esp, 0x3CEDEC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00083D63u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00083D63: ;
    edi = MEM32(ebp * 4 + 0x44DFC8);
    eax = esp + 0x24;
    esp = esp + 0xC;
    MEM8(esp + 0x57) = LO8(ebx);
    edx = eax + 1;

loc_00083D78: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00083D78; /* jne: not equal / not zero */

loc_00083D7F: ;
    ecx = edi;
    eax = eax - edx;
    esi = ecx + 1;

loc_00083D86: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00083D86; /* jne: not equal / not zero */

loc_00083D8D: ;
    ecx = ecx - esi;
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00083DC8; /* jge: greater or equal (signed >=) */

loc_00083D96: ;
    eax = edi;
    edx = edi;
    /* nop */

loc_00083DA0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00083DA0; /* jne: not equal / not zero */

loc_00083DA7: ;
    edi = esp + 0x18;
    eax = eax - edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_00083DB0: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00083DB0; /* jne: not equal / not zero */

loc_00083DB8: ;
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

loc_00083DC8: ;
    PUSH32(esp, 0x00083DCDu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00083DCD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00083DD4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00083DD4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00083DE2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00083DE2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00083E02; /* jne: not equal / not zero */

loc_00083DE6: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00083DEE; /* jne: not equal / not zero */

loc_00083DEA: ;
    eax = 0; /* xor self */
    goto loc_00083E2E;

loc_00083DEE: ;
    eax = MEM32(0x49B8B0);
    ecx = MEM32(0x49B8FC);
    MEM32(ecx * 4 + 0x49B8B0) = eax;
    goto loc_00083E3B;

loc_00083E02: ;
    PUSH32(esp, 0x00083E07u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_00083E07: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00083E14u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00083E14: ;
    PUSH32(esp, 0x00083E19u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00083E19: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00083E20u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00083E20: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00083E2Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00083E2E: ;
    edx = MEM32(0x49B8FC);
    MEM32(edx * 4 + 0x49B8B0) = eax;

loc_00083E3B: ;
    eax = MEM32(0x49B8FC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x40);
    MEM32(0x49B8FC) = eax;
    eax = esp + 0x1C;
    PUSH32(esp, 0x3CEDD4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00083E57u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00083E57: ;
    edi = MEM32(ebp * 4 + 0x44DFC8);
    eax = esp + 0x24;
    esp = esp + 0xC;
    MEM8(esp + 0x57) = LO8(ebx);
    edx = eax + 1;
    /* nop */

loc_00083E70: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00083E70; /* jne: not equal / not zero */

loc_00083E77: ;
    ecx = edi;
    eax = eax - edx;
    esi = ecx + 1;
    edi = edi;

loc_00083E80: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00083E80; /* jne: not equal / not zero */

loc_00083E87: ;
    ecx = ecx - esi;
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00083EBA; /* jge: greater or equal (signed >=) */

loc_00083E90: ;
    eax = edi;
    edx = edi;

loc_00083E94: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00083E94; /* jne: not equal / not zero */

loc_00083E9B: ;
    edi = esp + 0x18;
    eax = eax - edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00083EA2: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00083EA2; /* jne: not equal / not zero */

loc_00083EAA: ;
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

loc_00083EBA: ;
    PUSH32(esp, 0x00083EBFu); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_00083EBF: ;
    edx = MEM32(eax);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00083ECBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00083ECB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00083EFC; /* jne: not equal / not zero */

loc_00083ECF: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00083EE7; /* jne: not equal / not zero */

loc_00083ED3: ;
    edx = MEM32(0x3DD050);
    eax = MEM32(0x49BD44);
    MEM32(eax * 4 + 0x49BCF8) = edx;
    goto loc_00083F1C;

loc_00083EE7: ;
    ecx = MEM32(0x49BCF8);
    edx = MEM32(0x49BD44);
    MEM32(edx * 4 + 0x49BCF8) = ecx;
    goto loc_00083F1C;

loc_00083EFC: ;
    PUSH32(esp, 0x00083F01u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_00083F01: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00083F0Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00083F0F: ;
    edx = MEM32(0x49BD44);
    MEM32(edx * 4 + 0x49BCF8) = eax;

loc_00083F1C: ;
    eax = MEM32(0x49BD44);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x12 (32-bit) */
    MEM32(0x49BD44) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00083D52; /* jl: less (signed <) */

loc_00083F31: ;
    MEM32(esp + 0x10) = ebx;
    goto loc_00083F40;

    /* nop */
    edi = edi;

loc_00083F40: ;
    eax = MEM32(esp + 0x10);
    ebp = MEM32(eax * 4 + 0x44E0E8);
    PUSH32(esp, 0x40);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x3CEDC8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00083F5Cu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00083F5C: ;
    PUSH32(esp, ebx);
    MEM8(esp + 0x67) = LO8(ebx);
    PUSH32(esp, 0x00083F66u); RECOMP_ABI_CALL(0x000494B0u, sub_000494B0); /* call 0x000494B0 */

loc_00083F66: ;
    ecx = esp + 0x28;
    esp = esp + 0x10;
    esi = ecx + 1;

loc_00083F70: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00083F70; /* jne: not equal / not zero */

loc_00083F77: ;
    ecx = ecx - esi;
    edx = eax;
    esi = ecx;
    edi = edx + 1;

loc_00083F80: ;
    SET_LO8(ecx, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00083F80; /* jne: not equal / not zero */

loc_00083F87: ;
    edx = edx - edi;
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00083FB8; /* jge: greater or equal (signed >=) */

loc_00083F90: ;
    edx = eax;

loc_00083F92: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00083F92; /* jne: not equal / not zero */

loc_00083F99: ;
    edi = esp + 0x18;
    eax = eax - edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00083FA0: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00083FA0; /* jne: not equal / not zero */

loc_00083FA8: ;
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

loc_00083FB8: ;
    eax = esp + 0x18;
    edx = eax + 1;
    /* nop */

loc_00083FC0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00083FC0; /* jne: not equal / not zero */

loc_00083FC7: ;
    eax = eax - edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00083FE6; /* jge: greater or equal (signed >=) */

loc_00083FCF: ;
    edi = esp + 0x18;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00083FD4: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00083FD4; /* jne: not equal / not zero */

loc_00083FDC: ;
    SET_LO16(edx, MEM16(0x3CEDC4));
    MEM16(edi) = LO16(edx);

loc_00083FE6: ;
    edi = MEM32(ebp * 4 + 0x44DFC8);
    eax = esp + 0x18;
    edx = eax + 1;

loc_00083FF4: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00083FF4; /* jne: not equal / not zero */

loc_00083FFB: ;
    eax = eax - edx;
    edx = eax;
    eax = edi;
    esi = eax + 1;

loc_00084004: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00084004; /* jne: not equal / not zero */

loc_0008400B: ;
    eax = eax - esi;
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008403E; /* jge: greater or equal (signed >=) */

loc_00084014: ;
    eax = edi;
    edx = edi;

loc_00084018: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00084018; /* jne: not equal / not zero */

loc_0008401F: ;
    edi = esp + 0x18;
    eax = eax - edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00084026: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00084026; /* jne: not equal / not zero */

loc_0008402E: ;
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

loc_0008403E: ;
    PUSH32(esp, 0x00084043u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00084043: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008404Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008404A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00084058u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00084058: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008408A; /* je: equal / zero */

loc_0008405C: ;
    PUSH32(esp, 0x00084061u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_00084061: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0008406Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008406E: ;
    PUSH32(esp, 0x00084073u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00084073: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008407Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008407A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00084088u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00084088: ;
    goto loc_0008408C;

loc_0008408A: ;
    eax = 0; /* xor self */

loc_0008408C: ;
    edx = MEM32(0x49C4FC);
    MEM32(edx * 4 + 0x49C108) = eax;
    edi = MEM32(0x49C4FC);
    PUSH32(esp, 0x40);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3CEDB4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    MEM32(0x49C4FC) = edi;
    PUSH32(esp, 0x000840B7u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000840B7: ;
    eax = esp + 0x24;
    esp = esp + 0xC;
    MEM8(esp + 0x57) = LO8(ebx);
    edx = eax + 1;

loc_000840C5: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000840C5; /* jne: not equal / not zero */

loc_000840CC: ;
    eax = eax - edx;
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000840F0; /* jge: greater or equal (signed >=) */

loc_000840D6: ;
    edi = esp + 0x18;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_000840E0;

    /* nop */

loc_000840E0: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000840E0; /* jne: not equal / not zero */

loc_000840E8: ;
    ecx = MEM32(0x3CEDB0);
    MEM32(edi) = ecx;

loc_000840F0: ;
    eax = esp + 0x18;
    edx = eax + 1;

loc_000840F7: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000840F7; /* jne: not equal / not zero */

loc_000840FE: ;
    eax = eax - edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00084122; /* jge: greater or equal (signed >=) */

loc_00084106: ;
    edi = esp + 0x18;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00084110;

    /* nop */

loc_00084110: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00084110; /* jne: not equal / not zero */

loc_00084118: ;
    SET_LO16(edx, MEM16(0x3CEDC4));
    MEM16(edi) = LO16(edx);

loc_00084122: ;
    ebp = MEM32(esp + 0x10);
    edi = MEM32(ebp * 4 + 0x44DFC8);
    eax = esp + 0x18;
    edx = eax + 1;

loc_00084134: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00084134; /* jne: not equal / not zero */

loc_0008413B: ;
    eax = eax - edx;
    edx = eax;
    eax = edi;
    esi = eax + 1;

loc_00084144: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00084144; /* jne: not equal / not zero */

loc_0008414B: ;
    eax = eax - esi;
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008417E; /* jge: greater or equal (signed >=) */

loc_00084154: ;
    eax = edi;
    edx = edi;

loc_00084158: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00084158; /* jne: not equal / not zero */

loc_0008415F: ;
    edi = esp + 0x18;
    eax = eax - edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00084166: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00084166; /* jne: not equal / not zero */

loc_0008416E: ;
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

loc_0008417E: ;
    PUSH32(esp, 0x00084183u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_00084183: ;
    edx = MEM32(eax);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0008418Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008418F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000841BA; /* je: equal / zero */

loc_00084193: ;
    PUSH32(esp, 0x00084198u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_00084198: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x000841A5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000841A5: ;
    PUSH32(esp, 0x000841AAu); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_000841AA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000841B8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000841B8: ;
    goto loc_000841C8;

loc_000841BA: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    eax = MEM32(0x3DD050);
    if (CMP_EQ(_fa, _fb)) goto loc_000841C8; /* je: equal / zero */

loc_000841C3: ;
    eax = MEM32(0x49B900);

loc_000841C8: ;
    edx = MEM32(0x49BCF4);
    MEM32(edx * 4 + 0x49B900) = eax;
    edx = MEM32(0x49BCF4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x12 (32-bit) */
    MEM32(0x49BCF4) = edx;
    MEM32(esp + 0x10) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_00083F40; /* jl: less (signed <) */

loc_000841F0: ;
    ecx = MEM32(esp + 0x58);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    PUSH32(esp, 0x000841FFu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000841FF: ;
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

}

/**
 * sub_00084210
 * Original: 0x00084210 - 0x000842C5 (181 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084210: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = 0x3FFFFFFF;
    ecx = 0x49BF34;
    MEM32(0x49BF2C) = esi;
    MEM32(0x49C0B4) = edi;
    MEM32(0x49C0B0) = edi;
    PUSH32(esp, 0x00084235u); RECOMP_ABI_CALL(0x00083910u, sub_00083910); /* call 0x00083910 */

loc_00084235: ;
    ecx = 0x49BD54;
    MEM32(0x49BD4C) = esi;
    MEM32(0x49BED4) = edi;
    MEM32(0x49BED0) = edi;
    PUSH32(esp, 0x00084251u); RECOMP_ABI_CALL(0x00083910u, sub_00083910); /* call 0x00083910 */

loc_00084251: ;
    eax = MEM32(0x49BD44);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008427E; /* jle: less or equal (signed <=) */

loc_0008425C: ;
    /* nop */

loc_00084260: ;
    PUSH32(esp, 0x00084265u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_00084265: ;
    ecx = MEM32(esi * 4 + 0x49BCF8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00084274u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00084274: ;
    eax = MEM32(0x49BD44);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00084260; /* jl: less (signed <) */

loc_0008427E: ;
    eax = MEM32(0x49BCF4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(0x49BD44) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_000842AE; /* jle: less or equal (signed <=) */

loc_0008428F: ;
    /* nop */

loc_00084290: ;
    PUSH32(esp, 0x00084295u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_00084295: ;
    ecx = MEM32(esi * 4 + 0x49B900);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000842A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000842A4: ;
    eax = MEM32(0x49BCF4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00084290; /* jl: less (signed <) */

loc_000842AE: ;
    MEM32(0x49BCF4) = edi;
    MEM32(0x49B8FC) = edi;
    MEM32(0x49C4FC) = edi;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000842D0
 * Original: 0x000842D0 - 0x000842E2 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000842D0(void)
{

loc_000842D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000842D8u); RECOMP_ABI_CALL(0x00083C60u, sub_00083C60); /* call 0x00083C60 */

loc_000842D8: ;
    MEM32(esi) = 0x3CEE04;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000842F0
 * Original: 0x000842F0 - 0x0008430F (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000842F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000842F0: ;
    eax = MEM32(0x49C500);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008430E; /* je: equal / zero */

loc_000842F9: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00084301u); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_00084301: ;
    esp = esp + 8;
    MEM32(0x49C500) = 0;

loc_0008430E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00084310
 * Original: 0x00084310 - 0x0008433E (46 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084310(void)
{

loc_00084310: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x0008431Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008431E: ;
    edx = MEM32(esi);
    eax = ZX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00084329u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00084329: ;
    PUSH32(esp, 0x0008432Eu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0008432E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1A4); PUSH32(esp, 0x00084339u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00084339: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00084340
 * Original: 0x00084340 - 0x00084361 (33 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084340: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    MEM8(0x49E892) = LO8(eax);
    if (CMP_GE(_fas, _fbs)) goto loc_0008435E; /* jge: greater or equal (signed >=) */

loc_00084350: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0008435E; /* jl: less (signed <) */

loc_00084354: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ecx + 4;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x0008435Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008435E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00084370
 * Original: 0x00084370 - 0x00084380 (16 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00084370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084370: ;
    _fa = (uint32_t)(MEM8(0x49E892)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x49E892), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008437D; /* je: equal / zero */

loc_00084379: ;
    eax = ecx + 4;
    esp += 4; return; /* ret */

loc_0008437D: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00084380
 * Original: 0x00084380 - 0x00084390 (16 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084380(void)
{

loc_00084380: ;
    eax = ecx + 0x66C;
    esp += 4; return; /* ret */

}

/**
 * sub_00084390
 * Original: 0x00084390 - 0x000843B4 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084390(void)
{

loc_00084390: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x44E278);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x000843ACu); RECOMP_ABI_CALL(0x00123100u, sub_00123100); /* call 0x00123100 */

loc_000843AC: ;
    eax = MEM32(esp + 0xC);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000843C0
 * Original: 0x000843C0 - 0x00084453 (147 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000843C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000843C0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000843CBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000843CB: ;
    esi = ZX8(LO8(eax));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008444F; /* je: equal / zero */

loc_000843D6: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x3CEE70);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000843E6u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000843E6: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000843FE; /* jne: not equal / not zero */

loc_000843ED: ;
    ecx = esi + esi;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = eax * 4 + 0x49E810;
    goto loc_00084442;

loc_000843FE: ;
    PUSH32(esp, 0x3CEE64);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00084409u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00084409: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008444E; /* jne: not equal / not zero */

loc_00084410: ;
    eax = esi + esi;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = ecx * 4 + 0x49E810;
    ecx = eax;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = MEM32(edx);
    esi = ~esi;
    ecx = ecx & esi;
    MEM32(edx) = ecx;
    ecx = eax + 1;
    edx = ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = edx * 4 + 0x49E810;

loc_00084442: ;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    MEM32(eax) = MEM32(eax) | edx;

loc_0008444E: ;
    POP32(esp, edi);

loc_0008444F: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00084460
 * Original: 0x00084460 - 0x000844EE (142 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084460: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_S(_fas, _fbs)) goto loc_000844E8; /* jl: less (signed <) */

loc_0008446B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000844E8; /* jge: greater or equal (signed >=) */

loc_00084470: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000844E8; /* je: equal / zero */

loc_00084478: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00084485; /* je: equal / zero */

loc_0008447F: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(ecx);
    goto loc_00084488;

loc_00084485: ;
    MEM8(eax) = 0;

loc_00084488: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    PUSH32(esp, edi);
    edi = ZX8(LO8(ecx));
    edx = edx + edi * 2;
    if (CMP_AE(_fa, _fb)) goto loc_000844CB; /* jae: above or equal (unsigned >=) */

loc_00084496: ;
    PUSH32(esp, ebx);
    goto loc_000844A0;

    /* nop */

loc_000844A0: ;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(ecx * 4 + 0x49E810)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx * 4 + 0x49E810), edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000844CA; /* jne: not equal / not zero */

loc_000844BA: ;
    SET_LO8(ebx, MEM8(eax));
    edx = edx + 2;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    MEM8(eax) = LO8(ebx);
    if (CMP_B(_fa, _fb)) goto loc_000844A0; /* jb: below (unsigned <) */

loc_000844CA: ;
    POP32(esp, ebx);

loc_000844CB: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000844E8; /* je: equal / zero */

loc_000844D4: ;
    eax = ZX8(MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000844E8; /* jae: above or equal (unsigned >=) */

loc_000844DB: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000844E4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000844E4: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000844E8: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000844F0
 * Original: 0x000844F0 - 0x000844F7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000844F0(void)
{

loc_000844F0: ;
    eax = ecx + 0x2235;
    esp += 4; return; /* ret */

}

/**
 * sub_00084500
 * Original: 0x00084500 - 0x0008451D (29 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084500(void)
{

loc_00084500: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x30);
    esi = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00084510u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00084510: ;
    esp = esp + 0xC;
    MEM8(esi + 0x2F) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00084520
 * Original: 0x00084520 - 0x000845B3 (147 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084520(void)
{

loc_00084520: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x20);
    edi = esi + 1;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00084535u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00084535: ;
    ebx = 0; /* xor self */
    PUSH32(esp, 0x60);
    MEM8(edi + 0x1F) = LO8(ebx);
    edi = esi + 0x21;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008454Au); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0008454A: ;
    PUSH32(esp, 0x100);
    MEM8(edi + 0x5F) = LO8(ebx);
    edi = esi + 0x81;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00084563u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00084563: ;
    MEM8(edi + 0xFF) = LO8(ebx);
    MEM8(esi + 0x181) = LO8(ebx);
    SET_LO8(edx, MEM8(esi + 0x1B8));
    edi = esi + 0x181;
    SET_LO8(edx, LO8(edx) & 0xC0);
    esp = esp + 0x24;
    MEM32(esi + 0x1B4) = ebx;
    MEM8(esi + 0x1B8) = LO8(edx);
    PUSH32(esp, 0x00084592u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_00084592: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x94);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0008459Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008459E: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000845A7u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000845A7: ;
    esp = esp + 0xC;
    MEM8(edi + 0x2F) = LO8(ebx);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000845C0
 * Original: 0x000845C0 - 0x00084723 (355 bytes, 120 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000845C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000845C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi));
    SET_LO8(ebx, 0); /* xor self */
    ecx = ecx & 0xF;
    SET_LO8(edx, MEM8(ecx * 4 + 0x49E852));
    ecx = ecx * 4 + 0x49E850;
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) >> 1);
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    MEM8(esp + 0xF) = LO8(eax);
    if (CMP_A(_fa, _fb)) goto loc_000846DD; /* ja: above (unsigned >) */

loc_000845F4: ;
    { uint32_t _jt = MEM32(esi * 4 + 0x84724); /* switch: 6 entries, 6 targets */
    if (_jt == 0x000845FBu) goto loc_000845FB;
    if (_jt == 0x0008460Du) goto loc_0008460D;
    if (_jt == 0x00084618u) goto loc_00084618;
    if (_jt == 0x00084629u) goto loc_00084629;
    if (_jt == 0x0008463Au) goto loc_0008463A;
    if (_jt == 0x000846BAu) goto loc_000846BA;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000845FB: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00084602; /* je: equal / zero */

loc_00084600: ;
    SET_LO8(ebx, 1);

loc_00084602: ;
    SET_LO8(edx, LO8(edx) & 0xF7);
    MEM8(ecx + 2) = LO8(edx);
    goto loc_000846DD;

loc_0008460D: ;
    SET_LO8(edx, LO8(edx) | 8);
    MEM8(ecx + 2) = LO8(edx);
    goto loc_000846DD;

loc_00084618: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008461E; /* jne: not equal / not zero */

loc_0008461C: ;
    SET_LO8(ebx, 1);

loc_0008461E: ;
    SET_LO8(edx, LO8(edx) | 2);
    MEM8(ecx + 2) = LO8(edx);
    goto loc_000846DD;

loc_00084629: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008462F; /* je: equal / zero */

loc_0008462D: ;
    SET_LO8(ebx, 1);

loc_0008462F: ;
    SET_LO8(edx, LO8(edx) & 0xFD);
    MEM8(ecx + 2) = LO8(edx);
    goto loc_000846DD;

loc_0008463A: ;
    esi = 0; /* xor self */
    SET_LO16(esi, MEM16(ecx));
    eax = esi;
    eax = eax << 4;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax ^ esi;
    eax = eax & 0xFFF;
    eax = eax ^ esi;
    MEM16(ecx) = LO16(eax);
    SET_LO8(ebx, MEM8(edi + 0x1B8));
    MEM8(esp + 0x14) = LO8(ebx);
    SET_LO8(ebx, LO8(ebx) & 0x3F);
    MEM8(esp + 0xE) = LO8(ebx);
    if (0) goto loc_00084692; /* jbe: below or equal (unsigned <=) */

loc_00084667: ;
    ebx = 0; /* xor self */
    SET_LO8(ebx, MEM8(esp + 0x14));
    esi = eax;
    esi = esi << 4;
    esi = SX16(LO16(esi));
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    ebx = ebx & 0x3F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00084692; /* jle: less or equal (signed <=) */

loc_0008467F: ;
    SET_LO16(esi, ZX8(MEM8(esp + 0xE)));
    esi = esi ^ eax;
    esi = esi & 0xFFF;
    esi = esi ^ eax;
    MEM16(ecx) = LO16(esi);

loc_00084692: ;
    SET_LO16(eax, MEM16(ecx));
    ebx = 0; /* xor self */
    SET_LO8(ebx, MEM8(edi + 0x1B8));
    SET_LO16(eax, LO16(eax) << 4);
    eax = SX16(LO16(eax));
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    ebx = ebx & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000846B4; /* jl: less (signed <) */

loc_000846AE: ;
    SET_LO8(edx, LO8(edx) | 2);
    MEM8(ecx + 2) = LO8(edx);

loc_000846B4: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    goto loc_000846DB;

loc_000846BA: ;
    esi = 0; /* xor self */
    SET_LO16(esi, MEM16(ecx));
    edx = esi;
    edx = edx << 4;
    SET_LO16(edx, (uint32_t)(((int32_t)(int16_t)(LO16(edx))) >> ((4) & 31u)));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(edx), LO16(edx) (16-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000846DD; /* jle: less or equal (signed <=) */

loc_000846CD: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx ^ esi;
    edx = edx & 0xFFF;
    edx = edx ^ esi;
    MEM16(ecx) = LO16(edx);

loc_000846DB: ;
    SET_LO8(ebx, 1);

loc_000846DD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008471A; /* jne: not equal / not zero */

loc_000846E1: ;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 2), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008471A; /* je: equal / zero */

loc_000846E7: ;
    eax = MEM32(edi + 0x1B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0008471A; /* jle: less or equal (signed <=) */

loc_000846F1: ;
    PUSH32(esp, 0x000846F6u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_000846F6: ;
    ecx = MEM32(edi + 0x1B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x00084709u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00084709: ;
    edx = MEM32(edi + 0x1B4);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00084717u); RECOMP_ABI_CALL(0x0002FCF0u, sub_0002FCF0); /* call 0x0002FCF0 */

loc_00084717: ;
    esp = esp + 8;

loc_0008471A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00084740
 * Original: 0x00084740 - 0x0008491B (475 bytes, 170 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084740: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi));
    PUSH32(esp, 0x3CEEB8);
    PUSH32(esp, ebx);
    eax = eax & 0xF;
    esi = eax * 4 + 0x49E850;
    PUSH32(esp, 0x00084762u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00084762: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00084786; /* jne: not equal / not zero */

loc_00084769: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x60);
    PUSH32(esp, ecx);
    esi = edi + 0x21;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00084779u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00084779: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    MEM8(esi + 0x5F) = 0;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00084786: ;
    PUSH32(esp, 0x3CC6BC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00084791u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00084791: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000847BE; /* jne: not equal / not zero */

loc_00084798: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    esi = edi + 0x81;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000847AEu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000847AE: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    MEM8(esi + 0xFF) = 0;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000847BE: ;
    PUSH32(esp, 0x3CEEA4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000847C9u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000847C9: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00084804; /* jne: not equal / not zero */

loc_000847D0: ;
    esi = MEM32(esp + 0x14);
    eax = esi;
    edx = eax + 1;
    /* nop */

loc_000847E0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000847E0; /* jne: not equal / not zero */

loc_000847E7: ;
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2F (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00084915; /* ja: above (unsigned >) */

loc_000847F2: ;
    PUSH32(esp, esi);
    ecx = edi + 0x181;
    PUSH32(esp, 0x000847FEu); RECOMP_ABI_CALL(0x00084500u, sub_00084500); /* call 0x00084500 */

loc_000847FE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00084804: ;
    PUSH32(esp, 0x3C8690);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0008480Fu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0008480F: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00084829; /* jne: not equal / not zero */

loc_00084816: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = edi + 1;
    PUSH32(esp, 0x00084823u); RECOMP_ABI_CALL(0x000496B0u, sub_000496B0); /* call 0x000496B0 */

loc_00084823: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00084829: ;
    PUSH32(esp, 0x3C8668);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00084834u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00084834: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00084867; /* jne: not equal / not zero */

loc_0008483B: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00084845u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_00084845: ;
    SET_LO8(edx, MEM8(edi + 0x1B8));
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(eax, MEM8(edi + 0x1B8));
    esp = esp + 4;
    SET_LO8(edx, LO8(edx) & 0x3F);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(edi + 0x1B8) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00084867: ;
    PUSH32(esp, 0x3CEE9C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00084872u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00084872: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000848B0; /* jne: not equal / not zero */

loc_00084879: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00084888u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00084888: ;
    SET_LO8(ebx, MEM8(esi + 2));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(edx, LO8(ebx));
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(eax, LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    MEM8(esi + 2) = LO8(edx);
    if (TEST_NZ(_fa, _fb)) goto loc_00084915; /* jne: not equal / not zero */

loc_000848A5: ;
    SET_LO8(eax, LO8(eax) | 8);
    POP32(esp, edi);
    MEM8(esi + 2) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000848B0: ;
    PUSH32(esp, 0x3CEE90);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000848BBu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000848BB: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000848F0; /* jne: not equal / not zero */

loc_000848C2: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000848D1u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000848D1: ;
    SET_LO8(ebx, MEM8(esi + 2));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) << 2);
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(eax, LO8(eax) & 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    POP32(esp, edi);
    MEM8(esi + 2) = LO8(ecx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000848F0: ;
    PUSH32(esp, 0x3CE200);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000848FBu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000848FB: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00084915; /* jne: not equal / not zero */

loc_00084902: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008490Cu); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_0008490C: ;
    esp = esp + 4;
    MEM32(edi + 0x1B4) = eax;

loc_00084915: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00084920
 * Original: 0x00084920 - 0x00084937 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084920(void)
{

loc_00084920: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx));
    eax = eax & 0xF;
    eax = (uint32_t)(int32_t)SMEM16(eax * 4 + 0x49E850);
    SET_LO16(eax, LO16(eax) << 4);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    esp += 4; return; /* ret */

}

/**
 * sub_00084940
 * Original: 0x00084940 - 0x00084951 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084940(void)
{

loc_00084940: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx));
    eax = eax & 0xF;
    SET_LO8(eax, MEM8(eax * 4 + 0x49E852));
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00084960
 * Original: 0x00084960 - 0x00084974 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084960(void)
{

loc_00084960: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx));
    eax = eax & 0xF;
    SET_LO8(eax, MEM8(eax * 4 + 0x49E852));
    SET_LO8(eax, LO8(eax) >> 2);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00084980
 * Original: 0x00084980 - 0x00084993 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084980(void)
{

loc_00084980: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx));
    eax = eax & 0xF;
    SET_LO8(eax, MEM8(eax * 4 + 0x49E852));
    SET_LO8(eax, LO8(eax) >> 1);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000849A0
 * Original: 0x000849A0 - 0x000849B4 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000849A0(void)
{

loc_000849A0: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx));
    eax = eax & 0xF;
    SET_LO8(eax, MEM8(eax * 4 + 0x49E852));
    SET_LO8(eax, LO8(eax) >> 3);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000849C0
 * Original: 0x000849C0 - 0x00084A26 (102 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000849C0(void)
{

loc_000849C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x60);
    edi = esi + 1;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, edi);
    MEM8(esi) = 0xFF;
    PUSH32(esp, 0x000849D8u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000849D8: ;
    ebx = 0; /* xor self */
    PUSH32(esp, 0x60);
    MEM8(edi + 0x5F) = LO8(ebx);
    edi = esi + 0x61;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000849EDu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000849ED: ;
    MEM8(edi + 0x5F) = LO8(ebx);
    MEM32(esi + 0x124) = ebx;
    MEM32(esi + 0x128) = ebx;
    SET_LO8(eax, MEM8(esi + 0x12F));
    esp = esp + 0x18;
    SET_LO8(eax, LO8(eax) & 0xFD);
    SET_LO8(eax, LO8(eax) | 1);
    POP32(esp, edi);
    MEM8(esi + 0x12C) = LO8(ebx);
    MEM8(esi + 0x12D) = LO8(ebx);
    MEM8(esi + 0x12E) = 3;
    MEM8(esi + 0x12F) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00084A30
 * Original: 0x00084A30 - 0x00084CBF (655 bytes, 223 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084A30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x3CEEB8);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00084A43u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00084A43: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00084A64; /* jne: not equal / not zero */

loc_00084A4A: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x60);
    PUSH32(esp, eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00084A58u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00084A58: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    MEM8(esi + 0x5F) = 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00084A64: ;
    PUSH32(esp, 0x3CEF30);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00084A6Fu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00084A6F: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00084A92; /* jne: not equal / not zero */

loc_00084A76: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x60);
    PUSH32(esp, ecx);
    esi = esi + 0x61;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00084A86u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00084A86: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    MEM8(esi + 0x5F) = 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00084A92: ;
    PUSH32(esp, 0x3CEF28);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00084A9Du); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00084A9D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00084AC3; /* jne: not equal / not zero */

loc_00084AA4: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0x60);
    PUSH32(esp, edx);
    esi = esi + 0xC1;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00084AB7u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00084AB7: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    MEM8(esi + 0x5F) = 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00084AC3: ;
    PUSH32(esp, 0x3CEF1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00084ACEu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00084ACE: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00084AFA; /* jne: not equal / not zero */

loc_00084AD5: ;
    ecx = MEM32(esp + 0x10);
    eax = esi + 0x128;
    PUSH32(esp, eax);
    esi = esi + 0x124;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3C8470);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00084AF2u); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_00084AF2: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00084AFA: ;
    PUSH32(esp, 0x3CEF10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00084B05u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00084B05: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00084B32; /* jne: not equal / not zero */

loc_00084B0C: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00084B16u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_00084B16: ;
    SET_LO8(ecx, MEM8(esi + 0x12E));
    esp = esp + 4;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 3);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    POP32(esp, edi);
    MEM8(esi + 0x12E) = LO8(ecx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00084B32: ;
    PUSH32(esp, 0x3CEF04);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00084B3Du); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00084B3D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00084B6D; /* jne: not equal / not zero */

loc_00084B44: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00084B4Eu); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_00084B4E: ;
    SET_LO8(ecx, MEM8(esi + 0x12E));
    esp = esp + 4;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) << 2);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 0xC);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    POP32(esp, edi);
    MEM8(esi + 0x12E) = LO8(ecx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00084B6D: ;
    PUSH32(esp, 0x3CEEF8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00084B78u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00084B78: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00084B97; /* jne: not equal / not zero */

loc_00084B7F: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00084B89u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_00084B89: ;
    esp = esp + 4;
    POP32(esp, edi);
    MEM8(esi + 0x12C) = LO8(eax);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00084B97: ;
    PUSH32(esp, 0x3CEEEC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00084BA2u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00084BA2: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00084BC1; /* jne: not equal / not zero */

loc_00084BA9: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00084BB3u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_00084BB3: ;
    esp = esp + 4;
    POP32(esp, edi);
    MEM8(esi + 0x12D) = LO8(eax);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00084BC1: ;
    PUSH32(esp, 0x3CEEE4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00084BCCu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00084BCC: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00084C03; /* jne: not equal / not zero */

loc_00084BD3: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00084BE2u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00084BE2: ;
    SET_LO8(edx, MEM8(esi + 0x12E));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) << 7);
    SET_LO8(edx, LO8(edx) & 0x7F);
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    POP32(esp, edi);
    MEM8(esi + 0x12E) = LO8(ecx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00084C03: ;
    PUSH32(esp, 0x3CEED8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00084C0Eu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00084C0E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00084C44; /* jne: not equal / not zero */

loc_00084C15: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00084C24u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00084C24: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, MEM8(esi + 0x12F));
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    POP32(esp, edi);
    MEM8(esi + 0x12F) = LO8(eax);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00084C44: ;
    PUSH32(esp, 0x3CEECC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00084C4Fu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00084C4F: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00084C86; /* jne: not equal / not zero */

loc_00084C56: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00084C65u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00084C65: ;
    SET_LO8(ecx, MEM8(esi + 0x12F));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) << 1);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    POP32(esp, edi);
    MEM8(esi + 0x12F) = LO8(ecx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00084C86: ;
    PUSH32(esp, 0x3CEEC4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00084C91u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00084C91: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00084CBA; /* jne: not equal / not zero */

loc_00084C98: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00084CA2u); RECOMP_ABI_CALL(0x00084390u, sub_00084390); /* call 0x00084390 */

loc_00084CA2: ;
    SET_LO8(ecx, MEM8(esi + 0x12E));
    SET_LO8(eax, LO8(eax) << 4);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 0x70);
    esp = esp + 4;
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(esi + 0x12E) = LO8(ecx);

loc_00084CBA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00084CC0
 * Original: 0x00084CC0 - 0x00084D94 (212 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084CC0: ;
    eax = MEM32(ecx + 0x1BC0);
    PUSH32(esp, esi);
    esi = ecx + 0x1BC0;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00084CEE; /* jne: not equal / not zero */

loc_00084CD3: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00084D8C; /* jge: greater or equal (signed >=) */

loc_00084CE2: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00084CD3; /* je: equal / zero */

loc_00084CEE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00084CFB; /* jne: not equal / not zero */

loc_00084CF5: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_00084CFB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00084D05; /* jne: not equal / not zero */

loc_00084CFF: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_00084D05: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00084D0F; /* jne: not equal / not zero */

loc_00084D09: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_00084D0F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00084D1A; /* jne: not equal / not zero */

loc_00084D13: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00084D13; /* je: equal / zero */

loc_00084D1A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00084D8C; /* jge: greater or equal (signed >=) */

loc_00084D1F: ;
    /* nop */

loc_00084D20: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00084D8C; /* jge: greater or equal (signed >=) */

loc_00084D26: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    ecx = edx;
    ecx = ecx & 0x1F;
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00084D57; /* jne: not equal / not zero */

loc_00084D39: ;
    /* nop */

loc_00084D40: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00084D8C; /* jge: greater or equal (signed >=) */

loc_00084D4B: ;
    ecx = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = MEM32(esi + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00084D40; /* je: equal / zero */

loc_00084D57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00084D64; /* jne: not equal / not zero */

loc_00084D5E: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_00084D64: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00084D6E; /* jne: not equal / not zero */

loc_00084D68: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_00084D6E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00084D78; /* jne: not equal / not zero */

loc_00084D72: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_00084D78: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00084D87; /* jne: not equal / not zero */

loc_00084D7C: ;
    /* nop */

loc_00084D80: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00084D80; /* je: equal / zero */

loc_00084D87: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00084D20; /* jl: less (signed <) */

loc_00084D8C: ;
    MEM32(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00084DA0
 * Original: 0x00084DA0 - 0x00084DC5 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084DA0: ;
    eax = ecx;
    PUSH32(esp, esi);
    edx = eax;
    esi = 0x10;
    /* nop */

loc_00084DB0: ;
    MEM8(edx) = 0;
    edx = edx + 0x20;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00084DB0; /* jne: not equal / not zero */

loc_00084DB9: ;
    MEM32(eax + 0x204) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00084DD0
 * Original: 0x00084DD0 - 0x00084DEA (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084DD0(void)
{

loc_00084DD0: ;
    eax = ecx;
    edx = 0; /* xor self */
    MEM8(eax) = LO8(edx);
    ecx = eax + 0x20;
    MEM8(ecx) = LO8(edx);
    ecx = ecx + 0x20;
    MEM8(ecx) = LO8(edx);
    MEM8(ecx + 0x20) = LO8(edx);
    MEM32(eax + 0x84) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00084DF0
 * Original: 0x00084DF0 - 0x00084E15 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084DF0: ;
    eax = ecx;
    PUSH32(esp, esi);
    edx = eax;
    esi = 0xFF;
    /* nop */

loc_00084E00: ;
    MEM8(edx) = 0;
    edx = edx + 0x20;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00084E00; /* jne: not equal / not zero */

loc_00084E09: ;
    MEM32(eax + 0x1FE4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00084E20
 * Original: 0x00084E20 - 0x00084E38 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084E20(void)
{

loc_00084E20: ;
    edx = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0xFF;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx + 0x400) = eax;
    eax = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00084E40
 * Original: 0x00084E40 - 0x00084E76 (54 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084E40: ;
    edx = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = edx;
    MEM8(edx + 0x82) = 0xFF;
    ecx = 0x10;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    eax = edx + 0x40;
    ecx = 0x10;
    SET_LO8(edx, 0xF0);
    PUSH32(esp, ebx);

loc_00084E61: ;
    SET_LO8(ebx, MEM8(eax + 2));
    MEM16(eax) = MEM16(eax) & 0xF000;
    SET_LO8(ebx, LO8(ebx) & LO8(edx));
    MEM8(eax + 2) = LO8(ebx);
    eax = eax + 4;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00084E61; /* jne: not equal / not zero */

loc_00084E74: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00084E80
 * Original: 0x00084E80 - 0x00084EC6 (70 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084E80: ;
    eax = MEM32(0x49E804);
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00084EB8; /* jle: less or equal (signed <=) */

loc_00084E8D: ;
    esi = MEM32(esp + 0xC);
    eax = 0; /* xor self */

loc_00084E93: ;
    eax = eax << 5;
    eax = eax + 0x49C820;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00084EA2u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00084EA2: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00084EBF; /* je: equal / zero */

loc_00084EA9: ;
    ecx = MEM32(0x49E804);
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(LO8(ebx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00084E93; /* jl: less (signed <) */

loc_00084EB8: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(eax) | 0xFF);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00084EBF: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00084ED0
 * Original: 0x00084ED0 - 0x00084F7B (171 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084ED0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00084EE0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00084EE0: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00084F76; /* je: equal / zero */

loc_00084EEA: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00084EF7u); RECOMP_ABI_CALL(0x000845C0u, sub_000845C0); /* call 0x000845C0 */

loc_00084EF7: ;
    SET_LO8(ecx, MEM8(esi + 0x2234));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM8(esi + 0x2234) = LO8(ecx);
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_00084F38; /* jne: not equal / not zero */

loc_00084F0C: ;
    PUSH32(esp, 0x00084F11u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_00084F11: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x94);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00084F1Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00084F1D: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, eax);
    esi = esi + 0x2235;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00084F2Cu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00084F2C: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    MEM8(esi + 0x2F) = 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00084F38: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi));
    edx = 0; /* xor self */
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi + 0x1B8));
    edi = edi + 0x181;
    esi = esi + 0x2235;
    ecx = ecx & 0xF;
    SET_LO16(edx, MEM16(ecx * 4 + 0x49E850));
    SET_LO16(edx, LO16(edx) << 4);
    eax = eax & 0x3F;
    PUSH32(esp, eax);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    eax = ZX8(LO8(edx));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00084F73u); RECOMP_ABI_CALL(0x00199B80u, sub_00199B80); /* call 0x00199B80 */

loc_00084F73: ;
    esp = esp + 0x10;

loc_00084F76: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00084F80
 * Original: 0x00084F80 - 0x00084FBF (63 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084F80: ;
    PUSH32(esp, edi);
    ecx = 0x10;
    eax = 0; /* xor self */
    edi = 0x49E810;
    MEM8(0x49E892) = 0xFF;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    edx = 0xFFFFF000u;
    SET_LO8(ecx, 0xF0);
    PUSH32(esp, ebx);
    /* nop */

loc_00084FA0: ;
    SET_LO8(ebx, MEM8(eax + 0x49E852));
    MEM16(eax + 0x49E850) = MEM16(eax + 0x49E850) & LO16(edx);
    SET_LO8(ebx, LO8(ebx) & LO8(ecx));
    MEM8(eax + 0x49E852) = LO8(ebx);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00084FA0; /* jb: below (unsigned <) */

loc_00084FBD: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00084FC0
 * Original: 0x00084FC0 - 0x00085073 (179 bytes, 61 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084FC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00084FC0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00085070; /* jae: above or equal (unsigned >=) */

loc_00084FCC: ;
    eax = ZX8(LO8(eax));
    PUSH32(esp, esi);
    esi = MEM32(eax * 4 + 0x49E898);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    eax = eax * 4 + 0x49E898;
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_00084FEA; /* jne: not equal / not zero */

loc_00084FE3: ;
    edi = 0x3C806C;
    goto loc_00085000;

loc_00084FEA: ;
    PUSH32(esp, 0x00084FEFu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00084FEF: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    edi = ecx + eax + 0x8008;

loc_00085000: ;
    eax = MEM32(0x44E2E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = 0x44E2E8;
    if (TEST_Z(_fa, _fb)) goto loc_0008506E; /* je: equal / zero */

loc_0008500E: ;
    edi = edi;

loc_00085010: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00085019u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00085019: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008502F; /* je: equal / zero */

loc_00085020: ;
    eax = MEM32(esi + 8);
    esi = esi + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00085010; /* jne: not equal / not zero */

loc_0008502A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0008502F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x44E2E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x44E2E8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0008506E; /* jb: below (unsigned <) */

loc_00085037: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    /* nop */

loc_00085040: ;
    PUSH32(esp, 0x00085045u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_00085045: ;
    edi = eax;
    PUSH32(esp, 0x0008504Cu); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0008504C: ;
    ecx = MEM32(esi + 4);
    ebx = eax;
    eax = MEM32(edi);
    ebp = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0008505Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008505B: ;
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + 0x2C); PUSH32(esp, 0x00085061u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00085061: ;
    esi = esi - 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x44E2E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x44E2E8 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00085040; /* jae: above or equal (unsigned >=) */

loc_0008506C: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0008506E: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00085070: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00085080
 * Original: 0x00085080 - 0x000850D0 (80 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085080(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00085080: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + 0x66C;
    esi = 0; /* xor self */
    ebx = edi + 1;

loc_00085093: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x1BC4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x1BC4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008509F; /* jne: not equal / not zero */

loc_0008509B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000850C7; /* je: equal / zero */

loc_0008509F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000850A6u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000850A6: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000850B6; /* je: equal / zero */

loc_000850AD: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 0x1BC;
    goto loc_00085093;

loc_000850B6: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1BC);
    eax = eax + edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000850C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000850D0
 * Original: 0x000850D0 - 0x000850E5 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000850D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000850D0: ;
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000850E2; /* je: equal / zero */

loc_000850D6: ;
    eax = ZX8(LO8(eax));
    eax = eax << 5;
    eax = eax + 0x49C820;
    esp += 4; return; /* ret */

loc_000850E2: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_000850F0
 * Original: 0x000850F0 - 0x0008513E (78 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000850F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000850F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x204);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0008512C; /* jle: less or equal (signed <=) */

loc_00085104: ;
    ebp = MEM32(esp + 0x18);
    edi = ebx;
    /* nop */

loc_00085110: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00085117u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00085117: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00085135; /* je: equal / zero */

loc_0008511E: ;
    eax = MEM32(ebx + 0x204);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00085110; /* jl: less (signed <) */

loc_0008512C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00085135: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00085140
 * Original: 0x00085140 - 0x0008518E (78 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085140(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00085140: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x84);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0008517C; /* jle: less or equal (signed <=) */

loc_00085154: ;
    ebp = MEM32(esp + 0x18);
    edi = ebx;
    /* nop */

loc_00085160: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00085167u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00085167: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00085185; /* je: equal / zero */

loc_0008516E: ;
    eax = MEM32(ebx + 0x84);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00085160; /* jl: less (signed <) */

loc_0008517C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00085185: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00085190
 * Original: 0x00085190 - 0x000851B6 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085190: ;
    eax = ecx;
    PUSH32(esp, esi);
    edx = eax;
    esi = 0x10;
    /* nop */

loc_000851A0: ;
    SET_LO8(ecx, MEM8(edx + 2));
    MEM16(edx) = MEM16(edx) & 0xF000;
    SET_LO8(ecx, LO8(ecx) & 0xF0);
    MEM8(edx + 2) = LO8(ecx);
    edx = edx + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000851A0; /* jne: not equal / not zero */

loc_000851B4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000851C0
 * Original: 0x000851C0 - 0x000851CC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000851C0(void)
{

loc_000851C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000851C8u); RECOMP_ABI_CALL(0x00084DA0u, sub_00084DA0); /* call 0x00084DA0 */

loc_000851C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000851D0
 * Original: 0x000851D0 - 0x000851DC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000851D0(void)
{

loc_000851D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000851D8u); RECOMP_ABI_CALL(0x00084DD0u, sub_00084DD0); /* call 0x00084DD0 */

loc_000851D8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000851E0
 * Original: 0x000851E0 - 0x000851EC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000851E0(void)
{

loc_000851E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000851E8u); RECOMP_ABI_CALL(0x00084DF0u, sub_00084DF0); /* call 0x00084DF0 */

loc_000851E8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000851F0
 * Original: 0x000851F0 - 0x000851FC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000851F0(void)
{

loc_000851F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000851F8u); RECOMP_ABI_CALL(0x00084E20u, sub_00084E20); /* call 0x00084E20 */

loc_000851F8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00085200
 * Original: 0x00085200 - 0x00085223 (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085200(void)
{

loc_00085200: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x10;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi + 0x40;
    PUSH32(esp, 0x00085217u); RECOMP_ABI_CALL(0x00085190u, sub_00085190); /* call 0x00085190 */

loc_00085217: ;
    ecx = esi;
    PUSH32(esp, 0x0008521Eu); RECOMP_ABI_CALL(0x00084E40u, sub_00084E40); /* call 0x00084E40 */

loc_0008521E: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00085230
 * Original: 0x00085230 - 0x00085244 (20 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085230(void)
{

loc_00085230: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    edx = ecx + 0x240;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00085241u); RECOMP_ABI_CALL(0x000850F0u, sub_000850F0); /* call 0x000850F0 */

loc_00085241: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00085250
 * Original: 0x00085250 - 0x00085264 (20 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085250(void)
{

loc_00085250: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    edx = ecx + 0x130;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00085261u); RECOMP_ABI_CALL(0x00085140u, sub_00085140); /* call 0x00085140 */

loc_00085261: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00085270
 * Original: 0x00085270 - 0x00085284 (20 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085270(void)
{

loc_00085270: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    edx = ecx + 0x448;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00085281u); RECOMP_ABI_CALL(0x00085140u, sub_00085140); /* call 0x00085140 */

loc_00085281: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00085290
 * Original: 0x00085290 - 0x0008562D (925 bytes, 267 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085290(void)
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

loc_00085290: ;
    esp = esp - 0x7C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esp + 0x44;
    PUSH32(esp, 0x000852A2u); RECOMP_ABI_CALL(0x000322B0u, sub_000322B0); /* call 0x000322B0 */

loc_000852A2: ;
    PUSH32(esp, 0x000852A7u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000852A7: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xE0); PUSH32(esp, 0x000852BAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000852BA: ;
    fp_push(MEMF(edi + 0x170)); /* fld float */
    fp_push(MEMF(edi + 0x16C)); /* fld float */
    fp_push(MEMF(edi + 0x168)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C93C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c93c0] */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008545E; /* jne: not equal / not zero */

loc_000852F3: ;
    eax = MEM32(esp + 0x58);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x5C) = 0x42200000;
    MEM32(esp + 0x60) = 0;
    MEM32(esp + 0x64) = 0x41200000;
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x6C) = 0x42200000;
    MEM32(esp + 0x70) = 0x41200000;
    MEM32(esp + 0x74) = 0xC2200000u;
    MEM32(esp + 0x78) = 0;
    MEM32(esp + 0x7C) = 0x41200000;
    MEM32(esp + 0x80) = 0;
    MEM32(esp + 0x84) = 0xC2200000u;
    MEM32(esp + 0x88) = 0x41200000;
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x38) = 0x3FC8F5C3;
    MEM32(esp + 0x3C) = 0x4048F5C3;
    MEM32(esp + 0x40) = 0x4096B852;
    MEM32(esp + 0x10) = ebp;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00085625; /* jle: less or equal (signed <=) */

loc_0008538E: ;
    ebx = esp + 0x64;

loc_00085392: ;
    edx = MEM32(esp + ebp * 4 + 0x44);
    ecx = esp + 0x14;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x000853A3u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000853A3: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00085442; /* je: equal / zero */

loc_000853AD: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000853B3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000853B3: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008543E; /* je: equal / zero */

loc_000853D1: ;
    fp_push(MEMF(ebx + -8)); /* fld float */
    edx = MEM32(esi);
    fp_top() = fp_top() + MEMF(edi + 0x168); /* fadd dword ptr [edi + 0x168] */
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + -4)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 0x16C); /* fadd dword ptr [edi + 0x16c] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x170)); /* fld float */
    fp_top() = fp_top() + MEMF(ebx); /* fadd dword ptr [ebx] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00085403u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00085403: ;
    ecx = MEM32(edi + 0x174);
    ebp = MEM32(esp + 0x10);
    fp_push(MEMF(esp + ebp * 4 + 0x34)); /* fld float */
    edx = MEM32(edi + 0x178);
    fp_top() = fp_top() + MEMF(edi + 0x17C); /* fadd dword ptr [edi + 0x17c] */
    eax = MEM32(esi);
    MEM32(esp + 0x28) = ecx;
    ecx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    MEM32(esp + 0x30) = edx;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x00085435u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00085435: ;
    ecx = esi;
    PUSH32(esp, 0x0008543Cu); RECOMP_ABI_CALL(0x00034940u, sub_00034940); /* call 0x00034940 */

loc_0008543C: ;
    goto loc_00085442;

loc_0008543E: ;
    ebp = MEM32(esp + 0x10);

loc_00085442: ;
    eax = MEM32(esp + 0x58);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_00085392; /* jl: less (signed <) */

loc_00085456: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x7C;
    esp += 4; return; /* ret */

loc_0008545E: ;
    ebx = 0; /* xor self */
    edi = edi + 0x48;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    MEM32(esp + 0x10) = edi;
    /* nop */

loc_00085470: ;
    _fa = (uint32_t)(MEM32(esp + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x58), ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00085501; /* jle: less or equal (signed <=) */

loc_0008547A: ;
    fp_push(MEMF(0x5BC9D0)); /* fld float */
    fp_push(MEMF(edi + -8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000854AF; /* jp: parity */

loc_0008548C: ;
    fp_push(MEMF(0x5BC9D4)); /* fld float */
    fp_push(MEMF(edi + -4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000854AF; /* jp: parity */

loc_0008549E: ;
    fp_push(MEMF(0x5BC9D8)); /* fld float */
    fp_push(MEMF(edi)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00085501; /* jnp: not parity */

loc_000854AF: ;
    edx = MEM32(esp + ebx * 4 + 0x44);
    ecx = esp + 0x14;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x000854C0u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000854C0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000854EE; /* je: equal / zero */

loc_000854C6: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000854CCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000854CC: ;
    edx = MEM32(0x48D8FC);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000854EE; /* je: equal / zero */

loc_000854EA: ;
    ecx = esi;
    goto loc_000854F0;

loc_000854EE: ;
    ecx = 0; /* xor self */

loc_000854F0: ;
    edx = MEM32(ecx);
    eax = edi + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = edi + -8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000854FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000854FD: ;
    MEM32(esp + 0x14) = ebx;

loc_00085501: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00085470; /* jl: less (signed <) */

loc_0008550E: ;
    ebp = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    MEM32(esp + 0x10) = ebp;
    goto loc_00085520;

    /* nop */

loc_00085520: ;
    _fa = (uint32_t)(MEM32(esp + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x58), ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00085614; /* jle: less or equal (signed <=) */

loc_0008552A: ;
    fp_push(MEMF(0x5BC9D0)); /* fld float */
    fp_push(MEMF(ebp + -8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00085614; /* jp: parity */

loc_00085540: ;
    fp_push(MEMF(0x5BC9D4)); /* fld float */
    fp_push(MEMF(ebp + -4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00085614; /* jp: parity */

loc_00085556: ;
    fp_push(MEMF(0x5BC9D8)); /* fld float */
    fp_push(MEMF(ebp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00085614; /* jp: parity */

loc_0008556C: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00085614; /* jle: less or equal (signed <=) */

loc_00085579: ;
    ecx = MEM32(esp + eax * 4 + 0x44);
    MEM32(esp + 0x18) = ecx;
    ecx = esp + 0x18;
    PUSH32(esp, 0x0008558Au); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0008558A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000855B8; /* je: equal / zero */

loc_00085590: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00085596u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00085596: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000855B8; /* je: equal / zero */

loc_000855B4: ;
    edi = esi;
    goto loc_000855BA;

loc_000855B8: ;
    edi = 0; /* xor self */

loc_000855BA: ;
    eax = MEM32(esp + ebx * 4 + 0x44);
    ecx = esp + 0x18;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000855CBu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000855CB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00085614; /* je: equal / zero */

loc_000855D1: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000855D7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000855D7: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00085610; /* je: equal / zero */

loc_000855F5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00085610; /* je: equal / zero */

loc_000855F9: ;
    eax = MEM32(esi);
    PUSH32(esp, 0x5BC9D0);
    edi = edi + 0x20;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00085609u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00085609: ;
    ecx = esi;
    PUSH32(esp, 0x00085610u); RECOMP_ABI_CALL(0x00034940u, sub_00034940); /* call 0x00034940 */

loc_00085610: ;
    ebp = MEM32(esp + 0x10);

loc_00085614: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_00085520; /* jl: less (signed <) */

loc_00085625: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x7C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00085630
 * Original: 0x00085630 - 0x00085699 (105 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085630(void)
{

loc_00085630: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(esi + 1) = LO8(eax);
    MEM8(esi + 0x61) = LO8(eax);
    ecx = esi + 0x130;
    MEM8(esi + 0xC1) = LO8(eax);
    PUSH32(esp, 0x0008564Cu); RECOMP_ABI_CALL(0x000851D0u, sub_000851D0); /* call 0x000851D0 */

loc_0008564C: ;
    ecx = esi + 0x1B8;
    PUSH32(esp, 0x00085657u); RECOMP_ABI_CALL(0x000851D0u, sub_000851D0); /* call 0x000851D0 */

loc_00085657: ;
    ecx = esi + 0x240;
    PUSH32(esp, 0x00085662u); RECOMP_ABI_CALL(0x000851C0u, sub_000851C0); /* call 0x000851C0 */

loc_00085662: ;
    ecx = esi + 0x448;
    PUSH32(esp, 0x0008566Du); RECOMP_ABI_CALL(0x000851D0u, sub_000851D0); /* call 0x000851D0 */

loc_0008566D: ;
    ecx = esi + 0x4D0;
    PUSH32(esp, 0x00085678u); RECOMP_ABI_CALL(0x000851D0u, sub_000851D0); /* call 0x000851D0 */

loc_00085678: ;
    ecx = esi + 0x558;
    PUSH32(esp, 0x00085683u); RECOMP_ABI_CALL(0x000851D0u, sub_000851D0); /* call 0x000851D0 */

loc_00085683: ;
    ecx = esi + 0x5E0;
    PUSH32(esp, 0x0008568Eu); RECOMP_ABI_CALL(0x000851D0u, sub_000851D0); /* call 0x000851D0 */

loc_0008568E: ;
    ecx = esi;
    PUSH32(esp, 0x00085695u); RECOMP_ABI_CALL(0x000849C0u, sub_000849C0); /* call 0x000849C0 */

loc_00085695: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000856A0
 * Original: 0x000856A0 - 0x00085A54 (948 bytes, 230 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000856A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000856A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F672);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0xD8;
    ecx = esp + 0x74;
    PUSH32(esp, 0x000856C4u); RECOMP_ABI_CALL(0x00127350u, sub_00127350); /* call 0x00127350 */

loc_000856C4: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CF054);
    ecx = esp + 0x2C;
    MEM32(esp + 0xE8) = 0;
    PUSH32(esp, 0x000856DFu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000856DF: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x80;
    MEM8(esp + 0xEC) = 1;
    PUSH32(esp, 0x000856FCu); RECOMP_ABI_CALL(0x00127510u, sub_00127510); /* call 0x00127510 */

loc_000856FC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00085739; /* jne: not equal / not zero */

loc_00085700: ;
    ecx = esp + 0x24;
    MEM8(esp + 0xE0) = LO8(eax);
    PUSH32(esp, 0x00085710u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00085710: ;
    ecx = esp + 0x74;
    MEM32(esp + 0xE0) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00085724u); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_00085724: ;
    ecx = MEM32(esp + 0xD8);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xE4;
    esp += 4; return; /* ret */

loc_00085739: ;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CF048);
    ecx = esp + 0x20;
    PUSH32(esp, 0x0008574Au); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0008574A: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esp + 0x7C;
    MEM8(esp + 0xE8) = 2;
    PUSH32(esp, 0x00085760u); RECOMP_ABI_CALL(0x00125F00u, sub_00125F00); /* call 0x00125F00 */

loc_00085760: ;
    ecx = esp + 0x18;
    esi = eax;
    MEM8(esp + 0xE4) = 1;
    PUSH32(esp, 0x00085773u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00085773: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000857B2; /* jne: not equal / not zero */

loc_00085777: ;
    ecx = esp + 0x28;
    MEM8(esp + 0xE4) = 0;
    PUSH32(esp, 0x00085788u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00085788: ;
    ecx = esp + 0x78;
    MEM32(esp + 0xE4) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0008579Cu); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_0008579C: ;
    POP32(esp, esi);
    ecx = MEM32(esp + 0xD8);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xE4;
    esp += 4; return; /* ret */

loc_000857B2: ;
    edx = MEM32(0x49E804);
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM8(esp + 7) = (TEST_NZ(_fa, _fb)) ? 1 : 0; /* setne */
    edx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CF040);
    ecx = esp + 0x2C;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi & edx;
    MEM32(esp + 0x28) = esi;
    PUSH32(esp, 0x000857E4u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000857E4: ;
    PUSH32(esp, 0);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esp + 0xF8) = 3;
    PUSH32(esp, 0x000857FAu); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000857FA: ;
    ecx = esp + 0x24;
    ebx = eax;
    MEM8(esp + 0xF0) = 1;
    PUSH32(esp, 0x0008580Du); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0008580D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00085A13; /* je: equal / zero */

loc_00085815: ;
    MEM32(esp + 0x14) = 0;
    /* nop */

loc_00085820: ;
    eax = MEM32(ebx + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C8690);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & ebx;
    ebp = ecx;
    ecx = esp + 0x7C;
    PUSH32(esp, 0x00085840u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00085840: ;
    edx = esp + 0x74;
    PUSH32(esp, edx);
    ecx = ebp;
    MEM8(esp + 0xF4) = 4;
    PUSH32(esp, 0x00085854u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00085854: ;
    ecx = esp + 0x74;
    esi = eax;
    MEM8(esp + 0xF0) = 1;
    PUSH32(esp, 0x00085867u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00085867: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000859D1; /* je: equal / zero */

loc_0008586F: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00085958; /* jne: not equal / not zero */

loc_0008587B: ;
    _fa = (uint32_t)(MEM32(0x49E804)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x49E804), 0xFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00085A13; /* je: equal / zero */

loc_0008588B: ;
    ecx = esi;
    PUSH32(esp, 0x00085892u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00085892: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    eax = esp + 0xD0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000858A2u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000858A2: ;
    edi = MEM32(0x49E804);
    edi = edi << 5;
    esp = esp + 0xC;
    edi = edi + 0x49C820;
    ecx = 8;
    esi = esp + 0xC8;
    MEM8(esp + 0xE7) = 0;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    eax = MEM32(0x49E804);
    PUSH32(esp, 2);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3CF034);
    ecx = esp + 0x6C;
    MEM32(0x49E804) = eax;
    PUSH32(esp, 0x000858E5u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000858E5: ;
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM8(esp + 0xF4) = 5;
    PUSH32(esp, 0x000858F9u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000858F9: ;
    ecx = esp + 0x64;
    esi = eax;
    MEM8(esp + 0xF0) = 1;
    PUSH32(esp, 0x0008590Cu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0008590C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00085933; /* je: equal / zero */

loc_00085910: ;
    ecx = esi;
    PUSH32(esp, 0x00085917u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00085917: ;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00085921u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_00085921: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(0x49EC98);
    MEM32(eax * 4 + 0x49E898) = edx;
    goto loc_00085952;

loc_00085933: ;
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00085941u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_00085941: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(0x49EC98);
    MEM32(edx * 4 + 0x49E898) = ecx;

loc_00085952: ;
    MEM32(0x49EC98) = MEM32(0x49EC98) + 1;
    _fa = (uint32_t)(MEM32(0x49EC98)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00085958: ;
    edi = MEM32(esp + 0x14);
    PUSH32(esp, 2);
    edi = edi + 2;
    PUSH32(esp, 0x3CF024);
    ecx = esp + 0x4C;
    MEM32(esp + 0x1C) = edi;
    PUSH32(esp, 0x00085973u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00085973: ;
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM8(esp + 0xF4) = 6;
    PUSH32(esp, 0x00085987u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00085987: ;
    ecx = esp + 0x44;
    esi = eax;
    MEM8(esp + 0xF0) = 1;
    PUSH32(esp, 0x0008599Au); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0008599A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000859D1; /* je: equal / zero */

loc_0008599E: ;
    PUSH32(esp, 0x3CB744);
    ecx = esi;
    PUSH32(esp, 0x000859AAu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000859AA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000859B0u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000859B0: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000859D1; /* jne: not equal / not zero */

loc_000859B7: ;
    ecx = edi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = ecx * 4 + 0x49E810;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    MEM32(eax) = MEM32(eax) | edx;

loc_000859D1: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CF040);
    ecx = esp + 0x5C;
    PUSH32(esp, 0x000859E1u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000859E1: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    MEM8(esp + 0xF8) = 7;
    PUSH32(esp, 0x000859F8u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000859F8: ;
    ecx = esp + 0x54;
    ebx = eax;
    MEM8(esp + 0xF0) = 1;
    PUSH32(esp, 0x00085A0Bu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00085A0B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00085820; /* jne: not equal / not zero */

loc_00085A13: ;
    ecx = esp + 0x34;
    MEM8(esp + 0xF0) = 0;
    PUSH32(esp, 0x00085A24u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00085A24: ;
    ecx = esp + 0x84;
    MEM32(esp + 0xF0) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00085A3Bu); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_00085A3B: ;
    ecx = MEM32(esp + 0xE8);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xE4;
    esp += 4; return; /* ret */

}

/**
 * sub_00085A60
 * Original: 0x00085A60 - 0x00085CA1 (577 bytes, 168 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085A60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00085A60: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F6A9);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx + 0x66C;
    MEM32(esp + 0x10) = ecx;
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    ecx = ebp;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0x00085A93u); RECOMP_ABI_CALL(0x00084CC0u, sub_00084CC0); /* call 0x00084CC0 */

loc_00085A93: ;
    MEM32(ebp + 0x1BC4) = esi;
    eax = 0; /* xor self */
    edx = 0xFFFFF000u;
    SET_LO8(ecx, 0xF0);
    goto loc_00085AB0;

    /* nop */
    goto loc_00085AB0;

    /* nop */

loc_00085AB0: ;
    SET_LO8(ebx, MEM8(eax + 0x49E852));
    MEM16(eax + 0x49E850) = MEM16(eax + 0x49E850) & LO16(edx);
    SET_LO8(ebx, LO8(ebx) & LO8(ecx));
    MEM8(eax + 0x49E852) = LO8(ebx);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00085AB0; /* jb: below (unsigned <) */

loc_00085ACD: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CF070);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00085ADDu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00085ADD: ;
    ecx = MEM32(esp + 0x60);
    PUSH32(esp, esi);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    MEM32(esp + 0x60) = esi;
    PUSH32(esp, 0x00085AF0u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_00085AF0: ;
    ecx = esp + 0x20;
    ebx = eax;
    MEM32(esp + 0x58) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00085B03u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00085B03: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00085C73; /* je: equal / zero */

loc_00085B0B: ;
    goto loc_00085B10;

    /* nop */

loc_00085B10: ;
    eax = MEM32(ebx + 8);
    ecx = 0; /* xor self */
    edi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C8690);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & ebx;
    esi = ecx;
    ecx = esp + 0x38;
    PUSH32(esp, 0x00085B34u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00085B34: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x5C) = edi;
    PUSH32(esp, 0x00085B44u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00085B44: ;
    ecx = esp + 0x30;
    edi = eax;
    MEM32(esp + 0x58) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00085B57u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00085B57: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00085C31; /* je: equal / zero */

loc_00085B5F: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(eax + 0x2230)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2230), 0x10 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00085C8A; /* jae: above or equal (unsigned >=) */

loc_00085B70: ;
    edi = MEM32(ebp + 0x1BC4);
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1BC);
    ecx = ecx + ebp;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x58) = 2;
    if ((ecx == 0)) goto loc_00085B97; /* je: equal / zero */

loc_00085B92: ;
    PUSH32(esp, 0x00085B97u); RECOMP_ABI_CALL(0x00084520u, sub_00084520); /* call 0x00084520 */

loc_00085B97: ;
    ecx = edi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = ebp + ecx * 4 + 0x1BC0;
    ecx = edi;
    edi = MEM32(eax);
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    MEM32(esp + 0x58) = 0xFFFFFFFFu;
    edi = edi | edx;
    MEM32(eax) = edi;
    ecx = MEM32(ebp + 0x1BC4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1BC);
    edi = eax + ebp + -444;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(ebp + 0x1BC4) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00085C31; /* je: equal / zero */

loc_00085BDD: ;
    SET_LO8(ecx, MEM8(edi));
    eax = MEM32(esp + 0x10);
    SET_LO8(edx, MEM8(edi));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xF);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    eax = esi + 0x2C;
    MEM8(edi) = LO8(edx);
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00085C31; /* je: equal / zero */

loc_00085BFD: ;
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00085C31; /* je: equal / zero */

loc_00085C03: ;
    ecx = esi + 4;
    PUSH32(esp, 0x00085C0Bu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00085C0B: ;
    ecx = esi + 0x14;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x00085C17u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00085C17: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00085C24u); RECOMP_ABI_CALL(0x00084740u, sub_00084740); /* call 0x00084740 */

loc_00085C24: ;
    ecx = esi;
    PUSH32(esp, 0x00085C2Bu); RECOMP_ABI_CALL(0x00125BD0u, sub_00125BD0); /* call 0x00125BD0 */

loc_00085C2B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00085C03; /* jne: not equal / not zero */

loc_00085C31: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CF070);
    ecx = esp + 0x48;
    PUSH32(esp, 0x00085C41u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00085C41: ;
    ecx = MEM32(esp + 0x60);
    PUSH32(esp, ebx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    MEM32(esp + 0x60) = 3;
    PUSH32(esp, 0x00085C58u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_00085C58: ;
    ecx = esp + 0x40;
    ebx = eax;
    MEM32(esp + 0x58) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00085C6Bu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00085C6B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00085B10; /* jne: not equal / not zero */

loc_00085C73: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x40);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x4C;
    esp += 8; return; /* ret 4 */

loc_00085C8A: ;
    ecx = MEM32(esp + 0x50);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x4C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00085CB0
 * Original: 0x00085CB0 - 0x00085CED (61 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085CB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = ZX8(MEM8(edi + 0x180));
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00085CC7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00085CC7: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00085CCEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00085CCE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, 1);
    if (TEST_Z(_fa, _fb)) goto loc_00085CE8; /* je: equal / zero */

loc_00085CD4: ;
    esi = edi + 0x126;
    ecx = 0x10;
    edi = 0x49E850;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */

loc_00085CE8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00085CF0
 * Original: 0x00085CF0 - 0x00085E59 (361 bytes, 106 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085CF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00085CF0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F6D8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x54;
    eax = MEM32(esp + 0x68);
    PUSH32(esp, ebp);
    PUSH32(esp, 2);
    MEM32(esp + 8) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00085D1Du); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00085D1D: ;
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x70);
    MEM32(esp + 0x68) = 0;
    PUSH32(esp, 0x00085D35u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_00085D35: ;
    ecx = esp + 8;
    ebp = eax;
    MEM32(esp + 0x60) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00085D48u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00085D48: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00085E45; /* je: equal / zero */

loc_00085D50: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x74);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_00085D60;

    /* nop */

loc_00085D60: ;
    eax = MEM32(ebp + 8);
    edx = 0; /* xor self */
    edi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C8690);
    ecx = esp + 0x2C;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & ebp;
    esi = edx;
    PUSH32(esp, 0x00085D84u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00085D84: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x70) = edi;
    PUSH32(esp, 0x00085D94u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00085D94: ;
    ecx = esp + 0x24;
    esi = eax;
    MEM32(esp + 0x6C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00085DA7u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00085DA7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00085E00; /* je: equal / zero */

loc_00085DAB: ;
    ecx = esi;
    PUSH32(esp, 0x00085DB2u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00085DB2: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00085DBDu); RECOMP_ABI_CALL(0x00085140u, sub_00085140); /* call 0x00085140 */

loc_00085DBD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00085E00; /* jne: not equal / not zero */

loc_00085DC1: ;
    ecx = esi;
    PUSH32(esp, 0x00085DC8u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00085DC8: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00085DD5u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00085DD5: ;
    edi = MEM32(ebx + 0x84);
    edi = edi << 5;
    edi = edi + ebx;
    ecx = 8;
    esi = esp + 0x50;
    MEM8(esp + 0x6F) = 0;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    eax = MEM32(ebx + 0x84);
    esp = esp + 0xC;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 0x84) = eax;

loc_00085E00: ;
    edx = MEM32(esp + 0x78);
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x00085E10u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00085E10: ;
    ecx = MEM32(esp + 0x74);
    PUSH32(esp, ebp);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    MEM32(esp + 0x74) = 2;
    PUSH32(esp, 0x00085E27u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_00085E27: ;
    ecx = esp + 0x34;
    ebp = eax;
    MEM32(esp + 0x6C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00085E3Au); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00085E3A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00085D60; /* jne: not equal / not zero */

loc_00085E42: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00085E45: ;
    ecx = MEM32(esp + 0x58);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x60;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00085E60
 * Original: 0x00085E60 - 0x00085FC5 (357 bytes, 103 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085E60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00085E60: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F708);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x54;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebp);
    MEM32(esp + 0x54) = eax;
    eax = MEM32(esp + 0x6C);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    MEM8(esp + 0x3C) = 0;
    PUSH32(esp, 0x00085E97u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00085E97: ;
    PUSH32(esp, 0);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x70);
    MEM32(esp + 0x68) = 0;
    PUSH32(esp, 0x00085EAFu); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_00085EAF: ;
    ecx = esp + 0x24;
    ebp = eax;
    MEM32(esp + 0x60) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00085EC2u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00085EC2: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00085FA8; /* je: equal / zero */

loc_00085ECA: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x74);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00085ED1: ;
    eax = MEM32(ebp + 8);
    edx = 0; /* xor self */
    edi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C8690);
    ecx = esp + 0x18;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & ebp;
    esi = edx;
    PUSH32(esp, 0x00085EF5u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00085EF5: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x70) = edi;
    PUSH32(esp, 0x00085F05u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00085F05: ;
    ecx = esp + 0x10;
    esi = eax;
    MEM32(esp + 0x6C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00085F18u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00085F18: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00085F63; /* je: equal / zero */

loc_00085F1C: ;
    ecx = esi;
    PUSH32(esp, 0x00085F23u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00085F23: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00085F30u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00085F30: ;
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    MEM8(esp + 0x6F) = 0;
    PUSH32(esp, 0x00085F3Fu); RECOMP_ABI_CALL(0x003444C3u, sub_003444C3); /* call 0x003444C3 */

loc_00085F3F: ;
    edi = MEM32(ebx + 0x204);
    esp = esp + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00085F63; /* je: equal / zero */

loc_00085F4D: ;
    edi = edi << 5;
    edi = edi + ebx;
    ecx = 8;
    esi = esp + 0x40;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEM32(ebx + 0x204) = MEM32(ebx + 0x204) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0x204)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00085F63: ;
    eax = MEM32(esp + 0x78);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00085F73u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00085F73: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x7C);
    MEM32(esp + 0x74) = 2;
    PUSH32(esp, 0x00085F8Au); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_00085F8A: ;
    ecx = esp + 0x20;
    ebp = eax;
    MEM32(esp + 0x6C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00085F9Du); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00085F9D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00085ED1; /* jne: not equal / not zero */

loc_00085FA5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00085FA8: ;
    ecx = MEM32(esp + 0x58);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x54);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    PUSH32(esp, 0x00085FBFu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00085FBF: ;
    esp = esp + 0x60;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00085FD0
 * Original: 0x00085FD0 - 0x00085FD9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085FD0(void)
{

loc_00085FD0: ;
    SET_LO8(eax, MEM8(ecx + 0x2234));
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00085FE0
 * Original: 0x00085FE0 - 0x00085FE8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085FE0(void)
{

loc_00085FE0: ;
    MEM8(ecx + 0x2234) = MEM8(ecx + 0x2234) & 0xFE;
    esp += 4; return; /* ret */

}

/**
 * sub_00085FF0
 * Original: 0x00085FF0 - 0x00085FF6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085FF0(void)
{

loc_00085FF0: ;
    eax = 0x49C508;
    esp += 4; return; /* ret */

}

/**
 * sub_00086000
 * Original: 0x00086000 - 0x0008606F (111 bytes, 28 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086000: ;
    eax = MEM32(0x49C500);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008606E; /* jne: not equal / not zero */

loc_00086009: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x22);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x2268);
    PUSH32(esp, 0x00086018u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_00086018: ;
    esi = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00086053; /* je: equal / zero */

loc_00086021: ;
    ecx = esi + 4;
    MEM32(esi) = 0x3CF084;
    PUSH32(esp, 0x0008602Fu); RECOMP_ABI_CALL(0x00085630u, sub_00085630); /* call 0x00085630 */

loc_0008602F: ;
    MEM32(esi + 0x222C) = 0;
    MEM32(esi + 0x2230) = 0;
    MEM8(esi + 0x2235) = 0;
    MEM8(esi + 0x2234) = MEM8(esi + 0x2234) & 0xFE;
    goto loc_00086055;

loc_00086053: ;
    esi = 0; /* xor self */

loc_00086055: ;
    PUSH32(esp, 0x842F0);
    MEM32(0x49C500) = esi;
    PUSH32(esp, 0x00086065u); RECOMP_ABI_CALL(0x000119F0u, sub_000119F0); /* call 0x000119F0 */

loc_00086065: ;
    eax = MEM32(0x49C500);
    esp = esp + 4;
    POP32(esp, esi);

loc_0008606E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00086070
 * Original: 0x00086070 - 0x00086083 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086070(void)
{

loc_00086070: ;
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 2);
    PUSH32(esp, 0x184);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00086082u); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_00086082: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00086090
 * Original: 0x00086090 - 0x000860CF (63 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086090: ;
    PUSH32(esp, 0x00086095u); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_00086095: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0008609Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008609C: ;
    ecx = MEM32(eax + 0x30C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000860CE; /* jle: less or equal (signed <=) */

loc_000860A6: ;
    PUSH32(esp, 0x000860ABu); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_000860AB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x000860B2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000860B2: ;
    MEM32(eax + 0x30C) = MEM32(eax + 0x30C) - 1;
    _fa = (uint32_t)(MEM32(eax + 0x30C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x000860BDu); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_000860BD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x000860C4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000860C4: ;
    ecx = MEM32(eax + 0x30C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_000860A6; /* jg: greater (signed >) */

loc_000860CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000860D0
 * Original: 0x000860D0 - 0x0008611C (76 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000860D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000860D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x000860D8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000860D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008610B; /* je: equal / zero */

loc_000860DC: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000860E4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000860E4: ;
    SET_LO8(ecx, MEM8(eax));
    eax = MEM32(esp + 0xC);
    MEM8(eax + 0x180) = LO8(ecx);
    edi = eax + 0x126;
    ecx = 0x10;
    esi = 0x49E850;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0008610B: ;
    edx = MEM32(esp + 8);
    MEM8(edx + 0x180) = 0xFF;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00086120
 * Original: 0x00086120 - 0x000861F8 (216 bytes, 68 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086120(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00086120: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ebp = 0; /* xor self */
    eax = esi + 0x130;
    PUSH32(esp, eax);
    MEM32(esi + 0x444) = ebp;
    MEM32(esi + 0x1B4) = ebp;
    PUSH32(esp, 0x3CF13C);
    MEM32(esi + 0x23C) = ebp;
    PUSH32(esp, edi);
    MEM32(esi + 0x4CC) = ebp;
    PUSH32(esp, 0x00086156u); RECOMP_ABI_CALL(0x00085CF0u, sub_00085CF0); /* call 0x00085CF0 */

loc_00086156: ;
    ecx = esi + 0x240;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CF12C);
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, edi);
    ecx = esi;
    SET_LO8(ebx, LO8(ebx) & 1);
    PUSH32(esp, 0x0008616Fu); RECOMP_ABI_CALL(0x00085E60u, sub_00085E60); /* call 0x00085E60 */

loc_0008616F: ;
    edx = esi + 0x1B8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3CF11C);
    PUSH32(esp, edi);
    ecx = esi;
    SET_LO8(ebx, LO8(ebx) & LO8(eax));
    PUSH32(esp, 0x00086185u); RECOMP_ABI_CALL(0x00085CF0u, sub_00085CF0); /* call 0x00085CF0 */

loc_00086185: ;
    SET_LO8(ebx, LO8(ebx) & LO8(eax));
    eax = esi + 0x448;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CF10C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0008619Bu); RECOMP_ABI_CALL(0x00085CF0u, sub_00085CF0); /* call 0x00085CF0 */

loc_0008619B: ;
    ecx = esi + 0x4D0;
    PUSH32(esp, ecx);
    MEM32(esi + 0x554) = ebp;
    PUSH32(esp, 0x3CF0FC);
    MEM32(esi + 0x5DC) = ebp;
    PUSH32(esp, edi);
    ecx = esi;
    SET_LO8(ebx, LO8(ebx) & LO8(eax));
    MEM32(esi + 0x664) = ebp;
    PUSH32(esp, 0x000861C3u); RECOMP_ABI_CALL(0x00085CF0u, sub_00085CF0); /* call 0x00085CF0 */

loc_000861C3: ;
    edx = esi + 0x558;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3CF0E8);
    PUSH32(esp, edi);
    ecx = esi;
    SET_LO8(ebx, LO8(ebx) & LO8(eax));
    PUSH32(esp, 0x000861D9u); RECOMP_ABI_CALL(0x00085CF0u, sub_00085CF0); /* call 0x00085CF0 */

loc_000861D9: ;
    SET_LO8(ebx, LO8(ebx) & LO8(eax));
    eax = esi + 0x5E0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CF0D4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000861EFu); RECOMP_ABI_CALL(0x00085CF0u, sub_00085CF0); /* call 0x00085CF0 */

loc_000861EF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(eax) & LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00086200
 * Original: 0x00086200 - 0x0008625A (90 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086200(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00086200: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    ebx = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00086213; /* jne: not equal / not zero */

loc_0008620C: ;
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00086213: ;
    eax = ebp + 0x2C;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008624C; /* je: equal / zero */

loc_0008621E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008624C; /* je: equal / zero */

loc_00086222: ;
    PUSH32(esp, edi);

loc_00086223: ;
    ecx = esi + 4;
    PUSH32(esp, 0x0008622Bu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0008622B: ;
    ecx = esi + 0x14;
    edi = eax;
    PUSH32(esp, 0x00086235u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00086235: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0008623Eu); RECOMP_ABI_CALL(0x00084A30u, sub_00084A30); /* call 0x00084A30 */

loc_0008623E: ;
    ecx = esi;
    PUSH32(esp, 0x00086245u); RECOMP_ABI_CALL(0x00125BD0u, sub_00125BD0); /* call 0x00125BD0 */

loc_00086245: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00086223; /* jne: not equal / not zero */

loc_0008624B: ;
    POP32(esp, edi);

loc_0008624C: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x00086254u); RECOMP_ABI_CALL(0x00086120u, sub_00086120); /* call 0x00086120 */

loc_00086254: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00086260
 * Original: 0x00086260 - 0x00086529 (713 bytes, 214 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086260(void)
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

loc_00086260: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x0008626Eu); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_0008626E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00086275u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086275: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008651F; /* je: equal / zero */

loc_0008627D: ;
    PUSH32(esp, 0x00086282u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_00086282: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00086289u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086289: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008651F; /* je: equal / zero */

loc_00086292: ;
    PUSH32(esp, 0x00086297u); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_00086297: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0008629Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008629E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000862AF; /* je: equal / zero */

loc_000862A2: ;
    PUSH32(esp, 0x000862A7u); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_000862A7: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000862AFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000862AF: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x000862B8u); RECOMP_ABI_CALL(0x000322B0u, sub_000322B0); /* call 0x000322B0 */

loc_000862B8: ;
    PUSH32(esp, 0x000862BDu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000862BD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xE0); PUSH32(esp, 0x000862D0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000862D0: ;
    edi = 0; /* xor self */
    esi = ebx + 0x54;

loc_000862D5: ;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x28), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00086382; /* jle: less or equal (signed <=) */

loc_000862DF: ;
    edx = MEM32(esp + edi * 4 + 0x14);
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x000862F0u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000862F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00086382; /* je: equal / zero */

loc_000862F8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000862FEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000862FE: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00086382; /* je: equal / zero */

loc_0008631C: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + edi * 4 + 0x18);
    eax = esp;
    MEM32(esp + 0x14) = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x0008632Eu); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_0008632E: ;
    fp_push(MEMF(eax + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    esp = esp + 4;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00086382; /* jne: not equal / not zero */

loc_00086344: ;
    edx = MEM32(esp + edi * 4 + 0x14);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(esp + 0x14) = esp;
    MEM32(eax) = edx;
    PUSH32(esp, 0x00086356u); RECOMP_ABI_CALL(0x00029470u, sub_00029470); /* call 0x00029470 */

loc_00086356: ;
    edx = MEM32(eax);
    esp = esp + 4;
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00086360u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086360: ;
    ecx = MEM32(eax);
    MEM32(esi + -20) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + -16) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esi + -12) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(esi + -8) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + -4) = ecx;
    edx = MEM32(eax + 0x14);
    goto loc_000863B3;

loc_00086382: ;
    eax = MEM32(0x5BC9D0);
    MEM32(esi + -20) = eax;
    ecx = MEM32(0x5BC9D4);
    MEM32(esi + -16) = ecx;
    edx = MEM32(0x5BC9D8);
    MEM32(esi + -12) = edx;
    eax = MEM32(0x5BC9D0);
    MEM32(esi + -8) = eax;
    ecx = MEM32(0x5BC9D4);
    MEM32(esi + -4) = ecx;
    edx = MEM32(0x5BC9D8);

loc_000863B3: ;
    MEM32(esi) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000862D5; /* jl: less (signed <) */

loc_000863C2: ;
    ebp = 0; /* xor self */
    edi = ebx + 0xA4;
    /* nop */

loc_000863D0: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000863DDu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000863DD: ;
    esp = esp + 0xC;
    MEM8(edi + 0x1F) = 0;
    PUSH32(esp, 0x000863E9u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000863E9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xB8); PUSH32(esp, 0x000863F4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000863F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008643B; /* je: equal / zero */

loc_000863F8: ;
    PUSH32(esp, 0x000863FDu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000863FD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xB8); PUSH32(esp, 0x00086408u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086408: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00086415; /* jne: not equal / not zero */

loc_0008640E: ;
    eax = 0x3C806C;
    goto loc_0008642B;

loc_00086415: ;
    PUSH32(esp, 0x0008641Au); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0008641A: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x8008;

loc_0008642B: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00086434u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00086434: ;
    esp = esp + 0xC;
    MEM8(edi + 0x1F) = 0;

loc_0008643B: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000863D0; /* jl: less (signed <) */

loc_00086444: ;
    edx = MEM32(esp + 0x30);
    ecx = esp + 0x30;
    MEM32(esp + 0x30) = edx;
    PUSH32(esp, 0x00086455u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_00086455: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000864BD; /* je: equal / zero */

loc_0008645B: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00086461u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086461: ;
    edx = MEM32(0x48D8FC);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000864BD; /* je: equal / zero */

loc_0008647F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00086486u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086486: ;
    ecx = MEM32(eax);
    MEM32(ebx + 0x168) = ecx;
    edx = MEM32(eax + 4);
    MEM32(ebx + 0x16C) = edx;
    ecx = MEM32(eax + 8);
    MEM32(ebx + 0x170) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(ebx + 0x174) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(ebx + 0x178) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(ebx + 0x17C) = edx;
    goto loc_00086503;

loc_000864BD: ;
    eax = MEM32(0x5BC9D0);
    MEM32(ebx + 0x174) = eax;
    ecx = MEM32(0x5BC9D4);
    MEM32(ebx + 0x178) = ecx;
    edx = MEM32(0x5BC9D8);
    MEM32(ebx + 0x17C) = edx;
    eax = MEM32(0x5BC9D0);
    MEM32(ebx + 0x168) = eax;
    ecx = MEM32(0x5BC9D4);
    MEM32(ebx + 0x16C) = ecx;
    edx = MEM32(0x5BC9D8);
    MEM32(ebx + 0x170) = edx;

loc_00086503: ;
    PUSH32(esp, 0x00086508u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_00086508: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0008650Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008650F: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00086518u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00086518: ;
    esp = esp + 0xC;
    MEM8(ebx + 0x3F) = 0;

loc_0008651F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00086530
 * Original: 0x00086530 - 0x00086558 (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086530(void)
{

loc_00086530: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 0x83400);
    PUSH32(esp, 2);
    esi = ecx;
    PUSH32(esp, 0x184);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008654Au); RECOMP_ABI_CALL(0x003418A8u, sub_003418A8); /* call 0x003418A8 */

loc_0008654A: ;
    MEM32(esi + 0x30C) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00086560
 * Original: 0x00086560 - 0x0008674E (494 bytes, 124 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086560(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00086560: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F741);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x128;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x144);
    ebp = ecx;
    ecx = edi;
    MEM32(esp + 0x130) = eax;
    PUSH32(esp, 0x0008659Au); RECOMP_ABI_CALL(0x000849C0u, sub_000849C0); /* call 0x000849C0 */

loc_0008659A: ;
    SET_LO8(eax, MEM8(esp + 0x148));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000865A7; /* je: equal / zero */

loc_000865A5: ;
    MEM8(edi) = LO8(eax);

loc_000865A7: ;
    ecx = esp + 0x2C;
    PUSH32(esp, 0x000865B0u); RECOMP_ABI_CALL(0x00127350u, sub_00127350); /* call 0x00127350 */

loc_000865B0: ;
    eax = ZX8(MEM8(edi));
    eax = eax << 5;
    eax = eax + 0x49C820;
    PUSH32(esp, eax);
    eax = esp + 0xD4;
    PUSH32(esp, 0x3CEE78);
    PUSH32(esp, eax);
    MEM32(esp + 0x148) = 0;
    MEM8(esp + 0xDC) = 0;
    PUSH32(esp, 0x000865E1u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_000865E1: ;
    PUSH32(esp, 0x60);
    ecx = esp + 0xE0;
    PUSH32(esp, ecx);
    edx = esp + 0x84;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000865F8u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000865F8: ;
    esp = esp + 0x18;
    PUSH32(esp, 2);
    eax = esp + 0x74;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    MEM8(esp + 0xD7) = 0;
    PUSH32(esp, 0x00086613u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00086613: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ebx = 1;
    ecx = esp + 0x38;
    MEM8(esp + 0x148) = LO8(ebx);
    PUSH32(esp, 0x00086631u); RECOMP_ABI_CALL(0x00127510u, sub_00127510); /* call 0x00127510 */

loc_00086631: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00086660; /* jne: not equal / not zero */

loc_00086635: ;
    ecx = esp + 0xC;
    MEM8(esp + 0x13C) = LO8(eax);
    PUSH32(esp, 0x00086645u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00086645: ;
    ecx = esp + 0x2C;
    MEM32(esp + 0x13C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00086659u); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_00086659: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_00086728;

loc_00086660: ;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CF040);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00086671u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00086671: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esp + 0x34;
    MEM8(esp + 0x144) = 2;
    PUSH32(esp, 0x00086687u); RECOMP_ABI_CALL(0x00125F00u, sub_00125F00); /* call 0x00125F00 */

loc_00086687: ;
    ecx = esp + 0x20;
    esi = eax;
    MEM8(esp + 0x140) = LO8(ebx);
    PUSH32(esp, 0x00086699u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00086699: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000866C6; /* jne: not equal / not zero */

loc_0008669D: ;
    ecx = esp + 0x10;
    MEM8(esp + 0x140) = 0;
    PUSH32(esp, 0x000866AEu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000866AE: ;
    ecx = esp + 0x30;
    MEM32(esp + 0x140) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000866C2u); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_000866C2: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_00086727;

loc_000866C6: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = edi;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi & eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000866DBu); RECOMP_ABI_CALL(0x00086200u, sub_00086200); /* call 0x00086200 */

loc_000866DB: ;
    SET_LO8(ecx, MEM8(edi));
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(0x49E892)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(0x49E892) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000866F1; /* jne: not equal / not zero */

loc_000866E7: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x000866EFu); RECOMP_ABI_CALL(0x00085A60u, sub_00085A60); /* call 0x00085A60 */

loc_000866EF: ;
    SET_LO8(ebx, LO8(ebx) & LO8(eax));

loc_000866F1: ;
    edx = MEM32(esp + 0x14C);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x00086700u); RECOMP_ABI_CALL(0x00084FC0u, sub_00084FC0); /* call 0x00084FC0 */

loc_00086700: ;
    ecx = esp + 0x10;
    MEM8(esp + 0x140) = 0;
    PUSH32(esp, 0x00086711u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00086711: ;
    ecx = esp + 0x30;
    MEM32(esp + 0x140) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00086725u); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_00086725: ;
    SET_LO8(eax, LO8(ebx));

loc_00086727: ;
    POP32(esp, esi);

loc_00086728: ;
    ecx = MEM32(esp + 0x134);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x128);
    POP32(esp, ebx);
    PUSH32(esp, 0x00086745u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00086745: ;
    esp = esp + 0x134;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00086750
 * Original: 0x00086750 - 0x0008676E (30 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086750(void)
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

loc_00086750: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C97D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c97d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00086769; /* jp: parity */

loc_00086761: ;
    MEM32(esp + 8) = 0x3E4CCCCD;

loc_00086769: ;
    g_seh_ebp = ebp; sub_00027850(); return; /* tail jmp 0x00027850 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00086770
 * Original: 0x00086770 - 0x00086784 (20 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086770: ;
    SET_LO8(eax, MEM8(ecx + 0x254));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00086781; /* je: equal / zero */

loc_0008677A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00086781; /* je: equal / zero */

loc_0008677E: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00086781: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00086790
 * Original: 0x00086790 - 0x000867BC (44 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086790: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0008679Eu); RECOMP_ABI_CALL(0x00074EE0u, sub_00074EE0); /* call 0x00074EE0 */

loc_0008679E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000867B7; /* je: equal / zero */

loc_000867A2: ;
    _fa = (uint32_t)(MEM8(esi + 0x254)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x254), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000867B7; /* je: equal / zero */

loc_000867AB: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xCC); PUSH32(esp, 0x000867B7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000867B7: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000867C0
 * Original: 0x000867C0 - 0x00086909 (329 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000867C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000867C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000867CFu); RECOMP_ABI_CALL(0x00066C20u, sub_00066C20); /* call 0x00066C20 */

loc_000867CF: ;
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM8(esp + 0x1C) = LO8(eax);
    eax = MEM32(ebp);
    PUSH32(esp, 0x3C91A4);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000867E5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000867E5: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00086901; /* je: equal / zero */

loc_000867EF: ;
    edi = 0x3C806C;
    esi = ebx;
    ecx = 1;
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_00086901; /* je: equal / zero */

loc_00086805: ;
    eax = MEM32(ebp);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    esi = esi | 0xFFFFFFFFu;
    PUSH32(esp, 0x3C96FC);
    ecx = ebp;
    MEM32(esp + 0x18) = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0008681Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008681E: ;
    PUSH32(esp, 0x00086823u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_00086823: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x00086833u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086833: ;
    PUSH32(esp, 0x00086838u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_00086838: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00086840u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086840: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008684A; /* je: equal / zero */

loc_00086844: ;
    esi = MEM32(eax + 0x39C);

loc_0008684A: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CF1A4);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00086859u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086859: ;
    edi = eax;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008687B; /* je: equal / zero */

loc_00086863: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008687B; /* je: equal / zero */

loc_00086867: ;
    PUSH32(esp, 0x0008686Cu); RECOMP_ABI_CALL(0x000BD520u, sub_000BD520); /* call 0x000BD520 */

loc_0008686C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00086874u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086874: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008687B; /* je: equal / zero */

loc_00086879: ;
    esi = eax;

loc_0008687B: ;
    PUSH32(esp, 0x00086880u); RECOMP_ABI_CALL(0x000BD520u, sub_000BD520); /* call 0x000BD520 */

loc_00086880: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00086888u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086888: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008689E; /* je: equal / zero */

loc_0008688E: ;
    eax = MEM32(ebp);
    edi = MEM32(esi);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x00086898u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086898: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x4C); PUSH32(esp, 0x0008689Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008689E: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CF190);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000868ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000868AD: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000868D5; /* je: equal / zero */

loc_000868B3: ;
    PUSH32(esp, 0x000868B8u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000868B8: ;
    esi = eax;
    eax = MEM32(ebp);
    ebx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C91A4);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000868CBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000868CB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x230); PUSH32(esp, 0x000868D5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000868D5: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CF17C);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000868E4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000868E4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000868F7; /* je: equal / zero */

loc_000868EA: ;
    PUSH32(esp, 0x000868EFu); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_000868EF: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000868F7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000868F7: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00086901: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00086910
 * Original: 0x00086910 - 0x000869C2 (178 bytes, 67 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086910: ;
    SET_LO8(eax, MEM8(0x485845));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00086964; /* jne: not equal / not zero */

loc_0008691E: ;
    SET_LO8(eax, MEM8(esi + 0xCD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00086930; /* je: equal / zero */

loc_00086928: ;
    _fa = (uint32_t)(MEM8(esi + 0xCC)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xCC), LO8(eax) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00086964; /* jae: above or equal (unsigned >=) */

loc_00086930: ;
    _fa = (uint32_t)(MEM8(esi + 0x254)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x254), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00086954; /* je: equal / zero */

loc_00086939: ;
    PUSH32(esp, 0x0008693Eu); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_0008693E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x00086950u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086950: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00086964; /* jne: not equal / not zero */

loc_00086954: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00086960u); RECOMP_ABI_CALL(0x00078D40u, sub_00078D40); /* call 0x00078D40 */

loc_00086960: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008696C; /* jne: not equal / not zero */

loc_00086964: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0008696C: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00086975; /* je: equal / zero */

loc_00086972: ;
    ebx = MEM32(edi + 0x1C);

loc_00086975: ;
    _fa = (uint32_t)(MEM8(esi + 0x254)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x254), 4 (8-bit) */
    edi = 1;
    if (TEST_Z(_fa, _fb)) goto loc_000869A2; /* je: equal / zero */

loc_00086983: ;
    SET_LO8(eax, MEM8(esi + 0xCD));
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    edi = ZX8(LO8(eax));
    MEM8(esi + 0xCC) = LO8(eax);
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x000869A2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000869A2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000869BA; /* jle: less or equal (signed <=) */

loc_000869A6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x190); PUSH32(esp, 0x000869B7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000869B7: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000869A6; /* jne: not equal / not zero */

loc_000869BA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000869D0
 * Original: 0x000869D0 - 0x000869D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000869D0(void)
{

loc_000869D0: ;
    eax = 0x258;
    esp += 4; return; /* ret */

}

/**
 * sub_000869E0
 * Original: 0x000869E0 - 0x000869F0 (16 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000869E0(void)
{

loc_000869E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000869EAu); RECOMP_ABI_CALL(0x000867C0u, sub_000867C0); /* call 0x000867C0 */

loc_000869EA: ;
    esp = esp + 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000869F0
 * Original: 0x000869F0 - 0x00086A10 (32 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000869F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000869F0: ;
    eax = MEM32(esp + 4);
    MEM32(0x44E464) = eax;
    MEM32(esp + 4) = 0x44E460;
    g_seh_ebp = ebp; sub_000277E0(); return; /* tail jmp 0x000277E0 */

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
 * sub_00086A10
 * Original: 0x00086A10 - 0x00086C4F (575 bytes, 177 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086A10(void)
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

loc_00086A10: ;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(esi + 0x30);
    edx = MEM32(esi + 0x34);
    MEM32(esp + 0xC) = eax;
    _fa = (uint32_t)(MEM8(esi + 0x254)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x254), 0x20 (8-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_00086AD9; /* je: equal / zero */

loc_00086A3A: ;
    PUSH32(esp, 0x00086A3Fu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_00086A3F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00086A46u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086A46: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00086A57; /* jle: less or equal (signed <=) */

loc_00086A4B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    eax = eax * 4 + 0x48585C;
    if (CMP_L(_fas, _fbs)) goto loc_00086A5C; /* jl: less (signed <) */

loc_00086A57: ;
    eax = 0x498D90;

loc_00086A5C: ;
    eax = MEM32(eax);
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x00086A6Bu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_00086A6B: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00086AD9; /* je: equal / zero */

loc_00086A71: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00086A77u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086A77: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00086AD9; /* je: equal / zero */

loc_00086A95: ;
    fp_push(MEMF(edi + 0x28)); /* fld float */
    eax = esp + 0x1C;
    fp_top() = fp_top() - MEMF(esi + 0x28); /* fsub dword ptr [esi + 0x28] */
    PUSH32(esp, eax);
    fp_push(MEMF(edi + 0x24)); /* fld float */
    ecx = esp + 0x2C;
    fp_top() = fp_top() - MEMF(esi + 0x24); /* fsub dword ptr [esi + 0x24] */
    PUSH32(esp, ecx);
    fp_push(MEMF(edi + 0x20)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x20); /* fsub dword ptr [esi + 0x20] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00086AC2u); RECOMP_ABI_CALL(0x00120860u, sub_00120860); /* call 0x00120860 */

loc_00086AC2: ;
    edx = MEM32(eax);
    MEM32(esp + 0x18) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x1C) = ecx;
    edx = MEM32(eax + 8);
    esp = esp + 8;
    MEM32(esp + 0x18) = edx;

loc_00086AD9: ;
    edi = MEM32(esi + 0x24C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00086AEA; /* jne: not equal / not zero */

loc_00086AE3: ;
    ebx = 0x3C806C;
    goto loc_00086B00;

loc_00086AEA: ;
    PUSH32(esp, 0x00086AEFu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00086AEF: ;
    edi = edi & 0xFFFFFF;
    ecx = MEM32(eax + edi * 4 + 4);
    ebx = ecx + eax + 0x4008;

loc_00086B00: ;
    edi = MEM32(esi + 0x244);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00086B11; /* jne: not equal / not zero */

loc_00086B0A: ;
    eax = 0x3C806C;
    goto loc_00086B27;

loc_00086B11: ;
    PUSH32(esp, 0x00086B16u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00086B16: ;
    edi = edi & 0xFFFFFF;
    edx = MEM32(eax + edi * 4 + 4);
    eax = edx + eax + 0x4008;

loc_00086B27: ;
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00086B39u); RECOMP_ABI_CALL(0x00068060u, sub_00068060); /* call 0x00068060 */

loc_00086B39: ;
    edi = eax;
    esp = esp + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00086C21; /* je: equal / zero */

loc_00086B46: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00086B4Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086B4C: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00086C21; /* je: equal / zero */

loc_00086B6E: ;
    SET_LO8(eax, MEM8(edi + 0x334));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_00086C21; /* jns: not sign (positive) */

loc_00086B7C: ;
    edx = MEM32(edi);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 0x254));
    ecx = edi;
    eax = eax & 0xFFFFFF01u;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00086B91u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086B91: ;
    eax = MEM32(esi + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00086C46; /* je: equal / zero */

loc_00086B9F: ;
    PUSH32(esp, 0x00086BA4u); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_00086BA4: ;
    edx = MEM32(edi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00086BB3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086BB3: ;
    PUSH32(esp, 0x00086BB8u); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_00086BB8: ;
    edx = MEM32(esp + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00086BC8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086BC8: ;
    PUSH32(esp, 0x00086BCDu); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_00086BCD: ;
    esi = MEM32(esi + 0x250);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00086BE0; /* jne: not equal / not zero */

loc_00086BD9: ;
    eax = 0x3C806C;
    goto loc_00086BF6;

loc_00086BE0: ;
    PUSH32(esp, 0x00086BE5u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00086BE5: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x4008;

loc_00086BF6: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00086C00u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086C00: ;
    PUSH32(esp, 0x00086C05u); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_00086C05: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00086C0Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086C0C: ;
    PUSH32(esp, 0x00086C11u); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_00086C11: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00086C18u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086C18: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 12; return; /* ret 8 */

loc_00086C21: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC4); PUSH32(esp, 0x00086C2Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086C2B: ;
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, 0x3F800000);
    MEM32(0x44E464) = ecx;
    PUSH32(esp, 0x44E460);
    ecx = esi;
    PUSH32(esp, 0x00086C46u); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_00086C46: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00086C50
 * Original: 0x00086C50 - 0x00086C69 (25 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086C50(void)
{

loc_00086C50: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    ecx = MEM32(esp + 8);
    eax = esp;
    PUSH32(esp, 0);
    MEM32(eax) = edx;
    PUSH32(esp, 0x00086C66u); RECOMP_ABI_CALL(0x00086A10u, sub_00086A10); /* call 0x00086A10 */

loc_00086C66: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00086C70
 * Original: 0x00086C70 - 0x0008714D (1245 bytes, 382 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086C70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00086C70: ;
    esp = esp - 0x50;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 4);
    ebx = ebx | 2;
    PUSH32(esp, edi);
    MEM32(esp + 0x5C) = eax;
    MEM32(esi + 4) = ebx;
    PUSH32(esp, 0x00086C90u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_00086C90: ;
    ecx = esi;
    PUSH32(esp, 0x00086C97u); RECOMP_ABI_CALL(0x00066B60u, sub_00066B60); /* call 0x00066B60 */

loc_00086C97: ;
    edi = MEM32(esi + 4);
    edi = edi | 8;
    ecx = esi;
    MEM32(esi + 4) = edi;
    PUSH32(esp, 0x00086CA7u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_00086CA7: ;
    edx = MEM32(esi + 4);
    edx = edx | 0x10;
    ecx = esi;
    MEM32(esi + 4) = edx;
    PUSH32(esp, 0x00086CB7u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_00086CB7: ;
    MEM32(esi + 4) = MEM32(esi + 4) | 4;
    ecx = esi;
    PUSH32(esp, 0x00086CC2u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_00086CC2: ;
    edi = MEM32(esi + 0x240);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00086CD5; /* jne: not equal / not zero */

loc_00086CCE: ;
    eax = 0x3C806C;
    goto loc_00086CEB;

loc_00086CD5: ;
    PUSH32(esp, 0x00086CDAu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00086CDA: ;
    edi = edi & 0xFFFFFF;
    ecx = MEM32(eax + edi * 4 + 4);
    eax = ecx + eax + 0x4008;

loc_00086CEB: ;
    edi = MEM32(esp + 0x64);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C91A4);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00086CFCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086CFC: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086D28; /* je: equal / zero */

loc_00086D02: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086D28; /* je: equal / zero */

loc_00086D08: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00086D0Eu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00086D0E: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00086D19u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00086D19: ;
    ecx = eax;
    PUSH32(esp, 0x00086D20u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_00086D20: ;
    MEM32(esi + 0x240) = eax;
    goto loc_00086D2E;

loc_00086D28: ;
    MEM32(esi + 0x240) = ebx;

loc_00086D2E: ;
    ebp = MEM32(esi + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    MEM8(esp + 0x14) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00086D41; /* jne: not equal / not zero */

loc_00086D3A: ;
    eax = 0x3C806C;
    goto loc_00086D57;

loc_00086D41: ;
    PUSH32(esp, 0x00086D46u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00086D46: ;
    ebp = ebp & 0xFFFFFF;
    ecx = MEM32(eax + ebp * 4 + 4);
    eax = ecx + eax + 0x4008;

loc_00086D57: ;
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, 0x3CF22C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00086D67u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00086D67: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00086D9A; /* je: equal / zero */

loc_00086D72: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00086D7Cu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00086D7C: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00086D8Bu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00086D8B: ;
    ecx = eax;
    PUSH32(esp, 0x00086D92u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_00086D92: ;
    MEM32(esi + 0x244) = eax;
    goto loc_00086DA0;

loc_00086D9A: ;
    MEM32(esi + 0x244) = ebx;

loc_00086DA0: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3CF21C);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00086DADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086DAD: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086DDB; /* je: equal / zero */

loc_00086DB3: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086DD3; /* je: equal / zero */

loc_00086DB9: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00086DBFu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00086DBF: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00086DCAu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00086DCA: ;
    ecx = eax;
    PUSH32(esp, 0x00086DD1u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_00086DD1: ;
    goto loc_00086DE1;

loc_00086DD3: ;
    MEM32(esi + 0x24C) = ebx;
    goto loc_00086DE7;

loc_00086DDB: ;
    eax = MEM32(esi + 0x244);

loc_00086DE1: ;
    MEM32(esi + 0x24C) = eax;

loc_00086DE7: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3CCBA0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00086DF4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086DF4: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086E2E; /* je: equal / zero */

loc_00086DFA: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086E23; /* je: equal / zero */

loc_00086E00: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00086E06u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00086E06: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00086E11u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00086E11: ;
    ecx = eax;
    PUSH32(esp, 0x00086E18u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_00086E18: ;
    MEM32(esi + 0x248) = eax;
    goto loc_00086EDF;

loc_00086E23: ;
    MEM32(esi + 0x248) = ebx;
    goto loc_00086EDF;

loc_00086E2E: ;
    PUSH32(esp, 0x3C8C48);
    PUSH32(esp, 0x00086E38u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00086E38: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C48);
    PUSH32(esp, 0x00086E47u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00086E47: ;
    ecx = eax;
    PUSH32(esp, 0x00086E4Eu); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_00086E4E: ;
    MEM32(esi + 0x248) = eax;
    ebp = MEM32(esi + 0x240);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00086E65; /* jne: not equal / not zero */

loc_00086E5E: ;
    eax = 0x3C806C;
    goto loc_00086E7B;

loc_00086E65: ;
    PUSH32(esp, 0x00086E6Au); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00086E6A: ;
    ebp = ebp & 0xFFFFFF;
    ecx = MEM32(eax + ebp * 4 + 4);
    eax = ecx + eax + 0x4008;

loc_00086E7B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00086E81u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00086E81: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00086EDF; /* jle: less or equal (signed <=) */

loc_00086E88: ;
    PUSH32(esp, 0x00086E8Du); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_00086E8D: ;
    ebp = MEM32(esi + 0x240);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    ebx = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00086EA0; /* jne: not equal / not zero */

loc_00086E99: ;
    eax = 0x3C806C;
    goto loc_00086EB6;

loc_00086EA0: ;
    PUSH32(esp, 0x00086EA5u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00086EA5: ;
    ebp = ebp & 0xFFFFFF;
    edx = MEM32(eax + ebp * 4 + 4);
    eax = edx + eax + 0x4008;

loc_00086EB6: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00086EBEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086EBE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00086EDD; /* je: equal / zero */

loc_00086EC2: ;
    eax = MEM32(eax + 0x398);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00086ECEu); RECOMP_ABI_CALL(0x000668B0u, sub_000668B0); /* call 0x000668B0 */

loc_00086ECE: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    ecx = esi + 0x248;
    PUSH32(esp, 0x00086EDDu); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_00086EDD: ;
    ebx = 0; /* xor self */

loc_00086EDF: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3CF20C);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00086EECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086EEC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(eax, MEM8(esi + 0x254));
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) << 3);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 8);
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM8(esi + 0x254) = LO8(edx);
    edx = MEM32(edi);
    PUSH32(esp, 0x3CF1F8);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00086F16u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086F16: ;
    SET_LO8(ecx, MEM8(esi + 0x254));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(edx, LO8(ecx));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM8(esi + 0x254) = LO8(edx);
    edx = MEM32(edi);
    PUSH32(esp, 0x3CF1E8);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00086F3Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086F3C: ;
    SET_LO8(ecx, MEM8(esi + 0x254));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) << 1);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(edx, LO8(ecx));
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM8(esi + 0x254) = LO8(edx);
    edx = MEM32(edi);
    PUSH32(esp, 0x3CF1D8);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00086F64u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086F64: ;
    SET_LO8(ecx, MEM8(esi + 0x254));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) << 2);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(edx, LO8(ecx));
    SET_LO8(eax, LO8(eax) & 4);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM8(esi + 0x254) = LO8(edx);
    edx = MEM32(edi);
    PUSH32(esp, 0x3CF1D4);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00086F8Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086F8D: ;
    SET_LO8(ecx, MEM8(esi + 0x254));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) << 4);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(edx, LO8(ecx));
    SET_LO8(eax, LO8(eax) & 0x10);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM8(esi + 0x254) = LO8(edx);
    edx = MEM32(edi);
    PUSH32(esp, 0x3CF1C8);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00086FB6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086FB6: ;
    SET_LO8(ecx, MEM8(esi + 0x254));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) << 5);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 0x20);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(esi + 0x254) = LO8(ecx);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3CF17C);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00086FDDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00086FDD: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008700F; /* je: equal / zero */

loc_00086FE3: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087009; /* je: equal / zero */

loc_00086FE9: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00086FEFu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00086FEF: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00086FFAu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00086FFA: ;
    ecx = eax;
    PUSH32(esp, 0x00087001u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_00087001: ;
    MEM32(esi + 0x250) = eax;
    goto loc_0008700F;

loc_00087009: ;
    MEM32(esi + 0x250) = ebx;

loc_0008700F: ;
    SET_LO8(eax, MEM8(esi + 0x254));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008702D; /* je: equal / zero */

loc_00087019: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008702D; /* jne: not equal / not zero */

loc_0008701D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x0008702Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008702D: ;
    _fa = (uint32_t)(MEM8(esi + 0x254)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x254), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00087048; /* je: equal / zero */

loc_00087036: ;
    eax = MEM32(esi + 4);
    eax = eax | 0x4000;
    ecx = esi;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x00087048u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_00087048: ;
    PUSH32(esp, 0x0008704Du); RECOMP_ABI_CALL(0x00069540u, sub_00069540); /* call 0x00069540 */

loc_0008704D: ;
    ebp = MEM32(esi + 0x244);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    ebx = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00087060; /* jne: not equal / not zero */

loc_00087059: ;
    eax = 0x3C806C;
    goto loc_00087076;

loc_00087060: ;
    PUSH32(esp, 0x00087065u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00087065: ;
    ebp = ebp & 0xFFFFFF;
    ecx = MEM32(eax + ebp * 4 + 4);
    eax = ecx + eax + 0x4008;

loc_00087076: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0008707Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008707E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008713A; /* jne: not equal / not zero */

loc_00087086: ;
    PUSH32(esp, 0x0008708Bu); RECOMP_ABI_CALL(0x00069540u, sub_00069540); /* call 0x00069540 */

loc_0008708B: ;
    ebp = MEM32(esi + 0x248);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_000870A3; /* jne: not equal / not zero */

loc_00087099: ;
    MEM32(esp + 0x64) = 0x3C806C;
    goto loc_000870BD;

loc_000870A3: ;
    PUSH32(esp, 0x000870A8u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000870A8: ;
    ebp = ebp & 0xFFFFFF;
    ecx = MEM32(eax + ebp * 4 + 4);
    edx = ecx + eax + 0x4008;
    MEM32(esp + 0x64) = edx;

loc_000870BD: ;
    ebp = MEM32(esi + 0x240);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000870CE; /* jne: not equal / not zero */

loc_000870C7: ;
    ebx = 0x3C806C;
    goto loc_000870E4;

loc_000870CE: ;
    PUSH32(esp, 0x000870D3u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000870D3: ;
    ebp = ebp & 0xFFFFFF;
    ecx = MEM32(eax + ebp * 4 + 4);
    ebx = ecx + eax + 0x4008;

loc_000870E4: ;
    ebp = MEM32(esi + 0x244);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000870F5; /* jne: not equal / not zero */

loc_000870EE: ;
    ebp = 0x3C806C;
    goto loc_0008710B;

loc_000870F5: ;
    PUSH32(esp, 0x000870FAu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000870FA: ;
    ebp = ebp & 0xFFFFFF;
    edx = MEM32(eax + ebp * 4 + 4);
    ebp = edx + eax + 0x4008;

loc_0008710B: ;
    ecx = MEM32(esp + 0x64);
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x70) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00087127u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00087127: ;
    ecx = MEM32(esp + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x74);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3C93D0);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0008713Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008713A: ;
    ecx = MEM32(esp + 0x5C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x00087147u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00087147: ;
    esp = esp + 0x50;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00087150
 * Original: 0x00087150 - 0x00087233 (227 bytes, 77 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087150(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00087150: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    SET_LO8(eax, MEM8(ebp + 0xCD));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00087230; /* jbe: below or equal (unsigned <=) */

loc_00087164: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00087166: ;
    PUSH32(esp, 0x0008716Bu); RECOMP_ABI_CALL(0x000ADAD0u, sub_000ADAD0); /* call 0x000ADAD0 */

loc_0008716B: ;
    ecx = eax;
    PUSH32(esp, 0x00087172u); RECOMP_ABI_CALL(0x000AD7D0u, sub_000AD7D0); /* call 0x000AD7D0 */

loc_00087172: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008722E; /* je: equal / zero */

loc_0008717C: ;
    esi = MEM32(ebp + 0x244);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000871BF; /* je: equal / zero */

loc_00087186: ;
    PUSH32(esp, 0x0008718Bu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_0008718B: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    esi = ecx + eax + 0x4008;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000871BF; /* je: equal / zero */

loc_000871A0: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000871BF; /* je: equal / zero */

loc_000871A5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000871ABu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000871AB: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000871B6u); RECOMP_ABI_CALL(0x00199C70u, sub_00199C70); /* call 0x00199C70 */

loc_000871B6: ;
    ecx = eax;
    PUSH32(esp, 0x000871BDu); RECOMP_ABI_CALL(0x00012B20u, sub_00012B20); /* call 0x00012B20 */

loc_000871BD: ;
    goto loc_000871C1;

loc_000871BF: ;
    eax = 0; /* xor self */

loc_000871C1: ;
    MEM32(edi) = eax;
    esi = MEM32(ebp + 0x24C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00087206; /* je: equal / zero */

loc_000871CD: ;
    PUSH32(esp, 0x000871D2u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000871D2: ;
    esi = esi & 0xFFFFFF;
    edx = MEM32(eax + esi * 4 + 4);
    esi = edx + eax + 0x4008;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00087206; /* je: equal / zero */

loc_000871E7: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087206; /* je: equal / zero */

loc_000871EC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000871F2u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000871F2: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000871FDu); RECOMP_ABI_CALL(0x00199C70u, sub_00199C70); /* call 0x00199C70 */

loc_000871FD: ;
    ecx = eax;
    PUSH32(esp, 0x00087204u); RECOMP_ABI_CALL(0x00012B20u, sub_00012B20); /* call 0x00012B20 */

loc_00087204: ;
    goto loc_00087208;

loc_00087206: ;
    eax = 0; /* xor self */

loc_00087208: ;
    MEM32(edi + 4) = eax;
    eax = ebp + 0x2C;
    PUSH32(esp, eax);
    ecx = ebp + 0x20;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0008721Au); RECOMP_ABI_CALL(0x0006C3A0u, sub_0006C3A0); /* call 0x0006C3A0 */

loc_0008721A: ;
    MEM8(edi + 9) = MEM8(edi + 9) | 1;
    edx = ZX8(MEM8(ebp + 0xCD));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00087166; /* jl: less (signed <) */

loc_0008722E: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00087230: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00087240
 * Original: 0x00087240 - 0x0008729C (92 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087240: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0008724Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008724F: ;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008725Au); RECOMP_ABI_CALL(0x00066B20u, sub_00066B20); /* call 0x00066B20 */

loc_0008725A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00087295; /* je: equal / zero */

loc_00087261: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x00087285u); RECOMP_ABI_CALL(0x000872A0u, sub_000872A0); /* call 0x000872A0 */

loc_00087285: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x0008728Eu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_0008728E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_00087295: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000872A0
 * Original: 0x000872A0 - 0x00087340 (160 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000872A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000872A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F758);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    esi = ecx;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esi;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x40) = esp;
    PUSH32(esp, 0x000872E6u); RECOMP_ABI_CALL(0x00079B60u, sub_00079B60); /* call 0x00079B60 */

loc_000872E6: ;
    eax = 0; /* xor self */
    MEM32(esi) = 0x3CF23C;
    MEM32(esi + 0x240) = eax;
    MEM32(esi + 0x244) = eax;
    MEM32(esi + 0x248) = eax;
    MEM32(esi + 0x24C) = eax;
    MEM32(esi + 0x250) = eax;
    SET_LO8(edx, MEM8(esi + 0x254));
    SET_LO8(edx, LO8(edx) & 0xFC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM8(esi + 0x254) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_0008732B; /* je: equal / zero */

loc_00087323: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0008732Bu); RECOMP_ABI_CALL(0x00086C70u, sub_00086C70); /* call 0x00086C70 */

loc_0008732B: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00087340
 * Original: 0x00087340 - 0x00087346 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087340(void)
{

loc_00087340: ;
    eax = 0x49ECAC;
    esp += 4; return; /* ret */

}

/**
 * sub_00087350
 * Original: 0x00087350 - 0x00087356 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087350(void)
{

loc_00087350: ;
    eax = 0x3CF15C;
    esp += 4; return; /* ret */

}

/**
 * sub_00087360
 * Original: 0x00087360 - 0x0008737E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087360: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00087368u); RECOMP_ABI_CALL(0x00087380u, sub_00087380); /* call 0x00087380 */

loc_00087368: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00087378; /* je: equal / zero */

loc_0008736F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00087375u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00087375: ;
    esp = esp + 4;

loc_00087378: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00087380
 * Original: 0x00087380 - 0x0008738B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087380(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00087380: ;
    MEM32(ecx) = 0x3CF23C;
    g_seh_ebp = ebp; sub_00075970(); return; /* tail jmp 0x00075970 */

}

/**
 * sub_00087390
 * Original: 0x00087390 - 0x0008744C (188 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087390(void)
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

loc_00087390: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = MEM32(edi);
    ecx = esi + 0x2C4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CF400);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000873AEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000873AE: ;
    edx = MEM32(edi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CF3F8);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000873C9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000873C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000873EB; /* je: equal / zero */

loc_000873CD: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x2C8) = ecx;
    MEM32(esi + 0x2CC) = edx;
    MEM32(esi + 0x2D0) = eax;

loc_000873EB: ;
    edx = MEM32(edi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CF3F0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00087406u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00087406: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00087444; /* je: equal / zero */

loc_0008740A: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x10);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0x2D4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x2DC) = ecx;
    MEMF(esi + 0x2D8) = (float)fp_top(); fp_pop(); /* fstp */

loc_00087444: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00087450
 * Original: 0x00087450 - 0x00087456 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087450(void)
{

loc_00087450: ;
    eax = 0x2F8;
    esp += 4; return; /* ret */

}

/**
 * sub_00087460
 * Original: 0x00087460 - 0x0008756C (268 bytes, 67 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087460: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F778);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    esi = ecx;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esi;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x40) = esp;
    PUSH32(esp, 0x000874A6u); RECOMP_ABI_CALL(0x00093880u, sub_00093880); /* call 0x00093880 */

loc_000874A6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esi) = 0x3CF42C;
    eax = 0x3F800000;
    MEM32(esi + 0x2C4) = eax;
    MEM32(esi + 0xB4) = eax;
    edx = MEM32(0x5BC9D0);
    MEM32(esi + 0x2C8) = edx;
    eax = MEM32(0x5BC9D4);
    MEM32(esi + 0x2CC) = eax;
    ecx = MEM32(0x5BC9D8);
    MEM32(esi + 0x2D0) = ecx;
    edx = MEM32(0x5BC9D0);
    MEM32(esi + 0x2D4) = edx;
    eax = MEM32(0x5BC9D4);
    MEM32(esi + 0x2D8) = eax;
    ecx = MEM32(0x5BC9D8);
    MEM32(esp + 0x14) = 0;
    MEM32(esi + 0x2DC) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00087517; /* je: equal / zero */

loc_0008750F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00087517u); RECOMP_ABI_CALL(0x00087390u, sub_00087390); /* call 0x00087390 */

loc_00087517: ;
    edx = MEM32(esi + 0x20);
    MEM32(esi + 0x2E0) = edx;
    eax = MEM32(esi + 0x24);
    MEM32(esi + 0x2E4) = eax;
    ecx = MEM32(esi + 0x28);
    MEM32(esi + 0x2E8) = ecx;
    edx = MEM32(esi + 0x2C);
    MEM32(esi + 0x2EC) = edx;
    eax = MEM32(esi + 0x30);
    MEM32(esi + 0x2F0) = eax;
    ecx = MEM32(esi + 0x34);
    MEM32(esi + 0x2F4) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x134) = 0x3C88CE70;
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00087570
 * Original: 0x00087570 - 0x00087576 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087570(void)
{

loc_00087570: ;
    eax = 0x49ECE4;
    esp += 4; return; /* ret */

}

/**
 * sub_00087580
 * Original: 0x00087580 - 0x00087586 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087580(void)
{

loc_00087580: ;
    eax = 0x3CF3E4;
    esp += 4; return; /* ret */

}

/**
 * sub_00087590
 * Original: 0x00087590 - 0x00087593 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087590(void)
{

loc_00087590: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000875A0
 * Original: 0x000875A0 - 0x000875BE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000875A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000875A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000875A8u); RECOMP_ABI_CALL(0x000875C0u, sub_000875C0); /* call 0x000875C0 */

loc_000875A8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000875B8; /* je: equal / zero */

loc_000875AF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000875B5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000875B5: ;
    esp = esp + 4;

loc_000875B8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000875C0
 * Original: 0x000875C0 - 0x000875CB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000875C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000875C0: ;
    MEM32(ecx) = 0x3CF42C;
    g_seh_ebp = ebp; sub_0002E3D0(); return; /* tail jmp 0x0002E3D0 */

}

/**
 * sub_000875D0
 * Original: 0x000875D0 - 0x0008763C (108 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000875D0(void)
{

loc_000875D0: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esi + 0x28);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x2C);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esi + 0x30);
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(esi + 0x34);
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x0008760Du); RECOMP_ABI_CALL(0x00091280u, sub_00091280); /* call 0x00091280 */

loc_0008760D: ;
    edx = MEM32(esi);
    SET_LO8(ebx, LO8(eax));
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00087620u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00087620: ;
    eax = MEM32(esi + 4);
    eax = eax | 0x200000;
    ecx = esi;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x00087632u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_00087632: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00087640
 * Original: 0x00087640 - 0x0008769C (92 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087640: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0008764Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008764F: ;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008765Au); RECOMP_ABI_CALL(0x00066B20u, sub_00066B20); /* call 0x00066B20 */

loc_0008765A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00087695; /* je: equal / zero */

loc_00087661: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x00087685u); RECOMP_ABI_CALL(0x00087460u, sub_00087460); /* call 0x00087460 */

loc_00087685: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x0008768Eu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_0008768E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_00087695: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000876A0
 * Original: 0x000876A0 - 0x000878C9 (553 bytes, 141 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000876A0(void)
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

loc_000876A0: ;
    esp = esp - 0x24;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000876ABu); RECOMP_ABI_CALL(0x00078CB0u, sub_00078CB0); /* call 0x00078CB0 */

loc_000876AB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000878C0; /* jne: not equal / not zero */

loc_000876B3: ;
    fp_push(MEMF(0x5BC9D0)); /* fld float */
    fp_push(MEMF(esi + 0x100)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000878C0; /* jp: parity */

loc_000876CC: ;
    fp_push(MEMF(0x5BC9D4)); /* fld float */
    fp_push(MEMF(esi + 0x104)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000878C0; /* jp: parity */

loc_000876E5: ;
    fp_push(MEMF(0x5BC9D8)); /* fld float */
    fp_push(MEMF(esi + 0x108)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000878C0; /* jp: parity */

loc_000876FE: ;
    PUSH32(esp, 0x5BC9D0);
    ecx = esi + 0x10C;
    PUSH32(esp, 0x0008770Eu); RECOMP_ABI_CALL(0x00059860u, sub_00059860); /* call 0x00059860 */

loc_0008770E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000878C0; /* jne: not equal / not zero */

loc_00087716: ;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00087722u); RECOMP_ABI_CALL(0x00091EE0u, sub_00091EE0); /* call 0x00091EE0 */

loc_00087722: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000878C0; /* je: equal / zero */

loc_0008772A: ;
    eax = MEM32(esi + 0x2D4);
    fp_push(MEMF(esi + 0x2C8)); /* fld float */
    ecx = MEM32(esi + 0x2CC);
    edx = MEM32(esi + 0x2D0);
    MEM32(esp + 4) = eax;
    eax = MEM32(esi + 4);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esi + 0x2D8);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esi + 0x2DC);
    eax = eax >> 0x15;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_000877D2; /* je: equal / zero */

loc_0008776C: ;
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x20);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(esp + 0x14) = ecx;
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x24);
    fp_push(MEMF(esp + 4)); /* fld float */
    MEM32(esp + 0x18) = edx;
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x24);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0xC) = eax;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_000877D2: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    eax = esp + 0x1C;
    fp_top() = fp_top() + MEMF(esi + 0x20); /* fadd dword ptr [esi + 0x20] */
    PUSH32(esp, eax);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x24); /* fadd dword ptr [esi + 0x24] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x28); /* fadd dword ptr [esi + 0x28] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x28);
    MEM32(esi + 0x2E8) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0x2E0) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    MEMF(esi + 0x2E4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x2C); /* fadd dword ptr [esi + 0x2c] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x30); /* fadd dword ptr [esi + 0x30] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x34); /* fadd dword ptr [esi + 0x34] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x28);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esi + 0x2F4) = edx;
    MEMF(esi + 0x2EC) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x2F0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3CF3E0)); /* fld float */
    fp_top() = fp_top() / MEMF(esi + 0x2C4); /* fdiv dword ptr [esi + 0x2c4] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0008786Eu); RECOMP_ABI_CALL(0x000760D0u, xml1_guest_entity_set_velocity); /* call 0x000760D0 */

loc_0008786E: ;
    fp_push(MEMF(0x3CF3E0)); /* fld float */
    ecx = esp + 0x1C;
    fp_top() = fp_top() / MEMF(esi + 0x2C4); /* fdiv dword ptr [esi + 0x2c4] */
    PUSH32(esp, ecx);
    ecx = esi;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x000878A6u); RECOMP_ABI_CALL(0x000761B0u, sub_000761B0); /* call 0x000761B0 */

loc_000878A6: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xBF800000u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xF0); PUSH32(esp, 0x000878B7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000878B7: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 8; return; /* ret 4 */

loc_000878C0: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000878D0
 * Original: 0x000878D0 - 0x00087AA3 (467 bytes, 167 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000878D0(void)
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

loc_000878D0: ;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, 0x000878E4u); RECOMP_ABI_CALL(0x000A0770u, sub_000A0770); /* call 0x000A0770 */

loc_000878E4: ;
    eax = MEM32(esi);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000878F0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000878F0: ;
    edi = MEM32(esp + 0x3C);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x158);
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    PUSH32(esp, 0x00087919u); RECOMP_ABI_CALL(0x000A2C30u, sub_000A2C30); /* call 0x000A2C30 */

loc_00087919: ;
    esp = esp + 0x18;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00087A83; /* je: equal / zero */

loc_00087924: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(edi);
    edx = MEM32(edi + 8);
    MEM32(esp + 0x18) = ecx;
    ecx = esp + 0x10;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x00087941u); RECOMP_ABI_CALL(0x000A0810u, sub_000A0810); /* call 0x000A0810 */

loc_00087941: ;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x28); /* fsub dword ptr [esp + 0x28] */
    edi = MEM32(esp + 0x40);
    fp_push(MEMF(eax + 4)); /* fld float */
    ecx = esp + 0x10;
    fp_top() = fp_top() - MEMF(esp + 0x24); /* fsub dword ptr [esp + 0x24] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x20); /* fsub dword ptr [esp + 0x20] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00087994u); RECOMP_ABI_CALL(0x000A0780u, sub_000A0780); /* call 0x000A0780 */

loc_00087994: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000879CF; /* je: equal / zero */

loc_0008799A: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000879A0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000879A0: ;
    edx = MEM32(0x499568);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000879CF; /* je: equal / zero */

loc_000879BE: ;
    edx = MEM32(ebx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x120); PUSH32(esp, 0x000879CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000879CD: ;
    fp_pop(); /* fstp st(0) */

loc_000879CF: ;
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x158);
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    PUSH32(esp, 0x000879F8u); RECOMP_ABI_CALL(0x000A2C30u, sub_000A2C30); /* call 0x000A2C30 */

loc_000879F8: ;
    esp = esp + 0x18;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00087A77; /* je: equal / zero */

loc_000879FF: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00087A08u); RECOMP_ABI_CALL(0x000A0810u, sub_000A0810); /* call 0x000A0810 */

loc_00087A08: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x20); /* fsub dword ptr [esp + 0x20] */
    ecx = esp + 0x10;
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x24); /* fsub dword ptr [esp + 0x24] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x28); /* fsub dword ptr [esp + 0x28] */
    MEMF(esp + 0x34) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() - g_fp_stack[(g_fp_top + 2) & 7]; /* fsub st(2) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x34); /* fsub dword ptr [esp + 0x34] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00087A59u); RECOMP_ABI_CALL(0x000A0780u, sub_000A0780); /* call 0x000A0780 */

loc_00087A59: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00087A5Fu); RECOMP_ABI_CALL(0x00029210u, sub_00029210); /* call 0x00029210 */

loc_00087A5F: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00087A77; /* je: equal / zero */

loc_00087A66: ;
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x120); PUSH32(esp, 0x00087A75u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00087A75: ;
    fp_pop(); /* fstp st(0) */

loc_00087A77: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 12; return; /* ret 8 */

loc_00087A83: ;
    edx = MEM32(edi);
    eax = MEM32(esp + 0x40);
    MEM32(eax) = edx;
    ecx = MEM32(edi + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edi + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 8) = edx;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00087AB0
 * Original: 0x00087AB0 - 0x00087F87 (1239 bytes, 402 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087AB0(void)
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

loc_00087AB0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F7A0);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x38;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x38)); /* fld float */
    eax = MEM32(esi + 0x20);
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esi + 0x28);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x2C) = eax;
    fp_top() = fp_top() - MEMF(esp + 0x2C); /* fsub dword ptr [esp + 0x2c] */
    eax = MEM32(esi + 0x40);
    MEM32(esp + 0x30) = ecx;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x34) = edx;
    fp_top() = fp_top() - MEMF(esp + 0x30); /* fsub dword ptr [esp + 0x30] */
    PUSH32(esp, edi);
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x38); /* fsub dword ptr [esp + 0x38] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00087B3B; /* jne: not equal / not zero */

loc_00087B35: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_00087B3B: ;
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    fp_push(MEMF(esi + 0x40)); /* fld float */
    fp_push(MEMF(esi + 0x44)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x30); /* fsub dword ptr [esp + 0x30] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() - MEMF(esp + 0x34); /* fsub dword ptr [esp + 0x34] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() - MEMF(esp + 0x38); /* fsub dword ptr [esp + 0x38] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00087B85; /* jne: not equal / not zero */

loc_00087B7F: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_00087B85: ;
    fp_push(MEMF(esi + 0x38)); /* fld float */
    fp_push(MEMF(esi + 0x40)); /* fld float */
    fp_push(MEMF(esi + 0x48)); /* fld float */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = fp_top() - MEMF(esp + 0x30); /* fsub dword ptr [esp + 0x30] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() - MEMF(esp + 0x34); /* fsub dword ptr [esp + 0x34] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() - MEMF(esp + 0x38); /* fsub dword ptr [esp + 0x38] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00087BD1; /* jne: not equal / not zero */

loc_00087BCB: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_00087BD1: ;
    fp_push(MEMF(esi + 0x40)); /* fld float */
    fp_push(MEMF(esi + 0x48)); /* fld float */
    fp_push(MEMF(esi + 0x44)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x30); /* fsub dword ptr [esp + 0x30] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() - MEMF(esp + 0x34); /* fsub dword ptr [esp + 0x34] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() - MEMF(esp + 0x38); /* fsub dword ptr [esp + 0x38] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00087C19; /* jne: not equal / not zero */

loc_00087C13: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_00087C19: ;
    fp_push(MEMF(esi + 0x38)); /* fld float */
    ecx = MEM32(esi + 0x4C);
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    MEM32(esp + 0x2C) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() - MEMF(esp + 0x30); /* fsub dword ptr [esp + 0x30] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() - MEMF(esp + 0x34); /* fsub dword ptr [esp + 0x34] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x38); /* fsub dword ptr [esp + 0x38] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00087C67; /* jne: not equal / not zero */

loc_00087C61: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_00087C67: ;
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    edx = MEM32(esi + 0x4C);
    fp_push(MEMF(esi + 0x44)); /* fld float */
    MEM32(esp + 0x2C) = edx;
    fp_top() = fp_top() - MEMF(esp + 0x30); /* fsub dword ptr [esp + 0x30] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() - MEMF(esp + 0x34); /* fsub dword ptr [esp + 0x34] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x38); /* fsub dword ptr [esp + 0x38] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00087CB3; /* jne: not equal / not zero */

loc_00087CAD: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_00087CB3: ;
    fp_push(MEMF(esi + 0x38)); /* fld float */
    eax = MEM32(esi + 0x4C);
    fp_push(MEMF(esi + 0x48)); /* fld float */
    MEM32(esp + 0x2C) = eax;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() - MEMF(esp + 0x30); /* fsub dword ptr [esp + 0x30] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() - MEMF(esp + 0x34); /* fsub dword ptr [esp + 0x34] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x38); /* fsub dword ptr [esp + 0x38] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00087D01; /* jne: not equal / not zero */

loc_00087CFB: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_00087D01: ;
    fp_push(MEMF(esi + 0x44)); /* fld float */
    ecx = MEM32(esi + 0x4C);
    fp_push(MEMF(esi + 0x48)); /* fld float */
    MEM32(esp + 0x2C) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() - MEMF(esp + 0x30); /* fsub dword ptr [esp + 0x30] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() - MEMF(esp + 0x34); /* fsub dword ptr [esp + 0x34] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x38); /* fsub dword ptr [esp + 0x38] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00087D4F; /* jne: not equal / not zero */

loc_00087D49: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_00087D4F: ;
    fp_top() = sqrt(fp_top()); /* fsqrt */
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ebp = 0; /* xor self */
    PUSH32(esp, 0x499564);
    ecx = esp + 0x18;
    MEM32(esp + 0x20) = ebp;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00087D6Eu); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_00087D6E: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x14) = eax;
    edx = MEM32(ecx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    MEM32(esp + 0x58) = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00087D89u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00087D89: ;
    esi = MEM32(esp + 0x10);
    edi = MEM32(esi);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00087D99u); RECOMP_ABI_CALL(0x00066AC0u, sub_00066AC0); /* call 0x00066AC0 */

loc_00087D99: ;
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x30); PUSH32(esp, 0x00087DA4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00087DA4: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00087DB1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00087DB1: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3CF5E8);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00087DC1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00087DC1: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00087DD6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00087DD6: ;
    edx = MEM32(esp + 0x10);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x24) = 0x3C898C;
    PUSH32(esp, 0x00087DEDu); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_00087DED: ;
    esi = eax;
    esp = esp + 8;
    MEM32(esp + 0x20) = esi;
    eax = MEM32(esi);
    ecx = esi;
    MEM8(esp + 0x50) = 1;
    MEM32(esp + 0x14) = 0x3F800000;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00087E09u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00087E09: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00087F16; /* jle: less or equal (signed <=) */

loc_00087E11: ;
    ebx = MEM32(esp + 0x5C);

loc_00087E15: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00087E1Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00087E1D: ;
    edi = eax;
    eax = MEM32(edi + 0x20);
    MEM32(esp + 0x24) = eax;
    ecx = MEM32(edi + 0x24);
    MEM32(esp + 0x28) = ecx;
    edx = MEM32(edi + 0x28);
    PUSH32(esp, ebx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    MEM32(esp + 0x34) = edx;
    PUSH32(esp, 0x00087E43u); RECOMP_ABI_CALL(0x0023FCF0u, sub_0023FCF0); /* call 0x0023FCF0 */

loc_00087E43: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CB1E8); /* fmul dword ptr [0x3cb1e8] */
    eax = esp + 0x24;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    fp_top() = fp_top() * MEMF(0x3CB1E8); /* fmul dword ptr [0x3cb1e8] */
    ecx = edi;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CB1E8); /* fmul dword ptr [0x3cb1e8] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C9760); /* fmul dword ptr [0x3c9760] */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C9760); /* fmul dword ptr [0x3c9760] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C9760); /* fmul dword ptr [0x3c9760] */
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 3) & 7]; /* fadd st(3) */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x60); /* fadd dword ptr [esp + 0x60] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x40); /* fsub dword ptr [esp + 0x40] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x44); /* fsub dword ptr [esp + 0x44] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x48); /* fsub dword ptr [esp + 0x48] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(0x3CB270); /* fmul dword ptr [0x3cb270] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(0x3CB270); /* fmul dword ptr [0x3cb270] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CB270); /* fmul dword ptr [0x3cb270] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(edi);
    { uint32_t _icall_target = MEM32(edx + 0x128); PUSH32(esp, 0x00087EF4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00087EF4: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00087F05; /* jp: parity */

loc_00087EFF: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00087F07;

loc_00087F05: ;
    fp_pop(); /* fstp st(0) */

loc_00087F07: ;
    edx = MEM32(esi);
    ecx = esi;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00087F0Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00087F0E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00087E15; /* jl: less (signed <) */

loc_00087F16: ;
    eax = MEM32(esp + 0x58);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 8); /* fmul dword ptr [eax + 8] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 4); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    eax = MEM32(esp + 0x60);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CBDD8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cbdd8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00087F4F; /* jp: parity */

loc_00087F4B: ;
    SET_LO8(ebx, 1);
    goto loc_00087F51;

loc_00087F4F: ;
    SET_LO8(ebx, 0); /* xor self */

loc_00087F51: ;
    PUSH32(esp, esi);
    MEM8(esp + 0x54) = 0;
    PUSH32(esp, 0x00087F5Cu); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_00087F5C: ;
    esp = esp + 4;
    ecx = esp + 0x10;
    MEM32(esp + 0x50) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00087F70u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_00087F70: ;
    ecx = MEM32(esp + 0x48);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x44;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00087F90
 * Original: 0x00087F90 - 0x000885EF (1631 bytes, 466 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087F90(void)
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

loc_00087F90: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F7C6);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x144;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    fp_push(MEMF(edi + 0x2E8)); /* fld float */
    ebx = edi + 0x20;
    fp_top() = fp_top() - MEMF(ebx + 8); /* fsub dword ptr [ebx + 8] */
    MEM8(esp + 0xA) = 1;
    fp_push(MEMF(edi + 0x2E4)); /* fld float */
    fp_top() = fp_top() - MEMF(ebx + 4); /* fsub dword ptr [ebx + 4] */
    fp_push(MEMF(edi + 0x2E0)); /* fld float */
    fp_top() = fp_top() - MEMF(ebx); /* fsub dword ptr [ebx] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0x14) = eax;
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x2F4)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 0x34); /* fsub dword ptr [edi + 0x34] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x10);
    fp_push(MEMF(edi + 0x2F0)); /* fld float */
    MEM32(esp + 0x28) = eax;
    fp_top() = fp_top() - MEMF(edi + 0x30); /* fsub dword ptr [edi + 0x30] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x2EC)); /* fld float */
    edx = MEM32(esp + 0xC);
    fp_top() = fp_top() - MEMF(edi + 0x2C); /* fsub dword ptr [edi + 0x2c] */
    MEM32(esp + 0x24) = edx;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x38);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x15C);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ecx + 4); /* fmul dword ptr [ecx + 4] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * MEMF(ecx + 8); /* fmul dword ptr [ecx + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx); /* fmul dword ptr [ecx] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000880A8; /* jne: not equal / not zero */

loc_0008804E: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x2C); /* fmul dword ptr [esp + 0x2c] */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 5) & 7]; /* fmul st(5) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 6) & 7]; /* fmul st(6) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 5) & 7]; /* fmul st(5) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000880AC; /* jp: parity */

loc_0008808D: ;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = edx;
    MEM8(esp + 0xA) = 0;
    goto loc_000880AC;

loc_000880A8: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */

loc_000880AC: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x10); /* fmul dword ptr [ecx + 0x10] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x14); /* fmul dword ptr [ecx + 0x14] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0xC); /* fmul dword ptr [ecx + 0xc] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00088130; /* jne: not equal / not zero */

loc_000880D2: ;
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x38); /* fmul dword ptr [esp + 0x38] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 5) & 7]; /* fmul st(5) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00088130; /* jp: parity */

loc_00088116: ;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 0x10);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(ecx + 0x14);
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = eax;
    MEM8(esp + 0xA) = 0;

loc_00088130: ;
    _fa = (uint32_t)(MEM8(edi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008818D; /* je: equal / zero */

loc_00088136: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    edx = MEM32(edi);
    fp_top() = fp_top() + MEMF(edi + 0x2C); /* fadd dword ptr [edi + 0x2c] */
    eax = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    ecx = edi;
    fp_top() = fp_top() + MEMF(edi + 0x30); /* fadd dword ptr [edi + 0x30] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 0x34); /* fadd dword ptr [edi + 0x34] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() + MEMF(ebx); /* fadd dword ptr [ebx] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() + MEMF(ebx + 4); /* fadd dword ptr [ebx + 4] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() + MEMF(ebx + 8); /* fadd dword ptr [ebx + 8] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00088188u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00088188: ;
    goto loc_000885C4;

loc_0008818D: ;
    ecx = esp + 0xCC;
    MEM8(esp + 0xB) = 0;
    PUSH32(esp, 0x0008819Eu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0008819E: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CF5F0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cf5f0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000882A7; /* jne: not equal / not zero */

loc_000881CB: ;
    ecx = esp + 0x10C;
    MEM8(esp + 0xB) = 1;
    PUSH32(esp, 0x000881DCu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_000881DC: ;
    ecx = esp + 0x8C;
    PUSH32(esp, 0x000881E8u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_000881E8: ;
    edx = MEM32(edi);
    eax = esp + 0x10C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000881F7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000881F7: ;
    fp_push(MEMF(edi + 0x168)); /* fld float */
    ecx = esp + 0x2C;
    MEMF(esp + 0x2C) = (float)fp_top(); /* fst */
    PUSH32(esp, ecx);
    MEMF(esp + 0x34) = (float)fp_top(); /* fst */
    ecx = esp + 0x90;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0008821Au); RECOMP_ABI_CALL(0x0023E540u, sub_0023E540); /* call 0x0023E540 */

loc_0008821A: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 0x34); /* fadd dword ptr [edi + 0x34] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x10);
    fp_push(MEMF(esp + 0x24)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = fp_top() + MEMF(edi + 0x30); /* fadd dword ptr [edi + 0x30] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    eax = MEM32(esp + 0x10);
    fp_top() = fp_top() + MEMF(edi + 0x2C); /* fadd dword ptr [edi + 0x2c] */
    PUSH32(esp, eax);
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x60);
    PUSH32(esp, ecx);
    ecx = esp + 0xD8;
    PUSH32(esp, 0x00088256u); RECOMP_ABI_CALL(0x002427F0u, sub_002427F0); /* call 0x002427F0 */

loc_00088256: ;
    edx = esp + 0xCC;
    PUSH32(esp, edx);
    ecx = esp + 0x90;
    PUSH32(esp, 0x0008826Au); RECOMP_ABI_CALL(0x00242660u, sub_00242660); /* call 0x00242660 */

loc_0008826A: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x90;
    PUSH32(esp, 0x00088277u); RECOMP_ABI_CALL(0x0023E460u, sub_0023E460); /* call 0x0023E460 */

loc_00088277: ;
    eax = esp + 0x10C;
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    ecx = esp + 0xD4;
    PUSH32(esp, 0x00088290u); RECOMP_ABI_CALL(0x00242F50u, sub_00242F50); /* call 0x00242F50 */

loc_00088290: ;
    edx = esp + 0x8C;
    eax = esp + 0xCC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, 0x000882A7u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_000882A7: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000882BC; /* jne: not equal / not zero */

loc_000882B8: ;
    SET_LO8(eax, 1);
    goto loc_000882BE;

loc_000882BC: ;
    SET_LO8(eax, 0); /* xor self */

loc_000882BE: ;
    PUSH32(esp, ebp);
    ecx = ZX8(LO8(eax));
    ebp = 0; /* xor self */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x68) = ecx;
    PUSH32(esp, esi);
    /* nop */

loc_000882D0: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x6C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx = edx ^ eax;
    if ((edx == 0)) goto loc_000884E5; /* je: equal / zero */

loc_000882E8: ;
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x499564);
    ecx = esp + 0x20;
    MEM32(esp + 0x64) = ebp;
    PUSH32(esp, 0x000882FFu); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_000882FF: ;
    ecx = MEM32(edi + 0x1C);
    eax = esp + 0x58;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x5C) = ecx;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 2);
    MEM32(esp + 0x168) = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x0008831Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008831E: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    ecx = MEM32(ebx);
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    edx = MEM32(ebx + 4);
    eax = MEM32(ebx + 8);
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEM32(esp + 0x98) = ecx;
    fp_top() = -fp_top(); /* fchs */
    ecx = esp + 0x94;
    MEMF(esp + 0xA4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x9C) = edx;
    edx = MEM32(esp + 0x18);
    MEMF(esp + 0xA8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEMF(esp + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x9C) = 0x3CA95C;
    MEM32(esp + 0xA8) = eax;
    MEM32(esp + 0xB8) = 7;
    PUSH32(esp, 0x0008838Au); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_0008838A: ;
    esi = eax;
    esp = esp + 8;
    MEM32(esp + 0x58) = esi;
    eax = MEM32(esi);
    ecx = esi;
    MEM8(esp + 0x15C) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000883A1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000883A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000884BE; /* jle: less or equal (signed <=) */

loc_000883A9: ;
    /* nop */

loc_000883B0: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    edx = MEM32(esi);
    ecx = esi;
    PUSH32(esp, ebp);
    if (TEST_Z(_fa, _fb)) goto loc_00088488; /* je: equal / zero */

loc_000883C1: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000883C4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000883C4: ;
    ecx = MEM32(eax + 0x20);
    MEM32(esp + 0x34) = ecx;
    edx = MEM32(eax + 0x24);
    MEM32(esp + 0x38) = edx;
    eax = MEM32(eax + 0x28);
    ecx = esp + 0xD4;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    ecx = esp + 0x54;
    MEM32(esp + 0x44) = eax;
    PUSH32(esp, 0x000883EFu); RECOMP_ABI_CALL(0x0023FCF0u, sub_0023FCF0); /* call 0x0023FCF0 */

loc_000883EF: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x34); /* fsub dword ptr [esp + 0x34] */
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x30);
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x88) = eax;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    MEM32(esp + 0x8C) = ecx;
    fp_top() = fp_top() - MEMF(esp + 0x38); /* fsub dword ptr [esp + 0x38] */
    MEM32(esp + 0x90) = edx;
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x3C); /* fsub dword ptr [esp + 0x3c] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008844D; /* jp: parity */

loc_00088445: ;
    MEM32(esp + 0x54) = 0;

loc_0008844D: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    ecx = esi;
    MEMF(esp + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x24); /* fadd dword ptr [esp + 0x24] */
    MEMF(esp + 0x84) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x28); /* fadd dword ptr [esp + 0x28] */
    MEMF(esp + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00088482u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00088482: ;
    ecx = esp + 0x7C;
    goto loc_0008848F;

loc_00088488: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0008848Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008848B: ;
    ecx = esp + 0x1C;

loc_0008848F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x0008849Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008849A: ;
    fp_pop(); /* fstp st(0) */
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000884A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000884A4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x000884AFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000884AF: ;
    eax = MEM32(esi);
    ecx = esi;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000884B6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000884B6: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000883B0; /* jl: less (signed <) */

loc_000884BE: ;
    PUSH32(esp, esi);
    MEM8(esp + 0x160) = 0;
    PUSH32(esp, 0x000884CCu); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_000884CC: ;
    esp = esp + 4;
    ecx = esp + 0x18;
    MEM32(esp + 0x15C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000884E3u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000884E3: ;
    ebp = 0; /* xor self */

loc_000884E5: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000885C2; /* jne: not equal / not zero */

loc_000884EF: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8310)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8310] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008855E; /* jne: not equal / not zero */

loc_00088518: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00088529u); RECOMP_ABI_CALL(0x000878D0u, sub_000878D0); /* call 0x000878D0 */

loc_00088529: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00088532; /* je: equal / zero */

loc_0008852D: ;
    MEM8(esp + 0x12) = 0;

loc_00088532: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    eax = MEM32(edi);
    fp_top() = fp_top() + MEMF(ebx); /* fadd dword ptr [ebx] */
    ecx = esp + 0x60;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() + MEMF(ebx + 4); /* fadd dword ptr [ebx + 4] */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() + MEMF(ebx + 8); /* fadd dword ptr [ebx + 8] */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0008855Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008855E: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000885B5; /* je: equal / zero */

loc_00088566: ;
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0xD8;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0008857Fu); RECOMP_ABI_CALL(0x00087AB0u, sub_00087AB0); /* call 0x00087AB0 */

loc_0008857F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00088588; /* je: equal / zero */

loc_00088583: ;
    MEM8(esp + 0x12) = 0;

loc_00088588: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    edx = MEM32(edi);
    fp_top() = fp_top() + MEMF(edi + 0x2C); /* fadd dword ptr [edi + 0x2c] */
    eax = esp + 0x70;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 0x30); /* fadd dword ptr [edi + 0x30] */
    MEMF(esp + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 0x34); /* fadd dword ptr [edi + 0x34] */
    MEMF(esp + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000885B5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000885B5: ;
    MEM32(esp + 0x14) = 1;
    goto loc_000882D0;

loc_000885C2: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_000885C4: ;
    SET_LO8(eax, MEM8(esp + 0xA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000885D6; /* je: equal / zero */

loc_000885CC: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14C); PUSH32(esp, 0x000885D6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000885D6: ;
    ecx = MEM32(esp + 0x14C);
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x150;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000885F0
 * Original: 0x000885F0 - 0x0008866D (125 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000885F0(void)
{

loc_000885F0: ;
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
    SET_LO8(ecx, MEM8(ecx + 0x44));
    SET_LO8(edx, MEM8(eax + 0x44));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(eax + 0x44) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00088670
 * Original: 0x00088670 - 0x000886DD (109 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00088670: ;
    eax = MEM32(ecx + 0x1430);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008869B; /* jne: not equal / not zero */

loc_0008867C: ;
    /* nop */

loc_00088680: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xD (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000886CC; /* jge: greater or equal (signed >=) */

loc_0008868B: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(ecx + eax * 4 + 0x1430);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00088680; /* je: equal / zero */

loc_0008869B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000886A8; /* jne: not equal / not zero */

loc_000886A2: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_000886A8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000886B2; /* jne: not equal / not zero */

loc_000886AC: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_000886B2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000886BC; /* jne: not equal / not zero */

loc_000886B6: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_000886BC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000886C7; /* jne: not equal / not zero */

loc_000886C0: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000886C0; /* je: equal / zero */

loc_000886C7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xD (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000886D1; /* jl: less (signed <) */

loc_000886CC: ;
    edx = 0xD;

loc_000886D1: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000886E0
 * Original: 0x000886E0 - 0x0008873C (92 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000886E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000886E0: ;
    PUSH32(esp, esi);
    eax = ecx;
    PUSH32(esp, edi);
    esi = eax + 1;

loc_000886E7: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000886E7; /* jne: not equal / not zero */

loc_000886EE: ;
    edi = MEM32(esp + 0xC);
    edx = edi;
    eax = eax - esi;
    esi = edx + 1;
    PUSH32(esp, ebx);
    /* nop */

loc_00088700: ;
    SET_LO8(ebx, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00088700; /* jne: not equal / not zero */

loc_00088707: ;
    edx = edx - esi;
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x64 (32-bit) */
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_00088737; /* jge: greater or equal (signed >=) */

loc_00088711: ;
    eax = edi;
    esi = edi;

loc_00088715: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00088715; /* jne: not equal / not zero */

loc_0008871C: ;
    eax = eax - esi;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = ecx;

loc_00088721: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00088721; /* jne: not equal / not zero */

loc_00088729: ;
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

loc_00088737: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00088740
 * Original: 0x00088740 - 0x0008875D (29 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088740(void)
{

loc_00088740: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0xC);
    esi = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00088750u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00088750: ;
    esp = esp + 0xC;
    MEM8(esi + 0xB) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00088760
 * Original: 0x00088760 - 0x000887C4 (100 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088760(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00088760: ;
    eax = MEM32(ecx + 4);
    edx = MEM32(ecx + 0x178);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(ecx + 4) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00088780; /* jle: less or equal (signed <=) */

loc_00088777: ;
    MEM32(ecx + 4) = 0;
    goto loc_00088787;

loc_00088780: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00088787; /* jge: greater or equal (signed >=) */

loc_00088784: ;
    MEM32(ecx + 4) = edx;

loc_00088787: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000887C0; /* je: equal / zero */

loc_0008878E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);

loc_00088790: ;
    eax = MEM32(ecx + 4);
    ebx = eax + eax * 8;
    ebp = MEM32(ecx + ebx * 8 + -56);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_000887BE; /* jg: greater (signed >) */

loc_0008879E: ;
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(ecx + 4) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_000887B0; /* jle: less or equal (signed <=) */

loc_000887A7: ;
    MEM32(ecx + 4) = 0;
    goto loc_000887B7;

loc_000887B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_000887B7; /* jge: greater or equal (signed >=) */

loc_000887B4: ;
    MEM32(ecx + 4) = edx;

loc_000887B7: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00088790; /* jne: not equal / not zero */

loc_000887BE: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000887C0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000887D0
 * Original: 0x000887D0 - 0x000888CE (254 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000887D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000887D0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x13E8);
    PUSH32(esp, edi);
    edi = ebx + 0x13E8;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00088801; /* jne: not equal / not zero */

loc_000887E6: ;
    ecx = ecx & 0xFFFFFFE0u;
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000888C5; /* jge: greater or equal (signed >=) */

loc_000887F5: ;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000887E6; /* je: equal / zero */

loc_00088801: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008880E; /* jne: not equal / not zero */

loc_00088808: ;
    ecx = ecx + 0x10;
    eax = eax >> 0x10;

loc_0008880E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00088818; /* jne: not equal / not zero */

loc_00088812: ;
    ecx = ecx + 8;
    eax = eax >> 8;

loc_00088818: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00088822; /* jne: not equal / not zero */

loc_0008881C: ;
    ecx = ecx + 4;
    eax = eax >> 4;

loc_00088822: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008882D; /* jne: not equal / not zero */

loc_00088826: ;
    eax = eax >> 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00088826; /* je: equal / zero */

loc_0008882D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000888C5; /* jge: greater or equal (signed >=) */

loc_00088836: ;
    PUSH32(esp, esi);
    esi = ecx;
    /* nop */

loc_00088840: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x188);
    edx = MEM32(ecx + ebx);
    ecx = ecx + ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00088851u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00088851: ;
    eax = esi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000888C4; /* jge: greater or equal (signed >=) */

loc_00088859: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    edx = MEM32(edi + edx * 4);
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00088887; /* jne: not equal / not zero */

loc_0008886C: ;
    /* nop */

loc_00088870: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000888C4; /* jge: greater or equal (signed >=) */

loc_0008887B: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = MEM32(edi + ecx * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00088870; /* je: equal / zero */

loc_00088887: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00088895; /* jne: not equal / not zero */

loc_0008888F: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_00088895: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008889F; /* jne: not equal / not zero */

loc_00088899: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_0008889F: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000888AA; /* jne: not equal / not zero */

loc_000888A4: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_000888AA: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000888B8; /* jne: not equal / not zero */

loc_000888AF: ;
    /* nop */

loc_000888B0: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000888B0; /* je: equal / zero */

loc_000888B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000888C4; /* jge: greater or equal (signed >=) */

loc_000888BD: ;
    esi = eax;
    goto loc_00088840;

loc_000888C4: ;
    POP32(esp, esi);

loc_000888C5: ;
    MEM32(edi) = 0;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000888D0
 * Original: 0x000888D0 - 0x00088A36 (358 bytes, 118 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000888D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000888D0: ;
    esp = esp - 0x68;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0x70) = eax;
    eax = MEM32(esp + 0x7C);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x84);
    eax = eax + eax * 8;
    ebp = ecx + eax * 2;
    esi = MEM32(edi + ebp * 4 + 0x34);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM8(esp + 0x10) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_00088907; /* jne: not equal / not zero */

loc_00088900: ;
    ebx = 0x3C806C;
    goto loc_0008891D;

loc_00088907: ;
    PUSH32(esp, 0x0008890Cu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0008890C: ;
    esi = esi & 0xFFFFFF;
    edx = MEM32(eax + esi * 4 + 4);
    ebx = edx + eax + 0x8008;

loc_0008891D: ;
    esi = MEM32(edi + ebp * 4 + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008892C; /* jne: not equal / not zero */

loc_00088925: ;
    eax = 0x3C806C;
    goto loc_00088942;

loc_0008892C: ;
    PUSH32(esp, 0x00088931u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00088931: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x8008;

loc_00088942: ;
    SET_LO8(ecx, MEM8(esp + 0x88));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00088953; /* je: equal / zero */

loc_0008894D: ;
    ecx = ebx;
    ebx = eax;
    eax = ecx;

loc_00088953: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = MEM32(esp + 0x7C);
    if (TEST_Z(_fa, _fb)) goto loc_000889BD; /* je: equal / zero */

loc_0008895B: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000889BD; /* je: equal / zero */

loc_00088960: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008896Du); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0008896D: ;
    eax = MEM32(esi);
    esp = esp + 0xC;
    ecx = esi;
    MEM8(esp + 0x73) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x0008897Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008897F: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00088986u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00088986: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00088992u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00088992: ;
    PUSH32(esp, 0x3CF604);
    ecx = esp + 0x14;
    PUSH32(esp, 0x000889A0u); RECOMP_ABI_CALL(0x000886E0u, sub_000886E0); /* call 0x000886E0 */

loc_000889A0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x000889AAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000889AA: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000889B1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000889B1: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000889BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000889BD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00088A23; /* je: equal / zero */

loc_000889C1: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088A23; /* je: equal / zero */

loc_000889C6: ;
    PUSH32(esp, 0x64);
    edx = esp + 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000889D3u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000889D3: ;
    eax = MEM32(esi);
    esp = esp + 0xC;
    ecx = esi;
    MEM8(esp + 0x73) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x000889E5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000889E5: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000889ECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000889EC: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000889F8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000889F8: ;
    PUSH32(esp, 0x3CF604);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00088A06u); RECOMP_ABI_CALL(0x000886E0u, sub_000886E0); /* call 0x000886E0 */

loc_00088A06: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x00088A10u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00088A10: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00088A17u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00088A17: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00088A23u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00088A23: ;
    ecx = MEM32(esp + 0x74);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x00088A30u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00088A30: ;
    esp = esp + 0x68;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00088A40
 * Original: 0x00088A40 - 0x00088A95 (85 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00088A40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00088A40: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ebp = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00088A90; /* je: equal / zero */

loc_00088A4C: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x00088A56u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00088A56: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088A90; /* je: equal / zero */

loc_00088A5B: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x00088A65u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00088A65: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00088A6Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00088A6C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00088A90; /* je: equal / zero */

loc_00088A70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */

loc_00088A74: ;
    esi = 0; /* xor self */

loc_00088A76: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x00088A82u); RECOMP_ABI_CALL(0x000888D0u, sub_000888D0); /* call 0x000888D0 */

loc_00088A82: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00088A76; /* jl: less (signed <) */

loc_00088A88: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00088A74; /* jl: less (signed <) */

loc_00088A8E: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00088A90: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00088AA0
 * Original: 0x00088AA0 - 0x00088BCD (301 bytes, 98 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088AA0(void)
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

loc_00088AA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x178);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00088BC8; /* jle: less or equal (signed <=) */

loc_00088ABA: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebx + 0x20;

loc_00088AC4: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088BAB; /* je: equal / zero */

loc_00088ACD: ;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00088BAB; /* jne: not equal / not zero */

loc_00088AE1: ;
    PUSH32(esp, 0x00088AE6u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00088AE6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00088AF0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00088AF0: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00088BAB; /* jne: not equal / not zero */

loc_00088AFE: ;
    ecx = MEM32(ebx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00088B45; /* jle: less or equal (signed <=) */

loc_00088B07: ;
    MEM8(esp + 0x18) = LO8(eax);
    eax = ecx + ecx * 8;
    edi = MEM32(ebx + eax * 8 + -60);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    eax = ebx + eax * 8 + -60;
    if (TEST_NZ(_fa, _fb)) goto loc_00088B21; /* jne: not equal / not zero */

loc_00088B1A: ;
    eax = 0x3C806C;
    goto loc_00088B37;

loc_00088B21: ;
    PUSH32(esp, 0x00088B26u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00088B26: ;
    edi = edi & 0xFFFFFF;
    ecx = MEM32(eax + edi * 4 + 4);
    eax = ecx + eax + 0x8008;

loc_00088B37: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00088B42u); RECOMP_ABI_CALL(0x00138870u, xml1_guest_bone_name_lookup); /* call 0x00138870 */

loc_00088B42: ;
    esp = esp + 8;

loc_00088B45: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x00088B5Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00088B5A: ;
    PUSH32(esp, 0x00088B5Fu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00088B5F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00088B66u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00088B66: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    edi = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00088B73u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00088B73: ;
    fp_top() = fp_top() + MEMF(0x3C8240); /* fadd dword ptr [0x3c8240] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edi + 0x1CC); PUSH32(esp, 0x00088B85u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00088B85: ;
    PUSH32(esp, 0x00088B8Au); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00088B8A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00088B91u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00088B91: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00088B9Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00088B9B: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00088BA4u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_00088BA4: ;
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    MEMF(esi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */

loc_00088BAB: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(ebx + 0x178);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00088AC4; /* jl: less (signed <) */

loc_00088BC5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00088BC8: ;
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
 * sub_00088BD0
 * Original: 0x00088BD0 - 0x00088D52 (386 bytes, 100 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088BD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00088BD0: ;
    esp = esp - 0x64;
    eax = MEM32(0x47A050);
    edx = MEM32(0x3CF654);
    MEM32(esp + 0x60) = eax;
    eax = MEM32(0x3CF64C);
    MEM32(esp) = ecx;
    ecx = MEM32(0x3CF650);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(0x3CF644);
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = ecx;
    ecx = MEM32(0x3CF640);
    eax = 0; /* xor self */
    MEM32(esp + 0x17) = edx;
    edx = MEM32(0x3CF634);
    MEM16(esp + 0x10) = LO16(eax);
    MEM32(esp + 0x13) = ecx;
    SET_LO8(ecx, MEM8(0x3CF64A));
    MEM32(esp + 0x22) = edx;
    MEM8(esp + 0x12) = LO8(eax);
    SET_LO16(eax, MEM16(0x3CF648));
    edx = 0; /* xor self */
    MEM8(esp + 0x1D) = LO8(ecx);
    ecx = MEM32(0x3CF63C);
    MEM16(esp + 0x2E) = LO16(edx);
    MEM16(esp + 0x1B) = LO16(eax);
    eax = MEM32(0x3CF638);
    MEM32(esp + 0x2A) = ecx;
    ecx = MEM32(0x3CF62C);
    MEM8(esp + 0x30) = LO8(edx);
    SET_LO16(edx, MEM16(0x3CF630));
    MEM32(esp + 0x26) = eax;
    eax = MEM32(0x3CF628);
    MEM32(esp + 0x35) = ecx;
    ecx = MEM32(0x3CF61C);
    MEM16(esp + 0x39) = LO16(edx);
    edx = MEM32(0x3CF620);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x6C);
    MEM32(esp + 0x35) = eax;
    SET_LO8(eax, MEM8(0x3CF632));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x74);
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x4C) = edx;
    edx = MEM32(0x3CF610);
    ecx = 0; /* xor self */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    MEM8(esp + 0x47) = LO8(eax);
    SET_LO16(eax, MEM16(0x3CF624));
    MEM32(esp + 0x56) = ecx;
    MEM32(esp + 0x5B) = edx;
    edx = 0; /* xor self */
    MEM16(esp + 0x54) = LO16(eax);
    eax = MEM32(0x3CF614);
    MEM8(esp + 0x5A) = LO8(ecx);
    ecx = MEM32(0x3CF618);
    MEM16(esp + 0x67) = LO16(edx);
    PUSH32(esp, edi);
    MEM32(esp + 0x2E) = esi;
    MEM32(esp + 0x4C) = esi;
    MEM32(esp + 0x63) = eax;
    MEM32(esp + 0x67) = ecx;
    MEM8(esp + 0x6D) = LO8(edx);
    edi = esp + 0x14;
    goto loc_00088CF0;

    /* nop */

loc_00088CF0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00088CFB; /* jne: not equal / not zero */

loc_00088CF4: ;
    eax = 0x3C806C;
    goto loc_00088D13;

loc_00088CFB: ;
    PUSH32(esp, 0x00088D00u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00088D00: ;
    ecx = ebp;
    ecx = ecx & 0xFFFFFF;
    edx = MEM32(eax + ecx * 4 + 4);
    eax = edx + eax + 0x8008;

loc_00088D13: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00088D1Au); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_00088D1A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00088D34; /* je: equal / zero */

loc_00088D21: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esi + 0x44E4D0);
    eax = ebx + ebx * 8;
    eax = ecx + eax * 8 + 0x44;
    MEM32(eax) = MEM32(eax) | edx;

loc_00088D34: ;
    esi = esi + 4;
    edi = edi + 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x18 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00088CF0; /* jb: below (unsigned <) */

loc_00088D3F: ;
    ecx = MEM32(esp + 0x70);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x00088D4Cu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00088D4C: ;
    esp = esp + 0x64;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00088D60
 * Original: 0x00088D60 - 0x00088E29 (201 bytes, 68 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088D60(void)
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

loc_00088D60: ;
    esp = esp - 0x60;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x70);
    ecx = esp + 8;
    MEM32(esp + 0x64) = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00088D80u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00088D80: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00088E00; /* je: equal / zero */

loc_00088D87: ;
    edx = eax + eax * 8;
    eax = esi + edx * 8 + -60;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00088D9B; /* jne: not equal / not zero */

loc_00088D94: ;
    eax = 0x3C806C;
    goto loc_00088DB1;

loc_00088D9B: ;
    PUSH32(esp, 0x00088DA0u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00088DA0: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x8008;

loc_00088DB1: ;
    PUSH32(esp, 0x50);
    PUSH32(esp, eax);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00088DBEu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00088DBE: ;
    eax = esp + 0x20;
    esp = esp + 0xC;
    MEM8(esp + 0x63) = 0;
    edx = eax + 1;
    /* nop */

loc_00088DD0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00088DD0; /* jne: not equal / not zero */

loc_00088DD7: ;
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00088E00; /* jle: less or equal (signed <=) */

loc_00088DDD: ;
    eax = esp + 8;
    MEM8(esp + 0x70) = LO8(ecx);
    PUSH32(esp, eax);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00088DF5u); RECOMP_ABI_CALL(0x00138870u, xml1_guest_bone_name_lookup); /* call 0x00138870 */

loc_00088DF5: ;
    esp = esp + 8;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00088E00u); RECOMP_ABI_CALL(0x0002E900u, sub_0002E900); /* call 0x0002E900 */

loc_00088E00: ;
    eax = MEM32(esp + 0x6C);
    fp_push(MEMF(esp + 8)); /* fld float */
    ecx = MEM32(esp + 0xC);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x10);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x64);
    POP32(esp, edi);
    MEM32(eax + 8) = edx;
    POP32(esp, esi);
    PUSH32(esp, 0x00088E23u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00088E23: ;
    esp = esp + 0x60;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00088E30
 * Original: 0x00088E30 - 0x00088F3A (266 bytes, 87 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088E30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00088E30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + 0x14;
    MEM32(esp + 0x10) = 5;

loc_00088E44: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00088E51; /* jne: not equal / not zero */

loc_00088E4A: ;
    eax = 0x3C806C;
    goto loc_00088E67;

loc_00088E51: ;
    PUSH32(esp, 0x00088E56u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00088E56: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x8008;

loc_00088E67: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00088E6Du); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00088E6D: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00088EB1; /* je: equal / zero */

loc_00088E74: ;
    PUSH32(esp, 0x00088E79u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00088E79: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00088E80u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00088E80: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebx = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00088E8F; /* jne: not equal / not zero */

loc_00088E88: ;
    eax = 0x3C806C;
    goto loc_00088EA5;

loc_00088E8F: ;
    PUSH32(esp, 0x00088E94u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00088E94: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x8008;

loc_00088EA5: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00088EAEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00088EAE: ;
    MEM32(edi + 4) = eax;

loc_00088EB1: ;
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00088EBF; /* jne: not equal / not zero */

loc_00088EB8: ;
    eax = 0x3C806C;
    goto loc_00088ED5;

loc_00088EBF: ;
    PUSH32(esp, 0x00088EC4u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00088EC4: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x8008;

loc_00088ED5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00088EDBu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00088EDB: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00088F20; /* je: equal / zero */

loc_00088EE2: ;
    PUSH32(esp, 0x00088EE7u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00088EE7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00088EEEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00088EEE: ;
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebx = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00088EFE; /* jne: not equal / not zero */

loc_00088EF7: ;
    eax = 0x3C806C;
    goto loc_00088F14;

loc_00088EFE: ;
    PUSH32(esp, 0x00088F03u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00088F03: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x8008;

loc_00088F14: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00088F1Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00088F1D: ;
    MEM32(edi + 0xC) = eax;

loc_00088F20: ;
    eax = MEM32(esp + 0x10);
    edi = edi + 0x48;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_00088E44; /* jne: not equal / not zero */

loc_00088F32: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00088F40
 * Original: 0x00088F40 - 0x00088F9F (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00088F40: ;
    edx = ecx;
    eax = MEM32(edx + 0x1428);
    eax = MEM32(edx + eax * 4 + 0x13EC);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x1430;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x1428);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD (32-bit) */
    MEM32(edx + 0x1428) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00088F89; /* jl: less (signed <) */

loc_00088F7F: ;
    MEM32(edx + 0x1428) = 0;

loc_00088F89: ;
    MEM32(edx + 0x142C) = MEM32(edx + 0x142C) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x142C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x1434);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x1434) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00088FA0
 * Original: 0x00088FA0 - 0x000890D3 (307 bytes, 111 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088FA0(void)
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

loc_00088FA0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0x178);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_000890CE; /* jle: less or equal (signed <=) */

loc_00088FBB: ;
    eax = eax + eax * 8;
    PUSH32(esp, edi);
    edi = ebx + eax * 8;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000890CD; /* jle: less or equal (signed <=) */

loc_00088FCD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(edi + 0x10) = 0;
    esi = MEM32(edi + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM8(esp + 0x13) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_00088FE9; /* jne: not equal / not zero */

loc_00088FE2: ;
    eax = 0x3C806C;
    goto loc_00088FFF;

loc_00088FE9: ;
    PUSH32(esp, 0x00088FEEu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00088FEE: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x8008;

loc_00088FFF: ;
    edx = esp + 0x13;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008900Au); RECOMP_ABI_CALL(0x00138870u, xml1_guest_bone_name_lookup); /* call 0x00138870 */

loc_0008900A: ;
    esi = MEM32(esp + 0x28);
    ebp = eax;
    eax = MEM32(edi + 0x18);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00089031; /* je: equal / zero */

loc_0008901A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089031; /* je: equal / zero */

loc_0008901F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x00089031u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00089031: ;
    eax = MEM32(edi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000890A1; /* je: equal / zero */

loc_00089038: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000890A1; /* je: equal / zero */

loc_0008903D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0008904Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008904F: ;
    PUSH32(esp, 0x00089054u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00089054: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008905Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008905B: ;
    ecx = MEM32(edi + 0x20);
    edx = MEM32(eax);
    ebp = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00089068u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00089068: ;
    fp_top() = fp_top() + MEMF(0x3C8240); /* fadd dword ptr [0x3c8240] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(ebp + 0x1CC); PUSH32(esp, 0x0008907Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008907A: ;
    PUSH32(esp, 0x0008907Fu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0008907F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00089086u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00089086: ;
    ecx = MEM32(edi + 0x20);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00089091u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00089091: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0008909Au); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0008909A: ;
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    MEMF(edi + 0x48) = (float)fp_top(); fp_pop(); /* fstp */

loc_000890A1: ;
    ebp = 0; /* xor self */

loc_000890A3: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x000890B3u); RECOMP_ABI_CALL(0x000888D0u, sub_000888D0); /* call 0x000888D0 */

loc_000890B3: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000890A3; /* jl: less (signed <) */

loc_000890B9: ;
    eax = MEM32(edi + 0x44);
    MEM32(ebx + 0x180) = MEM32(ebx + 0x180) | eax;
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0x000890CBu); RECOMP_ABI_CALL(0x00088760u, sub_00088760); /* call 0x00088760 */

loc_000890CB: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_000890CD: ;
    POP32(esp, edi);

loc_000890CE: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000890E0
 * Original: 0x000890E0 - 0x0008922F (335 bytes, 123 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000890E0(void)
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

loc_000890E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebp);
    eax = eax + eax * 8;
    ebp = ecx;
    PUSH32(esp, edi);
    edi = ebp + eax * 8;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00089102; /* jg: greater (signed >) */

loc_000890F6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000890FDu); RECOMP_ABI_CALL(0x00088760u, sub_00088760); /* call 0x00088760 */

loc_000890FD: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_00089102: ;
    ecx = MEM32(esp + 0x10);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 8);
    ecx = MEM32(edi + 0x10);
    ecx = ecx - edx;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(edi + 0x10) = ecx;
    if (CMP_G(_fas & _fbs, 0)) goto loc_0008922A; /* jg: greater (signed >) */

loc_0008911C: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00089125u); RECOMP_ABI_CALL(0x001233C0u, xml1_guest_random_integer_range); /* call 0x001233C0 */

loc_00089125: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008922A; /* jne: not equal / not zero */

loc_00089130: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM8(esp + 0x18) = LO8(eax);
    if (TEST_NZ(_fa, _fb)) goto loc_00089144; /* jne: not equal / not zero */

loc_0008913D: ;
    eax = 0x3C806C;
    goto loc_0008915A;

loc_00089144: ;
    PUSH32(esp, 0x00089149u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00089149: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x8008;

loc_0008915A: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00089165u); RECOMP_ABI_CALL(0x00138870u, xml1_guest_bone_name_lookup); /* call 0x00138870 */

loc_00089165: ;
    esi = MEM32(esp + 0x28);
    ebx = eax;
    eax = MEM32(edi + 0x18);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008918C; /* je: equal / zero */

loc_00089175: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008918C; /* je: equal / zero */

loc_0008917A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0008918Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008918C: ;
    eax = MEM32(edi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000891FC; /* je: equal / zero */

loc_00089193: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000891FC; /* je: equal / zero */

loc_00089198: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x000891AAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000891AA: ;
    PUSH32(esp, 0x000891AFu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000891AF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000891B6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000891B6: ;
    ecx = MEM32(edi + 0x20);
    edx = MEM32(eax);
    ebx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000891C3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000891C3: ;
    fp_top() = fp_top() + MEMF(0x3C8240); /* fadd dword ptr [0x3c8240] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(ebx + 0x1CC); PUSH32(esp, 0x000891D5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000891D5: ;
    PUSH32(esp, 0x000891DAu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000891DA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000891E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000891E1: ;
    ecx = MEM32(edi + 0x20);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000891ECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000891EC: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000891F5u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_000891F5: ;
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    MEMF(edi + 0x48) = (float)fp_top(); fp_pop(); /* fstp */

loc_000891FC: ;
    ebx = 0; /* xor self */
    edi = edi;

loc_00089200: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x00089210u); RECOMP_ABI_CALL(0x000888D0u, sub_000888D0); /* call 0x000888D0 */

loc_00089210: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00089200; /* jl: less (signed <) */

loc_00089216: ;
    eax = MEM32(edi + 0x44);
    MEM32(ebp + 0x180) = MEM32(ebp + 0x180) | eax;
    PUSH32(esp, 1);
    ecx = ebp;
    PUSH32(esp, 0x00089228u); RECOMP_ABI_CALL(0x00088760u, sub_00088760); /* call 0x00088760 */

loc_00089228: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0008922A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00089230
 * Original: 0x00089230 - 0x00089286 (86 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00089230: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00089280; /* je: equal / zero */

loc_00089239: ;
    eax = MEM32(ecx + 0x1470);
    edx = ecx + 4;
    eax = eax & esi;
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0x1438)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4 + 0x1438), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00089280; /* jne: not equal / not zero */

loc_0008924D: ;
    ecx = eax;
    PUSH32(esp, edi);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0x1430)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + eax * 4 + 0x1430), edi (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00089280; /* je: equal / zero */

loc_0008926C: ;
    eax = MEM32(edx + 0x146C);
    eax = eax & esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x188);
    eax = eax + edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00089280: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00089290
 * Original: 0x00089290 - 0x0008938C (252 bytes, 87 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00089290: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx + 4;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x000892A5u); RECOMP_ABI_CALL(0x00088670u, sub_00088670); /* call 0x00088670 */

loc_000892A5: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008935C; /* je: equal / zero */

loc_000892B2: ;
    edi = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x10);
    /* nop */

loc_000892C0: ;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x188);
    edx = MEM32(eax + esi + 0x17C);
    eax = eax + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089367; /* je: equal / zero */

loc_000892D9: ;
    edx = ecx + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xD (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008934C; /* jge: greater or equal (signed >=) */

loc_000892E1: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4 + 0x1430);
    ecx = edx;
    ecx = ecx & 0x1F;
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008931B; /* jne: not equal / not zero */

loc_000892F8: ;
    goto loc_00089300;

    /* nop */

loc_00089300: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xD (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008934C; /* jge: greater or equal (signed >=) */

loc_0008930B: ;
    ecx = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = MEM32(esi + ecx * 4 + 0x1430);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00089300; /* je: equal / zero */

loc_0008931B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00089328; /* jne: not equal / not zero */

loc_00089322: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_00089328: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00089332; /* jne: not equal / not zero */

loc_0008932C: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_00089332: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008933C; /* jne: not equal / not zero */

loc_00089336: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_0008933C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00089347; /* jne: not equal / not zero */

loc_00089340: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00089340; /* je: equal / zero */

loc_00089347: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xD (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00089351; /* jl: less (signed <) */

loc_0008934C: ;
    edx = 0xD;

loc_00089351: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xD (32-bit) */
    ecx = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000892C0; /* jne: not equal / not zero */

loc_0008935C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_00089367: ;
    eax = eax - ebx;
    ecx = eax;
    eax = 0x5397829D;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((7) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    POP32(esp, edi);
    eax = eax + edx;
    eax = MEM32(ebx + eax * 4 + 0x1438);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00089390
 * Original: 0x00089390 - 0x000893C2 (50 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00089390: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008939Bu); RECOMP_ABI_CALL(0x00089230u, sub_00089230); /* call 0x00089230 */

loc_0008939B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = MEM32(esp + 8);
    ecx = MEM32(esp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_000893B6; /* je: equal / zero */

loc_000893A7: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000893B0u); RECOMP_ABI_CALL(0x00088D60u, sub_00088D60); /* call 0x00088D60 */

loc_000893B0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000893B6: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000893BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000893BC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000893D0
 * Original: 0x000893D0 - 0x000893ED (29 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000893D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000893D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000893DAu); RECOMP_ABI_CALL(0x00089230u, sub_00089230); /* call 0x00089230 */

loc_000893DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000893EA; /* je: equal / zero */

loc_000893DE: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000893EAu); RECOMP_ABI_CALL(0x00088E30u, sub_00088E30); /* call 0x00088E30 */

loc_000893EA: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000893F0
 * Original: 0x000893F0 - 0x00089417 (39 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000893F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000893F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000893FAu); RECOMP_ABI_CALL(0x00089230u, sub_00089230); /* call 0x00089230 */

loc_000893FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00089414; /* je: equal / zero */

loc_000893FE: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00089414u); RECOMP_ABI_CALL(0x00088FA0u, sub_00088FA0); /* call 0x00088FA0 */

loc_00089414: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00089420
 * Original: 0x00089420 - 0x0008943D (29 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00089420: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008942Au); RECOMP_ABI_CALL(0x00089230u, sub_00089230); /* call 0x00089230 */

loc_0008942A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008943A; /* je: equal / zero */

loc_0008942E: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0008943Au); RECOMP_ABI_CALL(0x00088A40u, sub_00088A40); /* call 0x00088A40 */

loc_0008943A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00089440
 * Original: 0x00089440 - 0x00089464 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00089440: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008944Au); RECOMP_ABI_CALL(0x00089230u, sub_00089230); /* call 0x00089230 */

loc_0008944A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008945F; /* je: equal / zero */

loc_0008944E: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x180)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x180), ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008945F; /* je: equal / zero */

loc_0008945A: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 12; return; /* ret 8 */

loc_0008945F: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00089470
 * Original: 0x00089470 - 0x0008949F (47 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00089470: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008947Au); RECOMP_ABI_CALL(0x00089230u, sub_00089230); /* call 0x00089230 */

loc_0008947A: ;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008949C; /* je: equal / zero */

loc_00089482: ;
    edx = MEM32(ecx + 0x178);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0008949C; /* jle: less or equal (signed <=) */

loc_0008948C: ;
    ecx = ecx + 0x10;
    /* nop */

loc_00089490: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00089496; /* jle: less or equal (signed <=) */

loc_00089495: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00089496: ;
    ecx = ecx + 0x48;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00089490; /* jne: not equal / not zero */

loc_0008949C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000894A0
 * Original: 0x000894A0 - 0x000894C0 (32 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000894A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000894A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000894AAu); RECOMP_ABI_CALL(0x00089230u, sub_00089230); /* call 0x00089230 */

loc_000894AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000894BD; /* je: equal / zero */

loc_000894AE: ;
    MEM32(esp + 4) = 1;
    ecx = eax;
    g_seh_ebp = ebp; sub_00088760(); return; /* tail jmp 0x00088760 */

loc_000894BD: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000894C0
 * Original: 0x000894C0 - 0x00089500 (64 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000894C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000894C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000894CAu); RECOMP_ABI_CALL(0x00089230u, sub_00089230); /* call 0x00089230 */

loc_000894CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000894DD; /* je: equal / zero */

loc_000894CE: ;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    ecx = eax;
    g_seh_ebp = ebp; sub_00088760(); return; /* tail jmp 0x00088760 */

loc_000894DD: ;
    esp += 8; return; /* ret 4 */

    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000894FA; /* je: equal / zero */

loc_000894EE: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000894FAu); RECOMP_ABI_CALL(0x00088AA0u, sub_00088AA0); /* call 0x00088AA0 */

loc_000894FA: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000894E0
 * Original: 0x000894E0 - 0x00089500 (32 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000894E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000894E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000894EAu); RECOMP_ABI_CALL(0x00089230u, sub_00089230); /* call 0x00089230 */

loc_000894EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000894FA; /* je: equal / zero */

loc_000894EE: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000894FAu); RECOMP_ABI_CALL(0x00088AA0u, sub_00088AA0); /* call 0x00088AA0 */

loc_000894FA: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00089500
 * Original: 0x00089500 - 0x000899B2 (1202 bytes, 333 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089500(void)
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

loc_00089500: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F818);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x58;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0x5C) = eax;
    eax = MEM32(esp + 0x70);
    edx = MEM32(eax + 8);
    ebx = ecx;
    ecx = 0; /* xor self */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    ebp = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = esi;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    edi = ecx;
    if ((ecx == 0)) goto loc_00089990; /* je: equal / zero */

loc_0008954B: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CF6D0);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0008955Bu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0008955B: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x74) = esi;
    PUSH32(esp, 0x0008956Bu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0008956B: ;
    esi = esi | 0xFFFFFFFFu;
    ecx = esp + 0x14;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x70) = esi;
    PUSH32(esp, 0x0008957Fu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0008957F: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CF6C8);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0008958Fu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0008958F: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x74) = ebp;
    PUSH32(esp, 0x0008959Fu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0008959F: ;
    ecx = esp + 0x14;
    ebp = eax;
    MEM32(esp + 0x70) = esi;
    PUSH32(esp, 0x000895AEu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000895AE: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CF6B8);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x000895BEu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000895BE: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x74) = 2;
    PUSH32(esp, 0x000895D2u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000895D2: ;
    ecx = esp + 0x14;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x70) = esi;
    PUSH32(esp, 0x000895E3u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000895E3: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CF6AC);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x000895F3u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000895F3: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x74) = 3;
    PUSH32(esp, 0x00089607u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00089607: ;
    ecx = esp + 0x14;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x70) = esi;
    PUSH32(esp, 0x00089618u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00089618: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CF6A0);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00089628u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00089628: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x74) = 4;
    PUSH32(esp, 0x0008963Cu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0008963C: ;
    ecx = esp + 0x14;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x70) = esi;
    PUSH32(esp, 0x0008964Du); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0008964D: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CF694);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0008965Du); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0008965D: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x74) = 5;
    PUSH32(esp, 0x00089671u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00089671: ;
    ecx = esp + 0x14;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x70) = esi;
    PUSH32(esp, 0x00089682u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00089682: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CF688);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00089692u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00089692: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x74) = 6;
    PUSH32(esp, 0x000896A6u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000896A6: ;
    ecx = esp + 0x14;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x70) = esi;
    PUSH32(esp, 0x000896B7u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000896B7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00089990; /* je: equal / zero */

loc_000896BF: ;
    esi = MEM32(esp + 0x7C);
    PUSH32(esp, ecx);
    eax = esp;
    ecx = ebx;
    MEM32(esp + 0x14) = esp;
    MEM32(eax) = esi;
    PUSH32(esp, 0x000896D3u); RECOMP_ABI_CALL(0x00089290u, sub_00089290); /* call 0x00089290 */

loc_000896D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_000896EE; /* jne: not equal / not zero */

loc_000896DB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = esi;
    eax = MEM32(ebx);
    ecx = ebx;
    MEM32(esp + 0x14) = esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000896EAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000896EA: ;
    MEM32(esp + 0x10) = eax;

loc_000896EE: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x000896F6u); RECOMP_ABI_CALL(0x00089230u, sub_00089230); /* call 0x00089230 */

loc_000896F6: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00089990; /* je: equal / zero */

loc_00089700: ;
    eax = MEM32(esi + 0x178);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00089712; /* jl: less (signed <) */

loc_0008970B: ;
    eax = 0; /* xor self */
    goto loc_00089994;

loc_00089712: ;
    SET_LO8(ecx, MEM8(esi + 0x184));
    SET_LO8(ecx, LO8(ecx) ^ MEM8(esp + 0x80));
    SET_LO8(ebx, MEM8(esi + 0x184));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(ebx, LO8(ebx) ^ LO8(ecx));
    ecx = MEM32(esp + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esi + 0x184) = LO8(ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0008974D; /* je: equal / zero */

loc_00089738: ;
    edx = eax + eax * 8;
    ebx = esi + edx * 8 + 8;
    PUSH32(esp, 0x00089744u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00089744: ;
    PUSH32(esp, eax);
    ecx = ebx + 4;
    PUSH32(esp, 0x0008974Du); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_0008974D: ;
    ecx = MEM32(esp + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00089770; /* je: equal / zero */

loc_00089755: ;
    eax = MEM32(esi + 0x178);
    eax = eax + eax * 8;
    ebx = esi + eax * 8 + 8;
    PUSH32(esp, 0x00089767u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00089767: ;
    PUSH32(esp, eax);
    ecx = ebx + 0x1C;
    PUSH32(esp, 0x00089770u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_00089770: ;
    eax = MEM32(esi + 0x178);
    ecx = eax + eax * 8;
    ebx = esi + ecx * 8 + 8;
    ecx = ebp;
    PUSH32(esp, 0x00089784u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00089784: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008978Au); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_0008978A: ;
    esp = esp + 4;
    PUSH32(esp, 0x00089792u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00089792: ;
    ecx = MEM32(esp + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(ebx + 8) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_000897B8; /* je: equal / zero */

loc_0008979D: ;
    eax = MEM32(esi + 0x178);
    edx = eax + eax * 8;
    ebx = esi + edx * 8 + 8;
    PUSH32(esp, 0x000897AFu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000897AF: ;
    PUSH32(esp, eax);
    ecx = ebx + 0xC;
    PUSH32(esp, 0x000897B8u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_000897B8: ;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000897DB; /* je: equal / zero */

loc_000897C0: ;
    eax = MEM32(esi + 0x178);
    eax = eax + eax * 8;
    ebx = esi + eax * 8 + 8;
    PUSH32(esp, 0x000897D2u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000897D2: ;
    PUSH32(esp, eax);
    ecx = ebx + 0x14;
    PUSH32(esp, 0x000897DBu); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_000897DB: ;
    MEM32(esp + 0x80) = 0;
    ebx = 0x2C;
    goto loc_000897F0;

    /* nop */

loc_000897F0: ;
    PUSH32(esp, 0xC);
    ecx = esp + 0x50;
    PUSH32(esp, 0x3CF67C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00089801u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00089801: ;
    PUSH32(esp, 0xC);
    edx = esp + 0x68;
    PUSH32(esp, 0x3CF670);
    PUSH32(esp, edx);
    MEM8(esp + 0x6F) = 0;
    PUSH32(esp, 0x00089817u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00089817: ;
    esp = esp + 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2C (32-bit) */
    MEM8(esp + 0x63) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0008984F; /* jle: less or equal (signed <=) */

loc_00089824: ;
    ebp = MEM32(esp + 0x80);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    eax = esp + 0x50;
    PUSH32(esp, 0x3CF664);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008983Cu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_0008983C: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x68;
    PUSH32(esp, 0x3CF658);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008984Cu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_0008984C: ;
    esp = esp + 0x18;

loc_0008984F: ;
    PUSH32(esp, 2);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0008985Fu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0008985F: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x74) = 7;
    PUSH32(esp, 0x00089873u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00089873: ;
    ecx = esp + 0x14;
    ebp = eax;
    MEM32(esp + 0x70) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00089886u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00089886: ;
    PUSH32(esp, 2);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    ecx = esp + 0x44;
    PUSH32(esp, 0x00089896u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00089896: ;
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x74) = 8;
    PUSH32(esp, 0x000898AAu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000898AA: ;
    ecx = esp + 0x3C;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x70) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000898BFu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000898BF: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000898E9; /* je: equal / zero */

loc_000898C3: ;
    eax = MEM32(esi + 0x178);
    eax = eax + eax * 8;
    ecx = esi + eax * 8 + 8;
    MEM32(esp + 0x78) = ecx;
    ecx = ebp;
    PUSH32(esp, 0x000898DBu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000898DB: ;
    edx = MEM32(esp + 0x78);
    PUSH32(esp, eax);
    ecx = ebx + edx + -8;
    PUSH32(esp, 0x000898E9u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_000898E9: ;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008990C; /* je: equal / zero */

loc_000898F1: ;
    eax = MEM32(esi + 0x178);
    eax = eax + eax * 8;
    ebp = esi + eax * 8 + 8;
    PUSH32(esp, 0x00089903u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00089903: ;
    PUSH32(esp, eax);
    ecx = ebx + ebp;
    PUSH32(esp, 0x0008990Cu); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_0008990C: ;
    edx = MEM32(esp + 0x80);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x34) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x34 (32-bit) */
    MEM32(esp + 0x80) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000897F0; /* jl: less (signed <) */

loc_00089927: ;
    ecx = MEM32(esp + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00089962; /* je: equal / zero */

loc_0008992F: ;
    eax = MEM32(esi + 0x178);
    edx = eax + eax * 8;
    edi = esi + edx * 8 + 8;
    PUSH32(esp, 0x00089941u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00089941: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00089947u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_00089947: ;
    MEMF(edi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x178);
    eax = eax + eax * 8;
    fp_push(MEMF(esi + eax * 8 + 0x40)); /* fld float */
    eax = esi + eax * 8 + 0x40;
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    esp = esp + 4;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */

loc_00089962: ;
    ecx = MEM32(esp + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008998A; /* je: equal / zero */

loc_0008996A: ;
    PUSH32(esp, 0x0008996Fu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0008996F: ;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(esp + 0x2C) = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008997Cu); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_0008997C: ;
    ecx = MEM32(esi + 0x178);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0008998Au); RECOMP_ABI_CALL(0x00088BD0u, sub_00088BD0); /* call 0x00088BD0 */

loc_0008998A: ;
    MEM32(esi + 0x178) = MEM32(esi + 0x178) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x178)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00089990: ;
    eax = MEM32(esp + 0x10);

loc_00089994: ;
    ecx = MEM32(esp + 0x68);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, 0x000899A8u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000899A8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x64;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000899C0
 * Original: 0x000899C0 - 0x000899EE (46 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000899C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000899C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000899CAu); RECOMP_ABI_CALL(0x00089230u, sub_00089230); /* call 0x00089230 */

loc_000899CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000899EB; /* je: equal / zero */

loc_000899CE: ;
    ecx = MEM32(eax + 0x178);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000899EB; /* jle: less or equal (signed <=) */

loc_000899D8: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000899EB; /* je: equal / zero */

loc_000899DF: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 4) = ecx;
    ecx = eax;
    g_seh_ebp = ebp; sub_000890E0(); return; /* tail jmp 0x000890E0 */

loc_000899EB: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000899F0
 * Original: 0x000899F0 - 0x00089A68 (120 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000899F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000899F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ecx;
    esi = ecx + 8;
    ebp = 5;
    edi = 0; /* xor self */

loc_00089A02: ;
    MEM32(esi + -8) = edi;
    MEM32(esi + -4) = edi;
    MEM32(esi) = edi;
    MEM32(esi + 4) = edi;
    PUSH32(esp, 0x27080);
    MEM32(esi + 8) = edi;
    PUSH32(esp, 2);
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    PUSH32(esp, 4);
    eax = esi + 0x1C;
    MEM32(esi + 0x14) = edi;
    PUSH32(esp, eax);
    MEM32(esi + 0x18) = edi;
    PUSH32(esp, 0x00089A2Eu); RECOMP_ABI_CALL(0x00011100u, sub_00011100); /* call 0x00011100 */

loc_00089A2E: ;
    PUSH32(esp, 0x27080);
    PUSH32(esp, 2);
    PUSH32(esp, 4);
    ecx = esi + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00089A40u); RECOMP_ABI_CALL(0x00011100u, sub_00011100); /* call 0x00011100 */

loc_00089A40: ;
    SET_LO8(edx, MEM8(esi + 0x3C));
    SET_LO8(edx, LO8(edx) & 0xFE);
    MEM32(esi + 0x2C) = edi;
    MEM32(esi + 0x30) = 0x44A20000;
    MEM32(esi + 0x34) = edi;
    MEM32(esi + 0x38) = edi;
    MEM8(esi + 0x3C) = LO8(edx);
    esi = esi + 0x48;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00089A02; /* jne: not equal / not zero */

loc_00089A5F: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00089A70
 * Original: 0x00089A70 - 0x00089B01 (145 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00089A70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x188);
    esi = ecx;
    edx = MEM32(eax + esi);
    ecx = eax + esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00089A8Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00089A8A: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = eax << 2;
    ecx = MEM32(eax + esi + 0x13E8);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax + esi + 0x13E8) = ecx;
    MEM32(eax + esi + 0x1430) = MEM32(eax + esi + 0x1430) & edx;
    eax = MEM32(esi + 0x1424);
    edx = MEM32(esi + 0x142C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    MEM32(esi + 0x1424) = eax;
    MEM32(esi + 0x142C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00089AE7; /* jl: less (signed <) */

loc_00089AD6: ;
    MEM32(esi + 0x1424) = 0;
    eax = 0xC;
    goto loc_00089AE8;

loc_00089AE7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00089AE8: ;
    MEM32(esi + eax * 4 + 0x13EC) = edi;
    eax = MEM32(esi + 0x1434);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x1434) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00089B10
 * Original: 0x00089B10 - 0x00089B6D (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00089B10: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x1424) = esi;
    MEM32(ecx + 0x1428) = esi;
    MEM32(ecx + 0x142C) = esi;
    edx = 0; /* xor self */
    goto loc_00089B30;

    /* nop */

loc_00089B30: ;
    eax = MEM32(ecx + 0x1424);
    edi = MEM32(ecx + 0x142C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    MEM32(ecx + 0x1424) = eax;
    MEM32(ecx + 0x142C) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00089B5C; /* jl: less (signed <) */

loc_00089B4F: ;
    MEM32(ecx + 0x1424) = esi;
    eax = 0xC;
    goto loc_00089B5D;

loc_00089B5C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00089B5D: ;
    MEM32(ecx + eax * 4 + 0x13EC) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xD (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00089B30; /* jl: less (signed <) */

loc_00089B6A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00089B70
 * Original: 0x00089B70 - 0x00089B7C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089B70(void)
{

loc_00089B70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00089B78u); RECOMP_ABI_CALL(0x000899F0u, sub_000899F0); /* call 0x000899F0 */

loc_00089B78: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00089B80
 * Original: 0x00089B80 - 0x00089BBD (61 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089B80(void)
{

loc_00089B80: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x3CF6DC;
    MEM32(esi + 4) = 1;
    PUSH32(esp, 0x00089B98u); RECOMP_ABI_CALL(0x00089B70u, sub_00089B70); /* call 0x00089B70 */

loc_00089B98: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x174) = eax;
    MEM32(esi + 0x178) = eax;
    MEM32(esi + 0x17C) = eax;
    MEM32(esi + 0x180) = eax;
    MEM8(esi + 0x184) = MEM8(esi + 0x184) & 0xFE;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00089BC0
 * Original: 0x00089BC0 - 0x00089BDE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00089BC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00089BC8u); RECOMP_ABI_CALL(0x00089BE0u, sub_00089BE0); /* call 0x00089BE0 */

loc_00089BC8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00089BD8; /* je: equal / zero */

loc_00089BCF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00089BD5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00089BD5: ;
    esp = esp + 4;

loc_00089BD8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00089BE0
 * Original: 0x00089BE0 - 0x00089BE7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089BE0(void)
{

loc_00089BE0: ;
    MEM32(ecx) = 0x3CF6DC;
    esp += 4; return; /* ret */

}

/**
 * sub_00089BF0
 * Original: 0x00089BF0 - 0x00089CC5 (213 bytes, 68 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089BF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00089BF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x3CF6DC;
    PUSH32(esp, 0x00089C06u); RECOMP_ABI_CALL(0x00089B70u, sub_00089B70); /* call 0x00089B70 */

loc_00089C06: ;
    ebx = MEM32(esp + 0x14);
    ecx = 0; /* xor self */
    MEM32(esi + 0x174) = ecx;
    MEM32(esi + 0x17C) = ecx;
    eax = MEM32(ebx + 4);
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x18);
    edx = MEM32(eax + 0x1C);
    MEM32(esi + 0x174) = edx;
    edx = MEM32(ebx + 0x178);
    MEM32(esi + 0x178) = edx;
    ebp = MEM32(eax + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00089C45; /* jne: not equal / not zero */

loc_00089C3E: ;
    ebp = 0x3C806C;
    goto loc_00089C5D;

loc_00089C45: ;
    PUSH32(esp, 0x00089C4Au); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00089C4A: ;
    ebp = ebp & 0xFFFFFF;
    ecx = MEM32(eax + ebp * 4 + 4);
    ebp = ecx + eax + 0x4008;
    ecx = 0; /* xor self */

loc_00089C5D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089C89; /* je: equal / zero */

loc_00089C61: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089C89; /* je: equal / zero */

loc_00089C67: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00089C6Du); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00089C6D: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00089C78u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00089C78: ;
    ecx = eax;
    PUSH32(esp, 0x00089C7Fu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00089C7F: ;
    MEM32(esi + 0x17C) = eax;
    ecx = 0; /* xor self */
    goto loc_00089C8F;

loc_00089C89: ;
    MEM32(esi + 0x17C) = ecx;

loc_00089C8F: ;
    eax = MEM32(esi + 0x178);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 0x180) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00089CBC; /* jle: less or equal (signed <=) */

loc_00089CA1: ;
    ebx = ebx - esi;

loc_00089CA3: ;
    edx = ebx + edi;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00089CAEu); RECOMP_ABI_CALL(0x000885F0u, sub_000885F0); /* call 0x000885F0 */

loc_00089CAE: ;
    eax = MEM32(esi + 0x178);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0x48;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00089CA3; /* jl: less (signed <) */

loc_00089CBC: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00089CD0
 * Original: 0x00089CD0 - 0x00089D8E (190 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00089CD0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F841);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    eax = MEM32(ecx + 0x1438);
    esp = esp - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00089D06; /* jne: not equal / not zero */

loc_00089CF3: ;
    eax = 0; /* xor self */
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

loc_00089D06: ;
    PUSH32(esp, esi);
    esi = ecx + 4;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00089D12u); RECOMP_ABI_CALL(0x00088F40u, sub_00088F40); /* call 0x00088F40 */

loc_00089D12: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x13E8;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x188);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    ecx = ecx | edi;
    eax = eax + esi;
    MEM32(edx) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x18) = 0;
    if ((eax == 0)) goto loc_00089D53; /* je: equal / zero */

loc_00089D4A: ;
    ecx = eax;
    PUSH32(esp, 0x00089D51u); RECOMP_ABI_CALL(0x00089B80u, sub_00089B80); /* call 0x00089B80 */

loc_00089D51: ;
    goto loc_00089D55;

loc_00089D53: ;
    eax = 0; /* xor self */

loc_00089D55: ;
    edx = MEM32(esp + 0x20);
    MEM32(eax + 0x17C) = edx;
    eax = eax - esi;
    ecx = eax;
    eax = 0x5397829D;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(esp + 0x10);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((7) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    eax = MEM32(esi + eax * 4 + 0x1438);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00089D90
 * Original: 0x00089D90 - 0x00089E64 (212 bytes, 67 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00089D90: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F861);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00089DB4u); RECOMP_ABI_CALL(0x00089230u, sub_00089230); /* call 0x00089230 */

loc_00089DB4: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00089E4F; /* je: equal / zero */

loc_00089DBE: ;
    _fa = (uint32_t)(MEM32(esi + 0x1438)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1438), 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089E4F; /* je: equal / zero */

loc_00089DCB: ;
    esi = esi + 4;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00089DD6u); RECOMP_ABI_CALL(0x00088F40u, sub_00088F40); /* call 0x00088F40 */

loc_00089DD6: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x13E8;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x188);
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(edx);
    ecx = ecx | ebx;
    eax = eax + esi;
    MEM32(edx) = ecx;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x18) = 0;
    POP32(esp, ebx);
    if ((eax == 0)) goto loc_00089E1E; /* je: equal / zero */

loc_00089E0F: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x00089E1Cu); RECOMP_ABI_CALL(0x00089BF0u, sub_00089BF0); /* call 0x00089BF0 */

loc_00089E1C: ;
    goto loc_00089E20;

loc_00089E1E: ;
    eax = 0; /* xor self */

loc_00089E20: ;
    eax = eax - esi;
    ecx = eax;
    eax = 0x5397829D;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((7) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    eax = MEM32(esi + eax * 4 + 0x1438);
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_00089E4F: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00089E70
 * Original: 0x00089E70 - 0x00089EBE (78 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089E70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00089E70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x146C);
    esi = esi & MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00089E86u); RECOMP_ABI_CALL(0x00089A70u, sub_00089A70); /* call 0x00089A70 */

loc_00089E86: ;
    ecx = MEM32(edi + 0x1470);
    eax = 1;
    eax = eax << LO8(ecx);
    MEM32(edi + esi * 4 + 0x1438) = MEM32(edi + esi * 4 + 0x1438) + eax;
    if (((int32_t)MEM32(edi + esi * 4 + 0x1438) >= 0)) goto loc_00089EB9; /* jns: not sign (positive) */

loc_00089E9C: ;
    MEM32(edi + esi * 4 + 0x1438) = esi;
    ecx = MEM32(edi + 0x1470);
    edx = 1;
    edx = edx << LO8(ecx);
    edx = edx | esi;
    MEM32(edi + esi * 4 + 0x1438) = edx;

loc_00089EB9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00089EC0
 * Original: 0x00089EC0 - 0x00089F52 (146 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00089EC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(esi + 0x13E8) = edi;
    MEM32(esi + 0x1424) = edi;
    MEM32(esi + 0x1428) = edi;
    MEM32(esi + 0x142C) = edi;
    MEM32(esi + 0x1430) = edi;
    MEM32(esi + 0x1434) = edi;
    PUSH32(esp, 0x00089EEFu); RECOMP_ABI_CALL(0x00089B10u, sub_00089B10); /* call 0x00089B10 */

loc_00089EEF: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x146C) = edi;
    MEM32(esi + 0x1470) = edi;
    ecx = 0xC;
    edx = 0; /* xor self */

loc_00089F04: ;
    eax = eax + eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    eax = eax | 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00089F04; /* jne: not equal / not zero */

loc_00089F10: ;
    MEM32(esi + 0x146C) = eax;
    MEM32(esi + 0x1470) = edx;
    eax = 0; /* xor self */
    edx = esi + 0x1438;
    goto loc_00089F30;

    /* nop */
    /* nop */

loc_00089F30: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x1470);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00089F30; /* jl: less (signed <) */

loc_00089F4D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00089F60
 * Original: 0x00089F60 - 0x00089FA8 (72 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00089F60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00089FA4; /* je: equal / zero */

loc_00089F69: ;
    eax = MEM32(ecx + 0x1470);
    edx = ecx + 4;
    eax = eax & esi;
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0x1438)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4 + 0x1438), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00089FA4; /* jne: not equal / not zero */

loc_00089F7D: ;
    ecx = eax;
    PUSH32(esp, edi);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0x1430)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + eax * 4 + 0x1430), edi (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00089FA4; /* je: equal / zero */

loc_00089F9C: ;
    PUSH32(esp, esi);
    ecx = edx;
    PUSH32(esp, 0x00089FA4u); RECOMP_ABI_CALL(0x00089E70u, sub_00089E70); /* call 0x00089E70 */

loc_00089FA4: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00089FB0
 * Original: 0x00089FB0 - 0x00089FB8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089FB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00089FB0: ;
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_000887D0(); return; /* tail jmp 0x000887D0 */

}

/**
 * sub_00089FC0
 * Original: 0x00089FC0 - 0x0008A004 (68 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00089FC0: ;
    SET_LO8(ecx, MEM8(0x4A0190));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00089FFE; /* jne: not equal / not zero */

loc_00089FCF: ;
    edx = MEM32(0x4A0190);
    edx = edx | eax;
    ecx = 0x49ED1C;
    MEM32(0x4A0190) = edx;
    MEM32(0x49ED18) = 0x3CF6E4;
    PUSH32(esp, 0x00089FF1u); RECOMP_ABI_CALL(0x00089EC0u, sub_00089EC0); /* call 0x00089EC0 */

loc_00089FF1: ;
    PUSH32(esp, 0x359FB0);
    PUSH32(esp, 0x00089FFBu); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00089FFB: ;
    esp = esp + 4;

loc_00089FFE: ;
    eax = 0x49ED18;
    esp += 4; return; /* ret */

}

/**
 * sub_0008A010
 * Original: 0x0008A010 - 0x0008A01D (13 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008A010: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008A01C; /* jle: less or equal (signed <=) */

loc_0008A01A: ;
    eax = ecx;

loc_0008A01C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008A020
 * Original: 0x0008A020 - 0x0008A028 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A020(void)
{

loc_0008A020: ;
    MEM32(ecx + 8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0008A030
 * Original: 0x0008A030 - 0x0008A05C (44 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008A030: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_S(_fas, _fbs)) goto loc_0008A055; /* jl: less (signed <) */

loc_0008A03C: ;
    PUSH32(esp, 0x0008A041u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A041: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0008A048u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A048: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008A055; /* jge: greater or equal (signed >=) */

loc_0008A04C: ;
    SET_LO8(eax, MEM8(esi + edi + 0x11));
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0008A055: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008A060
 * Original: 0x0008A060 - 0x0008A086 (38 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008A060: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_S(_fas, _fbs)) goto loc_0008A081; /* jl: less (signed <) */

loc_0008A06C: ;
    PUSH32(esp, 0x0008A071u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A071: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0008A078u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A078: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008A081; /* jge: greater or equal (signed >=) */

loc_0008A07C: ;
    MEM8(esi + edi + 0x15) = 1;

loc_0008A081: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008A090
 * Original: 0x0008A090 - 0x0008A0BC (44 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008A090: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_S(_fas, _fbs)) goto loc_0008A0B5; /* jl: less (signed <) */

loc_0008A09C: ;
    PUSH32(esp, 0x0008A0A1u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A0A1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0008A0A8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A0A8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008A0B5; /* jge: greater or equal (signed >=) */

loc_0008A0AC: ;
    SET_LO8(eax, MEM8(esi + edi + 0x15));
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0008A0B5: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008A0C0
 * Original: 0x0008A0C0 - 0x0008A0E6 (38 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008A0C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_S(_fas, _fbs)) goto loc_0008A0E1; /* jl: less (signed <) */

loc_0008A0CC: ;
    PUSH32(esp, 0x0008A0D1u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A0D1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0008A0D8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A0D8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008A0E1; /* jge: greater or equal (signed >=) */

loc_0008A0DC: ;
    MEM8(esi + edi + 0x19) = 1;

loc_0008A0E1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008A0F0
 * Original: 0x0008A0F0 - 0x0008A11C (44 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A0F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008A0F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_S(_fas, _fbs)) goto loc_0008A115; /* jl: less (signed <) */

loc_0008A0FC: ;
    PUSH32(esp, 0x0008A101u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A101: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0008A108u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A108: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008A115; /* jge: greater or equal (signed >=) */

loc_0008A10C: ;
    SET_LO8(eax, MEM8(esi + edi + 0x19));
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0008A115: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008A120
 * Original: 0x0008A120 - 0x0008A197 (119 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008A120: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0008A128u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A128: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0008A134u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A134: ;
    PUSH32(esp, 0x0008A139u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A139: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008A140u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A140: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A18F; /* je: equal / zero */

loc_0008A145: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008A14Bu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A14B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008A152u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A152: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0008A182; /* jl: less (signed <) */

loc_0008A158: ;
    PUSH32(esp, 0x0008A15Du); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A15D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0008A164u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A164: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008A182; /* jge: greater or equal (signed >=) */

loc_0008A168: ;
    SET_LO8(eax, MEM8(edi + esi + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008A173; /* jne: not equal / not zero */

loc_0008A170: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0008A173: ;
    MEM8(edi + esi + 0x11) = 1;
    MEM8(edi + esi + 0x15) = 0;
    MEM8(edi + esi + 0x1D) = 1;

loc_0008A182: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    SET_LO8(eax, LO8(eax) | 8);
    POP32(esp, edi);
    MEM8(esi + 0x10) = LO8(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0008A18F: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) | 8;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008A1A0
 * Original: 0x0008A1A0 - 0x0008A20E (110 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A1A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008A1A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    PUSH32(esp, 0x0008A1ABu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A1AB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0008A1B2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A1B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0008A1E7; /* jle: less or equal (signed <=) */

loc_0008A1B6: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0008A1BEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A1BE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008A1D6; /* je: equal / zero */

loc_0008A1C2: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0008A1CAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A1CA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008A1D6; /* jne: not equal / not zero */

loc_0008A1CE: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0008A1D6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A1D6: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0008A1DCu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A1DC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0008A1E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A1E3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008A1B6; /* jl: less (signed <) */

loc_0008A1E7: ;
    PUSH32(esp, 0x0008A1ECu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A1EC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0008A1F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A1F5: ;
    PUSH32(esp, 0x0008A1FAu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A1FA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0008A203u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A203: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    SET_LO8(eax, LO8(eax) & 0xF7);
    POP32(esp, edi);
    MEM8(esi + 0x10) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008A210
 * Original: 0x0008A210 - 0x0008A230 (32 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A210(void)
{

loc_0008A210: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) & 0xFD;
    PUSH32(esp, 0x0008A21Cu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A21C: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0008A227u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A227: ;
    MEM32(esi + 0x24) = 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008A230
 * Original: 0x0008A230 - 0x0008A296 (102 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A230(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008A230: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    esi = 0; /* xor self */
    edi = 0; /* xor self */
    PUSH32(esp, 0x0008A23Fu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A23F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0008A246u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A246: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0008A283; /* jle: less or equal (signed <=) */

loc_0008A24A: ;
    ebp = MEM32(esp + 0x14);
    edi = edi;

loc_0008A250: ;
    PUSH32(esp, 0x0008A255u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A255: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0008A25Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A25D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008A272; /* je: equal / zero */

loc_0008A261: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0008A269u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A269: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008A272; /* je: equal / zero */

loc_0008A26D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A28D; /* je: equal / zero */

loc_0008A272: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0008A278u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A278: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0008A27Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A27F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008A250; /* jl: less (signed <) */

loc_0008A283: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0008A28D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008A2A0
 * Original: 0x0008A2A0 - 0x0008A31B (123 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A2A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008A2A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_S(_fas, _fbs)) goto loc_0008A313; /* jl: less (signed <) */

loc_0008A2AC: ;
    PUSH32(esp, 0x0008A2B1u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A2B1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0008A2B8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A2B8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0008A313; /* jg: greater (signed >) */

loc_0008A2BD: ;
    PUSH32(esp, 0x0008A2C2u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A2C2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0008A2C9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A2C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A313; /* je: equal / zero */

loc_0008A2CE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008A2E3; /* jne: not equal / not zero */

loc_0008A2D2: ;
    PUSH32(esp, 0x0008A2D7u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A2D7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0008A2DEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A2DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0008A2E3: ;
    eax = MEM32(esi);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0008A2ECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A2EC: ;
    edi = eax;
    PUSH32(esp, 0x0008A2F3u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A2F3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0008A2FAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A2FA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008A30C; /* jne: not equal / not zero */

loc_0008A2FE: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0008A307u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A307: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0008A30C: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0008A313: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008A320
 * Original: 0x0008A320 - 0x0008A326 (6 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A320(void)
{

loc_0008A320: ;
    SET_LO8(eax, MEM8(ecx + 0x10));
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0008A330
 * Original: 0x0008A330 - 0x0008A344 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A330(void)
{

loc_0008A330: ;
    SET_LO8(eax, MEM8(ecx + 0x10));
    SET_LO8(eax, LO8(eax) ^ MEM8(esp + 4));
    SET_LO8(edx, MEM8(ecx + 0x10));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    MEM8(ecx + 0x10) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008A350
 * Original: 0x0008A350 - 0x0008A40A (186 bytes, 82 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008A350: ;
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM8(edi + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x10), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008A406; /* jne: not equal / not zero */

loc_0008A35D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008A364u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A364: ;
    ebx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0008A370u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A370: ;
    esi = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0008A37Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A37A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008A3CE; /* jne: not equal / not zero */

loc_0008A37E: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x13);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0008A387u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A387: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008A3AE; /* je: equal / zero */

loc_0008A38B: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0008A393u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A393: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x13);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008A39Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A39E: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0008A3A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A3A9: ;
    MEM8(ebx + edi + 0x1D) = 1;

loc_0008A3AE: ;
    PUSH32(esp, 0x0008A3B3u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A3B3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008A3BAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A3BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A404; /* je: equal / zero */

loc_0008A3BF: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0008A3C8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A3C8: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0008A3CE: ;
    SET_LO8(eax, MEM8(ebx + edi + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008A3FF; /* je: equal / zero */

loc_0008A3D6: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x13);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0008A3DFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A3DF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008A3FF; /* je: equal / zero */

loc_0008A3E3: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x13);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0008A3EEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A3EE: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008A3F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A3F9: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0008A3FF: ;
    MEM8(ebx + edi + 0x1D) = 0;

loc_0008A404: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0008A406: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008A410
 * Original: 0x0008A410 - 0x0008A451 (65 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008A410: ;
    eax = ecx;
    SET_LO8(edx, MEM8(eax + 0x10));
    ecx = 0; /* xor self */
    SET_LO8(edx, LO8(edx) & 0xE0);
    PUSH32(esp, esi);
    MEM8(eax + 0x10) = LO8(edx);
    MEM32(eax) = 0x3CF744;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x24) = 0xFFFFFFFFu;
    edx = eax + 0x15;
    esi = 4;
    /* nop */

loc_0008A440: ;
    MEM8(edx + -4) = LO8(ecx);
    MEM8(edx) = LO8(ecx);
    MEM8(edx + 4) = LO8(ecx);
    MEM8(edx + 8) = LO8(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0008A440; /* jne: not equal / not zero */

loc_0008A44F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008A460
 * Original: 0x0008A460 - 0x0008A469 (9 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A460(void)
{

loc_0008A460: ;
    SET_LO8(eax, MEM8(ecx + 0x10));
    SET_LO8(eax, LO8(eax) >> 3);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0008A470
 * Original: 0x0008A470 - 0x0008A4B3 (67 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008A470: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x0008A479u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A479: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008A480u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A480: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0008A4B0; /* jl: less (signed <) */

loc_0008A486: ;
    PUSH32(esp, 0x0008A48Bu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A48B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0008A492u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A492: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008A4B0; /* jge: greater or equal (signed >=) */

loc_0008A496: ;
    SET_LO8(eax, MEM8(esi + edi + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008A4A1; /* jne: not equal / not zero */

loc_0008A49E: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0008A4A1: ;
    MEM8(esi + edi + 0x11) = 1;
    MEM8(esi + edi + 0x15) = 0;
    MEM8(esi + edi + 0x1D) = 1;

loc_0008A4B0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008A4C0
 * Original: 0x0008A4C0 - 0x0008A521 (97 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A4C0(void)
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

loc_0008A4C0: ;
    eax = MEM32(ecx + 4);
    esp = esp - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008A519; /* jl: less (signed <) */

loc_0008A4CB: ;
    PUSH32(esp, 0x0008A4D0u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_0008A4D0: ;
    edx = MEM32(eax);
    ecx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0xC3160000u);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x0008A4E8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A4E8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008A519; /* jne: not equal / not zero */

loc_0008A4EC: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CF730)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cf730] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008A511; /* je: equal / zero */

loc_0008A4FE: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CF730)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cf730] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008A519; /* jne: not equal / not zero */

loc_0008A511: ;
    SET_LO8(eax, 0); /* xor self */
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_0008A519: ;
    SET_LO8(eax, 1);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008A530
 * Original: 0x0008A530 - 0x0008A5A6 (118 bytes, 39 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0008A530(void)
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

loc_0008A530: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = 0; /* xor self */
    goto loc_0008A540;

    /* nop */

loc_0008A540: ;
    fp_push(MEMF(esi + ecx * 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8390)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c8390] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008A59A; /* je: equal / zero */

loc_0008A552: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C9788)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c9788] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008A58E; /* jne: not equal / not zero */

loc_0008A55F: ;
    fp_top() = fp_top() - MEMF(0x3C9788); /* fsub dword ptr [0x3c9788] */
    fp_top() = fp_top() * MEMF(0x3CF7A8); /* fmul dword ptr [0x3cf7a8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_top() = MEMF(0x3C6E40) - fp_top(); /* fsubr dword ptr [0x3c6e40] */
    fp_top() = fp_top() * MEMF(0x3CB1E8); /* fmul dword ptr [0x3cb1e8] */
    fp_top() = fp_top() + MEMF(0x3C9760); /* fadd dword ptr [0x3c9760] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [edx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008A58E; /* jp: parity */

loc_0008A58A: ;
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0008A590;

loc_0008A58E: ;
    fp_pop(); /* fstp st(0) */

loc_0008A590: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008A540; /* jl: less (signed <) */

loc_0008A596: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0008A59A: ;
    fp_pop(); /* fstp st(0) */
    MEM32(edx) = 0x3D4CCCCD;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008A5B0
 * Original: 0x0008A5B0 - 0x0008A5F3 (67 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008A5B0: ;
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x0008A5B8u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A5B8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0008A5BFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A5BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A5F1; /* je: equal / zero */

loc_0008A5C4: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, 0x0008A5CCu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A5CC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0008A5D3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A5D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0008A5F0; /* jle: less or equal (signed <=) */

loc_0008A5D7: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0008A5DFu); RECOMP_ABI_CALL(0x0008A350u, sub_0008A350); /* call 0x0008A350 */

loc_0008A5DF: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0008A5E5u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A5E5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0008A5ECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A5EC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008A5D7; /* jl: less (signed <) */

loc_0008A5F0: ;
    POP32(esp, esi);

loc_0008A5F1: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008A600
 * Original: 0x0008A600 - 0x0008A625 (37 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008A600: ;
    SET_LO8(ecx, MEM8(0x4A01C8));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008A61F; /* jne: not equal / not zero */

loc_0008A60F: ;
    MEM32(0x4A01C8) = MEM32(0x4A01C8) | eax;
    ecx = 0x4A01A0;
    PUSH32(esp, 0x0008A61Fu); RECOMP_ABI_CALL(0x0008A410u, sub_0008A410); /* call 0x0008A410 */

loc_0008A61F: ;
    eax = 0x4A01A0;
    esp += 4; return; /* ret */

}

/**
 * sub_0008A630
 * Original: 0x0008A630 - 0x0008A694 (100 bytes, 44 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008A630: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0008A68D; /* jl: less (signed <) */

loc_0008A63C: ;
    PUSH32(esp, 0x0008A641u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A641: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0008A648u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A648: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008A68D; /* jge: greater or equal (signed >=) */

loc_0008A64C: ;
    PUSH32(esp, 0x0008A651u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_0008A651: ;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0008A659u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A659: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008A686; /* jne: not equal / not zero */

loc_0008A65D: ;
    PUSH32(esp, 0x0008A662u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A662: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0008A669u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A669: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008A67F; /* jne: not equal / not zero */

loc_0008A66E: ;
    PUSH32(esp, 0x0008A673u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A673: ;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0008A67Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A67B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008A686; /* jne: not equal / not zero */

loc_0008A67F: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0008A686: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0008A68D: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008A6A0
 * Original: 0x0008A6A0 - 0x0008ABAD (1293 bytes, 439 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A6A0(void)
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

loc_0008A6A0: ;
    esp = esp - 0xD8;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    MEM32(esp + 0xD8) = eax;
    esi = ecx;
    MEM8(esp + 0xB) = 0;
    PUSH32(esp, 0x0008A6BFu); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_0008A6BF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0008A6C6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A6C6: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0008A6CFu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0008A6CF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x110); PUSH32(esp, 0x0008A6D9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A6D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008A6ED; /* je: equal / zero */

loc_0008A6DD: ;
    PUSH32(esp, 0x0008A6E2u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_0008A6E2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008A6E9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A6E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008A734; /* jne: not equal / not zero */

loc_0008A6ED: ;
    PUSH32(esp, 0x0008A6F2u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0008A6F2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x16C); PUSH32(esp, 0x0008A6FCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A6FC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008A734; /* jne: not equal / not zero */

loc_0008A700: ;
    PUSH32(esp, 0x0008A705u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0008A705: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x110); PUSH32(esp, 0x0008A70Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A70F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008A75E; /* je: equal / zero */

loc_0008A713: ;
    PUSH32(esp, 0x0008A718u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0008A718: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3CF7C4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x11C); PUSH32(esp, 0x0008A727u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A727: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008A72Du); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0008A72D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008A75E; /* jne: not equal / not zero */

loc_0008A734: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(esi);
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    ecx = esi;
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008A748u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A748: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    ecx = MEM32(esp + 0xD4);
    PUSH32(esp, 0x0008A757u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0008A757: ;
    esp = esp + 0xD8;
    esp += 4; return; /* ret */

loc_0008A75E: ;
    PUSH32(esp, 0x0008A763u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_0008A763: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x0008A76Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A76D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008A7AA; /* jne: not equal / not zero */

loc_0008A771: ;
    PUSH32(esp, 0x0008A776u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0008A776: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0008A77Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A77D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008A7CD; /* je: equal / zero */

loc_0008A781: ;
    PUSH32(esp, 0x0008A786u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0008A786: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0008A78Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A78D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008A7CD; /* jne: not equal / not zero */

loc_0008A791: ;
    PUSH32(esp, 0x0008A796u); RECOMP_ABI_CALL(0x00060C00u, sub_00060C00); /* call 0x00060C00 */

loc_0008A796: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0008A79Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A79D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008A7CD; /* jne: not equal / not zero */

loc_0008A7A1: ;
    PUSH32(esp, 0x0008A7A6u); RECOMP_ABI_CALL(0x000BF730u, sub_000BF730); /* call 0x000BF730 */

loc_0008A7A6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008A7CD; /* jne: not equal / not zero */

loc_0008A7AA: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_0008A7B7: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    ecx = MEM32(esp + 0xD4);
    PUSH32(esp, 0x0008A7C6u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0008A7C6: ;
    esp = esp + 0xD8;
    esp += 4; return; /* ret */

loc_0008A7CD: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0008A7B7; /* jnp: not parity */

loc_0008A7DB: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    PUSH32(esp, ebx);
    ebx = 2;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008A81C; /* je: equal / zero */

loc_0008A7E8: ;
    PUSH32(esp, 0x0008A7EDu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0008A7ED: ;
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0008A7F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A7F5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008A81C; /* je: equal / zero */

loc_0008A7F9: ;
    PUSH32(esp, 0x0008A7FEu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A7FE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0008A805u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A805: ;
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    ecx = MEM32(esp + 0xD4);
    PUSH32(esp, 0x0008A815u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0008A815: ;
    esp = esp + 0xD8;
    esp += 4; return; /* ret */

loc_0008A81C: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008A828; /* je: equal / zero */

loc_0008A823: ;
    SET_LO8(eax, LO8(eax) & 0xFD);
    MEM8(esi + 0x10) = LO8(eax);

loc_0008A828: ;
    PUSH32(esp, 0x0008A82Du); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0008A82D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x0008A837u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A837: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008A852; /* jne: not equal / not zero */

loc_0008A83B: ;
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    ecx = MEM32(esp + 0xD4);
    PUSH32(esp, 0x0008A84Bu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0008A84B: ;
    esp = esp + 0xD8;
    esp += 4; return; /* ret */

loc_0008A852: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    PUSH32(esp, ebp);
    SET_LO8(eax, LO8(eax) | 0x10);
    PUSH32(esp, edi);
    MEM8(esi + 0x10) = LO8(eax);
    PUSH32(esp, 0x0008A861u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A861: ;
    edx = MEM32(eax);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0008A86Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A86D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008A9EF; /* jne: not equal / not zero */

loc_0008A875: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008AB94; /* je: equal / zero */

loc_0008A87F: ;
    PUSH32(esp, 0x0008A884u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A884: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008A88Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A88B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008A9EB; /* jne: not equal / not zero */

loc_0008A894: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) | LO8(ebx);
    PUSH32(esp, 0x0008A89Cu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0008A89C: ;
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0008A8A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A8A4: ;
    PUSH32(esp, 0x0008A8A9u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0008A8A9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x803);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0008A8B5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A8B5: ;
    edi = eax;
    PUSH32(esp, 0x0008A8BCu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0008A8BC: ;
    edx = MEM32(eax);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0008A8C4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A8C4: ;
    PUSH32(esp, 0x0008A8C9u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0008A8C9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3CF7AC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x0008A8D5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A8D5: ;
    PUSH32(esp, 0x0008A8DAu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0008A8DA: ;
    edi = eax;
    PUSH32(esp, 0x0008A8E1u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0008A8E1: ;
    ebx = eax;
    eax = MEM32(edi);
    ebp = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x802);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0008A8F1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A8F1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(ebp + 0x3C); PUSH32(esp, 0x0008A8F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A8F9: ;
    PUSH32(esp, 0x0008A8FEu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0008A8FE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0008A907u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A907: ;
    PUSH32(esp, 0x0008A90Cu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0008A90C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0008A915u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A915: ;
    PUSH32(esp, 0x0008A91Au); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0008A91A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0008A921u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A921: ;
    PUSH32(esp, 0x0008A926u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_0008A926: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0008A930u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A930: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008A95F; /* jne: not equal / not zero */

loc_0008A934: ;
    PUSH32(esp, 0x0008A939u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0008A939: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0008A945u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A945: ;
    PUSH32(esp, 0x0008A94Au); RECOMP_ABI_CALL(0x0007AB20u, sub_0007AB20); /* call 0x0007AB20 */

loc_0008A94A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0008A951u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A951: ;
    PUSH32(esp, 0x0008A956u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0008A956: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0008A95Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A95F: ;
    PUSH32(esp, 0x0008A964u); RECOMP_ABI_CALL(0x00060C00u, sub_00060C00); /* call 0x00060C00 */

loc_0008A964: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0008A96Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A96B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008A97B; /* je: equal / zero */

loc_0008A96F: ;
    PUSH32(esp, 0x0008A974u); RECOMP_ABI_CALL(0x00060C00u, sub_00060C00); /* call 0x00060C00 */

loc_0008A974: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0008A97Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A97B: ;
    PUSH32(esp, 0x0008A980u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A980: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0008A987u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A987: ;
    PUSH32(esp, 0x0008A98Cu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A98C: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0008A998u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A998: ;
    edi = eax;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0008A9A3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A9A3: ;
    ebx = 0; /* xor self */

loc_0008A9A5: ;
    eax = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0008A9AFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A9AF: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x1E (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008A9A5; /* jl: less (signed <) */

loc_0008A9B5: ;
    PUSH32(esp, 0x0008A9BAu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A9BA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008A9C1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A9C1: ;
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, 0x0008A9C9u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008A9C9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0008A9D2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008A9D2: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    ecx = MEM32(esp + 0xD4);
    PUSH32(esp, 0x0008A9E4u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0008A9E4: ;
    esp = esp + 0xD8;
    esp += 4; return; /* ret */

loc_0008A9EB: ;
    SET_LO8(eax, 1);
    goto loc_0008A9F3;

loc_0008A9EF: ;
    SET_LO8(eax, MEM8(esp + 0x17));

loc_0008A9F3: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008AB8C; /* je: equal / zero */

loc_0008A9FE: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008AB94; /* je: equal / zero */

loc_0008AA09: ;
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    MEM8(esi + 0x10) = LO8(eax);
    MEM8(esp + 0x1C) = 0;
    PUSH32(esp, 0x0008AA18u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008AA18: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0008AA29u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008AA29: ;
    PUSH32(esp, 0x0008AA2Eu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0008AA2E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x806);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0008AA3Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008AA3A: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008AA4Au); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_0008AA4A: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x0008AA52u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0008AA52: ;
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0008AA5Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008AA5A: ;
    PUSH32(esp, 0x0008AA5Fu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0008AA5F: ;
    edx = MEM32(eax);
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0008AA6Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008AA6B: ;
    PUSH32(esp, 0x0008AA70u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0008AA70: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3CF7AC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x0008AA7Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008AA7C: ;
    PUSH32(esp, 0x0008AA81u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0008AA81: ;
    edi = eax;
    PUSH32(esp, 0x0008AA88u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0008AA88: ;
    ebx = eax;
    eax = MEM32(edi);
    ebp = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x802);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0008AA98u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008AA98: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(ebp + 0x3C); PUSH32(esp, 0x0008AAA0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008AAA0: ;
    PUSH32(esp, 0x0008AAA5u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0008AAA5: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0008AAB1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008AAB1: ;
    PUSH32(esp, 0x0008AAB6u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0008AAB6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0008AABFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008AABF: ;
    PUSH32(esp, 0x0008AAC4u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0008AAC4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0008AACBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008AACB: ;
    PUSH32(esp, 0x0008AAD0u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_0008AAD0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0008AADAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008AADA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008AB09; /* jne: not equal / not zero */

loc_0008AADE: ;
    PUSH32(esp, 0x0008AAE3u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0008AAE3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0008AAEFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008AAEF: ;
    PUSH32(esp, 0x0008AAF4u); RECOMP_ABI_CALL(0x0007AB20u, sub_0007AB20); /* call 0x0007AB20 */

loc_0008AAF4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0008AAFBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008AAFB: ;
    PUSH32(esp, 0x0008AB00u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0008AB00: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0008AB09u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008AB09: ;
    PUSH32(esp, 0x0008AB0Eu); RECOMP_ABI_CALL(0x00060C00u, sub_00060C00); /* call 0x00060C00 */

loc_0008AB0E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0008AB15u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008AB15: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008AB25; /* je: equal / zero */

loc_0008AB19: ;
    PUSH32(esp, 0x0008AB1Eu); RECOMP_ABI_CALL(0x00060C00u, sub_00060C00); /* call 0x00060C00 */

loc_0008AB1E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0008AB25u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008AB25: ;
    PUSH32(esp, 0x0008AB2Au); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008AB2A: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0008AB36u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008AB36: ;
    ebx = eax;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0008AB41u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008AB41: ;
    edi = 0; /* xor self */

loc_0008AB43: ;
    eax = MEM32(ebx);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0008AB4Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008AB4D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1E (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008AB43; /* jl: less (signed <) */

loc_0008AB53: ;
    PUSH32(esp, 0x0008AB58u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008AB58: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008AB5Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008AB5F: ;
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, 0x0008AB67u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008AB67: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0008AB73u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008AB73: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    ecx = MEM32(esp + 0xD4);
    PUSH32(esp, 0x0008AB85u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0008AB85: ;
    esp = esp + 0xD8;
    esp += 4; return; /* ret */

loc_0008AB8C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008AB94; /* jne: not equal / not zero */

loc_0008AB90: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) | 4;

loc_0008AB94: ;
    ecx = MEM32(esp + 0xE4);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    PUSH32(esp, 0x0008ABA6u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0008ABA6: ;
    esp = esp + 0xD8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008ABB0
 * Original: 0x0008ABB0 - 0x0008AD9D (493 bytes, 175 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008ABB0(void)
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

loc_0008ABB0: ;
    eax = MEM32(ecx + 4);
    esp = esp - 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_0008AD92; /* jl: less (signed <) */

loc_0008ABC2: ;
    esi = MEM32(esp + 0x3C);
    edi = MEM32(esp + 0x38);
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 8); /* fsub dword ptr [edi + 8] */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 4); /* fsub dword ptr [edi + 4] */
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = fp_top() - MEMF(edi); /* fsub dword ptr [edi] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C93C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c93c0] */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0008AD92; /* jnp: not parity */

loc_0008AC01: ;
    PUSH32(esp, 0x0008AC06u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_0008AC06: ;
    edx = MEM32(eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xC3160000u);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x0008AC1Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008AC1B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008AD92; /* jne: not equal / not zero */

loc_0008AC23: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CF730)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cf730] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008AC4D; /* je: equal / zero */

loc_0008AC36: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CF730)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cf730] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008AD92; /* jne: not equal / not zero */

loc_0008AC4D: ;
    PUSH32(esp, 0x0008AC52u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_0008AC52: ;
    edx = MEM32(eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xC3160000u);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x0008AC67u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008AC67: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ebx = MEM32(esp + 0x34);
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CF730)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3cf730] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008ACE7; /* jne: not equal / not zero */

loc_0008AC7E: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008ACE9; /* jp: parity */

loc_0008AC8F: ;
    PUSH32(esp, 0x0008AC94u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_0008AC94: ;
    ecx = MEM32(edi);
    esp = esp - 0xC;
    edx = esp;
    MEM32(edx) = ecx;
    ecx = MEM32(edi + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(edi + 8);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(esi);
    esp = esp - 0xC;
    edx = esp;
    MEM32(edx) = ecx;
    ecx = MEM32(esi + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F4CCCCD);
    MEM32(edx + 8) = ecx;
    edx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x164); PUSH32(esp, 0x0008ACD5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008ACD5: ;
    edx = MEM32(eax);
    MEM32(esi) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 4) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 8) = edx;
    goto loc_0008ACE9;

loc_0008ACE7: ;
    fp_pop(); /* fstp st(0) */

loc_0008ACE9: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CF730)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3cf730] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008AD65; /* jne: not equal / not zero */

loc_0008ACFC: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008AD67; /* jp: parity */

loc_0008AD0D: ;
    PUSH32(esp, 0x0008AD12u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_0008AD12: ;
    ecx = MEM32(edi);
    esp = esp - 0xC;
    edx = esp;
    MEM32(edx) = ecx;
    ecx = MEM32(edi + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(edi + 8);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(esi);
    esp = esp - 0xC;
    edx = esp;
    MEM32(edx) = ecx;
    ecx = MEM32(esi + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F4CCCCD);
    MEM32(edx + 8) = ecx;
    edx = MEM32(eax);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x164); PUSH32(esp, 0x0008AD53u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008AD53: ;
    edx = MEM32(eax);
    MEM32(esi) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 4) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 8) = edx;
    goto loc_0008AD67;

loc_0008AD65: ;
    fp_pop(); /* fstp st(0) */

loc_0008AD67: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008AD92; /* jp: parity */

loc_0008AD78: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008AD92; /* jp: parity */

loc_0008AD87: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 16; return; /* ret 12 */

loc_0008AD92: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008ADA0
 * Original: 0x0008ADA0 - 0x0008AFDF (575 bytes, 183 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008ADA0(void)
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

loc_0008ADA0: ;
    esp = esp - 0x5C;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 2 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = 0x3F800000;
    if (CMP_L(_fas, _fbs)) goto loc_0008AFD3; /* jl: less (signed <) */

loc_0008ADBD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0008ADC2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008ADC2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008AFD3; /* jne: not equal / not zero */

loc_0008ADCA: ;
    edi = MEM32(esp + 0x70);
    ebx = 0; /* xor self */

loc_0008ADD0: ;
    PUSH32(esp, 0x0008ADD5u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008ADD5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008ADDCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008ADDC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008ADED; /* jle: less or equal (signed <=) */

loc_0008ADE1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    eax = eax * 4 + 0x48585C;
    if (CMP_L(_fas, _fbs)) goto loc_0008ADF2; /* jl: less (signed <) */

loc_0008ADED: ;
    eax = 0x498D90;

loc_0008ADF2: ;
    eax = MEM32(eax);
    ecx = esp + 0x70;
    MEM32(esp + 0x70) = eax;
    PUSH32(esp, 0x0008AE01u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0008AE01: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008AFB5; /* je: equal / zero */

loc_0008AE0B: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0008AE11u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008AE11: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008AFB5; /* je: equal / zero */

loc_0008AE33: ;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008AFB5; /* jne: not equal / not zero */

loc_0008AE4A: ;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    eax = MEM32(esi + 0x20);
    fp_top() = fp_top() + MEMF(0x44E550); /* fadd dword ptr [0x44e550] */
    ecx = MEM32(esi + 0x24);
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = ecx;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0008AE6Au); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_0008AE6A: ;
    edx = MEM32(eax);
    ecx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xC47A0000u);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x0008AE83u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008AE83: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008AFA2; /* jne: not equal / not zero */

loc_0008AE8B: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0008AF6C; /* jnp: not parity */

loc_0008AEA0: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x28);
    ecx = esp + 0x18;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = 0;
    PUSH32(esp, 0x0008AEC7u); RECOMP_ABI_CALL(0x00120950u, sub_00120950); /* call 0x00120950 */

loc_0008AEC7: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x44) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x48) = edx;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(edi)); /* fld float */
    esp = esp + 8;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008AEF1; /* jne: not equal / not zero */

loc_0008AEE9: ;
    fp_push(MEMF(0x3CF7D0)); /* fld float */
    goto loc_0008AEF7;

loc_0008AEF1: ;
    fp_push(MEMF(0x3CF7CC)); /* fld float */

loc_0008AEF7: ;
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0008AF0Eu); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_0008AF0E: ;
    fp_push(MEMF(eax)); /* fld float */
    esp = esp + 8;
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CA9D8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3ca9d8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008AF78; /* jne: not equal / not zero */

loc_0008AF5B: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008AF7A; /* jne: not equal / not zero */

loc_0008AF6C: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x5C;
    esp += 12; return; /* ret 8 */

loc_0008AF78: ;
    fp_pop(); /* fstp st(0) */

loc_0008AF7A: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CF730)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3cf730] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008AFA0; /* jne: not equal / not zero */

loc_0008AF8D: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008AF6C; /* je: equal / zero */

loc_0008AF9E: ;
    goto loc_0008AFA2;

loc_0008AFA0: ;
    fp_pop(); /* fstp st(0) */

loc_0008AFA2: ;
    ecx = MEM32(esp + 0x14);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008AFB5u); RECOMP_ABI_CALL(0x0008A530u, sub_0008A530); /* call 0x0008A530 */

loc_0008AFB5: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008ADD0; /* jl: less (signed <) */

loc_0008AFBF: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = MEM32(esp + 0x74);
    fp_top() = fp_top() * MEMF(edi); /* fmul dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */

loc_0008AFD3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x5C;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008AFE0
 * Original: 0x0008AFE0 - 0x0008B095 (181 bytes, 60 insns)
 * CC: cdecl, 6 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0008AFE0(void)
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

loc_0008AFE0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = fp_top() - MEMF(eax); /* fsub dword ptr [eax] */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(eax + 4); /* fsub dword ptr [eax + 4] */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(eax + 8); /* fsub dword ptr [eax + 8] */
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_0008B049; /* jle: less or equal (signed <=) */

loc_0008B024: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008B049; /* jne: not equal / not zero */

loc_0008B02C: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = fp_top() * MEMF(0x3CF738); /* fmul dword ptr [0x3cf738] */
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    PUSH32(esp, 0x0008B045u); RECOMP_ABI_CALL(0x00341990u, sub_00341990); /* call 0x00341990 */

loc_0008B045: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_0008B049: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0008B058u); RECOMP_ABI_CALL(0x00341446u, sub_00341446); /* call 0x00341446 */

loc_0008B058: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008B063; /* jne: not equal / not zero */

loc_0008B05F: ;
    MEM32(esp + 0xC) = eax;

loc_0008B063: ;
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() + MEMF(eax); /* fadd dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(esi); /* fmul dword ptr [esi] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 4); /* fmul dword ptr [esi + 4] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 8); /* fmul dword ptr [esi + 8] */
    POP32(esp, esi);
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008B0A0
 * Original: 0x0008B0A0 - 0x0008B357 (695 bytes, 228 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B0A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008B0A0: ;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x0008B0AEu); RECOMP_ABI_CALL(0x000BF750u, sub_000BF750); /* call 0x000BF750 */

loc_0008B0AE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B0BF; /* je: equal / zero */

loc_0008B0B2: ;
    PUSH32(esp, 0x0008B0B7u); RECOMP_ABI_CALL(0x000C5A00u, sub_000C5A00); /* call 0x000C5A00 */

loc_0008B0B7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B34F; /* je: equal / zero */

loc_0008B0BF: ;
    edi = 0x48585C;
    esi = 0; /* xor self */
    MEM32(esp + 0x10) = edi;
    /* nop */

loc_0008B0D0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008B0DC; /* jle: less or equal (signed <=) */

loc_0008B0D5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    eax = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0008B0E1; /* jl: less (signed <) */

loc_0008B0DC: ;
    eax = 0x498D90;

loc_0008B0E1: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0008B0FC; /* je: equal / zero */

loc_0008B0EB: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0008B0F4u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_0008B0F4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008B1A8; /* jne: not equal / not zero */

loc_0008B0FC: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0008B104u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B104: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008B1A8; /* jne: not equal / not zero */

loc_0008B10C: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0008B114u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B114: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B1A8; /* je: equal / zero */

loc_0008B11C: ;
    PUSH32(esp, 0x0008B121u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008B121: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0008B129u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B129: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0008B132u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B132: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x48585C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x48585C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008B164; /* jl: less (signed <) */

loc_0008B13A: ;
    PUSH32(esp, 0x0008B13Fu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008B13F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0008B146u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B146: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008B164; /* jge: greater or equal (signed >=) */

loc_0008B14A: ;
    SET_LO8(eax, MEM8(esi + ebx + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008B155; /* jne: not equal / not zero */

loc_0008B152: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0008B155: ;
    MEM8(esi + ebx + 0x11) = 1;
    MEM8(esi + ebx + 0x15) = 0;
    MEM8(esi + ebx + 0x1D) = 1;

loc_0008B164: ;
    PUSH32(esp, esi);
    eax = esp + 0x20;
    PUSH32(esp, 0x1B);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008B171u); RECOMP_ABI_CALL(0x000311A0u, sub_000311A0); /* call 0x000311A0 */

loc_0008B171: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x0008B179u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0008B179: ;
    edi = eax;
    PUSH32(esp, 0x0008B180u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0008B180: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ebp = eax;
    eax = MEM32(ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CF7D4);
    ecx = edi;
    MEM32(esp + 0x20) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0008B199u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B199: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0008B1A3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B1A3: ;
    MEM8(esi + ebx + 0x1D) = 1;

loc_0008B1A8: ;
    PUSH32(esp, 0x0008B1ADu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008B1AD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0008B1B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B1B4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B33A; /* je: equal / zero */

loc_0008B1BC: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0008B1C4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B1C4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B33A; /* je: equal / zero */

loc_0008B1CC: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0008B1D4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B1D4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B33A; /* je: equal / zero */

loc_0008B1DC: ;
    PUSH32(esp, 0x0008B1E1u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008B1E1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0008B1E9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B1E9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0008B1F2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B1F2: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x48585C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0x48585C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008B22B; /* jl: less (signed <) */

loc_0008B1FC: ;
    PUSH32(esp, 0x0008B201u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008B201: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0008B208u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B208: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008B22B; /* jge: greater or equal (signed >=) */

loc_0008B20C: ;
    SET_LO8(eax, MEM8(esi + ebx + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B217; /* je: equal / zero */

loc_0008B214: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) - 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0008B217: ;
    MEM8(esi + ebx + 0x11) = 0;
    MEM8(esi + ebx + 0x15) = 0;
    MEM8(esi + ebx + 0x19) = 0;
    MEM8(esi + ebx + 0x1D) = 0;

loc_0008B22B: ;
    PUSH32(esp, 0x0008B230u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008B230: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008B237u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B237: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008B261; /* jne: not equal / not zero */

loc_0008B23B: ;
    PUSH32(esp, 0x0008B240u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008B240: ;
    edi = eax;
    PUSH32(esp, 0x0008B247u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008B247: ;
    edx = MEM32(edi);
    ebp = eax;
    eax = MEM32(ebp);
    ecx = edi;
    MEM32(esp + 0x14) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0008B257u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B257: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0008B261u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B261: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x0008B26Au); RECOMP_ABI_CALL(0x000322B0u, sub_000322B0); /* call 0x000322B0 */

loc_0008B26A: ;
    PUSH32(esp, 0x0008B26Fu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0008B26F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xE0); PUSH32(esp, 0x0008B282u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B282: ;
    ecx = MEM32(esp + 0x34);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0008B33A; /* jle: less or equal (signed <=) */

loc_0008B294: ;
    edx = MEM32(esp + eax * 4 + 0x20);
    ecx = esp + 0x18;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x0008B2A5u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0008B2A5: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B325; /* je: equal / zero */

loc_0008B2AB: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0008B2B1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B2B1: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B325; /* je: equal / zero */

loc_0008B2CF: ;
    _fa = (uint32_t)(MEM32(edi + 0x330)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x330), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008B325; /* jne: not equal / not zero */

loc_0008B2D7: ;
    PUSH32(esp, 0x0008B2DCu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008B2DC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008B2E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B2E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B2FC; /* je: equal / zero */

loc_0008B2E8: ;
    PUSH32(esp, 0x0008B2EDu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008B2ED: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008B2F4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B2F4: ;
    MEM32(edi + 0x330) = eax;
    goto loc_0008B306;

loc_0008B2FC: ;
    MEM32(edi + 0x330) = 0;

loc_0008B306: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x498D90);
    eax = esp;
    MEM32(esp + 0x1C) = esp;
    PUSH32(esp, esi);
    MEM32(eax) = ecx;
    PUSH32(esp, 0x0008B31Bu); RECOMP_ABI_CALL(0x00030F00u, sub_00030F00); /* call 0x00030F00 */

loc_0008B31B: ;
    esp = esp + 8;
    ecx = edi;
    PUSH32(esp, 0x0008B325u); RECOMP_ABI_CALL(0x0002EC40u, sub_0002EC40); /* call 0x0002EC40 */

loc_0008B325: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x34);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0008B294; /* jl: less (signed <) */

loc_0008B33A: ;
    edi = MEM32(esp + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0008B0D0; /* jl: less (signed <) */

loc_0008B34F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_0008B360
 * Original: 0x0008B360 - 0x0008BBC2 (2146 bytes, 667 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B360(void)
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

loc_0008B360: ;
    esp = esp - 0xAC;
    fp_push(MEMF(0x5BC9D0)); /* fld float */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xB8);
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x5BC9D4);
    PUSH32(esp, esi);
    MEM32(ebp + 4) = eax;
    SET_LO8(eax, MEM8(esp + 0xC4));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(0x5BC9D8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(ebp + 8) = ecx;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x28) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_0008B492; /* je: equal / zero */

loc_0008B3BE: ;
    edx = MEM32(0x4858AC);
    ecx = esp + 0x3C;
    MEM32(esp + 0x3C) = edx;
    PUSH32(esp, 0x0008B3D1u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0008B3D1: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B3FB; /* je: equal / zero */

loc_0008B3D7: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0008B3DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B3DD: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008B3FD; /* jne: not equal / not zero */

loc_0008B3FB: ;
    esi = 0; /* xor self */

loc_0008B3FD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebx = esi;
    MEM32(esp + 0x18) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_0008B492; /* je: equal / zero */

loc_0008B40B: ;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0008B419u); RECOMP_ABI_CALL(0x00341446u, sub_00341446); /* call 0x00341446 */

loc_0008B419: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B48C; /* je: equal / zero */

loc_0008B420: ;
    fp_push(MEMF(esi + 0x24)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0008B42Eu); RECOMP_ABI_CALL(0x00341446u, sub_00341446); /* call 0x00341446 */

loc_0008B42E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B48C; /* je: equal / zero */

loc_0008B435: ;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0008B443u); RECOMP_ABI_CALL(0x00341446u, sub_00341446); /* call 0x00341446 */

loc_0008B443: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B48C; /* je: equal / zero */

loc_0008B44A: ;
    ecx = MEM32(esi + 0x2C);
    edx = ecx;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0x0008B459u); RECOMP_ABI_CALL(0x000120D0u, sub_000120D0); /* call 0x000120D0 */

loc_0008B459: ;
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B48C; /* je: equal / zero */

loc_0008B460: ;
    eax = MEM32(esi + 0x30);
    ecx = eax;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x0008B46Fu); RECOMP_ABI_CALL(0x000120D0u, sub_000120D0); /* call 0x000120D0 */

loc_0008B46F: ;
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B48C; /* je: equal / zero */

loc_0008B476: ;
    edx = MEM32(esi + 0x34);
    eax = edx;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x0008B485u); RECOMP_ABI_CALL(0x000120D0u, sub_000120D0); /* call 0x000120D0 */

loc_0008B485: ;
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008B492; /* jne: not equal / not zero */

loc_0008B48C: ;
    ebx = 0; /* xor self */
    MEM32(esp + 0x18) = ebx;

loc_0008B492: ;
    SET_LO8(eax, MEM8(esp + 0xD0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B57C; /* je: equal / zero */

loc_0008B4A1: ;
    PUSH32(esp, 0x0008B4A6u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_0008B4A6: ;
    edx = MEM32(eax);
    ecx = esp + 0x48;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0008B4B2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B4B2: ;
    ecx = esp + 0x48;
    PUSH32(esp, 0x0008B4BBu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0008B4BB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B4E5; /* je: equal / zero */

loc_0008B4C1: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0008B4C7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B4C7: ;
    edx = MEM32(0x48D8FC);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008B4E7; /* jne: not equal / not zero */

loc_0008B4E5: ;
    esi = 0; /* xor self */

loc_0008B4E7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = esi;
    MEM32(esp + 0x28) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_0008B57C; /* je: equal / zero */

loc_0008B4F5: ;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0008B503u); RECOMP_ABI_CALL(0x00341446u, sub_00341446); /* call 0x00341446 */

loc_0008B503: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B576; /* je: equal / zero */

loc_0008B50A: ;
    fp_push(MEMF(esi + 0x24)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0008B518u); RECOMP_ABI_CALL(0x00341446u, sub_00341446); /* call 0x00341446 */

loc_0008B518: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B576; /* je: equal / zero */

loc_0008B51F: ;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0008B52Du); RECOMP_ABI_CALL(0x00341446u, sub_00341446); /* call 0x00341446 */

loc_0008B52D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B576; /* je: equal / zero */

loc_0008B534: ;
    eax = MEM32(esi + 0x2C);
    ecx = eax;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x0008B543u); RECOMP_ABI_CALL(0x000120D0u, sub_000120D0); /* call 0x000120D0 */

loc_0008B543: ;
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B576; /* je: equal / zero */

loc_0008B54A: ;
    edx = MEM32(esi + 0x30);
    eax = edx;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x0008B559u); RECOMP_ABI_CALL(0x000120D0u, sub_000120D0); /* call 0x000120D0 */

loc_0008B559: ;
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B576; /* je: equal / zero */

loc_0008B560: ;
    ecx = MEM32(esi + 0x34);
    edx = ecx;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0x0008B56Fu); RECOMP_ABI_CALL(0x000120D0u, sub_000120D0); /* call 0x000120D0 */

loc_0008B56F: ;
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008B57C; /* jne: not equal / not zero */

loc_0008B576: ;
    edi = 0; /* xor self */
    MEM32(esp + 0x28) = edi;

loc_0008B57C: ;
    PUSH32(esp, 0x0008B581u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_0008B581: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x0008B58Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B58D: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 4);
    esi = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0008B72F; /* jg: greater (signed >) */

loc_0008B5A1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008B72F; /* jne: not equal / not zero */

loc_0008B5A9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008B72F; /* jne: not equal / not zero */

loc_0008B5B1: ;
    eax = 0x48585C;
    MEM32(esp + 0x28) = eax;
    /* nop */

loc_0008B5C0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008B5CA; /* jle: less or equal (signed <=) */

loc_0008B5C5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008B5CF; /* jl: less (signed <) */

loc_0008B5CA: ;
    eax = 0x498D90;

loc_0008B5CF: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x48) = ecx;
    ecx = esp + 0x48;
    PUSH32(esp, 0x0008B5DEu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0008B5DE: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B608; /* je: equal / zero */

loc_0008B5E4: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0008B5EAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B5EA: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008B633; /* jne: not equal / not zero */

loc_0008B608: ;
    eax = MEM32(esp + 0x28);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    MEM32(esp + 0x28) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0008B5C0; /* jl: less (signed <) */

loc_0008B619: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 8) = 0;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0xAC;
    esp += 24; return; /* ret 20 */

loc_0008B633: ;
    eax = MEM32(esi + 0x20);
    MEM32(ebp) = eax;
    ecx = MEM32(esi + 0x24);
    MEM32(ebp + 4) = ecx;
    edx = MEM32(esi + 0x28);
    MEM32(ebp + 8) = edx;
    fp_push(MEMF(0x44E550)); /* fld float */
    fp_top() = fp_top() + MEMF(ebp + 8); /* fadd dword ptr [ebp + 8] */
    SET_LO8(ebx, 8);
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(esi + 0x334));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B6BF; /* je: equal / zero */

loc_0008B65D: ;
    SET_LO8(eax, MEM8(esp + 0xCC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B6A6; /* je: equal / zero */

loc_0008B668: ;
    fp_push(MEMF(esi + 0x140)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x28); /* fadd dword ptr [esi + 0x28] */
    fp_top() = fp_top() - MEMF(esi + 0x1E4); /* fsub dword ptr [esi + 0x1e4] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CEA68)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cea68] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008B694; /* jp: parity */

loc_0008B688: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    goto loc_0008B6A6;

loc_0008B694: ;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0008B69Bu); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_0008B69B: ;
    edx = MEM32(eax);
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xD0); PUSH32(esp, 0x0008B6A6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B6A6: ;
    _fa = (uint32_t)(MEM8(esi + 0x334)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x334), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B6BF; /* je: equal / zero */

loc_0008B6AE: ;
    PUSH32(esp, 0x0008B6B3u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_0008B6B3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x0008B6BFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B6BF: ;
    PUSH32(esp, 0x0008B6C4u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008B6C4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0008B6CBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B6CB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008B6EA; /* jne: not equal / not zero */

loc_0008B6CF: ;
    eax = MEM32(esi + 0x34);
    ecx = eax;
    PUSH32(esp, ecx);
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, 0x0008B6DEu); RECOMP_ABI_CALL(0x001206E0u, sub_001206E0); /* call 0x001206E0 */

loc_0008B6DE: ;
    edx = MEM32(esp + 0xC8);
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;

loc_0008B6EA: ;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = MEM32(esp + 0x14);
    if (TEST_NZ(_fa, _fb)) goto loc_0008B718; /* jne: not equal / not zero */

loc_0008B701: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 8) = 1;
    eax = MEM32(eax + 4);
    POP32(esp, ebx);
    esp = esp + 0xAC;
    esp += 24; return; /* ret 20 */

loc_0008B718: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 8) = 0;
    eax = MEM32(eax + 4);
    POP32(esp, ebx);
    esp = esp + 0xAC;
    esp += 24; return; /* ret 20 */

loc_0008B72F: ;
    ecx = esp + 0x7C;
    PUSH32(esp, 0x0008B738u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0008B738: ;
    PUSH32(esp, 0x0008B73Du); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_0008B73D: ;
    edx = MEM32(eax);
    ecx = esp + 0x7C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC4); PUSH32(esp, 0x0008B74Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B74C: ;
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    ecx = esp + 0x80;
    PUSH32(esp, 0x0008B75Du); RECOMP_ABI_CALL(0x0023E480u, sub_0023E480); /* call 0x0023E480 */

loc_0008B75D: ;
    ecx = esp + 0x58;
    PUSH32(esp, 0x0008B766u); RECOMP_ABI_CALL(0x000322B0u, sub_000322B0); /* call 0x000322B0 */

loc_0008B766: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    eax = 4;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x1C) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0008B79F; /* je: equal / zero */

loc_0008B77B: ;
    PUSH32(esp, 0x0008B780u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0008B780: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xE0); PUSH32(esp, 0x0008B793u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B793: ;
    eax = MEM32(esp + 0x6C);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x1C) = esi;

loc_0008B79F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B7A7; /* je: equal / zero */

loc_0008B7A3: ;
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0008B7A7: ;
    edx = MEM32(esp + 0x14);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(edx + 8) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_0008B8DE; /* jle: less or equal (signed <=) */

loc_0008B7B8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B845; /* je: equal / zero */

loc_0008B7C0: ;
    eax = MEM32(esp + edi * 4 + 0x58);
    ecx = esp + 0x44;
    MEM32(esp + 0x44) = eax;
    PUSH32(esp, 0x0008B7D1u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0008B7D1: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B7FB; /* je: equal / zero */

loc_0008B7D7: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0008B7DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B7DD: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008B7FD; /* jne: not equal / not zero */

loc_0008B7FB: ;
    esi = 0; /* xor self */

loc_0008B7FD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B8CD; /* je: equal / zero */

loc_0008B805: ;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    edx = esi + 0x240;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008B8BA; /* jne: not equal / not zero */

loc_0008B822: ;
    ecx = MEM32(esi + 0x1C);
    esi = MEM32(esi + 0x330);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008B83C; /* jle: less or equal (signed <=) */

loc_0008B830: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    eax = esi * 4 + 0x48585C;
    if (CMP_L(_fas, _fbs)) goto loc_0008B841; /* jl: less (signed <) */

loc_0008B83C: ;
    eax = 0x498D90;

loc_0008B841: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    goto loc_0008B8B1;

loc_0008B845: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008B856; /* jle: less or equal (signed <=) */

loc_0008B84A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    eax = edi * 4 + 0x48585C;
    if (CMP_L(_fas, _fbs)) goto loc_0008B85B; /* jl: less (signed <) */

loc_0008B856: ;
    eax = 0x498D90;

loc_0008B85B: ;
    eax = MEM32(eax);
    ecx = esp + 0x40;
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, 0x0008B86Au); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0008B86A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B894; /* je: equal / zero */

loc_0008B870: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0008B876u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B876: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008B896; /* jne: not equal / not zero */

loc_0008B894: ;
    esi = 0; /* xor self */

loc_0008B896: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B8CD; /* je: equal / zero */

loc_0008B89A: ;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    edx = esi + 0x240;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */

loc_0008B8B1: ;
    if (_flags /* jne: not equal / not zero */) goto loc_0008B8BA;

loc_0008B8B3: ;
    eax = MEM32(esp + 0x14);
    MEM32(eax + 8) = MEM32(eax + 8) + 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0008B8BA: ;
    fp_push(MEMF(edx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008B8CD; /* jne: not equal / not zero */

loc_0008B8C9: ;
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0008B8CD: ;
    eax = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x18);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008B7B8; /* jl: less (signed <) */

loc_0008B8DE: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0008BA4A; /* jle: less or equal (signed <=) */

loc_0008B8E8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B8FA; /* je: equal / zero */

loc_0008B8EC: ;
    eax = MEM32(esp + edi * 4 + 0x58);
    MEM32(esp + 0x40) = eax;
    ecx = esp + 0x40;
    goto loc_0008B91A;

loc_0008B8FA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008B90B; /* jle: less or equal (signed <=) */

loc_0008B8FF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    eax = edi * 4 + 0x48585C;
    if (CMP_L(_fas, _fbs)) goto loc_0008B910; /* jl: less (signed <) */

loc_0008B90B: ;
    eax = 0x498D90;

loc_0008B910: ;
    eax = MEM32(eax);
    MEM32(esp + 0x44) = eax;
    ecx = esp + 0x44;

loc_0008B91A: ;
    PUSH32(esp, 0x0008B91Fu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0008B91F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B949; /* je: equal / zero */

loc_0008B925: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0008B92Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B92B: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008B94B; /* jne: not equal / not zero */

loc_0008B949: ;
    esi = 0; /* xor self */

loc_0008B94B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008BA39; /* je: equal / zero */

loc_0008B953: ;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008BA39; /* jne: not equal / not zero */

loc_0008B96A: ;
    eax = MEM32(esi + 0x20);
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = fp_top() + MEMF(0x44E550); /* fadd dword ptr [0x44e550] */
    ecx = MEM32(esi + 0x24);
    MEM32(esp + 0x30) = eax;
    SET_LO8(eax, MEM8(esi + 0x334));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x34) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0008B9DA; /* je: equal / zero */

loc_0008B98F: ;
    SET_LO8(eax, MEM8(esp + 0xCC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B9DA; /* je: equal / zero */

loc_0008B99A: ;
    fp_push(MEMF(esi + 0x140)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x28); /* fadd dword ptr [esi + 0x28] */
    fp_top() = fp_top() - MEMF(esi + 0x1E4); /* fsub dword ptr [esi + 0x1e4] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CB264)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3cb264] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008B9C4; /* jne: not equal / not zero */

loc_0008B9B6: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    goto loc_0008B9DA;

loc_0008B9C4: ;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0008B9CBu); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_0008B9CB: ;
    edx = MEM32(eax);
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xD0); PUSH32(esp, 0x0008B9DAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008B9DA: ;
    ebx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x84;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, 0x0008BA09u); RECOMP_ABI_CALL(0x0008AFE0u, sub_0008AFE0); /* call 0x0008AFE0 */

loc_0008BA09: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() + MEMF(ebp); /* fadd dword ptr [ebp] */
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(ebp + 4); /* fadd dword ptr [ebp + 4] */
    MEMF(ebp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    eax = MEM32(esp + 0x20);
    fp_top() = fp_top() + MEMF(ebp + 8); /* fadd dword ptr [ebp + 8] */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = eax;
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x34); /* fadd dword ptr [esi + 0x34] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0008BA3D;

loc_0008BA39: ;
    ebx = MEM32(esp + 0x18);

loc_0008BA3D: ;
    eax = MEM32(esp + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008B8E8; /* jl: less (signed <) */

loc_0008BA4A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008BB0A; /* je: equal / zero */

loc_0008BA52: ;
    edx = MEM32(ebx);
    eax = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008BA5Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008BA5E: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() + MEMF(ebx + 0x34); /* fadd dword ptr [ebx + 0x34] */
    esp = esp - 8;
    fp_top() = fp_top() + MEMF(0x3CF71C); /* fadd dword ptr [0x3cf71c] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x54); /* fsub dword ptr [esp + 0x54] */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x58); /* fsub dword ptr [esp + 0x58] */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x5C); /* fsub dword ptr [esp + 0x5c] */
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
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0008BAB4u); RECOMP_ABI_CALL(0x00341446u, sub_00341446); /* call 0x00341446 */

loc_0008BAB4: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008BAC3; /* jne: not equal / not zero */

loc_0008BABB: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    goto loc_0008BAC7;

loc_0008BAC3: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_0008BAC7: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    eax = MEM32(esp + 0x20);
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = eax;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + MEMF(ebp); /* fadd dword ptr [ebp] */
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(ebp + 4); /* fadd dword ptr [ebp + 4] */
    MEMF(ebp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() + MEMF(ebp + 8); /* fadd dword ptr [ebp + 8] */
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_0008BB0A: ;
    ecx = MEM32(esp + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008BB5D; /* je: equal / zero */

loc_0008BB12: ;
    edx = MEM32(ecx);
    eax = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008BB1Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008BB1C: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    edx = esp + 0x84;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008BB43u); RECOMP_ABI_CALL(0x0008AFE0u, sub_0008AFE0); /* call 0x0008AFE0 */

loc_0008BB43: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() + MEMF(ebp); /* fadd dword ptr [ebp] */
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(ebp + 4); /* fadd dword ptr [ebp + 4] */
    MEMF(ebp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(ebp + 8); /* fadd dword ptr [ebp + 8] */
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_0008BB5D: ;
    esi = MEM32(esp + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0008BBB3; /* jle: less or equal (signed <=) */

loc_0008BB65: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008BBB3; /* jne: not equal / not zero */

loc_0008BB76: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = fp_top() / MEMF(esp + 0x28); /* fdiv dword ptr [esp + 0x28] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ebp); /* fmul dword ptr [ebp] */
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ebp + 4); /* fmul dword ptr [ebp + 4] */
    MEMF(ebp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(ebp + 8); /* fmul dword ptr [ebp + 8] */
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    fp_top() = MEMF(esp + 0x30) / fp_top(); /* fdivr dword ptr [esp + 0x30] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0008BBA7u); RECOMP_ABI_CALL(0x001206E0u, sub_001206E0); /* call 0x001206E0 */

loc_0008BBA7: ;
    eax = MEM32(esp + 0xC8);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;

loc_0008BBB3: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xAC;
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008BBD0
 * Original: 0x0008BBD0 - 0x0008BC2C (92 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BBD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008BBD0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0008BBDFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008BBDF: ;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008BBEAu); RECOMP_ABI_CALL(0x00066B20u, sub_00066B20); /* call 0x00066B20 */

loc_0008BBEA: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008BC25; /* je: equal / zero */

loc_0008BBF1: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x0008BC15u); RECOMP_ABI_CALL(0x0008BC30u, sub_0008BC30); /* call 0x0008BC30 */

loc_0008BC15: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x0008BC1Eu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_0008BC1E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_0008BC25: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0008BC30
 * Original: 0x0008BC30 - 0x0008BC67 (55 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BC30(void)
{

loc_0008BC30: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    esi = ecx;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esi;
    MEM32(esp + 0x2C) = esp;
    PUSH32(esp, 0x0008BC5Bu); RECOMP_ABI_CALL(0x00079B60u, sub_00079B60); /* call 0x00079B60 */

loc_0008BC5B: ;
    MEM32(esi) = 0x3CF81C;
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0008BC70
 * Original: 0x0008BC70 - 0x0008BC76 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BC70(void)
{

loc_0008BC70: ;
    eax = 0x4A01D8;
    esp += 4; return; /* ret */

}

/**
 * sub_0008BC80
 * Original: 0x0008BC80 - 0x0008BC86 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BC80(void)
{

loc_0008BC80: ;
    eax = 0x3CF7F8;
    esp += 4; return; /* ret */

}

/**
 * sub_0008BC90
 * Original: 0x0008BC90 - 0x0008BCAE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BC90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008BC90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0008BC98u); RECOMP_ABI_CALL(0x0008BCB0u, sub_0008BCB0); /* call 0x0008BCB0 */

loc_0008BC98: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008BCA8; /* je: equal / zero */

loc_0008BC9F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008BCA5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_0008BCA5: ;
    esp = esp + 4;

loc_0008BCA8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008BCB0
 * Original: 0x0008BCB0 - 0x0008BCBB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BCB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008BCB0: ;
    MEM32(ecx) = 0x3CF81C;
    g_seh_ebp = ebp; sub_00075970(); return; /* tail jmp 0x00075970 */

}

/**
 * sub_0008BCC0
 * Original: 0x0008BCC0 - 0x0008BCCA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BCC0(void)
{

loc_0008BCC0: ;
    eax = ecx;
    MEM32(eax + 8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0008BCD0
 * Original: 0x0008BCD0 - 0x0008BCDC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BCD0(void)
{

loc_0008BCD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0008BCD8u); RECOMP_ABI_CALL(0x0008BCC0u, sub_0008BCC0); /* call 0x0008BCC0 */

loc_0008BCD8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008BCE0
 * Original: 0x0008BCE0 - 0x0008BCF7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BCE0(void)
{

loc_0008BCE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 4;
    PUSH32(esp, 0x0008BCEBu); RECOMP_ABI_CALL(0x0008BCD0u, sub_0008BCD0); /* call 0x0008BCD0 */

loc_0008BCEB: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x0008BCF3u); RECOMP_ABI_CALL(0x0008BCD0u, sub_0008BCD0); /* call 0x0008BCD0 */

loc_0008BCF3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008BD00
 * Original: 0x0008BD00 - 0x0008BD98 (152 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BD00(void)
{

loc_0008BD00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 0x8BCE0);
    PUSH32(esp, 0xA);
    esi = ecx;
    PUSH32(esp, 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008BD17u); RECOMP_ABI_CALL(0x003418A8u, sub_003418A8); /* call 0x003418A8 */

loc_0008BD17: ;
    ecx = 0; /* xor self */
    eax = esi + 0x148;
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    MEM32(edx + 0x18) = ecx;
    MEM32(edx + 0x1C) = ecx;
    MEM32(esi + 0x168) = ecx;
    MEM32(esi + 0x16C) = ecx;
    MEM32(esi + 0x170) = ecx;
    MEM32(esi + 0x174) = ecx;
    MEM32(esi + 0x178) = ecx;
    MEM32(esi + 0x17C) = ecx;
    MEM32(esi + 0x180) = ecx;
    MEM32(esi + 0x184) = ecx;
    MEM8(esi + 0x18D) = MEM8(esi + 0x18D) & 0xFC;
    MEM8(esi + 0x18C) = LO8(ecx);
    edx = 0; /* xor self */
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = edx;
    MEM32(esi + 0x144) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008BDA0
 * Original: 0x0008BDA0 - 0x0008BDB3 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BDA0(void)
{

loc_0008BDA0: ;
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x20);
    ecx = ecx + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008BDB2u); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_0008BDB2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008BDC0
 * Original: 0x0008BDC0 - 0x0008BE24 (100 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BDC0(void)
{

loc_0008BDC0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F87B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 0xA);
    eax = esi + 0x19C;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x0008BDFAu); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_0008BDFA: ;
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x20);
    esi = esi + 8;
    PUSH32(esp, esi);
    MEM32(esp + 0x20) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0008BE14u); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_0008BE14: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0008BE30
 * Original: 0x0008BE30 - 0x0008BEC5 (149 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BE30(void)
{

loc_0008BE30: ;
    xml1_progress_construct(ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F87B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3CF9C4;
    SET_LO8(ecx, MEM8(esi + 6));
    SET_LO8(eax, MEM8(esi + 4));
    SET_LO8(ecx, LO8(ecx) | 0xF);
    SET_LO8(eax, LO8(eax) & 0xEA);
    SET_LO8(eax, LO8(eax) | 0xA);
    MEM8(esi + 6) = LO8(ecx);
    ecx = esi + 8;
    MEM32(esp + 4) = esi;
    MEM8(esi + 4) = LO8(eax);
    MEM8(esi + 5) = 0x8A;
    PUSH32(esp, 0x0008BE72u); RECOMP_ABI_CALL(0x0008BD00u, sub_0008BD00); /* call 0x0008BD00 */

loc_0008BE72: ;
    SET_LO8(ecx, MEM8(esi + 0x198));
    SET_LO8(ecx, LO8(ecx) & 0xEA);
    SET_LO8(ecx, LO8(ecx) | 0xA);
    MEM8(esi + 0x198) = LO8(ecx);
    MEM8(esi + 0x19A) = MEM8(esi + 0x19A) | 0xF;
    ecx = esi + 0x19C;
    MEM32(esp + 0x10) = 0;
    MEM8(esi + 0x199) = 0x8A;
    PUSH32(esp, 0x0008BEA5u); RECOMP_ABI_CALL(0x0008BD00u, sub_0008BD00); /* call 0x0008BD00 */

loc_0008BEA5: ;
    SET_LO8(eax, MEM8(esi + 0x32C));
    ecx = MEM32(esp + 8);
    SET_LO8(eax, LO8(eax) & 0xFE);
    MEM8(esi + 0x32C) = LO8(eax);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0008BED0
 * Original: 0x0008BED0 - 0x0008BF42 (114 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BED0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008BED0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0008BEDAu); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0008BEDA: ;
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0008BEE5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008BEE5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(ebx + 0x14); PUSH32(esp, 0x0008BEEEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008BEEE: ;
    PUSH32(esp, 0x0008BEF3u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0008BEF3: ;
    edx = MEM32(esi);
    edi = eax;
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0008BEFEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008BEFE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(ebx + 0x20); PUSH32(esp, 0x0008BF07u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008BF07: ;
    PUSH32(esp, 0x0008BF0Cu); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008BF0C: ;
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x0008BF17u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008BF17: ;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx + 0x3C); PUSH32(esp, 0x0008BF1Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008BF1D: ;
    PUSH32(esp, 0x0008BF22u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_0008BF22: ;
    edx = MEM32(esi);
    edi = eax;
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0008BF2Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008BF2D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x34); PUSH32(esp, 0x0008BF33u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008BF33: ;
    PUSH32(esp, 0x0008BF38u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_0008BF38: ;
    edx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = eax;
    POP32(esp, ebx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x68)); return; /* indirect tail jmp */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008BF50
 * Original: 0x0008BF50 - 0x0008BF56 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BF50(void)
{

loc_0008BF50: ;
    eax = 0x194;
    esp += 4; return; /* ret */

}

/**
 * sub_0008BF60
 * Original: 0x0008BF60 - 0x0008BFE4 (132 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BF60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008BF60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edi + 0x50); PUSH32(esp, 0x0008BF69u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008BF69: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edi + 0x4C); PUSH32(esp, 0x0008BF72u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008BF72: ;
    edi = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edi + 0x58); PUSH32(esp, 0x0008BF79u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008BF79: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edi + 0x54); PUSH32(esp, 0x0008BF82u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008BF82: ;
    edi = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edi + 0x78); PUSH32(esp, 0x0008BF89u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008BF89: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x74); PUSH32(esp, 0x0008BF8Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008BF8F: ;
    edi = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edi + 0x80); PUSH32(esp, 0x0008BF99u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008BF99: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x7C); PUSH32(esp, 0x0008BF9Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008BF9F: ;
    edi = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edi + 0x88); PUSH32(esp, 0x0008BFA9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008BFA9: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x84); PUSH32(esp, 0x0008BFB2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008BFB2: ;
    edi = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edi + 0x70); PUSH32(esp, 0x0008BFB9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008BFB9: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x6C); PUSH32(esp, 0x0008BFBFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008BFBF: ;
    edi = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edi + 0x60); PUSH32(esp, 0x0008BFC6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008BFC6: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x5C); PUSH32(esp, 0x0008BFCCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008BFCC: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0008BFD3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008BFD3: ;
    SET_LO8(eax, MEM8(esi + 0x32C));
    SET_LO8(eax, LO8(eax) & 0xFE);
    POP32(esp, edi);
    MEM8(esi + 0x32C) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008BFF0
 * Original: 0x0008BFF0 - 0x0008C011 (33 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008BFF0: ;
    eax = ZX8(MEM8(ecx + 0x194));
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008C008; /* jle: less or equal (signed <=) */

loc_0008BFFF: ;
    MEM8(ecx + 0x194) = LO8(eax);
    esp += 8; return; /* ret 4 */

loc_0008C008: ;
    MEM8(ecx + 0x194) = LO8(edx);
    esp += 8; return; /* ret 4 */

}







/**
 * sub_0008C070
 * Original: 0x0008C070 - 0x0008C090 (32 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C070(void)
{

loc_0008C070: ;
    SET_LO8(eax, MEM8(ecx + 0x32C));
    SET_LO8(eax, LO8(eax) ^ MEM8(esp + 4));
    SET_LO8(edx, MEM8(ecx + 0x32C));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    MEM8(ecx + 0x32C) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008C090
 * Original: 0x0008C090 - 0x0008C099 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C090(void)
{

loc_0008C090: ;
    SET_LO8(eax, MEM8(ecx + 0x32C));
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0008C0A0
 * Original: 0x0008C0A0 - 0x0008C0DE (62 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C0A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008C0A0: ;
    SET_LO8(eax, MEM8(esp + 4));
    SET_LO8(eax, LO8(eax) << 3);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 6));
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    SET_LO8(eax, LO8(eax) & 8);
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    MEM8(ecx + 6) = LO8(eax);
    SET_LO8(eax, LO8(eax) >> 3);
    SET_LO8(edx, LO8(ebx));
    SET_LO8(ebx, MEM8(ecx + 0x32C));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(edx, LO8(edx) >> 3);
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    MEM8(ecx + 0x32C) = LO8(eax);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008C0E0
 * Original: 0x0008C0E0 - 0x0008C0F7 (23 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C0E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008C0E0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(ecx + 4));
    SET_LO8(eax, LO8(eax) & 0x1F);
    ecx = ZX8(LO8(eax));
    MEM32(esp) = ecx;
    fp_push((double)SMEM32(esp)); /* fild */
    fp_top() = fp_top() * MEMF(0x3C8240); /* fmul dword ptr [0x3c8240] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008C100
 * Original: 0x0008C100 - 0x0008C117 (23 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C100(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008C100: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(ecx + 5));
    SET_LO8(eax, LO8(eax) & 0x1F);
    ecx = ZX8(LO8(eax));
    MEM32(esp) = ecx;
    fp_push((double)SMEM32(esp)); /* fild */
    fp_top() = fp_top() * MEMF(0x3C8240); /* fmul dword ptr [0x3c8240] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008C120
 * Original: 0x0008C120 - 0x0008C129 (9 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C120(void)
{

loc_0008C120: ;
    SET_LO8(eax, MEM8(ecx + 6));
    SET_LO8(eax, LO8(eax) >> 3);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0008C130
 * Original: 0x0008C130 - 0x0008C16E (62 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008C130: ;
    SET_LO8(eax, MEM8(esp + 4));
    SET_LO8(eax, LO8(eax) << 2);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 6));
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    SET_LO8(eax, LO8(eax) & 4);
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    MEM8(ecx + 6) = LO8(eax);
    SET_LO8(eax, LO8(eax) >> 2);
    SET_LO8(edx, LO8(ebx));
    SET_LO8(ebx, MEM8(ecx + 0x32C));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(edx, LO8(edx) >> 2);
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    MEM8(ecx + 0x32C) = LO8(eax);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008C170
 * Original: 0x0008C170 - 0x0008C179 (9 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C170(void)
{

loc_0008C170: ;
    SET_LO8(eax, MEM8(ecx + 6));
    SET_LO8(eax, LO8(eax) >> 2);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0008C180
 * Original: 0x0008C180 - 0x0008C1BB (59 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008C180: ;
    SET_LO8(eax, MEM8(esp + 4));
    SET_LO8(eax, LO8(eax) << 1);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 6));
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    MEM8(ecx + 6) = LO8(eax);
    SET_LO8(eax, LO8(eax) >> 1);
    SET_LO8(edx, LO8(ebx));
    SET_LO8(ebx, MEM8(ecx + 0x32C));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(edx, LO8(edx) >> 1);
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    MEM8(ecx + 0x32C) = LO8(eax);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008C1C0
 * Original: 0x0008C1C0 - 0x0008C1C8 (8 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C1C0(void)
{

loc_0008C1C0: ;
    SET_LO8(eax, MEM8(ecx + 6));
    SET_LO8(eax, LO8(eax) >> 1);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0008C1D0
 * Original: 0x0008C1D0 - 0x0008C215 (69 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008C1D0: ;
    SET_LO8(edx, MEM8(ecx + 5));
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(edx));
    PUSH32(esp, esi);
    eax = eax >> 5;
    eax = eax & 3;
    esi = eax;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esp + 8));
    SET_LO8(eax, LO8(eax) << 5);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    SET_LO8(eax, LO8(eax) & 0x60);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    SET_LO8(edx, MEM8(ecx + 0x32C));
    MEM8(ecx + 5) = LO8(eax);
    eax = eax >> 5;
    eax = eax & 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) | LO8(edx));
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(ecx + 0x32C) = LO8(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008C1E6
 * Original: 0x0008C1E6 - 0x0008C215 (47 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C1E6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008C1E6: ;
    SET_LO8(eax, LO8(eax) << 5);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    SET_LO8(eax, LO8(eax) & 0x60);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    SET_LO8(edx, MEM8(ecx + 0x32C));
    MEM8(ecx + 5) = LO8(eax);
    eax = eax >> 5;
    eax = eax & 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) | LO8(edx));
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(ecx + 0x32C) = LO8(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008C220
 * Original: 0x0008C220 - 0x0008C22C (12 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C220(void)
{

loc_0008C220: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx + 5));
    eax = eax >> 5;
    eax = eax & 3;
    esp += 4; return; /* ret */

}

/**
 * sub_0008C230
 * Original: 0x0008C230 - 0x0008C26D (61 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008C230: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(ecx + 5));
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) >> 7);
    SET_LO8(eax, LO8(eax) & 0x7F);
    MEM8(esp + 3) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 8));
    SET_LO8(edx, LO8(edx) << 7);
    SET_LO8(eax, LO8(eax) | LO8(edx));
    SET_LO8(edx, MEM8(ecx + 0x32C));
    MEM8(ecx + 5) = LO8(eax);
    SET_LO8(eax, LO8(eax) >> 7);
    _fa = (uint32_t)(MEM8(esp + 3)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 3), LO8(eax) (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) | LO8(edx));
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(ecx + 0x32C) = LO8(eax);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008C270
 * Original: 0x0008C270 - 0x0008C277 (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C270(void)
{

loc_0008C270: ;
    SET_LO8(eax, MEM8(ecx + 5));
    SET_LO8(eax, LO8(eax) >> 7);
    esp += 4; return; /* ret */

}
