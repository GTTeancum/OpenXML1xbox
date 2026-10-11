"""Use the actual generated XDK functions in the native fence regression."""
from pathlib import Path
import sys
import argparse
from recomp_source import RecompSources, find_function

root = Path(__file__).resolve().parents[1]
parser=argparse.ArgumentParser(description=__doc__)
parser.add_argument('--generated-dir',type=Path,default=root/'src/recomp/gen')
parser.add_argument('--output',type=Path,default=root/'build/fence-wait-fixture.inc')
parser.add_argument('--unpatched',action='store_true')
args=parser.parse_args()
index = RecompSources(args.generated_dir)
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
args.output.parent.mkdir(parents=True,exist_ok=True)
args.output.write_bytes(fixture.encode('utf-8'))
