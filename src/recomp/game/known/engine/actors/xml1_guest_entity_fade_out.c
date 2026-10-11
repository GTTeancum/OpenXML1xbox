#define RECOMP_GENERATED_CODE
#include "audio/raven_loop_sound_runtime.h"
#include "engine/combat/raven_native_damage.h"
#include "engine/powers/raven_powerup_guest.h"
#include "engine/scripting/raven_script_extensions.h"
#include "engine/world/raven_campaign_state_guest.h"
#include "engine/world/raven_extraction_guest.h"
#include "engine/world/raven_extraction_owner.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_entity_fade_out; original guest entry 0x000749E0.
 * Evidence: src/engine/scripting/raven_script_extensions.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000749E0
 * Original: 0x000749E0 - 0x00074A33 (83 bytes, 21 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void xml1_guest_entity_fade_out(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000749E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x100); PUSH32(esp, 0x000749F2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000749F2: ;
    PUSH32(esp, 0x000749F7u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000749F7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00074A01u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00074A01: ;
    fp_top() = fp_top() + MEMF(esp + 0xC); /* fadd dword ptr [esp + 0xc] */
    eax = MEM32(esp + 8);
    MEM32(esi + 0x1A0) = 0;
    MEMF(esi + 0x198) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x1A4) = eax;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8324); /* fmul dword ptr [0x3c8324] */
    MEMF(esi + 0x19C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
