import argparse,json,struct,hashlib,subprocess
from pathlib import Path
from unicorn import Uc,UC_ARCH_X86,UC_MODE_32
from unicorn.x86_const import UC_X86_REG_ESP,UC_X86_REG_ECX,UC_X86_REG_EAX,UC_X86_REG_EIP
p=argparse.ArgumentParser();p.add_argument('xbe');p.add_argument('--out',required=True);p.add_argument('--adapter');a=p.parse_args()
data=Path(a.xbe).read_bytes();u=lambda o:struct.unpack_from('<I',data,o)[0]
if data[:4]!=b'XBEH':raise ValueError('Expected XBE')
m=Uc(UC_ARCH_X86,UC_MODE_32);m.mem_map(0,0x2000000)
for i in range(u(0x11c)):
 off=u(0x120)-u(0x104)+i*56
 _,va,size,raw,n=struct.unpack_from('<5I',data,off)
 m.mem_write(va,data[raw:raw+n])
def put(at,v):m.mem_write(at,struct.pack('<I',v))
def byte(at,v):m.mem_write(at,bytes([v]))
b=0x1000000;actor=b+0x2200;pool=b+0x4000;defs=b+0xa000;aff=b+0x14000
attached=pool+4+0x68;definition=defs+4+0x88;af1=aff+4+0x24;af2=aff+4+0x48
put(actor+0x21c,0x81);put(actor+0x220,pool);put(actor+0x214,1<<25);byte(actor+0x258,1);put(actor+0x35c,b+0x2700)
put(pool,0x4a6be8);put(pool+0x3838,0x7f);put(pool+0x363c,0x81);put(pool+0x3624,2)
put(attached,0x4a6af4);put(attached+0x20,0x301);put(attached+0x24,defs)
put(defs,0x4a7d6c);put(defs+0x9058,0xff);put(defs+0x8c5c,0x301);put(defs+0x8c34,2)
put(definition,0x4a734c);put(definition+0xc,0x401);put(definition+0x10,aff)
put(aff,0x4a6a58);put(aff+0x4278,0x1ff);put(aff+0x3c7c,0x401);put(aff+0x3c80,0x402);put(aff+0x3c44,6)
for at,lo,hi in [(af1,2.,2.),(af2,3.,4.)]:
 put(at,0x4a6a6c);m.mem_write(at+4,struct.pack('<ff',lo,hi));byte(at+0x10,57);byte(at+0x11,1)
put(af1+0x1c,0x402);put(af1+0x20,aff);put(0x5a9f74,0)
# Original getter/vtable code runs unchanged; no function hooks or return stubs.
sp=0x1f00000;stop=0x1fff000;lower=b+0x200;upper=b+0x204
m.mem_write(sp,struct.pack('<6I',stop,57,lower,upper,0,1))
m.reg_write(UC_X86_REG_ESP,sp);m.reg_write(UC_X86_REG_ECX,actor)
out=Path(a.out);out.mkdir(parents=True,exist_ok=True)
scopes=b+0x21000;scope=scopes+4+0x1c;query=b+0x23000
put(scopes,0x4a9b94);put(scopes+0x1238,0x7f);put(scopes+0x103c,0x181);put(scopes+0x1024,2)
put(scope,0x4a9bac);put(scope+0xc,0x80);put(scope+0x14,0xffff0000);put(query+0x10,0x80)
provider=0x5f3af8;tree=provider+0x2cdc;stats=b+0x2700
put(0x5f8dbc,1);put(provider,0x49e410);put(tree+4,0)
for slot,key,value in [(0,0x12340002,0x40a00000),(1,0x12340003,0x40c00000)]:
 put(tree+slot*16+0x10,0x3fffffff);put(tree+slot*16+0x14,0x3fffffff)
 put(tree+slot*16+0x18,key);put(tree+0x1f98+slot*4,value)
