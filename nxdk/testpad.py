"""Drive only the port's opt-in test controller through xemu guest RAM.

No host keyboard, mouse, controller API or window interaction is used.
"""
import argparse, json, pathlib, re, socket, struct, time

p = argparse.ArgumentParser()
p.add_argument('button', choices=['connect','disconnect','a','b','x','y','start','back','up','down','left','right','neutral','move-up','move-down','move-left','move-right'])
p.add_argument('--hold', type=float, default=0.2)
p.add_argument('--map', default=str(pathlib.Path(__file__).parent/'xml1.map'))
p.add_argument('--qmp', type=int, default=46370)
p.add_argument('--gdb', type=int, default=46371)
a = p.parse_args()
if not 0 <= a.hold <= 30: p.error('--hold must be between 0 and 30 seconds')
address = int(re.search(r'_port_testpad\s+([0-9a-fA-F]+)', pathlib.Path(a.map).read_text())[1],16)

def qmp(command):
    with socket.create_connection(('127.0.0.1',a.qmp),timeout=10) as s:
        f=s.makefile('rwb',buffering=0); f.readline()
        def send(cmd):
            f.write((json.dumps({'execute':cmd})+'\n').encode())
            while True:
                reply=json.loads(f.readline())
                if 'error' in reply: raise RuntimeError(reply)
                if 'return' in reply: return reply
        send('qmp_capabilities'); return send(command)

def write(data):
    qmp('stop')
    try:
        with socket.create_connection(('127.0.0.1',a.gdb),timeout=10) as s:
            payload=f'M{address:x},{len(data):x}:{data.hex()}'.encode()
            s.sendall(b'$'+payload+b'#'+f'{sum(payload)&255:02x}'.encode())
            while s.recv(1)!=b'$': pass
            reply=bytearray()
            while True:
                c=s.recv(1)
                if c==b'#': break
                if not c: raise RuntimeError('GDB disconnected')
                reply+=c
            checksum=s.recv(2);s.sendall(b'+')
            if reply!=b'OK':raise RuntimeError(f'Guest RAM write failed: {reply!r}')
    finally: qmp('cont')

state=bytearray(24)
struct.pack_into('<I',state,0,0 if a.button=='disconnect' else 0x54535450)
digital={'up':1,'down':2,'left':4,'right':8,'start':16,'back':32}
struct.pack_into('<H',state,4,digital.get(a.button,0))
if a.button in ['a','b','x','y']:state[6+['a','b','x','y'].index(a.button)]=255
if a.button.startswith('move-'):
    axis=14 if a.button in ('move-left','move-right') else 16
    struct.pack_into('<h',state,axis,-32767 if a.button in ('move-left','move-down') else 32767)
write(state)
if a.button not in ['connect','disconnect','neutral']:
    time.sleep(a.hold);state[4:]=bytes(20);write(state)
print(f'Test controller: {a.button}, guest RAM 0x{address:x}')
