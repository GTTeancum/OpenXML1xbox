"""Compare filter tag decisions with original XML2 event methods.

External actor/team/skirmish queries are controlled boundary inputs. Original
filter branches, common predicate and tag dispatcher execute unchanged. This
does not claim XML1 event registration or live combat coverage.
"""
import argparse,ctypes as c,hashlib,itertools,json,struct
from pathlib import Path
from unicorn import Uc,UC_ARCH_X86,UC_MODE_32,UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_EAX,UC_X86_REG_ECX,UC_X86_REG_ESP,UC_X86_REG_EIP
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('xbe',type=Path);p.add_argument('dll',type=Path);p.add_argument('--out',type=Path,required=True)
a=p.parse_args();raw=a.xbe.read_bytes();assert raw[:4]==b'XBEH'
u=lambda at:struct.unpack_from('<I',raw,at)[0]
m=Uc(UC_ARCH_X86,UC_MODE_32);m.mem_map(0,0x2000000)
for i in range(u(0x11c)):
    at=u(0x120)-u(0x104)+56*i
    _,va,_,offset,length=struct.unpack_from('<5I',raw,at)
    m.mem_write(va,raw[offset:offset+length])
class Event(c.Structure):
    _fields_=[('pass_tag',c.c_uint8),('fail_tag',c.c_uint8),('max_danger',c.c_uint8),('flags',c.c_uint8),('team_filter',c.c_uint32)]
class Target(c.Structure):
    _fields_=[('team',c.c_uint32),('skirmish',c.c_int),('character_path',c.c_int),('is_actor',c.c_int),('is_boss',c.c_int),('is_nonhumanoid',c.c_int),('danger',c.c_float)]
dll=c.CDLL(str(a.dll.resolve()));dll.filter_tag.argtypes=[c.POINTER(Event),c.POINTER(Target)];dll.filter_tag.restype=c.c_uint
def word(address,value):m.mem_write(address,struct.pack('<I',value))
def ret(value,arguments=0):
    sp=m.reg_read(UC_X86_REG_ESP)
    m.reg_write(UC_X86_REG_EAX,value)
    m.reg_write(UC_X86_REG_EIP,struct.unpack('<I',m.mem_read(sp,4))[0])
    m.reg_write(UC_X86_REG_ESP,sp+4+arguments)
current=None;selected=[]
def boundary(machine,address,size,user):
    if address==0x294e0:ret(current.team)
    elif address==0xd7a10:ret(current.skirmish)
    elif address==0x1900200:ret(0x1805000) # Target's native type bitmap query.
    elif address==0x1900300:
        sp=machine.reg_read(UC_X86_REG_ESP)
        selected.append(struct.unpack('<I',machine.mem_read(sp+4,4))[0]);ret(1,12)
for address in (0x294e0,0xd7a10,0x1900200,0x1900300):
    m.hook_add(UC_HOOK_CODE,boundary,begin=address,end=address)
