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

/* xml1_guest_actor_attach_powerup; original guest entry 0x0002AA90.
 * Evidence: tests/engine/powers/raven_powerup_guest_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_0002AA90
 * Original: 0x0002AA90 - 0x0002AF24 (1172 bytes, 369 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_actor_attach_powerup(void)
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

loc_0002AA90: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x30);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_0002AF18; /* je: equal / zero */

loc_0002AAA9: ;
    eax = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002AAD6; /* je: equal / zero */

loc_0002AAB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0002AAB6u); RECOMP_ABI_CALL(0x00027620u, sub_00027620); /* call 0x00027620 */

loc_0002AAB6: ;
    SET_LO8(ecx, MEM8(ebp + 0x70));
    esp = esp + 4;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002AAC9; /* jne: not equal / not zero */

loc_0002AAC1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002AF18; /* je: equal / zero */

loc_0002AAC9: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002AAD6; /* jne: not equal / not zero */

loc_0002AACE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002AF18; /* jne: not equal / not zero */

loc_0002AAD6: ;
    edi = MEM32(ebx + 0x1FC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x14) = 0;
    MEM8(esp + 0x13) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0002ABB0; /* je: equal / zero */

loc_0002AAF2: ;
    PUSH32(esp, 0x0002AAF7u); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_0002AAF7: ;
    edx = MEM32(eax + 0x2438);
    eax = eax + 4;
    edx = edx & edi;
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x2234)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4 + 0x2234), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002AB3F; /* jne: not equal / not zero */

loc_0002AB0B: ;
    ecx = edx;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x2220)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x2220), esi (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002AB3F; /* je: equal / zero */

loc_0002AB28: ;
    PUSH32(esp, 0x0002AB2Du); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_0002AB2D: ;
    esi = MEM32(eax + 0x2438);
    eax = eax + 4;
    esi = esi & edi;
    esi = esi << 6;
    esi = esi + eax;
    goto loc_0002AB41;

loc_0002AB3F: ;
    esi = 0; /* xor self */

loc_0002AB41: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(MEM8(ecx + 0x72)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x72), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002AB5F; /* jne: not equal / not zero */

loc_0002AB4A: ;
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    MEM8(esp + 0x38) = 0;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002AB64; /* jne: not equal / not zero */

loc_0002AB5F: ;
    MEM8(esp + 0x38) = 1;

loc_0002AB64: ;
    _fa = (uint32_t)(MEM8(ebp + 0x72)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x72), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002AB7E; /* jne: not equal / not zero */

loc_0002AB6A: ;
    fp_push(MEMF(ebp + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002AB7E; /* je: equal / zero */

loc_0002AB7A: ;
    SET_LO8(ebx, 0); /* xor self */
    goto loc_0002AB80;

loc_0002AB7E: ;
    SET_LO8(ebx, 1);

loc_0002AB80: ;
    if (raven_xml1_powerup_remove_on_node_end(MEM32(esi + 0x2C))) MEM8(esp + 0x38) = 1;
    if (raven_xml1_powerup_remove_on_node_end(ebp)) SET_LO8(ebx, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0002AB86u); RECOMP_ABI_CALL(0x00094850u, sub_00094850); /* call 0x00094850 */

loc_0002AB86: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002AB96; /* je: equal / zero */

loc_0002AB8A: ;
    SET_LO8(eax, MEM8(esp + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002AB96; /* je: equal / zero */

loc_0002AB92: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002ABA3; /* jne: not equal / not zero */

loc_0002AB96: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002AAF2; /* jne: not equal / not zero */

loc_0002ABA1: ;
    goto loc_0002ABAC;

loc_0002ABA3: ;
    MEM32(esp + 0x14) = edi;
    MEM8(esp + 0x13) = 0;

loc_0002ABAC: ;
    ebx = MEM32(esp + 0x18);

loc_0002ABB0: ;
    eax = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edi = MEM32(esp + 0x44);
    MEM32(esp + 0x38) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0002AD03; /* je: equal / zero */

loc_0002ABC7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0002ABCDu); RECOMP_ABI_CALL(0x00027620u, sub_00027620); /* call 0x00027620 */

loc_0002ABCD: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x38) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0002AD03; /* je: equal / zero */

loc_0002ABDC: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002AC36; /* je: equal / zero */

loc_0002ABE5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002AD03; /* jne: not equal / not zero */

loc_0002ABEE: ;
    fp_push(MEMF(ebp + 0x2C)); /* fld float */
    eax = MEM32(esp + 0x38);
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    esi = MEM32(eax + 0x2D8);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0002AC0Au); RECOMP_ABI_CALL(0x0001CBC0u, sub_0001CBC0); /* call 0x0001CBC0 */

loc_0002AC0A: ;
    esp = esp + 4;
    PUSH32(esp, 0x0002AC12u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0002AC12: ;
    SET_LO16(ecx, ZX8(MEM8(esi + 0x388)));
    eax = eax + ecx;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xA (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0002AC27; /* jle: less or equal (signed <=) */

loc_0002AC22: ;
    eax = 0xA;

loc_0002AC27: ;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002AC31u); RECOMP_ABI_CALL(0x000290A0u, sub_000290A0); /* call 0x000290A0 */

loc_0002AC31: ;
    goto loc_0002AD03;

loc_0002AC36: ;
    PUSH32(esp, 0x0002AC3Bu); RECOMP_ABI_CALL(0x000BF750u, sub_000BF750); /* call 0x000BF750 */

loc_0002AC3B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002ACD1; /* je: equal / zero */

loc_0002AC43: ;
    edx = MEM32(ebp + 0x6C);
    edx = edx & 0xF00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x100 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002ACD1; /* jne: not equal / not zero */

loc_0002AC54: ;
    fp_push(MEMF(ebp + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0002ACD1; /* jp: parity */

loc_0002AC64: ;
    MEM8(ebp + 0x71) = MEM8(ebp + 0x71) & 0x80;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edi;
    PUSH32(esp, 0x0002AC72u); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_0002AC72: ;
    esi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002ACD1; /* je: equal / zero */

loc_0002AC7B: ;
    eax = MEM32(esp + 0x38);
    eax = eax + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002AC8Du); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_0002AC8D: ;
    esi = esi + 0x2C;
    edx = esp + 0x30;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002AC9Bu); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_0002AC9B: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x40); /* fmul dword ptr [esp + 0x40] */
    esp = esp + 0x10;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x2C); /* fmul dword ptr [esp + 0x2c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8C30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8c30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0002ACD1; /* jp: parity */

loc_0002ACC7: ;
    SET_LO8(eax, MEM8(ebp + 0x71));
    SET_LO8(eax, LO8(eax) & 0x8A);
    SET_LO8(eax, LO8(eax) | 0xA);
    MEM8(ebp + 0x71) = LO8(eax);

loc_0002ACD1: ;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, 0x0002ACDAu); RECOMP_ABI_CALL(0x000383A0u, sub_000383A0); /* call 0x000383A0 */

