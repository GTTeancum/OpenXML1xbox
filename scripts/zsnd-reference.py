"""Decode a named game sound from the disc's ZSND banks into a comparison reference.

compare-movie-audio.py currently has only one reference, the decoded movie audio.
This produces the same kind of reference for any sound the game itself plays, so a
captured voice can be checked against known-correct samples on a short mono cue
instead of only on long movie audio.

Output is raw interleaved stereo s16 at 48 kHz, which is what compare-movie-audio.py
reads as its reference. The bank's own rate is resampled linearly; that is adequate
for alignment and envelope work and is not a full-band fidelity reference.

Bank layout and the ADPCM block layout are documented in the remake project's
Docs/02_AUDIO_RESEARCH.md; the decoder below was verified sample-for-sample against
ffmpeg's adpcm_ima_xbox on every menu clip.
"""
import argparse
import struct
import wave
from pathlib import Path
import numpy as np

def pjw(s):
    h=0
    for ch in s.upper():
        h=((h<<4)+ord(ch))&0xFFFFFFFF
        t=h&0xF0000000
        if t: h=(h^(t>>24))&~0xF0000000&0xFFFFFFFF
    return h

class Bank:
    """"ZSND" "XBOX", u32 total, u32 header size, then (count, hash table, table) x7."""
    def __init__(self,path):
        self.path=path
        d=self.d=Path(path).read_bytes()
        if d[:4]!=b"ZSND": raise ValueError(f"{path}: not a ZSND bank")
        self.platform=d[4:8]
        tabs=struct.unpack_from("<21I",d,16)
        (sc,sh,st),(pc,_,pt),(fc,_,ft)=[tabs[i:i+3] for i in range(0,9,3)]
        self.hashes=[struct.unpack_from("<II",d,sh+8*i) for i in range(sc)]
        self.sound_sample=[struct.unpack_from("<H",d,st+24*i)[0] for i in range(sc)]
        self.samples=[struct.unpack_from("<HHI",d,pt+28*i) for i in range(pc)]
        self.files=[]
        for i in range(fc):
            o=ft+84*i
            off,size,fmt,_,_=struct.unpack_from("<5I",d,o)
            self.files.append((off,size,fmt,d[o+20:o+84].split(b"\0")[0].decode("latin-1")))
    def index_of(self,name):
        h=pjw(name)
        for hh,idx in self.hashes:
            if hh==h: return idx
        return None
    def sound(self,name):
        """(pcm channels, rate, file name) for a sound name, or None."""
        idx=self.index_of(name)
        if idx is None or idx>=len(self.sound_sample): return None
        file_index,flags,rate=self.samples[self.sound_sample[idx]]
        off,size,_,fname=self.files[file_index]
        channels=2 if flags&2 else 1
        return decode_xbadpcm(self.d[off:off+size],channels),rate,fname

# IMA tables; the Xbox block is 36 bytes per channel and holds 64 samples:
# a 4-byte per-channel header (s16 predictor, u8 index, u8 reserved) and 63 codes.
# Stereo code bytes alternate in runs of FOUR bytes per channel, low nibble first.
STEP=[7,8,9,10,11,12,13,14,16,17,19,21,23,25,28,31,34,37,41,45,50,55,60,66,73,80,88,97,107,118,
      130,143,157,173,190,209,230,253,279,307,337,371,408,449,494,544,598,658,724,796,876,963,1060,1166,
      1282,1411,1552,1707,1878,2066,2272,2499,2749,3024,3327,3660,4026,4428,4871,5358,5894,6484,7132,7845,
      8630,9493,10442,11487,12635,13899,15289,16818,18500,20350,22385,24623,27086,29794,32767]
IDX=[-1,-1,-1,-1,2,4,6,8,-1,-1,-1,-1,2,4,6,8]

def decode_xbadpcm(data,channels):
    block=36*channels
    out=[[] for _ in range(channels)]
    for b in range(len(data)//block):
        o=b*block
        pred=[];idx=[];left=[]
        for c in range(channels):
            p,i=struct.unpack_from("<hB",data,o+4*c)
            pred.append(p);idx.append(min(max(i,0),88));out[c].append(p);left.append(63)
        for k,byte in enumerate(data[o+4*channels:o+block]):
            c=0 if channels==1 else (k//4)%channels
            for n in (byte&0xF,byte>>4):
                if left[c]==0: break
                step=STEP[idx[c]]
                diff=((2*(n&7)+1)*step)>>3
                if n&8: diff=-diff
                pred[c]=max(-32768,min(32767,pred[c]+diff))
                idx[c]=max(0,min(88,idx[c]+IDX[n]))
                out[c].append(pred[c]);left[c]-=1
    return [np.array(c,dtype=np.int16) for c in out]

def banks(root):
    for path in sorted(Path(root).rglob("*")):
        if path.suffix.lower() in (".zsm",".zss"):
            try: yield Bank(path)
            except Exception: continue

def to_stereo(channels,rate,target):
    """Linear resample to the reference rate and duplicate mono to both sides."""
    source=np.stack(channels).astype(np.float64)
    n=source.shape[1]
    if n==0: return np.zeros((0,2),dtype=np.int16)
    if target and target!=rate:
        count=max(1,int(round(n*target/rate)))
        at=np.arange(count)*(rate/target)
        source=np.stack([np.interp(at,np.arange(n),c) for c in source])
    if source.shape[0]==1: source=np.repeat(source,2,axis=0)
    return np.clip(source.T,-32768,32767).astype(np.int16)

p=argparse.ArgumentParser(description=__doc__,formatter_class=argparse.RawDescriptionHelpFormatter)
p.add_argument("root",type=Path,help="the extracted disc's sounds/zsds directory")
p.add_argument("name",nargs="?",help='sound name, e.g. "music/menu_c" or "menus/menu_flip"')
p.add_argument("--out",type=Path,help="raw 48 kHz stereo s16 reference for compare-movie-audio.py")
p.add_argument("--wav",type=Path,help="also write a WAV at the bank's own rate, for listening")
p.add_argument("--find",action="store_true",help="only report which bank holds the name")
p.add_argument("--rate",type=int,default=48000,
               help="reference rate: 48000 to compare against final output, 0 to keep the bank's own rate, "
                    "which is what XML1_CAPTURE_VOICE_SOURCE captures before any SRC")
args=p.parse_args()

if not args.name:
    p.error("a sound name is required")

for bank in banks(args.root):
    found=bank.sound(args.name)
    if not found: continue
    channels,rate,fname=found
    seconds=len(channels[0])/rate if rate else 0
    print(f"{args.name}: {bank.path.name} {fname} {len(channels)}ch {rate} Hz {seconds:.3f}s")
    if args.find: break
    if args.wav:
        with wave.open(str(args.wav),"wb") as w:
            w.setnchannels(len(channels));w.setsampwidth(2);w.setframerate(rate)
            n=min(len(c) for c in channels)
            w.writeframes(np.stack([c[:n] for c in channels]).T.tobytes())
        print(f"wrote {args.wav}")
    if args.out:
        reference=to_stereo(channels,rate,args.rate)
        args.out.write_bytes(reference.tobytes())
        out_rate=args.rate or rate
        print(f"wrote {args.out} ({len(reference)/out_rate:.3f}s stereo s16 {out_rate} Hz)")
    break
else:
    print(f"{args.name}: not found under {args.root}")
