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
