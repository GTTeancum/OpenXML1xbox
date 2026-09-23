"""Compare compiled repaired branch text with original x86 (not full combat)."""
import argparse
import struct
import subprocess
from pathlib import Path
from unicorn import Uc, UC_ARCH_X86, UC_MODE_32
from unicorn.x86_const import UC_X86_REG_EAX, UC_X86_REG_EDX, UC_X86_REG_EDI, UC_X86_REG_ESP, UC_X86_REG_EFLAGS, UC_X86_REG_EIP
from unicorn.x86_const import UC_X86_REG_EBX, UC_X86_REG_EBP, UC_X86_REG_ESI

p = argparse.ArgumentParser(description=__doc__)
p.add_argument("xbe", type=Path)
p.add_argument("corrected", type=Path)
p.add_argument("--out", type=Path, required=True)
a = p.parse_args()
raw = a.xbe.read_bytes()
u32 = lambda at: struct.unpack_from("<I", raw, at)[0]
assert raw[:4] == b"XBEH"
cpu = Uc(UC_ARCH_X86, UC_MODE_32)
cpu.mem_map(0, 0x2000000)
for i in range(u32(0x11c)):
    at = u32(0x120) - u32(0x104) + 56*i
    _, va, size, offset, length = struct.unpack_from("<5I", raw, at)
    cpu.mem_write(va, raw[offset:offset+length])
assert bytes(cpu.mem_read(0x61ff8, 2)) == bytes.fromhex("740c")
assert bytes(cpu.mem_read(0x61ffe, 4)) == bytes.fromhex("84c07504")
text = a.corrected.read_text()
start = text.index("loc_00061FE5: ;", text.index("void sub_00061BC0(void)"))
end = text.index("loc_00062008: ;", start)
block = text[start:end]
assert "sub_000620" not in block and "TEST_NZ(_fa, _fb)" in block
reject_start=text.index("loc_00061D46: ;",text.index("void sub_00061BC0(void)"))
reject_end=text.index("loc_00061D4D: ;",reject_start)
rejection=text[reject_start:reject_end]
assert "goto loc_00062075;" in rejection and "sub_00062075" not in rejection
assert text.index("loc_00062071: ;",end)<text.index("loc_00062075: ;",end)<text.index("loc_00062081: ;",end)
for original_eax in (0,1,0xabcdef55,0xffffffff):
    cpu.reg_write(UC_X86_REG_EAX,original_eax)
    cpu.reg_write(UC_X86_REG_ESP,0x1f00000)
    cpu.emu_start(0x61d46,0x62075,count=5)
    assert cpu.reg_read(UC_X86_REG_EIP)==0x62075
    assert cpu.reg_read(UC_X86_REG_EAX)==original_eax&0xffffff00
    assert cpu.reg_read(UC_X86_REG_ESP)==0x1f00000
rows = []
for upper in (0xabcdef00, 0x12340000):
    for first in (0, 1, 128, 255):
        for second in (0, 1, 128, 255):
            memory = bytearray([0xa5]*8192)
            memory[4096+0x138] = first
            memory[4096+0x13] = second
            struct.pack_into("<I", memory, 1024+0x27c, 0x42809380)
            cpu.mem_write(0, bytes(memory))
            for reg, value in ((UC_X86_REG_EAX, upper|0x55), (UC_X86_REG_EDX, 0x76543210),
                               (UC_X86_REG_EDI, 1024), (UC_X86_REG_ESP, 4096), (UC_X86_REG_EFLAGS, 2)):
                cpu.reg_write(reg, value)
            cpu.emu_start(0x61fe5, 0x62008, count=100)
            assert cpu.reg_read(UC_X86_REG_EIP) == 0x62008
            expected = bytes(cpu.mem_read(0, 8192))
            # Original block writes only the saved pre-call health value.
            struct.pack_into("<I", memory, 4096+0x2c, 0x42809380)
            assert expected == memory and cpu.reg_read(UC_X86_REG_ESP) == 4096
            rows.append((upper|0x55, first, second, cpu.reg_read(UC_X86_REG_EAX), cpu.reg_read(UC_X86_REG_EDX)))
