import importlib.util
from pathlib import Path
import sys, tempfile, unittest, zipfile
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'scripts'))
from xml1_packages import Resource,write_pkgb
spec=importlib.util.spec_from_file_location('audit',Path(__file__).resolve().parents[1]/'scripts/audit-release-roster.py')
audit=importlib.util.module_from_spec(spec);spec.loader.exec_module(audit)

class RosterReleaseTests(unittest.TestCase):
 def test_declared_costume_and_package_dependencies_must_ship(self):
  with tempfile.TemporaryDirectory() as t:
   archive=Path(t)/'assetsfb.zip'
   with zipfile.ZipFile(archive,'w') as z:
    z.writestr('data/herostat.eng','<characters><stats name="Hero" playable="true" skin="0301" skin_aoa="07" characteranims="03_hero"/></characters>')
    for name in ('actors/0301.igb','actors/03_hero.igb'):
     z.writestr(name,b'original')
    for suffix in ('','_nc'):
     z.writestr('packages/generated/characters/hero_0301'+suffix+'.pkgb',write_pkgb([]))
   files={}
   first=audit.audit(archive,files)
   self.assertEqual(first['checked'],1)
   self.assertIn('actors/0307.igb',first['problems'][0]['missing'])
   files['actors/0307.igb']=b'authored'
   for suffix in ('','_nc'):
    files['packages/generated/characters/hero_0307'+suffix+'.pkgb']=write_pkgb([Resource('model',(('filename','hud/hud_head_0307'),))])
   self.assertEqual(audit.audit(archive,files)['problems'][0]['missing'],['hud/hud_head_0307.igb'])
   files['hud/hud_head_0307.igb']=b'portrait'
   self.assertEqual(audit.audit(archive,files)['problems'],[])

if __name__=='__main__':unittest.main()
