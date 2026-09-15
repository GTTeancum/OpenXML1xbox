"""Recolor copied XML2 Alchemy menu assets without reserializing their scene data.

Changes only declared vertex RGBA streams and DXT3 RGB endpoints. Geometry,
UVs, animation, names, alpha, texture indices and serialization stay byte-identical.
Input and output trees must differ. Original game assets are never overwritten.
"""
import argparse
import colorsys
import hashlib
import importlib.util
import json
import struct
from pathlib import Path

spec = importlib.util.spec_from_file_location('igb', Path(__file__).with_name('inspect-menu-igb.py'))
igb = importlib.util.module_from_spec(spec)
spec.loader.exec_module(igb)


def blue(rgb):
    r, g, b = rgb
    # Retain blue lamps, neutral metal and black/white shading. Warm UI colors
    # become XML1 blue; preserve value and saturation across the original ramp.
    h, s, v = colorsys.rgb_to_hsv(r/255, g/255, b/255)
    if s < .18 or not (h <= .17 or h >= .97):
        return rgb
    return tuple(round(c*255) for c in colorsys.hsv_to_rgb(210/360, s, v))


def recolor(source):
    original = source.read_bytes()
    parsed = igb.inspect(original)
    data = bytearray(original)
    allowed = set()
    seen = set()
    counts = {'vertex_colors': 0, 'texture_endpoints': 0}

    def u32(p):
        return struct.unpack_from('<I', original, p)[0]

    def block(ref):
        result = parsed['refs'][ref]
        assert not result['object']
        return result

    for obj in parsed['objects']:
        fields = {f['slot']: f for f in obj['fields']}
        if obj['type'] == 'igVertexArray1_1':
            ext = block(u32(fields[2]['offset']))
            assert ext['bytes'] >= 12
            # Alchemy serialized vertex stream table: position, normal, RGBA.
            ref = u32(ext['offset']+8)
            if ref == 0xffffffff or ('vertex',ref) in seen:
                continue
            seen.add(('vertex',ref))
            colors = block(ref)
            count = u32(fields[3]['offset'])
            assert colors['bytes'] == count*4, (source, 'vertex color size')
            for p in range(colors['offset'], colors['offset']+colors['bytes'], 4):
                before = tuple(original[p:p+3]); after = blue(before)
                allowed.update(range(p,p+3))
                if before != after:
                    data[p:p+3] = bytes(after); counts['vertex_colors'] += 1
        elif obj['type'] == 'igImage':
            fmt = u32(fields[11]['offset'])
            ref = u32(fields[13]['offset'])
            if ref == 0xffffffff or ('image',ref) in seen:
                continue
            seen.add(('image',ref))
            pixels = block(ref)
            if fmt == 7:  # Alpha-only gradients have no RGB to recolor.
                continue
            assert fmt == 15, (source, 'unsupported image format', fmt)
            width, height = u32(fields[2]['offset']), u32(fields[3]['offset'])
            assert pixels['bytes'] == ((width+3)//4)*((height+3)//4)*16
            for base in range(pixels['offset'], pixels['offset']+pixels['bytes'], 16):
                # DXT3 explicit alpha is bytes 0..7; endpoints 8..11; indices 12..15.
                for p in (base+8,base+10):
                    word = struct.unpack_from('<H', original, p)[0]
                    rgb = (((word>>11)&31)*255//31, ((word>>5)&63)*255//63, (word&31)*255//31)
                    after = blue(rgb)
                    allowed.update((p,p+1))
                    if after != rgb:
                        r,g,b = after
                        new = (round(r*31/255)<<11)|(round(g*63/255)<<5)|round(b*31/255)
                        struct.pack_into('<H',data,p,new)
                        counts['texture_endpoints'] += 1
    assert len(data) == len(original)
    changed = [i for i,(a,b) in enumerate(zip(original,data)) if a != b]
    assert all(i in allowed for i in changed), 'Non-color data changed'
    assert igb.inspect(data) == parsed, 'Serialized structure changed'
    counts['changed_bytes'] = len(changed)
    return data, counts


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('source',type=Path)
    parser.add_argument('output',type=Path)
    args = parser.parse_args()
    src, dst = args.source.resolve(), args.output.resolve()
    assert src != dst and src not in dst.parents and dst not in src.parents
    report = []
    # Validate every asset before writing any outputs.
    assets = [(p, *recolor(p)) for p in sorted(src.rglob('*.IGB'))]
    for path, data, counts in assets:
        relative = path.relative_to(src)
        output = dst / relative
        output.parent.mkdir(parents=True,exist_ok=True)
        output.write_bytes(data)
        report.append({'file': relative.as_posix(), **counts,
                       'source_sha256': hashlib.sha256(path.read_bytes()).hexdigest(),
                       'output_sha256': hashlib.sha256(data).hexdigest()})
    dst.mkdir(parents=True,exist_ok=True)
    (dst/'recolor-manifest.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(report,indent=2))


if __name__ == '__main__':
    main()
