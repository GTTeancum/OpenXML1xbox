"""Prepare or explicitly publish canonical guest source after regeneration.

Normal builds never run this. The naming emitter verifies every guest entry and
body against raw guarded input. Review the reported diff before using --apply;
publication preserves the previous source tree under work for recovery.
"""
import argparse
import importlib.util
import json
from pathlib import Path
import uuid
from recomp_source import RecompSources

ROOT = Path(__file__).resolve().parents[1]
spec = importlib.util.spec_from_file_location('naming', ROOT / 'scripts/name-recomp-functions.py')
naming = importlib.util.module_from_spec(spec)
spec.loader.exec_module(naming)


def differences(current, candidate):
    old = {p.relative_to(current): p for p in current.rglob('*') if p.is_file()}
    new = {p.relative_to(candidate): p for p in candidate.rglob('*') if p.is_file()}
    return dict(added=sorted(str(p) for p in new.keys() - old.keys()),
                removed=sorted(str(p) for p in old.keys() - new.keys()),
                changed=sorted(str(p) for p in old.keys() & new.keys()
                               if old[p].read_bytes() != new[p].read_bytes()))


def publish(candidate, destination, backup):
    if backup.exists():
        raise ValueError('Backup must not exist')
    if destination.exists():
        destination.rename(backup)
    try:
        candidate.rename(destination)
    except BaseException:
        if backup.exists() and not destination.exists():
            backup.rename(destination)
        raise


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--source', type=Path, default=ROOT / 'src/recomp/gen')
    parser.add_argument('--apply', action='store_true')
    args = parser.parse_args()
    output = ROOT / 'work/generated-publication' / uuid.uuid4().hex
    candidate, backup = output / 'candidate', output / 'previous'
    destination = ROOT / 'src/recomp/game'
    # All directory moves are fixed destinations contained within this repo.
    for path in (candidate, backup, destination):
        if not path.resolve().is_relative_to(ROOT.resolve()):
            raise ValueError('Publication path escaped repository')
    output.mkdir(parents=True)
    registry = json.loads((ROOT / 'config/symbols/xml1.json').read_text())
    report = naming.emit(args.source, candidate, registry)
    if destination.exists():
        lost = set(RecompSources(destination).functions) - set(RecompSources(candidate).functions)
        if lost:
            raise ValueError(f'Candidate loses {len(lost)} existing guest entries; not publishing')
    report.update(differences(destination, candidate))
    report.update(candidate=str(candidate), backup=str(backup), applied=args.apply)
    if args.apply:
        publish(candidate, destination, backup)
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps(report, indent=2))


if __name__ == '__main__':
    main()
