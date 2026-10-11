#include "engine/actors/raven_leader_event_guest.h"
#include "engine/powers/raven_victim_event_guest.h"
#include "engine/inventory/raven_stash_owner.h"
#include "engine/scripting/raven_script_extensions.h"
#include "engine/world/raven_campaign_state_guest.h"
#include "engine/world/raven_extraction_guest.h"
#include "engine/world/raven_extraction_owner.h"
/**
 * X-Men Legends - Recompiled code chunk 9
 * Functions: 250 (0x0007B0F0 - 0x000826F0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "game/xml1/newgame_plus.h"
#include "game/xml1/character_limits.h"
#include <math.h>

/**
 * sub_0007B0F0
 * Original: 0x0007B0F0 - 0x0007B10E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007B0F0(void)
{

loc_0007B0F0: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    eax = esp;
    ecx = ecx + 4;
    MEM32(eax) = edx;
    PUSH32(esp, 0x0007B10Bu); RECOMP_ABI_CALL(0x0007AE70u, sub_0007AE70); /* call 0x0007AE70 */

loc_0007B10B: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0007B110
 * Original: 0x0007B110 - 0x0007B116 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007B110(void)
{

loc_0007B110: ;
    eax = 0x378;
    esp += 4; return; /* ret */

}

/**
 * sub_0007B120
 * Original: 0x0007B120 - 0x0007B2FF (479 bytes, 152 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007B120(void)
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

loc_0007B120: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0007B132u); RECOMP_ABI_CALL(0x00097650u, sub_00097650); /* call 0x00097650 */

loc_0007B132: ;
    eax = MEM32(edi);
    ecx = esi + 0x370;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CD6CC);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0007B145u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007B145: ;
    edx = MEM32(edi);
    eax = esi + 0x36E;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CD6C4);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0007B158u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007B158: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007B163; /* je: equal / zero */

loc_0007B15C: ;
    MEM8(esi + 0x36C) = MEM8(esi + 0x36C) | 2;

loc_0007B163: ;
    SET_LO8(ecx, MEM8(esi + 0x36C));
    edx = MEM32(edi);
    SET_LO8(ecx, LO8(ecx) >> 2);
    SET_LO8(ecx, LO8(ecx) & 1);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM8(esp + 0x24) = LO8(ecx);
    PUSH32(esp, 0x3CD6B0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0007B184u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007B184: ;
    SET_LO8(ecx, MEM8(esp + 0x20));
    SET_LO8(eax, MEM8(esi + 0x36C));
    SET_LO8(ecx, LO8(ecx) << 2);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 4);
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    ebx = esi + 0x358;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM8(esi + 0x36C) = LO8(edx);
    edx = MEM32(edi);
    PUSH32(esp, 0x3CD6A4);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0007B1B3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007B1B3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007B1C1; /* je: equal / zero */

loc_0007B1B7: ;
    fp_push(MEMF(ebx)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */

loc_0007B1C1: ;
    eax = MEM32(edi);
    ebx = esi + 0x364;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3CD690);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0007B1D4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007B1D4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007B1E4; /* je: equal / zero */

loc_0007B1D8: ;
    fp_push(MEMF(ebx)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CD68C); /* fmul dword ptr [0x3cd68c] */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */

loc_0007B1E4: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    eax = esi + 0x374;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CD678);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0007B1F8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007B1F8: ;
    edx = MEM32(edi);
    ebp = esi + 0x368;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3CD66C);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0007B20Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007B20B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007B21A; /* je: equal / zero */

loc_0007B20F: ;
    PUSH32(esp, 0x0007B214u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0007B214: ;
    fp_top() = fp_top() + MEMF(ebp); /* fadd dword ptr [ebp] */
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */

loc_0007B21A: ;
    eax = MEM32(edi);
    ecx = esp + 0x13;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CD658);
    ecx = edi;
    MEM8(esp + 0x1B) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0007B230u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007B230: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, ebp);
    if (TEST_Z(_fa, _fb)) goto loc_0007B2A1; /* je: equal / zero */

loc_0007B239: ;
    MEM8(esi + 0x36C) = MEM8(esi + 0x36C) | 8;
    PUSH32(esp, 0x0007B245u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0007B245: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x0007B24Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007B24F: ;
    MEMF(esi + 0x35C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x14) = 0x43960000;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x0007B279u); RECOMP_ABI_CALL(0x000760D0u, xml1_guest_entity_set_velocity); /* call 0x000760D0 */

loc_0007B279: ;
    fp_push(MEMD(0x3CD650)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    PUSH32(esp, 0);
    ecx = esi + 0x70;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0007B290u); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_0007B290: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xBF800000u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xF0); PUSH32(esp, 0x0007B2A1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007B2A1: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CD640);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0007B2AFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007B2AF: ;
    SET_LO8(ebx, MEM8(esi + 0x36C));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) << 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 0x10);
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM8(esi + 0x36C) = LO8(eax);
    edx = MEM32(edi);
    PUSH32(esp, 0x3CD634);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0007B2DAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007B2DA: ;
    SET_LO8(ebx, MEM8(esi + 0x36C));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) << 5);
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(eax, LO8(eax) & 0x20);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    POP32(esp, edi);
    MEM8(esi + 0x36C) = LO8(ecx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0007B300
 * Original: 0x0007B300 - 0x0007B78D (1165 bytes, 338 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007B300(void)
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

loc_0007B300: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F1F3);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x8C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x158);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0007B33A; /* je: equal / zero */

loc_0007B331: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0007B33Au); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_0007B33A: ;
    eax = MEM32(esi + 0x158);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x485874);
    ecx = esp + 0x24;
    MEM32(esp + 0x58) = eax;
    PUSH32(esp, 0x0007B357u); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_0007B357: ;
    _fa = (uint32_t)(MEM8(esi + 0x36C)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x36C), 8 (8-bit) */
    MEM32(esp + 0xA4) = ebp;
    ebx = 0x1C;
    if (TEST_Z(_fa, _fb)) goto loc_0007B371; /* je: equal / zero */

loc_0007B36C: ;
    ebx = 0x1B;

loc_0007B371: ;
    eax = MEM32(esi + 0x158);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0007B42B; /* je: equal / zero */

loc_0007B383: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0007B38Cu); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_0007B38C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007B42B; /* je: equal / zero */

loc_0007B394: ;
    _fa = (uint32_t)(MEM8(esi + 0x36C)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x36C), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007B3EB; /* je: equal / zero */

loc_0007B39D: ;
    edx = MEM32(esi + 0x158);
    ecx = esp + 0x14;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x0007B3B0u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0007B3B0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007B3B6u); RECOMP_ABI_CALL(0x00027620u, sub_00027620); /* call 0x00027620 */

loc_0007B3B6: ;
    edi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007B3EB; /* je: equal / zero */

loc_0007B3BF: ;
    eax = MEM32(edi + 0x554);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0007B3EB; /* je: equal / zero */

loc_0007B3CD: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x0007B3D6u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_0007B3D6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007B3EB; /* je: equal / zero */

loc_0007B3DA: ;
    edi = MEM32(edi + 0x554);
    MEM32(esi + 0x348) = edi;
    goto loc_0007B735;

loc_0007B3EB: ;
    eax = MEM32(esi + 0x158);
    ecx = esp + 0x14;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x0007B3FEu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0007B3FE: ;
    ecx = MEM32(eax + 4);
    ecx = ecx >> 0x1C;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007B426; /* jne: not equal / not zero */

loc_0007B409: ;
    edx = MEM32(esi + 0x158);
    ecx = esp + 0x14;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x0007B41Cu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0007B41C: ;
    eax = MEM32(eax + 4);
    eax = eax >> 0x1C;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007B42B; /* je: equal / zero */

loc_0007B426: ;
    ebx = 0x1B;

loc_0007B42B: ;
    SET_LO8(eax, MEM8(0x485840));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007B450; /* jne: not equal / not zero */

loc_0007B434: ;
    PUSH32(esp, 0x0007B439u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_0007B439: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0007B440u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007B440: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007B450; /* jne: not equal / not zero */

loc_0007B444: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x0007B450u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007B450: ;
    eax = MEM32(esi + 0x348);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    edi = esi + 0x348;
    MEM32(esp + 0x14) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0007B47B; /* je: equal / zero */

loc_0007B464: ;
    ecx = edi;
    PUSH32(esp, 0x0007B46Bu); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_0007B46B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007B47B; /* je: equal / zero */

loc_0007B46F: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0007B47Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007B47B: ;
    PUSH32(esp, 0x0007B480u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0007B480: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x372);
    edx = MEM32(eax);
    MEM32(esp + 0x18) = ecx;
    ecx = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = fp_top() + MEMF(esi + 0x35C); /* fadd dword ptr [esi + 0x35c] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x0007B4A3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007B4A3: ;
    fp_top() = MEMF(esp + 0x18) - fp_top(); /* fsubr dword ptr [esp + 0x18] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0007B4BB; /* jp: parity */

loc_0007B4B4: ;
    fp_pop(); /* fstp st(0) */
    goto loc_0007B75E;

loc_0007B4BB: ;
    eax = MEM32(esp + 0x1C);
    ebx = MEM32(eax);
    edx = MEM32(esi);
    edi = eax;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x370);
    MEM32(esp + 0x18) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    eax = esp + 0x44;
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    fp_pop(); /* fstp st(0) */
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0007B4E8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007B4E8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x68); PUSH32(esp, 0x0007B4EEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007B4EE: ;
    ecx = esi + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007B4FCu); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_0007B4FC: ;
    eax = MEM32(esi);
    esp = esp + 8;
    ecx = esp + 0x90;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0007B50Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007B50E: ;
    MEM32(esp + 0x54) = 0x3CA95C;
    edx = MEM32(eax);
    MEM32(esp + 0x58) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x5C) = ecx;
    edx = MEM32(eax + 8);
    eax = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x48);
    MEM32(esp + 0x64) = eax;
    eax = esp + 0x54;
    MEM32(esp + 0x68) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x60) = edx;
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x74) = edx;
    MEM32(esp + 0x78) = 7;
    PUSH32(esp, 0x0007B559u); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_0007B559: ;
    ebx = eax;
    esp = esp + 8;
    MEM32(esp + 0x74) = ebx;
    edx = MEM32(ebx);
    ecx = ebx;
    MEM8(esp + 0xA4) = 1;
    MEM32(esp + 0x18) = 0x497423FE;
    MEM32(esp + 0x20) = ebp;
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x28) = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0007B584u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007B584: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0007B74D; /* jle: less or equal (signed <=) */

loc_0007B58C: ;
    /* nop */

loc_0007B590: ;
    ecx = MEM32(esp + 0x28);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0007B59Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007B59C: ;
    edx = MEM32(esi);
    edi = eax;
    eax = esp + 0x78;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0007B5AAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007B5AA: ;
    edx = MEM32(edi);
    ebp = eax;
    eax = esp + 0x84;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0007B5BBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007B5BB: ;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(ebp + 8); /* fsub dword ptr [ebp + 8] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(ebp + 4); /* fsub dword ptr [ebp + 4] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() - MEMF(ebp); /* fsub dword ptr [ebp] */
    MEMF(esp + 0x38) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * MEMF(esp + 0x38); /* fmul dword ptr [esp + 0x38] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x2C); /* fmul dword ptr [esp + 0x2c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007B6E7; /* jne: not equal / not zero */

loc_0007B60F: ;
    _fa = (uint32_t)(MEM8(edi + 0x2B8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x2B8), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007B6E7; /* jne: not equal / not zero */

loc_0007B61C: ;
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x2C); /* fmul dword ptr [esp + 0x2c] */
    fp_top() = fp_top() * MEMF(esp + 0x4C); /* fmul dword ptr [esp + 0x4c] */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x48); /* fmul dword ptr [esp + 0x48] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x44); /* fmul dword ptr [esp + 0x44] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x364)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x364] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0007B6E9; /* jnp: not parity */

loc_0007B665: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007B671; /* jne: not equal / not zero */

loc_0007B66D: ;
    MEM32(esp + 0x24) = edi;

loc_0007B671: ;
    PUSH32(esp, 0x0007B676u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_0007B676: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x42200000);
    ecx = edi + 0x20;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x0007B68Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007B68B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007B6E9; /* je: equal / zero */

loc_0007B68F: ;
    _fa = (uint32_t)(MEM8(esi + 0x36C)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x36C), 0x10 (8-bit) */
    MEM8(esp + 0x13) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0007B6B2; /* je: equal / zero */

loc_0007B69D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0007B6A6u); RECOMP_ABI_CALL(0x001233C0u, xml1_guest_random_integer_range); /* call 0x001233C0 */

loc_0007B6A6: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007B6B2; /* je: equal / zero */

loc_0007B6AD: ;
    MEM8(esp + 0x13) = 1;

loc_0007B6B2: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007B6D1; /* je: equal / zero */

loc_0007B6BA: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x34)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x34] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007B6D1; /* je: equal / zero */

loc_0007B6C9: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007B6E9; /* je: equal / zero */

loc_0007B6D1: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    edx = MEM32(esp + 0x34);
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x18) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0007B700; /* jne: not equal / not zero */

loc_0007B6E5: ;
    goto loc_0007B6E9;

loc_0007B6E7: ;
    fp_pop(); /* fstp st(0) */

loc_0007B6E9: ;
    edi = MEM32(esp + 0x28);
    eax = MEM32(ebx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ebx;
    MEM32(esp + 0x28) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0007B6F8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007B6F8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007B590; /* jl: less (signed <) */

loc_0007B700: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007B713; /* je: equal / zero */

loc_0007B708: ;
    ecx = MEM32(eax + 0x1C);
    edx = MEM32(esp + 0x14);
    MEM32(edx) = ecx;
    goto loc_0007B724;

loc_0007B713: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007B74D; /* je: equal / zero */

loc_0007B71B: ;
    eax = MEM32(eax + 0x1C);
    ecx = MEM32(esp + 0x14);
    MEM32(ecx) = eax;

loc_0007B724: ;
    PUSH32(esp, ebx);
    MEM8(esp + 0xA8) = 0;
    PUSH32(esp, 0x0007B732u); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_0007B732: ;
    esp = esp + 4;

loc_0007B735: ;
    ecx = esp + 0x1C;
    MEM32(esp + 0xA4) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0007B749u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_0007B749: ;
    SET_LO8(eax, 1);
    goto loc_0007B774;

loc_0007B74D: ;
    PUSH32(esp, ebx);
    MEM8(esp + 0xA8) = 0;
    PUSH32(esp, 0x0007B75Bu); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_0007B75B: ;
    esp = esp + 4;

loc_0007B75E: ;
    ecx = esp + 0x1C;
    MEM32(esp + 0xA4) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0007B772u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_0007B772: ;
    SET_LO8(eax, 0); /* xor self */

loc_0007B774: ;
    ecx = MEM32(esp + 0x9C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x98;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0007B790
 * Original: 0x0007B790 - 0x0007BDA3 (1555 bytes, 453 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007B790(void)
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

loc_0007B790: ;
    esp = esp - 0x7C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x358);
    ebp = esi + 0x348;
    MEM32(esp + 0x18) = eax;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    PUSH32(esp, edi);
    MEM8(esp + 0x13) = 0;
    MEM32(esp + 0x18) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0007BB16; /* je: equal / zero */

loc_0007B7C0: ;
    ecx = ebp;
    PUSH32(esp, 0x0007B7C7u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_0007B7C7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007BB16; /* je: equal / zero */

loc_0007B7CF: ;
    ecx = ebp;
    PUSH32(esp, 0x0007B7D6u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0007B7D6: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007B800; /* je: equal / zero */

loc_0007B7DC: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0007B7E2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007B7E2: ;
    edx = MEM32(0x499568);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007B802; /* jne: not equal / not zero */

loc_0007B800: ;
    edi = 0; /* xor self */

loc_0007B802: ;
    ecx = ebp;
    PUSH32(esp, 0x0007B809u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0007B809: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007B834; /* je: equal / zero */

loc_0007B80F: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0007B816u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007B816: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007B836; /* jne: not equal / not zero */

loc_0007B834: ;
    ebp = 0; /* xor self */

loc_0007B836: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007BB16; /* je: equal / zero */

loc_0007B83E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007B859; /* je: equal / zero */

loc_0007B842: ;
    fp_push(MEMF(ebp + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007BB16; /* jne: not equal / not zero */

loc_0007B859: ;
    eax = MEM32(esi + 0x108);
    edx = MEM32(esi + 0x104);
    ecx = MEM32(esi + 0x100);
    MEM32(esp + 0x34) = eax;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x34); /* fmul dword ptr [esp + 0x34] */
    MEM32(esp + 0x30) = edx;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    MEM32(esp + 0x2C) = ecx;
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x2C); /* fmul dword ptr [esp + 0x2c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C832C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c832c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0007B8C5; /* jp: parity */

loc_0007B8A0: ;
    ecx = esi + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007B8AEu); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_0007B8AE: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    esp = esp + 8;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = eax;

loc_0007B8C5: ;
    eax = MEM32(edi + 0x108);
    ecx = MEM32(edi + 0x100);
    edx = MEM32(edi + 0x104);
    MEM32(esp + 0x4C) = eax;
    eax = esp + 0x74;
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x48) = edx;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0007B8EFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007B8EF: ;
    edx = MEM32(edi);
    ebp = eax;
    eax = esp + 0x80;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0007B900u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007B900: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() - MEMF(ebp); /* fsub dword ptr [ebp] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(ebp + 4); /* fsub dword ptr [ebp + 4] */
    fp_push(MEMF(eax + 8)); /* fld float */
    SET_LO16(eax, MEM16(esi + 0x374));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    fp_top() = fp_top() - MEMF(ebp + 8); /* fsub dword ptr [ebp + 8] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    g_fp_stack[(g_fp_top + 3) & 7] = g_fp_stack[(g_fp_top + 3) & 7] * fp_top(); fp_pop(); /* fmulp st(3) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = g_fp_stack[(g_fp_top + 3) & 7] + fp_top(); fp_pop(); /* faddp st(3) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    g_fp_stack[(g_fp_top + 3) & 7] = g_fp_stack[(g_fp_top + 3) & 7] + fp_top(); fp_pop(); /* faddp st(3) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x34); /* fmul dword ptr [esp + 0x34] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x2C); /* fmul dword ptr [esp + 0x2c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_st1() = fp_st1() / fp_top(); fp_pop(); /* fdivp st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0007B9EC; /* jle: less or equal (signed <=) */

loc_0007B961: ;
    ecx = SX16(LO16(eax));
    MEM32(esp + 0x1C) = ecx;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0007B975u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0007B975: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x0007B97Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007B97F: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007B996; /* jne: not equal / not zero */

loc_0007B98E: ;
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x1C) = eax;

loc_0007B996: ;
    fp_top() = fp_top() - MEMF(esi + 0x35C); /* fsub dword ptr [esi + 0x35c] */
    fp_top() = fp_top() / MEMF(esp + 0x1C); /* fdiv dword ptr [esp + 0x1c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007B9B7; /* jne: not equal / not zero */

loc_0007B9AD: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    goto loc_0007B9CC;

loc_0007B9B7: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C9760)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c9760] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0007B9CC; /* jp: parity */

loc_0007B9C4: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C9760)); /* fld float */

loc_0007B9CC: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(esi + 0x358); /* fmul dword ptr [esi + 0x358] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    fp_top() = fp_top() * MEMF(esi + 0x358); /* fmul dword ptr [esi + 0x358] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_0007B9EC: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    edx = MEM32(edi);
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    eax = esp + 0x80;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x50);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x44) = ecx;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0007BA29u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007BA29: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    edx = MEM32(esi);
    fp_top() = fp_top() + MEMF(eax); /* fadd dword ptr [eax] */
    ecx = esi;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 4); /* fadd dword ptr [eax + 4] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 8); /* fadd dword ptr [eax + 8] */
    eax = esp + 0x80;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0007BA58u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007BA58: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    edx = esp + 0x38;
    fp_top() = fp_top() - MEMF(eax); /* fsub dword ptr [eax] */
    PUSH32(esp, edx);
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() - MEMF(eax + 4); /* fsub dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fp_top() - MEMF(eax + 8); /* fsub dword ptr [eax + 8] */
    eax = esp + 0x84;
    PUSH32(esp, eax);
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x54);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x48) = ecx;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0007BA94u); RECOMP_ABI_CALL(0x00120950u, sub_00120950); /* call 0x00120950 */

loc_0007BA94: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x64) = ecx;
    edx = MEM32(eax + 4);
    ecx = MEM32(esp + 0x24);
    MEM32(esp + 0x68) = edx;
    eax = MEM32(eax + 8);
    edx = ecx;
    MEM32(esp + 0x6C) = eax;
    eax = ecx;
    PUSH32(esp, 0x5BC9D0);
    MEM32(esp + 0x5C) = ecx;
    ecx = MEM32(esp + 0xA0);
    PUSH32(esp, ecx);
    MEM32(esp + 0x64) = edx;
    edx = esp + 0x60;
    PUSH32(esp, edx);
    MEM32(esp + 0x6C) = eax;
    eax = esp + 0x70;
    PUSH32(esp, eax);
    ecx = esi + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x9C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007BAE4u); RECOMP_ABI_CALL(0x00120B00u, sub_00120B00); /* call 0x00120B00 */

loc_0007BAE4: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x88) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x8C) = edx;
    eax = MEM32(eax + 8);
    edx = MEM32(esi);
    MEM32(esp + 0x90) = eax;
    esp = esp + 0x20;
    eax = esp + 0x68;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0007BB10u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007BB10: ;
    SET_LO8(ebx, MEM8(esp + 0x13));
    goto loc_0007BB18;

loc_0007BB16: ;
    SET_LO8(ebx, 1);

loc_0007BB18: ;
    _fa = (uint32_t)(MEM16(esi + 0x374)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x374), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0007BC50; /* jle: less or equal (signed <=) */

loc_0007BB26: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007BB34; /* je: equal / zero */

loc_0007BB2A: ;
    ecx = MEM32(esi + 0x358);
    MEM32(esp + 0x18) = ecx;

loc_0007BB34: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x0007BB43u); RECOMP_ABI_CALL(0x001233A0u, sub_001233A0); /* call 0x001233A0 */

loc_0007BB43: ;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x0007BB56u); RECOMP_ABI_CALL(0x001233A0u, sub_001233A0); /* call 0x001233A0 */

loc_0007BB56: ;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0007BB66u); RECOMP_ABI_CALL(0x001233A0u, sub_001233A0); /* call 0x001233A0 */

loc_0007BB66: ;
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    esp = esp + 0x18;
    fp_top() = fp_top() * MEMF(esp + 0x2C); /* fmul dword ptr [esp + 0x2c] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x34); /* fmul dword ptr [esp + 0x34] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C93C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c93c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007BBBE; /* jne: not equal / not zero */

loc_0007BB96: ;
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0007BBC6;

loc_0007BBBE: ;
    MEM32(esp + 0x2C) = 0x3F800000;

loc_0007BBC6: ;
    edx = esp + 0x2C;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, edx);
    eax = esp + 0x84;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007BBDAu); RECOMP_ABI_CALL(0x00120950u, sub_00120950); /* call 0x00120950 */

loc_0007BBDA: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x64) = ecx;
    edx = MEM32(eax + 4);
    ecx = MEM32(esp + 0x20);
    MEM32(esp + 0x68) = edx;
    eax = MEM32(eax + 8);
    edx = ecx;
    MEM32(esp + 0x6C) = eax;
    eax = ecx;
    PUSH32(esp, 0x5BC9D0);
    MEM32(esp + 0x74) = ecx;
    ecx = MEM32(esp + 0xA0);
    PUSH32(esp, ecx);
    MEM32(esp + 0x7C) = edx;
    edx = esp + 0x78;
    PUSH32(esp, edx);
    MEM32(esp + 0x84) = eax;
    eax = esp + 0x70;
    PUSH32(esp, eax);
    ecx = esi + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x9C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007BC2Du); RECOMP_ABI_CALL(0x00120B00u, sub_00120B00); /* call 0x00120B00 */

loc_0007BC2D: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x70) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x74) = edx;
    eax = MEM32(eax + 8);
    edx = MEM32(esi);
    MEM32(esp + 0x78) = eax;
    esp = esp + 0x20;
    eax = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0007BC50u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007BC50: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007BC76; /* je: equal / zero */

loc_0007BC54: ;
    _fa = (uint32_t)(MEM8(esi + 0x36C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x36C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007BC76; /* je: equal / zero */

loc_0007BC5D: ;
    PUSH32(esp, 0x0007BC62u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0007BC62: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x368)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x368] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007BC76; /* jne: not equal / not zero */

loc_0007BC6F: ;
    ecx = esi;
    PUSH32(esp, 0x0007BC76u); RECOMP_ABI_CALL(0x0007B300u, sub_0007B300); /* call 0x0007B300 */

loc_0007BC76: ;
    ecx = MEM32(esi + 0x100);
    eax = MEM32(esi + 0x108);
    edx = MEM32(esi + 0x104);
    MEM32(esp + 0x20) = ecx;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    MEM32(esp + 0x28) = eax;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    MEM32(esp + 0x24) = edx;
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    ecx = esi + 0x2C;
    PUSH32(esp, ecx);
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    edx = esp + 0x84;
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    PUSH32(esp, edx);
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0007BCC7u); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_0007BCC7: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x28) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x2C) = edx;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    SET_LO8(eax, MEM8(esi + 0x36C));
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    esp = esp + 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    if (TEST_Z(_fa, _fb)) goto loc_0007BD54; /* je: equal / zero */

loc_0007BD1A: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x36E);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x370);
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = fp_top() * MEMF(esp + 0x94); /* fmul dword ptr [esp + 0x94] */
    fp_top() = fp_top() + MEMF(esp + 0x1C); /* fadd dword ptr [esp + 0x1c] */
    MEM32(esp + 0x1C) = ecx;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007BD58; /* jne: not equal / not zero */

loc_0007BD52: ;
    fp_pop(); /* fstp st(0) */

loc_0007BD54: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */

loc_0007BD58: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    edx = esp + 0x20;
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    PUSH32(esp, edx);
    ecx = esi;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0007BD82u); RECOMP_ABI_CALL(0x000760D0u, xml1_guest_entity_set_velocity); /* call 0x000760D0 */

loc_0007BD82: ;
    eax = MEM32(esp + 0x94);
    ecx = MEM32(esp + 0x90);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0007BD99u); RECOMP_ABI_CALL(0x00096BA0u, sub_00096BA0); /* call 0x00096BA0 */

loc_0007BD99: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x7C;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0007BDB0
 * Original: 0x0007BDB0 - 0x0007BE0C (92 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007BDB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007BDB0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0007BDBFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007BDBF: ;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007BDCAu); RECOMP_ABI_CALL(0x00066B20u, sub_00066B20); /* call 0x00066B20 */

loc_0007BDCA: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007BE05; /* je: equal / zero */

loc_0007BDD1: ;
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
    PUSH32(esp, 0x0007BDF5u); RECOMP_ABI_CALL(0x0007BE10u, sub_0007BE10); /* call 0x0007BE10 */

loc_0007BDF5: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x0007BDFEu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_0007BDFE: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_0007BE05: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0007BE10
 * Original: 0x0007BE10 - 0x0007BEEB (219 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007BE10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007BE10: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F208);
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
    PUSH32(esp, 0x0007BE56u); RECOMP_ABI_CALL(0x0007BF40u, sub_0007BF40); /* call 0x0007BF40 */

loc_0007BE56: ;
    eax = 0; /* xor self */
    MEM32(esi) = 0x3CD6DC;
    MEM32(esi + 0x344) = eax;
    MEM32(esi + 0x348) = eax;
    MEM32(esi + 0x34C) = eax;
    MEM32(esi + 0x350) = eax;
    MEM32(esi + 0x354) = eax;
    SET_LO8(edx, MEM8(esi + 0x36C));
    SET_LO8(edx, LO8(edx) & 0xC1);
    SET_LO8(edx, LO8(edx) | 1);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esi + 0x358) = 0x40490FDB;
    MEM32(esi + 0x364) = eax;
    MEM32(esi + 0x368) = eax;
    MEM8(esi + 0x36C) = LO8(edx);
    MEM16(esi + 0x36E) = 0x12C;
    MEM16(esi + 0x370) = 0x258;
    MEM16(esi + 0x372) = 0x1E;
    MEM16(esi + 0x374) = LO16(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0007BED6; /* je: equal / zero */

loc_0007BECE: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0007BED6u); RECOMP_ABI_CALL(0x0007B120u, sub_0007B120); /* call 0x0007B120 */

loc_0007BED6: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0007BEF0
 * Original: 0x0007BEF0 - 0x0007BEFB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007BEF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007BEF0: ;
    raven_projectile_victim_retire(ecx);
    MEM32(ecx) = 0x3CD8A4;
    g_seh_ebp = ebp; sub_0002E3D0(); return; /* tail jmp 0x0002E3D0 */

}

/**
 * sub_0007BF00
 * Original: 0x0007BF00 - 0x0007BF06 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007BF00(void)
{

loc_0007BF00: ;
    eax = 0x4C2578;
    esp += 4; return; /* ret */

}

/**
 * sub_0007BF10
 * Original: 0x0007BF10 - 0x0007BF16 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007BF10(void)
{

loc_0007BF10: ;
    eax = 0x3CD5FC;
    esp += 4; return; /* ret */

}

/**
 * sub_0007BF20
 * Original: 0x0007BF20 - 0x0007BF26 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007BF20(void)
{

loc_0007BF20: ;
    eax = 0x49971C;
    esp += 4; return; /* ret */

}

/**
 * sub_0007BF30
 * Original: 0x0007BF30 - 0x0007BF36 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007BF30(void)
{

loc_0007BF30: ;
    eax = 0x3CD60C;
    esp += 4; return; /* ret */

}

/**
 * sub_0007BF40
 * Original: 0x0007BF40 - 0x0007C06E (302 bytes, 71 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007BF40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007BF40: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F228);
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
    PUSH32(esp, 0x0007BF86u); RECOMP_ABI_CALL(0x00093880u, sub_00093880); /* call 0x00093880 */

loc_0007BF86: ;
    eax = 0; /* xor self */
    MEM32(esi) = 0x3CD8A4;
    MEM32(esi + 0x2C4) = eax;
    MEM32(esi + 0x2C8) = eax;
    edx = MEM32(0x498D90);
    MEM32(esi + 0x2CC) = edx;
    MEM32(esi + 0x2D0) = eax;
    MEM32(esi + 0x2D4) = eax;
    MEM32(esi + 0x2D8) = eax;
    MEM8(esi + 0x2F4) = LO8(eax);
    edx = 0xBF800000u;
    MEM32(esi + 0x320) = edx;
    MEM32(esi + 0x328) = edx;
    SET_LO8(edx, MEM8(esi + 0x335));
    ecx = 0x3F800000;
    SET_LO8(edx, LO8(edx) & 0xFA);
    MEM32(esi + 0x324) = ecx;
    MEM32(esi + 0x330) = ecx;
    SET_LO8(ecx, 1);
    SET_LO8(edx, LO8(edx) | 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esi + 0x314) = eax;
    MEM32(esi + 0x318) = 0x3F000000;
    MEM8(esi + 0x334) = LO8(ecx);
    MEM8(esi + 0x335) = LO8(edx);
    MEM16(esi + 0x336) = LO16(eax);
    MEM16(esi + 0x338) = LO16(eax);
    MEM16(esi + 0x33A) = LO16(eax);
    MEM16(esi + 0x33C) = LO16(eax);
    MEM16(esi + 0x33E) = LO16(eax);
    MEM8(esi + 0x340) = LO8(ecx);
    MEM8(esi + 0x341) = LO8(eax);
    MEM8(esi + 0x342) = LO8(ecx);
    MEM32(esi + 0x134) = 0x3C88CE70;
    if (CMP_EQ(_fa, _fb)) goto loc_0007C059; /* je: equal / zero */

loc_0007C051: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0007C059u); RECOMP_ABI_CALL(0x00097650u, sub_00097650); /* call 0x00097650 */

loc_0007C059: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0007C070
 * Original: 0x0007C070 - 0x0007C27F (527 bytes, 169 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C070(void)
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

loc_0007C070: ;
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0007C07Du); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0007C07D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x0007C087u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C087: ;
    MEMF(esi + 0x35C) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(MEM8(esi + 0x36C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x36C), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007C09D; /* je: equal / zero */

loc_0007C096: ;
    PUSH32(esp, 0x5BC9D0);
    goto loc_0007C0E2;

loc_0007C09D: ;
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007C0ABu); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_0007C0AB: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x370);
    MEM32(esp + 0x14) = edx;
    esp = esp + 8;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    eax = esp + 0x14;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    PUSH32(esp, eax);
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_0007C0E2: ;
    ecx = esi;
    PUSH32(esp, 0x0007C0E9u); RECOMP_ABI_CALL(0x000760D0u, xml1_guest_entity_set_velocity); /* call 0x000760D0 */

loc_0007C0E9: ;
    _fa = (uint32_t)(MEM8(esi + 0x36C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x36C), 4 (8-bit) */
    SET_LO8(ebx, 1);
    if (TEST_NZ(_fa, _fb)) goto loc_0007C16D; /* jne: not equal / not zero */

loc_0007C0F4: ;
    eax = MEM32(esi + 0x158);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0007C16D; /* je: equal / zero */

loc_0007C102: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x0007C10Bu); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_0007C10B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007C16D; /* je: equal / zero */

loc_0007C10F: ;
    ecx = MEM32(esi + 0x158);
    MEM32(esp + 0xC) = ecx;
    ecx = esp + 0xC;
    PUSH32(esp, 0x0007C122u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0007C122: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007C128u); RECOMP_ABI_CALL(0x00027620u, sub_00027620); /* call 0x00027620 */

loc_0007C128: ;
    edi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007C16D; /* je: equal / zero */

loc_0007C131: ;
    fp_push(MEMF(edi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007C16D; /* jne: not equal / not zero */

loc_0007C144: ;
    eax = MEM32(edi + 0x338);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0007C16D; /* je: equal / zero */

loc_0007C152: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0007C15Bu); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_0007C15B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007C16D; /* je: equal / zero */

loc_0007C15F: ;
    edi = MEM32(edi + 0x338);
    MEM32(esi + 0x348) = edi;
    SET_LO8(ebx, 0); /* xor self */

loc_0007C16D: ;
    PUSH32(esp, 0x0007C172u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0007C172: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x368)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x368] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0007C18A; /* jnp: not parity */

loc_0007C17F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007C18A; /* je: equal / zero */

loc_0007C183: ;
    ecx = esi;
    PUSH32(esp, 0x0007C18Au); RECOMP_ABI_CALL(0x0007B300u, sub_0007B300); /* call 0x0007B300 */

loc_0007C18A: ;
    eax = MEM32(esi + 0x348);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edi = esi + 0x348;
    if (TEST_Z(_fa, _fb)) goto loc_0007C278; /* je: equal / zero */

loc_0007C19E: ;
    ecx = edi;
    PUSH32(esp, 0x0007C1A5u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_0007C1A5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007C278; /* je: equal / zero */

loc_0007C1AD: ;
    edx = esi + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007C1BBu); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_0007C1BB: ;
    esp = esp + 8;
    ecx = edi;
    PUSH32(esp, 0x0007C1C5u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0007C1C5: ;
    edx = MEM32(esi);
    ebx = eax;
    eax = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0007C1D3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C1D3: ;
    edx = MEM32(ebx);
    edi = eax;
    eax = esp + 0x38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0007C1E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C1E1: ;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 8); /* fsub dword ptr [edi + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 4); /* fsub dword ptr [edi + 4] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() - MEMF(edi); /* fsub dword ptr [edi] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMD(0x3CDA68)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0007C278; /* jp: parity */

loc_0007C25E: ;
    edi = MEM32(esi);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007C26Fu); RECOMP_ABI_CALL(0x00120950u, sub_00120950); /* call 0x00120950 */

loc_0007C26F: ;
    esp = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x2C); PUSH32(esp, 0x0007C278u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C278: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0007C280
 * Original: 0x0007C280 - 0x0007C286 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C280(void)
{

loc_0007C280: ;
    eax = 0x2A8;
    esp += 4; return; /* ret */

}

/**
 * sub_0007C290
 * Original: 0x0007C290 - 0x0007C296 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C290(void)
{

loc_0007C290: ;
    eax = 0x2FC;
    esp += 4; return; /* ret */

}

/**
 * sub_0007C2A0
 * Original: 0x0007C2A0 - 0x0007C350 (176 bytes, 67 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C2A0(void)
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

loc_0007C2A0: ;
    eax = MEM32(esp + 4);
    esp = esp - 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0007C2B0u); RECOMP_ABI_CALL(0x00078D40u, sub_00078D40); /* call 0x00078D40 */

loc_0007C2B0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007C2BB; /* jne: not equal / not zero */

