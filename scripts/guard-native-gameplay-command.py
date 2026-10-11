"""Add missing gameplay commands only after XML1 command lookup fails."""
from pathlib import Path
from recomp_source import RecompSources
root = Path(__file__).resolve().parents[1]
path = RecompSources(root/'src/recomp/gen').label_path(0x11C715)
text = path.read_text()
marker = 'loc_0011C715: ;\n'
insert = '    if (xml1_missing_gameplay_command(edi + 0x46C)) goto loc_0011C705;\n'
if text.count(marker) != 1:
    raise SystemExit('Missing native command miss boundary')
tail = text.split(marker, 1)[1]
if tail.startswith(insert):
    tail = tail[len(insert):]
else:
    text = text.replace(marker, marker + insert, 1)
if not tail.startswith('    POP32(esp, edi);\n    SET_LO8(eax, 0);'):
    raise SystemExit('Changed native command miss epilogue')
include = '#include "engine/scripting/raven_script_extensions.h"\n'
if include not in text:
    text = include + text
if path.read_text() != text:
    path.write_text(text)
print('Installed missing gameplay command dispatch')
