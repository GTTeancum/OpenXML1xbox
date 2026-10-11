#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_slot_layout.h"
#include "engine/saves/raven_saved_stats_guest.h"
#include "engine/world/raven_extraction_guest.h"
#include "engine/world/raven_extraction_owner.h"
#include "ui/pc_prompts.h"
#include "ui/pc_menu.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include "engine/progression/character_talent_guest.h"
#include "game/xml1/newgame_plus.h"
#include "diagnostics/newgame_trace.h"
#include "game/xml1/character_limits.h"
#include <math.h>

/* xml1_guest_popup_show; original guest entry 0x001872E0.
 * Evidence: src/engine/world/raven_campaign_menu_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_001872E0
 * Original: 0x001872E0 - 0x001873CE (238 bytes, 85 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_popup_show(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001872E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x3A1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_001872FF; /* jl: less (signed <) */

loc_001872EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001872FF; /* jge: greater or equal (signed >=) */

loc_001872F3: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x135C);
    esi = eax + edi + 4;
    goto loc_00187302;

loc_001872FF: ;
    esi = edi + 4;

loc_00187302: ;
    PUSH32(esp, 0x00187307u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_00187307: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0018730Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018730E: ;
    _fa = (uint32_t)(MEM8(edi + 0x3A36)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x3A36), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0018733A; /* jne: not equal / not zero */

loc_00187317: ;
    PUSH32(esp, 0x0018731Cu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0018731C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x110); PUSH32(esp, 0x00187326u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187326: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00187343; /* jne: not equal / not zero */

loc_0018732A: ;
    PUSH32(esp, 0x0018732Fu); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_0018732F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00187336u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187336: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00187343; /* je: equal / zero */

loc_0018733A: ;
    ecx = edi;
    PUSH32(esp, 0x00187341u); RECOMP_ABI_CALL(0x001862C0u, sub_001862C0); /* call 0x001862C0 */

loc_00187341: ;
    goto loc_0018734A;

loc_00187343: ;
    ecx = edi;
    PUSH32(esp, 0x0018734Au); RECOMP_ABI_CALL(0x00186420u, sub_00186420); /* call 0x00186420 */

loc_0018734A: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x1359) = MEM8(esi + 0x1359) | 1;
    PUSH32(esp, 0x00187356u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_00187356: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0018735Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0018735F: ;
    SET_LO8(eax, MEM8(esi + 0x1354));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001873CB; /* jne: not equal / not zero */

loc_00187369: ;
    PUSH32(esp, 0x0018736Eu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0018736E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x409);
    ecx = eax;
    edi = esi + 0x114C;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00187380u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00187380: ;
    esi = eax;
    ecx = edi;
    PUSH32(esp, ebx);

loc_00187385: ;
    SET_LO8(edx, MEM8(ecx));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(eax, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001873AD; /* jne: not equal / not zero */

loc_0018738F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001873A9; /* je: equal / zero */

loc_00187393: ;
    SET_LO8(edx, MEM8(ecx + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(eax, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001873AD; /* jne: not equal / not zero */

loc_0018739F: ;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00187385; /* jne: not equal / not zero */

loc_001873A9: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_001873B2;

loc_001873AD: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_001873B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_001873CB; /* jne: not equal / not zero */

loc_001873B7: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001873C4u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_001873C4: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    MEM8(edi + 0x3F) = 0;

loc_001873CB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
