import importlib.util
from pathlib import Path
import struct
import tempfile
import unittest
import zipfile
import sys
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'scripts'))
spec=importlib.util.spec_from_file_location('converter',Path(__file__).resolve().parents[1]/'scripts/convert-loose-assets.py')
converter=importlib.util.module_from_spec(spec);spec.loader.exec_module(converter)
from xml1_packages import read_pkgb

def fb(name,kind,payload):
    return name.encode().ljust(128,b'\0')+kind.encode().ljust(64,b'\0')+struct.pack('<I',len(payload))+payload

class ConversionTests(unittest.TestCase):
    def test_motionpath_bundle_keeps_extension_in_both_extractors(self):
        import subprocess
        with tempfile.TemporaryDirectory() as temp:
            root=Path(temp);archive=root/'input.zip'
            with zipfile.ZipFile(archive,'w') as z:
                z.writestr('packages/generated/menu.fb',fb('motionpaths/menus/main_back.igb','motionpath',b'camera bundle'))
            converter.convert(archive,root/'python')
            exe=Path(__file__).resolve().parents[1]/'build/optimized/Release/loose-extract-driver.exe'
            subprocess.run([str(exe),str(archive),str(root/'native')],check=True,capture_output=True)
            for output in ('python','native'):
                nodes=read_pkgb((root/output/'packages/generated/menu.pkgb').read_bytes())
                self.assertEqual(dict(nodes[0].attributes)['filename'],'menus/main_back.igb')
                self.assertEqual((root/output/'motionpaths/menus/main_back.igb').read_bytes(),b'camera bundle')

    def test_localized_conflict_keeps_one_manifest_name(self):
        import subprocess
        with tempfile.TemporaryDirectory() as temp:
            root=Path(temp);archive=root/'input.zip'
            with zipfile.ZipFile(archive,'w') as z:
                z.writestr('data/x.eng',b'old English')
                z.writestr('data/x.fre',b'French')
                z.writestr('packages/generated/test.fb',fb('data/x.eng','xml',b'new English')+fb('data/x.fre','xml',b'French'))
                z.writestr('packages/generated/repeated.fb',fb('data/x.eng','xml',b'new English')+fb('data/x.fre','xml',b'French'))
            converter.convert(archive,root/'out')
            nodes=read_pkgb((root/'out/packages/generated/test.pkgb').read_bytes())
            self.assertEqual(len(nodes),1)
            stem=dict(nodes[0].attributes)['filename']
            self.assertEqual(stem,'data/x')
            self.assertEqual((root/'out'/(stem+'.eng')).read_bytes(),b'new English')
            self.assertEqual((root/'out'/(stem+'.fre')).read_bytes(),b'French')
            exe=Path(__file__).resolve().parents[1]/'build/optimized/Release/loose-extract-driver.exe'
            subprocess.run([str(exe),str(archive),str(root/'native')],check=True,capture_output=True)
            for p in (root/'out').rglob('*'):
                if p.is_file() and p.name!='loose-build.json':self.assertEqual(p.read_bytes(),(root/'native'/p.relative_to(root/'out')).read_bytes())
    def test_variants_languages_and_control(self):
        import subprocess
        with tempfile.TemporaryDirectory() as temp:
            root=Path(temp); archive=root/'input.zip'
            with zipfile.ZipFile(archive,'w') as z:
                z.writestr('textures/map.igb',b'base')
                z.writestr('packages/generated/test.fb',fb('textures/map.igb','texture',b'variant')+fb('data/x.eng','xml',b'English')+fb('data/x.fre','xml',b'French')+fb('off','combat_is',b''))
            report=converter.convert(archive,root/'out')
            self.assertEqual(len(report['replacements']),1)
            nodes=read_pkgb((root/'out/packages/generated/test.pkgb').read_bytes())
            self.assertEqual(len(nodes),3)
            name=dict(nodes[0].attributes)['filename']+'.igb'
            self.assertEqual((root/'out'/name).read_bytes(),b'variant')
            self.assertEqual(name,'textures/map.igb')
            self.assertEqual((root/'out/textures/map.igb').read_bytes(),b'variant')
            self.assertFalse(list((root/'out').rglob('*__*')))
            self.assertEqual(dict(nodes[1].attributes)['filename'],'data/x')
            self.assertEqual((root/'out/data/x.fre').read_bytes(),b'French')
            self.assertFalse((root/'out/off').exists())
            exe=Path(__file__).resolve().parents[1]/'build/optimized/Release/loose-extract-driver.exe'
            subprocess.run([str(exe),str(archive),str(root/'native')],check=True,capture_output=True)
            for p in (root/'out').rglob('*'):
                if p.is_file() and p.name!='loose-build.json':self.assertEqual(p.read_bytes(),(root/'native'/p.relative_to(root/'out')).read_bytes())
            with self.assertRaisesRegex(ValueError,'already exists'):converter.convert(archive,root/'out')
    def test_unsafe_paths(self):
        for path in ('../outside','/absolute','a/../b','c:/outside','a//b','a./b','data/CON.xml','a/lpt1','data/x?.xml','data/x\x01.xml'):
            with self.subTest(path=path),self.assertRaises(ValueError):converter.safe_path(path)
    def test_type_mapping(self):
        self.assertEqual(converter.logical_name('motionpaths/menus/main_back.igb','motionpath'),'menus/main_back.igb')
        self.assertEqual(converter.logical_name('actors/0301.igb','actorskin'),'0301')
        self.assertEqual(converter.logical_name('effects/a.xml','effect'),'a')
        with self.assertRaises(ValueError):converter.logical_name('other/0301.igb','actorskin')

if __name__=='__main__':unittest.main()