loc_0007C2B4: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_0007C2BB: ;
    _fa = (uint32_t)(MEM8(esi + 0x2A4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x2A4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007C30F; /* je: equal / zero */

loc_0007C2C4: ;
    edx = MEM32(esi);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0007C2D0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C2D0: ;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    edx = MEM32(esi);
    fp_push(MEMF(eax)); /* fld float */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    ecx = esi + 0x240;
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    PUSH32(esp, ecx);
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    esp = esp - 0x10;
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    ecx = esi;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esp);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0007C307u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C307: ;
    PUSH32(esp, 0x0007C30Cu); RECOMP_ABI_CALL(0x0005A810u, sub_0005A810); /* call 0x0005A810 */

loc_0007C30C: ;
    esp = esp + 0x18;

loc_0007C30F: ;
    _fa = (uint32_t)(MEM8(esi + 0x2A4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x2A4), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007C340; /* je: equal / zero */

loc_0007C318: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    eax = esi + 0x240;
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0007C32Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C32C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    esp = esp - 0xC;
    PUSH32(esp, esp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0007C338u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C338: ;
    PUSH32(esp, 0x0007C33Du); RECOMP_ABI_CALL(0x0005A8F0u, sub_0005A8F0); /* call 0x0005A8F0 */

loc_0007C33D: ;
    esp = esp + 0x18;

loc_0007C340: ;
    MEM8(esi + 0xC8) = MEM8(esi + 0xC8) & 0x7F;
    SET_LO8(eax, 1);
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
 * sub_0007C350
 * Original: 0x0007C350 - 0x0007C3FA (170 bytes, 64 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C350(void)
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

loc_0007C350: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x2A4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0007C3CC; /* je: equal / zero */

loc_0007C362: ;
    PUSH32(esp, 0x0007C367u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_0007C367: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edi = eax;
    eax = esp;
    ecx = esp + 0x10;
    MEM32(eax) = 0;
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0007C37Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C37E: ;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    ebx = MEM32(edi);
    fp_push(MEMF(eax)); /* fld float */
    PUSH32(esp, 0x3E4CCCCD);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, ecx);
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    ecx = esi;
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
    fp_top() = fp_top() + MEMF(0x3C9784); /* fadd dword ptr [0x3c9784] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0007C3B6u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_0007C3B6: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0007C3C3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C3C3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x22C); PUSH32(esp, 0x0007C3CCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C3CC: ;
    ecx = MEM32(esi + 4);
    ecx = ecx >> 0x13;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007C3F1; /* je: equal / zero */

loc_0007C3D7: ;
    _fa = (uint32_t)(MEM8(esi + 0x2A4)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x2A4), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007C3F1; /* je: equal / zero */

loc_0007C3E0: ;
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x44DD28);
    ecx = esi;
    PUSH32(esp, 0x0007C3F1u); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_0007C3F1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0007C400
 * Original: 0x0007C400 - 0x0007C42D (45 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007C400: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = MEM32(esi + 4) | 0x80000;
    ecx = esi;
    PUSH32(esp, 0x0007C411u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_0007C411: ;
    _fa = (uint32_t)(MEM8(esi + 0x2A4)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x2A4), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007C42B; /* je: equal / zero */

loc_0007C41A: ;
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x44DD28);
    ecx = esi;
    PUSH32(esp, 0x0007C42Bu); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_0007C42B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007C430
 * Original: 0x0007C430 - 0x0007C43E (14 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C430(void)
{

loc_0007C430: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0007C43Bu); RECOMP_ABI_CALL(0x0007C350u, sub_0007C350); /* call 0x0007C350 */

loc_0007C43B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0007C440
 * Original: 0x0007C440 - 0x0007C60A (458 bytes, 153 insns)
 * Category: game_physics
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007C440: ;
    esp = esp - 0x14;
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    MEM32(esp + 8) = eax;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    ecx = esi + 4;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    MEM32(esp + 0x1C) = eax;
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(edi);
    PUSH32(esp, 0x3CAD3C);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0007C48Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C48F: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0007C49Bu); RECOMP_ABI_CALL(0x00066E40u, sub_00066E40); /* call 0x00066E40 */

loc_0007C49B: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CAD34);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0007C4A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C4A9: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007C4CA; /* je: equal / zero */

loc_0007C4AF: ;
    PUSH32(esp, 0x0007C4B4u); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_0007C4B4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0007C4BEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C4BE: ;
    PUSH32(esp, 0x0007C4C3u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0007C4C3: ;
    MEM16(esi + 0x248) = LO16(eax);

loc_0007C4CA: ;
    eax = MEM32(edi);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x2A4));
    ecx = ecx & 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CAD24);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0007C4E2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C4E2: ;
    SET_LO8(ecx, MEM8(esi + 0x2A4));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(ebx, LO8(ecx));
    SET_LO8(ebx, LO8(ebx) ^ LO8(edx));
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ebx));
    MEM8(esi + 0x2A4) = LO8(ebx);
    edx = MEM32(edi);
    ecx = edi;
    eax = eax >> 1;
    eax = eax & 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CAD18);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0007C512u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C512: ;
    SET_LO8(ebx, MEM8(esi + 0x2A4));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) << 1);
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(esi + 0x2A4) = LO8(ecx);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CAD0C);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0007C53Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C53B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007C54E; /* je: equal / zero */

loc_0007C53F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007C545u); RECOMP_ABI_CALL(0x00049480u, xml1_guest_damage_type_from_name); /* call 0x00049480 */

loc_0007C545: ;
    esp = esp + 4;
    MEM32(esi + 0x250) = eax;

loc_0007C54E: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CAD00);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0007C55Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C55C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007C56F; /* je: equal / zero */

loc_0007C560: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007C566u); RECOMP_ABI_CALL(0x00049510u, sub_00049510); /* call 0x00049510 */

loc_0007C566: ;
    esp = esp + 4;
    MEM32(esi + 0x258) = eax;

loc_0007C56F: ;
    edx = MEM32(edi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CACF4);
    ecx = edi;
    MEM32(esp + 0x14) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0007C588u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C588: ;
    SET_LO16(ecx, MEM16(esp + 0xC));
    MEM16(esi + 0x24A) = LO16(ecx);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C9708);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0007C5A2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C5A2: ;
    SET_LO8(edx, MEM8(esi + 0x2A4));
    SET_LO8(ebx, 4);
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM8(esi + 0x2A4) = LO8(edx);
    eax = MEM32(edi);
    PUSH32(esp, 0x3CACE8);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0007C5C0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C5C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007C5EB; /* je: equal / zero */

loc_0007C5C4: ;
    edx = MEM32(edi);
    ecx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0007C5D1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C5D1: ;
    SET_LO8(ecx, MEM8(esi + 0x2A4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) << 2);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & LO8(ebx));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(esi + 0x2A4) = LO8(ecx);

loc_0007C5EB: ;
    _fa = (uint32_t)(MEM8(esi + 0x2A4)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x2A4), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007C601; /* je: equal / zero */

loc_0007C5F3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x44DD28);
    ecx = esi;
    PUSH32(esp, 0x0007C601u); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_0007C601: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007C610
 * Original: 0x0007C610 - 0x0007C6A2 (146 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007C610: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0007C61Fu); RECOMP_ABI_CALL(0x0007C440u, sub_0007C440); /* call 0x0007C440 */

loc_0007C61F: ;
    eax = MEM32(edi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CDAE4);
    ecx = edi;
    MEM32(esp + 0x18) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0007C638u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C638: ;
    SET_LO8(edx, MEM8(esp + 0x10));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM8(esi + 0x2F8) = LO8(edx);
    eax = MEM32(edi);
    PUSH32(esp, 0x3C8A38);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0007C650u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C650: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007C679; /* je: equal / zero */

loc_0007C656: ;
    edx = MEM32(esi + 0x2F4);
    edi = esi + 0x2D0;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x24) = edx;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0007C670u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C670: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0007C679u); RECOMP_ABI_CALL(0x0006E170u, sub_0006E170); /* call 0x0006E170 */

loc_0007C679: ;
    SET_LO8(eax, MEM8(esi + 0x2F8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0007C69C; /* jbe: below or equal (unsigned <=) */

loc_0007C683: ;
    PUSH32(esp, 0x3E19999A);
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x44DD2C);
    ecx = esi;
    MEM8(esi + 0x2F8) = LO8(eax);
    PUSH32(esp, 0x0007C69Cu); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_0007C69C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007C6B0
 * Original: 0x0007C6B0 - 0x0007CBA5 (1269 bytes, 388 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007C6B0(void)
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

loc_0007C6B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F250);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x74;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x240);
    ecx = esp + 0x28;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x0007C6E1u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0007C6E1: ;
    esi = eax;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007C713; /* je: equal / zero */

loc_0007C6E9: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0007C6EFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C6EF: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ecx = MEM32(eax + edx * 4 + 0x14);
    MEM32(esp + 0x18) = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007C717; /* jne: not equal / not zero */

loc_0007C713: ;
    MEM32(esp + 0x18) = ebp;

loc_0007C717: ;
    esi = MEM32(esp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    ecx = MEM32(edi + 0x1C);
    ebx = MEM32(0x498D90);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x24) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0007CB78; /* je: equal / zero */

loc_0007C734: ;
    eax = MEM32(edi + 0x2CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0007C749; /* jle: less or equal (signed <=) */

loc_0007C73E: ;
    ecx = MEM32(edi + eax * 4 + 0x2A4);
    MEM32(esp + 0x14) = ecx;

loc_0007C749: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007C938; /* je: equal / zero */

loc_0007C751: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0007C75Au); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_0007C75A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007C938; /* je: equal / zero */

loc_0007C762: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0007C76Bu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0007C76B: ;
    eax = MEM32(eax + 0x1C);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x485874);
    ecx = esp + 0x24;
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x0007C785u); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_0007C785: ;
    SET_LO8(eax, MEM8(0x485840));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(esp + 0x8C) = ebp;
    if (TEST_NZ(_fa, _fb)) goto loc_0007C7B3; /* jne: not equal / not zero */

loc_0007C795: ;
    PUSH32(esp, 0x0007C79Au); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_0007C79A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0007C7A1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C7A1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007C7B3; /* jne: not equal / not zero */

loc_0007C7A5: ;
    eax = esp + 0x1C;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007C7B0u); RECOMP_ABI_CALL(0x00059960u, sub_00059960); /* call 0x00059960 */

loc_0007C7B0: ;
    esp = esp + 8;

loc_0007C7B3: ;
    esi = MEM32(esp + 0x1C);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0007C7C0u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0007C7C0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x43480000);
    eax = eax + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0007C7D2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C7D2: ;
    eax = MEM32(edi + 0x20);
    ecx = MEM32(edi + 0x24);
    edx = esp + 0x70;
    MEM32(esp + 0x74) = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x78) = 0x3CA964;
    MEM32(esp + 0x80) = ecx;
    MEM32(esp + 0x88) = 3;
    MEM32(esp + 0x84) = 0;
    PUSH32(esp, 0x0007C810u); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_0007C810: ;
    esi = eax;
    esp = esp + 8;
    MEM32(esp + 0x30) = esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x498D90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(0x498D90) (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esp + 0x8C) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_0007C90F; /* je: equal / zero */

loc_0007C832: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0007C838u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C838: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0007C90F; /* jge: greater or equal (signed >=) */

loc_0007C840: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    MEM8(esp + 0x17) = 0;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0007C84Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C84D: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007C8F7; /* je: equal / zero */

loc_0007C857: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0007C85Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C85F: ;
    fp_push(MEMF(eax + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007C8F7; /* jne: not equal / not zero */

loc_0007C876: ;
    MEM32(esp + 0x20) = 0;
    ebx = edi + 0x2A8;

loc_0007C884: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x2CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x2CC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0007C8BA; /* jge: greater or equal (signed >=) */

loc_0007C890: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0007C898u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C898: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007C8A4; /* jne: not equal / not zero */

loc_0007C89F: ;
    MEM8(esp + 0x13) = 1;

loc_0007C8A4: ;
    edx = MEM32(esp + 0x20);
    SET_LO8(eax, MEM8(esp + 0x13));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(esp + 0x20) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_0007C884; /* je: equal / zero */

loc_0007C8B8: ;
    goto loc_0007C8F7;

loc_0007C8BA: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007C8F7; /* jne: not equal / not zero */

loc_0007C8C2: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0007C8CAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C8CA: ;
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(MEM32(edi + 0x2CC)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x2CC), 8 (32-bit) */
    MEM32(esp + 0x24) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0007C90F; /* je: equal / zero */

loc_0007C8DA: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0007C8E2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C8E2: ;
    ecx = MEM32(eax + 0x1C);
    edx = MEM32(edi + 0x2CC);
    eax = edi + 0x2A8;
    MEM32(eax + edx * 4) = ecx;
    MEM32(eax + 0x24) = MEM32(eax + 0x24) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0007C8F7: ;
    eax = MEM32(esp + 0x24);
    edx = MEM32(0x498D90);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007C832; /* jne: not equal / not zero */

loc_0007C90F: ;
    PUSH32(esp, esi);
    MEM8(esp + 0x90) = 0;
    PUSH32(esp, 0x0007C91Du); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_0007C91D: ;
    esp = esp + 4;
    ecx = esp + 0x1C;
    MEM32(esp + 0x8C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0007C934u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_0007C934: ;
    ebx = MEM32(esp + 0x24);

loc_0007C938: ;
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x2C) = ecx;
    ecx = esp + 0x2C;
    PUSH32(esp, 0x0007C949u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0007C949: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007C973; /* je: equal / zero */

loc_0007C94F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0007C955u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C955: ;
    edx = MEM32(0x48D8FC);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007C975; /* jne: not equal / not zero */

loc_0007C973: ;
    esi = 0; /* xor self */

loc_0007C975: ;
    ecx = esp + 0x24;
    MEM32(esp + 0x24) = ebx;
    PUSH32(esp, 0x0007C982u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0007C982: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007C9AD; /* je: equal / zero */

loc_0007C988: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0007C98Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C98F: ;
    edx = MEM32(0x48D8FC);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007C9AF; /* jne: not equal / not zero */

loc_0007C9AD: ;
    ebp = 0; /* xor self */

loc_0007C9AF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007CB78; /* je: equal / zero */

loc_0007C9B7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007CB78; /* je: equal / zero */

loc_0007C9BF: ;
    edx = MEM32(esi);
    eax = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0007C9CBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C9CB: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x4C) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x50) = edx;
    eax = MEM32(eax + 8);
    edx = MEM32(ebp);
    MEM32(esp + 0x54) = eax;
    eax = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0007C9ECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C9EC: ;
    edx = MEM32(esi);
    ebx = eax;
    eax = esp + 0x58;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0007C9FAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007C9FA: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() - MEMF(ebx); /* fsub dword ptr [ebx] */
    edx = MEM32(esi);
    fp_push(MEMF(eax + 4)); /* fld float */
    ecx = esi;
    fp_top() = fp_top() - MEMF(ebx + 4); /* fsub dword ptr [ebx + 4] */
    fp_push(MEMF(eax + 8)); /* fld float */
    eax = esp + 0x64;
    fp_top() = fp_top() - MEMF(ebx + 8); /* fsub dword ptr [ebx + 8] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
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
    fp_top() = fp_top() + MEMF(0x3CDAEC); /* fadd dword ptr [0x3cdaec] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0007CA38u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007CA38: ;
    edx = MEM32(ebp);
    esi = eax;
    eax = esp + 0x70;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0007CA47u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007CA47: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() - MEMF(esi); /* fsub dword ptr [esi] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 4); /* fsub dword ptr [esi + 4] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 8); /* fsub dword ptr [esi + 8] */
    MEMF(esp + 0x3C) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * MEMF(esp + 0x3C); /* fmul dword ptr [esp + 0x3c] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    eax = MEM32(edi + 0x2F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_0007CB78; /* je: equal / zero */

loc_0007CAA4: ;
    edx = MEM32(edi + 0x2F4);
    eax = edi + 0x2D0;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x24) = edx;
    ecx = MEM32(edi + 0x2F4);
    PUSH32(esp, eax);
    ecx = edi + ecx * 4 + 0x2CC;
    PUSH32(esp, 0x0007CAC7u); RECOMP_ABI_CALL(0x0006E240u, sub_0006E240); /* call 0x0006E240 */

loc_0007CAC7: ;
    SET_LO8(eax, MEM8(0x485840));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007CAE5; /* jne: not equal / not zero */

loc_0007CAD0: ;
    PUSH32(esp, 0x0007CAD5u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_0007CAD5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0007CADCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007CADC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esp + 0x24) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0007CAEA; /* je: equal / zero */

loc_0007CAE5: ;
    MEM8(esp + 0x24) = 1;

loc_0007CAEA: ;
    PUSH32(esp, 0x0007CAEFu); RECOMP_ABI_CALL(0x00059CE0u, sub_00059CE0); /* call 0x00059CE0 */

loc_0007CAEF: ;
    ecx = MEM32(esp + 0x18);
    ebp = MEM32(ecx + 0x2F4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    esi = eax;
    eax = MEM32(edi + 0x2F4);
    ebx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = edi + eax * 4 + 0x2CC;
    PUSH32(esp, 0x0007CB2Bu); RECOMP_ABI_CALL(0x0006DE50u, sub_0006DE50); /* call 0x0006DE50 */

loc_0007CB2B: ;
    edx = MEM32(esp + 0x50);
    ecx = MEM32(esp + 0x44);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x50);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    eax = edi + 0x240;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x28); PUSH32(esp, 0x0007CB53u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007CB53: ;
    SET_LO8(eax, MEM8(edi + 0x2F8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0007CB78; /* jbe: below or equal (unsigned <=) */

loc_0007CB5D: ;
    PUSH32(esp, 0x3E19999A);
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x44DD2C);
    ecx = edi;
    MEM8(edi + 0x2F8) = LO8(eax);
    PUSH32(esp, 0x0007CB76u); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_0007CB76: ;
    goto loc_0007CB8A;

loc_0007CB78: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x0007CB8Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007CB8A: ;
    ecx = MEM32(esp + 0x84);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x80;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0007CBB0
 * Original: 0x0007CBB0 - 0x0007CBBE (14 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CBB0(void)
{

loc_0007CBB0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0007CBBBu); RECOMP_ABI_CALL(0x0007C6B0u, sub_0007C6B0); /* call 0x0007C6B0 */

loc_0007CBBB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0007CBC0
 * Original: 0x0007CBC0 - 0x0007CC1C (92 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CBC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007CBC0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0007CBCFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007CBCF: ;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007CBDAu); RECOMP_ABI_CALL(0x00066B20u, sub_00066B20); /* call 0x00066B20 */

loc_0007CBDA: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007CC15; /* je: equal / zero */

loc_0007CBE1: ;
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
    PUSH32(esp, 0x0007CC05u); RECOMP_ABI_CALL(0x0007CC20u, sub_0007CC20); /* call 0x0007CC20 */

loc_0007CC05: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x0007CC0Eu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_0007CC0E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_0007CC15: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0007CC20
 * Original: 0x0007CC20 - 0x0007CD64 (324 bytes, 97 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CC20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007CC20: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F268);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x68;
    eax = MEM32(esp + 0x88);
    edx = MEM32(esp + 0x7C);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x84);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esp + 0x90);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x98);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esi;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0xA8) = esp;
    PUSH32(esp, 0x0007CC78u); RECOMP_ABI_CALL(0x00079B60u, sub_00079B60); /* call 0x00079B60 */

loc_0007CC78: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = esp;
    edi = esi + 0x240;
    MEM32(esi) = 0x3CDAF4;
    ecx = edi;
    MEM32(esp + 0xA8) = 0;
    MEM32(esp + 0xC0) = esp;
    MEM32(eax) = 0;
    PUSH32(esp, 0x0007CCC3u); RECOMP_ABI_CALL(0x0002C8C0u, sub_0002C8C0); /* call 0x0002C8C0 */

loc_0007CCC3: ;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = esp;
    ecx = esp + 0x3C;
    MEM32(esp + 0xC0) = esp;
    MEM32(eax) = edx;
    PUSH32(esp, 0x0007CCF8u); RECOMP_ABI_CALL(0x0002C8C0u, sub_0002C8C0); /* call 0x0002C8C0 */

loc_0007CCF8: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0007CD04u); RECOMP_ABI_CALL(0x0018DD00u, sub_0018DD00); /* call 0x0018DD00 */

loc_0007CD04: ;
    SET_LO8(ecx, MEM8(esi + 0xC8));
    SET_LO8(eax, MEM8(esi + 0x2A4));
    SET_LO8(ecx, LO8(ecx) | 0x40);
    PUSH32(esp, 1);
    MEM8(esi + 0xC8) = LO8(ecx);
    SET_LO8(eax, LO8(eax) & 0xFC);
    PUSH32(esp, 4);
    ecx = esi;
    MEM8(esi + 0x2A4) = LO8(eax);
    PUSH32(esp, 0x0007CD2Cu); RECOMP_ABI_CALL(0x00026DD0u, sub_00026DD0); /* call 0x00026DD0 */

loc_0007CD2C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x0007CD37u); RECOMP_ABI_CALL(0x00026DD0u, sub_00026DD0); /* call 0x00026DD0 */

loc_0007CD37: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    ecx = esi;
    PUSH32(esp, 0x0007CD42u); RECOMP_ABI_CALL(0x00026DD0u, sub_00026DD0); /* call 0x00026DD0 */

loc_0007CD42: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007CD4E; /* je: equal / zero */

loc_0007CD46: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0007CD4Eu); RECOMP_ABI_CALL(0x0007C440u, sub_0007C440); /* call 0x0007C440 */

loc_0007CD4E: ;
    ecx = MEM32(esp + 0x74);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x74;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0007CD70
 * Original: 0x0007CD70 - 0x0007CD76 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CD70(void)
{

loc_0007CD70: ;
    eax = 0x499790;
    esp += 4; return; /* ret */

}

/**
 * sub_0007CD80
 * Original: 0x0007CD80 - 0x0007CD86 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CD80(void)
{

loc_0007CD80: ;
    eax = 0x3CDA84;
    esp += 4; return; /* ret */

}

/**
 * sub_0007CD90
 * Original: 0x0007CD90 - 0x0007CD9B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CD90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007CD90: ;
    ecx = ecx + 0x240;
    g_seh_ebp = ebp; sub_0018DD00(); return; /* tail jmp 0x0018DD00 */

}

/**
 * sub_0007CDA0
 * Original: 0x0007CDA0 - 0x0007CDC6 (38 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CDA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007CDA0: ;
    eax = ecx;
    _fa = (uint32_t)(MEM8(eax + 0x2A4)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x2A4), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007CDC3; /* jne: not equal / not zero */

loc_0007CDAB: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = eax + 0x240;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x0007CDC3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007CDC3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007CDD0
 * Original: 0x0007CDD0 - 0x0007CDEE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CDD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007CDD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0007CDD8u); RECOMP_ABI_CALL(0x0007CDF0u, sub_0007CDF0); /* call 0x0007CDF0 */

loc_0007CDD8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007CDE8; /* je: equal / zero */

loc_0007CDDF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007CDE5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_0007CDE5: ;
    esp = esp + 4;

loc_0007CDE8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007CDF0
 * Original: 0x0007CDF0 - 0x0007CDFB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CDF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007CDF0: ;
    MEM32(ecx) = 0x3CDAF4;
    g_seh_ebp = ebp; sub_00075970(); return; /* tail jmp 0x00075970 */

}

/**
 * sub_0007CE00
 * Original: 0x0007CE00 - 0x0007CE5C (92 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CE00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007CE00: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0007CE0Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007CE0F: ;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007CE1Au); RECOMP_ABI_CALL(0x00066B20u, sub_00066B20); /* call 0x00066B20 */

loc_0007CE1A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007CE55; /* je: equal / zero */

loc_0007CE21: ;
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
    PUSH32(esp, 0x0007CE45u); RECOMP_ABI_CALL(0x0007CE60u, sub_0007CE60); /* call 0x0007CE60 */

loc_0007CE45: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x0007CE4Eu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_0007CE4E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_0007CE55: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0007CE60
 * Original: 0x0007CE60 - 0x0007CF1C (188 bytes, 62 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CE60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007CE60: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F2A4);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esi;
    MEM32(esp + 0x24) = esi;
    MEM32(esp + 0x48) = esp;
    PUSH32(esp, 0x0007CEA8u); RECOMP_ABI_CALL(0x0007CC20u, sub_0007CC20); /* call 0x0007CC20 */

loc_0007CEA8: ;
    PUSH32(esp, 0x27080);
    PUSH32(esp, 8);
    PUSH32(esp, 4);
    edi = esi + 0x2A8;
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x2C) = ebx;
    MEM32(esi) = 0x3CDC8C;
    PUSH32(esp, 0x0007CEC9u); RECOMP_ABI_CALL(0x00011100u, sub_00011100); /* call 0x00011100 */

loc_0007CEC9: ;
    MEM32(edi + 0x24) = ebx;
    PUSH32(esp, 0x6E220);
    PUSH32(esp, 0x27080);
    PUSH32(esp, 8);
    PUSH32(esp, 4);
    edi = esi + 0x2D0;
    PUSH32(esp, edi);
    MEM8(esp + 0x30) = 1;
    PUSH32(esp, 0x0007CEEBu); RECOMP_ABI_CALL(0x003418A8u, sub_003418A8); /* call 0x003418A8 */

loc_0007CEEB: ;
    MEM32(edi + 0x24) = ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    MEM8(esp + 0x1C) = 2;
    MEM8(esi + 0x2F8) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0007CF05; /* je: equal / zero */

loc_0007CEFD: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0007CF05u); RECOMP_ABI_CALL(0x0007C610u, sub_0007C610); /* call 0x0007C610 */

loc_0007CF05: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0007CF20
 * Original: 0x0007CF20 - 0x0007CF26 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CF20(void)
{

loc_0007CF20: ;
    eax = 0x49975C;
    esp += 4; return; /* ret */

}

/**
 * sub_0007CF30
 * Original: 0x0007CF30 - 0x0007CF36 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CF30(void)
{

loc_0007CF30: ;
    eax = 0x3CDA94;
    esp += 4; return; /* ret */

}

/**
 * sub_0007CF40
 * Original: 0x0007CF40 - 0x0007CF50 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CF40(void)
{

loc_0007CF40: ;
    PUSH32(esp, 0x6E220);
    PUSH32(esp, 8);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007CF4Fu); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_0007CF4F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0007CF50
 * Original: 0x0007CF50 - 0x0007CF6E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CF50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007CF50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0007CF58u); RECOMP_ABI_CALL(0x0007CF70u, sub_0007CF70); /* call 0x0007CF70 */

loc_0007CF58: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007CF68; /* je: equal / zero */

loc_0007CF5F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007CF65u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_0007CF65: ;
    esp = esp + 4;

loc_0007CF68: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007CF70
 * Original: 0x0007CF70 - 0x0007CFD5 (101 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CF70(void)
{

loc_0007CF70: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F2B8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3CDC8C;
    PUSH32(esp, 0x6E220);
    PUSH32(esp, 8);
    eax = esi + 0x2D0;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x0007CFB0u); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_0007CFB0: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    MEM32(esi) = 0x3CDAF4;
    PUSH32(esp, 0x0007CFC5u); RECOMP_ABI_CALL(0x00075970u, sub_00075970); /* call 0x00075970 */

loc_0007CFC5: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0007CFE0
 * Original: 0x0007CFE0 - 0x0007D011 (49 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007CFE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007CFE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0007D00F; /* jle: less or equal (signed <=) */

loc_0007CFE8: ;
    PUSH32(esp, 0x0007CFEDu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0007CFED: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0007CFF4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007CFF4: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0007CFFBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007CFFB: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0007D005u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D005: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) & 0xFE;
    MEM32(esi) = 0xFFFFFFFFu;

loc_0007D00F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007D000
 * Original: 0x0007D000 - 0x0007D011 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D000(void)
{

loc_0007D000: ;
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0007D005u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D005: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) & 0xFE;
    MEM32(esi) = 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007D020
 * Original: 0x0007D020 - 0x0007D290 (624 bytes, 204 insns)
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D020(void)
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

loc_0007D020: ;
    esp = esp - 0x4C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0007D060; /* jge: greater or equal (signed >=) */

loc_0007D02F: ;
    MEM32(esp + 0x14) = 1;
    MEM32(esp + 0x18) = ebx;
    MEM8(esp + 0x50) = LO8(ebx);
    PUSH32(esp, 0x0007D044u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0007D044: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0007D04Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D04B: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0007D052u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D052: ;
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x0007D05Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D05E: ;
    MEM32(esi) = eax;

loc_0007D060: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0007D288; /* jle: less or equal (signed <=) */

loc_0007D069: ;
    _fa = (uint32_t)(MEM8(esp + 0x74)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x74), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007D232; /* je: equal / zero */

loc_0007D073: ;
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x6C); /* fmul dword ptr [esp + 0x6c] */
    fp_push(MEMF(esp + 0x68)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x68); /* fmul dword ptr [esp + 0x68] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x64); /* fmul dword ptr [esp + 0x64] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007D1CF; /* jne: not equal / not zero */

loc_0007D0A0: ;
    PUSH32(esp, 0x0007D0A5u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0007D0A5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x108); PUSH32(esp, 0x0007D0AFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D0AF: ;
    fp_top() = fp_top() * MEMF(0x3C837C); /* fmul dword ptr [0x3c837c] */
    MEMF(esp + 0x74) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0007D0D0; /* jp: parity */

loc_0007D0C6: ;
    MEM32(esp + 0x74) = 0;
    goto loc_0007D0E9;

loc_0007D0D0: ;
    fp_push(MEMF(esp + 0x74)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007D0E9; /* jne: not equal / not zero */

loc_0007D0E1: ;
    MEM32(esp + 0x74) = 0x3F800000;

loc_0007D0E9: ;
    ecx = MEM32(esp + 0x74);
    PUSH32(esp, edi);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    edi = esi + 4;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0007D0FFu); RECOMP_ABI_CALL(0x0023FC50u, sub_0023FC50); /* call 0x0023FC50 */

loc_0007D0FF: ;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x0007D108u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0007D108: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0007D10Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D10F: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0007D116u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D116: ;
    edx = MEM32(eax);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0007D125u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D125: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = fp_top() + MEMF(edi); /* fadd dword ptr [edi] */
    eax = MEM32(esp + 0x74);
    fp_push(MEMF(esp + 0x60)); /* fld float */
    ecx = MEM32(eax);
    fp_top() = fp_top() + MEMF(edi + 4); /* fadd dword ptr [edi + 4] */
    MEM32(esp + 0x44) = ecx;
    fp_push(MEMF(esp + 0x64)); /* fld float */
    ecx = MEM32(eax + 8);
    fp_top() = fp_top() + MEMF(edi + 8); /* fadd dword ptr [edi + 8] */
    MEM32(esp + 0x4C) = ecx;
    MEM32(esp + 0x38) = 0;
    MEM32(esp + 0x3C) = 0;
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(esp + 0x54) = 1;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0xC);
    fp_push(MEMF(esp + 0x64)); /* fld float */
    MEM32(esp + 0x2C) = edx;
    fp_top() = fp_top() + MEMF(esp + 0x80); /* fadd dword ptr [esp + 0x80] */
    edx = MEM32(eax + 4);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x48) = edx;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x50) = edx;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x7C); /* fmul dword ptr [esp + 0x7c] */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0007D1B1u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0007D1B1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0007D1B8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D1B8: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0007D1BFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D1BF: ;
    edx = MEM32(eax);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0007D1CEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D1CE: ;
    POP32(esp, edi);

loc_0007D1CF: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007D288; /* jne: not equal / not zero */

loc_0007D1D9: ;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x0007D1E2u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0007D1E2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0007D1E9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D1E9: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0007D1F0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D1F0: ;
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0007D1FFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D1FF: ;
    MEM8(esp + 0x50) = 1;
    PUSH32(esp, 0x0007D209u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0007D209: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0007D210u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D210: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0007D217u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D217: ;
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0007D226u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D226: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) | 1;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 44; return; /* ret 40 */

loc_0007D232: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007D288; /* je: equal / zero */

loc_0007D238: ;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x0007D241u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0007D241: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0007D248u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D248: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0007D24Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D24F: ;
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0007D25Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D25E: ;
    MEM8(esp + 0x50) = LO8(ebx);
    PUSH32(esp, 0x0007D267u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0007D267: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0007D26Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D26E: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0007D275u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D275: ;
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0007D284u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D284: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) & 0xFE;

loc_0007D288: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 44; return; /* ret 40 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0007D290
 * Original: 0x0007D290 - 0x0007D3C0 (304 bytes, 94 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D290(void)
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

loc_0007D290: ;
    esp = esp - 0x28;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax);
    MEM32(esp + 0x38) = ecx;
    ecx = esp + 0x38;
    PUSH32(esp, 0x0007D2ABu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0007D2AB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007D2D5; /* je: equal / zero */

loc_0007D2B1: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0007D2B7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D2B7: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007D2D7; /* jne: not equal / not zero */

loc_0007D2D5: ;
    esi = 0; /* xor self */

loc_0007D2D7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0007D36E; /* je: equal / zero */

loc_0007D309: ;
    eax = MEM32(esi);
    fp_pop(); /* fstp st(0) */
    ecx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0007D317u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D317: ;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax + 8);
    esi = esi + 0x2C;
    eax = esp + 0x28;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0x0007D339u); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_0007D339: ;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8324); /* fmul dword ptr [0x3c8324] */
    esp = esp + 8;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    edx = MEM32(esp + 0xC);
    fp_top() = fp_top() * MEMF(0x3C8324); /* fmul dword ptr [0x3c8324] */
    MEM32(esp + 0x24) = edx;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x38);
    fp_push(MEMF(eax)); /* fld float */
    MEM32(esp + 0x20) = ecx;
    fp_top() = fp_top() * MEMF(0x3C8324); /* fmul dword ptr [0x3c8324] */

loc_0007D36E: ;
    eax = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax + 4) = ecx;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x2C);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x30);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(eax + 8) = ecx;
    ecx = edi;
    MEM32(eax + 4) = edx;
    PUSH32(esp, 0x0007D3B7u); RECOMP_ABI_CALL(0x0007D020u, sub_0007D020); /* call 0x0007D020 */

loc_0007D3B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0007D3C0
 * Original: 0x0007D3C0 - 0x0007D402 (66 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007D3C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = edi + 0x2C8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3C8668);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0007D3DCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D3DC: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CDE48);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0007D3EAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D3EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007D3FC; /* je: equal / zero */

loc_0007D3EE: ;
    ecx = MEM32(ebx);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x1BC); PUSH32(esp, 0x0007D3FCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D3FC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007D410
 * Original: 0x0007D410 - 0x0007D457 (71 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D410(void)
{

loc_0007D410: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x0007D41Fu); RECOMP_ABI_CALL(0x00091000u, sub_00091000); /* call 0x00091000 */

loc_0007D41F: ;
    ecx = esi;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x0007D428u); RECOMP_ABI_CALL(0x0006BFC0u, sub_0006BFC0); /* call 0x0006BFC0 */

loc_0007D428: ;
    PUSH32(esp, 1);
    eax = edi + 0x2C4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0007D438u); RECOMP_ABI_CALL(0x0006BFD0u, sub_0006BFD0); /* call 0x0006BFD0 */

loc_0007D438: ;
    PUSH32(esp, 4);
    edi = edi + 0x2C8;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0007D448u); RECOMP_ABI_CALL(0x0006BFD0u, sub_0006BFD0); /* call 0x0006BFD0 */

loc_0007D448: ;
    ecx = esi;
    PUSH32(esp, 0x0007D44Fu); RECOMP_ABI_CALL(0x0006C070u, sub_0006C070); /* call 0x0006C070 */

loc_0007D44F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007D460
 * Original: 0x0007D460 - 0x0007D463 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D460(void)
{

loc_0007D460: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0007D470
 * Original: 0x0007D470 - 0x0007D558 (232 bytes, 75 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007D470: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F2D8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    esi = ecx;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esi;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x44) = esp;
    PUSH32(esp, 0x0007D4B7u); RECOMP_ABI_CALL(0x00093880u, sub_00093880); /* call 0x00093880 */

loc_0007D4B7: ;
    MEM32(esi) = 0x3CDE6C;
    ebx = esi + 0x2C8;
    MEM32(ebx) = 1;
    eax = MEM32(esi + 4);
    eax = eax | 0x10;
    ecx = esi;
    MEM32(esp + 0x18) = 0;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x0007D4E1u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_0007D4E1: ;
    edx = MEM32(esi + 4);
    edx = edx | 8;
    ecx = esi;
    MEM32(esi + 4) = edx;
    PUSH32(esp, 0x0007D4F1u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_0007D4F1: ;
    SET_LO8(ecx, MEM8(esi + 0xC9));
    SET_LO8(ecx, LO8(ecx) | 0x40);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM8(esi + 0xC9) = LO8(ecx);
    if (TEST_Z(_fa, _fb)) goto loc_0007D531; /* je: equal / zero */

loc_0007D504: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3C8668);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0007D511u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D511: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CDE48);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0007D51Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D51F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007D531; /* je: equal / zero */

