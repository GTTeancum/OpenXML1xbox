"""Author Bishop's release power tree at its existing resource paths.

Explicit character design, not a general XML2 conversion tool. Input is the
installed XML2 Bishop; output is a new overlay. Never edits player saves.
"""
import argparse
import copy
import subprocess
import re
import xml.etree.ElementTree as ET
from pathlib import Path

ACTIVE = ('bishop_pulse', 'bishop_double', 'bishop_shield', 'bishop_xtreme')
PASSIVE = ('bishop_combat', 'bishop_gun', 'bishop_particle')
NAMES = {
    'bishop_pulse': ('Bio Blast', 'Bio Burst', 'Legendary Burst'),
    'bishop_double': ('Full Auto', 'Heavy Fire', 'Legendary Fire'),
    'bishop_shield': ('Absorption', 'Energy Sink', 'Legendary Absorption'),
}
# Each entry is an actual purchased rank, not a rescaled XML2 character level.
CURVES = {
 'bishop_pulse': {
  'bish_pulse_dmg': ['20 24','26 32','34 42','44 54','56 68','70 84','82 98','94 112','108 128','122 144','140 165'],
  'bish_pulse_chance': [.05,.06,.07,.08,.09,.10,.11,.12,.13,.14,.15],
  'bish_pulse_rng': [120,120,120,120,120,132,132,132,132,132,144],
  'bish_pulse_pwr': [10,12,15,18,22,28,32,36,40,45,55]},
 'bishop_double': {
  'bish_double_radmg': ['10 14','14 18','18 24','24 30','30 38','38 46','46 54','54 64','64 74','74 86','86 100'],
  'bish_double_life': [1]*11,
  'bish_double_pwr': [6,7,8,10,12,15,18,21,24,28,32]},
 'bishop_shield': {
  'bish_shield_life': [12,14,16,18,20,24,27,30,33,36,40],
  'bish_shield_pct': [.20,.22,.24,.26,.28,.32,.35,.38,.41,.45,.50],
  'bish_shield_dr': [1.10,1.13,1.16,1.19,1.22,1.30,1.35,1.40,1.45,1.50,1.60],
  'bish_shield_dam': [.05,.06,.07,.08,.09,.11,.13,.15,.17,.19,.20],
  'bish_shield_pwr': [20,23,26,29,32,40,46,52,58,65,75]},
 'bishop_xtreme': {'bish_xtreme_dmg':['250 300'],'bish_xtreme_life':[6]},
 'bishop_combat': {'bish_combat_dmg':[.10,.20,.30,.40,.50]},
 'bishop_gun': {'bish_gun_dmg':[1.10,1.20,1.30,1.40,1.50], 'bish_gun_crit':[.02,.04,.06,.08,.10]},
 'bishop_particle': {'bish_particle_dr':[1.05,1.10,1.15,1.20,1.25],
                    'bish_particle_move':[1.03,1.06,1.09,1.12,1.15],
                    'bish_particle_er':[.05,.10,.15,.20,.25]},
}
REQUIREMENTS = {
 'bishop_pulse': [1,3,5,7,9,15,17,19,21,23,30],
 'bishop_double': [5,7,9,11,13,20,22,24,26,28,35],
 'bishop_shield': [5,7,9,11,13,18,20,22,24,26,30],
 'bishop_xtreme': [15],
 **{n:[3,8,13,18,23] for n in PASSIVE},
}

def write(root, path):
    path.parent.mkdir(parents=True, exist_ok=True)
    ET.indent(root)
    path.write_bytes(ET.tostring(root, encoding='cp1252', xml_declaration=False))

def author(talents):
    source={t.get('name'):t for t in talents}
    result=ET.Element('talents')
    result.append(copy.deepcopy(source['bishop_resist']))
    for name in (*ACTIVE,*PASSIVE):
        talent=copy.deepcopy(source[name]);template=copy.deepcopy(talent.find('level'))
        for child in list(talent):talent.remove(child)
        values=ET.SubElement(talent,'talentvalues')
        for symbol,curve in CURVES[name].items():
            assert len(curve)==len(REQUIREMENTS[name])
            for rank,value in enumerate(curve,1):
                ET.SubElement(values,'talentvalue',name=symbol,level=str(rank),value=str(value))
        if name=='bishop_particle':
            template.set('description','%bish_particle_dr:s $DR\\n%bish_particle_move:s movement speed\\n%bish_particle_er:p $RES_ENERGY')
        for rank,level in enumerate(REQUIREMENTS[name],1):
            row=copy.deepcopy(template);row.attrib.pop('count',None)
            # Dependencies on discarded XML2 powers must not strand a rank.
            for req in list(row.findall('require')):row.remove(req)
            ET.SubElement(row,'require',cat='level',level=str(level))
            if name in NAMES and rank in (6,11):row.set('descname',NAMES[name][1 if rank==6 else 2])
            row.set('cost','2' if name in ACTIVE and (rank in (6,11) or (rank==1 and name!='bishop_pulse')) else '1')
            talent.append(row)
        result.append(talent)
    return result

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--assets',type=Path,required=True)
    p.add_argument('--output',type=Path,required=True)
    p.add_argument('--driver',type=Path,required=True)
    a=p.parse_args()
    if a.output.exists():raise ValueError('Choose a new overlay directory')
    scratch=a.output/'authoring';scratch.mkdir(parents=True)
    def decode(rel):
        target=scratch/Path(rel).name
        subprocess.run([str(a.driver),'decode',str(a.assets/rel),str(target)],check=True)
        return ET.fromstring(target.read_bytes().decode('cp1252'))
    def compile(root,rel):
        text=a.output/rel;write(root,text)
        subprocess.run([str(a.driver),'compile',str(text),str(text)+'b'],check=True)
    talents=author(decode('data/talents/bishop.engb'))
    style=decode('data/powerstyles/ps_bishop.engb')
    for move in list(style):
        match=re.fullmatch(r'power(\d+)(?:_.*)?',move.get('name',''))
        if move.tag=='FightMove' and match and int(match[1]) not in (2,3,6,9):
            style.remove(move)
        elif move.tag=='event' and move.get('name')=='bullet_impact':
            style.remove(move)  # Bombardment-only event; its talent is omitted.
    # No character-specific runtime changes: named levels use the existing
    # native tier rows, and all combat operands use the shared talent resolver.
    for lang in ('eng','fre','ger'):
        compile(talents,f'data/talents/bishop.{lang}')
        roster=decode(f'data/herostat.{lang}b')
        bishop=next((c for c in roster if c.get('name','').lower()=='bishop'),None)
        if bishop is None:continue  # Do not insert heroes into another language's roster.
        for i,move in enumerate(('power3','power6','power2','power9'),1):bishop.set(f'power{i}',move)
        for t in list(bishop):
            if t.tag.lower()=='talent':bishop.remove(t)
        for name,rank in [('bishop_pulse',1),('fightstyle_hero',1),('bishop_resist',1)]:
            ET.SubElement(bishop,'Talent',name=name,level=str(rank))
        compile(roster,f'data/herostat.{lang}')
        compile(style,f'data/powerstyles/ps_bishop.{lang}')
    compile(talents,'data/talents/bishop.xml')
    compile(style,'data/powerstyles/ps_bishop.xml')
    print('Authored three 5+5+1 lines, BIG BANG, and three five-rank passives')

if __name__=='__main__':main()
