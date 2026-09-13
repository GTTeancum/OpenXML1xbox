"""Compare native DX8 rendering of the captured splash as one or two batches."""
from pathlib import Path
import hashlib
import struct
import subprocess

root = Path(__file__).resolve().parents[1]
source = (root/'build/d3d-replay.bin').read_bytes()
assert source[:8] == b'XMLDX8R1'
assert struct.unpack_from('<I', source, 8)[0] == 2
at = 12
draws = []
for _ in range(2):
    width, height, vertices = struct.unpack_from('<III', source, at)
    size = 1412 + ((width+3)//4)*((height+3)//4)*16 + vertices*24
    draws.append(source[at:at+size])
    at += size
assert at == len(source)
batch = root/'build/d3d-replay-split.bin'
batch.write_bytes(b'XMLDX8F1'+struct.pack('<I',1)+draws[0]+
                  b'XMLDX8R1'+struct.pack('<I',1)+draws[1])
worker = root/'build/renderer/Release/xml1-dx8-worker.exe'
outputs = []
for name, packet in [('whole',root/'build/d3d-replay.bin'),('split',batch)]:
    output = root/f'build/dx8-batch-test-{name}.bmp'
    subprocess.run([str(worker),'--replay',str(packet),str(output)],cwd=root,check=True)
    outputs.append(output.read_bytes())
assert outputs[0] == outputs[1], 'Split batch changed native rendered pixels'
print('PASS: whole-frame and split-batch DX8 captures match:',hashlib.sha256(outputs[0]).hexdigest())
