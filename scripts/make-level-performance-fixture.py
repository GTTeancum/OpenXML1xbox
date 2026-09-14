"""Create isolated level-entry fixtures; never evidence of campaign progression."""
import argparse
import hashlib
import json
from pathlib import Path
import shutil
import struct
import subprocess
import zipfile

ROOT=Path(__file__).resolve().parents[1]
parser=argparse.ArgumentParser(description=__doc__)
parser.add_argument('map', help='Map path present under packages/generated/maps, without .fb')
args=parser.parse_args()
source=ROOT/'game'
archive=source/'z/assetsfb.zip'
startup_package='packages/generated/maps/nyc/alison/nyc1_1_1.fb'
startup_script='scripts/nyc/alison/nyc1_1_1.py'
with zipfile.ZipFile(archive) as z:
    if f'packages/generated/maps/{args.map}.fb' not in z.namelist():
        parser.error('Requested map package is not present in the original archive')
    original=z.read(startup_package)
label=args.map.replace('/','-')
if any(c not in 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_-' for c in label):
    parser.error('Unsupported map path')
out=ROOT/'work'/('performance-fixture-'+label)
if out.exists():
    parser.error('Fixture already exists; reuse it or choose another map')
out.mkdir()
for directory in ('media','movies','sounds'):
    subprocess.run(['powershell.exe','-NoProfile','-Command',
        f"New-Item -ItemType Junction -Path '{out/directory}' -Target '{source/directory}' | Out-Null"],check=True,
        creationflags=subprocess.CREATE_NO_WINDOW)
for p in source.iterdir():
    if p.is_file(): shutil.copy2(p,out/p.name)
for directory in ('UDATA','TDATA'):
    shutil.copytree(source/directory,out/directory)
(out/'z').mkdir()
for p in (source/'z').iterdir():
    if p.is_file(): shutil.copy2(p,out/'z'/p.name)
changed=bytearray();at=0;found=False
while at<len(original):
    if at+196>len(original): raise ValueError('Truncated FB header')
    header=original[at:at+196];size=struct.unpack_from('<I',header,192)[0]
    payload=original[at+196:at+196+size]
    if len(payload)!=size: raise ValueError('Truncated FB payload')
    name=header[:128].split(b'\0')[0].decode('ascii')
    if name==startup_script:
        payload+=f'\r\nwaittimed(25.0)\r\nloadMap("{args.map}")\r\n'.encode('ascii')
        header=header[:192]+struct.pack('<I',len(payload));found=True
    changed+=header+payload;at+=196+size
if not found: raise ValueError('Original startup script missing')
with zipfile.ZipFile(out/'z/assetsfb.zip','a',compression=zipfile.ZIP_DEFLATED) as z:
    z.filelist=[i for i in z.filelist if i.filename!=startup_package]
    z.NameToInfo.pop(startup_package)
    z.writestr(startup_package,changed)
(out/'fixture.json').write_text(json.dumps(dict(map=args.map,script=startup_script,
    original_package_sha256=hashlib.sha256(original).hexdigest(),
    fixture_package_sha256=hashlib.sha256(changed).hexdigest(),
    limitation='Appends a timed map load to the first-level startup; original destination scripts/AI are unchanged. Not normal traversal or campaign progression evidence.'),indent=2))
print(out)
