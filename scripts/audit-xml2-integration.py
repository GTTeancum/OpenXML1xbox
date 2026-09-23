"""Inventory real XML2 PC powerstyle requirements against the current XML1 XBE.

Uses the recovered Xbox interface reader supplied with the local handoff. This
is static dependency evidence, never proof that a named handler works. Game data
and recovered proprietary code remain in the ignored local work directory.
"""
import argparse
import hashlib
import json
import re
from pathlib import Path
import subprocess
import struct
import sys
from raven_command_index import commands, correct_archived_rows


def binary_nodes(data):
    """Read attributes without discarding Raven's legal duplicate keys.

    The production decoder validates the input first; this reader only indexes
    its original binary attributes so standard XML parser rules cannot alter it.
    """
    def string(offset):
        return data[offset:data.index(0, offset)].decode('latin1')
    visited = set()
    def walk(offset):
        while offset != 0xffffffff:
            if offset in visited:
                raise ValueError('Cyclic/shared XMLB node')
            visited.add(offset)
            name, sibling, child, count = struct.unpack_from('<4I', data, offset)
            attributes = [tuple(string(v) for v in struct.unpack_from('<2I', data, offset + 16 + i * 8)) for i in range(count)]
            yield string(name), attributes
            yield from walk(child)
            offset = sibling
    return list(walk(8)) if len(data) > 8 else []


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--recovery', type=Path, required=True)
    parser.add_argument('--xml1-xbe', type=Path, required=True)
    parser.add_argument('--xml2-xbe', type=Path, help='Prefer original image over incomplete archived descriptors')
    parser.add_argument('--pc-assets', type=Path, required=True)
    parser.add_argument('--decoder', type=Path, required=True)
    parser.add_argument('--out', type=Path, required=True)
    parser.add_argument('--script-extensions', type=Path, default=Path(__file__).resolve().parents[1] / 'src/raven_script_extensions.c',
                        help='Current registered command table; already-added commands are excluded from pending work')
    args = parser.parse_args()
    args.out.mkdir(parents=True, exist_ok=True)
    sys.path.insert(0, str(args.recovery.resolve()))
    from inspect_xbe import Xbe
    from recover_interfaces import types

    current = Xbe(args.xml1_xbe)
    current_commands = commands(current)
    current_types = types(current)
    interfaces = args.recovery / 'analysis/interfaces'
    if args.xml2_xbe:
        xml2 = Xbe(args.xml2_xbe)
        recovered_commands = commands(xml2)
        xml2_sha256 = hashlib.sha256(xml2.data).hexdigest()
        # Original images supersede the archived name/RTTI inventory. Keep all
        # types available for review: a prefix filter is a triage convenience,
        # not the acceptance boundary for executable behavior.
        recovered_all_types = types(xml2)
        recovered_types = [r for r in recovered_all_types
            if any(k in r['name'] for k in ('Handler','Character','Powerup','Combat','Hero'))
            or re.match(r'\.\?AVC(?:PU|Actor|Monster|Player|Stats|CE|CH)',r['name'])]
    else:
        recovered_commands = correct_archived_rows(json.loads((interfaces / 'xml2-commands.json').read_text()))
        xml2_sha256 = None
        recovered_types = json.loads((interfaces / 'character-handlers.json').read_text())
        recovered_all_types = None
    names = {row['name'] for row in current_commands}
    extension_source = args.script_extensions.read_text()
    extension_table = extension_source.split('extensions[]={', 1)[1].split('};', 1)[0]
    extension_names = set(re.findall(r'\{\s*"([^"]+)"\s*,', extension_table))
    if not extension_names:
        raise ValueError('No registered script extensions found; refusing to report an inaccurate pending list')
    type_names = {row['name'] for row in current_types}
    literals = set(current.strings.values())
    powers = []
    for source in sorted((args.pc_assets / 'Data/powerstyles').glob('*')):
        if source.suffix.lower() != '.xmlb':
            continue
        decoded = args.out / 'decoded' / (source.stem + '.xml')
        subprocess.run([str(args.decoder.resolve()), 'decode', str(source), str(decoded)], check=True)
        nodes = binary_nodes(source.read_bytes())
        requirements = {}
        for field in ('handler', 'class', 'type', 'attribute', 'affect_type', 'action', 'damagetype'):
            values = sorted({value for _, attrs in nodes for key, value in attrs if key == field})
            requirements[field] = [dict(name=value, literal_in_xml1=value in literals) for value in values]
        powers.append(dict(path=str(source.relative_to(args.pc_assets)),
                           sha256=hashlib.sha256(source.read_bytes()).hexdigest(),
                           requirements=requirements,
                           damage_modifiers=sorted({value for tag, attrs in nodes if tag.lower() == 'damagemod' for key, value in attrs if key == 'name'}),
                           trigger_names=sorted({value for tag, attrs in nodes if tag == 'trigger' for key, value in attrs if key == 'name'})))
    result = dict(xml1_sha256=hashlib.sha256(current.data).hexdigest(),
                  xml2_sha256=xml2_sha256,
                  xml1_commands=current_commands,
                  xml2_commands=recovered_commands,
                  added_commands=[r for r in recovered_commands if r['name'] not in names],
                  implemented_extension_names=sorted(extension_names),
                  pending_commands=[r for r in recovered_commands if r['name'] not in names | extension_names],
                  added_candidate_types=[r for r in recovered_types if r['name'] not in type_names],
                  all_added_types=([r for r in recovered_all_types if r['name'] not in type_names]
                                   if recovered_all_types is not None else None),
                  powerstyles=powers,
                  limitation='Presence inventory only. Skip existing XML1 functionality without semantic/signature comparison. Validate only added functionality programmatically.')
    (args.out / 'inventory.json').write_text(json.dumps(result, indent=2) + '\n')
    print(f'{len(current_commands)} current XML1 commands; {len(result["added_commands"])} XML2 additions; {len(powers)} PC powerstyles')
    for row in powers:
        if any(c in row['path'].lower() for c in ('scarletwitch', 'sunfire', 'juggernaut')):
            print(row['path'], json.dumps(row['requirements']))


if __name__ == '__main__':
    main()
