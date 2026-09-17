"""Build a private beta overlay from a reviewed ISO/loose delta audit."""
from pathlib import Path
import argparse, hashlib, json, shutil

def digest(path):
    with path.open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()

def main():
    ap=argparse.ArgumentParser()
    ap.add_argument('--stage',type=Path,required=True)
    ap.add_argument('--audit',type=Path,required=True)
    ap.add_argument('--output',type=Path,required=True)
    a=ap.parse_args()
    if a.output.exists():raise SystemExit('Choose a new output directory')
    entries=[]
    for entry in json.loads(a.audit.read_text())['files']:
        rel=entry['path'];source=a.stage/rel
        if Path(rel).name in ('.xml1-loose-ready','.xml1-xmlb-ready'):
            raise SystemExit('Setup completion marker must not ship: '+rel)
        if rel.lower().endswith('.dll') or rel.lower()=='runtime/xml1-dx8-worker.exe':
            raise SystemExit('Obsolete external runtime in audit: '+rel)
        if digest(source)!=entry['sha256']:raise SystemExit('Staging changed: '+rel)
        entries.append((rel,source,'replacement' if entry['baseline'] else 'addition'))
    entries.append(('.xml1-player-layout',a.stage/'.xml1-player-layout','layout'))
    # Validate the full source list before creating the package.
    for rel,source,kind in entries:
        p=Path(rel)
        if p.is_absolute() or '..' in p.parts or ':' in rel or not source.is_file():raise SystemExit('Invalid entry: '+rel)
    manifest=[]
    for rel,source,kind in entries:
        target=a.output/'files'/rel;target.parent.mkdir(parents=True,exist_ok=True)
        shutil.copyfile(source,target)
        manifest.append({'path':rel,'size':target.stat().st_size,'sha256':digest(target),'role':kind})
    result={'format':1,'base':'X-Men Legends (World) Xbox ISO','iso_sha256':'0a1ef03e57458144609906bbc2d44d2c26028cf704f4698ce0f1e61c34030b44',
        'install_order':['Extract the ISO filesystem into a fresh directory.','Overlay files/ at that directory root.','Launch X-Men Legends.exe; its first-run setup generates loose assets, PKGBs and XMLB data while preserving the overlay.'],
        'excluded':['ISO content','regenerable unmodified loose assets, PKGBs and XMLB data','UDATA','TDATA','pc-settings.ini','.xml1-loose-ready','.xml1-xmlb-ready','logs','captures'],
        'files':manifest}
    (a.output/'manifest.json').write_text(json.dumps(result,indent=2)+'\n')
    print(len(manifest),'files;',sum(x['size'] for x in manifest),'bytes;',a.output)
if __name__=='__main__':main()
