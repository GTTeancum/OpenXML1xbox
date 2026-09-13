"""Exploratory alignment of captured 48-kHz stereo s16 PCM against decoded source.
Correlation is evidence of similarity, not a complete audio-fidelity verdict.
"""
import argparse
import json
from pathlib import Path
import numpy as np
parser=argparse.ArgumentParser(description=__doc__)
parser.add_argument('native',type=Path)
parser.add_argument('reference',type=Path)
parser.add_argument('--output',type=Path)
parser.add_argument('--native-format',choices=('s16','f32'),default='s16')
args=parser.parse_args()
def read(path,fmt="s16"):
    values=np.fromfile(path,dtype="<f4" if fmt=="f32" else "<i2")
    if len(values)%2: raise ValueError('Incomplete stereo sample frame')
    return values.reshape(-1,2).astype(np.float64)/(1.0 if fmt=="f32" else 32768.0)
native,reference=read(args.native,args.native_format),read(args.reference)
def envelope(x):
    return np.sqrt(np.mean(x[:len(x)//240*240].reshape(-1,240,2)**2,axis=(1,2)))
a,b=envelope(native),envelope(reference)
b=b-b.mean();n=len(b)
if len(a)<n: raise ValueError('Native capture shorter than reference')
def normalized_valid(a,b):
    n=len(b);size=1<<(len(a)+n-2).bit_length()
    b=b-b.mean()
    cross=np.fft.irfft(np.fft.rfft(a,size)*np.fft.rfft(b[::-1],size),size)[n-1:len(a)]
    total=np.r_[0,np.cumsum(a)];square=np.r_[0,np.cumsum(a*a)]
    variance=np.maximum(square[n:]-square[:-n]-(total[n:]-total[:-n])**2/n,0)
    score=np.zeros_like(cross)
    # Exclude silent windows: FFT roundoff divided by zero is not correlation.
    valid=variance>1e-6*n
    energy=float(np.sum(b*b))
    if energy>1e-12: score[valid]=cross[valid]/np.sqrt(variance[valid]*energy)
    return score
scores=normalized_valid(a,b);at=int(np.argmax(scores))
report={'native_seconds':len(native)/48000,'reference_seconds':len(reference)/48000,
        'energy_start_seconds':at*.005,'energy_correlation':float(scores[at]),'waveform_windows':[]}
# Four-sample averages reduce cost; this does not compare full-band fidelity.
def low(x):return x[:len(x)//4*4].reshape(-1,4,2).mean(axis=1)[:,0]
a,r=low(native),low(reference)
for second in (1,3,5,7,9):
    b=r[second*12000:second*12000+6000]
    if len(b)!=6000: continue
    if np.var(b)<=1e-6:
        report['waveform_windows'].append({'reference_seconds':second,'status':'below comparison energy floor'})
        continue
    scores=normalized_valid(a,b);at=int(np.argmax(np.abs(scores)))
    report['waveform_windows'].append({'reference_seconds':second,'native_seconds':at/12000,
                                      'correlation':float(scores[at])})
result=json.dumps(report,indent=2)
print(result)
if args.output: args.output.write_text(result,encoding='utf-8')
