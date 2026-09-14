"""Native pixels and rejection tests for frame-local texture references and HD.

Run test-dx8-batches.py first. Inputs stay in the ignored build directory.
"""
from pathlib import Path
import importlib.util
import os
import struct
import subprocess

root = Path(__file__).resolve().parents[1]
worker = root / 'build/renderer/Release/xml1-dx8-worker.exe'
spec = importlib.util.spec_from_file_location('wire', root/'scripts/convert-texture-wire.py')
wire = importlib.util.module_from_spec(spec)
spec.loader.exec_module(wire)
base = (root/'build/dx8-argb-142.bin').read_bytes()[12:]
# v2 -> v6: primitive type, material/light mask, second texture and matrices.
draw = base[:20] + struct.pack('<I', 6) + base[20:1420] + bytes(212) + base[1420:]
texture_at = 1636
assert len(draw) == texture_at + 16 + 4*24

def command(magic, records):
    return magic + struct.pack('<I', len(records)) + b''.join(records)

def render(name, data, *, disabled=False, resolution='640x480', error=None, completions=None):
    source = root/f'build/wire-{name}.bin'
    output = source.with_suffix('.bmp')
    source.write_bytes(data)
    env = os.environ.copy()
    env['XML1_DX8_RESOLUTION'] = resolution
    env.pop('XML1_DX8_NO_STATE_CACHE', None)
    if disabled:
        env['XML1_DX8_NO_STATE_CACHE'] = '1'
    run = subprocess.run([str(worker), '--replay', str(source), str(output)],
                         cwd=root, env=env, capture_output=True, text=True)
    if error:
        assert run.returncode != 0 and error in run.stderr, run.stdout+run.stderr
        return
    assert run.returncode == 0, run.stdout+run.stderr
    if completions is not None:
        assert f'[DX8 COMPLETION] waits={completions}\n' in run.stdout, run.stdout
    return output.read_bytes()

changed = bytearray(draw)
changed[texture_at:texture_at+16] = struct.pack('<4I', *([0xff602040]*4))
v6 = command(b'XMLDX8F6', [draw, bytes(changed)]) + command(b'XMLDX8R6', [draw])
v7, requests, refs = wire.convert(v6)
assert (requests, refs) == (3, 1)
assert render('mutation-v6', v6, disabled=True) == render('mutation-v7', v7)
# References must survive intermediate flushes but not a completed frame.
assert render('two-frames', v7+v7) == render('one-frame', v7)
definition = draw[:texture_at] + struct.pack('<I', 0x80000001) + draw[texture_at:]
reference = draw[:texture_at] + struct.pack('<I', 1) + draw[texture_at+16:]
render('undefined', command(b'XMLDX8R7', [reference]), error='Undefined or mismatched')
render('duplicate', command(b'XMLDX8R7', [definition, definition]), error='Duplicate texture')
render('reset', command(b'XMLDX8R7', [definition])+command(b'XMLDX8R7', [reference]), error='Undefined or mismatched')
wrong_size = bytearray(reference)
struct.pack_into('<I', wrong_size, 0, 4)
render('mismatch', command(b'XMLDX8R7', [definition, bytes(wrong_size)]), error='Undefined or mismatched')
bad_id = bytearray(reference)
struct.pack_into('<I', bad_id, texture_at, 257)
render('bad-id', command(b'XMLDX8R7', [bytes(bad_id)]), error='Invalid texture reference')
print('PASS: v7 mutation, cross-flush reuse, frame reset and invalid reference rejection')

reset = b'XMLDX8S2' + struct.pack('<3I', 640, 480, 1)
v8 = reset + command(b'XMLDX8R8', [definition]) + command(b'XMLDX8R8', [reference])
assert render('v8-persistent', v8) == render('v8-original', command(b'XMLDX8R6', [draw]))
changed_definition = bytes(changed[:texture_at]) + struct.pack('<I', 0x80000002) + bytes(changed[texture_at:])
changed_reference = draw[:texture_at] + struct.pack('<I', 2) + draw[texture_at+16:]
v8 += command(b'XMLDX8R8', [changed_definition]) + command(b'XMLDX8R8', [changed_reference])
assert render('v8-mutation', v8) == render('v8-changed-original', command(b'XMLDX8R6', [bytes(changed)]))
assert render('v8-explicit-reset', v8+reset+command(b'XMLDX8R8', [definition])) == render('v8-reset-original', command(b'XMLDX8R6', [draw]))
render('v8-reset-reject', v8+reset+command(b'XMLDX8R8', [reference]), error='Undefined or mismatched')
render('v8-mid-frame-reset', reset+command(b'XMLDX8F8', [definition])+reset+command(b'XMLDX8R8', []), error='Invalid texture dictionary reset')
print('PASS: v8 cross-frame reuse, mutation, explicit reset and invalid reset rejection')

