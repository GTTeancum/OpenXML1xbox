#define RECOMP_GENERATED_CODE
#include "ui/pc_menu.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_popup_add_choice; original guest entry 0x00185C30.
 * Evidence: src/engine/world/raven_campaign_menu_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00185C30
 * Original: 0x00185C30 - 0x00185DEC (444 bytes, 128 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_popup_add_choice(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00185C30: ;
    eax = MEM32(ecx + 0x3A1C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_00185C4F; /* jl: less (signed <) */

loc_00185C3E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00185C4F; /* jge: greater or equal (signed >=) */

loc_00185C43: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x135C);
    esi = eax + ecx + 4;
    goto loc_00185C52;

loc_00185C4F: ;
    esi = ecx + 4;

loc_00185C52: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00185DE7; /* je: equal / zero */

loc_00185C5E: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00185DE7; /* je: equal / zero */

loc_00185C66: ;
    SET_LO8(eax, MEM8(esi + 0x1354));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00185DE7; /* je: equal / zero */

loc_00185C74: ;
    PUSH32(esp, edi);
    edi = SX8(LO8(eax));
    edi = edi + 4;
    PUSH32(esp, 0x80);
    edi = edi << 7;
    PUSH32(esp, ecx);
    edi = edi + esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00185C8Cu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00185C8C: ;
    eax = MEM32(esp + 0x20);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(edi + 0x7F) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00185CB7; /* je: equal / zero */

loc_00185C9A: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00185CB7; /* je: equal / zero */

loc_00185C9E: ;
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x1354);
    eax = eax << 7;
    ecx = eax + esi + 0x701;
    PUSH32(esp, 0x00185CB5u); RECOMP_ABI_CALL(0x00059AF0u, sub_00059AF0); /* call 0x00059AF0 */

loc_00185CB5: ;
    goto loc_00185CDE;

loc_00185CB7: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x1354);
    ecx = ecx << 7;
    PUSH32(esp, 0x80);
    edi = ecx + esi + 0x701;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00185CD8u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00185CD8: ;
    esp = esp + 0xC;
    MEM8(edi + 0x7F) = LO8(ebx);

loc_00185CDE: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00185D03; /* je: equal / zero */

loc_00185CE6: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00185D03; /* je: equal / zero */

loc_00185CEA: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x1354);
    edx = edx << 7;
    PUSH32(esp, eax);
    ecx = edx + esi + 0xC02;
    PUSH32(esp, 0x00185D01u); RECOMP_ABI_CALL(0x00059AF0u, sub_00059AF0); /* call 0x00059AF0 */

loc_00185D01: ;
    goto loc_00185D2A;

loc_00185D03: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x1354);
    eax = eax << 7;
    PUSH32(esp, 0x80);
    edi = eax + esi + 0xC02;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00185D24u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00185D24: ;
    esp = esp + 0xC;
    MEM8(edi + 0x7F) = LO8(ebx);

loc_00185D2A: ;
    _fa = (uint32_t)(MEM8(esp + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x1C), LO8(ebx) (8-bit) */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x1354);
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00185D54; /* je: equal / zero */

loc_00185D38: ;
    edx = ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = esi + edx * 4 + 0x1104;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    ecx = ecx | edx;
    goto loc_00185D75;

loc_00185D54: ;
    eax = ecx;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    ecx = MEM32(esi + eax * 4 + 0x1104);
    eax = esi + eax * 4 + 0x1104;
    edx = ~edx;
    ecx = ecx & edx;

loc_00185D75: ;
    MEM32(eax) = ecx;
    SET_LO8(eax, MEM8(esp + 0x1C));
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x1354);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    edx = 1;
    eax = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00185DA7; /* je: equal / zero */

loc_00185D8D: ;
    ecx = ecx & 0x1F;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    edx = edx << LO8(ecx);
    ecx = MEM32(esi + eax * 4 + 0x1108);
    eax = esi + eax * 4 + 0x1108;
    ecx = ecx | edx;
    goto loc_00185DC1;

loc_00185DA7: ;
    ecx = ecx & 0x1F;
    edx = edx << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    ecx = MEM32(esi + eax * 4 + 0x1108);
    eax = esi + eax * 4 + 0x1108;
    edx = ~edx;
    ecx = ecx & edx;

loc_00185DC1: ;
    MEM32(eax) = ecx;
    SET_LO8(eax, MEM8(esi + 0x1354));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 0x1354) = LO8(eax);
    SET_LO8(ecx, LO8(eax));
    SET_LO8(eax, MEM8(esi + 0x1357));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00185DE1; /* jl: less (signed <) */

loc_00185DDD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00185DE7; /* jl: less (signed <) */

loc_00185DE1: ;
    MEM8(esi + 0x1357) = LO8(ebx);

loc_00185DE7: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}
