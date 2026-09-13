"""Refuse generation when a requested runtime-verified entry was not detected."""
from pathlib import Path
import json
root = Path(__file__).resolve().parents[1]
seeds = json.loads((root / 'config/function-seeds.json').read_text())
functions = json.loads((root / 'analysis/disasm/functions.json').read_text())
found = {int(f['start'], 16) for f in functions}
missing = [s['start'] for s in seeds if int(s['start'], 16) not in found]
if missing:
    raise SystemExit('Missing requested function seeds; rerun -Disassemble: ' + ', '.join(missing))
print(f'Validated {len(seeds)} project function seeds')