loc_0002ACDA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002AD03; /* jne: not equal / not zero */

loc_0002ACDE: ;
    ecx = MEM32(ebp + 0x6C);
    ecx = ecx & 0xF00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x100 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002AD03; /* jne: not equal / not zero */

loc_0002ACEF: ;
    fp_push(MEMF(ebp + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0002AF18; /* jnp: not parity */

loc_0002AD03: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 0x1C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002AD0E; /* jne: not equal / not zero */

loc_0002AD08: ;
    edi = MEM32(0x498D90);

loc_0002AD0E: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002AD2F; /* jne: not equal / not zero */

loc_0002AD16: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002AD20u); RECOMP_ABI_CALL(0x00029B90u, sub_00029B90); /* call 0x00029B90 */

loc_0002AD20: ;
    eax = MEM32(esp + 0x18);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002AF18; /* je: equal / zero */

loc_0002AD2F: ;
    PUSH32(esp, 0x0002AD34u); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_0002AD34: ;
    esi = MEM32(eax + 0x2438);
    edx = MEM32(esp + 0x14);
    eax = eax + 4;
    esi = esi & edx;
    esi = esi << 6;
    esi = esi + eax;
    ecx = esi;
    PUSH32(esp, 0x0002AD4Fu); RECOMP_ABI_CALL(0x00028FA0u, xml1_guest_active_powerup_retire); /* call 0x00028FA0 */

loc_0002AD4F: ;
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    MEM32(eax) = edi;
    ecx = MEM32(ebx + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0002AD69u); RECOMP_ABI_CALL(0x0002A7B0u, sub_0002A7B0); /* call 0x0002A7B0 */

loc_0002AD69: ;
    eax = MEM32(esp + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002AD77; /* je: equal / zero */

loc_0002AD71: ;
    edx = MEM32(esp + 0x14);
    MEM32(eax) = edx;

loc_0002AD77: ;
    _fa = (uint32_t)(MEM32(ebx + 0x1FC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x1FC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002AD98; /* jne: not equal / not zero */

loc_0002AD80: ;
    eax = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002AD98; /* je: equal / zero */

loc_0002AD87: ;
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x44BA1C);
    ecx = ebx;
    PUSH32(esp, 0x0002AD98u); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_0002AD98: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002AF0C; /* je: equal / zero */

loc_0002ADA4: ;
    eax = MEM32(ebx + 0x1FC);
    ecx = MEM32(esp + 0x14);
    MEM32(esi) = eax;
    MEM32(ebx + 0x1FC) = ecx;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002ADC9; /* je: equal / zero */

loc_0002ADBD: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x1C);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0002ADC9u); RECOMP_ABI_CALL(0x000291E0u, sub_000291E0); /* call 0x000291E0 */

loc_0002ADC9: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002AF0C; /* je: equal / zero */

loc_0002ADD4: ;
    ecx = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002AF0C; /* je: equal / zero */

loc_0002ADDF: ;
    ebp = MEM32(esp + 0x38);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002AE80; /* je: equal / zero */

loc_0002ADEB: ;
    ecx = eax + 0x3C;
    PUSH32(esp, 0x0002ADF3u); RECOMP_ABI_CALL(0x00029360u, sub_00029360); /* call 0x00029360 */

loc_0002ADF3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0002AE61; /* jle: less or equal (signed <=) */

loc_0002ADF7: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(MEM8(eax + 0x72)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x72), 2 (8-bit) */
    ecx = eax + 0x3C;
    if (TEST_Z(_fa, _fb)) goto loc_0002AE4C; /* je: equal / zero */

loc_0002AE03: ;
    edi = esi + 0x38;
    PUSH32(esp, 0x0002AE0Bu); RECOMP_ABI_CALL(0x00013DC0u, sub_00013DC0); /* call 0x00013DC0 */

loc_0002AE0B: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0002AE13u); RECOMP_ABI_CALL(0x00013DC0u, sub_00013DC0); /* call 0x00013DC0 */