put(tree+0x14,1);m.mem_write(stats+0x28e,struct.pack('<h',1))
manager=0x5f92d0
put(0x602644,1);put(manager,0x49ef3c);put(manager+0xc3c,255)
put(manager+0x83c+7*4,0x107);put(manager+0x818,1<<7);put(manager+4+7*4,actor)
put(actor,0x492124);put(0x5aa7a8,7);put(0x58bdcc,8);put(0x58bde0,(1<<11)|(1<<12))
put(query+0x38,0x107);m.mem_write(stats+0x4c8,b'\x02\x00')
put(0x6db518,1);put(0x6cfd10+4+5*4,8);m.mem_write(0x6cfd10+0x4010,b'Bishop\x00')
m.mem_write(stats+0x150,b'bIsHoP\x00');put(0x72e068,0)
baseline=bytes(m.mem_read(0,0x2000000));cpu=m.context_save()
cases=[
 ('scale',[]),
 ('add',[(sp+20,0),(af1+0x11,b'\x00'),(af2+0x11,b'\x00')]),
 ('max',[(sp+20,2),(af1+0x11,b'\x02'),(af2+0x11,b'\x02')]),
 ('min',[(sp+20,3),(af1+0x11,b'\x03'),(af2+0x11,b'\x03')]),
 ('attribute-mask-off',[(actor+0x214,0)]),
 ('wrong-mode',[(af2+0x11,b'\x00')]),
 ('wrong-attribute',[(af2+0x10,b'\x38')]),
 ('retired-affecter',[(aff+0x3c80,0x602)]),
 ('retired-head',[(pool+0x363c,0x101)]),
 ('empty-list',[(actor+0x220,0)]),
 ('missing-definition',[(defs+0x8c5c,0x401)]),
 ('inherited',[(attached+0x3c,0x40a00000)]),
 ('early-false-after-apply',[(attached+4,0x82),(attached+8,pool),
   (pool+0x3640,0x82),(pool+0x3624,6),(pool+4+0xd0,0x4a6af4)])
]
scoped=[(af1+0x14,0x181),(af1+0x18,scopes),(sp+16,query)]
cases.extend([
 ('scope-match',scoped),
 ('scope-miss',scoped+[(query+0x10,0x100)]),
 ('scope-retired',scoped+[(scopes+0x103c,0x201)]),
 ('owner-reject',scoped+[(definition+0x3c,0x3f800000),(af1+0x12,b'\x01'),(attached+0x64,b'\x01')]),
 ('owner-accept',scoped+[(definition+0x3c,0x3f800000),(af1+0x12,b'\x01')]),
 ('shared-reject',scoped+[(definition+0x3c,0x3f800000),(af1+0x12,b'\x02')]),
 ('shared-accept',scoped+[(definition+0x3c,0x3f800000),(af1+0x12,b'\x02'),(attached+0x64,b'\x01')]),
 ('unrestricted-bypass-sharing',scoped+[(scope+0x18,b'\x04'),(definition+0x3c,0x3f800000),(af1+0x12,b'\x02')]),
 ('null-query-node-excluded',scoped+[(sp+16,0),(scope+0x18,b'\x20')]),
 ('null-query-damage-ignored',scoped+[(sp+16,0),(scope+0xc,0x100)]),
 ('inverted-scope-match',scoped+[(sp+4,8),(actor+0x210,256),(af1+0x10,b'\x08')]),
 ('inverted-scope-miss',scoped+[(sp+4,8),(actor+0x210,256),(af1+0x10,b'\x08'),(query+0x10,0x100)])
])
reference=[(af1+0xc,b'\x01'),(af1+4,0x1234)]
cases.extend([
 ('reference-range',reference),
 ('reference-scalar',reference+[(tree+0x14,0x3fffffff)]),
 ('reference-missing-context',reference+[(stats+0x28e,b'\x03\x00')]),
 ('reference-missing-symbol',reference+[(af1+4,0x1235)]),
 ('reference-negative-context',reference+[(stats+0x28e,b'\xfe\xff'),(tree+0x18,0x1233fffc),(tree+0x28,0x1233fffd)]),
 ('reference-invalid-lower',reference+[(tree+0x1f98,0x7fc00000)]),
 ('reference-invalid-upper',reference+[(tree+0x1f9c,0x7f800000)]),
 ('reference-upper-only',reference+[(tree+4,1)]),
 ('reference-null-stats',reference+[(actor+0x35c,0)]),
 ('reference-inherited',reference+[(attached+0x3c,0x40000000)])
])
race=scoped+[(scope+0x18,b'\x10'),(scope+0x14,0xffff0001)]
character=scoped+[(scope+0x18,b'\x08'),(scope+4,0x12000005)]
cases.extend([
 ('race-match',race),('race-miss',race+[(stats+0x4c8,b'\x00\x00')]),
 ('race-shift-wrap',race+[(scope+0x14,0xffff0021)]),
 ('race-truncated-mask',race+[(scope+0x14,0xffff0010)]),
 ('race-retired-actor',race+[(manager+0x83c+7*4,0x207)]),
 ('race-second-type',race+[(actor+0x258,b'\x00')]),
 ('race-second-type-reject',race+[(actor+0x258,b'\x00'),(0x58bde0,1<<11)]),
 ('character-case-fold',character),
 ('character-mismatch',character+[(stats+0x150,b'X')]),
 ('character-empty-selector',character+[(scope+4,0)]),
 ('character-empty-match',character+[(scope+4,0),(stats+0x150,b'\x00')])
])
results=[]
for name,edits in cases:
 m.mem_write(0,baseline);m.context_restore(cpu)
 for at,value in edits:
  if isinstance(value,bytes):m.mem_write(at,value)
  else:put(at,value)
 # Reuse one snapshot; do not retain a 32-MB image for every case.
 (out/'memory.bin').write_bytes(m.mem_read(0,0x2000000))
 m.emu_start(0x15e8c0,stop,count=200000)
 if m.reg_read(UC_X86_REG_EIP)!=stop:raise RuntimeError(name+': original routine did not return')
 native={'native_return':bool(m.reg_read(UC_X86_REG_EAX)&255),
         'endpoints':list(struct.unpack('<ff',m.mem_read(lower,8)))}
 record={'case':name,'native':native}
 if a.adapter:
  completed=subprocess.run([a.adapter,'--oracle-fixture',str(out/'memory.bin')],check=True,capture_output=True,text=True)
  adapter=json.loads(completed.stdout);record['adapter']=adapter;record['matched']=adapter==native
 results.append(record)
 (out/'parity.json').write_text(json.dumps({'xbe_sha256':hashlib.sha256(data).hexdigest(),'cases':results},indent=2)+'\n')
 if a.adapter and not record['matched']:raise AssertionError(record)
 print(name,native)
print(f'PASS {len(results)} original XBE cases'+(' / adapter parity' if a.adapter else '')+' (controlled fixtures, not gameplay)')
