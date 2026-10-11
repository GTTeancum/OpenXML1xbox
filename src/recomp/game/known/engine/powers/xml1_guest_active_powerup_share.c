#define RECOMP_GENERATED_CODE
#include "engine/actors/raven_actor_transform_owner.h"
#include "engine/actors/raven_leader_event_guest.h"
#include "engine/powers/raven_victim_event_guest.h"
#include "engine/powers/raven_powerup_metadata.h"
#include "engine/combat/raven_native_damage.h"
#include "engine/powers/raven_powerup_guest.h"
#include "engine/actors/raven_actor_scale_owner.h"
#include "engine/scripting/raven_script_extensions.h"
#include "engine/combat/raven_bishop_guest.h"
#include "engine/actors/raven_leader_actor.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_active_powerup_share; original guest entry 0x0002B270.
 * Evidence: tests/engine/powers/raven_powerup_guest_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_0002B270
 * Original: 0x0002B270 - 0x0002B55C (748 bytes, 251 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_active_powerup_share(void)
{
    uint32_t shared_boost_owner=0;
    int shared_boost_eligible=raven_xml1_shared_boost_begin(g_ecx,&shared_boost_owner);
    int shared_boost_success=0;
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

loc_0002B270: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0x34E270);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    _fa = (uint32_t)(MEM8(ebp + 0x3C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x3C), 2 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0002B549; /* je: equal / zero */

loc_0002B298: ;
    eax = MEM32(ebp + 0x1C);
    esi = ebp + 0x1C;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B549; /* je: equal / zero */

loc_0002B2A8: ;
    ecx = esi;
    PUSH32(esp, 0x0002B2AFu); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_0002B2AF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B549; /* je: equal / zero */

loc_0002B2B7: ;
    _fa = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x2C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B549; /* je: equal / zero */

loc_0002B2C0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    eax = esp;
    MEM32(esp + 0x20) = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x0002B2D0u); RECOMP_ABI_CALL(0x00029430u, sub_00029430); /* call 0x00029430 */

loc_0002B2D0: ;
    edi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B549; /* je: equal / zero */

loc_0002B2DD: ;
    eax = MEM32(ebp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B2F4; /* je: equal / zero */

loc_0002B2E4: ;
    eax = MEM32(eax + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B2F4; /* je: equal / zero */

loc_0002B2EE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0002B2F1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002B2F1: ;
    esp = esp + 4;

loc_0002B2F4: ;
    _fa = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x2C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B549; /* je: equal / zero */

loc_0002B2FD: ;
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(esp + 0x20) = esp;
    MEM32(eax) = edx;
    PUSH32(esp, 0x0002B30Du); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_0002B30D: ;
    esi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B35E; /* je: equal / zero */

loc_0002B316: ;
    ecx = esi;
    PUSH32(esp, 0x0002B31Du); RECOMP_ABI_CALL(0x00029080u, sub_00029080); /* call 0x00029080 */

loc_0002B31D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002B35E; /* jne: not equal / not zero */

loc_0002B321: ;
    _fa = (uint32_t)(MEM8(esi + 0x2B8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x2B8), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002B35E; /* jne: not equal / not zero */

loc_0002B32A: ;
    eax = MEM32(ebp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B341; /* je: equal / zero */

loc_0002B331: ;
    eax = MEM32(eax + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B341; /* je: equal / zero */

loc_0002B33B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0002B33Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002B33E: ;
    esp = esp + 4;

loc_0002B341: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B);
    ecx = edi;
    PUSH32(esp, 0x0002B34Bu); RECOMP_ABI_CALL(0x0002B100u, sub_0002B100); /* call 0x0002B100 */

loc_0002B34B: ;
    ecx = MEM32(esp + 0x24);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_0002B35E: ;
    ecx = ebp;
    PUSH32(esp, 0x0002B365u); RECOMP_ABI_CALL(0x00028FF0u, xml1_guest_powerup_end_time); /* call 0x00028FF0 */

loc_0002B365: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002B3B2; /* jne: not equal / not zero */

loc_0002B372: ;
    PUSH32(esp, 0x0002B377u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0002B377: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x0002B381u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002B381: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ebp;
    PUSH32(esp, 0x0002B38Cu); RECOMP_ABI_CALL(0x00028FF0u, xml1_guest_powerup_end_time); /* call 0x00028FF0 */

loc_0002B38C: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0002B3B2; /* jp: parity */

loc_0002B397: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x0002B39Fu); RECOMP_ABI_CALL(0x0002AF30u, xml1_guest_actor_remove_powerup); /* call 0x0002AF30 */

loc_0002B39F: ;
    ecx = MEM32(esp + 0x24);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_0002B3B2: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x0002B3BAu); RECOMP_ABI_CALL(0x000296B0u, sub_000296B0); /* call 0x000296B0 */

loc_0002B3BA: ;
    _fa = (uint32_t)(MEM32(ebp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x30), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B549; /* je: equal / zero */

loc_0002B3C3: ;
    eax = MEM32(ebp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B549; /* je: equal / zero */

loc_0002B3CE: ;
    fp_push(MEMF(eax + 0x4C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002B549; /* jne: not equal / not zero */

loc_0002B3E2: ;
    PUSH32(esp, 0x0002B3E7u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0002B3E7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x0002B3F1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002B3F1: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0x34)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp + 0x34] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002B549; /* jne: not equal / not zero */

loc_0002B3FF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002B405u); RECOMP_ABI_CALL(0x000275E0u, sub_000275E0); /* call 0x000275E0 */

loc_0002B405: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B423; /* je: equal / zero */

loc_0002B40C: ;
    fp_push(MEMF(eax + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002B529; /* jne: not equal / not zero */

loc_0002B423: ;
    edx = MEM32(edi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x18) = ebx;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002B432u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002B432: ;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0002B43Cu); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_0002B43C: ;
    esi = MEM32(esp + 0x10);
    MEM32(esp + 0x2C) = ebx;
    ebx = MEM32(esi);
    ecx = edi;
    PUSH32(esp, 0x0002B44Du); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_0002B44D: ;
    if (raven_xml1_powerup_enemy_query(ebp, esi, edi, eax)) goto loc_0002B455;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x40); PUSH32(esp, 0x0002B455u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002B455: ;
    eax = MEM32(edi + 0x1C);
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x18) = eax;
    edx = MEM32(ecx);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0002B46Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002B46C: ;
    eax = MEM32(ebp + 0x2C);
    eax = MEM32(eax + 0x4C);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = edi + 0x20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0002B484u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002B484: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    MEM32(esp + 0x20) = 0x3C898C;
    PUSH32(esp, 0x0002B49Fu); RECOMP_ABI_CALL(0x000275C0u, sub_000275C0); /* call 0x000275C0 */

loc_0002B49F: ;
    esi = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    ecx = esi;
    MEM8(esp + 0x2C) = 1;
    ebx = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0002B4B0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002B4B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0002B50A; /* jle: less or equal (signed <=) */

loc_0002B4B4: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0002B4BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002B4BC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002B4C2u); RECOMP_ABI_CALL(0x000275E0u, sub_000275E0); /* call 0x000275E0 */

loc_0002B4C2: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B4DC; /* je: equal / zero */

loc_0002B4C9: ;
    fp_push(MEMF(eax + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002B4FF; /* jne: not equal / not zero */

loc_0002B4DC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(esi);
    MEM32(esp + 0x24) = esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0002B4F0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002B4F0: ;
    ecx = MEM32(ebp + 0x30);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0002B4FFu); RECOMP_ABI_CALL(0x0002AA90u, xml1_guest_actor_attach_powerup); /* call 0x0002AA90 */
    if (shared_boost_eligible && (eax & 255)) shared_boost_success=1;

loc_0002B4FF: ;
    edx = MEM32(esi);
    ecx = esi;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002B506u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002B506: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0002B4B4; /* jl: less (signed <) */

loc_0002B50A: ;
    PUSH32(esp, esi);
    MEM8(esp + 0x30) = 0;
    PUSH32(esp, 0x0002B515u); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_0002B515: ;
    esp = esp + 4;
    ecx = esp + 0x10;
    MEM32(esp + 0x2C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0002B529u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_0002B529: ;
    PUSH32(esp, 0x0002B52Eu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0002B52E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x0002B538u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002B538: ;
    eax = MEM32(ebp + 0x30);
    fp_push(MEMF(eax + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8C34); /* fmul dword ptr [0x3c8c34] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(ebp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */

loc_0002B549: ;
    if (shared_boost_success) raven_xml1_shared_boost_finish(shared_boost_owner);
    ecx = MEM32(esp + 0x24);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
