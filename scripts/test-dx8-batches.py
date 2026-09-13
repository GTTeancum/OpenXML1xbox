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
v3=root/'build/d3d-replay-v3.bin'
v3.write_bytes(b'XMLDX8R3'+struct.pack('<I',2)+b''.join(
    draw[:12]+struct.pack('<II',14,0x142)+draw[12:1412]+bytes(72)+draw[1412:] for draw in draws))
outputs = []
v4=root/'build/d3d-replay-v4.bin'
v4.write_bytes(b'XMLDX8R4'+struct.pack('<I',2)+b''.join(
    draw[:12]+struct.pack('<II',14,0x142)+draw[12:1412]+bytes(212)+draw[1412:] for draw in draws))
clear=root/'build/d3d-replay-clear.bin'
clear.write_bytes(b'XMLDX8F1'+struct.pack('<I',1)+draws[0]+
                  b'XMLDX8C4'+struct.pack('<5I',1,0,0x3f800000,0,0)+
                  b'XMLDX8R1'+struct.pack('<I',1)+draws[1])
for name, packet in [('whole',root/'build/d3d-replay.bin'),('split',batch),('v2',v2),('v3',v3),('v4',v4),('depth-clear',clear)]:
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

# A lit, untextured plane: verify that the transmitted directional light and
# red material affect native DX8 output, with no contribution from a texture.
identity=[1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1]
state[24:216]=struct.pack('<48f',*(identity*3))
for index,value in ((102,1),(104,1),(105,0),(110,0),(111,0),(112,0),(113,0),(115,0),(137,0),(141,0),(142,0)):
    struct.pack_into('<I',state,216+index*4,value)
for index in (12,16):struct.pack_into('<I',state,888+index*4,1)
material=struct.pack('<17f',1,0,0,1,*([0]*13))
light=struct.pack('<I25f',3,1,1,1,1,*([0]*11),0,0,1,1000,0,1,0,0,0,0)
vertices=b''.join(struct.pack('<6f',x,y,.5,0,0,-1) for x,y in [(-.5,.5),(.5,.5),(-.5,-.5),(.5,-.5)])
lit_outputs=[]
for enabled in (True,False):
    packet=root/f'build/dx8-light-{enabled}.bin'
    packet.write_bytes(b'XMLDX8R3'+struct.pack('<6I',1,2,2,4,6,0x12)+state+material+
                      struct.pack('<I',int(enabled))+(light if enabled else b'')+bytes(16)+vertices)
    output=root/f'build/dx8-light-{enabled}.bmp'
    subprocess.run([str(worker),'--replay',str(packet),str(output)],cwd=root,check=True)
    lit_outputs.append(output.read_bytes()[54:])
assert bytes.fromhex('0000ff') in lit_outputs[0], 'Directional light did not illuminate red material'
assert not any(lit_outputs[1]), 'Disabled light left visible illumination'
print('PASS: native directional light illuminates material and disabling it removes illumination')

# Camera-space normal texcoords and per-stage transforms must select different
# texels from the second texture; the primary texture is an L8 white texel.
struct.pack_into('<I',state,216+102*4,0)
for stage in (0,1):
    for index,value in ((0,3),(1,3),(3,1),(4,1),(5,0),(12,2),(14,2),(16,2),(18,2)):
        struct.pack_into('<I',state,888+(stage*32+index)*4,value)
for index,value in ((53,2),(60,0x10000),(76,1),(80,1)):
    struct.pack_into('<I',state,888+index*4,value)
for uv,expected in ((.25,bytes.fromhex('0000ff')),(.75,bytes.fromhex('ff0000'))):
    transform=identity.copy(); transform[12]=transform[13]=uv
    for fvf in (0x112,0x152):
        vertex_data=b''.join(struct.pack('<6f',x,y,.5,0,0,-1)+
            (struct.pack('<I',0xffffffff) if fvf==0x152 else b'')+struct.pack('<2f',0,0)
            for x,y in [(-.5,.5),(.5,.5),(-.5,-.5),(.5,-.5)])
        packet=root/f'build/dx8-env-{uv}-{fvf:x}.bin'
        packet.write_bytes(b'XMLDX8R4'+struct.pack('<6I',1,1,1,4,0,fvf)+state+bytes(72)+
            struct.pack('<3I32f',2,2,6,*(identity+transform))+b'\xff'+
            struct.pack('<4I',0xffff0000,0xff00ff00,0xffffffff,0xff0000ff)+vertex_data)
        output=packet.with_suffix('.bmp')
        subprocess.run([str(worker),'--replay',str(packet),str(output)],cwd=root,check=True)
        pixels=output.read_bytes()
        assert pixels[54+(240*640+320)*3:54+(240*640+320)*3+3]==expected, 'Second texture normal coordinates/transform selected incorrect texel'
print('PASS: L8 primary and second ARGB texture with transformed normal coordinates, FVF112/152')

# Reuse the known-color plane: opposite winding modes must select exactly one
# side. Positions in this fixture have clockwise winding after viewport mapping.
source_packet=bytearray(packet.read_bytes())
culled=[]
for mode in (0x900,0x901):
    struct.pack_into('<I',source_packet,32+216+147*4,mode)
    case=root/f'build/dx8-cull-{mode:x}.bin'; case.write_bytes(source_packet)
    output=case.with_suffix('.bmp')
    subprocess.run([str(worker),'--replay',str(case),str(output)],cwd=root,check=True)
    culled.append(any(output.read_bytes()[54:]))
assert culled==[False,True], 'Native winding selection differs from expected CW/CCW semantics'
print('PASS: clockwise and counterclockwise culling select opposite plane sides')

# Equivalent strip and fan describe the same constant-color plane.
struct.pack_into('<I',source_packet,32+216+147*4,0)
strip_packet=bytes(source_packet)
vertex_data=strip_packet[-144:]
fan_vertices=b''.join(vertex_data[i*36:(i+1)*36] for i in (0,1,3,2))
fan_packet=b'XMLDX8R5'+strip_packet[8:32]+struct.pack('<I',7)+strip_packet[32:-144]+fan_vertices
fan=root/'build/dx8-fan.bin';fan.write_bytes(fan_packet)
fan_output=fan.with_suffix('.bmp')
subprocess.run([str(worker),'--replay',str(fan),str(fan_output)],cwd=root,check=True)
assert fan_output.read_bytes()==(root/'build/dx8-env-0.75-152.bmp').read_bytes(), 'Equivalent fan and strip differ'
print('PASS: version5 triangle fan matches equivalent triangle strip')
list_header=bytearray(strip_packet[:32]); list_header[:8]=b'XMLDX8R5'
struct.pack_into('<I',list_header,20,6)
list_vertices=b''.join(vertex_data[i*36:(i+1)*36] for i in (0,1,2,2,1,3))
triangles=root/'build/dx8-triangles.bin'
triangles.write_bytes(list_header+struct.pack('<I',5)+strip_packet[32:-144]+list_vertices)
triangles_output=triangles.with_suffix('.bmp')
subprocess.run([str(worker),'--replay',str(triangles),str(triangles_output)],cwd=root,check=True)
assert triangles_output.read_bytes()==fan_output.read_bytes(), 'Equivalent triangle list differs'
print('PASS: triangle list matches equivalent fan and strip')
