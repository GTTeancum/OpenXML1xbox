"""Pack finished portrait artwork into an existing native 64x64 DXT3 IGB.

Only referenced image payloads change. Geometry, UVs, resource names and PKGB
declarations stay intact. The input artwork is upright; XML1 stores it flipped.
"""
import argparse
import importlib.util
import sys
from pathlib import Path
from PIL import Image


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--model', type=Path, required=True)
    p.add_argument('--image', type=Path, required=True)
    p.add_argument('--writer-root', type=Path, required=True)
    p.add_argument('--output', type=Path, required=True)
    a = p.parse_args()
    if a.output.resolve() == a.model.resolve():
        raise ValueError('Use a separate output for review before staging')
    spec = importlib.util.spec_from_file_location('igb_inspect', Path(__file__).with_name('inspect-menu-igb.py'))
    inspect = importlib.util.module_from_spec(spec); spec.loader.exec_module(inspect)
    sys.path.insert(0, str(a.writer_root.resolve()))
    from utils.dxt_compress import compress_rgba_to_dxt3
    data = a.model.read_bytes(); parsed = inspect.inspect(data)
    def uint(field):
        return int.from_bytes(data[field['offset']:field['offset']+4], 'little')
    images = {o['ref']: o for o in parsed['objects'] if o['type'] == 'igImage'}
    used = set()
    for obj in parsed['objects']:
        if obj['type'] == 'igTextureAttr':
            used.add(uint(next(f for f in obj['fields'] if f['slot'] == 12)))
    output = bytearray(data); changed = 0
    art = Image.open(a.image).convert('RGBA')
    for index in used:
        fields = {f['slot']: f for f in images[index]['fields']}
        w,h = uint(fields[2]),uint(fields[3])
        assert (w,h,uint(fields[11])) == (64,64,15)
        block = parsed['refs'][uint(fields[13])]
        pixels = art.resize((w,h), Image.Resampling.LANCZOS).transpose(Image.Transpose.FLIP_TOP_BOTTOM)
        packed = compress_rgba_to_dxt3(pixels.tobytes(), w, h)
        assert not block['object'] and len(packed) == block['bytes']
        output[block['offset']:block['offset']+block['bytes']] = packed
        changed += 1
    assert changed > 0
    assert inspect.inspect(bytes(output)) == parsed
    a.output.parent.mkdir(parents=True, exist_ok=True)
    a.output.write_bytes(output)
    print(f'Packed {changed} referenced image(s); IGB structure and size unchanged')


if __name__ == '__main__':
    main()
