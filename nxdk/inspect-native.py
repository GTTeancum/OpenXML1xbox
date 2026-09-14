"""Read-only QMP memory inspection and disassembly, without host UI input."""
import argparse,json,re,socket,pathlib,bisect
from capstone import Cs,CS_ARCH_X86,CS_MODE_32
p=argparse.ArgumentParser();p.add_argument('address',type=lambda x:int(x,0));p.add_argument('--size',type=int,default=192);p.add_argument('--text',action='store_true');p.add_argument('--port',type=int,default=46370);a=p.parse_args()
with socket.create_connection(('127.0.0.1',a.port),timeout=10) as s:
    f=s.makefile('rwb',buffering=0);f.readline()
    def send(cmd,args=None):
        request={'execute':cmd}
        if args:request['arguments']=args
        f.write((json.dumps(request)+'\n').encode())
        while True:
            result=json.loads(f.readline())
            if 'return' in result or 'error' in result:return result
    send('qmp_capabilities')
    result=send('human-monitor-command',{'command-line':f'x /{a.size}bx 0x{a.address:x}'})
    data=bytes(int(v,16) for v in re.findall(r'0x([0-9a-fA-F]{2})\b',result.get('return','')))
    if a.text:print(data.split(b'\0',1)[0].decode(errors='replace'))
    else:
        text=(pathlib.Path(__file__).parent/'xml1.map').read_text()
        symbols=sorted((int(m[2],16),m[1]) for m in re.finditer(r'^\s+\w+:\w+\s+(\S+)\s+([0-9a-f]{16})',text,re.M))
        if a.address<0x80000000:
            previous=[x for x in symbols if x[0]<=a.address]
            if previous:print(f'{previous[-1][1]} +0x{a.address-previous[-1][0]:x}')
        for insn in Cs(CS_ARCH_X86,CS_MODE_32).disasm(data,a.address):print(f'{insn.address:08x}: {insn.mnemonic} {insn.op_str}')
