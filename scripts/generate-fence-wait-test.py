"""Use the actual generated XDK functions in the native fence regression."""
from pathlib import Path
import sys
from recomp_source import RecompSources, find_function

root = Path(__file__).resolve().parents[1]
index = RecompSources(root / 'src/recomp/gen')
blocks = []
for name in ('0035FC00', '0035FD20', '0035FDE0'):
    address = int(name, 16)
    text = index.canonical_read(index.path(address))
    match = find_function(text, address)
    blocks.append(match.group())
fixture = '\n\n'.join(blocks) + '\n'
if '--unpatched' in sys.argv:
    fixture = fixture.replace('    if (xml1_graphics_fence_complete(esi, edi)) goto loc_0035FF23;\n', '')
    fixture = fixture.replace('    if (xml1_graphics_wait_fence(esi, edi)) goto loc_0035FF23;\n', '')
(root / 'build/fence-wait-fixture.inc').write_bytes(fixture.encode('utf-8'))
