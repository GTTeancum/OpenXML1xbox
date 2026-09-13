"""Replace upstream silent missing-function returns with explicit diagnostics.

This is not an implementation of the missing functions. It prevents a skipped
startup/gameplay service from masquerading as successful execution.
"""
from pathlib import Path
import re

root = Path(__file__).resolve().parents[1] / 'src/recomp/gen'
count = 0
for path in root.glob('*.c'):
    original = path.read_text(encoding='utf-8')
    def guard(match):
        global count
        count += 1
        name = match.group(1)
        return f'void {name}(void) {{ xml1_missing_operation("unresolved {name}", __FILE__, __LINE__); }}'
    result = re.sub(r'void (\w+)\(void\) \{[^{}\n]*/\* translation failed \*/[^{}\n]*\}', guard, original)
    if path.name == 'recomp_stubs_unresolved.c':
        result = re.sub(r'void (\w+)\(void\) \{ g_esp \+= [^{}\n]*\}', guard, result)
    if result != original:
        path.write_text(result, encoding='utf-8')
print(f'Installed {count} fail-fast missing-function guards')

types = root / 'recomp_types.h'
original = types.read_text(encoding='utf-8')
macro = '#define RECOMP_ABI_CALL(va, fn) (fn)()'
replacement = ('void xml1_graphics_observe(uint32_t va);\n'
               '#define RECOMP_ABI_CALL(va, fn) (xml1_graphics_observe(va), (fn)())')
if macro not in original and replacement not in original:
    raise SystemExit('Cannot find the pinned RECOMP_ABI_CALL macro for graphics observation')
result = original.replace(macro, replacement)
if result != original:
    types.write_text(result, encoding='utf-8')

# Diagnose the first broken callback contract in the movie worker's dispatch
# loop. Stop at the producer of corruption, not a later invalid table entry.
for path in root.glob('recomp_*.c'):
    text = path.read_text(encoding='utf-8')
    marker = 'PUSH32(esp, 0x0030BBE7u); RECOMP_ICALL_SAFE'
    if marker not in text or 'XML1 movie callback contract' in text:
        continue
    at = text.index(marker)
    start = text.rfind('    { uint32_t _icall_esp = g_esp;', 0, at)
    end = text.index('\n    }', at) + len('\n    }')
    if start < 0:
        raise SystemExit('Cannot locate movie callback diagnostics boundary')
    block = text[start:end]
    checked = '''    { /* XML1 movie callback contract */
    uint32_t cb_sp=g_esp, cb_si=g_esi, cb_di=g_edi, cb_bx=g_ebx, cb_target=g_eax;
''' + block + '''
    if (g_esp != cb_sp-4 || g_esi != cb_si || g_edi != cb_di || g_ebx != cb_bx) {
        fprintf(stderr,"[FATAL CALLBACK ABI] target=%08X esp=%08X expected=%08X esi=%08X/%08X edi=%08X/%08X ebx=%08X/%08X\\n",
            cb_target,g_esp,cb_sp-4,g_esi,cb_si,g_edi,cb_di,g_ebx,cb_bx);
        _exit(4);
    }
    }'''
    path.write_text(text[:start]+checked+text[end:], encoding='utf-8')