loc_0007D523: ;
    ecx = MEM32(ebx);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1BC); PUSH32(esp, 0x0007D531u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D531: ;
    SET_LO8(eax, MEM8(esi + 0xCD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0007D544; /* jne: not equal / not zero */

loc_0007D53D: ;
    MEM8(esi + 0xCD) = 1;

loc_0007D544: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0007D560
 * Original: 0x0007D560 - 0x0007D566 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D560(void)
{

loc_0007D560: ;
    eax = 0x4997E8;
    esp += 4; return; /* ret */

}

/**
 * sub_0007D570
 * Original: 0x0007D570 - 0x0007D576 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D570(void)
{

loc_0007D570: ;
    eax = 0x3CDE58;
    esp += 4; return; /* ret */

}

/**
 * sub_0007D580
 * Original: 0x0007D580 - 0x0007D59E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007D580: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0007D588u); RECOMP_ABI_CALL(0x0007D5A0u, sub_0007D5A0); /* call 0x0007D5A0 */

loc_0007D588: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007D598; /* je: equal / zero */

loc_0007D58F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007D595u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_0007D595: ;
    esp = esp + 4;

loc_0007D598: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007D5A0
 * Original: 0x0007D5A0 - 0x0007D5AB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D5A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007D5A0: ;
    MEM32(ecx) = 0x3CDE6C;
    g_seh_ebp = ebp; sub_0002E3D0(); return; /* tail jmp 0x0002E3D0 */

}

/**
 * sub_0007D5B0
 * Original: 0x0007D5B0 - 0x0007D60C (92 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007D5B0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0007D5BFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D5BF: ;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007D5CAu); RECOMP_ABI_CALL(0x00066B20u, sub_00066B20); /* call 0x00066B20 */

loc_0007D5CA: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007D605; /* je: equal / zero */

loc_0007D5D1: ;
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
    PUSH32(esp, 0x0007D5F5u); RECOMP_ABI_CALL(0x0007D470u, sub_0007D470); /* call 0x0007D470 */

loc_0007D5F5: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x0007D5FEu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_0007D5FE: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_0007D605: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0007D610
 * Original: 0x0007D610 - 0x0007D69F (143 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D610(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007D610: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = ecx;
    ecx = edi;
    PUSH32(esp, 0x0007D621u); RECOMP_ABI_CALL(0x0006BFC0u, sub_0006BFC0); /* call 0x0006BFC0 */

loc_0007D621: ;
    PUSH32(esp, 1);
    ebx = esi + 0x2C4;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0007D631u); RECOMP_ABI_CALL(0x0006C020u, sub_0006C020); /* call 0x0006C020 */

loc_0007D631: ;
    PUSH32(esp, 4);
    ebp = esi + 0x2C8;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x0007D641u); RECOMP_ABI_CALL(0x0006C020u, sub_0006C020); /* call 0x0006C020 */

loc_0007D641: ;
    ecx = edi;
    PUSH32(esp, 0x0007D648u); RECOMP_ABI_CALL(0x0006C070u, sub_0006C070); /* call 0x0006C070 */

loc_0007D648: ;
    PUSH32(esp, 0x0007D64Du); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0007D64D: ;
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0007D659u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D659: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007D690; /* je: equal / zero */

loc_0007D65D: ;
    ebx = MEM32(eax + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007D66B; /* jne: not equal / not zero */

loc_0007D664: ;
    eax = 0x3C806C;
    goto loc_0007D681;

loc_0007D66B: ;
    PUSH32(esp, 0x0007D670u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0007D670: ;
    ebx = ebx & 0xFFFFFF;
    edx = MEM32(eax + ebx * 4 + 4);
    eax = edx + eax + 0x8008;

loc_0007D681: ;
    ecx = MEM32(ebp);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1BC); PUSH32(esp, 0x0007D690u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D690: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0007D698u); RECOMP_ABI_CALL(0x00091280u, sub_00091280); /* call 0x00091280 */

loc_0007D698: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007D6A0
 * Original: 0x0007D6A0 - 0x0007DCDF (1599 bytes, 504 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007D6A0(void)
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

loc_0007D6A0: ;
    esp = esp - 0x4C;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x58) = eax;
    esi = ecx;
    PUSH32(esp, 0x0007D6B7u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_0007D6B7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0007D6BEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D6BE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ebp = MEM32(esp + 0x60);
    if (TEST_NZ(_fa, _fb)) goto loc_0007D6D6; /* jne: not equal / not zero */

loc_0007D6C6: ;
    ecx = ebp;
    PUSH32(esp, 0x0007D6CDu); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_0007D6CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007DA66; /* jne: not equal / not zero */

loc_0007D6D6: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007D74C; /* je: equal / zero */

loc_0007D6DA: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0007D6E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D6E1: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007D74C; /* je: equal / zero */

loc_0007D6FF: ;
    fp_push(MEMF(ebp + 0x240)); /* fld float */
    MEM32(esp + 0x10) = ebp;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007DA66; /* jne: not equal / not zero */

loc_0007D71A: ;
    MEM8(esp + 0x18) = 0;
    PUSH32(esp, 0x0007D724u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0007D724: ;
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x2C4));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0007D734u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D734: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007D827; /* je: equal / zero */

loc_0007D73E: ;
    edi = MEM32(ebx + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007D756; /* jne: not equal / not zero */

loc_0007D745: ;
    eax = 0x3C806C;
    goto loc_0007D76C;

loc_0007D74C: ;
    MEM32(esp + 0x10) = 0;
    goto loc_0007D71A;

loc_0007D756: ;
    PUSH32(esp, 0x0007D75Bu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0007D75B: ;
    edi = edi & 0xFFFFFF;
    edx = MEM32(eax + edi * 4 + 4);
    eax = edx + eax + 0x8008;

loc_0007D76C: ;
    PUSH32(esp, 0x3CD03C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007D777u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_0007D777: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007D8F1; /* je: equal / zero */

loc_0007D782: ;
    PUSH32(esp, 0x0007D787u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_0007D787: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0007D78Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D78E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007D7D8; /* je: equal / zero */

loc_0007D792: ;
    PUSH32(esp, 0x0007D797u); RECOMP_ABI_CALL(0x000BF790u, sub_000BF790); /* call 0x000BF790 */

loc_0007D797: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007D7D8; /* jne: not equal / not zero */

loc_0007D79C: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007D7C3; /* je: equal / zero */

loc_0007D7A4: ;
    eax = MEM32(eax + 0x330);
    ecx = MEM32(esi + 0x1C);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x68) = ecx;
    PUSH32(esp, 0x0007D7BCu); RECOMP_ABI_CALL(0x000BFEA0u, sub_000BFEA0); /* call 0x000BFEA0 */

loc_0007D7BC: ;
    esp = esp + 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007D80A; /* jne: not equal / not zero */

loc_0007D7C3: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, 0x0007D7CEu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0007D7CE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 8; return; /* ret 4 */

loc_0007D7D8: ;
    PUSH32(esp, 0x0007D7DDu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0007D7DD: ;
    edi = eax;
    PUSH32(esp, 0x0007D7E4u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0007D7E4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x13C); PUSH32(esp, 0x0007D7F0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D7F0: ;
    edx = MEM32(edi);
    ecx = edi;
    MEM32(esp + 0x60) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x134); PUSH32(esp, 0x0007D7FEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D7FE: ;
    ecx = MEM32(esp + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0007DA66; /* jge: greater or equal (signed >=) */

loc_0007D80A: ;
    PUSH32(esp, 0x0007D80Fu); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_0007D80F: ;
    ecx = MEM32(esi + 0x1C);
    MEM32(esp + 0x60) = ecx;
    edx = MEM32(eax);
    ecx = esp + 0x60;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x0007D827u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D827: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0007D82Fu); RECOMP_ABI_CALL(0x00028420u, sub_00028420); /* call 0x00028420 */

loc_0007D82F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007DA66; /* je: equal / zero */

loc_0007D837: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007DA66; /* je: equal / zero */

loc_0007D83F: ;
    eax = ebx + 0x18;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007DB55; /* je: equal / zero */

loc_0007D852: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007DB55; /* je: equal / zero */

loc_0007D85B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007DB55; /* je: equal / zero */

loc_0007D864: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007DA7B; /* jne: not equal / not zero */

loc_0007D86D: ;
    PUSH32(esp, 0x0007D872u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0007D872: ;
    edi = eax;
    PUSH32(esp, 0x0007D879u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0007D879: ;
    edx = MEM32(edi);
    ebp = eax;
    eax = MEM32(ebp);
    ecx = edi;
    MEM32(esp + 0x60) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0007D889u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D889: ;
    eax = eax + MEM32(esi + 0x2C8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x64);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0007D899u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D899: ;
    PUSH32(esp, 0x0007D89Eu); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_0007D89E: ;
    ecx = MEM32(esi + 0x1C);
    MEM32(esp + 0x60) = ecx;
    edx = MEM32(eax);
    ecx = esp + 0x60;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x2C8);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0007D8BBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D8BB: ;
    PUSH32(esp, 0x0007D8C0u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0007D8C0: ;
    esi = eax;
    PUSH32(esp, 0x0007D8C7u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0007D8C7: ;
    edx = MEM32(esi);
    edi = eax;
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3CE040);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0007D8D7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D8D7: ;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + 0x1C); PUSH32(esp, 0x0007D8DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D8DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007DC60; /* je: equal / zero */

loc_0007D8E5: ;
    eax = eax + 0x18;
    MEM32(esp + 0x14) = eax;
    goto loc_0007DC60;

loc_0007D8F1: ;
    PUSH32(esp, 0x0007D8F6u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0007D8F6: ;
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x2C4));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0007D906u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D906: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007D967; /* je: equal / zero */

loc_0007D90A: ;
    PUSH32(esp, 0x0007D90Fu); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0007D90F: ;
    edi = eax;
    PUSH32(esp, 0x0007D916u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0007D916: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0007D91Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D91F: ;
    edx = MEM32(edi);
    ecx = edi;
    MEM16(esp + 0x60) = LO16(eax);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x0007D92Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D92B: ;
    SET_LO16(ecx, MEM16(esp + 0x60));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007D967; /* jb: below (unsigned <) */

loc_0007D935: ;
    PUSH32(esp, 0x0007D93Au); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_0007D93A: ;
    ecx = MEM32(esi + 0x1C);
    MEM32(esp + 0x60) = ecx;
    edx = MEM32(eax);
    ecx = esp + 0x60;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x98); PUSH32(esp, 0x0007D952u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D952: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, 0x0007D95Du); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0007D95D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 8; return; /* ret 4 */

loc_0007D967: ;
    PUSH32(esp, 0x0007D96Cu); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0007D96C: ;
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x2C4));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0007D97Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D97C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007D9DD; /* je: equal / zero */

loc_0007D980: ;
    PUSH32(esp, 0x0007D985u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0007D985: ;
    edi = eax;
    PUSH32(esp, 0x0007D98Cu); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0007D98C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0007D995u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D995: ;
    edx = MEM32(edi);
    ecx = edi;
    MEM16(esp + 0x60) = LO16(eax);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0007D9A1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D9A1: ;
    SET_LO16(ecx, MEM16(esp + 0x60));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007D9DD; /* jb: below (unsigned <) */

loc_0007D9AB: ;
    PUSH32(esp, 0x0007D9B0u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_0007D9B0: ;
    ecx = MEM32(esi + 0x1C);
    MEM32(esp + 0x60) = ecx;
    edx = MEM32(eax);
    ecx = esp + 0x60;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x0007D9C8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D9C8: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, 0x0007D9D3u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0007D9D3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 8; return; /* ret 4 */

loc_0007D9DD: ;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007D827; /* jne: not equal / not zero */

loc_0007D9E7: ;
    PUSH32(esp, 0x0007D9ECu); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0007D9EC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x0007D9F3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007D9F3: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x14 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0007D827; /* jb: below (unsigned <) */

loc_0007D9FD: ;
    PUSH32(esp, 0x0007DA02u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0007DA02: ;
    esi = eax;
    PUSH32(esp, 0x0007DA09u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_0007DA09: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    esp = esp - 0x10;
    edi = eax;
    eax = esp;
    ecx = 0x3F4CCCCD;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = 0x3F800000;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0xA0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0007DA39u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007DA39: ;
    ecx = MEM32(0x4997D0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x24); PUSH32(esp, 0x0007DA46u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007DA46: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(0x4997D0) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0007DA58; /* je: equal / zero */

loc_0007DA53: ;
    PUSH32(esp, 0x0007DA58u); RECOMP_ABI_CALL(0x00031A80u, sub_00031A80); /* call 0x00031A80 */

loc_0007DA58: ;
    PUSH32(esp, 0x0007DA5Du); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0007DA5D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0007DA66u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007DA66: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, 0x0007DA71u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0007DA71: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 8; return; /* ret 4 */

loc_0007DA7B: ;
    edi = ebx + 4;
    PUSH32(esp, 0x3CD018);
    ecx = edi;
    PUSH32(esp, 0x0007DA8Au); RECOMP_ABI_CALL(0x00013DC0u, sub_00013DC0); /* call 0x00013DC0 */

loc_0007DA8A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007DA90u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_0007DA90: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007DABB; /* je: equal / zero */

loc_0007DA97: ;
    PUSH32(esp, 0x0007DA9Cu); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_0007DA9C: ;
    ecx = MEM32(esi + 0x1C);
    MEM32(esp + 0x60) = ecx;
    edx = MEM32(eax);
    ecx = esp + 0x60;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x2C8);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x98); PUSH32(esp, 0x0007DAB9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007DAB9: ;
    goto loc_0007DAF6;

loc_0007DABB: ;
    PUSH32(esp, 0x3CD024);
    ecx = edi;
    PUSH32(esp, 0x0007DAC7u); RECOMP_ABI_CALL(0x00013DC0u, sub_00013DC0); /* call 0x00013DC0 */

loc_0007DAC7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007DACDu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_0007DACD: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007DAF6; /* je: equal / zero */

loc_0007DAD4: ;
    PUSH32(esp, 0x0007DAD9u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_0007DAD9: ;
    edx = MEM32(esi + 0x1C);
    ecx = esp + 0x60;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x2C8);
    MEM32(esp + 0x64) = edx;
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x0007DAF6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007DAF6: ;
    PUSH32(esp, 0x0007DAFBu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0007DAFB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x0007DB05u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007DB05: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007DB3C; /* jne: not equal / not zero */

loc_0007DB09: ;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007DB3C; /* jne: not equal / not zero */

loc_0007DB0F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0007DB15u); RECOMP_ABI_CALL(0x00027620u, sub_00027620); /* call 0x00027620 */

loc_0007DB15: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007DB3C; /* je: equal / zero */

loc_0007DB1C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F000000);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1EC); PUSH32(esp, 0x0007DB2Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007DB2B: ;
    PUSH32(esp, 0x0007DB30u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0007DB30: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x158); PUSH32(esp, 0x0007DB3Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007DB3C: ;
    SET_LO16(eax, ZX8(MEM8(ebx + 0x1C)));
    SET_LO16(eax, LO16(eax) + MEM16(esi + 0x2C8));
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007DB50u); RECOMP_ABI_CALL(0x0007DEC0u, sub_0007DEC0); /* call 0x0007DEC0 */

loc_0007DB50: ;
    xml1_auto_equip_pickup(ebx);
    goto loc_0007DC60;

loc_0007DB55: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x0007DB62u); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_0007DB62: ;
    ebp = eax;
    esp = esp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007DC60; /* je: equal / zero */

loc_0007DB6F: ;
    ecx = ebp;
    PUSH32(esp, 0x0007DB76u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_0007DB76: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007DC60; /* jne: not equal / not zero */

loc_0007DB7F: ;
    eax = MEM32(ebx + 0xC);
    eax = eax - 3;
    edi = MEM32(ebp + 0x2D8);
    if ((eax == 0)) goto loc_0007DC41; /* je: equal / zero */

loc_0007DB91: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0007DBF0; /* je: equal / zero */

loc_0007DB94: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0007DC60; /* jne: not equal / not zero */

loc_0007DB9B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007DC60; /* je: equal / zero */

loc_0007DBA3: ;
    PUSH32(esp, 0x0007DBA8u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0007DBA8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x78);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0007DBB1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007DBB1: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x2C8);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x3C944C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007DBC8u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_0007DBC8: ;
    esp = esp + 0x10;
    ecx = edi;
    PUSH32(esp, 0x0007DBD2u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_0007DBD2: ;
    ecx = eax;
    PUSH32(esp, 0x0007DBD9u); RECOMP_ABI_CALL(0x00047320u, sub_00047320); /* call 0x00047320 */

loc_0007DBD9: ;
    SET_LO8(eax, LO8(eax) + MEM8(esi + 0x2C8));
    ecx = edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007DBE7u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_0007DBE7: ;
    ecx = eax;
    PUSH32(esp, 0x0007DBEEu); RECOMP_ABI_CALL(0x00047330u, sub_00047330); /* call 0x00047330 */

loc_0007DBEE: ;
    goto loc_0007DC60;

loc_0007DBF0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007DC60; /* je: equal / zero */

loc_0007DBF4: ;
    PUSH32(esp, 0x0007DBF9u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0007DBF9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x77);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0007DC02u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007DC02: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x2C8);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x3C944C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007DC19u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_0007DC19: ;
    esp = esp + 0x10;
    ecx = edi;
    PUSH32(esp, 0x0007DC23u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_0007DC23: ;
    ecx = eax;
    PUSH32(esp, 0x0007DC2Au); RECOMP_ABI_CALL(0x00047340u, sub_00047340); /* call 0x00047340 */

loc_0007DC2A: ;
    SET_LO8(eax, LO8(eax) + MEM8(esi + 0x2C8));
    ecx = edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007DC38u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_0007DC38: ;
    ecx = eax;
    PUSH32(esp, 0x0007DC3Fu); RECOMP_ABI_CALL(0x000476C0u, sub_000476C0); /* call 0x000476C0 */

loc_0007DC3F: ;
    goto loc_0007DC60;

loc_0007DC41: ;
    edx = MEM32(esi + 0x2C8);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0007DC4Fu); RECOMP_ABI_CALL(0x00033170u, sub_00033170); /* call 0x00033170 */

loc_0007DC4F: ;
    eax = MEM32(esi + 0x2C8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007DC5Du); RECOMP_ABI_CALL(0x0002FCF0u, sub_0002FCF0); /* call 0x0002FCF0 */

loc_0007DC5D: ;
    esp = esp + 8;

loc_0007DC60: ;
    PUSH32(esp, 0x0007DC65u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0007DC65: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0007DC6Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007DC6C: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007DC84; /* je: equal / zero */

loc_0007DC74: ;
    _fa = (uint32_t)(MEM8(ebx + 0x20)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x20), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007DC84; /* je: equal / zero */

loc_0007DC7A: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0007DC84u); RECOMP_ABI_CALL(0x0007F8B0u, sub_0007F8B0); /* call 0x0007F8B0 */

loc_0007DC84: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007DCCA; /* je: equal / zero */

loc_0007DC8C: ;
    PUSH32(esp, 0x0007DC91u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_0007DC91: ;
    esi = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    esp = esp - 0x10;
    edx = esp;
    ecx = 0x3F4CCCCD;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    PUSH32(esp, 0x40400000);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    MEM32(edx + 8) = 0x3E4CCCCD;
    MEM32(edx + 0xC) = 0x3F800000;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0007DCC8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007DCC8: ;
    MEM32(esi) = eax;

loc_0007DCCA: ;
    ecx = MEM32(esp + 0x58);
    SET_LO8(eax, 1);
    PUSH32(esp, 0x0007DCD5u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0007DCD5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0007DCE0
 * Original: 0x0007DCE0 - 0x0007DD23 (67 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007DCE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007DCE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0007DD14; /* je: equal / zero */

loc_0007DCEC: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007DD14; /* je: equal / zero */

loc_0007DCF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007DCF7u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0007DCF7: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007DD02u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_0007DD02: ;
    ecx = eax;
    PUSH32(esp, 0x0007DD09u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_0007DD09: ;
    MEM32(edi + 0x150) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0007DD14: ;
    MEM32(edi + 0x150) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007DD30
 * Original: 0x0007DD30 - 0x0007DEA6 (374 bytes, 114 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007DD30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007DD30: ;
    esp = esp - 0x128;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0x130) = eax;
    esi = ecx;
    PUSH32(esp, 0x0007DD4Cu); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0007DD4C: ;
    ecx = MEM32(esp + 0x138);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0007DD5Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007DD5B: ;
    SET_LO8(ebx, LO8(eax));
    MEM8(esp + 0xC) = LO8(ebx);
    PUSH32(esp, 0x0007DD66u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0007DD66: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0007DD72u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007DD72: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007DD92; /* jne: not equal / not zero */

loc_0007DD78: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x124);
    PUSH32(esp, 0x0007DD89u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0007DD89: ;
    esp = esp + 0x128;
    esp += 12; return; /* ret 8 */

loc_0007DD92: ;
    edx = MEM32(esp + 0x13C);
    MEM8(esi + 0x2C4) = LO8(ebx);
    MEM32(esi + 0x2C8) = edx;
    MEM8(esp + 0x30) = 0;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x1F);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x458BE8); PUSH32(esp, 0x0007DDB5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007DDB5: ;
    ebx = eax;
    esp = esp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007DDCB; /* je: equal / zero */

loc_0007DDBE: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    MEM32(esp + 0xC) = 0x3CB044;
    if (CMP_NE(_fa, _fb)) goto loc_0007DDD3; /* jne: not equal / not zero */

loc_0007DDCB: ;
    MEM32(esp + 0xC) = 0x3C806C;

loc_0007DDD3: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007DDE2; /* jne: not equal / not zero */

loc_0007DDDB: ;
    eax = 0x3C806C;
    goto loc_0007DDF8;

loc_0007DDE2: ;
    PUSH32(esp, 0x0007DDE7u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0007DDE7: ;
    edi = edi & 0xFFFFFF;
    ecx = MEM32(eax + edi * 4 + 4);
    eax = ecx + eax + 0x8008;

loc_0007DDF8: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3CE048);
    eax = esp + 0x44;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007DE13u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_0007DE13: ;
    esp = esp + 0x18;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0007DE22u); RECOMP_ABI_CALL(0x0007DCE0u, sub_0007DCE0); /* call 0x0007DCE0 */

loc_0007DE22: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x178); PUSH32(esp, 0x0007DE2Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007DE2C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007DE8B; /* jne: not equal / not zero */

loc_0007DE30: ;
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007DE3E; /* jne: not equal / not zero */

loc_0007DE37: ;
    eax = 0x3C806C;
    goto loc_0007DE54;

loc_0007DE3E: ;
    PUSH32(esp, 0x0007DE43u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0007DE43: ;
    edi = edi & 0xFFFFFF;
    ecx = MEM32(eax + edi * 4 + 4);
    eax = ecx + eax + 0x8008;

loc_0007DE54: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007DE61u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0007DE61: ;
    esp = esp + 0xC;
    PUSH32(esp, 3);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esp + 0x3B) = 0;
    PUSH32(esp, 0x0007DE77u); RECOMP_ABI_CALL(0x00075D00u, sub_00075D00); /* call 0x00075D00 */

loc_0007DE77: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007DE8B; /* jne: not equal / not zero */

loc_0007DE7B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x0007DE8Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007DE8B: ;
    ecx = MEM32(esp + 0x134);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    PUSH32(esp, 0x0007DE9Du); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0007DE9D: ;
    esp = esp + 0x128;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0007DEB0
 * Original: 0x0007DEB0 - 0x0007DEBF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007DEB0(void)
{

loc_0007DEB0: ;
    eax = ecx;
    SET_LO8(ecx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    MEM8(eax) = 0;
    MEM8(eax + 1) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0007DEC0
 * Original: 0x0007DEC0 - 0x0007DEEF (47 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007DEC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007DEC0: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(edx), LO16(edx) (16-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0007DED2; /* jge: greater or equal (signed >=) */

loc_0007DEC9: ;
    MEM8(ecx + 0x1C) = 0;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_0007DED2: ;
    SET_LO8(eax, MEM8(ecx + 0x1D));
    PUSH32(esp, esi);
    esi = ZX8(LO8(eax));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(esi) (16-bit) */
    POP32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_0007DEE7; /* jle: less or equal (signed <=) */

loc_0007DEDF: ;
    MEM8(ecx + 0x1C) = LO8(eax);
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_0007DEE7: ;
    MEM8(ecx + 0x1C) = LO8(edx);
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007DEF0
 * Original: 0x0007DEF0 - 0x0007DF2C (60 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007DEF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007DEF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xB4); PUSH32(esp, 0x0007DEFBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007DEFB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007DF28; /* je: equal / zero */

loc_0007DEFF: ;
    ecx = MEM32(esi + 0x168C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0007DF0Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007DF0B: ;
    eax = MEM32(esi + 0x168C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007DF17u); RECOMP_ABI_CALL(0x00123550u, xml1_guest_save_buffer_release); /* call 0x00123550 */

loc_0007DF17: ;
    esp = esp + 4;
    MEM32(esi + 0x168C) = 0;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0007DF28: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007DF30
 * Original: 0x0007DF30 - 0x0007DF60 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007DF30(void)
{

loc_0007DF30: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM8(eax + 0x1C) = LO8(ecx);
    MEM8(eax + 0x1F) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x20));
    SET_LO8(ecx, LO8(ecx) & 0xE0);
    MEM8(eax + 0x1D) = 0x63;
    MEM8(eax + 0x1E) = 0xFF;
    MEM8(eax + 0x20) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0007DF60
 * Original: 0x0007DF60 - 0x0007DF73 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007DF60(void)
{

loc_0007DF60: ;
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 0xA0);
    PUSH32(esp, 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007DF72u); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_0007DF72: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0007DF80
 * Original: 0x0007DF80 - 0x0007E05E (222 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007DF80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007DF80: ;
    raven_stash_forget(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F41C);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3CE064;
    MEM32(esp + 0x10) = 3;
    { uint32_t _icall_target = MEM32(0x3CE118); PUSH32(esp, 0x0007DFB1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007DFB1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007DFDA; /* je: equal / zero */

loc_0007DFB5: ;
    ecx = MEM32(esi + 0x168C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0007DFC1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007DFC1: ;
    ecx = MEM32(esi + 0x168C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007DFCDu); RECOMP_ABI_CALL(0x00123550u, xml1_guest_save_buffer_release); /* call 0x00123550 */

loc_0007DFCD: ;
    esp = esp + 4;
    MEM32(esi + 0x168C) = 0;

loc_0007DFDA: ;
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 0xA0);
    PUSH32(esp, 2);
    edx = esi + 0x1920;
    PUSH32(esp, edx);
    MEM8(esp + 0x20) = 2;
    PUSH32(esp, 0x0007DFF7u); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_0007DFF7: ;
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 0xA0);
    PUSH32(esp, 2);
    eax = esi + 0x17D8;
    PUSH32(esp, eax);
    MEM8(esp + 0x20) = 1;
    PUSH32(esp, 0x0007E014u); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_0007E014: ;
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 0xA0);
    PUSH32(esp, 2);
    ecx = esi + 0x1698;
    PUSH32(esp, ecx);
    MEM8(esp + 0x20) = 0;
    PUSH32(esp, 0x0007E031u); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_0007E031: ;
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 0xA0);
    PUSH32(esp, 0x24);
    esi = esi + 4;
    PUSH32(esp, esi);
    MEM32(esp + 0x20) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0007E04Eu); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_0007E04E: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0007E060
 * Original: 0x0007E060 - 0x0007E068 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E060(void)
{

loc_0007E060: ;
    SET_LO16(eax, MEM16(ecx + 0x1694));
    esp += 4; return; /* ret */

}

/**
 * sub_0007E070
 * Original: 0x0007E070 - 0x0007E07F (15 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E070(void)
{

loc_0007E070: ;
    SET_LO16(eax, MEM16(esp + 4));
    MEM16(ecx + 0x1694) = LO16(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007E080
 * Original: 0x0007E080 - 0x0007E087 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E080(void)
{

loc_0007E080: ;
    eax = MEM32(ecx + 0x1690);
    esp += 4; return; /* ret */

}

/**
 * sub_0007E090
 * Original: 0x0007E090 - 0x0007E0A0 (16 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E090: ;
    SET_LO8(eax, MEM8(ecx + 0x1696));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esp + 4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esp + 4) (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007E0A0
 * Original: 0x0007E0A0 - 0x0007E0E0 (64 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E0A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E0A0: ;
    SET_LO8(eax, MEM8(ecx + 0x1697));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esp + 4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esp + 4) (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 8; return; /* ret 4 */

    PUSH32(esp, 0x0007E0BDu); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0007E0BD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0007E0C4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007E0C4: ;
    ecx = eax;

loc_0007E0C6: ;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = edx + eax + 2;
    eax = eax + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007E0B0
 * Original: 0x0007E0B0 - 0x0007E0E0 (48 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E0B0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0007E0C6; /* jge: greater or equal (signed >=) */

loc_0007E0B8: ;
    PUSH32(esp, 0x0007E0BDu); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0007E0BD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0007E0C4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007E0C4: ;
    ecx = eax;

loc_0007E0C6: ;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = edx + eax + 2;
    eax = eax + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007E0E0
 * Original: 0x0007E0E0 - 0x0007E0F3 (19 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E0E0(void)
{

loc_0007E0E0: ;
    eax = MEM32(ecx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ecx + 0x1696));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x0007E0EEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007E0EE: ;
    SET_LO16(eax, ZX8(LO8(eax)));
    esp += 4; return; /* ret */

}

/**
 * sub_0007E100
 * Original: 0x0007E100 - 0x0007E113 (19 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E100(void)
{

loc_0007E100: ;
    eax = MEM32(ecx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ecx + 0x1697));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x0007E10Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007E10E: ;
    SET_LO16(eax, ZX8(LO8(eax)));
    esp += 4; return; /* ret */

}

/**
 * sub_0007E120
 * Original: 0x0007E120 - 0x0007E12D (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E120(void)
{

loc_0007E120: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x1690) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007E130
 * Original: 0x0007E130 - 0x0007E138 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E130(void)
{

loc_0007E130: ;
    eax = ZX8(MEM8(ecx + 0x1688));
    esp += 4; return; /* ret */

}

/**
 * sub_0007E140
 * Original: 0x0007E140 - 0x0007E155 (21 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E140(void)
{

loc_0007E140: ;
    edx = MEM32(ecx + 0x1A60);
    eax = MEM32(esp + 4);
    edx = edx - eax;
    MEM32(ecx + 0x1A60) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007E160
 * Original: 0x0007E160 - 0x0007E16E (14 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E160: ;
    edx = MEM32(ecx + 0x168C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_0007E170
 * Original: 0x0007E170 - 0x0007E26D (253 bytes, 69 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E170: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F311);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x28;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xB4); PUSH32(esp, 0x0007E193u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007E193: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007E259; /* jne: not equal / not zero */

loc_0007E19B: ;
    PUSH32(esp, 0x3D);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x0007E1A4u); RECOMP_ABI_CALL(0x00123530u, sub_00123530); /* call 0x00123530 */

loc_0007E1A4: ;
    esp = esp + 8;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x34) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0007E1C4; /* je: equal / zero */

loc_0007E1BB: ;
    ecx = eax;
    PUSH32(esp, 0x0007E1C2u); RECOMP_ABI_CALL(0x00127350u, sub_00127350); /* call 0x00127350 */

loc_0007E1C2: ;
    goto loc_0007E1C6;

loc_0007E1C4: ;
    eax = 0; /* xor self */

loc_0007E1C6: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x40);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    PUSH32(esp, 2);
    MEM32(esp + 0x3C) = 0xFFFFFFFFu;
    MEM32(esi + 0x168C) = eax;
    PUSH32(esp, 0x3CE128);
    if (TEST_S(_fas, _fbs)) goto loc_0007E20E; /* jl: less (signed <) */

loc_0007E1E4: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x0007E1EDu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0007E1ED: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x168C);
    MEM32(esp + 0x44) = 1;
    PUSH32(esp, 0x0007E208u); RECOMP_ABI_CALL(0x00127510u, sub_00127510); /* call 0x00127510 */

loc_0007E208: ;
    ecx = esp + 0x10;
    goto loc_0007E237;

loc_0007E20E: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0x0007E217u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0007E217: ;
    ecx = MEM32(esi + 0x168C);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    MEM32(esp + 0x44) = 2;
    PUSH32(esp, 0x0007E233u); RECOMP_ABI_CALL(0x00127510u, sub_00127510); /* call 0x00127510 */

loc_0007E233: ;
    ecx = esp + 0x20;

loc_0007E237: ;
    MEM32(esp + 0x38) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0007E244u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0007E244: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x28);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x34;
    esp += 8; return; /* ret 4 */

loc_0007E259: ;
    ecx = MEM32(esp + 0x2C);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x34;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007E270
 * Original: 0x0007E270 - 0x0007E28E (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0007E270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E270: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x1688)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x1688) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0007E289; /* jae: above or equal (unsigned >=) */

loc_0007E27C: ;
    eax = ZX8(LO8(eax));
    eax = eax + eax * 8;
    eax = ecx + eax * 4 + 4;
    esp += 8; return; /* ret 4 */

loc_0007E289: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007E290
 * Original: 0x0007E290 - 0x0007E2EE (94 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E290: ;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    ecx = ecx + 0x20;
    esi = 0x20;
    edx = 1;

loc_0007E2A1: ;
    _fa = (uint32_t)(MEM32(ecx + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + -16), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007E2AC; /* jne: not equal / not zero */

loc_0007E2A6: ;
    SET_LO16(edi, ZX8(MEM8(ecx)));
    eax = eax + edi;

loc_0007E2AC: ;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007E2B8; /* jne: not equal / not zero */

loc_0007E2B1: ;
    SET_LO16(edi, ZX8(MEM8(ecx + 0x24)));
    eax = eax + edi;

loc_0007E2B8: ;
    _fa = (uint32_t)(MEM32(ecx + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x38), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007E2C4; /* jne: not equal / not zero */

loc_0007E2BD: ;
    SET_LO16(edi, ZX8(MEM8(ecx + 0x48)));
    eax = eax + edi;

loc_0007E2C4: ;
    _fa = (uint32_t)(MEM32(ecx + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x5C), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007E2D0; /* jne: not equal / not zero */

loc_0007E2C9: ;
    SET_LO16(edi, ZX8(MEM8(ecx + 0x6C)));
    eax = eax + edi;

loc_0007E2D0: ;
    _fa = (uint32_t)(MEM32(ecx + 0x80)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x80), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007E2E2; /* jne: not equal / not zero */

loc_0007E2D8: ;
    SET_LO16(edi, ZX8(MEM8(ecx + 0x90)));
    eax = eax + edi;

loc_0007E2E2: ;
    ecx = ecx + 0xB4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0007E2A1; /* jne: not equal / not zero */

loc_0007E2EB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007E2F0
 * Original: 0x0007E2F0 - 0x0007E39A (170 bytes, 72 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0007E2F0: ;
    /* resetgame clears shared inventory counts/currency and adds starter
     * potions. Keep the native inventory, avoiding loss or duplication. */
    if(xml1_newgame_plus_starting && MEM32(esp)==0x0018CFD8){esp+=4;return;}

    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0007E2FCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007E2FC: ;
    raven_stash_clear_live(edi);
    eax = edi + 0x20;
    esi = 0x20;
    SET_LO8(edx, 0xEF);

loc_0007E306: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & ecx;
    MEM8(eax) = LO8(ebx);
    _cf = 0; /* logical op clears CF */
    MEM8(eax + 4) = MEM8(eax + 4) & LO8(edx);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 0x25));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & ecx;
    MEM8(eax + 0x24) = LO8(ebx);
    _cf = 0; /* logical op clears CF */
    MEM8(eax + 0x28) = MEM8(eax + 0x28) & LO8(edx);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 0x49));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & ecx;
    MEM8(eax + 0x48) = LO8(ebx);
    _cf = 0; /* logical op clears CF */
    MEM8(eax + 0x4C) = MEM8(eax + 0x4C) & LO8(edx);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 0x6D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & ecx;
    MEM8(eax + 0x6C) = LO8(ebx);
    _cf = 0; /* logical op clears CF */
    MEM8(eax + 0x70) = MEM8(eax + 0x70) & LO8(edx);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 0x91));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xB4)) >> 32) & 1);
    eax = eax + 0xB4;
    _cf = 0; /* logical op clears CF */
    ebx = ebx & ecx;
    MEM8(eax + -36) = LO8(ebx);
    SET_LO8(ecx, MEM8(eax + -32));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & LO8(edx));
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(eax + -32) = LO8(ecx);
    if ((_fa != 0)) goto loc_0007E306; /* jne: not equal / not zero */

loc_0007E36A: ;
    esi = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    edx = esi;
    PUSH32(esp, 0x3CD018);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0007E37Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007E37A: ;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x7C); PUSH32(esp, 0x0007E380u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007E380: ;
    esi = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    eax = esi;
    PUSH32(esp, 0x3CD024);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0007E390u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007E390: ;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x7C); PUSH32(esp, 0x0007E396u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007E396: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0007E3A0
 * Original: 0x0007E3A0 - 0x0007E3C1 (33 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E3A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E3A0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x1688)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x1688) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0007E3BC; /* jae: above or equal (unsigned >=) */

loc_0007E3AC: ;
    eax = ZX8(LO8(eax));
    eax = eax + eax * 8;
    MEM8(ecx + eax * 4 + 0x20) = 0;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_0007E3BC: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007E3D0
 * Original: 0x0007E3D0 - 0x0007E3EE (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E3D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E3D0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x1688)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x1688) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0007E3E9; /* jae: above or equal (unsigned >=) */

loc_0007E3DC: ;
    eax = ZX8(LO8(eax));
    eax = eax + eax * 8;
    SET_LO8(eax, MEM8(ecx + eax * 4 + 0x23));
    esp += 8; return; /* ret 4 */

loc_0007E3E9: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007E3F0
 * Original: 0x0007E3F0 - 0x0007E40E (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0007E3F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E3F0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x1688)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x1688) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0007E409; /* jae: above or equal (unsigned >=) */

loc_0007E3FC: ;
    eax = ZX8(LO8(eax));
    eax = eax + eax * 8;
    eax = MEM32(ecx + eax * 4 + 0x10);
    esp += 8; return; /* ret 4 */

loc_0007E409: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007E410
 * Original: 0x0007E410 - 0x0007E42E (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0007E410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E410: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x1688)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x1688) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0007E429; /* jae: above or equal (unsigned >=) */

loc_0007E41C: ;
    eax = ZX8(LO8(eax));
    eax = eax + eax * 8;
    eax = MEM32(ecx + eax * 4 + 0x14);
    esp += 8; return; /* ret 4 */

loc_0007E429: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007E430
 * Original: 0x0007E430 - 0x0007E44E (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E430: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x1688)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x1688) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0007E449; /* jae: above or equal (unsigned >=) */

loc_0007E43C: ;
    eax = ZX8(LO8(eax));
    eax = eax + eax * 8;
    SET_LO8(eax, MEM8(ecx + eax * 4 + 0x20));
    esp += 8; return; /* ret 4 */

loc_0007E449: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007E450
 * Original: 0x0007E450 - 0x0007E49A (74 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E450: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x1688)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x1688) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0007E495; /* jae: above or equal (unsigned >=) */

