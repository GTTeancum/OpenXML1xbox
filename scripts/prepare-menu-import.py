"""Copy verified XML2 menu inputs and recolor their IGBs at original paths.

Creates a new output directory only. This prepares source assets; subsequent
XML1 menu authoring is still required before staging a playable menu.
"""
import argparse
import hashlib
import json
import shutil
import subprocess
import sys
from pathlib import Path


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--reference', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    reference = args.reference.resolve(strict=True)
    output = args.output.resolve()
    if output.exists() or output.is_relative_to(reference) or reference.is_relative_to(output):
        raise ValueError('Output must be new and outside the reference tree')
    scripts = Path(__file__).resolve().parent
    manifest = json.loads((scripts / 'menu-import-sources.json').read_text())
    payload = []
    for row in manifest['files']:
        relative = Path(row['path'])
        if relative.is_absolute() or '..' in relative.parts:
            raise ValueError(f'Invalid source path: {relative}')
        source = reference / relative
        if not source.resolve().is_relative_to(reference):
            raise ValueError(f'Source escapes reference: {source}')
        data = source.read_bytes()
        if hashlib.sha256(data).hexdigest() != row['sha256']:
            raise ValueError(f'Reference differs from audited input: {relative}')
        payload.append((relative, data))
    # Validate all references before creating anything. Never overwrite inputs.
    output.mkdir(parents=True, exist_ok=False)
    for relative, data in payload:
        destination = output / 'original' / relative
        destination.parent.mkdir(parents=True, exist_ok=True)
        destination.write_bytes(data)
    subprocess.run([sys.executable, str(scripts / 'recolor-menu-igb.py'),
                    str(output / 'original'), str(output / 'xml1-blue')], check=True,
                   stdout=subprocess.DEVNULL)
    for relative, _ in payload:
        if relative.suffix.lower() != '.igb':
            destination = output / 'xml1-blue' / relative
            destination.parent.mkdir(parents=True, exist_ok=True)
            shutil.copy2(output / 'original' / relative, destination)
    (output / 'source-manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')
    print(f'Prepared {len(payload)} verified inputs at {output}; further menu authoring required')


if __name__ == '__main__':
    main()
