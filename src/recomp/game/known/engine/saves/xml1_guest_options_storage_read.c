#define RECOMP_GENERATED_CODE
#include "engine/scripting/raven_script_extensions.h"
#include "engine/world/raven_progress_guest.h"
#include "ui/pc_menu.h"
#include "engine/saves/save_name.h"
#include "app/build_settings.h"
#include "engine/core/motionpath_name.h"
#include "recomp_funcs.h"
#include "game/xml1/newgame_plus.h"
#include "game/xml1/character_limits.h"
#include <math.h>

/* xml1_guest_options_storage_read; original guest entry 0x00120090.
 * Evidence: src/engine/world/raven_progress_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00120090
 * Original: 0x00120090 - 0x0012011F (143 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_options_storage_read(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120090: ;
    if (xml1_progress_options_io(1)) return;
    esp = esp - 0x104;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x108) = eax;
    esi = ecx;
    PUSH32(esp, 0x001200ABu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_001200AB: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xBC0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001200B7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001200B7: ;
    ecx = eax;
    edi = ecx + 1;
    /* nop */

loc_001200C0: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001200C0; /* jne: not equal / not zero */

loc_001200C7: ;
    PUSH32(esp, 0x80);
    ecx = ecx - edi;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001200DFu); RECOMP_ABI_CALL(0x0019DC02u, sub_0019DC02); /* call 0x0019DC02 */

loc_001200DF: ;
    eax = MEM32(esp + 0x118);
    ecx = MEM32(esp + 0x114);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x114);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3DAA3C);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00120108u); RECOMP_ABI_CALL(0x00120120u, sub_00120120); /* call 0x00120120 */

loc_00120108: ;
    ecx = MEM32(esp + 0x108);
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x00120116u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00120116: ;
    esp = esp + 0x104;
    esp += 16; return; /* ret 12 */

}
