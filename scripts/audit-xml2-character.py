"""Build a source-backed requirements report for an isolated XML2 character.

This is a handler-test preflight, not a converter or a compatibility verdict.
Keep every occurrence's original path, tag and attribute, including duplicate
Raven attributes. Do not replace unresolved talent values with numeric defaults.
"""
import argparse
import hashlib
import json
from pathlib import Path
import re
from runpy import run_path
import subprocess

binary_nodes = run_path(str(Path(__file__).with_name('audit-xml2-integration.py')))['binary_nodes']
REFERENCE = re.compile(r'%([A-Za-z_][A-Za-z_0-9]*)')


def analyze(documents):
    """Index validated binary nodes without assuming XML1's tiered progression.

    XML2 000D0B40 binds a leading '%' reference to a value ID. XML2
    000D1060 rejects names of 20 or more bytes. Neither rule establishes
    interpolation, rank ownership or persistence semantics; those still need
    tracing and live tests. References embedded in descriptions are indexed
    separately from the numeric fields that combat consumes.
    """
    talents, values, references, handlers, skill_requirements = [], {}, [], [], []
    powerups, affecters = [], []
    for path, nodes in documents.items():
        current_talent = None
        for ordinal, (tag, pairs) in enumerate(nodes):
            attrs = dict(pairs)
            origin = dict(path=path, node=ordinal, tag=tag)
            # A class/handler inventory alone misses XML2's nested affecters.
            # Keep their complete ordered attributes, including repeated scope
            # filters. This flat node stream cannot prove parent relationships;
            # do not infer a powerup's children from adjacency here.
            if tag.lower() == 'powerup':
                powerups.append(dict(**origin, attributes=pairs))
            elif tag.lower() == 'affecter':
                affecters.append(dict(**origin, attributes=pairs))
            if tag.lower() == 'talent':
                current_talent = dict(**origin, name=attrs.get('name'),
                                      power=attrs.get('power'), type=attrs.get('type'),
                                      hidden=attrs.get('hidden'), levels=[])
                talents.append(current_talent)
            elif tag.lower() == 'level' and current_talent is not None:
                current_talent['levels'].append(dict(**origin, attributes=pairs))
            if tag.lower() == 'talentvalue':
                name = attrs.get('name', '')
                values.setdefault(name, []).append(dict(
                    **origin, owner=current_talent['name'] if current_talent else None,
                    level=attrs.get('level'), value=attrs.get('value')))
            if tag.lower() == 'require' and (attrs.get('cat') or attrs.get('category')) == 'skill':
                skill_requirements.append(dict(**origin, item=attrs.get('item'), level=attrs.get('level')))
            for key, value in pairs:
                if key in ('handler', 'class'):
                    handlers.append(dict(**origin, attribute=key, value=value))
                for match in REFERENCE.finditer(value):
                    references.append(dict(**origin, attribute=key, text=value,
                                           symbol=match.group(1),
                                           context='display' if key in ('description', 'descname', 'descshort') else 'behavior'))
    defined_talents = {row['name'] for row in talents}
    for row in references:
        row['declared_in_fixture'] = row['symbol'] in values
        # English and unlocalized copies are alternatives. One must not hide
        # an absent declaration in the other when testing a selected language.
        variant = Path(row['path']).suffix.lower()
        row['declared_in_variant'] = any(Path(v['path']).suffix.lower() == variant
                                       for v in values.get(row['symbol'], []))
    return dict(
        talents=talents, value_definitions=values, references=references,
        handlers=handlers, powerups=powerups, affecters=affecters,
        affecter_attributes=sorted({v for row in affecters for k, v in row['attributes'] if k == 'attribute'}),
        skill_requirements=skill_requirements,
        external_skill_requirements=[r for r in skill_requirements if r['item'] not in defined_talents],
        undeclared_value_symbols=sorted({r['symbol'] for r in references if not r['declared_in_fixture']}),
        undeclared_values_by_variant={variant: sorted({r['symbol'] for r in references
                                      if Path(r['path']).suffix.lower() == variant and not r['declared_in_variant']})
                                      for variant in sorted({Path(r['path']).suffix.lower() for r in references})},
        rejected_native_value_names=sorted(name for name in values if len(name.encode('latin1')) >= 20),
        multiply_owned_values={name: rows for name, rows in values.items()
                              if len({r['owner'] for r in rows}) > 1})


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--fixture', required=True, type=Path)
    parser.add_argument('--decoder', required=True, type=Path)
    parser.add_argument('--out', required=True, type=Path)
    args = parser.parse_args()
    fixture = args.fixture.resolve()
    manifest = json.loads((fixture/'manifest.json').read_text())
    output = args.out.resolve()
    if output.exists():
        raise SystemExit('Choose a new output directory; existing reports are not overwritten')
    if output == fixture or fixture in output.parents or output in fixture.parents:
        raise SystemExit('Report must be separate from the source fixture')
    output.mkdir(parents=True)
    documents = {}
    for relative, digest in manifest['copied'].items():
        source = (fixture/'assets'/relative).resolve()
        if not source.is_relative_to(fixture/'assets'):
            raise ValueError(f'Path outside fixture: {relative}')
        data = source.read_bytes()
        if hashlib.sha256(data).hexdigest() != digest:
            raise ValueError(f'Fixture changed since staging: {relative}')
        if source.suffix.lower() in ('.xmlb', '.engb'):
            decoded = output/'decoded'/Path(relative).with_suffix('.xml')
            decoded.parent.mkdir(parents=True, exist_ok=True)
            subprocess.run([str(args.decoder.resolve()), 'decode', str(source), str(decoded)], check=True,
                           stdout=subprocess.DEVNULL)
            documents[relative] = binary_nodes(data)
    report = analyze(documents)
    report.update(fixture=str(fixture), package=manifest['package'],
                  verified_files=len(manifest['copied']),
                  unresolved_package_declarations=manifest['unresolved'],
                  limitation='Static requirements only. External skills may be shared-game definitions; '
                             'a resolved symbol does not prove evaluation, progression, UI, combat, sound or save compatibility.')
    (output/'requirements.json').write_text(json.dumps(report, indent=2)+'\n')
    print(json.dumps(dict(unique_talent_names=len({r['name'] for r in report['talents']}),
                          talent_declarations_including_language_variants=len(report['talents']),
                          value_symbols=len(report['value_definitions']),
                          reference_occurrences=len(report['references']),
                          undeclared_values=report['undeclared_value_symbols'],
                          external_skills=sorted({r['item'] for r in report['external_skill_requirements']}),
                          rejected_names=report['rejected_native_value_names']), indent=2))


if __name__ == '__main__':
    main()
