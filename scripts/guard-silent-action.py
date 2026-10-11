"""Connect only the added silent-action scope to native XML1 consumers."""
from pathlib import Path
from recomp_source import RecompSources
root = Path(__file__).resolve().parents[1]
index = RecompSources(root / 'src/recomp/gen')
path = index.label_path(0x28420)
source = path.read_text()
marker = 'loc_00028420: ;\n'
entry = '    const int _action_silent = xml1_script_take_silent(ecx);\n'
if marker + entry not in source:
    if source.count(marker) != 1:
        raise SystemExit('Action execution entry changed')
    source = source.replace(marker, marker + entry, 1)
for address in ('000285D0', '000285E7'):
    marker = f'loc_{address}: ;\n'
    old_call = '    if(xml1_script_action_silent(esi))goto loc_000285FB;\n'
    call = '    if(_action_silent)goto loc_000285FB;\n'
    source = source.replace(marker + old_call, marker + call)
    if marker + call not in source:
        if source.count(marker) != 1:
            raise SystemExit('Action sound boundary changed: ' + address)
        source = source.replace(marker, marker + call, 1)
pending = {path: source}
path = index.label_path(0x27AE0)
source = pending.get(path, path.read_text())
start = source.index('loc_00027AE0: ;\n')
end = source.index('loc_00027AF1: ;\n', start)
block = source[start:end]
old = 'PUSH32(esp, 0x44B9F8);'
new = 'PUSH32(esp, xml1_script_silent_schedule(esi, 0x44B9F8));'
if new not in block:
    if block.count(old) != 1:
        raise SystemExit('Delayed action descriptor boundary changed')
    source = source[:start] + block.replace(old, new, 1) + source[end:]
pending[path] = source
for path, source in pending.items():
    include = '#include "engine/scripting/raven_script_extensions.h"\n'
    if include not in source:
        source = include + source
    if path.read_text() != source:
        path.write_text(source)
print('Installed scoped silent-action sound and scheduler boundaries')
