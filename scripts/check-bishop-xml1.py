"""Check an authored Bishop overlay against its original assets, not engine code."""
import argparse
import re
import subprocess
import tempfile
from pathlib import Path
import xml.etree.ElementTree as ET


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--assets', type=Path, required=True)
    parser.add_argument('--candidate', type=Path, required=True)
    parser.add_argument('--driver', type=Path, required=True)
    args = parser.parse_args()
    with tempfile.TemporaryDirectory(prefix='bishop-assets-') as temp:
        def read(path):
            output = Path(temp) / 'decoded.xml'
            subprocess.run([str(args.driver), 'decode', str(path), str(output)], check=True)
            return ET.fromstring(output.read_bytes().decode('cp1252'))

        def tree(node):
            return node.tag, sorted(node.attrib.items()), (node.text or '').strip(), tuple(map(tree, node))

        talents = read(args.candidate / 'data/talents/bishop.engb')
        by_name = {t.get('name'): t for t in talents}
        active = {'bishop_pulse': 'power3', 'bishop_double': 'power6',
                  'bishop_shield': 'power2', 'bishop_xtreme': 'power9'}
        passive = {'bishop_combat', 'bishop_gun', 'bishop_particle'}
        assert set(by_name) == set(active) | passive | {'bishop_resist'}
        for name, talent in by_name.items():
            levels = talent.findall('level')
            expected = 11 if name in active and name != 'bishop_xtreme' else 5 if name in passive else 1
            assert len(levels) == expected, name
            if name != 'bishop_resist':
                assert all('count' not in level.attrib for level in levels), name
            if expected == 11:
                tiers = [(i, level.get('descname')) for i, level in enumerate(levels, 1) if level.get('descname')]
                assert [i for i, _ in tiers] == [6, 11], tiers
                assert tiers[-1][1].startswith('Legendary '), tiers
            if name in active:
                assert talent.get('power') == active[name]
            if name != 'bishop_resist':
                for level in levels:
                    assert len(level.findall('require')) == 1
                    assert level.find('require').get('cat') == 'level'
                    assert 1 <= int(level.find('require').get('level')) <= 45
        assert by_name['bishop_xtreme'].get('type') == 'xtreme'
        style = read(args.candidate / 'data/powerstyles/ps_bishop.engb')
        moves = {m.get('name') for m in style.findall('FightMove')}
        assert {m for m in moves if re.fullmatch(r'power\d+', m)} == set(active.values())
        assert {'power6_loop', 'power6_end'} <= moves
        for req in style.iter('require'):
            if req.get('cat') == 'skill':
                assert req.get('item') in by_name, req.attrib
        symbols = {v.get('name') for v in talents.iter('talentvalue')}
        used = set(re.findall(r'%(bish_\w+)', ET.tostring(style, encoding='unicode') + ET.tostring(talents, encoding='unicode')))
        assert used <= symbols, used - symbols
        original = read(args.assets / 'data/herostat.engb')
        revised = read(args.candidate / 'data/herostat.engb')
        assert original.attrib == revised.attrib and len(original) == len(revised)
        for before, after in zip(original, revised):
            assert before.get('name') == after.get('name')
            if before.get('name', '').lower() != 'bishop':
                assert tree(before) == tree(after), before.get('name')
            else:
                assert [after.get(f'power{i}') for i in range(1, 5)] == ['power3', 'power6', 'power2', 'power9']
                allowed = {f'power{i}' for i in range(1, 5)}
                assert {k:v for k,v in before.attrib.items() if k not in allowed} == {k:v for k,v in after.attrib.items() if k not in allowed}
        for suffix in ('freb', 'gerb', 'xmlb'):
            assert tree(read(args.candidate / f'data/talents/bishop.{suffix}')) == tree(talents)
    print('PASS: native tier shape, four moves, passive ranks, prerequisites, symbols, compiled mirrors and untouched stock heroes')


if __name__ == '__main__':
    main()
