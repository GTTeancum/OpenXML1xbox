import sys,struct,tempfile,subprocess,unittest
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'scripts'))
from xml1_packages import Resource,write_pkgb
EXE=Path(__file__).resolve().parents[1]/'build/optimized/Release/pkgb-decode-driver.exe'
class DecodeTests(unittest.TestCase):
    def test_rejects_corruption(self):
        valid=write_pkgb([Resource('texture',(('filename','textures/example'),))])
        cases=[b'',valid[:20],valid[:-1]]
        for offset,value in ((0,0),(4,2),(16,0xfffffff0),(28,24),(36,0xffffffff),(40,len(valid)+10)):
            b=bytearray(valid);struct.pack_into('<I',b,offset,value);cases.append(b)
        with tempfile.TemporaryDirectory() as t:
            root=Path(t)
            for i,b in enumerate(cases):
                p=root/f'{i}.pkgb';p.write_bytes(b)
                r=subprocess.run([str(EXE),str(p),str(root/f'{i}.xml')],capture_output=True)
                self.assertEqual(r.returncode,1,r.stderr)
    def test_attributes_are_escaped(self):
        import xml.etree.ElementTree as ET
        value='a&b"c<d>e'
        with tempfile.TemporaryDirectory() as t:
            root=Path(t);p=root/'input.pkgb';out=root/'out.xml'
            p.write_bytes(write_pkgb([Resource('script',(('filename',value),))]))
            subprocess.run([str(EXE),str(p),str(out)],check=True,capture_output=True)
            self.assertEqual(ET.parse(out).getroot()[0].attrib['filename'],value)
if __name__=='__main__':unittest.main()