loc_0007E45C: ;
    eax = ZX8(LO8(eax));
    eax = eax + eax * 8;
    eax = ecx + eax * 4 + 4;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(ecx), LO16(ecx) (16-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0007E478; /* jge: greater or equal (signed >=) */

loc_0007E46F: ;
    MEM8(eax + 0x1C) = 0;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_0007E478: ;
    SET_LO8(edx, MEM8(eax + 0x1D));
    PUSH32(esp, esi);
    esi = ZX8(LO8(edx));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(esi) (16-bit) */
    POP32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_0007E48D; /* jle: less or equal (signed <=) */

loc_0007E485: ;
    MEM8(eax + 0x1C) = LO8(edx);
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_0007E48D: ;
    MEM8(eax + 0x1C) = LO8(ecx);
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_0007E495: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0007E4A0
 * Original: 0x0007E4A0 - 0x0007E4BE (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E4A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E4A0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x1688)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x1688) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0007E4B9; /* jae: above or equal (unsigned >=) */

loc_0007E4AC: ;
    eax = ZX8(LO8(eax));
    eax = eax + eax * 8;
    SET_LO8(eax, MEM8(ecx + eax * 4 + 0x21));
    esp += 8; return; /* ret 4 */

loc_0007E4B9: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007E4C0
 * Original: 0x0007E4C0 - 0x0007E4DE (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E4C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E4C0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x1688)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x1688) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0007E4D9; /* jae: above or equal (unsigned >=) */

loc_0007E4CC: ;
    eax = ZX8(LO8(eax));
    eax = eax + eax * 8;
    SET_LO8(eax, MEM8(ecx + eax * 4 + 0x22));
    esp += 8; return; /* ret 4 */

loc_0007E4D9: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007E4E0
 * Original: 0x0007E4E0 - 0x0007E503 (35 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E4E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E4E0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x1688)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x1688) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0007E4FE; /* jae: above or equal (unsigned >=) */

loc_0007E4EC: ;
    eax = ZX8(LO8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + eax * 8;
    SET_LO8(eax, MEM8(ecx + eax * 4));
    SET_LO8(eax, LO8(eax) >> 2);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 8; return; /* ret 4 */

loc_0007E4FE: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007E510
 * Original: 0x0007E510 - 0x0007E533 (35 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E510: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x1688)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x1688) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0007E52E; /* jae: above or equal (unsigned >=) */

loc_0007E51C: ;
    eax = ZX8(LO8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + eax * 8;
    SET_LO8(eax, MEM8(ecx + eax * 4));
    SET_LO8(eax, LO8(eax) >> 3);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 8; return; /* ret 4 */

loc_0007E52E: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007E540
 * Original: 0x0007E540 - 0x0007E563 (35 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E540: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x1688)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x1688) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0007E55E; /* jae: above or equal (unsigned >=) */

loc_0007E54C: ;
    eax = ZX8(LO8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + eax * 8;
    SET_LO8(eax, MEM8(ecx + eax * 4));
    SET_LO8(eax, LO8(eax) >> 4);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 8; return; /* ret 4 */

loc_0007E55E: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007E570
 * Original: 0x0007E570 - 0x0007E59C (44 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E570: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x1688)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x1688) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0007E599; /* jae: above or equal (unsigned >=) */

loc_0007E57C: ;
    eax = ZX8(LO8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + eax * 8;
    SET_LO8(edx, MEM8(ecx + eax * 4));
    eax = ecx + eax * 4;
    SET_LO8(ecx, MEM8(esp + 8));
    SET_LO8(ecx, LO8(ecx) << 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 0x10);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(eax) = LO8(edx);

loc_0007E599: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0007E5A0
 * Original: 0x0007E5A0 - 0x0007E6D9 (313 bytes, 96 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E5A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007E5A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(ecx, MEM8(esp + 0xF));
    esi = edi + 0x169A;
    eax = edi + 0x24;
    ebp = 0x20;
    goto loc_0007E5C0;

    /* nop */

loc_0007E5C0: ;
    SET_LO8(edx, MEM8(eax + -4));
    MEM8(esp + 0xE) = LO8(edx);
    SET_LO8(edx, MEM8(eax));
    SET_LO8(edx, LO8(edx) >> 4);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    MEM8(esp + 0xF) = LO8(ecx);
    SET_LO16(edx, MEM16(esp + 0xE));
    MEM16(esi + -2) = LO16(edx);
    SET_LO8(edx, MEM8(eax + 0x20));
    MEM8(esp + 0xE) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x24));
    SET_LO8(edx, LO8(edx) >> 4);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    MEM8(esp + 0xF) = LO8(ecx);
    SET_LO16(edx, MEM16(esp + 0xE));
    MEM16(esi) = LO16(edx);
    SET_LO8(edx, MEM8(eax + 0x44));
    MEM8(esp + 0xE) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x48));
    SET_LO8(edx, LO8(edx) >> 4);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    MEM8(esp + 0xF) = LO8(ecx);
    SET_LO16(edx, MEM16(esp + 0xE));
    MEM16(esi + 2) = LO16(edx);
    SET_LO8(edx, MEM8(eax + 0x68));
    MEM8(esp + 0xE) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x6C));
    SET_LO8(edx, LO8(edx) >> 4);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    MEM8(esp + 0xF) = LO8(ecx);
    SET_LO16(edx, MEM16(esp + 0xE));
    MEM16(esi + 4) = LO16(edx);
    SET_LO8(edx, MEM8(eax + 0x8C));
    MEM8(esp + 0xE) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x90));
    SET_LO8(edx, LO8(edx) >> 4);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    MEM8(esp + 0xF) = LO8(ecx);
    SET_LO16(edx, MEM16(esp + 0xE));
    MEM16(esi + 6) = LO16(edx);
    esi = esi + 0xA;
    eax = eax + 0xB4;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0007E5C0; /* jne: not equal / not zero */

loc_0007E678: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 0x140);
    eax = edi + 0x1698;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0007E68Fu); RECOMP_ABI_CALL(0x0006E7E0u, sub_0006E7E0); /* call 0x0006E7E0 */

loc_0007E68F: ;
    PUSH32(esp, 0x140);
    ecx = edi + 0x17D8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0007E6A2u); RECOMP_ABI_CALL(0x0006E7E0u, sub_0006E7E0); /* call 0x0006E7E0 */

loc_0007E6A2: ;
    PUSH32(esp, 1);
    edx = edi + 0x1918;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0007E6B2u); RECOMP_ABI_CALL(0x0006E7E0u, sub_0006E7E0); /* call 0x0006E7E0 */

loc_0007E6B2: ;
    PUSH32(esp, 4);
    eax = edi + 0x1690;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0007E6C2u); RECOMP_ABI_CALL(0x0006E7E0u, sub_0006E7E0); /* call 0x0006E7E0 */

loc_0007E6C2: ;
    PUSH32(esp, 4);
    edi = edi + 0x191C;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0007E6D2u); RECOMP_ABI_CALL(0x0006E7E0u, sub_0006E7E0); /* call 0x0006E7E0 */

loc_0007E6D2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007E6E0
 * Original: 0x0007E6E0 - 0x0007E7E8 (264 bytes, 87 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E6E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    PUSH32(esp, 0x140);
    eax = esi + 0x1698;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0007E6FCu); RECOMP_ABI_CALL(0x0006E830u, sub_0006E830); /* call 0x0006E830 */

loc_0007E6FC: ;
    PUSH32(esp, 0x140);
    ecx = esi + 0x17D8;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0007E70Fu); RECOMP_ABI_CALL(0x0006E830u, sub_0006E830); /* call 0x0006E830 */

loc_0007E70F: ;
    PUSH32(esp, 1);
    edx = esi + 0x1918;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0007E71Fu); RECOMP_ABI_CALL(0x0006E830u, sub_0006E830); /* call 0x0006E830 */

loc_0007E71F: ;
    PUSH32(esp, 4);
    eax = esi + 0x1690;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0007E72Fu); RECOMP_ABI_CALL(0x0006E830u, sub_0006E830); /* call 0x0006E830 */

loc_0007E72F: ;
    PUSH32(esp, 4);
    ecx = esi + 0x191C;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0007E73Fu); RECOMP_ABI_CALL(0x0006E830u, sub_0006E830); /* call 0x0006E830 */

loc_0007E73F: ;
    ecx = esi + 0x169B;
    eax = esi + 0x24;
    esi = 0x20;
    /* nop */

loc_0007E750: ;
    SET_LO8(edx, MEM8(ecx + -2));
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(edx, LO8(edx) << 4);
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    SET_LO8(edx, LO8(edx) & 0x10);
    SET_LO8(ebx, LO8(ebx) ^ LO8(edx));
    MEM8(eax) = LO8(ebx);
    SET_LO8(edx, MEM8(ecx + -3));
    SET_LO8(ebx, MEM8(eax + 0x24));
    MEM8(eax + -4) = LO8(edx);
    SET_LO8(edx, MEM8(ecx));
    SET_LO8(edx, LO8(edx) << 4);
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    SET_LO8(edx, LO8(edx) & 0x10);
    SET_LO8(ebx, LO8(ebx) ^ LO8(edx));
    MEM8(eax + 0x24) = LO8(ebx);
    SET_LO8(edx, MEM8(ecx + -1));
    SET_LO8(ebx, MEM8(eax + 0x48));
    MEM8(eax + 0x20) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 2));
    SET_LO8(edx, LO8(edx) << 4);
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    SET_LO8(edx, LO8(edx) & 0x10);
    SET_LO8(ebx, LO8(ebx) ^ LO8(edx));
    MEM8(eax + 0x48) = LO8(ebx);
    SET_LO8(edx, MEM8(ecx + 1));
    SET_LO8(ebx, MEM8(eax + 0x6C));
    MEM8(eax + 0x44) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 4));
    SET_LO8(edx, LO8(edx) << 4);
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    SET_LO8(edx, LO8(edx) & 0x10);
    SET_LO8(ebx, LO8(ebx) ^ LO8(edx));
    MEM8(eax + 0x6C) = LO8(ebx);
    SET_LO8(edx, MEM8(ecx + 3));
    SET_LO8(ebx, MEM8(eax + 0x90));
    MEM8(eax + 0x68) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 6));
    SET_LO8(edx, LO8(edx) << 4);
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    SET_LO8(edx, LO8(edx) & 0x10);
    SET_LO8(ebx, LO8(ebx) ^ LO8(edx));
    MEM8(eax + 0x90) = LO8(ebx);
    SET_LO8(edx, MEM8(ecx + 5));
    MEM8(eax + 0x8C) = LO8(edx);
    ecx = ecx + 0xA;
    eax = eax + 0xB4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0007E750; /* jne: not equal / not zero */

loc_0007E7E2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007E7F0
 * Original: 0x0007E7F0 - 0x0007E8E0 (240 bytes, 73 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E7F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007E7F0: ;
    (void)raven_stash_capture(ecx, 0);
    PUSH32(esp, ecx);
    SET_LO8(edx, MEM8(esp + 3));
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, edi);
    esi = ebp + 0x17DA;
    eax = ebp + 0x24;
    edi = 0x20;
    goto loc_0007E810;

    /* nop */

loc_0007E810: ;
    SET_LO8(ecx, MEM8(eax + -4));
    MEM8(esp + 0xE) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(ecx, LO8(ecx) >> 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(esp + 0xF) = LO8(edx);
    SET_LO16(ecx, MEM16(esp + 0xE));
    MEM16(esi + -2) = LO16(ecx);
    SET_LO8(ecx, MEM8(eax + 0x20));
    MEM8(esp + 0xE) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x24));
    SET_LO8(ecx, LO8(ecx) >> 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(esp + 0xF) = LO8(edx);
    SET_LO16(ecx, MEM16(esp + 0xE));
    MEM16(esi) = LO16(ecx);
    SET_LO8(ecx, MEM8(eax + 0x44));
    MEM8(esp + 0xE) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x48));
    SET_LO8(ecx, LO8(ecx) >> 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(esp + 0xF) = LO8(edx);
    SET_LO16(ecx, MEM16(esp + 0xE));
    MEM16(esi + 2) = LO16(ecx);
    SET_LO8(ecx, MEM8(eax + 0x68));
    MEM8(esp + 0xE) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x6C));
    SET_LO8(ecx, LO8(ecx) >> 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(esp + 0xF) = LO8(edx);
    SET_LO16(ecx, MEM16(esp + 0xE));
    MEM16(esi + 4) = LO16(ecx);
    SET_LO8(ecx, MEM8(eax + 0x8C));
    MEM8(esp + 0xE) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x90));
    SET_LO8(ecx, LO8(ecx) >> 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(esp + 0xF) = LO8(edx);
    SET_LO16(ecx, MEM16(esp + 0xE));
    MEM16(esi + 6) = LO16(ecx);
    esi = esi + 0xA;
    eax = eax + 0xB4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0007E810; /* jne: not equal / not zero */

loc_0007E8C8: ;
    edx = MEM32(ebp + 0x1690);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x191C) = edx;
    MEM8(ebp + 0x1918) = 1;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0007E8E0
 * Original: 0x0007E8E0 - 0x0007E9AA (202 bytes, 66 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E8E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007E8E0: ;
    if (MEM8(ecx + 0x1918)) (void)raven_stash_restore(ecx, 0);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x1918));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007E9A8; /* je: equal / zero */

loc_0007E8F1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = edi + 0x17DB;
    eax = edi + 0x24;
    esi = 0x20;

loc_0007E901: ;
    SET_LO8(ecx, MEM8(edx + -2));
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ecx) << 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 0x10);
    SET_LO8(ebx, LO8(ebx) ^ LO8(ecx));
    MEM8(eax) = LO8(ebx);
    SET_LO8(ecx, MEM8(edx + -3));
    SET_LO8(ebx, MEM8(eax + 0x24));
    MEM8(eax + -4) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx));
    SET_LO8(ecx, LO8(ecx) << 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 0x10);
    SET_LO8(ebx, LO8(ebx) ^ LO8(ecx));
    MEM8(eax + 0x24) = LO8(ebx);
    SET_LO8(ecx, MEM8(edx + -1));
    SET_LO8(ebx, MEM8(eax + 0x48));
    MEM8(eax + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 2));
    SET_LO8(ecx, LO8(ecx) << 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 0x10);
    SET_LO8(ebx, LO8(ebx) ^ LO8(ecx));
    MEM8(eax + 0x48) = LO8(ebx);
    SET_LO8(ecx, MEM8(edx + 1));
    SET_LO8(ebx, MEM8(eax + 0x6C));
    MEM8(eax + 0x44) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 4));
    SET_LO8(ecx, LO8(ecx) << 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 0x10);
    SET_LO8(ebx, LO8(ebx) ^ LO8(ecx));
    MEM8(eax + 0x6C) = LO8(ebx);
    SET_LO8(ecx, MEM8(edx + 3));
    SET_LO8(ebx, MEM8(eax + 0x90));
    MEM8(eax + 0x68) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 6));
    SET_LO8(ecx, LO8(ecx) << 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 0x10);
    SET_LO8(ebx, LO8(ebx) ^ LO8(ecx));
    MEM8(eax + 0x90) = LO8(ebx);
    SET_LO8(ecx, MEM8(edx + 5));
    MEM8(eax + 0x8C) = LO8(ecx);
    edx = edx + 0xA;
    eax = eax + 0xB4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0007E901; /* jne: not equal / not zero */

loc_0007E993: ;
    edx = MEM32(edi + 0x191C);
    POP32(esp, esi);
    MEM32(edi + 0x1690) = edx;
    MEM8(edi + 0x1918) = 0;
    POP32(esp, ebx);

loc_0007E9A8: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007E9B0
 * Original: 0x0007E9B0 - 0x0007EAA0 (240 bytes, 73 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007E9B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007E9B0: ;
    (void)raven_stash_capture(ecx, 1);
    PUSH32(esp, ecx);
    SET_LO8(edx, MEM8(esp + 3));
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, edi);
    esi = ebp + 0x1922;
    eax = ebp + 0x24;
    edi = 0x20;
    goto loc_0007E9D0;

    /* nop */

loc_0007E9D0: ;
    SET_LO8(ecx, MEM8(eax + -4));
    MEM8(esp + 0xE) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(ecx, LO8(ecx) >> 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(esp + 0xF) = LO8(edx);
    SET_LO16(ecx, MEM16(esp + 0xE));
    MEM16(esi + -2) = LO16(ecx);
    SET_LO8(ecx, MEM8(eax + 0x20));
    MEM8(esp + 0xE) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x24));
    SET_LO8(ecx, LO8(ecx) >> 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(esp + 0xF) = LO8(edx);
    SET_LO16(ecx, MEM16(esp + 0xE));
    MEM16(esi) = LO16(ecx);
    SET_LO8(ecx, MEM8(eax + 0x44));
    MEM8(esp + 0xE) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x48));
    SET_LO8(ecx, LO8(ecx) >> 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(esp + 0xF) = LO8(edx);
    SET_LO16(ecx, MEM16(esp + 0xE));
    MEM16(esi + 2) = LO16(ecx);
    SET_LO8(ecx, MEM8(eax + 0x68));
    MEM8(esp + 0xE) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x6C));
    SET_LO8(ecx, LO8(ecx) >> 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(esp + 0xF) = LO8(edx);
    SET_LO16(ecx, MEM16(esp + 0xE));
    MEM16(esi + 4) = LO16(ecx);
    SET_LO8(ecx, MEM8(eax + 0x8C));
    MEM8(esp + 0xE) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x90));
    SET_LO8(ecx, LO8(ecx) >> 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(esp + 0xF) = LO8(edx);
    SET_LO16(ecx, MEM16(esp + 0xE));
    MEM16(esi + 6) = LO16(ecx);
    esi = esi + 0xA;
    eax = eax + 0xB4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0007E9D0; /* jne: not equal / not zero */

loc_0007EA88: ;
    edx = MEM32(ebp + 0x1690);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x1A60) = edx;
    MEM8(ebp + 0x1A64) = 1;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0007EAA0
 * Original: 0x0007EAA0 - 0x0007EB6A (202 bytes, 66 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007EAA0: ;
    if (MEM8(ecx + 0x1A64)) (void)raven_stash_restore(ecx, 1);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x1A64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007EB68; /* je: equal / zero */

loc_0007EAB1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = edi + 0x1923;
    eax = edi + 0x24;
    esi = 0x20;

loc_0007EAC1: ;
    SET_LO8(ecx, MEM8(edx + -2));
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ecx) << 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 0x10);
    SET_LO8(ebx, LO8(ebx) ^ LO8(ecx));
    MEM8(eax) = LO8(ebx);
    SET_LO8(ecx, MEM8(edx + -3));
    SET_LO8(ebx, MEM8(eax + 0x24));
    MEM8(eax + -4) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx));
    SET_LO8(ecx, LO8(ecx) << 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 0x10);
    SET_LO8(ebx, LO8(ebx) ^ LO8(ecx));
    MEM8(eax + 0x24) = LO8(ebx);
    SET_LO8(ecx, MEM8(edx + -1));
    SET_LO8(ebx, MEM8(eax + 0x48));
    MEM8(eax + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 2));
    SET_LO8(ecx, LO8(ecx) << 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 0x10);
    SET_LO8(ebx, LO8(ebx) ^ LO8(ecx));
    MEM8(eax + 0x48) = LO8(ebx);
    SET_LO8(ecx, MEM8(edx + 1));
    SET_LO8(ebx, MEM8(eax + 0x6C));
    MEM8(eax + 0x44) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 4));
    SET_LO8(ecx, LO8(ecx) << 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 0x10);
    SET_LO8(ebx, LO8(ebx) ^ LO8(ecx));
    MEM8(eax + 0x6C) = LO8(ebx);
    SET_LO8(ecx, MEM8(edx + 3));
    SET_LO8(ebx, MEM8(eax + 0x90));
    MEM8(eax + 0x68) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 6));
    SET_LO8(ecx, LO8(ecx) << 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 0x10);
    SET_LO8(ebx, LO8(ebx) ^ LO8(ecx));
    MEM8(eax + 0x90) = LO8(ebx);
    SET_LO8(ecx, MEM8(edx + 5));
    MEM8(eax + 0x8C) = LO8(ecx);
    edx = edx + 0xA;
    eax = eax + 0xB4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0007EAC1; /* jne: not equal / not zero */

loc_0007EB53: ;
    edx = MEM32(edi + 0x1A60);
    POP32(esp, esi);
    MEM32(edi + 0x1690) = edx;
    MEM8(edi + 0x1A64) = 0;
    POP32(esp, ebx);

loc_0007EB68: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0007EB70
 * Original: 0x0007EB70 - 0x0007EBE0 (112 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EB70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007EB70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    SET_LO8(eax, MEM8(ebp + 0x1688));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0007EBC9; /* jbe: below or equal (unsigned <=) */

loc_0007EB82: ;
    ebx = ebp + 8;

loc_0007EB85: ;
    esi = MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007EB92; /* jne: not equal / not zero */

loc_0007EB8B: ;
    eax = 0x3C806C;
    goto loc_0007EBA8;

loc_0007EB92: ;
    PUSH32(esp, 0x0007EB97u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0007EB97: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x8008;

loc_0007EBA8: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007EBB3u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0007EBB3: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007EBD2; /* je: equal / zero */

loc_0007EBBA: ;
    eax = ZX8(MEM8(ebp + 0x1688));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007EB85; /* jl: less (signed <) */

loc_0007EBC9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0007EBD2: ;
    ecx = edi + edi * 8;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp + ecx * 4 + 4;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007EBE0
 * Original: 0x0007EBE0 - 0x0007EC4B (107 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EBE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007EBE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    SET_LO8(eax, MEM8(ebp + 0x1688));
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa & _fb, 0)) goto loc_0007EC39; /* jbe: below or equal (unsigned <=) */

loc_0007EBF2: ;
    edi = ebp + 8;

loc_0007EBF5: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007EC02; /* jne: not equal / not zero */

loc_0007EBFB: ;
    eax = 0x3C806C;
    goto loc_0007EC18;

loc_0007EC02: ;
    PUSH32(esp, 0x0007EC07u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0007EC07: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x8008;

loc_0007EC18: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007EC23u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0007EC23: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007EC42; /* je: equal / zero */

loc_0007EC2A: ;
    eax = ZX8(MEM8(ebp + 0x1688));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0x24;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007EBF5; /* jl: less (signed <) */

loc_0007EC39: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(eax) | 0xFF);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0007EC42: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007EC50
 * Original: 0x0007EC50 - 0x0007EC81 (49 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EC50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007EC50: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x1688)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x1688) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0007EC7C; /* jae: above or equal (unsigned >=) */

loc_0007EC5C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007EC62u); RECOMP_ABI_CALL(0x0007EC90u, sub_0007EC90); /* call 0x0007EC90 */

loc_0007EC62: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007EC7C; /* je: equal / zero */

loc_0007EC66: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007EC73; /* jne: not equal / not zero */

loc_0007EC6E: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_0007EC73: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007EC79u); RECOMP_ABI_CALL(0x000A41F0u, sub_000A41F0); /* call 0x000A41F0 */

loc_0007EC79: ;
    esp += 12; return; /* ret 8 */

loc_0007EC7C: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0007EC90
 * Original: 0x0007EC90 - 0x0007EE86 (502 bytes, 143 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EC90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007EC90: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F340);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x48));
    esp = esp - 0x48;
    SET_LO8(eax, MEM8(esp + 0x58));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 0x1688)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edi + 0x1688) (8-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = edi;
    if (CMP_AE(_fa, _fb)) goto loc_0007EE58; /* jae: above or equal (unsigned >=) */

loc_0007ECC2: ;
    ecx = MEM32(edi + 0x168C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0007EE58; /* je: equal / zero */

loc_0007ECD0: ;
    PUSH32(esp, 0x0007ECD5u); RECOMP_ABI_CALL(0x00125FA0u, sub_00125FA0); /* call 0x00125FA0 */

loc_0007ECD5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0007EE58; /* je: equal / zero */

loc_0007ECDD: ;
    ebp = MEM32(eax + 8);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    ebx = 1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    ebp = ecx;
    if ((ecx == 0)) goto loc_0007EE58; /* je: equal / zero */

loc_0007ECF7: ;
    goto loc_0007ED00;

    /* nop */

loc_0007ED00: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CE144);
    ecx = esp + 0x20;
    PUSH32(esp, 0x0007ED10u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0007ED10: ;
    PUSH32(esp, 0);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = ebp;
    MEM32(esp + 0x68) = 0;
    PUSH32(esp, 0x0007ED26u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_0007ED26: ;
    ecx = esp + 0x18;
    esi = eax;
    MEM32(esp + 0x60) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0007ED39u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0007ED39: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0007EE19; /* je: equal / zero */

loc_0007ED41: ;
    eax = ZX8(MEM8(esp + 0x68));
    eax = eax + eax * 8;
    ecx = edi + eax * 4 + 8;
    MEM32(esp + 0x10) = ecx;

loc_0007ED51: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C8690);
    ecx = esp + 0x30;
    PUSH32(esp, 0x0007ED61u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0007ED61: ;
    edx = MEM32(esp + 0x10);
    edi = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x60) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_0007ED76; /* jne: not equal / not zero */

loc_0007ED6F: ;
    edi = 0x3C806C;
    goto loc_0007ED8C;

loc_0007ED76: ;
    PUSH32(esp, 0x0007ED7Bu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0007ED7B: ;
    _cf = 0; /* logical op clears CF */
    edi = edi & 0xFFFFFF;
    ecx = MEM32(eax + edi * 4 + 4);
    edi = ecx + eax + 0x8008;

loc_0007ED8C: ;
    eax = MEM32(esi + 8);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & esi;
    PUSH32(esp, 0x0007EDA3u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0007EDA3: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x0007EDABu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0007EDAB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007EDB1u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0007EDB1: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    ebx = eax;
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    edi = edi | 0xFFFFFFFFu;
    ecx = esp + 0x28;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x60) = edi;
    PUSH32(esp, 0x0007EDCCu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0007EDCC: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0007EE6F; /* jne: not equal / not zero */

loc_0007EDD4: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CE144);
    ecx = esp + 0x40;
    PUSH32(esp, 0x0007EDE4u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0007EDE4: ;
    PUSH32(esp, esi);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x68) = 2;
    PUSH32(esp, 0x0007EDF9u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_0007EDF9: ;
    ecx = esp + 0x38;
    esi = eax;
    MEM32(esp + 0x60) = edi;
    PUSH32(esp, 0x0007EE08u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0007EE08: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ebx = 1;
    if (TEST_NZ(_fa, _fb)) goto loc_0007ED51; /* jne: not equal / not zero */

loc_0007EE15: ;
    edi = MEM32(esp + 0x14);

loc_0007EE19: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CE138);
    ecx = esp + 0x50;
    PUSH32(esp, 0x0007EE29u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0007EE29: ;
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x64) = 3;
    PUSH32(esp, 0x0007EE3Du); RECOMP_ABI_CALL(0x00126080u, sub_00126080); /* call 0x00126080 */

loc_0007EE3D: ;
    ecx = esp + 0x48;
    ebp = eax;
    MEM32(esp + 0x60) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0007EE50u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0007EE50: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0007ED00; /* jne: not equal / not zero */

loc_0007EE58: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x48);
    MEM32(XBOX_FS_BASE) = ecx;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x54)) >> 32) & 1);
    esp = esp + 0x54;
    esp += 8; return; /* ret 4 */

loc_0007EE6F: ;
    ecx = MEM32(esp + 0x58);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x54)) >> 32) & 1);
    esp = esp + 0x54;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007EE90
 * Original: 0x0007EE90 - 0x0007EEA2 (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EE90(void)
{

loc_0007EE90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x3CC6BC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007EE9Fu); RECOMP_ABI_CALL(0x0007EEB0u, sub_0007EEB0); /* call 0x0007EEB0 */

loc_0007EE9F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007EEB0
 * Original: 0x0007EEB0 - 0x0007EF4E (158 bytes, 46 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EEB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007EEB0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F358);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007EED3u); RECOMP_ABI_CALL(0x0007EC90u, sub_0007EC90); /* call 0x0007EC90 */

loc_0007EED3: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007EF37; /* je: equal / zero */

loc_0007EED9: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0007EEE9u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0007EEE9: ;
    edx = esp + 4;
    ecx = 0; /* xor self */
    PUSH32(esp, edx);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 1 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esp + 0x20) = 0;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & esi;
    PUSH32(esp, 0x0007EF07u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0007EF07: ;
    ecx = esp + 4;
    esi = eax;
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0007EF1Au); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0007EF1A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007EF37; /* je: equal / zero */

loc_0007EF1E: ;
    ecx = esi;
    PUSH32(esp, 0x0007EF25u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0007EF25: ;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 12; return; /* ret 8 */

loc_0007EF37: ;
    ecx = MEM32(esp + 0x14);
    eax = 0x3C806C;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0007EF50
 * Original: 0x0007EF50 - 0x0007EF8F (63 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EF50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007EF50: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x1696)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x1696) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007EF7B; /* je: equal / zero */

loc_0007EF5C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x1697)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x1697) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007EF7B; /* je: equal / zero */

loc_0007EF64: ;
    PUSH32(esp, 0x3CE14C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007EF6Fu); RECOMP_ABI_CALL(0x0007EEB0u, sub_0007EEB0); /* call 0x0007EEB0 */

loc_0007EF6F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007EF75u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_0007EF75: ;
    esp = esp + 4;
    esp += 8; return; /* ret 4 */

loc_0007EF7B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0007EF80u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007EF80: ;
    eax = SX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0xE1);
    eax = eax - 0x7D;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007EF90
 * Original: 0x0007EF90 - 0x0007EFA2 (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EF90(void)
{

loc_0007EF90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x3CE154);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007EF9Fu); RECOMP_ABI_CALL(0x0007EEB0u, sub_0007EEB0); /* call 0x0007EEB0 */

loc_0007EF9F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007EFB0
 * Original: 0x0007EFB0 - 0x0007EFCB (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EFB0(void)
{

loc_0007EFB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x3CE15C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007EFBFu); RECOMP_ABI_CALL(0x0007EEB0u, sub_0007EEB0); /* call 0x0007EEB0 */

loc_0007EFBF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007EFC5u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_0007EFC5: ;
    esp = esp + 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007EFD0
 * Original: 0x0007EFD0 - 0x0007F008 (56 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007EFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007EFD0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x1688)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x1688) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0007F003; /* jae: above or equal (unsigned >=) */

loc_0007EFDC: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3CE164);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007EFECu); RECOMP_ABI_CALL(0x0007F010u, sub_0007F010); /* call 0x0007F010 */

loc_0007EFEC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007F003; /* je: equal / zero */

loc_0007EFF0: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007EFFE; /* je: equal / zero */

loc_0007EFF8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007EFFEu); RECOMP_ABI_CALL(0x00096370u, xml1_guest_powerup_definition_parse); /* call 0x00096370 */

loc_0007EFFE: ;
    SET_LO8(eax, 1);
    esp += 16; return; /* ret 12 */

loc_0007F003: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0007F010
 * Original: 0x0007F010 - 0x0007F0F3 (227 bytes, 75 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007F010(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007F010: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F380);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007F036u); RECOMP_ABI_CALL(0x0007EC90u, sub_0007EC90); /* call 0x0007EC90 */

loc_0007F036: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007F0C5; /* je: equal / zero */

loc_0007F040: ;
    ebx = MEM32(esp + 0x44);
    PUSH32(esp, 2);
    ebp = ebp | 0xFFFFFFFFu;
    PUSH32(esp, ebx);
    ecx = esp + 0x18;
    MEM32(esp + 0x48) = ebp;
    PUSH32(esp, 0x0007F057u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0007F057: ;
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x40) = 0;
    PUSH32(esp, 0x0007F06Du); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_0007F06D: ;
    ecx = esp + 0x10;
    esi = eax;
    MEM32(esp + 0x38) = ebp;
    PUSH32(esp, 0x0007F07Cu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0007F07C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007F0C5; /* je: equal / zero */

loc_0007F080: ;
    eax = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x48);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x40) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0007F0DC; /* je: equal / zero */

