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

# BlockOnTime can insert the current fence itself. Native kickoff only queues
# work; demand actual completion here, before the Xbox-only interrupt wait.
fence_path = root / 'recomp_0095.c'
text = fence_path.read_text(encoding='utf-8')
fence_hook = '''loc_0035FE0F: ;
    /* Complete the issued fence before entering the Xbox hardware wait. */
    if (xml1_graphics_wait_fence(esi, edi)) goto loc_0035FF23;'''
old_fence_hook = '''loc_0035FE0F: ;
    /* Native DX8 may have completed the fence inserted just above. */
    if (xml1_graphics_fence_complete(esi, edi)) goto loc_0035FF23;'''
if old_fence_hook in text:
    text = text.replace(old_fence_hook, fence_hook, 1).replace(
        'int xml1_graphics_fence_complete(uint32_t device, uint32_t target);',
        'int xml1_graphics_wait_fence(uint32_t device, uint32_t target);')
    fence_path.write_text(text, encoding='utf-8')
if fence_hook not in text:
    if text.count('loc_0035FE0F: ;') != 1 or text.count('void sub_0035FDE0(void)') != 1:
        raise SystemExit('Cannot locate the verified XML1 BlockOnTime boundary')
    text = text.replace('void sub_0035FDE0(void)',
                        'int xml1_graphics_wait_fence(uint32_t device, uint32_t target);\n'
                        'void sub_0035FDE0(void)', 1)
    text = text.replace('loc_0035FE0F: ;', fence_hook, 1)
    fence_path.write_text(text, encoding='utf-8')

# The XDK software push-buffer path normally writes latest-2 immediately at
# 0035FC76. That was safe only while our entry hook synchronously drained GPU
# work. With deferred kickoff, the native backend owns completion publication.
text = fence_path.read_text(encoding='utf-8')
old_tag = '    eax = eax - 2;\n    MEM32(ecx) = eax;\n    edx = MEM32(esi + 0x2478);'
new_tag = '    eax = eax - 2;\n    xml1_graphics_kickoff_tag(ecx, eax);\n    edx = MEM32(esi + 0x2478);'
if new_tag not in text:
    if text.count(old_tag) != 1: raise SystemExit('Cannot locate verified XDK software kickoff completion store')
    text = text.replace(old_tag, new_tag).replace('void sub_0035FC00(void)',
        'void xml1_graphics_kickoff_tag(uint32_t pointer, uint32_t value);\nvoid sub_0035FC00(void)', 1)
    fence_path.write_text(text, encoding='utf-8')

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

for path in root.glob('recomp_*.c'):
    text = path.read_text(encoding='utf-8')
    original = text
    for name in ('0030FF50', '003072A0', '0030BDA0'):
        marker = 'void sub_' + name + '(void)'
        if marker not in text:
            continue
        start = text.index(marker)
        end = text.index('\nvoid sub_', start+len(marker))
        block = text[start:end]
        # 00307210 has a caller-cleaned argument; it obeys the same return rule.
        text = text[:start] + block.replace('RECOMP_ABI_CALL(', 'XML1_CHECK_CDECL0(') + text[end:]
    if text != original:
        path.write_text(text, encoding='utf-8')

# Time the converter itself, excluding later graphics and synchronization calls.
for path in root.glob('recomp_*.c'):
    text = path.read_text(encoding='utf-8')
    marker = 'void sub_0032B8A0(void)\n{'
    if marker not in text or 'xml1_movie_convert_begin' in text:
        continue
    text = text.replace(marker, 'static void xml1_movie_convert_impl(void)\n{', 1)
    text += """
extern void xml1_movie_convert_begin(void);
extern void xml1_movie_convert_end(void);
void sub_0032B8A0(void) {
    xml1_movie_convert_begin();
    xml1_movie_convert_impl();
    xml1_movie_convert_end();
}
"""
    path.write_text(text, encoding='utf-8')
