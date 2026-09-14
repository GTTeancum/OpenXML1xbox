"""Reproducible NXDK adaptations of the copied generated XML1 code and cxbe."""
from pathlib import Path
import hashlib, json, shutil,re

root=Path(__file__).resolve().parent.parent
out=root/'nxdk'
gen=root/'src/recomp/gen'
header=gen/'recomp_types.h'
text=header.read_text()
old='#define XBOX_PTR(addr) ((uintptr_t)(uint32_t)(addr) + g_xbox_mem_offset)'
new='''#if defined(NXDK)
/* The native executable owns the XBE header at 0x10000. Preserve the
   original game's first 64 KiB separately; remaining guest VAs are native. */
extern uint8_t port_xbe_header[65536];
static inline uintptr_t port_translate_va(uint32_t va) {
    return va >= 0x10000u && va < 0x20000u ?
        (uintptr_t)(port_xbe_header + va - 0x10000u) : (uintptr_t)va;
}
#define XBOX_PTR(addr) port_translate_va((uint32_t)(addr))
#else
'''+old+'\n#endif'
if new not in text:
    if text.count(old)!=1: raise SystemExit('Unexpected generated memory macro')
    header.write_text(text.replace(old,new))

text=header.read_text()
if '#include "context.h"' not in text:
    text=text.replace('extern RECOMP_TLS uint32_t g_eax,', '#if defined(NXDK)\n#include "context.h"\n#endif\n\nextern RECOMP_TLS uint32_t g_eax,',1)
    words=['eax','ecx','edx','esp','ebx','esi','edi','ebp','fs_base','seh_ebp','fp_top','fp_cmp','df','fp_control_word','fp_cc']
    def register_declaration(m):
        declaration=m[0];definitions=[]
        for name in re.findall(r'\bg_\w+',declaration):
            n=name[2:]
            if n in words:
                t='int' if n in ('fp_top','fp_cmp','df') else 'uint16_t' if n in ('fp_control_word','fp_cc') else 'uint32_t'
                expr=f'(*({t}*)&port_registers()->words[{words.index(n)}])'
            elif n=='fp_stack':expr='(port_registers()->fp)'
            elif n.startswith('xmm'):expr=f'(*(RecompXmm*)port_registers()->xmm[{n[3:]}])'
            elif n.startswith('mm'):expr=f'(*(RecompMmx*)&port_registers()->mm[{n[2:]}])'
            else:raise SystemExit('Unknown register '+name)
            definitions.append(f'#define {name} {expr}')
        return '#if defined(NXDK)\n'+'\n'.join(definitions)+'\n#else\n'+declaration+'\n#endif'
    text=re.sub(r'extern RECOMP_TLS [^;]+;',register_declaration,text)
    header.write_text(text)

# The old XDK CRT changes the native code-segment descriptor around startup.
# NXDK already establishes the native execution environment. Keep its GDT and
# return the existing descriptor to the CRT's save/restore bookkeeping.
p=gen/'recomp_0036.c'; text=p.read_text()
signature='void sub_001A3C54(void)\n{'
marker='/* NXDK code-segment ownership */'
if marker not in text:
    start=text.index(signature); end=text.index('\n}\n',start)+3
    original=text[start:end]
    replacement='''#if defined(NXDK)
/* NXDK code-segment ownership */
void sub_001A3C54(void) {
    struct __attribute__((packed)) { uint16_t limit; uint32_t base; } gdtr;
    __asm__ volatile("sgdt %0":"=m"(gdtr));
    g_eax=*(uint32_t*)(uintptr_t)(gdtr.base+8);
    g_edx=*(uint32_t*)(uintptr_t)(gdtr.base+12);
    g_esp+=12;
}
#else
'''+original+'#endif\n'
    p.write_text(text[:start]+replacement+text[end:])

# A generated function stays in one register bank for its entire activation.
# Select it once, rather than emitting an interrupt/TLS lookup per register.
for p in gen.glob('recomp_*.c'):
    text=p.read_text()
    if '/* NXDK per-function register bank */' in text:
        fixed=text.replace('_port_regs=port_acquire_register_bank();\n#endif ', '_port_regs=port_acquire_register_bank();\n#endif\n')
        if fixed!=text:p.write_text(fixed)
        continue
    pattern=r'(void \w+\(void\)\s*\{)'
    first=re.search(pattern,text)
    if not first:continue
    prefix='''#if defined(NXDK)
/* NXDK per-function register bank */
#define port_registers() _port_regs
#endif
'''
    text=text[:first.start()]+prefix+text[first.start():]
    text=re.sub(pattern,r'\1\n#if defined(NXDK)\n    PortRegisterBank *const _port_regs=port_acquire_register_bank();\n#endif\n',text)
    p.write_text(text)

# Local tool copy; never modify the shared C:/nxdk installation.
p=gen/'recomp_0034.c';text=p.read_text()
marker='port_audio_creation_result(g_eax,MEM32(0x58A514));'
if marker not in text:
    text=text.replace('loc_001900BC: ;','loc_001900BC: ;\n#if defined(NXDK)\n    '+marker+'\n#endif')
    p.write_text(text)

tool=out/'tools/cxbe'; tool.mkdir(parents=True,exist_ok=True)
sdk=Path('C:/nxdk/tools/cxbe')
for source in sdk.iterdir():
    if source.suffix in ('.cpp','.h') or source.name=='Makefile':
        target=tool/source.name
        if not target.exists(): shutil.copy2(source,target)
source=tool/'Xbe.cpp'; text=source.read_text()
text=text.replace('m_Header.dwInitFlags.bLimit64MB = true;', 'm_Header.dwInitFlags.bLimit64MB = false; // Use the memory actually installed.')
if source.read_text()!=text:source.write_text(text)
old='''m_Header.dwPeBaseAddr = m_Header.dwBaseAddr + RoundUp(m_Header.dwSizeofHeaders, 0x1000) -
                                x_Exe->m_SectionHeader[0].m_virtual_addr;'''
new='''// XML1: keep the linked native code above the original guest image.
        // The standard XBE header remains at 0x10000 for the Xbox loader.
        m_Header.dwPeBaseAddr = x_Exe->m_OptionalHeader.m_image_base;'''
if old in text: source.write_text(text.replace(old,new))
elif new not in text: raise SystemExit('Unexpected cxbe layout code')

analysis=json.loads((root/'analysis/default_analysis.json').read_text())
with (out/'imports.inc').open('w') as f:
    for item in analysis['kernel_imports']:
        f.write('{%su, %du, "%s"},\n'%(item['thunk_addr'],item['ordinal'],item['name']))
manifest={'source_snapshot':'387e90d','xboxrecomp_snapshot':'eac02c2',
          'entry':analysis['entry_point'],'title_id':analysis['title_id'],
          'files':{p.name:hashlib.sha256(p.read_bytes()).hexdigest() for p in gen.glob('*.c')}}
(out/'generated-manifest.json').write_text(json.dumps(manifest,indent=2)+'\n')
print('Prepared NXDK memory adapter, local cxbe, and',len(analysis['kernel_imports']),'imports')
