"""Count owned FX groups from a completed diagnostic run.

OWNER is emitted after the adapter synchronously releases the owner's old
groups on refresh. BEGIN allocates a group; RETIRE and END release the owner.
This checks ownership counts only, not visual correctness or audio.
"""
import argparse
import json
import re
from pathlib import Path

p = argparse.ArgumentParser(description=__doc__)
p.add_argument('run', type=Path)
p.add_argument('--effect', default='char/sun/p2_power')
p.add_argument('--max-groups', type=int)
p.add_argument('--out', type=Path, required=True)
a = p.parse_args()
result = json.loads((a.run/'result.json').read_text())
assert result['userdata_unchanged'], 'Run modified userdata'
active, owners = {}, set()
peak = peak_line = begins = 0
for line_number, line in enumerate((a.run/'game.log').read_text(errors='replace').splitlines(), 1):
    event = re.search(r'\[RAVEN SPECIAL FX (OWNER|BEGIN|RETIRE|END)\] owner=([0-9A-F]+)', line)
    if not event:
        continue
    kind, owner = event.groups()
    if kind != 'BEGIN':
        active.pop(owner, None)
    else:
        group = re.search(r'effect=(\S+).* group=([0-9A-F]+)', line)
        if not group or group[1] != a.effect:
            continue
        owners.add(owner)
        begins += 1
        active.setdefault(owner, set()).add(group[2])
        count = sum(map(len, active.values()))
        if count > peak:
            peak, peak_line = count, line_number
report = dict(effect=a.effect, owners=len(owners), group_starts=begins,
              peak_simultaneous_groups=peak, peak_line=peak_line,
              remaining={k: sorted(v) for k, v in active.items()},
              exe_sha256=result['exe_sha256'], visual_validation=False)
a.out.write_text(json.dumps(report, indent=2))
print(json.dumps(report))
assert begins, 'No relevant effects exercised'
assert not active, 'Effects remained at end of diagnostic log'
if a.max_groups is not None:
    assert peak <= a.max_groups, 'Effect count exceeded limit'
