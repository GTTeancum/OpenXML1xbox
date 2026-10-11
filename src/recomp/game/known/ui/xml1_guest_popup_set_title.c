#define RECOMP_GENERATED_CODE
#include "ui/pc_menu.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_popup_set_title; original guest entry 0x00186BC0.
 * Evidence: src/engine/world/raven_campaign_menu_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00186BC0
 * Original: 0x00186BC0 - 0x00186C57 (151 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_popup_set_title(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00186BC0: ;
    esp = esp - 0x204;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    ebx = ecx;
    MEM32(esp + 0x204) = eax;
    eax = MEM32(ebx + 0x3A1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    if (TEST_S(_fas, _fbs)) goto loc_00186BF2; /* jl: less (signed <) */

loc_00186BE1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00186BF2; /* jge: greater or equal (signed >=) */

loc_00186BE6: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x135C);
    ebp = eax + ebx + 4;
    goto loc_00186BF5;

loc_00186BF2: ;
    ebp = ebx + 4;

loc_00186BF5: ;
    esi = MEM32(esp + 0x214);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00186C3F; /* je: equal / zero */

loc_00186C00: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00186C3F; /* je: equal / zero */

loc_00186C05: ;
    PUSH32(esp, edi);
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x00186C10u); RECOMP_ABI_CALL(0x00153570u, sub_00153570); /* call 0x00153570 */

loc_00186C10: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x200);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00186C22u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00186C22: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x1355);
    ecx = 0x80;
    esi = esp + 0x10;
    edi = ebp;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00186C3Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00186C3E: ;
    POP32(esp, edi);

loc_00186C3F: ;
    ecx = MEM32(esp + 0x20C);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x00186C4Eu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00186C4E: ;
    esp = esp + 0x204;
    esp += 8; return; /* ret 4 */

}
