"""Compare the native PC-bank adapter against supplied original banks/reference.

Usage: python tests/test_pc_bank_view.py DRIVER PC_GAME REFERENCE_ADPCM_PY
Original game audio and the external decoder are local test inputs, not shipped.
"""
from pathlib import Path
import importlib.util
import struct
import subprocess
import sys
import tempfile

driver, game, reference = map(Path, sys.argv[1:])
spec = importlib.util.spec_from_file_location('pc_reference', reference)
ref = importlib.util.module_from_spec(spec)
spec.loader.exec_module(ref)
checked = 0
with tempfile.TemporaryDirectory(prefix='xml1-pc-bank-test-') as temp:
    dest = Path(temp) / 'native.zsm'
    bad = Path(temp) / 'invalid.zsm'
    for relative in ('b/i/bishop_m.zsm', 's/u/sun_m.zsm'):
        source = game / 'Sounds/eng' / relative
        src = source.read_bytes()
        subprocess.run([str(driver), str(source), str(dest)], check=True)
        dst = dest.read_bytes()
        a, b = (struct.unpack_from('<23I', data, 8) for data in (src, dst))
        assert dst[:8] == b'ZSNDXBOX' and b[0] == len(dst)
        for kind in range(3):
            count, ha, ta = a[2+kind*3:5+kind*3]
            count2, hb, tb = b[2+kind*3:5+kind*3]
            assert count == count2 and src[ha:ha+count*8] == dst[hb:hb+count*8]
            for i in range(count):
                if kind < 2:
                    stride = 24 if kind == 0 else 28
                    assert src[ta+24*i:ta+24*(i+1)] == dst[tb+stride*i:tb+stride*i+24]
                else:
                    offset, size, codec = struct.unpack_from('<3I', src, ta+76*i)
                    target, length, native = struct.unpack_from('<3I', dst, tb+84*i)
                    assert codec == 106 and native == 0
                    assert dst[target:target+length] == ref.decode(src[offset:offset+size])
                    assert src[ta+76*i+12:ta+76*(i+1)] == dst[tb+84*i+20:tb+84*(i+1)]
                    checked += 1
        cases = [src[:90], src[:-1]]
        for offset, value in ((a[10], len(src)+1), (a[10]+8, 999),
                              (a[7], 65535), (a[7]+2, 2), (52, 1)):
            data = bytearray(src)
            struct.pack_into('<I', data, offset, value)
            cases.append(data)
        for data in cases:
            bad.write_bytes(data)
            result = subprocess.run([str(driver), str(bad), str(dest)], capture_output=True)
            assert result.returncode != 0, 'Invalid/unsupported bank accepted'
print(f'PASS {checked} sample payloads, bank mappings/metadata, malformed and unsupported inputs')
