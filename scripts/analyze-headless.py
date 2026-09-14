"""Summarize native 1080p frame windows and unchanged PCM timing evidence."""
import argparse
import csv
import json
from pathlib import Path
import re

parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument('run', type=Path)
parser.add_argument('--first-frame', type=int, default=1)
parser.add_argument('--last-frame', type=int)
parser.add_argument('--audio-start-wall', type=float, default=0)
args = parser.parse_args()
text = (args.run / 'dx8-live.log').read_text(errors='replace')
windows = []
for match in re.finditer(r'\[DX8 FPS\] frame=(\d+) fps=([\d.]+) mean_ms=([\d.]+) max_frame_ms=([\d.]+) output=(\d+x\d+)', text):
    frame, fps, mean, worst, resolution = match.groups()
    frame = int(frame)
    if frame - 119 < args.first_frame or (args.last_frame and frame > args.last_frame):
        continue
    windows.append(dict(last_frame=frame, fps=float(fps), mean_ms=float(mean), worst_ms=float(worst), resolution=resolution))
if not windows:
    parser.error('No complete 120-frame windows in the requested interval')
metadata = args.run/'run.json'
context = json.loads(metadata.read_text()) if metadata.exists() else {}
result = dict(run=str(args.run), run_context=context, frame_windows=dict(
    count=len(windows), first_frame=windows[0]['last_frame']-119,
    last_frame=windows[-1]['last_frame'], resolutions=sorted(set(w['resolution'] for w in windows)),
    min_fps=min(w['fps'] for w in windows), max_fps=max(w['fps'] for w in windows),
    weighted_fps=1000*len(windows)/sum(w['mean_ms'] for w in windows),
    windows_below_40=sum(w['fps']<40 for w in windows),
    longest_frame_ms=max(w['worst_ms'] for w in windows)))
# Queue reports and PCM reports share the producer thread. Associate each queue
# report with the following PCM wall timestamp (normally a two-second interval).
queue = []
pending = None
for line in (args.run/'game.log').read_text(errors='replace').splitlines():
    match = re.search(r'\[XA2 QUEUE\] submissions=(\d+) empty_observations=(\d+) max_submit_gap_ms=([\d.]+)', line)
    if match:
        pending = (int(match[2]), float(match[3]))
    match = re.search(r'\[APU PCM\] wall=([\d.]+)', line)
    if match and pending:
        if float(match[1]) >= args.audio_start_wall:
            queue.append(pending)
        pending = None
result['audio_queue'] = dict(reports=len(queue), empty_observations=sum(q[0] for q in queue),
    max_submit_gap_ms=max((q[1] for q in queue),default=None), start_wall=args.audio_start_wall)
result['pcm_timing'] = None
pcm = args.run/'apu-dsp-output.csv'
if pcm.exists():
    with pcm.open() as source:
        rows = [r for r in csv.DictReader(source) if float(r['wall_seconds'])>=args.audio_start_wall]
    if len(rows)>1:
        first,last=rows[0],rows[-1]
        wall=float(last['wall_seconds'])-float(first['wall_seconds'])
        samples=int(last['sample_frames'])-int(first['sample_frames'])
        result['pcm_timing']=dict(wall_seconds=wall,sample_seconds=samples/48000,
            wall_minus_sample_seconds=wall-samples/48000,
            nonzero_samples=int(last['nonzero_samples'])-int(first['nonzero_samples']),
            full_scale_samples=int(last['clipped_samples'])-int(first['clipped_samples']))
result['limitations'] = ['FPS values summarize 120-frame windows, not individual-frame percentiles.',
    'Queue depletion and PCM timing do not establish perceptual fidelity.',
    'Loading, capture, profiling, other workloads, and non-gameplay intervals must be excluded using recorded run context.']
print(json.dumps(result, indent=2))
