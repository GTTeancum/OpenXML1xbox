"""Inspect captured GP writes and EP reads for mixed ring-buffer generations.

Addresses must be established from the title's observed DMA transfers. This is
an offline diagnostic, not a replacement for physical scatter/gather mapping.
"""
import argparse
from collections import Counter
import json
from pathlib import Path
import struct

p = argparse.ArgumentParser(description=__doc__)
p.add_argument('capture', type=Path)
p.add_argument('--gp-base', type=lambda s: int(s, 0), required=True)
p.add_argument('--ep-base', type=lambda s: int(s, 0), required=True)
p.add_argument('--ring-bytes', type=int, default=2048)
p.add_argument('--write-bytes', type=int, default=128)
p.add_argument('--read-bytes', type=int, default=1024)
p.add_argument('--output', type=Path)
a = p.parse_args()
if min(a.ring_bytes, a.write_bytes, a.read_bytes) <= 0 or a.ring_bytes % a.read_bytes or a.read_bytes % a.write_bytes:
    p.error('Ring/read/write sizes must be positive exact multiples')
image = bytearray(a.ring_bytes)
stamps = {}
sequence = reads = identical = mixed = incomplete = 0
patterns = Counter()
with a.capture.open('rb') as f:
    while header := f.read(12):
        if len(header) != 12:
            raise ValueError('Truncated header')
        kind, address, size = struct.unpack('<III', header)
        if kind > 3 or size > 64 * 1024 * 1024:
            raise ValueError('Invalid record')
        payload = f.read(size)
        if len(payload) != size:
            raise ValueError('Truncated payload')
        offset = address - a.gp_base
        if kind == 2 and size == a.write_bytes and 0 <= offset <= a.ring_bytes - size:
            if offset % a.write_bytes:
                raise ValueError('Unaligned GP write')
            sequence += 1
            stamps[offset] = sequence
            image[offset:offset + size] = payload
        offset = address - a.ep_base
        if kind == 3 and size == a.read_bytes and 0 <= offset <= a.ring_bytes - size:
            reads += 1
            identical += image[offset:offset + size] == payload
            slots = range(offset, offset + size, a.write_bytes)
            if any(i not in stamps for i in slots):
                incomplete += 1
                continue
            ages = tuple(sequence - stamps[i] for i in slots)
            patterns[ages] += 1
            mixed += any(ages[i] != ages[i + 1] + 1 for i in range(len(ages) - 1))
report = dict(gp_writes=sequence, ep_reads=reads, identical_to_latest_gp=identical,
              incomplete_reads=incomplete, mixed_generation_reads=mixed,
              age_patterns=[dict(ages=k, count=v) for k, v in patterns.most_common()])
encoded = json.dumps(report, indent=2)
print(encoded)
if a.output:
    a.output.write_text(encoded, encoding='utf-8')
