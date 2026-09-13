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
v2 = root/'build/d3d-replay-v2.bin'
v2.write_bytes(b'XMLDX8R2'+struct.pack('<I',2)+b''.join(
    draw[:12]+struct.pack('<II',14,0x142)+draw[12:] for draw in draws))
outputs = []
for name, packet in [('whole',root/'build/d3d-replay.bin'),('split',batch),('v2',v2)]:
    output = root/f'build/dx8-batch-test-{name}.bmp'
    subprocess.run([str(worker),'--replay',str(packet),str(output)],cwd=root,check=True)
    outputs.append(output.read_bytes())
assert all(output==outputs[0] for output in outputs), 'Batch or protocol changed native rendered pixels'
print('PASS: whole-frame, split-batch and v2 DX8 captures match:',hashlib.sha256(outputs[0]).hexdigest())

# Exercise both vertex layouts with an uncompressed, known-color texture.
# Reuse actual game transforms/quad positions, selecting texture color directly.
state = bytearray(draws[0][12:1412])
for index in (59,60,92,102,143):
    struct.pack_into('<I',state,216+index*4,0)
for index,value in ((12,2),(14,2),(16,2),(18,2),(44,1),(48,1)):
    struct.pack_into('<I',state,888+index*4,value)
width,height,vertices = struct.unpack_from('<III',draws[0])
vb = draws[0][1412+((width+3)//4)*((height+3)//4)*16:]
argb_outputs=[]
for fvf in (0x142,0x102):
    vertex_data = vb if fvf==0x142 else b''.join(
        vb[i:i+12]+vb[i+16:i+24] for i in range(0,len(vb),24))
    packet = root/f'build/dx8-argb-{fvf:x}.bin'
    packet.write_bytes(b'XMLDX8R2'+struct.pack('<6I',1,2,2,vertices,6,fvf)+
                      state+struct.pack('<4I',*([0xff20a0e0]*4))+vertex_data)
    output=root/f'build/dx8-argb-{fvf:x}.bmp'
    subprocess.run([str(worker),'--replay',str(packet),str(output)],cwd=root,check=True)
    argb_outputs.append(output.read_bytes())
assert argb_outputs[0]==argb_outputs[1], 'Removing unused diffuse changed pixels'
assert bytes.fromhex('e0a020') in argb_outputs[0][54:], 'Known texture color was not rendered'
print('PASS: ARGB texture renders known color identically with FVF 142 and 102')