loc_0002AE13: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002AE19u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002AE19: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002AE2F; /* je: equal / zero */

loc_0002AE20: ;
    ecx = ebp;
    PUSH32(esp, 0x0002AE27u); RECOMP_ABI_CALL(0x0002EC20u, sub_0002EC20); /* call 0x0002EC20 */

loc_0002AE27: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0002AE2Fu); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_0002AE2F: ;
    ecx = esi;
    PUSH32(esp, 0x0002AE36u); RECOMP_ABI_CALL(0x000295F0u, sub_000295F0); /* call 0x000295F0 */

loc_0002AE36: ;
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, eax);
    ecx = ecx + 0x3C;
    PUSH32(esp, 0x0002AE42u); RECOMP_ABI_CALL(0x00013DC0u, sub_00013DC0); /* call 0x00013DC0 */

loc_0002AE42: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0002AE4Au); RECOMP_ABI_CALL(0x0003A520u, sub_0003A520); /* call 0x0003A520 */

loc_0002AE4A: ;
    goto loc_0002AE61;

loc_0002AE4C: ;
    PUSH32(esp, 0x0002AE51u); RECOMP_ABI_CALL(0x00013DC0u, sub_00013DC0); /* call 0x00013DC0 */

loc_0002AE51: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0002AE59u); RECOMP_ABI_CALL(0x00029690u, sub_00029690); /* call 0x00029690 */

loc_0002AE59: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0002AE61u); RECOMP_ABI_CALL(0x0002EAA0u, sub_0002EAA0); /* call 0x0002EAA0 */

loc_0002AE61: ;
    eax = MEM32(esi + 0x2C);
    SET_LO8(ecx, MEM8(eax + 0x71));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_0002AE80; /* jns: not sign (positive) */

loc_0002AE6B: ;
    PUSH32(esp, 0x0002AE70u); RECOMP_ABI_CALL(0x000AD680u, sub_000AD680); /* call 0x000AD680 */

loc_0002AE70: ;
    ecx = MEM32(ebp + 0x2D4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0002AE80u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002AE80: ;
    raven_xml1_powerup_effect_event(esi, 1, 0);
    ecx = esi;
    PUSH32(esp, 0x0002AE87u); RECOMP_ABI_CALL(0x00029530u, sub_00029530); /* call 0x00029530 */

loc_0002AE87: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x5C);
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x108); PUSH32(esp, 0x0002AE9Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002AE9D: ;
    ecx = MEM32(esi + 0x2C);
    fp_push(MEMF(ecx + 0x4C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002AEDE; /* jne: not equal / not zero */

loc_0002AEB0: ;
    PUSH32(esp, 0x0002AEB5u); RECOMP_ABI_CALL(0x00096740u, xml1_guest_powerup_definition_allocate); /* call 0x00096740 */

loc_0002AEB5: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x30) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0002AEDE; /* je: equal / zero */

loc_0002AEBE: ;
    edx = MEM32(esi + 0x2C);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0002AEC9u); RECOMP_ABI_CALL(0x000953A0u, xml1_guest_powerup_definition_copy); /* call 0x000953A0 */

loc_0002AEC9: ;
    raven_xml1_powerup_metadata_shared_copy(MEM32(esi + 0x30));
    eax = MEM32(esi + 0x30);
    ecx = MEM32(eax + 0x50);
    MEM32(eax + 0x24) = ecx;
    edx = MEM32(esi + 0x30);
    MEM32(edx + 0x50) = edi;
    eax = MEM32(esi + 0x30);
    MEM32(eax + 0x4C) = edi;

loc_0002AEDE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002AEF9; /* je: equal / zero */

loc_0002AEE2: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(MEM8(ecx + 0x1C)) & 0xFFu; _fb = (uint32_t)(0x36) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x1C), 0x36 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002AEF9; /* jne: not equal / not zero */

loc_0002AEEB: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x4F338C);
    ecx = ebp;
    PUSH32(esp, 0x0002AEF9u); RECOMP_ABI_CALL(0x000290D0u, sub_000290D0); /* call 0x000290D0 */

loc_0002AEF9: ;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(edx + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002AF0C; /* je: equal / zero */

loc_0002AF06: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0002AF09u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002AF09: ;
    esp = esp + 4;

loc_0002AF0C: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 20; return; /* ret 16 */

loc_0002AF18: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
