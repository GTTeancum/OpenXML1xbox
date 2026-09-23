"""Stage the selected Bishop/Sunfire dummy-slot roster without touching XML1.

This is a private integration input, not proof of a playable conversion.
Talent/handler adapters and shared-resource integration remain separate work.
"""
import argparse
import copy
import hashlib
import json
from pathlib import Path
import subprocess
import tempfile
import xml.etree.ElementTree as ET


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--base', type=Path, required=True)
    p.add_argument('--reference', type=Path, required=True, help='Decoded PC XML2 herostat')
    p.add_argument('--decoder', type=Path, required=True)
    p.add_argument('--out', type=Path, required=True)
    a = p.parse_args()
    base, reference, out = a.base.resolve(), a.reference.resolve(), a.out.resolve()
    if out.exists() or out.is_relative_to(base) or base.is_relative_to(out):
        raise ValueError('Use a new private output directory outside the player assets')
    # Gameplay reads the compiled roster. The editable sibling can predate an
    # installed mod (Angel, for example); using it would silently drop heroes.
    roster_source = base/'data/herostat.engb'
    with tempfile.TemporaryDirectory(prefix='xml1-roster-') as scratch:
        decoded = Path(scratch)/'herostat.eng'
        subprocess.run([str(a.decoder.resolve()), 'decode', str(roster_source),
                        str(decoded)], check=True)
        original = decoded.read_bytes()
    heroes = ET.fromstring(original)
    imported = ET.fromstring(reference.read_bytes())
    plan = [('Bishop', 'DummyNPC01', {'1801':'6001','1802':'6002','1803':'6003'}),
            ('Sunfire', 'DummyNPC02', {'1203':'6101','1202':'6102','1201':'6103'})]
    untouched = {n.get('name'): ET.tostring(n) for n in heroes}
    report = []
    for name, slot, skins in plan:
        source = [n for n in imported if n.get('name') == name]
        target = [n for n in heroes if n.get('name') == slot]
        if len(source)!=1 or len(target)!=1 or any(n.get('name')==name for n in heroes):
            raise ValueError('Ambiguous/missing source or dummy slot, or existing hero: '+name)
        entry = copy.deepcopy(source[0])
        # XML1's roster reader requires the native Talent element spelling.
        # XML2 exports lowercase talent; preserving it silently loses the
        # fighting-style grant, leaving light/heavy move lookup empty. Live
        # bishop-melee-live-v3/v4 isolates this without changing shared assets.
        normalized_talents = []
        for child in entry:
            if child.tag == 'talent':
                child.tag = 'Talent'
                normalized_talents.append(child.get('name'))
        old_skin = entry.get('skin')
        entry.set('skin', skins[old_skin])
        entry.set('skin_default', skins[old_skin][-2:])
        for key, suffix in list(source[0].attrib.items()):
            if key.startswith('skin_'):
                physical = old_skin[:-2]+suffix.zfill(2)
                if physical not in skins:
                    raise ValueError('Unstaged costume: '+physical)
                entry.set(key, skins[physical][-2:])
        index = list(heroes).index(target[0])
        heroes.remove(target[0]); heroes.insert(index, entry)
        report.append(dict(character=name, slot=slot, index=index, skins=skins,
                           original_attributes=source[0].attrib,
                           normalized_talent_elements=normalized_talents,
                           staged_attributes=entry.attrib))
    replaced = {r['slot'] for r in report}
    for n in heroes:
        name = n.get('name')
        if name in untouched and name not in replaced and ET.tostring(n)!=untouched[name]:
            raise ValueError('Existing character changed: '+name)
    if len(heroes)!=len(untouched):
        raise ValueError('Roster size changed or duplicate original names')
    data = ET.tostring(heroes, encoding='utf-8')+b'\n'
    target = out/'data/herostat.eng'
    target.parent.mkdir(parents=True)
    target.write_bytes(data)
    subprocess.run([str(a.decoder.resolve()),'compile',str(target),str(target.with_suffix('.engb'))],check=True)
    report = dict(base=str(base), reference=str(reference), replacements=report,
                  roster_source=str(roster_source),
                  source_binary_sha256=hashlib.sha256(roster_source.read_bytes()).hexdigest(),
                  untouched_character_count=len(untouched)-len(replaced),
                  original_roster_sha256=hashlib.sha256(original).hexdigest(),
                  limitation='English private roster only. Assets are in separate import fixtures; handler/UI/save behavior is not validated.')
    (out/'roster-manifest.json').write_text(json.dumps(report,indent=2)+'\n')
    print('Staged Bishop/Sunfire; preserved',report['untouched_character_count'],'existing roster entries')


if __name__=='__main__':
    main()
