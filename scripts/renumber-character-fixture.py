"""Renumber one imported skin and its declared portraits in a private fixture.

This stages package resources only, not a playable roster or handler conversion.
Shared-resource collisions remain visible to audit-character-overlay.py.
"""
import argparse
import hashlib
import json
from pathlib import Path
import re
from xml1_packages import Resource, read_pkgb, write_pkgb


def sha(data):
    return hashlib.sha256(data).hexdigest()


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--base', type=Path, required=True)
    p.add_argument('--fixture', type=Path, required=True)
    p.add_argument('--skin', type=int, required=True)
    p.add_argument('--out', type=Path, required=True)
    a = p.parse_args()
    if not 1 <= a.skin // 100 <= 255 or not 1 <= a.skin % 100 <= 99:
        raise ValueError('Expected hero number 1..255 and skin suffix 01..99')
    base, fixture, out = a.base.resolve(), a.fixture.resolve(), a.out.resolve()
    if not base.is_dir() or not fixture.is_dir():
        raise ValueError('Base and fixture must exist')
    if out.exists() or any(out == q or out.is_relative_to(q) or q.is_relative_to(out)
                           for q in (base, fixture)):
        raise ValueError('Output must be a new directory separate from inputs')
    manifest = json.loads((fixture/'manifest.json').read_text())
    assets = (fixture/'assets').resolve()
    source = {}
    for relative, expected in manifest['copied'].items():
        path = (assets/relative).resolve()
        if not path.is_relative_to(assets):
            raise ValueError('Fixture path escapes asset root')
        data = path.read_bytes()
        if sha(data) != expected:
            raise ValueError('Fixture hash mismatch: '+relative)
        source[relative] = data
    package = manifest['package']
    rows = read_pkgb(source[package])
    skins = [v for r in rows if r.kind == 'actorskin' for k, v in r.attributes if k == 'filename']
    if len(skins) != 1 or not skins[0].isdigit():
        raise ValueError('Expected one numeric actorskin')
    old, new = skins[0], str(a.skin)
    resources = {('actorskin', old): new}
    path_map = {}
    # Portrait IDs need not match the source skin: Sunfire's 1203 package
    # intentionally uses hud_head_1201. Rewrite the actual declaration.
    for r in rows:
        for k, v in r.attributes:
            if k != 'filename':
                continue
            if r.kind == 'actorskin':
                path_map['actors/'+v+'.igb'] = 'actors/'+new+'.igb'
            elif r.kind == 'model' and re.fullmatch(r'(hud/hud_head_|ui/hud/characters/)\d+', v, re.I):
                replacement = re.sub(r'\d+$', new, v)
                resources[(r.kind, v)] = replacement
                path_map[(v+'.igb').lower()] = replacement+'.igb'
    new_package = re.sub(r'_'+re.escape(old)+r'(?=(?:_nc)?\.pkgb$)', '_'+new, package, flags=re.I)
    if new_package == package:
        raise ValueError('Package name does not contain the expected source skin')
    path_map[package.lower()] = new_package
    base_paths = {x.relative_to(base).as_posix().lower() for x in base.rglob('*') if x.is_file()}
    planned, mappings = {}, {}
    rewritten = [Resource(r.kind, tuple((k, resources.get((r.kind, v), v) if k == 'filename' else v)
                                       for k, v in r.attributes)) for r in rows]
    for relative, data in source.items():
        target = path_map.get(relative.lower(), relative)
        if relative.lower() in path_map:
            if target.lower() in base_paths:
                raise ValueError('Renumbering would overwrite existing resource: '+target)
            mappings[relative] = target
        if target.lower() in {x.lower() for x in planned}:
            raise ValueError('Duplicate destination: '+target)
        planned[target] = write_pkgb(rewritten) if relative == package else data
    if len(mappings) != len(path_map):
        raise ValueError('A declared skin/portrait resource is missing from the fixture')
    for relative, data in planned.items():
        dest = out/'assets'/relative
        dest.parent.mkdir(parents=True, exist_ok=True)
        dest.write_bytes(data)
    # Dependency rows describe source declarations; retain them explicitly
    # as provenance rather than mislabeling them as rewritten declarations.
    manifest['source_dependencies'] = manifest.pop('dependencies', [])
    manifest.update(package=new_package, copied={r: sha(d) for r, d in planned.items()},
                    renumbering=dict(source_fixture=str(fixture), source_skin=old,
                                     target_skin=new, paths=mappings),
                    limitation='Private resource fixture only; roster, indirect references, shared conflicts and gameplay remain unvalidated.')
    (out/'manifest.json').write_text(json.dumps(manifest, indent=2)+'\n')
    print(json.dumps(manifest['renumbering'], indent=2))


if __name__ == '__main__':
    main()
