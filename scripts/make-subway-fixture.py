"""Create a separate local transition fixture from the user's original assets.

Run from repository root. Supply ordinary game files/directories in the output
data root before launching with XML1_TEST_GAME_DIR and process-local test mode.
Original archives are read only. This bypasses the approach/combat and must
never be used as evidence that ordinary level traversal succeeds.
"""
from pathlib import Path
import shutil,struct,zipfile,json,hashlib,sys
camera_check='--camera-check' in sys.argv
quiet_check='--quiet-check' in sys.argv
if quiet_check and not camera_check:
    raise ValueError('--quiet-check requires --camera-check')
root=Path('work/subway-camera-quiet-fixture' if quiet_check else 'work/subway-camera-fixture' if camera_check else 'work/subway-fixture')
root.mkdir(exist_ok=True)
(root/'z').mkdir(exist_ok=True)
source=Path('game/z/assetsfb.zip')
package='packages/generated/maps/nyc/alison/nyc1_1_1.fb'
with zipfile.ZipFile(source) as z: original=z.read(package)
entries=[]; at=0
while at<len(original):
    if at+196>len(original): raise ValueError('Truncated FB header')
    header=original[at:at+196]
    name=header[:128].split(b'\0')[0].decode('ascii')
    length=struct.unpack_from('<I',header,192)[0]
    end=at+196+length
    if end>len(original): raise ValueError('Truncated FB payload')
    entries.append((name,header,original[at+196:end])); at=end
scripts={n:b for n,h,b in entries if n.endswith('.py')}
startup='scripts/nyc/alison/nyc1_1_1.py'
down='scripts/nyc/alison/subwaydowna.py'
up='scripts/nyc/alison/subwayupa.py'
replacement=scripts[startup]+b'\r\nwaittimed(10.0)\r\n'+scripts[down]+b'\r\nwaittimed(8.0)\r\n'+scripts[up]
if camera_check:
    if quiet_check:
        replacement += b'\r\nsetallaiactive("FALSE")\r\n'
    replacement += b'\r\nwaittimed(8.0)\r\ncameraToLocationAngles(" 2280.000 2440.655 279.896 ", " 2280.000 2544.443 0.000 ", 0.000)\r\nwaittimed(8.0)\r\ncameraResetOldSchool()\r\n'
rebuilt=bytearray()
for name,header,payload in entries:
    if name==startup:
        payload=replacement
        header=header[:192]+struct.pack('<I',len(payload))
    rebuilt+=header+payload
dest=root/'z/assetsfb.zip'
if dest.exists(): raise FileExistsError(dest)
shutil.copyfile(source,dest)
with zipfile.ZipFile(dest,'a',compression=zipfile.ZIP_DEFLATED) as z:
    # Preserve every unchanged local record; replace only this central entry.
    z.filelist=[i for i in z.filelist if i.filename!=package]
    z.NameToInfo.pop(package)
    z.writestr(package,rebuilt)
with zipfile.ZipFile(dest) as z:
    assert z.read(package)==rebuilt
    assert z.namelist().count(package)==1
report={'package':package,'fb_records':len(entries),'changed_script':startup,
        'camera_reapply_check':camera_check,
        'disable_ai_after_exit_for_camera_check':quiet_check,
        'commands_from':[down,up],'original_package_sha256':hashlib.sha256(original).hexdigest(),
        'fixture_package_sha256':hashlib.sha256(rebuilt).hexdigest(),
        'purpose':'Transition isolation only; does not validate combat or ordinary traversal.'}
(root/'fixture.json').write_text(json.dumps(report,indent=2))
print(json.dumps(report,indent=2))