loc_0007F091: ;
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x0007F09Du); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0007F09D: ;
    PUSH32(esp, esi);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x40) = 1;
    PUSH32(esp, 0x0007F0B2u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_0007F0B2: ;
    ecx = esp + 0x20;
    esi = eax;
    MEM32(esp + 0x38) = ebp;
    PUSH32(esp, 0x0007F0C1u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0007F0C1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007F080; /* jne: not equal / not zero */

loc_0007F0C5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x20);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x2C;
    esp += 16; return; /* ret 12 */

loc_0007F0DC: ;
    ecx = MEM32(esp + 0x30);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x2C;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0007F100
 * Original: 0x0007F100 - 0x0007F490 (912 bytes, 331 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007F100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007F100: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x3CE204);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0007F113u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0007F113: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007F155; /* jne: not equal / not zero */

loc_0007F11A: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007F148; /* je: equal / zero */

loc_0007F122: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007F148; /* je: equal / zero */

loc_0007F127: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007F12Du); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0007F12D: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007F138u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0007F138: ;
    ecx = eax;
    PUSH32(esp, 0x0007F13Fu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0007F13F: ;
    MEM32(esi) = eax;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0007F148: ;
    POP32(esp, edi);
    MEM32(esi) = 0;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0007F155: ;
    PUSH32(esp, 0x3C8690);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007F160u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0007F160: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007F17B; /* jne: not equal / not zero */

loc_0007F167: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = esi + 4;
    PUSH32(esp, 0x0007F174u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_0007F174: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0007F17B: ;
    PUSH32(esp, 0x3CC9F4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007F186u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0007F186: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007F255; /* jne: not equal / not zero */

loc_0007F191: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x3CE144);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007F1A0u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0007F1A0: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007F1B1; /* jne: not equal / not zero */

loc_0007F1A7: ;
    MEM32(esi + 0xC) = eax;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0007F1B1: ;
    PUSH32(esp, 0x3CE200);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007F1BCu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0007F1BC: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007F1D1; /* jne: not equal / not zero */

loc_0007F1C3: ;
    POP32(esp, edi);
    MEM32(esi + 0xC) = 3;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0007F1D1: ;
    PUSH32(esp, 0x3CE1F8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007F1DCu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0007F1DC: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007F1F1; /* jne: not equal / not zero */

loc_0007F1E3: ;
    POP32(esp, edi);
    MEM32(esi + 0xC) = 5;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0007F1F1: ;
    PUSH32(esp, 0x3CE1F0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007F1FCu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0007F1FC: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007F211; /* jne: not equal / not zero */

loc_0007F203: ;
    POP32(esp, edi);
    MEM32(esi + 0xC) = 4;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0007F211: ;
    PUSH32(esp, 0x3CE1E4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007F21Cu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0007F21C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007F231; /* jne: not equal / not zero */

loc_0007F223: ;
    POP32(esp, edi);
    MEM32(esi + 0xC) = 1;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0007F231: ;
    PUSH32(esp, 0x3CE1DC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007F23Cu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0007F23C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007F489; /* jne: not equal / not zero */

loc_0007F247: ;
    POP32(esp, edi);
    MEM32(esi + 0xC) = 2;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0007F255: ;
    PUSH32(esp, 0x3CE1D4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007F260u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0007F260: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007F27E; /* jne: not equal / not zero */

loc_0007F267: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007F271u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_0007F271: ;
    esp = esp + 4;
    MEM8(esi + 0x1E) = LO8(eax);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0007F27E: ;
    PUSH32(esp, 0x3CE1C8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007F289u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0007F289: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007F2C1; /* jne: not equal / not zero */

loc_0007F290: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007F29Au); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_0007F29A: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0007F2AD; /* jge: greater or equal (signed >=) */

loc_0007F2A1: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x10) = eax;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0007F2AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0007F2B7; /* jle: less or equal (signed <=) */

loc_0007F2B2: ;
    eax = 5;

loc_0007F2B7: ;
    MEM32(esi + 0x10) = eax;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0007F2C1: ;
    PUSH32(esp, 0x3CE1BC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007F2CCu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0007F2CC: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007F2F5; /* jne: not equal / not zero */

loc_0007F2D3: ;
    PUSH32(esp, 0x0007F2D8u); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_0007F2D8: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0007F2E6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007F2E6: ;
    PUSH32(esp, 0x0007F2EBu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0007F2EB: ;
    MEM8(esi + 0x1D) = LO8(eax);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0007F2F5: ;
    PUSH32(esp, 0x3CE1B4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007F300u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0007F300: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007F31E; /* jne: not equal / not zero */

loc_0007F307: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007F311u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_0007F311: ;
    esp = esp + 4;
    MEM8(esi + 0x1F) = LO8(eax);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0007F31E: ;
    PUSH32(esp, 0x3CE1A8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007F329u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0007F329: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007F344; /* jne: not equal / not zero */

loc_0007F330: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x0007F33Du); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_0007F33D: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0007F344: ;
    PUSH32(esp, 0x3CB770);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007F34Fu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0007F34F: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007F36A; /* jne: not equal / not zero */

loc_0007F356: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = esi + 8;
    PUSH32(esp, 0x0007F363u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_0007F363: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0007F36A: ;
    PUSH32(esp, 0x3CE194);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007F375u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0007F375: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007F3A8; /* jne: not equal / not zero */

loc_0007F37C: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007F38Bu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0007F38B: ;
    SET_LO8(ecx, MEM8(esi + 0x20));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) << 1);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    POP32(esp, edi);
    MEM8(esi + 0x20) = LO8(ecx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0007F3A8: ;
    PUSH32(esp, 0x3CE18C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007F3B3u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0007F3B3: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007F3E8; /* jne: not equal / not zero */

loc_0007F3BA: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007F3C9u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0007F3C9: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, MEM8(esi + 0x20));
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) << 2);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(edx, LO8(edx) & 4);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(esi + 0x20) = LO8(eax);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0007F3E8: ;
    PUSH32(esp, 0x3CE184);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007F3F3u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0007F3F3: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007F428; /* jne: not equal / not zero */

loc_0007F3FA: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007F409u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0007F409: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, MEM8(esi + 0x20));
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) << 3);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 8);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    MEM8(esi + 0x20) = LO8(eax);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0007F428: ;
    PUSH32(esp, 0x3CE14C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007F433u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0007F433: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007F482; /* je: equal / zero */

loc_0007F43A: ;
    PUSH32(esp, 0x3CE174);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007F445u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0007F445: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007F482; /* je: equal / zero */

loc_0007F44C: ;
    PUSH32(esp, 0x3CC6BC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007F457u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0007F457: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007F482; /* je: equal / zero */

loc_0007F45E: ;
    PUSH32(esp, 0x3CE154);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007F469u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0007F469: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007F482; /* je: equal / zero */

loc_0007F470: ;
    PUSH32(esp, 0x3CE15C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007F47Bu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0007F47B: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007F489; /* jne: not equal / not zero */

loc_0007F482: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0007F489: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0007F490
 * Original: 0x0007F490 - 0x0007F4AF (31 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007F490(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007F490: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x1688)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x1688) (8-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0007F4AF(); return; } /* jae: above or equal (unsigned >=) */

loc_0007F49C: ;
    eax = ZX8(LO8(eax));
    eax = eax + eax * 8;
    ecx = MEM32(ecx + eax * 4 + 4);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0007F4AF
 * Original: 0x0007F4AF - 0x0007F4C6 (23 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007F4AF(void)
{

loc_0007F4AF: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x3C806C);
    ecx = esi;
    PUSH32(esp, 0x0007F4C0u); RECOMP_ABI_CALL(0x00013EB0u, sub_00013EB0); /* call 0x00013EB0 */

loc_0007F4C0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0007F4D0
 * Original: 0x0007F4D0 - 0x0007F753 (643 bytes, 188 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007F4D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007F4D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F3A8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = ebp;
    PUSH32(esp, 0x0007F4F7u); RECOMP_ABI_CALL(0x00122CB0u, sub_00122CB0); /* call 0x00122CB0 */

loc_0007F4F7: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, 0x3CE224);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0007F505u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007F505: ;
    PUSH32(esp, 0x0007F50Au); RECOMP_ABI_CALL(0x00122CB0u, sub_00122CB0); /* call 0x00122CB0 */

loc_0007F50A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, 0x3CE210);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0007F518u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007F518: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0xAC); PUSH32(esp, 0x0007F525u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007F525: ;
    ecx = MEM32(ebp + 0x168C);
    PUSH32(esp, 0x0007F530u); RECOMP_ABI_CALL(0x00125FA0u, sub_00125FA0); /* call 0x00125FA0 */

loc_0007F530: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_0007F6E0; /* je: equal / zero */

loc_0007F53E: ;
    esi = MEM32(edi + 8);
    ebx = 0; /* xor self */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esp + 0x10) = ebx;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & edi;
    MEM32(esp + 0x14) = ecx;
    if ((ecx == 0)) goto loc_0007F6A5; /* je: equal / zero */

loc_0007F55C: ;
    /* nop */

loc_0007F560: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CE144);
    ecx = esp + 0x28;
    PUSH32(esp, 0x0007F570u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0007F570: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    MEM32(esp + 0x60) = 0;
    PUSH32(esp, 0x0007F588u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_0007F588: ;
    ecx = esp + 0x20;
    edi = eax;
    MEM32(esp + 0x58) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0007F59Bu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0007F59B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007F65C; /* je: equal / zero */

loc_0007F5A3: ;
    eax = ebx + ebx * 8;
    ebx = ebp + eax * 4 + 4;
    /* nop */

loc_0007F5B0: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0xA0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0007F73E; /* jge: greater or equal (signed >=) */

loc_0007F5BE: ;
    edx = MEM32(edi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edi;
    esi = MEM32(eax + 0x54);
    eax = eax + 0x2C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007F60C; /* je: equal / zero */

loc_0007F5D6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007F60C; /* je: equal / zero */

loc_0007F5DA: ;
    /* nop */

loc_0007F5E0: ;
    ecx = esi + 4;
    PUSH32(esp, 0x0007F5E8u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0007F5E8: ;
    ecx = esi + 0x14;
    ebp = eax;
    PUSH32(esp, 0x0007F5F2u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0007F5F2: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x0007F5FBu); RECOMP_ABI_CALL(0x0007F100u, sub_0007F100); /* call 0x0007F100 */

loc_0007F5FB: ;
    ecx = esi;
    PUSH32(esp, 0x0007F602u); RECOMP_ABI_CALL(0x00125BD0u, sub_00125BD0); /* call 0x00125BD0 */

loc_0007F602: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007F5E0; /* jne: not equal / not zero */

loc_0007F608: ;
    ebp = MEM32(esp + 0x1C);

loc_0007F60C: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CE144);
    ecx = esp + 0x38;
    PUSH32(esp, 0x0007F61Cu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0007F61C: ;
    PUSH32(esp, edi);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x60) = 1;
    PUSH32(esp, 0x0007F633u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_0007F633: ;
    ecx = esp + 0x30;
    edi = eax;
    MEM32(esp + 0x58) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0007F646u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0007F646: ;
    edx = MEM32(esp + 0x10);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0007F5B0; /* jne: not equal / not zero */

loc_0007F65A: ;
    ebx = edx;

loc_0007F65C: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CE138);
    ecx = esp + 0x48;
    PUSH32(esp, 0x0007F66Cu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0007F66C: ;
    ecx = MEM32(esp + 0x14);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    MEM32(esp + 0x5C) = 2;
    PUSH32(esp, 0x0007F682u); RECOMP_ABI_CALL(0x00126080u, sub_00126080); /* call 0x00126080 */

loc_0007F682: ;
    esi = eax;
    ecx = esp + 0x40;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x58) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0007F699u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0007F699: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007F560; /* jne: not equal / not zero */

loc_0007F6A1: ;
    edi = MEM32(esp + 0x18);

loc_0007F6A5: ;
    SET_LO8(eax, LO8(ebx));
    esi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(ebp + 0x1688) = LO8(ebx);
    if (CMP_BE(_fa & _fb, 0)) goto loc_0007F6E0; /* jbe: below or equal (unsigned <=) */

loc_0007F6B3: ;
    edi = ebp + 0x24;

loc_0007F6B6: ;
    eax = MEM32(ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x0007F6C6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007F6C6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007F6CD; /* je: equal / zero */

loc_0007F6CA: ;
    MEM8(edi) = MEM8(edi) | 1;

loc_0007F6CD: ;
    ecx = ZX8(MEM8(ebp + 0x1688));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007F6B6; /* jl: less (signed <) */

loc_0007F6DC: ;
    edi = MEM32(esp + 0x18);

loc_0007F6E0: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3CD018);
    ecx = ebp;
    MEM32(ebp + 0x1690) = 0;
    MEM16(ebp + 0x1694) = 1;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0007F700u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007F700: ;
    MEM8(ebp + 0x1696) = LO8(eax);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3CD024);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0007F713u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007F713: ;
    edx = MEM32(ebp);
    ecx = ebp;
    MEM8(ebp + 0x1697) = LO8(eax);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x0007F724u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007F724: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x40);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

loc_0007F73E: ;
    ecx = MEM32(esp + 0x50);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

}

/**
 * sub_0007F760
 * Original: 0x0007F760 - 0x0007F842 (226 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007F760(void)
{

loc_0007F760: ;
    xml1_campaign_install_capacity();
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F41C);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 0x7DF30);
    esi = ecx;
    PUSH32(esp, 0xA0);
    eax = esi + 4;
    PUSH32(esp, 0x24);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = esi;
    MEM32(esi) = 0x3CE064;
    PUSH32(esp, 0x0007F79Eu); RECOMP_ABI_CALL(0x003418A8u, sub_003418A8); /* call 0x003418A8 */

loc_0007F79E: ;
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 0x7DEB0);
    PUSH32(esp, 0xA0);
    ebx = 0; /* xor self */
    PUSH32(esp, 2);
    eax = esi + 0x1698;
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = ebx;
    MEM8(esi + 0x1688) = LO8(ebx);
    MEM32(esi + 0x1690) = ebx;
    PUSH32(esp, 0x0007F7CDu); RECOMP_ABI_CALL(0x003418A8u, sub_003418A8); /* call 0x003418A8 */

loc_0007F7CD: ;
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 0x7DEB0);
    PUSH32(esp, 0xA0);
    PUSH32(esp, 2);
    ecx = esi + 0x17D8;
    PUSH32(esp, ecx);
    MEM8(esp + 0x28) = 1;
    PUSH32(esp, 0x0007F7EFu); RECOMP_ABI_CALL(0x003418A8u, sub_003418A8); /* call 0x003418A8 */

loc_0007F7EF: ;
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 0x7DEB0);
    PUSH32(esp, 0xA0);
    PUSH32(esp, 2);
    edx = esi + 0x1920;
    PUSH32(esp, edx);
    MEM8(esp + 0x28) = 2;
    MEM8(esi + 0x1918) = LO8(ebx);
    MEM32(esi + 0x191C) = ebx;
    PUSH32(esp, 0x0007F81Du); RECOMP_ABI_CALL(0x003418A8u, sub_003418A8); /* call 0x003418A8 */

loc_0007F81D: ;
    ecx = esi;
    MEM8(esp + 0x14) = 3;
    MEM8(esi + 0x1A64) = LO8(ebx);
    PUSH32(esp, 0x0007F82Fu); RECOMP_ABI_CALL(0x0007F4D0u, sub_0007F4D0); /* call 0x0007F4D0 */

loc_0007F82F: ;
    raven_stash_reset(esi);
    ecx = MEM32(esp + 0xC);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0007F850
 * Original: 0x0007F850 - 0x0007F8AC (92 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007F850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007F850: ;
    eax = MEM32(XBOX_FS_BASE);
    SET_LO8(ecx, MEM8(0x49B288));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F43E);
    PUSH32(esp, eax);
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_0007F899; /* jne: not equal / not zero */

loc_0007F874: ;
    MEM32(0x49B288) = MEM32(0x49B288) | eax;
    ecx = 0x499820;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0007F88Cu); RECOMP_ABI_CALL(0x0007F760u, sub_0007F760); /* call 0x0007F760 */

