"""Extract observed planar 24-bit DSP scratch transfers for offline comparison.
Addresses and sizes must come from capture evidence. No playback changes.
"""
import argparse
import struct
from pathlib import Path
import numpy as np
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('capture',type=Path)
p.add_argument('output',type=Path)
p.add_argument('--kind',type=int,choices=(2,3),required=True)
p.add_argument('--left',type=lambda x:int(x,0),required=True)
p.add_argument('--right',type=lambda x:int(x,0),required=True)
p.add_argument('--ring-bytes',type=int,required=True)
p.add_argument('--chunk-bytes',type=int,required=True)
a=p.parse_args()
if a.chunk_bytes<=0 or a.chunk_bytes%4 or a.ring_bytes<a.chunk_bytes: raise ValueError('Invalid dimensions')
channels=[[],[]]
with a.capture.open('rb') as f:
    while header:=f.read(12):
        if len(header)!=12: raise ValueError('Truncated header')
        kind,address,size=struct.unpack('<III',header)
        if size>64*1024*1024: raise ValueError('Invalid size')
        payload=f.read(size)
        if len(payload)!=size: raise ValueError('Truncated payload')
        if kind!=a.kind or size!=a.chunk_bytes: continue
        for channel,base in enumerate((a.left,a.right)):
            if base<=address and address+size<=base+a.ring_bytes:
                channels[channel].append(np.frombuffer(payload,dtype='<u4'))
if not all(channels): raise ValueError('Missing channel data')
left,right=(np.concatenate(c) for c in channels)
if len(left)!=len(right): raise ValueError('Unequal channel lengths')
raw=np.stack((left,right),axis=1)
pcm=(raw<<8).astype('<i4').astype(np.float32)/2147483648
pcm.astype('<f4').tofile(a.output)
print(f'Extracted {len(pcm)} stereo sample frames without resampling')
