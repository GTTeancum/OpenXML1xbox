"""Check exact DX8 texture reuse, hash collision rejection, and bounded retention.
Run test-dx8-batches.py first to prepare its known-color packet.
"""
from pathlib import Path
import os
import struct
import subprocess

root = Path(__file__).resolve().parents[1]
worker = root / 'build/renderer/Release/xml1-dx8-worker.exe'
base = (root / 'build/dx8-argb-142.bin').read_bytes()
assert base[:8] == b'XMLDX8R2'
assert struct.unpack_from('<6I', base, 8)[:3] == (1, 2, 2)
draw = base[12:]
texture_offset = 20 + 1400

def packet(name, colors):
    records = []
    for words in colors:
        record = bytearray(draw)
        record[texture_offset:texture_offset+16] = struct.pack('<4I', *words)
        records.append(record)
    path = root / f'build/texture-cache-{name}.bin'
    path.write_bytes(b'XMLDX8R2' + struct.pack('<I', len(records)) + b''.join(records))
    return path

def check(name, colors, statistics):
    source = packet(name, colors)
    images = []
    for enabled in (True, False):
        env = os.environ.copy()
        env.pop('XML1_DX8_NO_TEXTURE_CACHE', None)
        if not enabled:
            env['XML1_DX8_NO_TEXTURE_CACHE'] = '1'
        output = root / f'build/texture-cache-{name}-{enabled}.bmp'
        run = subprocess.run([str(worker), '--replay', str(source), str(output)],
                             cwd=root, env=env, check=True, capture_output=True, text=True)
        if enabled:
            assert statistics in run.stdout, run.stdout
        images.append(output.read_bytes())
    assert images[0] == images[1], f'{name}: cached pixels differ'
    print(f'PASS: {name}: identical cached/uncached native pixels; {statistics}')

original = [0xff204060] * 4
changed = [0xff602040] * 4
check('mutation', [original, changed, original], 'requests=3 hits=1 retained=2')

# Manufacture a collision in the word-at-a-time FNV index. The full byte
# comparison must reject it, regardless of the index agreeing.
p = 16777619
seed = 2166136261
collision = original.copy()
collision[0] ^= 1
before = ((seed ^ original[0]) * p) & 0xffffffff
alternate = ((seed ^ collision[0]) * p) & 0xffffffff
collision[1] = alternate ^ before ^ original[1]
check('collision', [original, collision, original], 'requests=3 hits=1 retained=2')
colors = [[0xff204060+i]*4 for i in range(270)]
check('eviction', colors + [colors[-1], colors[0]], 'requests=272 hits=1 retained=256')
