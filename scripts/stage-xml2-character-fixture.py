"""Copy a PC character's declared assets to an isolated handler-test overlay.

This is dependency staging, not the general XML2-to-XML1 character converter.
PKGB bytes and relative asset paths are preserved. Unresolved declarations are
reported, never replaced or silently omitted from the dependency report.
"""
import argparse
import hashlib
import json
from pathlib import Path
import shutil
import subprocess
from runpy import run_path

binary_nodes = run_path(str(Path(__file__).with_name('audit-xml2-integration.py')))['binary_nodes']


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--assets', type=Path, required=True)
    parser.add_argument('--package', required=True, help='PKGB path relative to PC asset root')
    parser.add_argument('--decoder', type=Path, required=True)
    parser.add_argument('--out', type=Path, required=True, help='New isolated fixture directory')
    parser.add_argument('--support-file', action='append', default=[],
                        help='Explicit additional relative path, e.g. Data/shared_talents.engb; not a PKGB declaration')
    args = parser.parse_args()
    source = args.assets.resolve()
    output = args.out.resolve()
    if output.exists():
        raise SystemExit('Choose a new fixture directory; existing fixtures are never overwritten')
    if source == output or source in output.parents or output in source.parents:
        raise SystemExit('Fixture and source must be separate directories')
    package = (source / args.package).resolve()
    if not package.is_relative_to(source) or not package.is_file():
        raise SystemExit('Package must be an existing file inside the PC asset root')
    files = {str(p.relative_to(source)).replace('\\', '/').lower(): p
             for p in source.rglob('*') if p.is_file()}
    output.mkdir(parents=True)
    subprocess.run([str(args.decoder.resolve()), 'decode', str(package), str(output/'package.xml')], check=True)
    copied = {}
    def copy(path):
        relative = path.relative_to(source)
        destination = output / 'assets' / relative
        destination.parent.mkdir(parents=True, exist_ok=True)
        shutil.copyfile(path, destination)
        digest = hashlib.sha256(path.read_bytes()).hexdigest()
        if hashlib.sha256(destination.read_bytes()).hexdigest() != digest:
            raise RuntimeError(f'Copy verification failed: {path}')
        copied[relative.as_posix()] = digest
    copy(package)
    support_files = []
    for relative in args.support_file:
        path = (source / relative).resolve()
        if not path.is_relative_to(source) or not path.is_file():
            raise ValueError(f'Support file must exist inside the source root: {relative}')
        copy(path)
        support_files.append(path.relative_to(source).as_posix())
    dependencies = []
    mapping = {
        'actorskin': ('actors/', ('.igb',)),
        'actoranimdb': ('actors/', ('.igb',)),
        'model': ('', ('.igb',)),
        'texture': ('', ('.igb',)),
        'effect': ('effects/', ('.xmlb', '.engb')),
        'xml': ('', ('.xmlb', '.engb')),
        'xml_talents': ('', ('.xmlb', '.engb')),
        'fightstyle': ('', ('.xmlb', '.engb')),
    }
    for kind, attributes in binary_nodes(package.read_bytes()):
        if kind == 'packagedef':
            continue
        attrs = dict(attributes)
        name = attrs.get('filename', '')
        matches = []
        if kind in mapping:
            prefix, extensions = mapping[kind]
            for extension in extensions:
                key = (prefix + name + extension).replace('\\', '/').lower()
                if key in files:
                    matches.append(files[key])
        for path in matches:
            copy(path)
        dependencies.append(dict(kind=kind, filename=name,
                                 files=[p.relative_to(source).as_posix() for p in matches],
                                 status='copied' if matches else 'unresolved'))
    unresolved = [r for r in dependencies if r['status']=='unresolved']
    report = dict(source=str(source), package=package.relative_to(source).as_posix(),
                  copied=copied, dependencies=dependencies, support_files=support_files,
                  unresolved=unresolved,
                  limitation='Direct PKGB dependencies only; indirect references, sound-bank events, handler/UI compatibility and gameplay are not validated.')
    (output/'manifest.json').write_text(json.dumps(report, indent=2)+'\n')
    print(f'Copied and hash-verified {len(copied)} files; {len(unresolved)} unresolved declarations')
    for row in unresolved:
        print(row['kind'], row['filename'])
    return 1 if unresolved else 0


if __name__ == '__main__':
    raise SystemExit(main())
