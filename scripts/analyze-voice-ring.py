"""Count unchanged reads at the same voice ring position; no playback modification.

Select a contiguous voice configuration from the capture CSV. Repeated samples
can be legitimate (including silence), so these counts alone do not prove an underrun.
"""
import argparse
import csv
import json
from pathlib import Path
import numpy as np

p=argparse.ArgumentParser(description=__doc__)
p.add_argument('samples',type=Path)
p.add_argument('timeline',type=Path)
p.add_argument('--begin',type=int,required=True)
p.add_argument('--end',type=int,required=True)
p.add_argument('--output',type=Path)
a=p.parse_args()
data=np.fromfile(a.samples,dtype='<f4')
if len(data)%2: raise ValueError('Incomplete stereo frame')
data=data.reshape(-1,2)
if not 0<=a.begin<a.end<=len(data): raise ValueError('Invalid sample interval')
previous={};cursor=a.begin;repeated=0;repeated_nonzero=0;configuration=None
for row in csv.DictReader(a.timeline.open()):
    start=int(row['sample_frame']);count=int(row['count'])
    if start<a.begin or start>=a.end: continue
    config=(row['voice'],row['format'],row['base'])
    if configuration is None: configuration=config
    if config!=configuration: raise ValueError('Interval crosses voice configuration changes')
    if start!=cursor or start+count>a.end: raise ValueError('Interval must align with contiguous capture records')
    block=data[start:start+count];payload=block.tobytes()
    key=(int(row['next_offset']),count)
    if previous.get(key)==payload:
        repeated+=count
        repeated_nonzero+=int(np.count_nonzero(np.any(block!=0,axis=1)))
    previous[key]=payload;cursor+=count
if cursor!=a.end: raise ValueError('Incomplete timeline interval')
report=dict(voice=int(configuration[0]),format=configuration[1],base=configuration[2],
    begin=a.begin,end=a.end,sample_frames=a.end-a.begin,
    unchanged_at_same_ring_position=repeated,
    unchanged_nonzero_frames=repeated_nonzero,
    unchanged_fraction=repeated/(a.end-a.begin))
text=json.dumps(report,indent=2)
print(text)
if a.output: a.output.write_text(text+'\n',encoding='utf-8')
