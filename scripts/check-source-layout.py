"""Check the explicit source move manifest and stale active-tooling paths."""
from pathlib import Path
import json
import re

ROOT = Path(__file__).resolve().parents[1]


def main():
    moves = json.loads((ROOT / 'config/source-layout.json').read_text())['moves']
    errors = []
    headers = {Path(old).name for old in moves if old.startswith('src/') and
               Path(old).suffix in ('.h', '.inc')}
    stale_include = re.compile(r'#include\s+"(' + '|'.join(map(re.escape, sorted(headers))) + r')"')
    for old, new in moves.items():
        if (ROOT / old).exists():
            errors.append(f'Old path still exists: {old}')
        if not (ROOT / new).is_file():
            errors.append(f'Missing moved file: {new}')
    files = [ROOT / 'CMakeLists.txt']
    for base in ('scripts', 'cmake', 'src', 'tests', 'renderer', 'tools'):
        files.extend(p for p in (ROOT / base).rglob('*') if p.is_file() and
                     p.suffix in ('.c', '.cpp', '.h', '.inc', '.py', '.ps1', '.cmake', '.txt'))
    for path in files:
        try:
            text = path.read_text(encoding='utf-8')
        except UnicodeDecodeError:
            continue
        for match in stale_include.finditer(text):
            errors.append(f'{path.relative_to(ROOT)} has unqualified moved include {match[1]}')
        for header in headers:
            if '/FI' + header in text:
                errors.append(f'{path.relative_to(ROOT)} has stale forced include {header}')
        if 'recomp/gen' in path.as_posix():
            continue
        for old in moves:
            if old in text:
                errors.append(f'{path.relative_to(ROOT)} still references {old}')
    if errors:
        raise SystemExit('\n'.join(errors))
    print(f'PASS: {len(moves)} moved paths exist; active source/build/tooling paths updated')


if __name__ == '__main__':
    main()
