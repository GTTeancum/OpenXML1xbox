"""Verify XML1 camera-shake entry points against the supplied XBE, read-only.

This is an implementation audit, not proof that a View Shake setting exists or
that runtime suppression works. The report contains exact decoded instructions
and explicitly separates established paths from remaining coverage questions.
"""
import argparse, hashlib, json, struct
from pathlib import Path
from capstone import Cs, CS_ARCH_X86, CS_MODE_32

p=argparse.ArgumentParser(description=__doc__)
p.add_argument('--xbe',type=Path,required=True)
p.add_argument('--analysis',type=Path,default=Path('analysis'))
p.add_argument('--output',type=Path,required=True)
a=p.parse_args();original=a.xbe.read_bytes()
assert a.output.resolve()!=a.xbe.resolve()
sections=json.loads((a.analysis/'default_analysis.json').read_text())['sections']
functions={int(f['start'],16):f for f in json.loads((a.analysis/'disasm/functions.json').read_text())}
def data(va,size):
 s=next(s for s in sections if int(s['virtual_addr'],16)<=va and
        va+size<=int(s['virtual_addr'],16)+s['raw_size'])
 offset=va-int(s['virtual_addr'],16)+int(s['raw_addr'],16)
 return original[offset:offset+size]
def u32(va):return struct.unpack('<I',data(va,4))[0]
assert data(0x3D1E2C,12)==b'cameraShake\0'
assert u32(0x3D11CC)==0x3D1E2C and u32(0x3D11C8)==0x98F70
assert data(0x5114C,5)==bytes.fromhex('b828d14800') # camera singleton
assert data(0x4FE8A,6)==bytes.fromhex('c706f4b23c00') # its vtable
assert u32(0x3CB2F4+0x84)==0x4A980
assert data(0x98FB8,6)==bytes.fromhex('ff9284000000')
assert data(0x3D7500,16)==b'ce_camera_shake\0'
assert data(0xE5F2A,6)==bytes.fromhex('c700c4733d00')
assert u32(0x3D73C4+4)==0xD6DC0
assert data(0xD6E01,6)==bytes.fromhex('ff9284000000')
assert data(0x4A9B7,11)==bytes.fromhex('c784be9802000001000000')
assert u32(0x4BF78)==0x4BF3A
assert data(0x4BF3D,5)==bytes.fromhex('e84efcffff') # type 1 -> 4BB90
for slot,target in enumerate((0x4BF3A,0x4BF44,0x4BF4E,0x4BF58)):
 assert u32(0x4BF78+4*slot)==target
for call,target in ((0x4BF47,0x4B080),(0x4BF51,0x4BCF0),(0x4BF5B,0x4BDE0)):
 assert data(call,1)==b'\xe8' and call+5+struct.unpack('<i',data(call+1,4))[0]==target
decoder=Cs(CS_ARCH_X86,CS_MODE_32)
addresses=[0x98F70,0xD6DC0,0x51100,0x4A980,0x4AA00,0x4AA80,0x4B570,
           0x4BEF0,0x4BB90,0x4B080,0x4BCF0,0x4BDE0]
report={
 'xbe_sha256':hashlib.sha256(original).hexdigest(),
 'established':[
  'cameraShake registration resolves to 00098F70, which calls camera singleton vtable slot 84.',
  'ce_camera_shake constructor installs vtable 003D73C4; method 000D6DC0 calls the same camera slot 84.',
  'Camera singleton is 0048D128; constructor installs vtable 003CB2F4; slot 84 is 0004A980.',
  '0004A980 stores mode 1 in one of two effect slots (298/29C), amplitude at 2A0/2A4, duration at 2B0/2B4, expiry at 2A8/2AC, frequency at 2B8/2BC.',
  '0004BEF0 resets accumulated camera offsets 2D8/2DC/2E0, checks expiry and dispatches mode 1 to 0004BB90.',
  '0004BB90 accumulates camera offsets and returns with ret 4. Outer 0004BEF0 owns expiry processing.'
 ],
 'implementation_constraints':[
  'Keep script/event callers and outer camera update running; do not replace event constructors or clear unrelated camera state.',
  'A setting must default On and implement persistence, Apply/Cancel/defaults, native presentation and gameplay verification.',
  'Prove all intended shake modes before claiming complete coverage; modes 2/3/4 also use the effect slots and need classification.',
  'Before using a runtime hook, verify direct generated calls as well as indirect dispatch; do not assume recomp_lookup_manual covers both.',
  'A disabled setting must stop active shake while allowing event timing and camera pan/fade/motion-path behavior to continue.'
 ],
 'runtime_verification':'Not assessed by this read-only XBE audit; see native run evidence.',
 'functions':{}
}
for address in addresses:
 f=functions[address];code=data(address,f['size'])
 report['functions'][f'{address:08X}']={
  'sha256':hashlib.sha256(code).hexdigest(),'size':len(code),
  'instructions':[f'{i.address:08X}: {i.mnemonic} {i.op_str}' for i in decoder.disasm(code,address)]}
def instruction(address,expected):
 assert next(decoder.disasm(data(address,15),address)).op_str==expected
instruction(0x4B11B,'dword ptr [esi + 0x2e0]')
instruction(0x4BD9D,'esi, 0x2d8')
instruction(0x4BDA6,'dword ptr [esi]')
instruction(0x4BDB0,'dword ptr [esi + 4]')
instruction(0x4BDB9,'dword ptr [esi + 8]')
for address,offset in ((0x4BEB7,'2d8'),(0x4BEC3,'2dc'),(0x4BED3,'2e0')):
 instruction(address,f'dword ptr [esi + 0x{offset}]')
report['established'].append('Modes 2, 3 and 4 all accumulate into the same final camera additive vector at 2D8/2DC/2E0; mode 3 first advances ESI by 2D8.')
assert a.xbe.read_bytes()==original
a.output.parent.mkdir(parents=True,exist_ok=True)
a.output.write_text(json.dumps(report,indent=2)+'\n')
print('PASS: scripted/combat entry points and all four additive camera effect paths verified; runtime acceptance is separate')