combat_stream = bytearray()
for index, source in enumerate(('dx8-request-1661-frame-2422.bin',
                                'dx8-request-1662-frame-4429.bin',
                                'dx8-request-1681-frame-3454.bin')):
    original = (root/'build'/source).read_bytes()
    combat_stream += original
    converted, requests, refs = wire.convert(original)
    (root/f'work/frame-{index}-v7.bin').write_bytes(converted)
    assert render(f'combat-{index}-baseline', original, disabled=True) == render(f'combat-{index}-cached', converted)
    print(f'PASS: combat frame {index}, exact native pixels, {refs}/{requests} references')

persistent, requests, refs = wire.convert(bytes(combat_stream), persistent=True)
assert render('combat-persistent-v8', persistent) == render('combat-persistent-baseline', bytes(combat_stream), disabled=True)
print(f'PASS: three consecutive combat frames preserve pixels with persistent v8 references ({refs}/{requests})')

# Equivalent source-space coordinates must render identically, including a
# nonzero viewport origin and an ordered partial clear, at both output sizes.
def dimensions(w, h):
    return b'XMLDX8S1' + struct.pack('<2I', w, h)

def scaled_scene(multiplier):
    record = bytearray(draw)
    struct.pack_into('<4I', record, 24, *(v*multiplier for v in (80,45,480,270)))
    clear = b'XMLDX8C4' + struct.pack('<5I', 0xf0, 0xffe04020, 0x3f800000, 0, 1)
    clear += struct.pack('<4I', *(v*multiplier for v in (160,90,320,180)))
    return (dimensions(640*multiplier, 360*multiplier) + command(b'XMLDX8F6', [bytes(record)])
            + clear + command(b'XMLDX8R6', []))

for resolution in ('1280x720', '1920x1080'):
    first = render('viewport-1-'+resolution, scaled_scene(1), resolution=resolution)
    second = render('viewport-2-'+resolution, scaled_scene(2), resolution=resolution)
    assert first == second, 'Source coordinates changed output'
    output = root/f'build/wire-viewport-1-{resolution}.bmp'
    bitmap = output.read_bytes()
    w, h = map(int, resolution.split('x'))
    assert struct.unpack_from('<2i', bitmap, 18) == (w, -h)
    pitch = (w*3+3)&~3
    pixel = struct.unpack_from('<I', bitmap, 10)[0]+(h*3//8)*pitch+(w*3//8)*3
    assert bitmap[pixel:pixel+3] == bytes((32,64,224)), 'Partial clear missed its scaled location'
    print(f'PASS: {resolution} native backbuffer, scaled viewport and ordered clear')
render('invalid-mode', dimensions(0,720)+v7, error='Invalid source dimensions')
print('PASS: invalid source dimensions rejected')

for resolution in ('1280x720','1920x1080'):
    completed = scaled_scene(1)
    submitted = completed.replace(b'XMLDX8C4',b'XMLDX8C5')
    assert render('clear-completed-'+resolution,completed,resolution=resolution) == render('clear-submitted-'+resolution,submitted,resolution=resolution)
    print('PASS: ordered C5 clear matches completed C4 clear at '+resolution)

# A submission-only clear must complete at an empty fence, exactly once.
clear_only = b'XMLDX8C5' + struct.pack('<5I',0xf0,0xffe04020,0x3f800000,0,0)
empty_fence = command(b'XMLDX8F8',[])
finish = command(b'XMLDX8R6',[draw])
render('pending-clear-empty-fence',dimensions(640,480)+clear_only+empty_fence+empty_fence+finish,completions=1)
render('pending-clear-present',dimensions(640,480)+clear_only+finish,completions=0)
print('PASS: empty fence completes a submitted clear once; captures still synchronize full frame')
