"""Package actual first-swap submissions for the DX8 diagnostic worker.

This is a bring-up replay, not live gameplay. Retains game matrices and vertices;
supports only the observed fixed-function, single DXT3 texture strip path.
Xbox constants checked against Cxbx XbD3D8Types.h at
585c49a50af1255ab155099e06f24505f9c5a800. No game data belongs in git.
"""
import csv
import struct
from pathlib import Path

root = Path(__file__).resolve().parents[1]
build = root / 'build'
ram = (build / 'd3d-frame-ram.bin').read_bytes()
def words(data, offset, count):
    return struct.unpack_from(f'<{count}I', data, offset)
def pack(values):
    return struct.pack(f'<{len(values)}I', *values)
matrices = {}
textures = [0] * 4
stream = None
fvf = 0
pixel_shader = None
viewport = None
simple = {}
draws = []
for index, raw in enumerate(csv.DictReader((build / 'd3d-calls.csv').open())):
    row = {k: int(v, 16) for k, v in raw.items()}
    va = row['va']
    args = [row[f'arg{i}'] for i in range(8)]
    if va == 0x35AE90:
        matrices[args[0]] = [row[f'payload{i}'] for i in range(16)]
    elif va == 0x35BA10:
        viewport = [row[f'payload{i}'] for i in range(6)]
    elif va == 0x35D760:
        fvf = args[0]
    elif va == 0x3692E0:
        pixel_shader = args[0]
    elif va == 0x35C060:
        textures[args[0]] = args[1]
    elif va == 0x35D360 and args[0] == 0:
        stream = args[1:3]
    elif va == 0x35D900:
        simple[row['ecx'] & 0x1FFF] = row['edx']
    elif va == 0x367AF0:
        assert args[0] == 6 and fvf == 0x142 and stream[1] == 24 and pixel_shader == 0
        assert textures[0] and not any(textures[1:])
        state = (build / f'd3d-draw-{index+1:04d}-state.bin').read_bytes()
        rs = list(words(state, 0x200, 168))
        # Fastcall Simple emits NV097 methods without updating the state array.
        for method, rs_index in {0x300:60,0x304:59,0x33C:58,0x340:61,
                                 0x344:62,0x348:63,0x350:74,0x354:57,
                                 0x358:67,0x35C:64}.items():
            if method in simple:
                rs[rs_index] = simple[method]
        common, data, lock, fmt, size = words(ram, textures[0], 5)
        assert ((fmt >> 8) & 255) == 0xE and size == 0, hex(fmt)
        width, height = 1 << ((fmt >> 20) & 15), 1 << ((fmt >> 24) & 15)
        tex_size = ((width+3)//4)*((height+3)//4)*16
        tex = (build / f'd3d-draw-{index+1:04d}-texture.bin').read_bytes()
        vertices = (build / f'd3d-draw-{index+1:04d}-vertices.bin').read_bytes()
        assert len(tex) == tex_size and len(vertices) == args[2]*24
        assert viewport is not None and all(i in matrices for i in [6,0,1])
        packet = pack([width,height,args[2]])
        packet += pack(viewport)
        packet += b''.join(pack(matrices[i]) for i in [6,0,1])
        packet += pack(rs) + state[:0x200] + tex + vertices
        draws.append(packet)
        print(f'Draw {len(draws)}: {args[2]} vertices, {width}x{height} DXT3, viewport {viewport[:4]}')
assert draws
(build / 'd3d-replay.bin').write_bytes(b'XMLDX8R1' + pack([len(draws)]) + b''.join(draws))
print('Wrote diagnostic replay with resource bytes captured at each draw.')
