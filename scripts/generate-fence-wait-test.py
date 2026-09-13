"""Use the actual generated XDK functions in the native fence regression."""
from pathlib import Path
import re
import sys

root = Path(__file__).resolve().parents[1]
text = (root / 'src/recomp/gen/recomp_0095.c').read_text(encoding='utf-8')
blocks = []
for name in ('0035FD20', '0035FDE0'):
    match = re.search(r'void sub_' + name + r'\(void\)\n\{.*?\n\}', text, re.S)
    if not match:
        raise SystemExit(f'Missing verified XDK function {name}')
    blocks.append(match.group())
fixture = '\n\n'.join(blocks) + '\n'
if '--unpatched' in sys.argv:
    fixture = fixture.replace('    if (xml1_graphics_fence_complete(esi, edi)) goto loc_0035FF23;\n', '')
(root / 'build/fence-wait-fixture.inc').write_bytes(fixture.encode('utf-8'))