context=m.context_save();cases=0
# Exercise both actual entry methods, every flag combination, common filters,
# actor classifications and danger boundaries (including x87 unordered).
for flags,path,variant,team_filter,multiplayer in itertools.product(range(32),range(2),range(12),(32,29,30),range(2)):
    current=Target(29+(variant%3),variant%2,path,(variant//2)%2,(variant//3)%2,(variant//4)%2,
        [0.0,9.5,10.0,10.5,255.0,float('nan')][variant%6])
    event=Event(101 if variant%4 else 0,102 if variant%5 else 0,10,flags,team_filter)
    m.context_restore(context);selected=[]
    # Controlled objects satisfy the original ABI and offsets; no business
    # predicate is replaced by a test callback.
    base=0x1800000;vtable=0x1801000;target=0x1802000;state=0x1803000;owner=0x1804000
    m.mem_write(base,bytes(32));word(base,vtable);word(base+4,owner)
    m.mem_write(base+0x14,bytes([event.pass_tag,event.fail_tag,event.max_danger]))
    word(base+0x18,event.team_filter);m.mem_write(base+0x1c,bytes([flags]))
    word(vtable+0x2c,0xf6bd0);word(vtable+0x30,0xf6a70)
    word(owner,owner+0x100);word(owner+0x114,0x1900300)
    word(target,target+0x100);word(target+0x100,0x1900200)
    # noboss compares entity handles, not character class IDs. Execute the
    # original CMultiplayer query and getter; only the native state is seeded.
    # Include the null sentinel match as the original code does (no extra guard).
    target_handle=(77,78,0)[variant%3]
    current.is_boss=int(target_handle==(0 if multiplayer else 77))
    word(target+0x1c,target_handle);word(0x58bdfc,77);word(0x5a9f74,0)
    word(0x5acc48,1);word(0x5acc18,0x498f34)
    m.mem_write(0x5acc28,bytes([multiplayer]))
    word(target+0x35c,state);m.mem_write(state+0x2ae,bytes([128 if current.is_nonhumanoid else 0]))
    m.mem_write(state+0x4ec,struct.pack('<f',current.danger))
    word(0x58bdcc,0);word(0x1805018,16 if current.is_actor else 0)
    sp=0x1f00000;stop=0x1fff000
    m.mem_write(sp,struct.pack('<III',stop,target,0x1807000))
    m.reg_write(UC_X86_REG_ECX,base);m.reg_write(UC_X86_REG_ESP,sp)
    m.emu_start(0xf6ab0 if path else 0xf6b60,stop,count=2000)
    assert m.reg_read(UC_X86_REG_EIP)==stop and m.reg_read(UC_X86_REG_ESP)==sp+12
    actual=dll.filter_tag(c.byref(event),c.byref(current))
    assert selected==([actual] if actual else []),(flags,path,variant,selected,actual)
    cases+=1
# Run the original attribute parser and CRT directly, including repeated
# assignments. No parsing branch or string/numeric conversion is stubbed.
dll.filter_parse.argtypes=[c.POINTER(Event),c.c_char_p,c.c_char_p]
dll.filter_parse.restype=c.c_int
parser_cases=0
for initial_flags,key,value in itertools.product((0,31,224,255),
    ('noboss','FILTERHUMANOID','filteractor','noactor','passtag','FAILTAG',
     'maxdangerrating','team_filter','noskirmish'),
    ('true','TrUe','false','1','0','-1','257',' +258tail','hero','ENEMY','unknown','')):
    m.context_restore(context)
    base=0x1800000
    event=Event(101,102,255,initial_flags,30)
    m.mem_write(base,bytes(32))
    m.mem_write(base+0x14,bytes([101,102,255]))
    word(base+0x18,30);m.mem_write(base+0x1c,bytes([initial_flags]))
    m.mem_write(base+0x100,key.encode()+b'\0')
    m.mem_write(base+0x200,value.encode()+b'\0')
    sp=0x1f00000;stop=0x1fff000
    m.mem_write(sp,struct.pack('<III',stop,base+0x100,base+0x200))
    m.reg_write(UC_X86_REG_ECX,base);m.reg_write(UC_X86_REG_ESP,sp)
    m.emu_start(0xf6860,stop,count=10000)
    assert m.reg_read(UC_X86_REG_EIP)==stop and m.reg_read(UC_X86_REG_ESP)==sp+12
    assert dll.filter_parse(c.byref(event),key.encode(),value.encode())==m.reg_read(UC_X86_REG_EAX)&255
    original=bytes(m.mem_read(base+0x14,3))+bytes(m.mem_read(base+0x1c,1))+bytes(m.mem_read(base+0x18,4))
    assert bytes(event)==original,(initial_flags,key,value,bytes(event).hex(),original.hex())
    parser_cases+=1
# Unrecognized fields must remain available to the XML1 base event parser.
event=Event(101,102,255,0,32);before=bytes(event)
assert dll.filter_parse(c.byref(event),b'time',b'-1')==0 and bytes(event)==before

# Original same-type copy includes real RTTI checks and native base copying.
# Its extra type-query vtable slot is absent in XML1; use XML1's copy slot +18,
# not XML2's +1c, when the adapter is connected.
dll.filter_copy.argtypes=[c.POINTER(Event),c.POINTER(Event)]
dll.filter_copy.restype=None
copy_cases=0
for source_flags,destination_flags in itertools.product(range(256),(0,31,160,255)):
    m.context_restore(context)
    source=Event(101,102,17,source_flags,29)
    destination=Event(2,3,255,destination_flags,32)
    base=0x1800000;other=0x1800100
    for address,event,owner in ((base,destination,0x1802000),(other,source,0x1803000)):
        m.mem_write(address,bytes(32));word(address,0x4a2620);word(address+4,owner)
        m.mem_write(address+0x14,bytes([event.pass_tag,event.fail_tag,event.max_danger]))
        word(address+0x18,event.team_filter);m.mem_write(address+0x1c,bytes([event.flags]))
    sp=0x1f00000;stop=0x1fff000
    m.mem_write(sp,struct.pack('<II',stop,other))
    m.reg_write(UC_X86_REG_ECX,base);m.reg_write(UC_X86_REG_ESP,sp)
    m.emu_start(0x10a130,stop,count=10000)
    assert m.reg_read(UC_X86_REG_EIP)==stop and m.reg_read(UC_X86_REG_ESP)==sp+8
    dll.filter_copy(c.byref(destination),c.byref(source))
    original=bytes(m.mem_read(base+0x14,3))+bytes(m.mem_read(base+0x1c,1))+bytes(m.mem_read(base+0x18,4))
    assert bytes(destination)==original,(source_flags,destination_flags)
    assert struct.unpack('<I',m.mem_read(base+4,4))[0]==0x1802000
    assert struct.unpack('<I',m.mem_read(base,4))[0]==0x4a2620
    copy_cases+=1

# The imported character property is parsed through XML2's original full
# CharacterDef parser, not a hand-coded expected truth table.
dll.character_filter_parse.argtypes=[c.POINTER(c.c_uint8),c.c_char_p,c.c_char_p]
dll.character_filter_parse.restype=c.c_int
character_cases=0
for initial,key,value in itertools.product((0,1,126,255),
    ('nonhumanoidskeleton','NONHUMANOIDSKELETON'),('true','TrUe','false','1','0','')):
    m.context_restore(context)
    base=0x1800000;key_at=base+0x1000;value_at=base+0x1100
    m.mem_write(base,bytes(0x600));m.mem_write(base+0x2ae,bytes([0x55|((initial&1)<<7)]))
    m.mem_write(key_at,key.encode()+b'\0');m.mem_write(value_at,value.encode()+b'\0')
    sp=0x1f00000;stop=0x1fff000
    m.mem_write(sp,struct.pack('<III',stop,key_at,value_at))
    m.reg_write(UC_X86_REG_ECX,base);m.reg_write(UC_X86_REG_ESP,sp)
    m.emu_start(0xc9390,stop,count=50000)
    assert m.reg_read(UC_X86_REG_EIP)==stop and m.reg_read(UC_X86_REG_ESP)==sp+12
    flags=c.c_uint8(initial)
    assert dll.character_filter_parse(c.byref(flags),key.encode(),value.encode())==m.reg_read(UC_X86_REG_EAX)&255
    native=m.mem_read(base+0x2ae,1)[0]
    assert flags.value&1==native>>7
    assert flags.value&254==initial&254 and native&127==0x55
    character_cases+=1

a.out.parent.mkdir(parents=True,exist_ok=True)
a.out.write_text(json.dumps(dict(cases=cases,parser_cases=parser_cases,copy_cases=copy_cases,character_cases=character_cases,xbe_sha256=hashlib.sha256(raw).hexdigest(),
    dll_sha256=hashlib.sha256(a.dll.read_bytes()).hexdigest(),
    entries=['000F6AB0','000F6B60'],not_covered=['XML1 registration','XML1 target queries','live combat']),indent=2))
print(f'PASS {cases} compiled filter decisions against original XML2 methods and tag dispatch')

print(f'PASS {parser_cases} compiled attribute parses against original XML2 parser and CRT')

print(f'PASS {copy_cases} compiled copies against original XML2 clone including RTTI')

print(f'PASS {character_cases} skeleton-property parses against original XML2 character parser')
