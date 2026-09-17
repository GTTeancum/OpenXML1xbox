"""Exercise first-run XMLB setup in disposable directories, never player data."""
import argparse, hashlib, struct, subprocess, tempfile, zipfile
from pathlib import Path
p=argparse.ArgumentParser();p.add_argument('--driver',type=Path,required=True);a=p.parse_args();driver=a.driver.resolve()
def run(root,ok=True):
 r=subprocess.run([str(driver),'--setup',str(root)],capture_output=True)
 assert (r.returncode==0)==ok,(r.returncode,r.stderr.decode(errors='replace'))
def put(root,name,data):
 p=root/name;p.parent.mkdir(parents=True,exist_ok=True);p.write_bytes(data)
def archive(root):
 put(root,'z/assetsfb.zip',b'')
 with zipfile.ZipFile(root/'z/assetsfb.zip','w') as z:
  z.writestr('data/test.eng',b'<root><n text="retail"/></root>')
  z.writestr('maps/test.nav',b'<nav cellSize="40"><c p="1 2 3"/></nav>')
with tempfile.TemporaryDirectory(prefix='xml1-xmlb-test-') as temporary:
 root=Path(temporary)/'fresh';root.mkdir();archive(root)
 overlay=b'<root><n text="overlay caf\xe9 & <"/></root>'
 put(root,'data/test.eng',overlay);put(root,'UDATA/save.dat',b'save-preserved')
 run(root)
 assert (root/'data/test.eng').read_bytes()==overlay
 assert (root/'UDATA/save.dat').read_bytes()==b'save-preserved'
 b=(root/'data/test.engb').read_bytes();assert struct.unpack_from('<2I',b)==(0x11b1,1) and b'overlay caf\xe9 & <\0' in b
 assert (root/'maps/test.navb').exists() and (root/'.xml1-xmlb-ready').exists()
 snapshot={str(f.relative_to(root)):hashlib.sha256(f.read_bytes()).hexdigest() for f in root.rglob('*') if f.is_file()}
 run(root)
 assert snapshot=={str(f.relative_to(root)):hashlib.sha256(f.read_bytes()).hexdigest() for f in root.rglob('*') if f.is_file()}
 old=Path(temporary)/'upgrade';old.mkdir();put(old,'.xml1-loose-ready',b'OpenXML1 loose assets version 1\n');put(old,'data/a.xml',b'<a/>')
 run(old);assert (old/'data/a.xmlb').exists() # no ZIP required for installed assets
 bad=Path(temporary)/'bad';bad.mkdir();archive(bad);put(bad,'data/test.eng',b'<root><unclosed>')
 run(bad,False);assert not (bad/'.xml1-xmlb-ready').exists() and not (bad/'.xml1-loose-ready').exists()
 assert not (bad/'maps/test.navb').exists() # all conversion validates before publish
 put(bad,'data/test.eng',b'<fixed/>');run(bad);assert (bad/'.xml1-xmlb-ready').exists()
 mod=Path(temporary)/'mod';mod.mkdir();archive(mod);put(mod,'data/test.engb',b);run(mod);assert (mod/'data/test.engb').read_bytes()==b
 invalid=Path(temporary)/'invalid';invalid.mkdir();archive(invalid);put(invalid,'data/test.engb',b'not binary');run(invalid,False)
 assert (invalid/'data/test.engb').read_bytes()==b'not binary' and not (invalid/'.xml1-xmlb-ready').exists()
print('PASS fresh extraction, overlay priority, localization, save preservation, repeat run, upgrade, failure/retry, binary mod preservation and corrupt binary rejection')
