"""Native DX8 indexed/ring-buffer, batch ordering and texture eviction pixels."""
from pathlib import Path
import os,struct,subprocess
root=Path(__file__).resolve().parents[1]
worker=root/'build/renderer/Release/xml1-dx8-worker.exe'
base=(root/'build/dx8-argb-142.bin').read_bytes()[12:]
draw=base[:20]+struct.pack('<I',6)+base[20:1420]+bytes(212)+base[1420:]
at=1636
assert len(draw)==at+16+96
def command(magic,records):return magic+struct.pack('<I',len(records))+b''.join(records)
def record(pixels,define=True,evictions=(),index=None):
    head=bytearray(draw[:at]);struct.pack_into('<I',head,8,6);struct.pack_into('<I',head,20,5)
    texture=struct.pack('<I',len(evictions))+b''.join(struct.pack('<I',v) for v in evictions)+struct.pack('<I',0x80000001 if define else 1)
    if define:texture+=pixels
    indices=(0,1,2,2,1,3) if index is None else index
    return head+texture+struct.pack('<II',6,4)+draw[-96:]+struct.pack('<6H',*indices)
def render(name,packet,legacy=False,error=None):
    path=root/'build'/('v9-'+name+'.bin');output=path.with_suffix('.bmp');path.write_bytes(packet)
    env={k:v for k,v in os.environ.items() if not k.startswith('XML1_')}
    env['XML1_DX8_RESOLUTION']='1920x1080'
    if legacy:env['XML1_DX8_LEGACY_GEOMETRY']='1'
    p=subprocess.run([str(worker),'--replay',str(path),str(output)],env=env,capture_output=True,text=True,timeout=90)
    if error:
        assert p.returncode and error in p.stderr,(name,p.stdout,p.stderr)
        return
    assert p.returncode==0,(name,p.stdout,p.stderr)
    return output.read_bytes()
pixels=draw[at:at+16]
original=command(b'XMLDX8R6',[draw])
expected=render('legacy-reference',original,True)
v9=command(b'XMLDX8R9',[record(pixels)])
assert render('indexed',v9)==expected
assert render('indexed-up',v9,True)==expected
changed=bytes((20,50,230,255))*4
changed_original=command(b'XMLDX8R6',[draw[:at]+changed+draw[at+16:]])
mutation=command(b'XMLDX8D9',[record(pixels)])+command(b'XMLDX8R9',[record(changed,evictions=(1,))])
assert render('replacement',mutation)==render('replacement-reference',changed_original,True)
clear=b'XMLDX8C5'+struct.pack('<5I',0xf0,0xff10cc20,0x3f800000,0,1)+struct.pack('<4i',0,0,20,20)
ordered=command(b'XMLDX8D9',[record(pixels)])+clear+command(b'XMLDX8R9',[])
batch=b'XMLDX8B1'+struct.pack('<I',3)+ordered
assert render('batch',batch)==render('unbatched',ordered)
# Force both vertex/index rings to wrap while every previous draw remains queued.
# A single command has 10,000 draws; multiple commands exceed both ring sizes.
stress=command(b'XMLDX8D9',[record(pixels)])
stress+=command(b'XMLDX8D9',[record(pixels,False)]*10000)*10
stress+=command(b'XMLDX8R9',[record(pixels,False)])
assert render('ring-wrap',stress)==render('ring-wrap-up',stress,True)
render('bad-eviction',command(b'XMLDX8R9',[record(pixels,evictions=(1,))]),error='Invalid texture eviction')
render('bad-index',command(b'XMLDX8R9',[record(pixels,index=(0,1,2,2,1,4))]),error='Index exceeds')
render('bad-nesting',b'XMLDX8B1'+struct.pack('<I',1)+batch,error='Invalid ordered command batch')
print('PASS: 1080p exact pixels for indexed geometry, UP comparison, buffer wrap, token mutation/eviction and ordered batching; malformed streams rejected')
