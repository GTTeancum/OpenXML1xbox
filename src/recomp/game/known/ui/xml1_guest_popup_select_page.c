#define RECOMP_GENERATED_CODE
#include "ui/pc_menu.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_popup_select_page; original guest entry 0x00185E40.
 * Evidence: src/engine/world/raven_campaign_menu_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00185E40
 * Original: 0x00185E40 - 0x00185F81 (321 bytes, 90 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_popup_select_page(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00185E40: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00185E5B; /* jl: less (signed <) */

loc_00185E50: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00185E5B; /* jge: greater or equal (signed >=) */

loc_00185E55: ;
    MEM32(edi + 0x3A1C) = eax;

loc_00185E5B: ;
    eax = MEM32(edi + 0x3A1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00185E76; /* jl: less (signed <) */

loc_00185E65: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00185E76; /* jge: greater or equal (signed >=) */

loc_00185E6A: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x135C);
    esi = eax + edi + 4;
    goto loc_00185E79;

loc_00185E76: ;
    esi = edi + 4;

loc_00185E79: ;
    MEM32(esi + 0x1104) = 0xFFFFFFFFu;
    PUSH32(esp, 0x200);
    MEM32(esi + 0x1108) = ebx;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, esi);
    MEM8(esi + 0x1354) = LO8(ebx);
    MEM8(esi + 0x1355) = 6;
    MEM8(esi + 0x1356) = LO8(ebx);
    MEM8(esi + 0x1357) = 0xFF;
    PUSH32(esp, 0x00185EB3u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00185EB3: ;
    MEM8(esi + 0x1FF) = LO8(ebx);
    SET_LO8(eax, MEM8(esi + 0x1359));
    PUSH32(esp, 0x80);
    SET_LO8(eax, LO8(eax) & 0xF7);
    SET_LO8(eax, LO8(eax) | 6);
    ebp = esi + 0x11CD;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, ebp);
    MEM8(esi + 0x1359) = LO8(eax);
    PUSH32(esp, 0x00185EDFu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00185EDF: ;
    PUSH32(esp, 0x80);
    MEM8(ebp + 0x7F) = LO8(ebx);
    ebp = esi + 0x124D;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00185EF8u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00185EF8: ;
    PUSH32(esp, 0x80);
    MEM8(ebp + 0x7F) = LO8(ebx);
    ebp = esi + 0x12CD;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00185F11u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00185F11: ;
    MEM8(ebp + 0x7F) = LO8(ebx);
    SET_LO8(edx, MEM8(esi + 0x1359));
    SET_LO8(edx, LO8(edx) & 0xEE);
    esp = esp + 0x30;
    MEM32(esi + 0x1350) = 0xBF800000u;
    MEM8(esi + 0x1358) = 0xFF;
    MEM8(esi + 0x1359) = LO8(edx);
    PUSH32(esp, 0x00185F3Cu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_00185F3C: ;
    edx = MEM32(eax);
    esi = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F6);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00185F4Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00185F4A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(esi + 0x3C); PUSH32(esp, 0x00185F51u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00185F51: ;
    PUSH32(esp, 0x00185F56u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_00185F56: ;
    edx = MEM32(eax);
    esi = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x409);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00185F64u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00185F64: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(esi + 0x3C); PUSH32(esp, 0x00185F6Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00185F6C: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 2);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00185F7Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00185F7A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
