"""Read emulator state/capture its own framebuffer; no host input or desktop access."""
import argparse,json,socket,re,pathlib
p=argparse.ArgumentParser();p.add_argument('command');p.add_argument('--path');p.add_argument('--monitor');p.add_argument('--map',default=str(pathlib.Path(__file__).parent/'xml1.map'));p.add_argument('--port',type=int,default=46370);a=p.parse_args()
with socket.create_connection(('127.0.0.1',a.port),timeout=10) as s:
    f=s.makefile('rwb',buffering=0)
    print(f.readline().decode().strip())
    def send(command,args=None):
        payload={'execute':command}
        if args:payload['arguments']=args
        f.write((json.dumps(payload)+'\n').encode())
        while True:
            answer=json.loads(f.readline())
            if 'return' in answer or 'error' in answer:return answer
    send('qmp_capabilities')
    if a.command=='capture': print(send('screendump',{'filename':a.path}))
    elif a.command=='status': print(send('query-status'))
    elif a.command=='registers': print(send('human-monitor-command',{'command-line':'info registers'}))
    elif a.command=='monitor': print(send('human-monitor-command',{'command-line':a.monitor}))
    elif a.command=='logs':
        symbols=pathlib.Path(a.map).read_text()
        addr=int(re.search(r'_port_log_buffer\s+([0-9a-fA-F]+)',symbols)[1],16)
        raw=send('human-monitor-command',{'command-line':f'x /65536bx 0x{addr:x}'})
        data=bytes(int(x,16) for x in re.findall(r'0x([0-9a-fA-F]{2})\b',raw.get('return','')))
        result=data.split(b'\0',1)[0].decode(errors='replace')
        if a.path:pathlib.Path(a.path).write_text(result)
        print(result)
    elif a.command=='quit':print(send('quit'))
    else:raise SystemExit('Supported commands: capture, status, registers, quit')