loc_0007F88C: ;
    PUSH32(esp, 0x359EF0);
    PUSH32(esp, 0x0007F896u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_0007F896: ;
    esp = esp + 4;

loc_0007F899: ;
    ecx = MEM32(esp);
    eax = 0x499820;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0007F8B0
 * Original: 0x0007F8B0 - 0x0007FA63 (435 bytes, 170 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007F8B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007F8B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0x10) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_0007F8CA; /* je: equal / zero */

loc_0007F8C3: ;
    SET_LO8(eax, MEM8(edi + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007F8D4; /* jne: not equal / not zero */

loc_0007F8CA: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0007F8D4: ;
    esi = edi + 0x14;
    ecx = esi;
    PUSH32(esp, 0x0007F8DEu); RECOMP_ABI_CALL(0x00029360u, sub_00029360); /* call 0x00029360 */

loc_0007F8DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0007F957; /* jle: less or equal (signed <=) */

loc_0007F8E2: ;
    PUSH32(esp, 0x0007F8E7u); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_0007F8E7: ;
    edx = MEM32(ebx + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0007F8F6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007F8F6: ;
    PUSH32(esp, 0x0007F8FBu); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_0007F8FB: ;
    edx = MEM32(ebx + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0007F90Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007F90A: ;
    PUSH32(esp, 0x0007F90Fu); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_0007F90F: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebp = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0007F91E; /* jne: not equal / not zero */

loc_0007F917: ;
    eax = 0x3C806C;
    goto loc_0007F934;

loc_0007F91E: ;
    PUSH32(esp, 0x0007F923u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0007F923: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x8008;

loc_0007F934: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0007F93Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007F93F: ;
    PUSH32(esp, 0x0007F944u); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_0007F944: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0007F94Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007F94B: ;
    PUSH32(esp, 0x0007F950u); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_0007F950: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0007F957u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007F957: ;
    _fa = (uint32_t)(MEM8(edi + 0x20)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x20), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007FA07; /* je: equal / zero */

loc_0007F961: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007FA07; /* jne: not equal / not zero */

loc_0007F96C: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007FA07; /* jne: not equal / not zero */

loc_0007F978: ;
    PUSH32(esp, 0x0007F97Du); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0007F97D: ;
    esi = eax;
    ebp = MEM32(esi);
    ecx = edi + 4;
    PUSH32(esp, 0x0007F989u); RECOMP_ABI_CALL(0x00013DC0u, sub_00013DC0); /* call 0x00013DC0 */

loc_0007F989: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebp + 0x5C); PUSH32(esp, 0x0007F98Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007F98F: ;
    MEM8(esp + 0x1C) = LO8(eax);
    edi = 0; /* xor self */
    PUSH32(esp, 0x0007F99Au); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0007F99A: ;
    ebp = MEM32(esp + 0x1C);
    edx = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x0007F9ABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007F9AB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007FA03; /* je: equal / zero */

loc_0007F9AF: ;
    /* nop */

loc_0007F9B0: ;
    PUSH32(esp, 0x0007F9B5u); RECOMP_ABI_CALL(0x00096740u, xml1_guest_powerup_definition_allocate); /* call 0x00096740 */

loc_0007F9B5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007F9EB; /* je: equal / zero */

loc_0007F9BB: ;
    PUSH32(esp, 0x0007F9C0u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0007F9C0: ;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x0007F9CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007F9CD: ;
    PUSH32(esp, 0xC);
    ecx = esi;
    PUSH32(esp, 0x0007F9D6u); RECOMP_ABI_CALL(0x00094FE0u, sub_00094FE0); /* call 0x00094FE0 */

loc_0007F9D6: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(eax) = 0;
    PUSH32(esp, 0x0007F9EBu); RECOMP_ABI_CALL(0x0002AA90u, xml1_guest_actor_attach_powerup); /* call 0x0002AA90 */

loc_0007F9EB: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0007F9F1u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0007F9F1: ;
    edx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x0007F9FFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007F9FF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007F9B0; /* jne: not equal / not zero */

loc_0007FA03: ;
    edi = MEM32(esp + 0x10);

loc_0007FA07: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007FA25; /* je: equal / zero */

loc_0007FA0F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007FA59; /* jne: not equal / not zero */

loc_0007FA13: ;
    ecx = edi + 0x14;
    PUSH32(esp, 0x0007FA1Bu); RECOMP_ABI_CALL(0x00029360u, sub_00029360); /* call 0x00029360 */

loc_0007FA1B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007FA25; /* jne: not equal / not zero */

loc_0007FA1F: ;
    _fa = (uint32_t)(MEM8(edi + 0x20)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x20), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007FA59; /* je: equal / zero */

loc_0007FA25: ;
    SET_LO16(eax, ZX8(MEM8(edi + 0x1C)));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0007FA3E; /* jge: greater or equal (signed >=) */

loc_0007FA30: ;
    MEM8(edi + 0x1C) = 0;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0007FA3E: ;
    SET_LO8(ecx, MEM8(edi + 0x1D));
    edx = ZX8(LO8(ecx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edx) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0007FA56; /* jle: less or equal (signed <=) */

loc_0007FA49: ;
    MEM8(edi + 0x1C) = LO8(ecx);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0007FA56: ;
    MEM8(edi + 0x1C) = LO8(eax);

loc_0007FA59: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0007FA70
 * Original: 0x0007FA70 - 0x0007FBA4 (308 bytes, 109 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007FA70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0007FA70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0xFFFFFFFFu);
    MEM32(esp + 0xC) = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xAC); PUSH32(esp, 0x0007FA83u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007FA83: ;
    SET_LO8(eax, MEM8(ebx + 0x1688));
    ebp = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0007FB94; /* jbe: below or equal (unsigned <=) */

loc_0007FA93: ;
    PUSH32(esp, esi);
    ebx = ebx + 0x18;
    PUSH32(esp, edi);

loc_0007FA98: ;
    PUSH32(esp, 0x0007FA9Du); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_0007FA9D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0007FAADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007FAAD: ;
    _fa = (uint32_t)(MEM8(ebx + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007FB17; /* je: equal / zero */

loc_0007FAB3: ;
    edi = 0; /* xor self */
    PUSH32(esp, 0x0007FABAu); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0007FABA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x0007FAC7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007FAC7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007FB17; /* je: equal / zero */

loc_0007FACB: ;
    goto loc_0007FAD0;

    /* nop */

loc_0007FAD0: ;
    PUSH32(esp, 0x0007FAD5u); RECOMP_ABI_CALL(0x00096740u, xml1_guest_powerup_definition_allocate); /* call 0x00096740 */

loc_0007FAD5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007FAFF; /* je: equal / zero */

loc_0007FADB: ;
    PUSH32(esp, 0x0007FAE0u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0007FAE0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x0007FAEDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007FAED: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x0007FAF6u); RECOMP_ABI_CALL(0x00094FE0u, sub_00094FE0); /* call 0x00094FE0 */

loc_0007FAF6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007FAFCu); RECOMP_ABI_CALL(0x000967B0u, xml1_guest_powerup_definition_release); /* call 0x000967B0 */

loc_0007FAFC: ;
    esp = esp + 4;

loc_0007FAFF: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0007FB05u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_0007FB05: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x0007FB13u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007FB13: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007FAD0; /* jne: not equal / not zero */

loc_0007FB17: ;
    esi = MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007FB24; /* jne: not equal / not zero */

loc_0007FB1D: ;
    eax = 0x3C806C;
    goto loc_0007FB3A;

loc_0007FB24: ;
    PUSH32(esp, 0x0007FB29u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0007FB29: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x8008;

loc_0007FB3A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007FB40u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0007FB40: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007FB79; /* je: equal / zero */

loc_0007FB47: ;
    PUSH32(esp, 0x0007FB4Cu); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_0007FB4C: ;
    esi = MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0007FB5B; /* jne: not equal / not zero */

loc_0007FB54: ;
    eax = 0x3C806C;
    goto loc_0007FB71;

loc_0007FB5B: ;
    PUSH32(esp, 0x0007FB60u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0007FB60: ;
    esi = esi & 0xFFFFFF;
    edx = MEM32(eax + esi * 4 + 4);
    eax = edx + eax + 0x8008;

loc_0007FB71: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0007FB79u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007FB79: ;
    eax = MEM32(esp + 0x10);
    ecx = ZX8(MEM8(eax + 0x1688));
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 0x24;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0007FA98; /* jl: less (signed <) */

loc_0007FB90: ;
    POP32(esp, edi);
    ebx = eax;
    POP32(esp, esi);

loc_0007FB94: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x0007FB9Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007FB9E: ;
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0007FBB0
 * Original: 0x0007FBB0 - 0x0007FD25 (373 bytes, 127 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0007FBB0(void)
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

loc_0007FBB0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0007FD1D; /* je: equal / zero */

loc_0007FBC3: ;
    PUSH32(esp, 0x0007FBC8u); RECOMP_ABI_CALL(0x000BF750u, sub_000BF750); /* call 0x000BF750 */

loc_0007FBC8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007FD1D; /* jne: not equal / not zero */

loc_0007FBD0: ;
    PUSH32(esp, 0x0007FBD5u); RECOMP_ABI_CALL(0x000BF740u, sub_000BF740); /* call 0x000BF740 */

loc_0007FBD5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007FD1D; /* jne: not equal / not zero */

loc_0007FBDD: ;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0x0007FBE9u); RECOMP_ABI_CALL(0x0002E8C0u, sub_0002E8C0); /* call 0x0002E8C0 */

loc_0007FBE9: ;
    fp_pop(); /* fstp st(0) */
    SET_LO8(ebx, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007FC05; /* je: equal / zero */

loc_0007FBF3: ;
    eax = MEM32(edi);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi + 0x1696));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0007FC03u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007FC03: ;
    goto loc_0007FC15;

loc_0007FC05: ;
    edx = MEM32(edi);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi + 0x1697));
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0007FC15u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007FC15: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007FCD0; /* je: equal / zero */

loc_0007FC1F: ;
    SET_LO8(eax, MEM8(edi + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007FCD0; /* je: equal / zero */

loc_0007FC2A: ;
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, 0x0007FC33u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_0007FC33: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, ebp);
    if (TEST_Z(_fa, _fb)) goto loc_0007FC8A; /* je: equal / zero */

loc_0007FC41: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x98); PUSH32(esp, 0x0007FC47u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007FC47: ;
    ecx = esi;
    PUSH32(esp, 0x0007FC4Eu); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_0007FC4E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007FC90; /* jne: not equal / not zero */

loc_0007FC53: ;
    _fa = (uint32_t)(MEM32(esi + 0x330)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x330), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007FC90; /* je: equal / zero */

loc_0007FC5C: ;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007FD12; /* jne: not equal / not zero */

loc_0007FC73: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x246);
    MEM32(esp + 0x18) = edx;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x240)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x240] */
    goto loc_0007FCAB;

loc_0007FC8A: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x0007FC90u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007FC90: ;
    SET_LO16(ebp, MEM16(esi + 0x2BC));
    ecx = esi;
    PUSH32(esp, 0x0007FC9Eu); RECOMP_ABI_CALL(0x0002E8C0u, sub_0002E8C0); /* call 0x0002E8C0 */

loc_0007FC9E: ;
    eax = LO16(ebp);
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */

loc_0007FCAB: ;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007FD12; /* jne: not equal / not zero */

loc_0007FCB2: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0007FCBCu); RECOMP_ABI_CALL(0x0007F8B0u, sub_0007F8B0); /* call 0x0007F8B0 */

loc_0007FCBC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007FD12; /* je: equal / zero */

loc_0007FCC0: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM8(esp + 0xC) = 1;
    SET_LO8(eax, MEM8(esp + 0xC));
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0007FCD0: ;
    PUSH32(esp, 0x0007FCD5u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_0007FCD5: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007FCFB; /* je: equal / zero */

loc_0007FCD9: ;
    ecx = MEM32(esi + 0x1C);
    MEM32(esp + 0x18) = ecx;
    edx = MEM32(eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x98); PUSH32(esp, 0x0007FCF0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007FCF0: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0007FCFB: ;
    edx = MEM32(esi + 0x1C);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax);
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x0007FD12u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007FD12: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0007FD1D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0007FD30
 * Original: 0x0007FD30 - 0x0007FDAE (126 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007FD30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007FD30: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F458);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3CE24C;
    _fa = (uint32_t)(MEM32(esi + 0xD0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xD0), 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0007FD8F; /* jle: less or equal (signed <=) */

loc_0007FD64: ;
    PUSH32(esp, 0x0007FD69u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0007FD69: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0007FD70u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007FD70: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0007FD77u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007FD77: ;
    ecx = MEM32(esi + 0xD0);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0007FD85u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007FD85: ;
    MEM32(esi + 0xD0) = 0xFFFFFFFFu;

loc_0007FD8F: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0007FD9Eu); RECOMP_ABI_CALL(0x00026B60u, sub_00026B60); /* call 0x00026B60 */

loc_0007FD9E: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0007FDB0
 * Original: 0x0007FDB0 - 0x0007FDB6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007FDB0(void)
{

loc_0007FDB0: ;
    eax = 0x49B298;
    esp += 4; return; /* ret */

}

/**
 * sub_0007FDC0
 * Original: 0x0007FDC0 - 0x0007FDC6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007FDC0(void)
{

loc_0007FDC0: ;
    eax = 0x3CE238;
    esp += 4; return; /* ret */

}

/**
 * sub_0007FDD0
 * Original: 0x0007FDD0 - 0x0007FE4D (125 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007FDD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007FDD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    ecx = esi + 0xD8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CE354);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0007FDEBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007FDEB: ;
    edx = MEM32(edi);
    eax = esi + 0xE4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi + 0xE0;
    PUSH32(esp, ecx);
    eax = esi + 0xDC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CE348);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0007FE0Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007FE0C: ;
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esi + 0xE8) = 0x3F800000;
    edx = MEM32(edi);
    PUSH32(esp, 0x3CE33C);
    ecx = edi;
    MEM8(esp + 0x14) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0007FE2Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007FE2C: ;
    SET_LO8(ecx, MEM8(esp + 0xC));
    SET_LO8(eax, MEM8(esi + 0xD4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    POP32(esp, edi);
    MEM8(esi + 0xD4) = LO8(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007FE50
 * Original: 0x0007FE50 - 0x0007FEE0 (144 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007FE50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007FE50: ;
    esp = esp - 0x40;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xD4));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, ~LO8(ecx));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    _fa = (uint32_t)(MEM32(esi + 0xD0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xD0), 0xFFFFFFFFu (32-bit) */
    MEM8(esi + 0xD4) = LO8(ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_0007FED7; /* jle: less or equal (signed <=) */

loc_0007FE76: ;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0007FE83u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0007FE83: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0007FE8Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007FE8A: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0007FE91u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007FE91: ;
    edx = MEM32(eax);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xD0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0007FEA4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007FEA4: ;
    SET_LO8(edx, MEM8(esi + 0xD4));
    SET_LO8(edx, LO8(edx) & 1);
    MEM8(esp + 0x40) = LO8(edx);
    PUSH32(esp, 0x0007FEB6u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0007FEB6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0007FEBDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007FEBD: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0007FEC4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007FEC4: ;
    edx = MEM32(eax);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xD0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0007FED7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007FED7: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007FEE0
 * Original: 0x0007FEE0 - 0x0007FEE6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007FEE0(void)
{

loc_0007FEE0: ;
    eax = 0xEC;
    esp += 4; return; /* ret */

}

/**
 * sub_0007FEF0
 * Original: 0x0007FEF0 - 0x0007FF0E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007FEF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007FEF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0007FEF8u); RECOMP_ABI_CALL(0x0007FD30u, sub_0007FD30); /* call 0x0007FD30 */

loc_0007FEF8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007FF08; /* je: equal / zero */

loc_0007FEFF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007FF05u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_0007FF05: ;
    esp = esp + 4;

loc_0007FF08: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0007FF10
 * Original: 0x0007FF10 - 0x0007FFD1 (193 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007FF10(void)
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

loc_0007FF10: ;
    esp = esp - 0x40;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0007FFCC; /* jge: greater or equal (signed >=) */

loc_0007FF24: ;
    fp_push(MEMF(esi + 0xD8)); /* fld float */
    SET_LO8(eax, MEM8(esi + 0xD4));
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    ecx = MEM32(esi + 0x20);
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    edx = MEM32(esi + 0x24);
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(esp + 0x40) = LO8(eax);
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    eax = MEM32(esi + 0x28);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esi + 0xDC);
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(esi + 0xE0);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esi + 0xE4);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esi + 0xE8);
    MEM32(esp + 4) = 2;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0007FFACu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0007FFAC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0007FFB3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007FFB3: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0007FFBAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007FFBA: ;
    edx = MEM32(eax);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x0007FFC6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007FFC6: ;
    MEM32(esi + 0xD0) = eax;

loc_0007FFCC: ;
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0007FFE0
 * Original: 0x0007FFE0 - 0x0008003C (92 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007FFE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0007FFE0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0007FFEFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0007FFEF: ;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007FFFAu); RECOMP_ABI_CALL(0x00066B20u, sub_00066B20); /* call 0x00066B20 */

loc_0007FFFA: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00080035; /* je: equal / zero */

loc_00080001: ;
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
    PUSH32(esp, 0x00080025u); RECOMP_ABI_CALL(0x00080040u, sub_00080040); /* call 0x00080040 */

loc_00080025: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x0008002Eu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_0008002E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_00080035: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00080001
 * Original: 0x00080001 - 0x0008003C (59 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080001(void)
{

loc_00080001: ;
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
    PUSH32(esp, 0x00080025u); RECOMP_ABI_CALL(0x00080040u, sub_00080040); /* call 0x00080040 */

loc_00080025: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x0008002Eu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_0008002E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00080005
 * Original: 0x00080005 - 0x0008003C (55 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080005(void)
{

loc_00080005: ;
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
    PUSH32(esp, 0x00080025u); RECOMP_ABI_CALL(0x00080040u, sub_00080040); /* call 0x00080040 */

loc_00080025: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x0008002Eu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_0008002E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00080009
 * Original: 0x00080009 - 0x0008003C (51 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080009(void)
{

loc_00080009: ;
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
    PUSH32(esp, 0x00080025u); RECOMP_ABI_CALL(0x00080040u, sub_00080040); /* call 0x00080040 */

loc_00080025: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x0008002Eu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_0008002E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0008000A
 * Original: 0x0008000A - 0x0008003C (50 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008000A(void)
{

loc_0008000A: ;
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
    PUSH32(esp, 0x00080025u); RECOMP_ABI_CALL(0x00080040u, sub_00080040); /* call 0x00080040 */

loc_00080025: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x0008002Eu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_0008002E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0008000E
 * Original: 0x0008000E - 0x0008003C (46 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008000E(void)
{

loc_0008000E: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x00080025u); RECOMP_ABI_CALL(0x00080040u, sub_00080040); /* call 0x00080040 */

loc_00080025: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x0008002Eu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_0008002E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00080019
 * Original: 0x00080019 - 0x0008003C (35 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080019(void)
{

loc_00080019: ;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x00080025u); RECOMP_ABI_CALL(0x00080040u, sub_00080040); /* call 0x00080040 */

loc_00080025: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x0008002Eu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_0008002E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0008001A
 * Original: 0x0008001A - 0x0008003C (34 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008001A(void)
{

loc_0008001A: ;
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x00080025u); RECOMP_ABI_CALL(0x00080040u, sub_00080040); /* call 0x00080040 */

loc_00080025: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x0008002Eu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_0008002E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0008001C
 * Original: 0x0008001C - 0x0008003C (32 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008001C(void)
{

loc_0008001C: ;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x00080025u); RECOMP_ABI_CALL(0x00080040u, sub_00080040); /* call 0x00080040 */

loc_00080025: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x0008002Eu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_0008002E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0008001E
 * Original: 0x0008001E - 0x0008003C (30 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008001E(void)
{

loc_0008001E: ;
    ecx = eax;
    PUSH32(esp, 0x00080025u); RECOMP_ABI_CALL(0x00080040u, sub_00080040); /* call 0x00080040 */

loc_00080025: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x0008002Eu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_0008002E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00080020
 * Original: 0x00080020 - 0x0008003C (28 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080020(void)
{

loc_00080020: ;
    PUSH32(esp, 0x00080025u); RECOMP_ABI_CALL(0x00080040u, sub_00080040); /* call 0x00080040 */

loc_00080025: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x0008002Eu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_0008002E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00080025
 * Original: 0x00080025 - 0x0008003C (23 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080025(void)
{

loc_00080025: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x0008002Eu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_0008002E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00080029
 * Original: 0x00080029 - 0x0008003C (19 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080029(void)
{

loc_00080029: ;
    PUSH32(esp, 0x0008002Eu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_0008002E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0008002E
 * Original: 0x0008002E - 0x0008003C (14 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008002E(void)
{

loc_0008002E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00080030
 * Original: 0x00080030 - 0x0008003C (12 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080030(void)
{

loc_00080030: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00080031
 * Original: 0x00080031 - 0x0008003C (11 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080031(void)
{

loc_00080031: ;
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00080032
 * Original: 0x00080032 - 0x0008003C (10 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080032(void)
{

loc_00080032: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00080035
 * Original: 0x00080035 - 0x0008003C (7 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080035(void)
{

loc_00080035: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00080038
 * Original: 0x00080038 - 0x0008003C (4 bytes, 2 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080038(void)
{

loc_00080038: ;
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00080039
 * Original: 0x00080039 - 0x0008003C (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080039(void)
{

loc_00080039: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00080040
 * Original: 0x00080040 - 0x000800D8 (152 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080040: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F458);
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
    PUSH32(esp, 0x00080086u); RECOMP_ABI_CALL(0x00028DC0u, sub_00028DC0); /* call 0x00028DC0 */

loc_00080086: ;
    SET_LO8(ecx, MEM8(esi + 0xD4));
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x14) = 0;
    MEM32(esi) = 0x3CE24C;
    MEM32(esi + 0xD0) = 0xFFFFFFFFu;
    MEM8(esi + 0xD4) = LO8(ecx);
    MEM32(esi + 0xD8) = 0x43480000;
    if (TEST_Z(_fa, _fb)) goto loc_000800C3; /* je: equal / zero */

loc_000800BB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000800C3u); RECOMP_ABI_CALL(0x0007FDD0u, sub_0007FDD0); /* call 0x0007FDD0 */

loc_000800C3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00080042
 * Original: 0x00080042 - 0x000800D8 (150 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080042(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080042: ;
    PUSH32(esp, 0x34F458);
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
    PUSH32(esp, 0x00080086u); RECOMP_ABI_CALL(0x00028DC0u, sub_00028DC0); /* call 0x00028DC0 */

loc_00080086: ;
    SET_LO8(ecx, MEM8(esi + 0xD4));
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x14) = 0;
    MEM32(esi) = 0x3CE24C;
    MEM32(esi + 0xD0) = 0xFFFFFFFFu;
    MEM8(esi + 0xD4) = LO8(ecx);
    MEM32(esi + 0xD8) = 0x43480000;
    if (TEST_Z(_fa, _fb)) goto loc_000800C3; /* je: equal / zero */

loc_000800BB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000800C3u); RECOMP_ABI_CALL(0x0007FDD0u, sub_0007FDD0); /* call 0x0007FDD0 */

loc_000800C3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0008004D
 * Original: 0x0008004D - 0x000800D8 (139 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008004D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008004D: ;
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
    PUSH32(esp, 0x00080086u); RECOMP_ABI_CALL(0x00028DC0u, sub_00028DC0); /* call 0x00028DC0 */

loc_00080086: ;
    SET_LO8(ecx, MEM8(esi + 0xD4));
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x14) = 0;
    MEM32(esi) = 0x3CE24C;
    MEM32(esi + 0xD0) = 0xFFFFFFFFu;
    MEM8(esi + 0xD4) = LO8(ecx);
    MEM32(esi + 0xD8) = 0x43480000;
    if (TEST_Z(_fa, _fb)) goto loc_000800C3; /* je: equal / zero */

loc_000800BB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000800C3u); RECOMP_ABI_CALL(0x0007FDD0u, sub_0007FDD0); /* call 0x0007FDD0 */

loc_000800C3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0008004E
 * Original: 0x0008004E - 0x000800D8 (138 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008004E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008004E: ;
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
    PUSH32(esp, 0x00080086u); RECOMP_ABI_CALL(0x00028DC0u, sub_00028DC0); /* call 0x00028DC0 */

loc_00080086: ;
    SET_LO8(ecx, MEM8(esi + 0xD4));
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x14) = 0;
    MEM32(esi) = 0x3CE24C;
    MEM32(esi + 0xD0) = 0xFFFFFFFFu;
    MEM8(esi + 0xD4) = LO8(ecx);
    MEM32(esi + 0xD8) = 0x43480000;
    if (TEST_Z(_fa, _fb)) goto loc_000800C3; /* je: equal / zero */

loc_000800BB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000800C3u); RECOMP_ABI_CALL(0x0007FDD0u, sub_0007FDD0); /* call 0x0007FDD0 */

loc_000800C3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00080055
 * Original: 0x00080055 - 0x000800D8 (131 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080055(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080055: ;
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
    PUSH32(esp, 0x00080086u); RECOMP_ABI_CALL(0x00028DC0u, sub_00028DC0); /* call 0x00028DC0 */

loc_00080086: ;
    SET_LO8(ecx, MEM8(esi + 0xD4));
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x14) = 0;
    MEM32(esi) = 0x3CE24C;
    MEM32(esi + 0xD0) = 0xFFFFFFFFu;
    MEM8(esi + 0xD4) = LO8(ecx);
    MEM32(esi + 0xD8) = 0x43480000;
    if (TEST_Z(_fa, _fb)) goto loc_000800C3; /* je: equal / zero */

loc_000800BB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000800C3u); RECOMP_ABI_CALL(0x0007FDD0u, sub_0007FDD0); /* call 0x0007FDD0 */

loc_000800C3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00080056
 * Original: 0x00080056 - 0x000800D8 (130 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080056(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080056: ;
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
    PUSH32(esp, 0x00080086u); RECOMP_ABI_CALL(0x00028DC0u, sub_00028DC0); /* call 0x00028DC0 */

loc_00080086: ;
    SET_LO8(ecx, MEM8(esi + 0xD4));
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x14) = 0;
    MEM32(esi) = 0x3CE24C;
    MEM32(esi + 0xD0) = 0xFFFFFFFFu;
    MEM8(esi + 0xD4) = LO8(ecx);
    MEM32(esi + 0xD8) = 0x43480000;
    if (TEST_Z(_fa, _fb)) goto loc_000800C3; /* je: equal / zero */

loc_000800BB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000800C3u); RECOMP_ABI_CALL(0x0007FDD0u, sub_0007FDD0); /* call 0x0007FDD0 */

loc_000800C3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0008005A
 * Original: 0x0008005A - 0x000800D8 (126 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008005A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008005A: ;
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
    PUSH32(esp, 0x00080086u); RECOMP_ABI_CALL(0x00028DC0u, sub_00028DC0); /* call 0x00028DC0 */

loc_00080086: ;
    SET_LO8(ecx, MEM8(esi + 0xD4));
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x14) = 0;
    MEM32(esi) = 0x3CE24C;
    MEM32(esi + 0xD0) = 0xFFFFFFFFu;
    MEM8(esi + 0xD4) = LO8(ecx);
    MEM32(esi + 0xD8) = 0x43480000;
    if (TEST_Z(_fa, _fb)) goto loc_000800C3; /* je: equal / zero */

loc_000800BB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000800C3u); RECOMP_ABI_CALL(0x0007FDD0u, sub_0007FDD0); /* call 0x0007FDD0 */

loc_000800C3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0008005E
 * Original: 0x0008005E - 0x000800D8 (122 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008005E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008005E: ;
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
    PUSH32(esp, 0x00080086u); RECOMP_ABI_CALL(0x00028DC0u, sub_00028DC0); /* call 0x00028DC0 */

loc_00080086: ;
    SET_LO8(ecx, MEM8(esi + 0xD4));
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x14) = 0;
    MEM32(esi) = 0x3CE24C;
    MEM32(esi + 0xD0) = 0xFFFFFFFFu;
    MEM8(esi + 0xD4) = LO8(ecx);
    MEM32(esi + 0xD8) = 0x43480000;
    if (TEST_Z(_fa, _fb)) goto loc_000800C3; /* je: equal / zero */

loc_000800BB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000800C3u); RECOMP_ABI_CALL(0x0007FDD0u, sub_0007FDD0); /* call 0x0007FDD0 */

loc_000800C3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00080064
 * Original: 0x00080064 - 0x000800D8 (116 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080064(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080064: ;
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
    PUSH32(esp, 0x00080086u); RECOMP_ABI_CALL(0x00028DC0u, sub_00028DC0); /* call 0x00028DC0 */

loc_00080086: ;
    SET_LO8(ecx, MEM8(esi + 0xD4));
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x14) = 0;
    MEM32(esi) = 0x3CE24C;
    MEM32(esi + 0xD0) = 0xFFFFFFFFu;
    MEM8(esi + 0xD4) = LO8(ecx);
    MEM32(esi + 0xD8) = 0x43480000;
    if (TEST_Z(_fa, _fb)) goto loc_000800C3; /* je: equal / zero */

loc_000800BB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000800C3u); RECOMP_ABI_CALL(0x0007FDD0u, sub_0007FDD0); /* call 0x0007FDD0 */

loc_000800C3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00080066
 * Original: 0x00080066 - 0x000800D8 (114 bytes, 32 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080066(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080066: ;
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
    PUSH32(esp, 0x00080086u); RECOMP_ABI_CALL(0x00028DC0u, sub_00028DC0); /* call 0x00028DC0 */

loc_00080086: ;
    SET_LO8(ecx, MEM8(esi + 0xD4));
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x14) = 0;
    MEM32(esi) = 0x3CE24C;
    MEM32(esi + 0xD0) = 0xFFFFFFFFu;
    MEM8(esi + 0xD4) = LO8(ecx);
    MEM32(esi + 0xD8) = 0x43480000;
    if (TEST_Z(_fa, _fb)) goto loc_000800C3; /* je: equal / zero */

loc_000800BB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000800C3u); RECOMP_ABI_CALL(0x0007FDD0u, sub_0007FDD0); /* call 0x0007FDD0 */

loc_000800C3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0008006A
 * Original: 0x0008006A - 0x000800D8 (110 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008006A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008006A: ;
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
    PUSH32(esp, 0x00080086u); RECOMP_ABI_CALL(0x00028DC0u, sub_00028DC0); /* call 0x00028DC0 */

loc_00080086: ;
    SET_LO8(ecx, MEM8(esi + 0xD4));
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x14) = 0;
    MEM32(esi) = 0x3CE24C;
    MEM32(esi + 0xD0) = 0xFFFFFFFFu;
    MEM8(esi + 0xD4) = LO8(ecx);
    MEM32(esi + 0xD8) = 0x43480000;
    if (TEST_Z(_fa, _fb)) goto loc_000800C3; /* je: equal / zero */

loc_000800BB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000800C3u); RECOMP_ABI_CALL(0x0007FDD0u, sub_0007FDD0); /* call 0x0007FDD0 */

loc_000800C3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0008006B
 * Original: 0x0008006B - 0x000800D8 (109 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008006B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008006B: ;
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
    PUSH32(esp, 0x00080086u); RECOMP_ABI_CALL(0x00028DC0u, sub_00028DC0); /* call 0x00028DC0 */

loc_00080086: ;
    SET_LO8(ecx, MEM8(esi + 0xD4));
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x14) = 0;
    MEM32(esi) = 0x3CE24C;
    MEM32(esi + 0xD0) = 0xFFFFFFFFu;
    MEM8(esi + 0xD4) = LO8(ecx);
    MEM32(esi + 0xD8) = 0x43480000;
    if (TEST_Z(_fa, _fb)) goto loc_000800C3; /* je: equal / zero */

loc_000800BB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000800C3u); RECOMP_ABI_CALL(0x0007FDD0u, sub_0007FDD0); /* call 0x0007FDD0 */

loc_000800C3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0008006C
 * Original: 0x0008006C - 0x000800D8 (108 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008006C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008006C: ;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esi;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x40) = esp;
    PUSH32(esp, 0x00080086u); RECOMP_ABI_CALL(0x00028DC0u, sub_00028DC0); /* call 0x00028DC0 */

loc_00080086: ;
    SET_LO8(ecx, MEM8(esi + 0xD4));
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x14) = 0;
    MEM32(esi) = 0x3CE24C;
    MEM32(esi + 0xD0) = 0xFFFFFFFFu;
    MEM8(esi + 0xD4) = LO8(ecx);
    MEM32(esi + 0xD8) = 0x43480000;
    if (TEST_Z(_fa, _fb)) goto loc_000800C3; /* je: equal / zero */

loc_000800BB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000800C3u); RECOMP_ABI_CALL(0x0007FDD0u, sub_0007FDD0); /* call 0x0007FDD0 */

loc_000800C3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0008006D
 * Original: 0x0008006D - 0x000800D8 (107 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008006D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008006D: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esi;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x40) = esp;
    PUSH32(esp, 0x00080086u); RECOMP_ABI_CALL(0x00028DC0u, sub_00028DC0); /* call 0x00028DC0 */

loc_00080086: ;
    SET_LO8(ecx, MEM8(esi + 0xD4));
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x14) = 0;
    MEM32(esi) = 0x3CE24C;
    MEM32(esi + 0xD0) = 0xFFFFFFFFu;
    MEM8(esi + 0xD4) = LO8(ecx);
    MEM32(esi + 0xD8) = 0x43480000;
    if (TEST_Z(_fa, _fb)) goto loc_000800C3; /* je: equal / zero */

loc_000800BB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000800C3u); RECOMP_ABI_CALL(0x0007FDD0u, sub_0007FDD0); /* call 0x0007FDD0 */

loc_000800C3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0008006E
 * Original: 0x0008006E - 0x000800D8 (106 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008006E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008006E: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esi;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x40) = esp;
    PUSH32(esp, 0x00080086u); RECOMP_ABI_CALL(0x00028DC0u, sub_00028DC0); /* call 0x00028DC0 */

loc_00080086: ;
    SET_LO8(ecx, MEM8(esi + 0xD4));
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x14) = 0;
    MEM32(esi) = 0x3CE24C;
    MEM32(esi + 0xD0) = 0xFFFFFFFFu;
    MEM8(esi + 0xD4) = LO8(ecx);
    MEM32(esi + 0xD8) = 0x43480000;
    if (TEST_Z(_fa, _fb)) goto loc_000800C3; /* je: equal / zero */

loc_000800BB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000800C3u); RECOMP_ABI_CALL(0x0007FDD0u, sub_0007FDD0); /* call 0x0007FDD0 */

loc_000800C3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0008006F
 * Original: 0x0008006F - 0x000800D8 (105 bytes, 26 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008006F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008006F: ;
    ecx = MEM32(esp + 0x30);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esi;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x40) = esp;
    PUSH32(esp, 0x00080086u); RECOMP_ABI_CALL(0x00028DC0u, sub_00028DC0); /* call 0x00028DC0 */

loc_00080086: ;
    SET_LO8(ecx, MEM8(esi + 0xD4));
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x14) = 0;
    MEM32(esi) = 0x3CE24C;
    MEM32(esi + 0xD0) = 0xFFFFFFFFu;
    MEM8(esi + 0xD4) = LO8(ecx);
    MEM32(esi + 0xD8) = 0x43480000;
    if (TEST_Z(_fa, _fb)) goto loc_000800C3; /* je: equal / zero */

loc_000800BB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000800C3u); RECOMP_ABI_CALL(0x0007FDD0u, sub_0007FDD0); /* call 0x0007FDD0 */

loc_000800C3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00080073
 * Original: 0x00080073 - 0x000800D8 (101 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080073(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080073: ;
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esi;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x40) = esp;
    PUSH32(esp, 0x00080086u); RECOMP_ABI_CALL(0x00028DC0u, sub_00028DC0); /* call 0x00028DC0 */

loc_00080086: ;
    SET_LO8(ecx, MEM8(esi + 0xD4));
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x14) = 0;
    MEM32(esi) = 0x3CE24C;
    MEM32(esi + 0xD0) = 0xFFFFFFFFu;
    MEM8(esi + 0xD4) = LO8(ecx);
    MEM32(esi + 0xD8) = 0x43480000;
    if (TEST_Z(_fa, _fb)) goto loc_000800C3; /* je: equal / zero */

loc_000800BB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000800C3u); RECOMP_ABI_CALL(0x0007FDD0u, sub_0007FDD0); /* call 0x0007FDD0 */

loc_000800C3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00080075
 * Original: 0x00080075 - 0x000800D8 (99 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080075(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080075: ;
    MEM32(eax) = ecx;
    ecx = esi;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x40) = esp;
    PUSH32(esp, 0x00080086u); RECOMP_ABI_CALL(0x00028DC0u, sub_00028DC0); /* call 0x00028DC0 */

loc_00080086: ;
    SET_LO8(ecx, MEM8(esi + 0xD4));
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x14) = 0;
    MEM32(esi) = 0x3CE24C;
    MEM32(esi + 0xD0) = 0xFFFFFFFFu;
    MEM8(esi + 0xD4) = LO8(ecx);
    MEM32(esi + 0xD8) = 0x43480000;
    if (TEST_Z(_fa, _fb)) goto loc_000800C3; /* je: equal / zero */

loc_000800BB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000800C3u); RECOMP_ABI_CALL(0x0007FDD0u, sub_0007FDD0); /* call 0x0007FDD0 */

loc_000800C3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00080077
 * Original: 0x00080077 - 0x000800D8 (97 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080077(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080077: ;
    ecx = esi;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x40) = esp;
    PUSH32(esp, 0x00080086u); RECOMP_ABI_CALL(0x00028DC0u, sub_00028DC0); /* call 0x00028DC0 */

loc_00080086: ;
    SET_LO8(ecx, MEM8(esi + 0xD4));
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x14) = 0;
    MEM32(esi) = 0x3CE24C;
    MEM32(esi + 0xD0) = 0xFFFFFFFFu;
    MEM8(esi + 0xD4) = LO8(ecx);
    MEM32(esi + 0xD8) = 0x43480000;
    if (TEST_Z(_fa, _fb)) goto loc_000800C3; /* je: equal / zero */

loc_000800BB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000800C3u); RECOMP_ABI_CALL(0x0007FDD0u, sub_0007FDD0); /* call 0x0007FDD0 */

loc_000800C3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00080079
 * Original: 0x00080079 - 0x000800D8 (95 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080079(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080079: ;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x40) = esp;
    PUSH32(esp, 0x00080086u); RECOMP_ABI_CALL(0x00028DC0u, sub_00028DC0); /* call 0x00028DC0 */

loc_00080086: ;
    SET_LO8(ecx, MEM8(esi + 0xD4));
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x14) = 0;
    MEM32(esi) = 0x3CE24C;
    MEM32(esi + 0xD0) = 0xFFFFFFFFu;
    MEM8(esi + 0xD4) = LO8(ecx);
    MEM32(esi + 0xD8) = 0x43480000;
    if (TEST_Z(_fa, _fb)) goto loc_000800C3; /* je: equal / zero */

loc_000800BB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000800C3u); RECOMP_ABI_CALL(0x0007FDD0u, sub_0007FDD0); /* call 0x0007FDD0 */

loc_000800C3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0008007D
 * Original: 0x0008007D - 0x000800D8 (91 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008007D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008007D: ;
    MEM32(esp + 0x40) = esp;
    PUSH32(esp, 0x00080086u); RECOMP_ABI_CALL(0x00028DC0u, sub_00028DC0); /* call 0x00028DC0 */

loc_00080086: ;
    SET_LO8(ecx, MEM8(esi + 0xD4));
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x14) = 0;
    MEM32(esi) = 0x3CE24C;
    MEM32(esi + 0xD0) = 0xFFFFFFFFu;
    MEM8(esi + 0xD4) = LO8(ecx);
    MEM32(esi + 0xD8) = 0x43480000;
    if (TEST_Z(_fa, _fb)) goto loc_000800C3; /* je: equal / zero */

loc_000800BB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000800C3u); RECOMP_ABI_CALL(0x0007FDD0u, sub_0007FDD0); /* call 0x0007FDD0 */

loc_000800C3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00080081
 * Original: 0x00080081 - 0x000800D8 (87 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080081(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080081: ;
    PUSH32(esp, 0x00080086u); RECOMP_ABI_CALL(0x00028DC0u, sub_00028DC0); /* call 0x00028DC0 */

loc_00080086: ;
    SET_LO8(ecx, MEM8(esi + 0xD4));
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x14) = 0;
    MEM32(esi) = 0x3CE24C;
    MEM32(esi + 0xD0) = 0xFFFFFFFFu;
    MEM8(esi + 0xD4) = LO8(ecx);
    MEM32(esi + 0xD8) = 0x43480000;
    if (TEST_Z(_fa, _fb)) goto loc_000800C3; /* je: equal / zero */

loc_000800BB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000800C3u); RECOMP_ABI_CALL(0x0007FDD0u, sub_0007FDD0); /* call 0x0007FDD0 */

loc_000800C3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00080086
 * Original: 0x00080086 - 0x000800D8 (82 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080086(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080086: ;
    SET_LO8(ecx, MEM8(esi + 0xD4));
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x14) = 0;
    MEM32(esi) = 0x3CE24C;
    MEM32(esi + 0xD0) = 0xFFFFFFFFu;
    MEM8(esi + 0xD4) = LO8(ecx);
    MEM32(esi + 0xD8) = 0x43480000;
    if (TEST_Z(_fa, _fb)) goto loc_000800C3; /* je: equal / zero */

loc_000800BB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000800C3u); RECOMP_ABI_CALL(0x0007FDD0u, sub_0007FDD0); /* call 0x0007FDD0 */

loc_000800C3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0008008C
 * Original: 0x0008008C - 0x000800D8 (76 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008008C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008008C: ;
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x14) = 0;
    MEM32(esi) = 0x3CE24C;
    MEM32(esi + 0xD0) = 0xFFFFFFFFu;
    MEM8(esi + 0xD4) = LO8(ecx);
    MEM32(esi + 0xD8) = 0x43480000;
    if (TEST_Z(_fa, _fb)) goto loc_000800C3; /* je: equal / zero */

loc_000800BB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000800C3u); RECOMP_ABI_CALL(0x0007FDD0u, sub_0007FDD0); /* call 0x0007FDD0 */

loc_000800C3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00080091
 * Original: 0x00080091 - 0x000800D8 (71 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080091(void)
{
    int _flags = 0; /* fallback flag var */

loc_00080091: ;
    MEM32(esp + 0x14) = 0;
    MEM32(esi) = 0x3CE24C;
    MEM32(esi + 0xD0) = 0xFFFFFFFFu;
    MEM8(esi + 0xD4) = LO8(ecx);
    MEM32(esi + 0xD8) = 0x43480000;
    if (_flags /* je: equal / zero */) goto loc_000800C3;

loc_000800BB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000800C3u); RECOMP_ABI_CALL(0x0007FDD0u, sub_0007FDD0); /* call 0x0007FDD0 */

loc_000800C3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00080099
 * Original: 0x00080099 - 0x000800D8 (63 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080099(void)
{
    int _flags = 0; /* fallback flag var */

loc_00080099: ;
    MEM32(esi) = 0x3CE24C;
    MEM32(esi + 0xD0) = 0xFFFFFFFFu;
    MEM8(esi + 0xD4) = LO8(ecx);
    MEM32(esi + 0xD8) = 0x43480000;
    if (_flags /* je: equal / zero */) goto loc_000800C3;

loc_000800BB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000800C3u); RECOMP_ABI_CALL(0x0007FDD0u, sub_0007FDD0); /* call 0x0007FDD0 */

loc_000800C3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000800A9
 * Original: 0x000800A9 - 0x000800D8 (47 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800A9(void)
{
    int _flags = 0; /* fallback flag var */

loc_000800A9: ;
    MEM8(esi + 0xD4) = LO8(ecx);
    MEM32(esi + 0xD8) = 0x43480000;
    if (_flags /* je: equal / zero */) goto loc_000800C3;

loc_000800BB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000800C3u); RECOMP_ABI_CALL(0x0007FDD0u, sub_0007FDD0); /* call 0x0007FDD0 */

loc_000800C3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000800B9
 * Original: 0x000800B9 - 0x000800D8 (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800B9(void)
{
    int _flags = 0; /* fallback flag var */

loc_000800B9: ;
    if (_flags /* je: equal / zero */) goto loc_000800C3;

loc_000800BB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000800C3u); RECOMP_ABI_CALL(0x0007FDD0u, sub_0007FDD0); /* call 0x0007FDD0 */

loc_000800C3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000800BC
 * Original: 0x000800BC - 0x000800D8 (28 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800BC(void)
{

loc_000800BC: ;
    ecx = esi;
    PUSH32(esp, 0x000800C3u); RECOMP_ABI_CALL(0x0007FDD0u, sub_0007FDD0); /* call 0x0007FDD0 */

loc_000800C3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000800BE
 * Original: 0x000800BE - 0x000800D8 (26 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800BE(void)
{

loc_000800BE: ;
    PUSH32(esp, 0x000800C3u); RECOMP_ABI_CALL(0x0007FDD0u, sub_0007FDD0); /* call 0x0007FDD0 */

loc_000800C3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000800C3
 * Original: 0x000800C3 - 0x000800D8 (21 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800C3(void)
{

loc_000800C3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000800CA
 * Original: 0x000800CA - 0x000800D8 (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800CA(void)
{

loc_000800CA: ;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000800D1
 * Original: 0x000800D1 - 0x000800D8 (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800D1(void)
{

loc_000800D1: ;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000800D2
 * Original: 0x000800D2 - 0x000800D8 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800D2(void)
{

loc_000800D2: ;
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000800D5
 * Original: 0x000800D5 - 0x000800D8 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800D5(void)
{

loc_000800D5: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000800E0
 * Original: 0x000800E0 - 0x000800FF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000800E0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3CE38C;
    if (TEST_Z(_fa, _fb)) goto loc_000800F9; /* je: equal / zero */

loc_000800F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000800F6u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000800F6: ;
    esp = esp + 4;

loc_000800F9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000800E5
 * Original: 0x000800E5 - 0x000800FF (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800E5(void)
{
    int _flags = 0; /* fallback flag var */

loc_000800E5: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3CE38C;
    if (_flags /* je: equal / zero */) goto loc_000800F9;

loc_000800F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000800F6u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000800F6: ;
    esp = esp + 4;

loc_000800F9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000800E6
 * Original: 0x000800E6 - 0x000800FF (25 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800E6(void)
{
    int _flags = 0; /* fallback flag var */

loc_000800E6: ;
    esi = ecx;
    MEM32(esi) = 0x3CE38C;
    if (_flags /* je: equal / zero */) goto loc_000800F9;

loc_000800F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000800F6u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000800F6: ;
    esp = esp + 4;

loc_000800F9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000800E8
 * Original: 0x000800E8 - 0x000800FF (23 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800E8(void)
{
    int _flags = 0; /* fallback flag var */

loc_000800E8: ;
    MEM32(esi) = 0x3CE38C;
    if (_flags /* je: equal / zero */) goto loc_000800F9;

loc_000800F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000800F6u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000800F6: ;
    esp = esp + 4;

loc_000800F9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000800EE
 * Original: 0x000800EE - 0x000800FF (17 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800EE(void)
{
    int _flags = 0; /* fallback flag var */

loc_000800EE: ;
    if (_flags /* je: equal / zero */) goto loc_000800F9;

loc_000800F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000800F6u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000800F6: ;
    esp = esp + 4;

loc_000800F9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000800F0
 * Original: 0x000800F0 - 0x000800FF (15 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800F0(void)
{

loc_000800F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000800F6u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000800F6: ;
    esp = esp + 4;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000800F1
 * Original: 0x000800F1 - 0x000800FF (14 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800F1(void)
{

loc_000800F1: ;
    PUSH32(esp, 0x000800F6u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000800F6: ;
    esp = esp + 4;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000800F6
 * Original: 0x000800F6 - 0x000800FF (9 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800F6(void)
{

loc_000800F6: ;
    esp = esp + 4;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000800F9
 * Original: 0x000800F9 - 0x000800FF (6 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800F9(void)
{

loc_000800F9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000800FB
 * Original: 0x000800FB - 0x000800FF (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800FB(void)
{

loc_000800FB: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000800FC
 * Original: 0x000800FC - 0x000800FF (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800FC(void)
{

loc_000800FC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00080100
 * Original: 0x00080100 - 0x00080107 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080100(void)
{

loc_00080100: ;
    MEM32(ecx) = 0x3CE38C;
    esp += 4; return; /* ret */

}

/**
 * sub_00080108
 * Original: 0x00080108 - 0x00080109 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080108(void)
{

loc_00080108: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00080109
 * Original: 0x00080109 - 0x00080110 (7 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080109(void)
{

loc_00080109: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00080110
 * Original: 0x00080110 - 0x000801E8 (216 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080110(void)
{

loc_00080110: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3CE43C;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = 0xC4A28000u;
    eax = 0x42F00000;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = ebx;
    MEM8(esi + 0x20) = LO8(ebx);
    MEM8(esi + 0x60) = LO8(ebx);
    MEM8(esi + 0xA0) = LO8(ebx);
    MEM8(esi + 0xE0) = LO8(ebx);
    MEM8(esi + 0x120) = LO8(ebx);
    MEM8(esi + 0x160) = LO8(ebx);
    MEM8(esi + 0x1A0) = LO8(ebx);
    PUSH32(esp, edi);
    MEM8(esi + 0x1E0) = LO8(ebx);
    SET_LO8(eax, MEM8(esi + 0x221));
    PUSH32(esp, 0x80);
    SET_LO8(eax, LO8(eax) & 0xF0);
    edi = esi + 0x22C;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, edi);
    MEM8(esi + 0x220) = LO8(ebx);
    MEM8(esi + 0x221) = LO8(eax);
    MEM32(esi + 0x224) = ebx;
    MEM32(esi + 0x228) = ebx;
    PUSH32(esp, 0x0008019Bu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0008019B: ;
    PUSH32(esp, 0x80);
    MEM8(edi + 0x7F) = LO8(ebx);
    edi = esi + 0x2AC;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000801B4u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000801B4: ;
    PUSH32(esp, 0x80);
    MEM8(edi + 0x7F) = LO8(ebx);
    edi = esi + 0x32C;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000801CDu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000801CD: ;
    MEM8(edi + 0x7F) = LO8(ebx);
    esp = esp + 0x24;
    MEM8(esi + 0x3AC) = LO8(ebx);
    POP32(esp, edi);
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x4AC) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00080140
 * Original: 0x00080140 - 0x000801E8 (168 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080140(void)
{

loc_00080140: ;
    MEM8(esi + 0xA0) = LO8(ebx);
    MEM8(esi + 0xE0) = LO8(ebx);
    MEM8(esi + 0x120) = LO8(ebx);
    MEM8(esi + 0x160) = LO8(ebx);
    MEM8(esi + 0x1A0) = LO8(ebx);
    PUSH32(esp, edi);
    MEM8(esi + 0x1E0) = LO8(ebx);
    SET_LO8(eax, MEM8(esi + 0x221));
    PUSH32(esp, 0x80);
    SET_LO8(eax, LO8(eax) & 0xF0);
    edi = esi + 0x22C;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, edi);
    MEM8(esi + 0x220) = LO8(ebx);
    MEM8(esi + 0x221) = LO8(eax);
    MEM32(esi + 0x224) = ebx;
    MEM32(esi + 0x228) = ebx;
    PUSH32(esp, 0x0008019Bu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0008019B: ;
    PUSH32(esp, 0x80);
    MEM8(edi + 0x7F) = LO8(ebx);
    edi = esi + 0x2AC;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000801B4u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000801B4: ;
    PUSH32(esp, 0x80);
    MEM8(edi + 0x7F) = LO8(ebx);
    edi = esi + 0x32C;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000801CDu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000801CD: ;
    MEM8(edi + 0x7F) = LO8(ebx);
    esp = esp + 0x24;
    MEM8(esi + 0x3AC) = LO8(ebx);
    POP32(esp, edi);
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x4AC) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000801F0
 * Original: 0x000801F0 - 0x000801F4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000801F0(void)
{

loc_000801F0: ;
    eax = ecx + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00080200
 * Original: 0x00080200 - 0x00080204 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080200(void)
{

loc_00080200: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00080210
 * Original: 0x00080210 - 0x0008021C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080210(void)
{

loc_00080210: ;
    SET_LO8(eax, MEM8(ecx + 0x220));
    SET_LO8(eax, LO8(eax) >> 3);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00080220
 * Original: 0x00080220 - 0x0008022A (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080220(void)
{

loc_00080220: ;
    SET_LO8(eax, MEM8(ecx + 0x220));
    SET_LO8(eax, LO8(eax) >> 7);
    esp += 4; return; /* ret */

}

/**
 * sub_00080230
 * Original: 0x00080230 - 0x0008024A (26 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080230(void)
{

loc_00080230: ;
    SET_LO8(eax, MEM8(ecx + 0x220));
    SET_LO8(edx, MEM8(esp + 4));
    SET_LO8(eax, LO8(eax) & 0x7F);
    SET_LO8(edx, LO8(edx) << 7);
    SET_LO8(eax, LO8(eax) | LO8(edx));
    MEM8(ecx + 0x220) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00080250
 * Original: 0x00080250 - 0x0008025C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080250(void)
{

loc_00080250: ;
    SET_LO8(eax, MEM8(ecx + 0x220));
    SET_LO8(eax, LO8(eax) >> 4);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00080260
 * Original: 0x00080260 - 0x0008027C (28 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080260(void)
{

loc_00080260: ;
    SET_LO8(eax, MEM8(esp + 4));
    SET_LO8(edx, MEM8(ecx + 0x220));
    SET_LO8(eax, LO8(eax) << 4);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    SET_LO8(eax, LO8(eax) & 0x10);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    MEM8(ecx + 0x220) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00080280
 * Original: 0x00080280 - 0x000802A9 (41 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080280(void)
{

loc_00080280: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0008028Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008028C: ;
    ecx = MEM32(esi + 0x4AC);
    PUSH32(esp, 0xE);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008029Au); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_0008029A: ;
    esp = esp + 8;
    MEM32(esi + 0x4AC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000802B0
 * Original: 0x000802B0 - 0x000802B9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000802B0(void)
{

loc_000802B0: ;
    SET_LO8(eax, MEM8(ecx + 0x221));
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000802C0
 * Original: 0x000802C0 - 0x000802DD (29 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000802C0(void)
{

loc_000802C0: ;
    SET_LO8(eax, MEM8(ecx + 0x221));
    SET_LO8(eax, LO8(eax) ^ MEM8(esp + 4));
    SET_LO8(edx, MEM8(ecx + 0x221));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    MEM8(ecx + 0x221) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000802E0
 * Original: 0x000802E0 - 0x000802E7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000802E0(void)
{

loc_000802E0: ;
    eax = MEM32(ecx + 0x224);
    esp += 4; return; /* ret */

}

/**
 * sub_000802F0
 * Original: 0x000802F0 - 0x000802FB (11 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000802F0(void)
{

loc_000802F0: ;
    SET_LO8(eax, MEM8(ecx + 0x221));
    SET_LO8(eax, LO8(eax) >> 1);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00080300
 * Original: 0x00080300 - 0x0008031B (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080300(void)
{

loc_00080300: ;
    SET_LO8(eax, MEM8(esp + 4));
    SET_LO8(edx, MEM8(ecx + 0x221));
    SET_LO8(eax, LO8(eax) << 1);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    MEM8(ecx + 0x221) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00080320
 * Original: 0x00080320 - 0x00080327 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080320(void)
{

loc_00080320: ;
    eax = MEM32(ecx + 0x228);
    esp += 4; return; /* ret */

}

/**
 * sub_00080330
 * Original: 0x00080330 - 0x0008033C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080330(void)
{

loc_00080330: ;
    SET_LO8(eax, MEM8(ecx + 0x221));
    SET_LO8(eax, LO8(eax) >> 3);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00080340
 * Original: 0x00080340 - 0x0008035C (28 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080340(void)
{

loc_00080340: ;
    SET_LO8(eax, MEM8(esp + 4));
    SET_LO8(edx, MEM8(ecx + 0x221));
    SET_LO8(eax, LO8(eax) << 3);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    SET_LO8(eax, LO8(eax) & 8);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    MEM8(ecx + 0x221) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00080360
 * Original: 0x00080360 - 0x00080372 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080360: ;
    _fa = (uint32_t)(MEM8(ecx + 0x220)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x220), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008036C; /* jne: not equal / not zero */

loc_00080369: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0008036C: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00080380
 * Original: 0x00080380 - 0x0008038C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080380(void)
{

loc_00080380: ;
    SET_LO8(eax, MEM8(ecx + 0x220));
    SET_LO8(eax, LO8(eax) >> 2);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0008038C
 * Original: 0x0008038C - 0x00080390 (4 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008038C(void)
{

loc_0008038C: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00080390
 * Original: 0x00080390 - 0x00080397 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080390(void)
{

loc_00080390: ;
    eax = ecx + 0x3AC;
    esp += 4; return; /* ret */

}

/**
 * sub_000803A0
 * Original: 0x000803A0 - 0x000803A6 (6 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000803A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000803A0: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000803B0
 * Original: 0x000803B0 - 0x000803C8 (24 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000803B0(void)
{

loc_000803B0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000803D0
 * Original: 0x000803D0 - 0x000803E8 (24 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000803D0(void)
{

loc_000803D0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x14) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x18) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000803F0
 * Original: 0x000803F0 - 0x000803F4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000803F0(void)
{

loc_000803F0: ;
    eax = ecx + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00080400
 * Original: 0x00080400 - 0x00080407 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080400(void)
{

loc_00080400: ;
    eax = ecx + 0x1E0;
    esp += 4; return; /* ret */

}

/**
 * sub_00080410
 * Original: 0x00080410 - 0x00080417 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080410(void)
{

loc_00080410: ;
    eax = ecx + 0x120;
    esp += 4; return; /* ret */

}

/**
 * sub_00080420
 * Original: 0x00080420 - 0x00080427 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080420(void)
{

loc_00080420: ;
    eax = ecx + 0x1A0;
    esp += 4; return; /* ret */

}

/**
 * sub_00080430
 * Original: 0x00080430 - 0x00080437 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080430(void)
{

loc_00080430: ;
    eax = ecx + 0x160;
    esp += 4; return; /* ret */

}

/**
 * sub_00080440
 * Original: 0x00080440 - 0x00080444 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080440(void)
{

loc_00080440: ;
    eax = ecx + 0x60;
    esp += 4; return; /* ret */

}

/**
 * sub_00080450
 * Original: 0x00080450 - 0x00080457 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080450(void)
{

loc_00080450: ;
    eax = ecx + 0xA0;
    esp += 4; return; /* ret */

}

/**
 * sub_00080460
 * Original: 0x00080460 - 0x00080469 (9 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080460: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00080470
 * Original: 0x00080470 - 0x000804A6 (54 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080470: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x00080478u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080478: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000804A0; /* je: equal / zero */

loc_0008047C: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00080484u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080484: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0008049Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008049A: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000804A0: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000804B0
 * Original: 0x000804B0 - 0x00080557 (167 bytes, 56 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000804B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000804B0: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CE4EC);
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x000804C5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000804C5: ;
    _fa = (uint32_t)(MEM8(esi + 0x220)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x220), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000804DA; /* jne: not equal / not zero */

loc_000804CE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000804D7u); RECOMP_ABI_CALL(0x00033270u, sub_00033270); /* call 0x00033270 */

loc_000804D7: ;
    esp = esp + 8;

loc_000804DA: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x000804E9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000804E9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000804F0u); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_000804F0: ;
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edi = esi + 0x1E0;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00080503u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080503: ;
    PUSH32(esp, 0x00080508u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_00080508: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00080513u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080513: ;
    SET_LO8(eax, MEM8(esi + 0x220));
    SET_LO8(eax, LO8(eax) & 0x7C);
    SET_LO8(eax, LO8(eax) | 2);
    MEM8(esi + 0x220) = LO8(eax);
    PUSH32(esp, 0x00080528u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_00080528: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0008052Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008052E: ;
    PUSH32(esp, 0x00080533u); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_00080533: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008053Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008053A: ;
    PUSH32(esp, 0x0008053Fu); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_0008053F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00080546u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080546: ;
    PUSH32(esp, 0x0008054Bu); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0008054B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00080552u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080552: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00080560
 * Original: 0x00080560 - 0x0008061F (191 bytes, 66 insns)
 * Category: game_io
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080560(void)
{

loc_00080560: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CE500);
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00080575u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080575: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C806C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00080581u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080581: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C806C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x0008058Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008058D: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x0008059Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008059C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000805A3u); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_000805A3: ;
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edi = esi + 0x1E0;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000805B6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000805B6: ;
    PUSH32(esp, 0x000805BBu); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_000805BB: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x000805C6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000805C6: ;
    SET_LO8(eax, MEM8(esi + 0x220));
    SET_LO8(ecx, MEM8(esp + 0x14));
    SET_LO8(eax, LO8(eax) & 0x7C);
    SET_LO8(ecx, LO8(ecx) << 7);
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    SET_LO8(eax, LO8(eax) | 3);
    MEM8(esi + 0x220) = LO8(eax);
    PUSH32(esp, 0x000805E4u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_000805E4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000805EAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000805EA: ;
    PUSH32(esp, 0x000805EFu); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_000805EF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000805F6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000805F6: ;
    PUSH32(esp, 0x000805FBu); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_000805FB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00080602u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080602: ;
    PUSH32(esp, 0x00080607u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_00080607: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008060Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008060E: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x0008061Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008061A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00080620
 * Original: 0x00080620 - 0x0008063E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080620: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00080628u); RECOMP_ABI_CALL(0x00080100u, sub_00080100); /* call 0x00080100 */

loc_00080628: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00080638; /* je: equal / zero */

loc_0008062F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00080635u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00080635: ;
    esp = esp + 4;

loc_00080638: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00080640
 * Original: 0x00080640 - 0x0008068F (79 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080640: ;
    xml1_recall_cancel();
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x0008064Bu); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_0008064B: ;
    PUSH32(esp, 0);
    edi = esi + 0x1E0;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008065Bu); RECOMP_ABI_CALL(0x00123610u, sub_00123610); /* call 0x00123610 */

loc_0008065B: ;
    esp = esp + 0x10;
    PUSH32(esp, 0x00080663u); RECOMP_ABI_CALL(0x000BF7C0u, sub_000BF7C0); /* call 0x000BF7C0 */

loc_00080663: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008067A; /* je: equal / zero */

loc_00080667: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x3C806C);
    esi = esi + 0x20;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00080677u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_00080677: ;
    esp = esp + 0xC;

loc_0008067A: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00080687u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_00080687: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00080690
 * Original: 0x00080690 - 0x000806A6 (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080690(void)
{

loc_00080690: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    ecx = ecx + 0x60;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000806A0u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_000806A0: ;
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000806B0
 * Original: 0x000806B0 - 0x000806C9 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000806B0(void)
{

loc_000806B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    ecx = ecx + 0xA0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000806C3u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_000806C3: ;
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000806D0
 * Original: 0x000806D0 - 0x000807E9 (281 bytes, 89 insns)
 * Category: game_io
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000806D0(void)
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

loc_000806D0: ;
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x000806D8u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_000806D8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000806DFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000806DF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000806F1; /* je: equal / zero */

loc_000806E3: ;
    PUSH32(esp, 0x000806E8u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_000806E8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000806F1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000806F1: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000807E5; /* jne: not equal / not zero */

loc_000806FD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00080703u); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_00080703: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0008070Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008070A: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00080713u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_00080713: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x402);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0008071Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008071F: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    esi = edi + 0x3AC;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00080731u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00080731: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esi + 0xFF) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_0008077F; /* jne: not equal / not zero */

loc_00080743: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x0008074Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008074D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000807E4; /* jne: not equal / not zero */

loc_00080755: ;
    PUSH32(esp, 0x0008075Au); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0008075A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x110); PUSH32(esp, 0x00080764u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080764: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000807E4; /* je: equal / zero */

loc_00080768: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() - MEMF(0x49B2E8); /* fsub dword ptr [0x49b2e8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C97D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c97d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000807E4; /* jne: not equal / not zero */

loc_0008077F: ;
    PUSH32(esp, 0x00080784u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00080784: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0008078Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008078B: ;
    PUSH32(esp, 0x00080790u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00080790: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3CE514);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x11C); PUSH32(esp, 0x0008079Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008079F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000807A5u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_000807A5: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000807DB; /* je: equal / zero */

loc_000807AC: ;
    PUSH32(esp, 0x000807B1u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000807B1: ;
    esi = MEM32(esp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x000807C0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000807C0: ;
    PUSH32(esp, 0x000807C5u); RECOMP_ABI_CALL(0x00152940u, sub_00152940); /* call 0x00152940 */

loc_000807C5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000807CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000807CD: ;
    PUSH32(esp, 0x000807D2u); RECOMP_ABI_CALL(0x001463F0u, sub_001463F0); /* call 0x001463F0 */

loc_000807D2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000807DBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000807DB: ;
    eax = MEM32(esp + 0x10);
    MEM32(0x49B2E8) = eax;

loc_000807E4: ;
    POP32(esp, esi);

loc_000807E5: ;
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000807F0
 * Original: 0x000807F0 - 0x00080B10 (800 bytes, 255 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000807F0(void)
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

loc_000807F0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00080812; /* je: equal / zero */

loc_000807FC: ;
    PUSH32(esp, 0x40);
    eax = esi + 0x120;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008080Fu); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_0008080F: ;
    esp = esp + 0xC;

loc_00080812: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00080819u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_00080819: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00080820u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080820: ;
    PUSH32(esp, 0x00080825u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_00080825: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0008082Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008082C: ;
    edi = MEM32(esp + 0x18);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3CE5CC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00080842u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080842: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3CE5B0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00080854u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080854: ;
    PUSH32(esp, 0x00080859u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_00080859: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x00080865u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080865: ;
    PUSH32(esp, 0x0008086Au); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008086A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00080871u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080871: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3CE598);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00080883u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080883: ;
    PUSH32(esp, 0x00080888u); RECOMP_ABI_CALL(0x0007AB20u, sub_0007AB20); /* call 0x0007AB20 */

loc_00080888: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0008088Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008088F: ;
    PUSH32(esp, 0x00080894u); RECOMP_ABI_CALL(0x0007AB20u, sub_0007AB20); /* call 0x0007AB20 */

loc_00080894: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0008089Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008089B: ;
    PUSH32(esp, 0x000808A0u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000808A0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000808A7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000808A7: ;
    PUSH32(esp, 0x000808ACu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000808AC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x000808B6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000808B6: ;
    PUSH32(esp, 0x000808BBu); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_000808BB: ;
    ebp = eax;
    PUSH32(esp, 0x000808C2u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000808C2: ;
    edx = MEM32(ebp);
    ebx = eax;
    eax = MEM32(ebx);
    ecx = ebp;
    MEM32(esp + 0x18) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000808D2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000808D2: ;
    eax = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(eax + 0x100); PUSH32(esp, 0x000808E2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000808E2: ;
    PUSH32(esp, 0x000808E7u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000808E7: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x000808F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000808F5: ;
    PUSH32(esp, 0x000808FAu); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_000808FA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x154); PUSH32(esp, 0x00080904u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080904: ;
    PUSH32(esp, 0x00080909u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_00080909: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x00080913u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080913: ;
    PUSH32(esp, 0x00080918u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_00080918: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x00080922u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080922: ;
    SET_LO8(ebx, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008093B; /* je: equal / zero */

loc_0008092A: ;
    PUSH32(esp, 0x0008092Fu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0008092F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x170); PUSH32(esp, 0x0008093Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008093B: ;
    PUSH32(esp, 0x00080940u); RECOMP_ABI_CALL(0x000BD520u, sub_000BD520); /* call 0x000BD520 */

loc_00080940: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00080947u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080947: ;
    PUSH32(esp, 0x0008094Cu); RECOMP_ABI_CALL(0x00060C00u, sub_00060C00); /* call 0x00060C00 */

loc_0008094C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00080953u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080953: ;
    PUSH32(esp, 0x00080958u); RECOMP_ABI_CALL(0x000F3C50u, sub_000F3C50); /* call 0x000F3C50 */

loc_00080958: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008096D; /* je: equal / zero */

loc_0008095C: ;
    PUSH32(esp, 0x00080961u); RECOMP_ABI_CALL(0x000F7060u, sub_000F7060); /* call 0x000F7060 */

loc_00080961: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00080968u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080968: ;
    PUSH32(esp, 0x0008096Du); RECOMP_ABI_CALL(0x000F3C60u, sub_000F3C60); /* call 0x000F3C60 */

loc_0008096D: ;
    PUSH32(esp, 0x00080972u); RECOMP_ABI_CALL(0x000AA4A0u, sub_000AA4A0); /* call 0x000AA4A0 */

loc_00080972: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00080979u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080979: ;
    ecx = esi;
    PUSH32(esp, 0x00080980u); RECOMP_ABI_CALL(0x00080BB0u, sub_00080BB0); /* call 0x00080BB0 */

loc_00080980: ;
    PUSH32(esp, 0x00080985u); RECOMP_ABI_CALL(0x00069540u, sub_00069540); /* call 0x00069540 */

loc_00080985: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008098Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008098C: ;
    POP32(esp, ebp);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    POP32(esp, ebx);
    ecx = esi;
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0008099C; /* je: equal / zero */

loc_00080995: ;
    PUSH32(esp, 0x0008099Au); RECOMP_ABI_CALL(0x00080B10u, sub_00080B10); /* call 0x00080B10 */

loc_0008099A: ;
    goto loc_000809A1;

loc_0008099C: ;
    PUSH32(esp, 0x000809A1u); RECOMP_ABI_CALL(0x00080C00u, sub_00080C00); /* call 0x00080C00 */

loc_000809A1: ;
    PUSH32(esp, 0x000809A6u); RECOMP_ABI_CALL(0x00152650u, sub_00152650); /* call 0x00152650 */

loc_000809A6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000809ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000809AD: ;
    PUSH32(esp, 0x000809B2u); RECOMP_ABI_CALL(0x00084210u, sub_00084210); /* call 0x00084210 */

loc_000809B2: ;
    PUSH32(esp, 0x000809B7u); RECOMP_ABI_CALL(0x000ADAD0u, sub_000ADAD0); /* call 0x000ADAD0 */

loc_000809B7: ;
    ecx = eax;
    PUSH32(esp, 0x000809BEu); RECOMP_ABI_CALL(0x000AD860u, sub_000AD860); /* call 0x000AD860 */

loc_000809BE: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3CE578);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x000809D0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000809D0: ;
    PUSH32(esp, 0x000809D5u); RECOMP_ABI_CALL(0x000BEF20u, sub_000BEF20); /* call 0x000BEF20 */

loc_000809D5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000809DCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000809DC: ;
    SET_LO8(ecx, MEM8(esi + 0x220));
    SET_LO8(ecx, LO8(ecx) & 0xF7);
    SET_LO8(eax, LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    MEM8(esi + 0x220) = LO8(ecx);
    if (TEST_Z(_fa, _fb)) goto loc_00080A24; /* je: equal / zero */

loc_000809F1: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3CE564);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00080A03u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080A03: ;
    PUSH32(esp, 0x00080A08u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00080A08: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00080A0Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080A0F: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00080A16u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080A16: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00080A1Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080A1D: ;
    MEM8(esi + 0x220) = MEM8(esi + 0x220) & 0xDF;

loc_00080A24: ;
    PUSH32(esp, 0x00080A29u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_00080A29: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x00080A30u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080A30: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3CE53C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00080A42u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080A42: ;
    PUSH32(esp, 0x00080A47u); RECOMP_ABI_CALL(0x000BF730u, sub_000BF730); /* call 0x000BF730 */

loc_00080A47: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00080A57; /* jne: not equal / not zero */

loc_00080A4B: ;
    PUSH32(esp, 0x00080A50u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_00080A50: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00080A57u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080A57: ;
    PUSH32(esp, 0x00080A5Cu); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_00080A5C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x00080A66u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080A66: ;
    PUSH32(esp, 0x00080A6Bu); RECOMP_ABI_CALL(0x000BF730u, sub_000BF730); /* call 0x000BF730 */

loc_00080A6B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00080A7D; /* je: equal / zero */

loc_00080A6F: ;
    PUSH32(esp, 0x00080A74u); RECOMP_ABI_CALL(0x000BF780u, sub_000BF780); /* call 0x000BF780 */

loc_00080A74: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00080A7D; /* jne: not equal / not zero */

loc_00080A78: ;
    PUSH32(esp, 0x00080A7Du); RECOMP_ABI_CALL(0x000C6D20u, sub_000C6D20); /* call 0x000C6D20 */

loc_00080A7D: ;
    PUSH32(esp, 0x00080A82u); RECOMP_ABI_CALL(0x000E9E50u, sub_000E9E50); /* call 0x000E9E50 */

loc_00080A82: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00080A89u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080A89: ;
    PUSH32(esp, 0x00080A8Eu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00080A8E: ;
    ecx = eax;
    PUSH32(esp, 0x00080A95u); RECOMP_ABI_CALL(0x00080B60u, sub_00080B60); /* call 0x00080B60 */

loc_00080A95: ;
    PUSH32(esp, 0x00080A9Au); RECOMP_ABI_CALL(0x000E9E50u, sub_000E9E50); /* call 0x000E9E50 */

loc_00080A9A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00080AA1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080AA1: ;
    PUSH32(esp, 0x00080AA6u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00080AA6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00080AB0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080AB0: ;
    PUSH32(esp, 0x00080AB5u); RECOMP_ABI_CALL(0x0007AB20u, sub_0007AB20); /* call 0x0007AB20 */

loc_00080AB5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00080ABCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080ABC: ;
    PUSH32(esp, 0x00080AC1u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_00080AC1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xE4); PUSH32(esp, 0x00080ACBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080ACB: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3CE51C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00080ADDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080ADD: ;
    PUSH32(esp, 0x00080AE2u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00080AE2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00080AE9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080AE9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00080AF2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080AF2: ;
    PUSH32(esp, 0x00080AF7u); RECOMP_ABI_CALL(0x00122CB0u, sub_00122CB0); /* call 0x00122CB0 */

loc_00080AF7: ;
    edx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 8) = 0;
    MEM32(esp + 4) = 0xC;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 8)); return; /* indirect tail jmp */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00080B10
 * Original: 0x00080B10 - 0x00080B57 (71 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080B10: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CE5DC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00080B29u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080B29: ;
    _fa = (uint32_t)(MEM8(esi + 0x220)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x220), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00080B3E; /* jne: not equal / not zero */

loc_00080B32: ;
    PUSH32(esp, 0x00080B37u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00080B37: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00080B3Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080B3E: ;
    ecx = MEM32(esi + 0x4AC);
    SET_LO8(eax, MEM8(ecx + 0x19684));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_00080B54; /* jne: not equal / not zero */

loc_00080B4F: ;
    PUSH32(esp, 0x00080B54u); RECOMP_ABI_CALL(0x0006CD10u, sub_0006CD10); /* call 0x0006CD10 */

loc_00080B54: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00080B60
 * Original: 0x00080B60 - 0x00080BA3 (67 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080B60: ;
    edx = ecx;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00080B71; /* jne: not equal / not zero */

loc_00080B69: ;
    MEM32(edx) = 0;
    goto loc_00080B74;

loc_00080B71: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx) = eax;

loc_00080B74: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = edx + 4;
    eax = 0; /* xor self */
    edi = esi;
    ecx = 0x1000;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    MEM32(esi) = 1;
    MEM8(edx + 0x4008) = LO8(eax);
    MEM8(edx + 0x4009) = LO8(eax);
    MEM32(edx + 0x4004) = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00080BB0
 * Original: 0x00080BB0 - 0x00080BF2 (66 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080BB0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x00080BB8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080BB8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00080BF0; /* je: equal / zero */

loc_00080BBC: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx);
    esi = esi + 0x1C;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00080BC7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080BC7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00080BE1; /* je: equal / zero */

loc_00080BCB: ;
    PUSH32(esp, 0x00080BD0u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00080BD0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00080BD7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080BD7: ;
    ecx = MEM32(eax);
    edx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00080BE1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080BE1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00080BE7u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_00080BE7: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_00080BF0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00080C00
 * Original: 0x00080C00 - 0x00080C7C (124 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080C00: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CE5F0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00080C1Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080C1A: ;
    SET_LO8(eax, MEM8(esi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    edi = esi + 0x20;
    if (TEST_Z(_fa, _fb)) goto loc_00080C77; /* je: equal / zero */

loc_00080C24: ;
    edx = MEM32(esi + 0x4AC);
    SET_LO8(eax, MEM8(edx + 0x19684));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00080C77; /* jne: not equal / not zero */

loc_00080C34: ;
    PUSH32(esp, 0x00080C39u); RECOMP_ABI_CALL(0x000BF710u, sub_000BF710); /* call 0x000BF710 */

loc_00080C39: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00080C77; /* jne: not equal / not zero */

loc_00080C3D: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x00080C47u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080C47: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00080C67; /* jne: not equal / not zero */

loc_00080C4B: ;
    esp = esp - 0x40;
    eax = esp;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00080C59u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_00080C59: ;
    ecx = MEM32(esi + 0x4AC);
    esp = esp + 0xC;
    PUSH32(esp, 0x00080C67u); RECOMP_ABI_CALL(0x0006CDB0u, sub_0006CDB0); /* call 0x0006CDB0 */

loc_00080C67: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00080C74u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_00080C74: ;
    esp = esp + 0xC;

loc_00080C77: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00080C80
 * Original: 0x00080C80 - 0x00080CBA (58 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080C80: ;
    SET_LO8(ecx, MEM8(0x49B7A0));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00080CB4; /* jne: not equal / not zero */

loc_00080C8F: ;
    edx = MEM32(0x49B7A0);
    edx = edx | eax;
    ecx = 0x49B2F0;
    MEM32(0x49B7A0) = edx;
    PUSH32(esp, 0x00080CA7u); RECOMP_ABI_CALL(0x00080110u, sub_00080110); /* call 0x00080110 */

loc_00080CA7: ;
    PUSH32(esp, 0x359F00);
    PUSH32(esp, 0x00080CB1u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00080CB1: ;
    esp = esp + 4;

loc_00080CB4: ;
    eax = 0x49B2F0;
    esp += 4; return; /* ret */

}

/**
 * sub_00080CC0
 * Original: 0x00080CC0 - 0x00080CFC (60 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080CC0: ;
    PUSH32(esp, 0x00080CC5u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_00080CC5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00080CCCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080CCC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00080CFB; /* je: equal / zero */

loc_00080CD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(edx, MEM8(esi + 0x10C));
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    SET_LO8(edx, LO8(edx) | 1);
    PUSH32(esp, esi);
    MEM8(esi + 0x10C) = LO8(edx);
    PUSH32(esp, 0x00080CF0u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00080CF0: ;
    esp = esp + 0xC;
    MEM8(esi + 0xFF) = 0;
    POP32(esp, esi);

loc_00080CFB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00080D00
 * Original: 0x00080D00 - 0x00080DE3 (227 bytes, 75 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080D00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00080D00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x00080D0Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080D0C: ;
    esp = esp - 0x40;
    ecx = esp;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00080D1Au); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_00080D1A: ;
    ecx = MEM32(esi + 0x4AC);
    esp = esp + 0xC;
    PUSH32(esp, 0x00080D28u); RECOMP_ABI_CALL(0x0006CDB0u, sub_0006CDB0); /* call 0x0006CDB0 */

loc_00080D28: ;
    PUSH32(esp, 0x00080D2Du); RECOMP_ABI_CALL(0x00199C70u, sub_00199C70); /* call 0x00199C70 */

loc_00080D2D: ;
    edi = MEM32(esp + 0x18);
    PUSH32(esp, 0x3CE628);
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0x00080D3Eu); RECOMP_ABI_CALL(0x0006E880u, sub_0006E880); /* call 0x0006E880 */

loc_00080D3E: ;
    esp = esp + 8;
    PUSH32(esp, 0x5808);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00080D4Eu); RECOMP_ABI_CALL(0x0006E7E0u, sub_0006E7E0); /* call 0x0006E7E0 */

loc_00080D4E: ;
    PUSH32(esp, 0x3CE618);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00080D59u); RECOMP_ABI_CALL(0x0006E880u, sub_0006E880); /* call 0x0006E880 */

loc_00080D59: ;
    ecx = MEM32(esi + 0x4AC);
    edx = MEM32(ecx + 0x19428);
    esp = esp + 8;
    PUSH32(esp, 4);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x00080D7Au); RECOMP_ABI_CALL(0x0006E7E0u, sub_0006E7E0); /* call 0x0006E7E0 */

loc_00080D7A: ;
    eax = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00080DB4; /* jle: less or equal (signed <=) */

loc_00080D84: ;
    ebp = 0; /* xor self */
    goto loc_00080D90;

    /* nop */
    /* nop */

loc_00080D90: ;
    ecx = MEM32(esi + 0x4AC);
    ecx = ecx + ebp;
    PUSH32(esp, 0x39BC);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00080DA5u); RECOMP_ABI_CALL(0x0006E7E0u, sub_0006E7E0); /* call 0x0006E7E0 */

loc_00080DA5: ;
    eax = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 0x39BC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00080D90; /* jl: less (signed <) */

loc_00080DB4: ;
    PUSH32(esp, 0x3CE600);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00080DBFu); RECOMP_ABI_CALL(0x0006E880u, sub_0006E880); /* call 0x0006E880 */

loc_00080DBF: ;
    edx = MEM32(esi + 0x4AC);
    esp = esp + 8;
    PUSH32(esp, 0x184);
    edx = edx + 0x19500;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00080DDBu); RECOMP_ABI_CALL(0x0006E7E0u, sub_0006E7E0); /* call 0x0006E7E0 */

loc_00080DDB: ;
    xml1_leader_zone_save(edi, MEM32(esi + 0x4AC));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00080DF0
 * Original: 0x00080DF0 - 0x0008224C (5212 bytes, 1471 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080DF0(void)
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

loc_00080DF0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F515);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    eax = 0xC264;
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, 0x00080E0Fu); RECOMP_ABI_CALL(0x00341D40u, sub_00341D40); /* call 0x00341D40 */

loc_00080E0F: ;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    MEM32(esp + 0xC268) = eax;
    _fa = (uint32_t)(MEM8(ebp + 0x220)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x220), 2 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00082223; /* je: equal / zero */

loc_00080E2E: ;
    PUSH32(esp, 0x00080E33u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00080E33: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00080E3Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080E3A: ;
    ecx = MEM32(eax);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00081580; /* je: equal / zero */

loc_00080E46: ;
    SET_LO8(eax, MEM8(esp + 0xC284));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esp + 0x3C) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_00080E6F; /* jne: not equal / not zero */

loc_00080E56: ;
    eax = ebp + 0x1E0;
    PUSH32(esp, eax);
    ecx = ebp + 0x120;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00080E6Bu); RECOMP_ABI_CALL(0x000824C0u, sub_000824C0); /* call 0x000824C0 */

loc_00080E6B: ;
    MEM8(esp + 0x3C) = LO8(eax);

loc_00080E6F: ;
    eax = MEM32(esp + 0x3C);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00080E7Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080E7D: ;
    PUSH32(esp, 0x00080E82u); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_00080E82: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00080E89u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080E89: ;
    PUSH32(esp, 0x00080E8Eu); RECOMP_ABI_CALL(0x000AD680u, sub_000AD680); /* call 0x000AD680 */

loc_00080E8E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00080E95u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080E95: ;
    PUSH32(esp, 0x00080E9Au); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00080E9A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF0); PUSH32(esp, 0x00080EA4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080EA4: ;
    PUSH32(esp, 0x00080EA9u); RECOMP_ABI_CALL(0x00060C00u, sub_00060C00); /* call 0x00060C00 */

loc_00080EA9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00080EB0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080EB0: ;
    PUSH32(esp, 0x00080EB5u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_00080EB5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00080EBCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080EBC: ;
    PUSH32(esp, 0x00080EC1u); RECOMP_ABI_CALL(0x00152940u, sub_00152940); /* call 0x00152940 */

loc_00080EC1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00080EC8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080EC8: ;
    PUSH32(esp, 0x00080ECDu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00080ECD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00080ED4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080ED4: ;
    PUSH32(esp, 0x00080ED9u); RECOMP_ABI_CALL(0x001463F0u, sub_001463F0); /* call 0x001463F0 */

loc_00080ED9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00080EE0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080EE0: ;
    PUSH32(esp, 0x00080EE5u); RECOMP_ABI_CALL(0x00122CB0u, sub_00122CB0); /* call 0x00122CB0 */

loc_00080EE5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00080EEFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080EEF: ;
    PUSH32(esp, 0x00080EF4u); RECOMP_ABI_CALL(0x0011EC10u, sub_0011EC10); /* call 0x0011EC10 */

loc_00080EF4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00080EFDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080EFD: ;
    PUSH32(esp, 0x00080F02u); RECOMP_ABI_CALL(0x0011EC10u, sub_0011EC10); /* call 0x0011EC10 */

loc_00080F02: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00080F0Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080F0B: ;
    PUSH32(esp, 0x00080F10u); RECOMP_ABI_CALL(0x0011EC10u, sub_0011EC10); /* call 0x0011EC10 */

loc_00080F10: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00080F19u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080F19: ;
    PUSH32(esp, 0x00080F1Eu); RECOMP_ABI_CALL(0x000AD680u, sub_000AD680); /* call 0x000AD680 */

loc_00080F1E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00080F25u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080F25: ;
    PUSH32(esp, 0x00080F2Au); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00080F2A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00080F31u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080F31: ;
    PUSH32(esp, 0x00080F36u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_00080F36: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00080F3Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080F3D: ;
    PUSH32(esp, 0x00080F42u); RECOMP_ABI_CALL(0x00060C00u, sub_00060C00); /* call 0x00060C00 */

loc_00080F42: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00080F49u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080F49: ;
    PUSH32(esp, 0x00080F4Eu); RECOMP_ABI_CALL(0x00152940u, sub_00152940); /* call 0x00152940 */

loc_00080F4E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00080F55u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080F55: ;
    PUSH32(esp, 0x00080F5Au); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00080F5A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00080F61u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080F61: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x45800000);
    PUSH32(esp, 0x42800000);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00080F72u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080F72: ;
    ecx = ebp;
    PUSH32(esp, 0x00080F79u); RECOMP_ABI_CALL(0x00082FD0u, sub_00082FD0); /* call 0x00082FD0 */

loc_00080F79: ;
    PUSH32(esp, 0x40);
    edi = ebp + 0x1A0;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00080F8Cu); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_00080F8C: ;
    edx = MEM32(ebp);
    esp = esp + 0xC;
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00080F9Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080F9A: ;
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00081183; /* jne: not equal / not zero */

loc_00080FA5: ;
    PUSH32(esp, 0x00080FAAu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00080FAA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C806C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14C); PUSH32(esp, 0x00080FB9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00080FB9: ;
    ecx = esp + 0xBF2C;
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, 0x00080FC7u); RECOMP_ABI_CALL(0x00127350u, sub_00127350); /* call 0x00127350 */

loc_00080FC7: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CE9D8);
    ecx = esp + 0x28;
    MEM32(esp + 0xC284) = esi;
    PUSH32(esp, 0x00080FDEu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00080FDE: ;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0xBF38;
    MEM8(esp + 0xC288) = 1;
    PUSH32(esp, 0x00080FFBu); RECOMP_ABI_CALL(0x00127510u, sub_00127510); /* call 0x00127510 */

loc_00080FFB: ;
    ecx = esp + 0x20;
    MEM8(esp + 0x1F) = LO8(eax);
    MEM8(esp + 0xC27C) = LO8(ebx);
    PUSH32(esp, 0x0008100Fu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0008100F: ;
    SET_LO8(eax, MEM8(esp + 0x1F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00081135; /* je: equal / zero */

loc_0008101B: ;
    PUSH32(esp, 0x3CE9CC);
    ecx = esp + 0xBF30;
    PUSH32(esp, ecx);
    ecx = esp + 0x74;
    PUSH32(esp, 0x00081031u); RECOMP_ABI_CALL(0x00126650u, sub_00126650); /* call 0x00126650 */

loc_00081031: ;
    xml1_extraction_capture(MEM32(esp+0x6C));
    ecx = esp + 0x6C;
    PUSH32(esp, 0x0008103Au); RECOMP_ABI_CALL(0x00125C40u, sub_00125C40); /* call 0x00125C40 */

loc_0008103A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00081135; /* je: equal / zero */

loc_00081042: ;
    PUSH32(esp, 0x3CE9C4);
    edx = esp + 0x70;
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00081055u); RECOMP_ABI_CALL(0x00126D00u, sub_00126D00); /* call 0x00126D00 */

loc_00081055: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x0008105Eu); RECOMP_ABI_CALL(0x00125C40u, sub_00125C40); /* call 0x00125C40 */

loc_0008105E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00081135; /* je: equal / zero */

loc_00081066: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00081135; /* jne: not equal / not zero */

loc_0008106E: ;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x3C8690);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00081081u); RECOMP_ABI_CALL(0x001266F0u, sub_001266F0); /* call 0x001266F0 */

loc_00081081: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    eax = esp + 0xBF78;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00081094u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00081094: ;
    PUSH32(esp, esi);
    MEM8(esp + 0xBFFF) = LO8(ebx);
    PUSH32(esp, 0x000810A1u); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_000810A1: ;
    PUSH32(esp, esi);
    ecx = esp + 0xBF84;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000810B0u); RECOMP_ABI_CALL(0x00123610u, sub_00123610); /* call 0x00123610 */

loc_000810B0: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    edx = esp + 0xBF94;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000810C3u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_000810C3: ;
    eax = ebp + 0x1E0;
    PUSH32(esp, eax);
    ecx = esp + 0xBF9C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000810D7u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000810D7: ;
    esp = esp + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008111A; /* jne: not equal / not zero */

loc_000810DE: ;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x3CE514);
    ecx = esp + 0x28;
    PUSH32(esp, 0x000810F1u); RECOMP_ABI_CALL(0x001266F0u, sub_001266F0); /* call 0x001266F0 */

loc_000810F1: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x000810F9u); RECOMP_ABI_CALL(0x000826F0u, sub_000826F0); /* call 0x000826F0 */

loc_000810F9: ;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x3CE9B8);
    ecx = esp + 0x28;
    PUSH32(esp, 0x0008110Cu); RECOMP_ABI_CALL(0x001266F0u, sub_001266F0); /* call 0x001266F0 */

loc_0008110C: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00081115u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_00081115: ;
    esp = esp + 0xC;
    SET_LO8(ebx, 1);

loc_0008111A: ;
    PUSH32(esp, esi);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00081124u); RECOMP_ABI_CALL(0x00126DB0u, sub_00126DB0); /* call 0x00126DB0 */

loc_00081124: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x0008112Du); RECOMP_ABI_CALL(0x00125C40u, sub_00125C40); /* call 0x00125C40 */

loc_0008112D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00081066; /* jne: not equal / not zero */

loc_00081135: ;
    ecx = esp + 0xBF2C;
    MEM32(esp + 0xC27C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0008114Cu); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_0008114C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008115C; /* jne: not equal / not zero */

loc_00081150: ;
    PUSH32(esp, 0x3C806C);
    ecx = ebp;
    PUSH32(esp, 0x0008115Cu); RECOMP_ABI_CALL(0x000826F0u, sub_000826F0); /* call 0x000826F0 */

loc_0008115C: ;
    PUSH32(esp, 0x00081161u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_00081161: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3CE9A4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0008116Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008116D: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3CE98C);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00081180u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081180: ;
    ebx = ebx | 0xFFFFFFFFu;

loc_00081183: ;
    edi = ebp + 0x1E0;
    PUSH32(esp, edi);
    ecx = ebp;
    MEM8(0x48584E) = 0;
    MEM8(0x48584F) = 0;
    PUSH32(esp, 0x0008119Fu); RECOMP_ABI_CALL(0x00082250u, sub_00082250); /* call 0x00082250 */

loc_0008119F: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    ecx = esp + 0xC078;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000811B2u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_000811B2: ;
    edx = MEM32(ebp + 0x4AC);
    SET_LO8(eax, MEM8(edx + 0x19684));
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000811DE; /* je: equal / zero */

loc_000811C5: ;
    PUSH32(esp, 0x000811CAu); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_000811CA: ;
    ecx = MEM32(ebp + 0x4AC);
    edx = MEM32(eax);
    ecx = ecx + 0x19500;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000811DEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000811DE: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3CE974);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x000811F0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000811F0: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x000811F8u); RECOMP_ABI_CALL(0x00082450u, sub_00082450); /* call 0x00082450 */

loc_000811F8: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x00081200u); RECOMP_ABI_CALL(0x000825A0u, sub_000825A0); /* call 0x000825A0 */

loc_00081200: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3CE958);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00081212u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081212: ;
    ecx = esp + 0xBF2C;
    PUSH32(esp, 0x0008121Eu); RECOMP_ABI_CALL(0x00127350u, sub_00127350); /* call 0x00127350 */

loc_0008121E: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CE940);
    ecx = esp + 0x4C;
    MEM32(esp + 0xC284) = 2;
    PUSH32(esp, 0x00081239u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00081239: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    ecx = esp + 0xBF38;
    MEM8(esp + 0xC288) = 3;
    PUSH32(esp, 0x00081255u); RECOMP_ABI_CALL(0x00127510u, sub_00127510); /* call 0x00127510 */

loc_00081255: ;
    ecx = esp + 0x44;
    MEM8(esp + 0xC27C) = 2;
    PUSH32(esp, 0x00081266u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00081266: ;
    PUSH32(esp, 0x0008126Bu); RECOMP_ABI_CALL(0x00069540u, sub_00069540); /* call 0x00069540 */

loc_0008126B: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEM32(esp + 0x40) = esp;
    ecx = esp;
    PUSH32(esp, 0x3C9498);
    edi = eax;
    PUSH32(esp, 0x00081280u); RECOMP_ABI_CALL(0x00027EB0u, sub_00027EB0); /* call 0x00027EB0 */

loc_00081280: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    eax = esp + 0xBF3C;
    ecx = eax;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00081294u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081294: ;
    ecx = esp + 0xBF2C;
    MEM32(esp + 0xC27C) = ebx;
    PUSH32(esp, 0x000812A7u); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_000812A7: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3CE924);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x000812B9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000812B9: ;
    ecx = esp + 0xBF2C;
    PUSH32(esp, 0x000812C5u); RECOMP_ABI_CALL(0x00127350u, sub_00127350); /* call 0x00127350 */

loc_000812C5: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CE910);
    ecx = esp + 0x4C;
    MEM32(esp + 0xC284) = 4;
    PUSH32(esp, 0x000812E0u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000812E0: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = esp + 0xBF38;
    MEM8(esp + 0xC288) = 5;
    PUSH32(esp, 0x000812FCu); RECOMP_ABI_CALL(0x00127510u, sub_00127510); /* call 0x00127510 */

loc_000812FC: ;
    MEM8(esp + 0xC27C) = 4;
    ecx = esp + 0x44;
    PUSH32(esp, 0x0008130Du); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0008130D: ;
    PUSH32(esp, 0x00081312u); RECOMP_ABI_CALL(0x00069540u, sub_00069540); /* call 0x00069540 */

loc_00081312: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEM32(esp + 0x40) = esp;
    ecx = esp;
    PUSH32(esp, 0x3CE144);
    edi = eax;
    PUSH32(esp, 0x00081327u); RECOMP_ABI_CALL(0x00027EB0u, sub_00027EB0); /* call 0x00027EB0 */

loc_00081327: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    eax = esp + 0xBF3C;
    ecx = eax;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0008133Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008133B: ;
    ecx = esp + 0xBF2C;
    MEM32(esp + 0xC27C) = ebx;
    PUSH32(esp, 0x0008134Eu); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_0008134E: ;
    PUSH32(esp, 0x2E6B0);
    PUSH32(esp, 0x32C);
    PUSH32(esp, 0xC);
    edx = esp + 0x7308;
    PUSH32(esp, edx);
    MEM32(esp + 0xAC) = esi;
    MEM32(esp + 0x40) = esi;
    MEM8(esp + 0xC180) = 0;
    PUSH32(esp, 0x0008137Au); RECOMP_ABI_CALL(0x00011100u, sub_00011100); /* call 0x00011100 */

loc_0008137A: ;
    MEM32(esp + 0x9910) = esi;
    PUSH32(esp, 0x2E6B0);
    PUSH32(esp, 0x32C);
    PUSH32(esp, 0xC);
    eax = esp + 0x26D8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC28C) = 6;
    PUSH32(esp, 0x000813A5u); RECOMP_ABI_CALL(0x00011100u, sub_00011100); /* call 0x00011100 */

loc_000813A5: ;
    MEM32(esp + 0x4CE0) = esi;
    PUSH32(esp, 0x2E6B0);
    PUSH32(esp, 0x32C);
    PUSH32(esp, 0xC);
    ecx = esp + 0x9920;
    PUSH32(esp, ecx);
    MEM8(esp + 0xC28C) = 7;
    PUSH32(esp, 0x000813CDu); RECOMP_ABI_CALL(0x00011100u, sub_00011100); /* call 0x00011100 */

loc_000813CD: ;
    MEM32(esp + 0xBF28) = esi;
    PUSH32(esp, 0x2E6B0);
    PUSH32(esp, 0x32C);
    PUSH32(esp, 0xC);
    edx = esp + 0x4CF0;
    PUSH32(esp, edx);
    MEM8(esp + 0xC28C) = 8;
    PUSH32(esp, 0x000813F5u); RECOMP_ABI_CALL(0x00011100u, sub_00011100); /* call 0x00011100 */

loc_000813F5: ;
    MEM32(esp + 0x72F8) = esi;
    PUSH32(esp, 0x27080);
    PUSH32(esp, 0x32C);
    PUSH32(esp, 4);
    eax = esp + 0xB0;
    PUSH32(esp, eax);
    MEM8(esp + 0xC28C) = 9;
    PUSH32(esp, 0x0008141Du); RECOMP_ABI_CALL(0x00011100u, sub_00011100); /* call 0x00011100 */

loc_0008141D: ;
    MEM32(esp + 0xD58) = esi;
    PUSH32(esp, 0x27080);
    PUSH32(esp, 0x32C);
    PUSH32(esp, 4);
    ecx = esp + 0x1A20;
    PUSH32(esp, ecx);
    MEM8(esp + 0xC28C) = 0xA;
    PUSH32(esp, 0x00081445u); RECOMP_ABI_CALL(0x00011100u, sub_00011100); /* call 0x00011100 */

loc_00081445: ;
    MEM32(esp + 0x26C8) = esi;
    PUSH32(esp, 0x27080);
    PUSH32(esp, 0x32C);
    MEM8(esp + 0xC284) = 0xB;
    PUSH32(esp, 4);
    edx = esp + 0xD68;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008146Du); RECOMP_ABI_CALL(0x00011100u, sub_00011100); /* call 0x00011100 */

loc_0008146D: ;
    MEM32(esp + 0x1A10) = esi;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3CE8FC);
    ecx = ebp;
    MEM8(esp + 0xC288) = 0xC;
    MEM32(esp + 0x4C) = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00081492u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081492: ;
    PUSH32(esp, 0x00081497u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00081497: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0008149Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008149E: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000814A5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000814A5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0xC074;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000814B5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000814B5: ;
    SET_LO8(ecx, MEM8(ebp + 0x220));
    SET_LO8(eax, LO8(eax) << 5);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 0x20);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(eax, LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    MEM8(ebp + 0x220) = LO8(ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_00081587; /* jne: not equal / not zero */

loc_000814D4: ;
    edx = MEM32(ebp);
    eax = ebp + 0x60;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x000814E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000814E3: ;
    SET_LO8(ecx, MEM8(ebp + 0x220));
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    SET_LO8(ecx, LO8(ecx) | 2);
    MEM8(ebp + 0x220) = LO8(ecx);
    ecx = esp + 0xD5C;
    MEM8(esp + 0xC27C) = 0xB;
    PUSH32(esp, 0x00081509u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00081509: ;
    ecx = esp + 0x1A14;
    MEM8(esp + 0xC27C) = 0xA;
    PUSH32(esp, 0x0008151Du); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0008151D: ;
    ecx = esp + 0xA4;
    MEM8(esp + 0xC27C) = 9;
    PUSH32(esp, 0x00081531u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00081531: ;
    ecx = esp + 0x4CE4;
    MEM8(esp + 0xC27C) = 8;
    PUSH32(esp, 0x00081545u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00081545: ;
    ecx = esp + 0x9914;
    MEM8(esp + 0xC27C) = 7;
    PUSH32(esp, 0x00081559u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00081559: ;
    ecx = esp + 0x26CC;
    MEM8(esp + 0xC27C) = 6;
    PUSH32(esp, 0x0008156Du); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0008156D: ;
    ecx = esp + 0x72FC;
    MEM32(esp + 0xC27C) = ebx;
    PUSH32(esp, 0x00081580u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00081580: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_00082225;

loc_00081587: ;
    eax = esp + 0xC070;
    edx = eax + 1;

loc_00081591: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00081591; /* jne: not equal / not zero */

loc_00081598: ;
    eax = eax - edx;
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000815C8; /* jge: greater or equal (signed >=) */

loc_000815A4: ;
    edi = esp + 0xC070;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_000815B0: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000815B0; /* jne: not equal / not zero */

loc_000815B8: ;
    edx = MEM32(0x3C8838);
    SET_LO8(eax, MEM8(0x3C883C));
    MEM32(edi) = edx;
    MEM8(edi + 4) = LO8(eax);

loc_000815C8: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3CE8E4);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x000815DAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000815DA: ;
    ecx = esp + 0xBF2C;
    PUSH32(esp, 0x000815E6u); RECOMP_ABI_CALL(0x00127350u, sub_00127350); /* call 0x00127350 */

loc_000815E6: ;
    PUSH32(esp, 2);
    eax = esp + 0xC074;
    SET_LO8(ebx, 0xD);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    MEM8(esp + 0xC284) = LO8(ebx);
    PUSH32(esp, 0x00081602u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00081602: ;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = esp + 0xBF38;
    MEM8(esp + 0xC288) = 0xE;
    PUSH32(esp, 0x0008161Fu); RECOMP_ABI_CALL(0x00127510u, sub_00127510); /* call 0x00127510 */

loc_0008161F: ;
    ecx = esp + 0x20;
    MEM8(esp + 0xC27C) = LO8(ebx);
    PUSH32(esp, 0x0008162Fu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0008162F: ;
    PUSH32(esp, 0x00081634u); RECOMP_ABI_CALL(0x00069540u, sub_00069540); /* call 0x00069540 */

loc_00081634: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEM32(esp + 0x40) = esp;
    ecx = esp;
    PUSH32(esp, 0x3CE9C4);
    edi = eax;
    PUSH32(esp, 0x00081649u); RECOMP_ABI_CALL(0x00027EB0u, sub_00027EB0); /* call 0x00027EB0 */

loc_00081649: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    eax = esp + 0xBF3C;
    ecx = eax;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0008165Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008165D: ;
    PUSH32(esp, 0x00081662u); RECOMP_ABI_CALL(0x00069540u, sub_00069540); /* call 0x00069540 */

loc_00081662: ;
    edx = MEM32(eax);
    ecx = esp + 0xD5C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x1A18;
    PUSH32(esp, ecx);
    ecx = esp + 0xAC;
    PUSH32(esp, ecx);
    ecx = esp + 0x4CF0;
    PUSH32(esp, ecx);
    ecx = esp + 0x9924;
    PUSH32(esp, ecx);
    ecx = esp + 0x26E0;
    PUSH32(esp, ecx);
    ecx = esp + 0x7314;
    PUSH32(esp, ecx);
    ecx = esp + 0xBF48;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000816AAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000816AA: ;
    PUSH32(esp, 0x000816AFu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000816AF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000816B6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000816B6: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000816BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000816BD: ;
    edx = MEM32(eax);
    ecx = esp + 0x60;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000816CEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000816CE: ;
    PUSH32(esp, 0x000816D3u); RECOMP_ABI_CALL(0x00069540u, sub_00069540); /* call 0x00069540 */

loc_000816D3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3CE8DC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000816DFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000816DF: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00081BA2; /* je: equal / zero */

loc_000816E9: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3CE8B8);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x000816FBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000816FB: ;
    edx = MEM32(ebx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CE8AC);
    ecx = ebx;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00081726u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081726: ;
    edx = MEM32(ebx);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CE8A0);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00081741u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081741: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0008175C; /* jnp: not parity */

loc_00081754: ;
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x5C) = ecx;

loc_0008175C: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00081777; /* jnp: not parity */

loc_0008176F: ;
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0x68) = edx;

loc_00081777: ;
    eax = MEM32(ebx);
    ecx = esp + 0x74;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x74;
    PUSH32(esp, edx);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CE894);
    ecx = ebx;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x38) = 0xC4A28000u;
    MEM32(esp + 0x7C) = 0x42F00000;
    MEM32(esp + 0x80) = 0x42F00000;
    MEM32(esp + 0x84) = 0x42F00000;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x000817C8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000817C8: ;
    edx = MEM32(ebx);
    eax = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C862C);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000817E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000817E3: ;
    edx = MEM32(ebp);
    eax = esp + 0x6C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000817F0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000817F0: ;
    edx = MEM32(ebp);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000817FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000817FD: ;
    edx = MEM32(ebx);
    edi = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3CE88C);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008180Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008180D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x78); PUSH32(esp, 0x00081818u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081818: ;
    edx = MEM32(ebx);
    edi = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3CE884);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00081828u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081828: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x84); PUSH32(esp, 0x00081836u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081836: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3CE878);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00081843u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081843: ;
    SET_LO8(ecx, MEM8(ebp + 0x221));
    edi = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) << 2);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 4);
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM8(ebp + 0x221) = LO8(edx);
    eax = MEM32(ebx);
    PUSH32(esp, 0x3CE870);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0008186Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008186F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edi + 0x90); PUSH32(esp, 0x0008187Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008187D: ;
    edx = MEM32(ebx);
    eax = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CB6D8);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0008188Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008188E: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3CE864);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0008189Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008189B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esp + 0xA0) = eax;
    eax = MEM32(ebx);
    PUSH32(esp, 0x3CE858);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000818AFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000818AF: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    PUSH32(esp, 0x80);
    eax = ebp + 0x22C;
    if (CMP_EQ(_fa, _fb)) goto loc_000818F4; /* je: equal / zero */

loc_000818C0: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000818C7u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_000818C7: ;
    edx = MEM32(ebp);
    esp = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3CE83C);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x000818DCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000818DC: ;
    PUSH32(esp, 0x000818E1u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_000818E1: ;
    edx = MEM32(eax);
    ecx = ebp + 0x22C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x000818F2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000818F2: ;
    goto loc_00081902;

loc_000818F4: ;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000818FFu); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_000818FF: ;
    esp = esp + 0xC;

loc_00081902: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3CE830);
    ecx = ebx;
    MEM32(esp + 0x38) = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00081913u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081913: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    PUSH32(esp, 0x80);
    if (CMP_EQ(_fa, _fb)) goto loc_00081950; /* je: equal / zero */

loc_0008191C: ;
    PUSH32(esp, eax);
    edi = ebp + 0x2AC;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00081929u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_00081929: ;
    edx = MEM32(ebp);
    esp = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3CE814);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0008193Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008193E: ;
    PUSH32(esp, 0x00081943u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_00081943: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0008194Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008194E: ;
    goto loc_00081964;

loc_00081950: ;
    eax = ebp + 0x2AC;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00081961u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_00081961: ;
    esp = esp + 0xC;

loc_00081964: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3CE808);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00081971u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081971: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    PUSH32(esp, 0x80);
    if (CMP_EQ(_fa, _fb)) goto loc_000819AE; /* je: equal / zero */

loc_0008197A: ;
    PUSH32(esp, eax);
    edi = ebp + 0x32C;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00081987u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_00081987: ;
    edx = MEM32(ebp);
    esp = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3CE7EC);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0008199Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008199C: ;
    PUSH32(esp, 0x000819A1u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_000819A1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x000819ACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000819AC: ;
    goto loc_000819C2;

loc_000819AE: ;
    eax = ebp + 0x32C;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000819BFu); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_000819BF: ;
    esp = esp + 0xC;

loc_000819C2: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3CE7E4);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000819CFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000819CF: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00081A8D; /* je: equal / zero */

loc_000819D9: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3CE7D0);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x000819EBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000819EB: ;
    PUSH32(esp, 0x100);
    eax = esp + 0xBF74;
    PUSH32(esp, 0x3CE7C8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00081A02u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_00081A02: ;
    ecx = esp + 0xBF7C;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00081A10u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_00081A10: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00081A85; /* jne: not equal / not zero */

loc_00081A17: ;
    eax = esp + 0xBF70;
    edx = eax + 1;

loc_00081A21: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00081A21; /* jne: not equal / not zero */

loc_00081A28: ;
    eax = eax - edx;
    edx = eax;
    eax = edi;
    ecx = eax + 1;
    MEM32(esp + 0x10) = ecx;

loc_00081A35: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00081A35; /* jne: not equal / not zero */

loc_00081A3C: ;
    eax = eax - MEM32(esp + 0x10);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00081A7B; /* jge: greater or equal (signed >=) */

loc_00081A49: ;
    eax = edi;
    edx = edi;
    /* nop */

loc_00081A50: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00081A50; /* jne: not equal / not zero */

loc_00081A57: ;
    edi = esp + 0xBF70;
    eax = eax - edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00081A61: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00081A61; /* jne: not equal / not zero */

loc_00081A69: ;
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
    esi = 0; /* xor self */

loc_00081A7B: ;
    edx = esp + 0xBF70;
    PUSH32(esp, edx);
    goto loc_00081A86;

loc_00081A85: ;
    PUSH32(esp, edi);

loc_00081A86: ;
    ecx = ebp;
    PUSH32(esp, 0x00081A8Du); RECOMP_ABI_CALL(0x00082330u, sub_00082330); /* call 0x00082330 */

loc_00081A8D: ;
    eax = MEM32(ebx);
    ecx = esp + 0x88;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x88;
    PUSH32(esp, edx);
    ecx = esp + 0x88;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CE7BC);
    ecx = ebx;
    MEM32(esp + 0x90) = 0;
    MEM32(esp + 0x94) = 0;
    MEM32(esp + 0x98) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00081AD2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081AD2: ;
    PUSH32(esp, 0x00081AD7u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00081AD7: ;
    ecx = MEM32(esp + 0x88);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x8C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x8C);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00081AFAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081AFA: ;
    edx = MEM32(ebx);
    eax = esp + 0x38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CE7A8);
    ecx = ebx;
    MEM32(esp + 0x40) = 0x43660000;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00081B13u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081B13: ;
    PUSH32(esp, 0x00081B18u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00081B18: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00081B27u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081B27: ;
    edx = MEM32(ebx);
    eax = esp + 0x4C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CE798);
    ecx = ebx;
    MEM32(esp + 0x54) = 0;
    MEM32(esp + 0x58) = 0;
    MEM32(esp + 0x5C) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00081B5Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081B5A: ;
    PUSH32(esp, 0x00081B5Fu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00081B5F: ;
    ecx = MEM32(esp + 0x4C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00081B78u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081B78: ;
    PUSH32(esp, 0x00081B7Du); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00081B7D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00081B87u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081B87: ;
    eax = MEM32(ebx);
    edi = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3CE788);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00081B97u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081B97: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edi + 0x38); PUSH32(esp, 0x00081BA2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081BA2: ;
    ecx = esp + 0xBF2C;
    MEM8(esp + 0xC27C) = 0xC;
    PUSH32(esp, 0x00081BB6u); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_00081BB6: ;
    PUSH32(esp, 0x00081BBBu); RECOMP_ABI_CALL(0x000E9E50u, sub_000E9E50); /* call 0x000E9E50 */

loc_00081BBB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00081BC2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081BC2: ;
    PUSH32(esp, 0x00081BC7u); RECOMP_ABI_CALL(0x000BF730u, sub_000BF730); /* call 0x000BF730 */

loc_00081BC7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00081C06; /* je: equal / zero */

loc_00081BCB: ;
    PUSH32(esp, 0x00081BD0u); RECOMP_ABI_CALL(0x000BF750u, sub_000BF750); /* call 0x000BF750 */

loc_00081BD0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00081BEC; /* jne: not equal / not zero */

loc_00081BD4: ;
    PUSH32(esp, 0x00081BD9u); RECOMP_ABI_CALL(0x000BF740u, sub_000BF740); /* call 0x000BF740 */

loc_00081BD9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00081BEC; /* jne: not equal / not zero */

loc_00081BDD: ;
    PUSH32(esp, 0x00081BE2u); RECOMP_ABI_CALL(0x000C04D0u, sub_000C04D0); /* call 0x000C04D0 */

loc_00081BE2: ;
    eax = ZX8(MEM8(eax + 0x32));
    MEM32(esp + 0x40) = eax;
    goto loc_00081C06;

loc_00081BEC: ;
    PUSH32(esp, 0x00081BF1u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_00081BF1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x14);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xD4); PUSH32(esp, 0x00081BFEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081BFE: ;
    MEM32(esp + 0x40) = 0xFFFFFFFFu;

loc_00081C06: ;
    PUSH32(esp, 0x00081C0Bu); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_00081C0B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xB8); PUSH32(esp, 0x00081C17u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081C17: ;
    eax = MEM32(0x5BC9D0);
    ecx = MEM32(0x5BC9D4);
    edx = MEM32(0x5BC9D8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    MEM32(esp + 0x98) = eax;
    eax = MEM32(ebp);
    MEM32(esp + 0x9C) = ecx;
    PUSH32(esp, 0x3CE768);
    ecx = ebp;
    MEM32(esp + 0xA4) = edx;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00081C4Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081C4F: ;
    PUSH32(esp, 0x00081C54u); RECOMP_ABI_CALL(0x0006BF00u, sub_0006BF00); /* call 0x0006BF00 */

loc_00081C54: ;
    edx = MEM32(ebp);
    edi = MEM32(eax);
    ecx = ebp;
    MEM32(esp + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00081C62u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081C62: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    { uint32_t _icall_target = MEM32(edi + 4); PUSH32(esp, 0x00081C74u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081C74: ;
    fp_push(MEMF(esp + 0x68)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x5C); /* fadd dword ptr [esp + 0x5c] */
    edx = MEM32(ebp);
    fp_push(MEMF(esp + 0x64)); /* fld float */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    fp_top() = fp_top() + MEMF(esp + 0x5C); /* fadd dword ptr [esp + 0x5c] */
    PUSH32(esp, esi);
    PUSH32(esp, 0x3CE74C);
    ecx = ebp;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x6C); /* fadd dword ptr [esp + 0x6c] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp + 0x9C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0xA0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(0x3CD144); /* fadd dword ptr [0x3cd144] */
    MEMF(esp + 0xA4) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00081CDBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081CDB: ;
    PUSH32(esp, 0x5BC9D0);
    eax = esp + 0x94;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3CE8DC);
    PUSH32(esp, 0x3CE740);
    PUSH32(esp, 0x00081CF8u); RECOMP_ABI_CALL(0x00067F90u, sub_00067F90); /* call 0x00067F90 */

loc_00081CF8: ;
    esp = esp + 0x14;
    edi = eax;
    PUSH32(esp, 0x00081D02u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00081D02: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00081D09u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081D09: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00081D10u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081D10: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00081D17u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081D17: ;
    MEM32(edi + 0x70) = eax;
    eax = MEM32(esp + 0x54);
    MEM32(edi + 0x74) = eax;
    ecx = MEM32(esp + 0x58);
    MEM32(edi + 0x78) = ecx;
    edx = MEM32(esp + 0x5C);
    eax = esp + 0x60;
    MEM32(edi + 0x7C) = edx;
    PUSH32(esp, eax);
    ecx = edi + 0x80;
    PUSH32(esp, 0x00081D3Fu); RECOMP_ABI_CALL(0x00011FD0u, sub_00011FD0); /* call 0x00011FD0 */

loc_00081D3F: ;
    PUSH32(esp, 0x00081D44u); RECOMP_ABI_CALL(0x000BEF20u, sub_000BEF20); /* call 0x000BEF20 */

loc_00081D44: ;
    ecx = MEM32(edi + 0x1C);
    MEM32(esp + 0x10) = ecx;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00081D57u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081D57: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3CE71C);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00081D69u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081D69: ;
    PUSH32(esp, 0x00081D6Eu); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_00081D6E: ;
    ecx = MEM32(esp + 0x68);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x60);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00081D7Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081D7E: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3CE6FC);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00081D90u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081D90: ;
    PUSH32(esp, 0x00081D95u); RECOMP_ABI_CALL(0x00069540u, sub_00069540); /* call 0x00069540 */

loc_00081D95: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00081D9Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081D9C: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x00081DA7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081DA7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00081DBF; /* jne: not equal / not zero */

loc_00081DAB: ;
    edx = MEM32(esp + 0x3C);
    ecx = esp + 0x90;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x00081DBFu); RECOMP_ABI_CALL(0x00082E70u, sub_00082E70); /* call 0x00082E70 */

loc_00081DBF: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3CE6D0);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00081DD1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081DD1: ;
    esp = esp - 0x40;
    eax = esp;
    MEM32(esp + 0x74) = esp;
    PUSH32(esp, 0x40);
    ecx = ebp + 0x1E0;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00081DE9u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_00081DE9: ;
    ecx = MEM32(ebp + 0x4AC);
    esp = esp + 0xC;
    PUSH32(esp, 0x00081DF7u); RECOMP_ABI_CALL(0x00083030u, sub_00083030); /* call 0x00083030 */

loc_00081DF7: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00081E4C; /* je: equal / zero */

loc_00081E01: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3CE6AC);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00081E13u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081E13: ;
    ecx = edi;
    PUSH32(esp, 0x00081E1Au); RECOMP_ABI_CALL(0x0006CFB0u, sub_0006CFB0); /* call 0x0006CFB0 */

loc_00081E1A: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3CE694);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00081E2Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081E2C: ;
    ecx = edi;
    PUSH32(esp, 0x00081E33u); RECOMP_ABI_CALL(0x0006C0A0u, sub_0006C0A0); /* call 0x0006C0A0 */

loc_00081E33: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3CE674);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00081E45u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081E45: ;
    ecx = edi;
    PUSH32(esp, 0x00081E4Cu); RECOMP_ABI_CALL(0x0006C080u, sub_0006C080); /* call 0x0006C080 */

loc_00081E4C: ;
    edi = MEM32(esp + 0x30);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00081E61; /* je: equal / zero */

loc_00081E54: ;
    PUSH32(esp, 0x00081E59u); RECOMP_ABI_CALL(0x0007AB20u, sub_0007AB20); /* call 0x0007AB20 */

loc_00081E59: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00081E61u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081E61: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x00081E69u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081E69: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00081EA9; /* je: equal / zero */

loc_00081E6D: ;
    PUSH32(esp, 0x00081E72u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00081E72: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00081E79u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081E79: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x3CE660);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00081E87u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081E87: ;
    PUSH32(esp, 0x00081E8Cu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00081E8C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00081E93u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081E93: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x3CE660);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00081EA1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081EA1: ;
    MEM32(ebp + 0x224) = eax;
    goto loc_00081EAF;

loc_00081EA9: ;
    MEM32(ebp + 0x224) = esi;

loc_00081EAF: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x00081EBAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081EBA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00081EFA; /* je: equal / zero */

loc_00081EBE: ;
    PUSH32(esp, 0x00081EC3u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00081EC3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00081ECAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081ECA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x3CE64C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00081ED8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081ED8: ;
    PUSH32(esp, 0x00081EDDu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00081EDD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00081EE4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081EE4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x3CE64C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00081EF2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081EF2: ;
    MEM32(ebp + 0x228) = eax;
    goto loc_00081F00;

loc_00081EFA: ;
    MEM32(ebp + 0x228) = esi;

loc_00081F00: ;
    _fa = (uint32_t)(MEM32(esp + 0x9910)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x9910), esi (32-bit) */
    MEM32(esp + 0x10) = 1;
    MEM32(esp + 0x14) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_000821A7; /* jle: less or equal (signed <=) */

loc_00081F19: ;
    edi = MEM32(esp + 0x14);
    esi = 4;
    eax = esp + 0x26CC;
    eax = eax - esi;
    MEM32(esp + 0x30) = eax;
    eax = esp + 0x72FC;
    eax = eax - esi;
    MEM32(esp + 0x38) = eax;
    eax = esp + 0x4CE4;
    eax = eax - esi;
    MEM32(esp + 0x8C) = eax;
    eax = esp + 0x9914;
    eax = eax - esi;
    MEM32(esp + 0xA0) = eax;
    /* nop */

loc_00081F60: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x1F (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00081F98; /* jne: not equal / not zero */

loc_00081F68: ;
    ecx = esp + edi * 4 + 0xA4;
    PUSH32(esp, 0x00081F74u); RECOMP_ABI_CALL(0x00027B00u, sub_00027B00); /* call 0x00027B00 */

loc_00081F74: ;
    PUSH32(esp, eax);
    eax = esp + 0xC174;
    PUSH32(esp, 0x3CE63C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00081F87u); RECOMP_ABI_CALL(0x00199B80u, sub_00199B80); /* call 0x00199B80 */

loc_00081F87: ;
    esp = esp + 0xC;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0xC178;
    PUSH32(esp, eax);
    goto loc_00081F9E;

loc_00081F98: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);

loc_00081F9E: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00081FA9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00081FA9: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, 0);
    eax = eax + esi;
    edx = esi + ecx;
    PUSH32(esp, eax);
    ecx = esp + edi * 4 + 0x1A1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00081FC6u); RECOMP_ABI_CALL(0x00027B00u, sub_00027B00); /* call 0x00027B00 */

loc_00081FC6: ;
    PUSH32(esp, eax);
    ecx = esp + edi * 4 + 0xB4;
    PUSH32(esp, 0x00081FD3u); RECOMP_ABI_CALL(0x00027B00u, sub_00027B00); /* call 0x00027B00 */

loc_00081FD3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00081FD9u); RECOMP_ABI_CALL(0x00068060u, sub_00068060); /* call 0x00068060 */

loc_00081FD9: ;
    ebx = eax;
    esp = esp + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00082016; /* jne: not equal / not zero */

loc_00081FE2: ;
    edx = MEM32(esp + 0x30);
    eax = esi + edx;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    eax = eax + esi;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esp + edi * 4 + 0x1A20;
    PUSH32(esp, 0x00081FFEu); RECOMP_ABI_CALL(0x00027B00u, sub_00027B00); /* call 0x00027B00 */

loc_00081FFE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CB490);
    PUSH32(esp, 0x00082009u); RECOMP_ABI_CALL(0x00067F90u, sub_00067F90); /* call 0x00067F90 */

loc_00082009: ;
    ebx = eax;
    esp = esp + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00082190; /* je: equal / zero */

loc_00082016: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0008201Cu); RECOMP_ABI_CALL(0x00027660u, sub_00027660); /* call 0x00027660 */

loc_0008201C: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x7C) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00082139; /* je: equal / zero */

loc_0008202B: ;
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x38;
    PUSH32(esp, 0x00082039u); RECOMP_ABI_CALL(0x00027EB0u, sub_00027EB0); /* call 0x00027EB0 */

loc_00082039: ;
    ecx = MEM32(esp + edi * 4 + 0xD5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x34) (32-bit) */
    eax = esp + edi * 4 + 0xD5C;
    if (CMP_EQ(_fa, _fb)) goto loc_0008205A; /* je: equal / zero */

loc_0008204D: ;
    ecx = MEM32(esp + 0x7C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xD8); PUSH32(esp, 0x0008205Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008205A: ;
    eax = MEM32(esp + 0x7C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00082064u); RECOMP_ABI_CALL(0x00029210u, sub_00029210); /* call 0x00029210 */

loc_00082064: ;
    edi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00082139; /* je: equal / zero */

loc_00082071: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x178); PUSH32(esp, 0x0008207Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008207B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00082139; /* jne: not equal / not zero */

loc_00082083: ;
    eax = MEM32(esp + 0xA0);
    fp_push(MEMF(esi + eax)); /* fld float */
    ecx = MEM32(esp + 0x8C);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00082139; /* jp: parity */

loc_000820A2: ;
    fp_push(MEMF(esp + esi + 0x9914)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + esi + 0x4CE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + esi + 0x4ce4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00082139; /* jp: parity */

loc_000820BB: ;
    fp_push(MEMF(esp + esi + 0x9918)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + esi + 0x4CE8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + esi + 0x4ce8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00082139; /* jp: parity */

loc_000820D0: ;
    fp_push(MEMF(esp + esi + 0x4CE8)); /* fld float */
    eax = MEM32(esp + 0xA0);
    fp_top() = fp_top() - MEMF(edi + 0x28); /* fsub dword ptr [edi + 0x28] */
    edx = ecx;
    fp_push(MEMF(esp + esi + 0x4CE4)); /* fld float */
    ecx = esp + 0x6C;
    fp_top() = fp_top() - MEMF(edi + 0x24); /* fsub dword ptr [edi + 0x24] */
    fp_push(MEMF(esi + edx)); /* fld float */
    edx = MEM32(edi);
    fp_top() = fp_top() - MEMF(edi + 0x20); /* fsub dword ptr [edi + 0x20] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + esi + 0x9918)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 0x28); /* fsub dword ptr [edi + 0x28] */
    fp_push(MEMF(esp + esi + 0x9914)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 0x24); /* fsub dword ptr [edi + 0x24] */
    fp_push(MEMF(esi + eax)); /* fld float */
    eax = esp + 0x20;
    fp_top() = fp_top() - MEMF(edi + 0x20); /* fsub dword ptr [edi + 0x20] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0x13C); PUSH32(esp, 0x00082139u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082139: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00082140u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082140: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008215D; /* je: equal / zero */

loc_00082144: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00082153; /* jne: not equal / not zero */

loc_0008214C: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x00082153u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082153: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    goto loc_00082184;

loc_0008215D: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x18);
    MEM16(ebx + 0x6E) = LO16(eax);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0008218C; /* je: equal / zero */

loc_00082172: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00082178u); RECOMP_ABI_CALL(0x0006C520u, sub_0006C520); /* call 0x0006C520 */

loc_00082178: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008218C; /* jne: not equal / not zero */

loc_0008217C: ;
    edx = MEM32(ebx + 0x1C);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;

loc_00082184: ;
    PUSH32(esp, 0x00082189u); RECOMP_ABI_CALL(0x00066B40u, sub_00066B40); /* call 0x00066B40 */

loc_00082189: ;
    esp = esp + 4;

loc_0008218C: ;
    edi = MEM32(esp + 0x14);

loc_00082190: ;
    eax = MEM32(esp + 0x9910);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x14) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00081F60; /* jl: less (signed <) */

loc_000821A7: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000821B4; /* je: equal / zero */

loc_000821AF: ;
    PUSH32(esp, 0x000821B4u); RECOMP_ABI_CALL(0x0006C560u, sub_0006C560); /* call 0x0006C560 */

loc_000821B4: ;
    eax = MEM32(esp + 0x9C);
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x000821D0u); RECOMP_ABI_CALL(0x000829E0u, sub_000829E0); /* call 0x000829E0 */

loc_000821D0: ;
    eax = MEM32(ebp + 0x4AC);
    SET_LO8(ecx, MEM8(eax + 0x19684));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000821F8; /* je: equal / zero */

loc_000821E0: ;
    MEM8(eax + 0x19684) = 0;
    ecx = MEM32(ebp + 0x4AC);
    ecx = ecx + 0x19500;
    PUSH32(esp, 0x000821F8u); RECOMP_ABI_CALL(0x00085290u, sub_00085290); /* call 0x00085290 */

loc_000821F8: ;
    SET_LO8(eax, MEM8(ebp + 0x220));
    SET_LO8(eax, LO8(eax) & 0xFC);
    SET_LO8(eax, LO8(eax) | 8);
    MEM8(ebp + 0x220) = LO8(eax);
    MEM32(esp + 0xC27C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00082218u); RECOMP_ABI_CALL(0x00122CB0u, sub_00122CB0); /* call 0x00122CB0 */

loc_00082218: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00082223u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082223: ;
    SET_LO8(eax, 1);

loc_00082225: ;
    ecx = MEM32(esp + 0xC274);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0xC270);
    PUSH32(esp, 0x0008223Fu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0008223F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC270;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00082250
 * Original: 0x00082250 - 0x00082326 (214 bytes, 72 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00082250: ;
    SET_LO8(ecx, MEM8(0x49B8A8));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008226C; /* jne: not equal / not zero */

loc_0008225F: ;
    MEM32(0x49B8A8) = MEM32(0x49B8A8) | eax;
    MEM8(0x49B7A8) = 0;

loc_0008226C: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, 0x3CE9E8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008227Cu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_0008227C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, 0x100);
    if (TEST_NZ(_fa, _fb)) goto loc_00082308; /* jne: not equal / not zero */

loc_0008228C: ;
    PUSH32(esp, 0x3CE9E8);
    PUSH32(esp, 0x49B7A8);
    PUSH32(esp, 0x0008229Bu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0008229B: ;
    eax = 0x49B7A8;
    esp = esp + 0xC;
    MEM8(0x49B8A7) = 0;
    edx = eax + 1;
    /* nop */

loc_000822B0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000822B0; /* jne: not equal / not zero */

loc_000822B7: ;
    ecx = edi;
    PUSH32(esp, esi);
    eax = eax - edx;
    esi = ecx + 1;
    /* nop */

loc_000822C0: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000822C0; /* jne: not equal / not zero */

loc_000822C7: ;
    ecx = ecx - esi;
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000822FE; /* jge: greater or equal (signed >=) */

loc_000822D3: ;
    eax = edi;
    edx = edi;

loc_000822D7: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000822D7; /* jne: not equal / not zero */

loc_000822DE: ;
    edi = 0x49B7A8;
    eax = eax - edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000822E6: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000822E6; /* jne: not equal / not zero */

loc_000822EE: ;
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

loc_000822FE: ;
    POP32(esp, esi);
    eax = 0x49B7A8;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_00082308: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x49B7A8);
    PUSH32(esp, 0x00082313u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00082313: ;
    esp = esp + 0xC;
    MEM8(0x49B8A7) = 0;
    eax = 0x49B7A8;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00082330
 * Original: 0x00082330 - 0x0008244D (285 bytes, 92 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00082330: ;
    esp = esp - 0x114;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0x114) = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x0008234Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008234A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00082384; /* je: equal / zero */

loc_0008234E: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = esi + 0x1C;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0008235Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008235A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00082374; /* je: equal / zero */

loc_0008235E: ;
    PUSH32(esp, 0x00082363u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00082363: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0008236Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008236A: ;
    ecx = MEM32(eax);
    edx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00082374u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00082374: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008237Au); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_0008237A: ;
    esp = esp + 4;
    MEM32(edi) = 0;
    POP32(esp, edi);

loc_00082384: ;
    PUSH32(esp, 0x00082389u); RECOMP_ABI_CALL(0x0013C440u, sub_0013C440); /* call 0x0013C440 */

loc_00082389: ;
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00082394u); RECOMP_ABI_CALL(0x00138700u, sub_00138700); /* call 0x00138700 */

loc_00082394: ;
    ecx = MEM32(eax);
    eax = MEM32(esp + 0x124);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    MEM32(esi + 0x1C) = ecx;
    MEM8(esp + 0x28) = 0;
    PUSH32(esp, 0x000823B2u); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_000823B2: ;
    ecx = MEM32(esi + 0x1C);
    esp = esp + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00082435; /* je: equal / zero */

loc_000823BC: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000823C1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000823C1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000823CFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000823CF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00082435; /* je: equal / zero */

loc_000823D3: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000823DBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000823DB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000823F6; /* jne: not equal / not zero */

loc_000823DF: ;
    PUSH32(esp, 0x000823E4u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000823E4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000823EBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000823EB: ;
    ecx = MEM32(eax);
    edx = MEM32(esi + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000823F6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000823F6: ;
    eax = MEM32(esi);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x0008241Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008241D: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x110);
    PUSH32(esp, 0x0008242Cu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0008242C: ;
    esp = esp + 0x114;
    esp += 8; return; /* ret 4 */

loc_00082435: ;
    ecx = MEM32(esp + 0x114);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    PUSH32(esp, 0x00082444u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00082444: ;
    esp = esp + 0x114;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00082450
 * Original: 0x00082450 - 0x000824B8 (104 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00082450: ;
    esp = esp - 0x44;
    eax = MEM32(0x47A050);
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, 0x00082461u); RECOMP_ABI_CALL(0x00122CB0u, sub_00122CB0); /* call 0x00122CB0 */

loc_00082461: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x3CEA04);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0008246Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008246F: ;
    eax = MEM32(esp + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000824A9; /* je: equal / zero */

loc_00082477: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000824A9; /* je: equal / zero */

loc_0008247C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CE9F0);
    eax = esp + 8;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x00082493u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_00082493: ;
    esp = esp + 0x10;
    PUSH32(esp, 0x0008249Bu); RECOMP_ABI_CALL(0x00122CB0u, sub_00122CB0); /* call 0x00122CB0 */

loc_0008249B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000824A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000824A9: ;
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, 0x000824B2u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000824B2: ;
    esp = esp + 0x44;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000824C0
 * Original: 0x000824C0 - 0x00082596 (214 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000824C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000824C0: ;
    esp = esp - 0x204;
    eax = MEM32(0x47A050);
    SET_LO8(edx, MEM8(ecx + 0x220));
    MEM32(esp + 0x200) = eax;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00082581; /* jne: not equal / not zero */

loc_000824E2: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00082580; /* je: equal / zero */

loc_000824F2: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00082580; /* je: equal / zero */

loc_000824FB: ;
    eax = MEM32(esp + 0x210);
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00082512u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_00082512: ;
    edx = esp + 0x10;
    PUSH32(esp, 0x2F);
    PUSH32(esp, edx);
    MEM8(esp + 0x118) = 0;
    PUSH32(esp, 0x00082526u); RECOMP_ABI_CALL(0x00341D90u, sub_00341D90); /* call 0x00341D90 */

loc_00082526: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00082545; /* jne: not equal / not zero */

loc_0008252D: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x200);
    PUSH32(esp, 0x0008253Cu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0008253C: ;
    esp = esp + 0x204;
    esp += 12; return; /* ret 8 */

loc_00082545: ;
    MEM8(eax) = 0;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008252D; /* je: equal / zero */

loc_00082550: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008255Au); RECOMP_ABI_CALL(0x001231B0u, sub_001231B0); /* call 0x001231B0 */

loc_0008255A: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x108;
    PUSH32(esp, 0x0008256Au); RECOMP_ABI_CALL(0x0001D600u, sub_0001D600); /* call 0x0001D600 */

loc_0008256A: ;
    ecx = esp + 0x104;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00082578u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00082578: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */

loc_00082580: ;
    POP32(esp, esi);

loc_00082581: ;
    ecx = MEM32(esp + 0x200);
    PUSH32(esp, 0x0008258Du); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0008258D: ;
    esp = esp + 0x204;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000825A0
 * Original: 0x000825A0 - 0x0008264D (173 bytes, 53 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000825A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000825A0: ;
    esp = esp - 0x104;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x108) = eax;
    eax = MEM32(esp + 0x110);
    PUSH32(esp, 0x100);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000825CDu); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_000825CD: ;
    edx = esp + 0x14;
    PUSH32(esp, 0x2F);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000825D9u); RECOMP_ABI_CALL(0x00341D90u, sub_00341D90); /* call 0x00341D90 */

loc_000825D9: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000825FB; /* je: equal / zero */

loc_000825E0: ;
    MEM8(eax) = 0;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000825EFu); RECOMP_ABI_CALL(0x00082250u, sub_00082250); /* call 0x00082250 */

loc_000825EF: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    ecx = esi + 0xE0;
    PUSH32(esp, ecx);
    goto loc_00082609;

loc_000825FB: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x3C806C);
    edx = esi + 0xE0;
    PUSH32(esp, edx);

loc_00082609: ;
    PUSH32(esp, 0x0008260Eu); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_0008260E: ;
    eax = esp + 0x14;
    esp = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008261Bu); RECOMP_ABI_CALL(0x001231B0u, sub_001231B0); /* call 0x001231B0 */

loc_0008261B: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    edi = esi + 0x120;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008262Au); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_0008262A: ;
    esp = esp + 0x10;
    ecx = esi;
    PUSH32(esp, 0x00082634u); RECOMP_ABI_CALL(0x00082650u, sub_00082650); /* call 0x00082650 */

loc_00082634: ;
    ecx = MEM32(esp + 0x108);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x00082644u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00082644: ;
    esp = esp + 0x104;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00082650
 * Original: 0x00082650 - 0x000826E7 (151 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082650(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00082650: ;
    esp = esp - 0x144;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x14C) = eax;
    eax = esi + 0x120;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CEA1C);
    ecx = esp + 0x14;
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    MEM8(esp + 0x1C) = 0;
    PUSH32(esp, 0x00082684u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_00082684: ;
    ebp = esi + 0x160;
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    ecx = 0x10;
    esi = esp + 0x24;
    edi = ebp;
    PUSH32(esp, 0xC);
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEM8(esp + 0x68) = 0;
    PUSH32(esp, 0x000826A9u); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_000826A9: ;
    esp = esp + 0x1C;
    PUSH32(esp, 0x000826B1u); RECOMP_ABI_CALL(0x0012F280u, sub_0012F280); /* call 0x0012F280 */

loc_000826B1: ;
    edx = MEM32(eax);
    ecx = esp + 0x4C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000826BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000826BD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000826D1; /* jne: not equal / not zero */

loc_000826C1: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000826CEu); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_000826CE: ;
    esp = esp + 0xC;

loc_000826D1: ;
    ecx = MEM32(esp + 0x14C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    PUSH32(esp, 0x000826E0u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000826E0: ;
    esp = esp + 0x144;
    esp += 4; return; /* ret */

}

/**
 * sub_000826F0
 * Original: 0x000826F0 - 0x0008280C (284 bytes, 95 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000826F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000826F0: ;
    esp = esp - 0x48;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    PUSH32(esp, 0x40);
    MEM32(esp + 0x4C) = eax;
    eax = esp + 0xC;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00082710u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_00082710: ;
    eax = MEM32(esp + 0x5C);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = 0x3CEA30;
    if (TEST_Z(_fa, _fb)) goto loc_00082733; /* je: equal / zero */

loc_00082723: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00082730u); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_00082730: ;
    esp = esp + 0xC;

loc_00082733: ;
    eax = esp + 8;
    edx = eax + 1;
    /* nop */

loc_00082740: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00082740; /* jne: not equal / not zero */

loc_00082747: ;
    eax = eax - edx;
    MEM32(esp + 0x50) = eax;
    if ((eax != 0)) goto loc_00082791; /* jne: not equal / not zero */

loc_0008274F: ;
    PUSH32(esp, 0x40);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0008275Du); RECOMP_ABI_CALL(0x00082810u, sub_00082810); /* call 0x00082810 */

loc_0008275D: ;
    eax = esp + 8;
    edx = eax + 1;

loc_00082764: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00082764; /* jne: not equal / not zero */

loc_0008276B: ;
    eax = eax - edx;
    MEM32(esp + 0x50) = eax;
    if ((eax != 0)) goto loc_00082791; /* jne: not equal / not zero */

loc_00082773: ;
    PUSH32(esp, 0x00082778u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_00082778: ;
    PUSH32(esp, 0x0008277Du); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0008277D: ;
    eax = MEM32(esp + eax * 4 + 4);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008278Eu); RECOMP_ABI_CALL(0x0001CAB0u, sub_0001CAB0); /* call 0x0001CAB0 */

loc_0008278E: ;
    esp = esp + 0xC;

loc_00082791: ;
    eax = esp + 8;
    edx = eax + 1;
    POP32(esp, esi);
    /* nop */

loc_000827A0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000827A0; /* jne: not equal / not zero */

loc_000827A7: ;
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000827E9; /* jle: less or equal (signed <=) */

loc_000827AD: ;
    ecx = esp + 4;
    PUSH32(esp, 0x3CEA28);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000827BCu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_000827BC: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000827E9; /* jne: not equal / not zero */

loc_000827C3: ;
    PUSH32(esp, edi);
    edi = esp + 8;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_000827D0: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000827D0; /* jne: not equal / not zero */

loc_000827D8: ;
    edx = MEM32(0x3CEA28);
    SET_LO8(eax, MEM8(0x3CEA2C));
    MEM32(edi) = edx;
    MEM8(edi + 4) = LO8(eax);
    POP32(esp, edi);

loc_000827E9: ;
    PUSH32(esp, 0x000827EEu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000827EE: ;
    edx = MEM32(eax);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14C); PUSH32(esp, 0x000827FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000827FD: ;
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, 0x00082806u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00082806: ;
    esp = esp + 0x48;
    esp += 8; return; /* ret 4 */

}
