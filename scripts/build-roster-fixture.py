"""Create a private 35-hero/10-costume overlay from extracted retail assets.

NPCs are deliberately dummy content, not finished playable character ports.
Original files are read-only. Additional model copies use unused physical skin
IDs and matching character PKGBs; no runtime aliases or ZIP fallback are used.
"""
import argparse
import copy
import hashlib
import json
import sys
from pathlib import Path
import xml.etree.ElementTree as ET
from xml1_packages import Resource, read_pkgb, write_pkgb

NPCS = '''AvalancheAct2 BlobAct2 BrotherHoodEnergy GRSO_mp5 HAARPSoldier
HavokAct2 JuggernautFlashback MagnetoAct2 MarrowAct1 MultipleMan MystiqueAct1
ProfX PyroAct1 SabretoothAct2 Sentinel ToadAct1 grso_flamethrower
grso_powerbaton grso_laser HAARPFlamethrower HAARPSoldierMelee'''.split()
CATEGORIES = ['aoa', 'astonishing', '90s', '60s', '70s', 'weaponx',
              'future', 'winter', 'civilian', 'magmacivilian']

def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--assets', required=True, type=Path)
    p.add_argument('--output', required=True, type=Path)
    p.add_argument('--writer-root', required=True, type=Path)
    a = p.parse_args()
    source, out = a.assets.resolve(), a.output.resolve()
    sys.path.insert(0, str(a.writer_root.resolve()))
    from roster_menu_assets import menu_animations, selection_portrait
    if out.exists() or source == out:
        raise ValueError('Output must be a new private directory')
    npcs = {s.get('name'): s for s in ET.fromstring((source/'data/npcstat.eng').read_bytes())}
    heroes = ET.fromstring((source/'data/herostat.eng').read_bytes())
    playable = [s for s in heroes if s.get('playable') == 'true']
    if len(playable) != 14 or len(NPCS) != 21:
        raise ValueError('Expected retail 14-hero input and 21 dummy NPCs')
    planned, provenance, records = {}, {}, []
    animation_overrides = {}

    def publish(path, data, origin):
        if path in planned and planned[path] != data:
            raise ValueError(f'Conflicting authored file: {path}')
        planned[path], provenance[path] = data, origin

    def model_copy(origin, target):
        if (source/target).exists():
            raise ValueError(f'Refusing to replace extracted model: {target}')
        publish(target, (source/origin).read_bytes(), origin)

    def package(original_name, original_skin, new_name, new_skin, art_skin=None):
        for suffix in ('', '_nc'):
            old_path = f'packages/generated/characters/{original_name.lower()}_{original_skin}{suffix}.pkgb'
            new_path = f'packages/generated/characters/{new_name.lower()}_{new_skin}{suffix}.pkgb'
            resources = read_pkgb((source/old_path).read_bytes())
            rows = []
            for row in resources:
                attrs = []
                for key, value in row.attributes:
                    if key == 'filename' and new_skin != original_skin:
                        if row.kind == 'actorskin' and value == original_skin:
                            value = new_skin
                        elif row.kind == 'model' and value in (
                                f'hud/hud_head_{original_skin}', f'ui/hud/characters/{original_skin}'):
                            value = value.replace(original_skin, new_skin)
                    if key == 'filename' and row.kind == 'actoranimdb' and new_name in animation_overrides:
                        value = animation_overrides[new_name]
                    attrs.append((key, value))
                rows.append(Resource(row.kind, tuple(attrs)))
            data = write_pkgb(rows)
            if read_pkgb(data) != rows:
                raise ValueError(f'PKGB round trip failed: {new_path}')
            publish(new_path, data, old_path)
        if art_skin is not None:
            # Keep the package's animations, powers and dependency order. Only
            # the dummy skin and its associated portrait resources are copies.
            for old_path, new_path in (
                (f'actors/{art_skin}.igb', f'actors/{new_skin}.igb'),
                (f'hud/hud_head_{art_skin}.igb', f'hud/hud_head_{new_skin}.igb'),
                (f'ui/hud/characters/{art_skin}.igb', f'ui/hud/characters/{new_skin}.igb')):
                model_copy(old_path, new_path)

    for i, name in enumerate(NPCS, 1):
        entry = copy.deepcopy(npcs[name])
        entry.set('name', f'DummyNPC{i:02d}')
        # Dummy labels must fit the native Blackbird stat panel. Preserve
        # original NPC definitions; only the authored playable clones change.
        if name == 'BrotherHoodEnergy':
            entry.set('charactername', 'Brotherhood')
        elif name == 'HAARPFlamethrower':
            entry.set('charactername', 'HAARP Flamer')
        entry.set('playable', 'true')
        entry.set('team', 'hero')
        entry.set('level', '1')
        resource = f'dummy_npc_{i:02d}'
        original_anim = f"actors/{entry.get('characteranims')}.igb"
        style = next((t.get('name') for t in entry.findall('Talent')
                      if t.get('name','').startswith('fightstyle_')), None)
        if style is None:
            weapon = entry.get('weapon','')
            style = 'fightstyle_baton' if weapon == 'wp_baton' else 'fightstyle_gun_rifle' if weapon else 'fightstyle_hero'
        publish(f'actors/{resource}.igb', menu_animations(source/original_anim, resource,
                source/f'actors/{style}.igb'), original_anim)
        animation_overrides[entry.get('name')] = resource
        entry.set('characteranims', resource)
        for key in ('npchealthscale', 'dangerRating', 'resurrect'):
            entry.attrib.pop(key, None)
        heroes.append(entry)
        playable.append(entry)

    heads_path = 'packages/generated/maps/package/menus/characters_heads.pkgb'
    heads = read_pkgb((source/heads_path).read_bytes())
    head_names = {dict(r.attributes).get('filename') for r in heads}
    for hero in playable[14:]:
        skin = hero.get('skin')
        resource = f'ui/models/characters/{skin}'
        if resource in head_names: continue
        if (source/(resource+'.igb')).exists():
            raise ValueError(f'Unexpected undeclared portrait: {resource}')
        portrait = f'ui/hud/characters/{skin}.igb'
        # Retail 5801's HUD file contains an untextured skeletal scene, not
        # a portrait. Its conversation resource contains the soldier artwork.
        if skin == '5801': portrait = 'hud/hud_head_5801.igb'
        publish(resource+'.igb', selection_portrait(source/'ui/models/characters/0501.igb', source/portrait, skin), portrait)
        heads.append(Resource('model', (('filename', resource),)))
        head_names.add(resource)
    publish(heads_path, write_pkgb(heads), heads_path)

    for index, hero in enumerate(playable):
        name, skin = hero.get('name'), hero.get('skin')
        original_name = NPCS[index-14] if index >= 14 else name
        # Category zero remains the actual base skin, including NPC bases
        # other than 01. Preserve every existing named retail assignment.
        hero.set('skin_default', skin[-2:])
        used = {int(skin[-2:])} | {int(v) for k,v in hero.attrib.items() if k.startswith('skin_')}
        additions = []
        if index >= 14:
            package(original_name, skin, name, skin)
        for category in CATEGORIES:
            if len(used) == 10:
                break
            if f'skin_{category}' in hero.attrib:
                continue
            physical = next((n for n in range(2, 100)
                if n not in used and not (source/f'actors/{skin[:2]}{n:02d}.igb').exists()
                and f'actors/{skin[:2]}{n:02d}.igb' not in planned), None)
            if physical is None:
                raise ValueError(f'No unused two-digit skin ID for {name}')
            new_skin = skin[:2] + f'{physical:02d}'
            art_skin = npcs[NPCS[(index + len(additions)) % len(NPCS)]].get('skin')
            package(original_name, skin, name, new_skin, art_skin)
            hero.set(f'skin_{category}', f'{physical:02d}')
            used.add(physical)
            additions.append({'category': category, 'skin': new_skin, 'npc_art': art_skin})
        if len(used) != 10 or any(f'skin_{c}' not in hero.attrib for c in ('aoa','astonishing','90s')):
            raise ValueError(f'Cannot fill ten distinct skins for {name}')
        records.append({'name': name, 'source': original_name, 'physical_skins': sorted(used),
                        'added': additions, 'dummy': index >= 14})

    ET.indent(heroes)
    publish('data/herostat.eng', ET.tostring(heroes, encoding='utf-8') + b'\n', 'data/herostat.eng')
    # Validate all output before writing anything. The original hero records
    # retain their talents and original resource paths; only explicit additions
    # and NPC clones are authored here.
    out.mkdir(parents=True)
    for relative, data in planned.items():
        target = out/relative
        target.parent.mkdir(parents=True, exist_ok=True)
        target.write_bytes(data)
    report = {'playable_count': len(playable), 'level_cap': 45, 'newgame_plus': False,
        'heroes': records, 'files': {n: {'source': provenance[n],
        'sha256': hashlib.sha256(data).hexdigest()} for n,data in planned.items()}}
    (out/'fixture-manifest.json').write_text(json.dumps(report, indent=2) + '\n')
    print(f'Authored {len(playable)} playable records, 10 distinct skins each; {len(planned)} overlay files.')

if __name__ == '__main__':
    main()