a.out.mkdir(parents=True, exist_ok=True)
ep_start = text.index("loc_00062081: ;", end)
ep_end = text.index("    #undef fp_push", ep_start)
epilogue = text[ep_start:ep_end]
assert epilogue.count("esp += 20; return;") == 1
epilogue = epilogue.replace("esp += 20; return;", "esp += 20; goto ep_done;")
# Execute the actual original pops/RET16. The preceding cookie helper and
# virtual call are deliberately outside this fixture's acceptance scope.
memory = bytearray([0xa5]*8192)
saved = (0x11223344, 0x22334455, 0x33445566, 0x44556677)
struct.pack_into("<4I", memory, 4096, *saved)
struct.pack_into("<I", memory, 4096+0x128, 0x1000000)
cpu.mem_write(0, bytes(memory))
cpu.reg_write(UC_X86_REG_ESP, 4096)
cpu.emu_start(0x62081, 0x1000000, count=100)
assert cpu.reg_read(UC_X86_REG_EIP) == 0x1000000
ep_expected = [cpu.reg_read(r) for r in (UC_X86_REG_EDI, UC_X86_REG_ESI, UC_X86_REG_EBP, UC_X86_REG_EBX, UC_X86_REG_ESP)]
assert bytes(cpu.mem_read(0, 8192)) == memory
source = '''#include <stdint.h>
#include <stdio.h>
#include <string.h>
#define MEM8(x) memory[x]
#define MEM32(x) (*(uint32_t*)(memory+(x)))
#define LO8(x) ((x)&255u)
#define SET_LO8(x,v) ((x)=((x)&0xffffff00u)|((v)&255u))
#define TEST_Z(a,b) (((a)&(b))==0)
#define TEST_NZ(a,b) (((a)&(b))!=0)
#define POP32(s,v) do{(v)=MEM32(s);(s)+=4;}while(0)
static const uint32_t rows[][5]={ROWS};
static int run(const uint32_t *v){
unsigned char memory[8192],expected[8192];memset(memory,0xa5,sizeof(memory));
uint32_t eax=v[0],edx=0x76543210,edi=1024,esp=4096,_fa=0,_fb=0;
int32_t _fas=0,_fbs=0;
MEM8(esp+0x138)=v[1];MEM8(esp+0x13)=v[2];MEM32(edi+0x27c)=0x42809380;
memcpy(expected,memory,sizeof(memory));
uint32_t saved=0x42809380;memcpy(expected+esp+0x2c,&saved,4);
BLOCK
loc_00062008: ;
return eax!=v[3]||edx!=v[4]||esp!=4096||memcmp(memory,expected,sizeof(memory));
}
static int reject_run(uint32_t eax){
uint32_t original=eax;
REJECTION
loc_00062075: ;
return eax!=(original&0xffffff00u);
}
static int epilogue_run(void){
unsigned char memory[8192],expected[8192];memset(memory,0xa5,sizeof(memory));
uint32_t edi=0,esi=0,ebp=0,ebx=0,esp=4096;
const uint32_t saved[4]={0x11223344,0x22334455,0x33445566,0x44556677};
memcpy(memory+esp,saved,sizeof(saved));MEM32(esp+0x128)=0x1000000;
memcpy(expected,memory,sizeof(memory));
EPILOGUE
ep_done:;
const uint32_t actual[5]={edi,esi,ebp,ebx,esp},gold[5]={EP_EXPECTED};
return memcmp(actual,gold,sizeof(actual))||memcmp(memory,expected,sizeof(memory));
}
int main(void){for(unsigned i=0;i<sizeof(rows)/sizeof(rows[0]);++i)if(run(rows[i])){
fprintf(stderr,"FAIL original-x86 branch case %u\\n",i);return 1;}
if(epilogue_run()){puts("FAIL combat epilogue registers/stack/canaries");return 2;}
if(reject_run(0)||reject_run(1)||reject_run(0xabcdef55)||reject_run(0xffffffff)){puts("FAIL repeated-hit rejection");return 3;}
puts("PASS 32 original-x86 branch cases, 4 rejection cases and RET16 epilogue; virtual call/full combat not covered");return 0;}
'''.replace("ROWS", ",".join("{"+",".join(str(n)+"u" for n in row)+"}" for row in rows)).replace("BLOCK", block).replace("REJECTION", rejection).replace("EPILOGUE", epilogue).replace("EP_EXPECTED", ",".join(str(n)+"u" for n in ep_expected))
(a.out/"branch.c").write_text(source)
(a.out/"CMakeLists.txt").write_text('cmake_minimum_required(VERSION 3.20)\nproject(CombatBranch C)\nadd_executable(combat-branch branch.c)\n')
subprocess.run(["cmake", "-S", str(a.out), "-B", str(a.out/"build")], check=True)
subprocess.run(["cmake", "--build", str(a.out/"build"), "--config", "Release"], check=True)
subprocess.run([str(a.out/"build/Release/combat-branch.exe")], check=True)
