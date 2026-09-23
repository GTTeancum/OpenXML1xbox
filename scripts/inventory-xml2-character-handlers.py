"""Presence-only release inventory for unique XML2 character handlers.

Existing XML1 names are skipped without inspecting their implementations.
Registration is evidence of implementation presence, not functional acceptance.
"""
import argparse
import hashlib
import json
from pathlib import Path
import re
import sys


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--recovery', type=Path, required=True)
    parser.add_argument('--xml1-xbe', type=Path, required=True)
    parser.add_argument('--xml2-xbe', type=Path, required=True)
    parser.add_argument('--source', type=Path, default=Path(__file__).resolve().parents[1] / 'src/raven_bishop_guest.c')
    parser.add_argument('--out', type=Path, required=True)
    args = parser.parse_args()
    sys.path.insert(0, str(args.recovery.resolve()))
    from inspect_xbe import Xbe
    from recover_interfaces import types
    first, second = Xbe(args.xml1_xbe), Xbe(args.xml2_xbe)
    native = {s for s in first.strings.values() if re.fullmatch(r'ch_[a-z0-9_]+', s)}
    source = args.source.read_text()
    registered = set(re.findall(r'strcpy\([^;]*,"(ch_[a-z0-9_]+)"\);', source))
    unique = {s: a for a, s in second.strings.items()
              if re.fullmatch(r'ch_[a-z0-9_]+', s) and s not in native}
    # RTTI spelling omits separators; only resolve the absent handlers.
    classes = {re.sub('[^a-z0-9]', '', t['name'].lower().replace('.?avcch', '')): t
               for t in types(second) if t['name'].startswith('.?AVCCH')}
    rows = []
    for name, address in sorted(unique.items()):
        key = name[3:].replace('_', '')
        type_info = classes.get(key)
        rows.append(dict(name=name, registered=name in registered,
                         string_va=f'{address:08X}',
                         references=[f'{r:08X}' for r in second.refs(address)],
                         xml2_type=type_info))
    result = dict(scope='Unique XML2 character combat handlers only; presence is not acceptance',
                  xml1_sha256=hashlib.sha256(first.data).hexdigest(),
                  xml2_sha256=hashlib.sha256(second.data).hexdigest(),
                  unique_count=len(rows), registered_count=sum(r['registered'] for r in rows),
                  remaining=[r['name'] for r in rows if not r['registered']], handlers=rows)
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text(json.dumps(result, indent=2)+'\n')
    print(json.dumps({k:v for k,v in result.items() if k not in ('handlers','xml1_sha256','xml2_sha256')}, indent=2))


if __name__ == '__main__':
    main()
