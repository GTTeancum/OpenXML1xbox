#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_registry_guest.h"
#include "engine/progression/talent_package_guest.h"
#include "engine/progression/talent_source_table.h"
#include "diagnostics/raven_operand_trace.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include <math.h>

/* xml1_guest_values_manager_get; original guest entry 0x000B8550.
 * Evidence: src/engine/world/raven_extraction_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000B8550
 * Original: 0x000B8550 - 0x000B85CB (123 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_values_manager_get(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8550: ;
    SET_LO8(ecx, MEM8(0x4D810C));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B85C5; /* jne: not equal / not zero */

loc_000B855F: ;
    MEM32(0x4D810C) = MEM32(0x4D810C) | eax;
    ecx = 0x4D73C0;
    MEM32(0x4D73B0) = 0x3D4380;
    MEM32(0x4D73B8) = 0x3FFFFFFF;
    MEM32(0x4D73BC) = 0xFFFFFFFFu;
    MEM32(0x4D73B4) = 0x3D4350;
    PUSH32(esp, 0x000B8597u); RECOMP_ABI_CALL(0x000B7D70u, sub_000B7D70); /* call 0x000B7D70 */

loc_000B8597: ;
    eax = 0x4D7D48;
    ecx = 0x78;
    edx = 0; /* xor self */

loc_000B85A3: ;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    eax = eax + 8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B85A3; /* jne: not equal / not zero */

loc_000B85AE: ;
    PUSH32(esp, 0x35A0C0);
    MEM32(0x4D73B4) = 0x3D4368;
    PUSH32(esp, 0x000B85C2u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_000B85C2: ;
    esp = esp + 4;

loc_000B85C5: ;
    eax = 0x4D73B0;
    esp += 4; return; /* ret */

}
