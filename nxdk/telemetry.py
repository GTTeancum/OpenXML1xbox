"""Read native-target swap and memory counters from the isolated emulator."""
import argparse,json,pathlib,re,socket,time
p=argparse.ArgumentParser();p.add_argument('--seconds',type=float,default=5);p.add_argument('--map',default=str(pathlib.Path(__file__).parent/'xml1.map'));p.add_argument('--port',type=int,default=46370);a=p.parse_args()
if not 0<=a.seconds<=30:p.error('Use a bounded sample of 0..30 seconds')
symbols=pathlib.Path(a.map).read_text()
names=['port_frame_count','port_frame_tick','port_frame_free_pages']
addresses={name:int(re.search('_'+name+r'\s+([0-9a-fA-F]+)',symbols)[1],16) for name in names}
def sample():
    with socket.create_connection(('127.0.0.1',a.port),timeout=10) as s:
        f=s.makefile('rwb',buffering=0);f.readline()
        def send(cmd,args=None):
            payload={'execute':cmd}
            if args:payload['arguments']=args
            f.write((json.dumps(payload)+'\n').encode())
            while True:
                reply=json.loads(f.readline())
                if 'error'in reply:raise RuntimeError(reply)
                if 'return'in reply:return reply['return']
        send('qmp_capabilities');values={}
        for name,address in addresses.items():
            raw=send('human-monitor-command',{'command-line':f'x /1wx 0x{address:x}'})
            values[name]=int(re.findall(r'0x([0-9a-fA-F]{8})\b',raw)[-1],16)
        return values
start=sample();t=time.monotonic();time.sleep(a.seconds);end=sample();elapsed=time.monotonic()-t
frames=(end[names[0]]-start[names[0]])&0xffffffff;ticks=(end[names[1]]-start[names[1]])&0xffffffff
print(json.dumps({'start':start,'end':end,'frames':frames,'host_seconds':elapsed,'guest_ms':ticks,'swaps_per_host_second':frames/elapsed,'swaps_per_guest_second':frames*1000/ticks if ticks else None},indent=2))
