#define RECOMP_GENERATED_CODE
#include "engine/powers/raven_victim_event_guest.h"
#include "engine/powers/raven_powerup_metadata.h"
#include "engine/combat/raven_harming_callbacks.h"
#include "engine/powers/raven_powerup_guest.h"
#include "engine/scripting/raven_script_extensions.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_powerup_definition_parse; original guest entry 0x00096370.
 * Evidence: tests/engine/powers/raven_powerup_guest_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00096370
 * Original: 0x00096370 - 0x0009649B (299 bytes, 98 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_powerup_definition_parse(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00096370: ;
    raven_xml1_powerup_capture_effects(ecx, MEM32(esp + 4));
    PUSH32(esp, 0xFFFFFFFFu);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0x34FA40);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    ecx = 0; /* xor self */
    PUSH32(esp, edi);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 1 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    ebp = ecx;
    if ((ecx == 0)) goto loc_000963D8; /* je: equal / zero */

loc_000963A2: ;
    esi = MEM32(ebp + 0x54);
    eax = ebp + 0x2C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000963D8; /* je: equal / zero */

loc_000963AC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000963D8; /* je: equal / zero */

loc_000963B0: ;
    ecx = esi + 4;
    PUSH32(esp, 0x000963B8u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000963B8: ;
    ecx = esi + 0x14;
    edi = eax;
    PUSH32(esp, 0x000963C2u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000963C2: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x000963CBu); RECOMP_ABI_CALL(0x000955C0u, xml1_guest_powerup_definition_parse_attribute); /* call 0x000955C0 */

loc_000963CB: ;
    ecx = esi;
    PUSH32(esp, 0x000963D2u); RECOMP_ABI_CALL(0x00125BD0u, sub_00125BD0); /* call 0x00125BD0 */

loc_000963D2: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000963B0; /* jne: not equal / not zero */

loc_000963D8: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D06A8);
    ecx = esp + 0x18;
    PUSH32(esp, 0x000963E8u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000963E8: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = ebp;
    MEM32(esp + 0x3C) = 0;
    PUSH32(esp, 0x000963FCu); RECOMP_ABI_CALL(0x00125FE0u, sub_00125FE0); /* call 0x00125FE0 */

loc_000963FC: ;
    ecx = esp + 0x10;
    edi = eax;
    MEM32(esp + 0x38) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0009640Fu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0009640F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00096484; /* je: equal / zero */

loc_00096413: ;
    esi = MEM32(edi + 0x54);
    eax = edi + 0x2C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096449; /* je: equal / zero */

loc_0009641D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00096449; /* je: equal / zero */

loc_00096421: ;
    ecx = esi + 4;
    PUSH32(esp, 0x00096429u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00096429: ;
    ecx = esi + 0x14;
    ebp = eax;
    PUSH32(esp, 0x00096433u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00096433: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x0009643Cu); RECOMP_ABI_CALL(0x000955C0u, xml1_guest_powerup_definition_parse_attribute); /* call 0x000955C0 */

loc_0009643C: ;
    ecx = esi;
    PUSH32(esp, 0x00096443u); RECOMP_ABI_CALL(0x00125BD0u, sub_00125BD0); /* call 0x00125BD0 */

loc_00096443: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00096421; /* jne: not equal / not zero */

loc_00096449: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D06A8);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00096459u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00096459: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x3C) = 1;
    PUSH32(esp, 0x0009646Du); RECOMP_ABI_CALL(0x00126080u, sub_00126080); /* call 0x00126080 */

loc_0009646D: ;
    ecx = esp + 0x20;
    edi = eax;
    MEM32(esp + 0x38) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00096480u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00096480: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00096413; /* jne: not equal / not zero */

loc_00096484: ;
    raven_harming_install_callbacks(ebx);
    ecx = MEM32(esp + 0x30);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x2C;
    esp += 8; return; /* ret 4 */

}
