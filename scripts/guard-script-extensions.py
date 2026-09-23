"""Register traced XML2 commands through XML1's original interpreter registry."""
from pathlib import Path
root=Path(__file__).resolve().parents[1]
p=root/'src/recomp/gen/recomp_0012.c'
s=p.read_text()
marker='loc_00099B66: ;\n    esp += 4; return; /* ret */'
replacement='loc_00099B66: ;\n    xml1_register_script_extensions(MEM32(0x4EBF54));\n    esp += 4; return; /* ret */'
if replacement not in s:
    if s.count(marker)!=1:raise SystemExit('Native script registration boundary changed')
    s='#include "raven_script_extensions.h"\n'+s.replace(marker,replacement,1)
    p.write_text(s)
p=root/'src/recomp/gen/recomp_types.h'
s=p.read_text()
marker='#define RECOMP_ICALL_IS_CODE(_va)'
extra='''/* XML1 registered guest thunk tokens are checked individually. Normal code
 * retains the original fast range check; no general heap execution is enabled. */
#ifdef XML1_SCRIPT_EXTENSIONS
#include "raven_script_extensions.h"
#define RECOMP_REGISTERED_EXTENSION(_va) xml1_script_extension_is_code(_va)
#else
#define RECOMP_REGISTERED_EXTENSION(_va) 0
#endif
'''
if 'RECOMP_REGISTERED_EXTENSION' not in s:
    old='((_va) >= g_xbox_code_lo && (_va) < g_xbox_code_hi))'
    if s.count(old)!=1:raise SystemExit('Indirect-call range predicate changed')
    s=s.replace(marker,extra+marker,1).replace(old,'((_va) >= g_xbox_code_lo && (_va) < g_xbox_code_hi) || RECOMP_REGISTERED_EXTENSION(_va))',1)
    p.write_text(s)
print('Installed native script registration guard')

# Native command lookup preserves every original command. Only its missing-key
# return consults extension descriptors, avoiding the fixed 215-node allocator.
p=root/'src/recomp/gen/recomp_0017.c'
s=p.read_text()
old='loc_000CAD99: ;\n    POP32(esp, edi);\n    POP32(esp, esi);\n    eax = ebx;'
new='loc_000CAD99: ;\n    eax = xml1_script_extension_descriptor(esi, edi);\n    POP32(esp, edi);\n    POP32(esp, esi);'
if new not in s:
    if s.count(old)!=1:raise SystemExit('Native command lookup boundary changed')
    s='#include "raven_script_extensions.h"\n'+s.replace(old,new,1)
    p.write_text(s)
