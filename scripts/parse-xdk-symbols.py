"""Convert the pinned XbSymbolDatabase CLI's symbol report into local metadata."""
from pathlib import Path
import json
import re
root = Path(__file__).resolve().parents[1]
symbols = []
for line in (root / 'analysis/xdk-symbols.log').read_text(encoding='utf-8-sig').splitlines():
    match = re.match(r'(\w+)__FUN__(.*?) = (0x[0-9a-fA-F]+)$', line)
    if match:
        symbols.append({'start': match[3], 'name': match[2], 'library': match[1]})
if not symbols:
    raise SystemExit('No function symbols were recovered')
(root / 'analysis/xdk-functions.json').write_text(json.dumps(symbols, indent=2), encoding='utf-8')
print(f'Recovered {len(symbols)} named XDK function records')
