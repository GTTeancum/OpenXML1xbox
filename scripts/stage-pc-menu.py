"""Plan or install the audited native PC menus at their original PKGB paths.

Default is read-only. --apply requires a new backup directory outside the game.
Only the two menu packages and their declared contents/models are copied.
"""
import argparse, hashlib, json, os, shutil, subprocess, sys
from pathlib import Path
from xml1_packages import read_pkgb

MENUS=('options','options_controller_xbox')

def digest(data):
    return hashlib.sha256(data).hexdigest()

def local_path(root,relative):
    relative=Path(relative)
    if relative.is_absolute() or '..' in relative.parts:
        raise ValueError(f'Invalid relative asset path: {relative}')
    target=root/relative
    for path in (target,*target.parents):
        if path==root.parent:break
        if path.is_symlink() or (hasattr(path,'is_junction') and path.is_junction()):
            raise ValueError(f'Asset staging must not follow links: {path}')
        if path.exists() and os.name=='nt' and path.stat().st_file_attributes&0x400:
            raise ValueError(f'Asset staging must not follow reparse points: {path}')
    if not target.resolve().is_relative_to(root):
        raise ValueError(f'Asset escapes root: {target}')
    return target

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--source',type=Path,required=True)
    p.add_argument('--destination',type=Path,required=True)
    p.add_argument('--writer-root',type=Path,required=True)
    p.add_argument('--report',type=Path,required=True)
    p.add_argument('--backup',type=Path)
    p.add_argument('--apply',action='store_true')
    a=p.parse_args();source=a.source.absolute();destination=a.destination.absolute()
    if source.resolve()==destination.resolve():raise ValueError('Source and destination must differ')
    if not local_path(destination,'default.xbe').is_file():raise ValueError('Destination must contain default.xbe')
    paths=set()
    for menu in MENUS:
        relative=f'packages/generated/maps/package/menus/{menu}.pkgb'
        paths.add(relative)
        for row in read_pkgb(local_path(source,relative).read_bytes()):
            attributes=dict(row.attributes)
            if set(attributes)!={'filename'} or row.kind not in ('model','xml'):
                raise ValueError('Unexpected package declaration')
            for suffix in (('.igb',) if row.kind=='model' else ('.eng','.fre','.ger')):
                paths.add(attributes['filename'].lower()+suffix)
    audit=a.report.with_name(a.report.stem+'-audit.json')
    subprocess.run([sys.executable,str(Path(__file__).with_name('audit-native-menu-packages.py')),
        '--assets',str(source),'--writer-root',str(a.writer_root),'--output',str(audit)],check=True)
    changes=[];payload={}
    for relative in sorted(paths):
        src=local_path(source,relative);dst=local_path(destination,relative)
        data=src.read_bytes();payload[relative]=data
        old=dst.read_bytes() if dst.exists() else None
        changes.append({'path':relative,'source_sha256':digest(data),
            'previous_sha256':digest(old) if old is not None else None,
            'changed':old!=data})
    report={'source':str(source),'destination':str(destination),'applied':False,
        'scope':'Options and Advanced Options; eng/fre/ger contents, declared models and PKGBs only',
        'files':changes}
    a.report.parent.mkdir(parents=True,exist_ok=True)
    a.report.write_text(json.dumps(report,indent=2)+'\n')
    if not a.apply:
        print(f'PLAN: {sum(c["changed"] for c in changes)} of {len(changes)} resources differ; no game files changed')
        return
    if not a.backup:raise ValueError('--apply requires --backup')
    backup=a.backup.absolute()
    if backup.exists() or backup.resolve().is_relative_to(destination.resolve()):
        raise ValueError('Backup must be a new directory outside the destination')
    backup.mkdir(parents=True,exist_ok=False)
    for c in changes:
        if c['changed'] and c['previous_sha256'] is not None:
            target=local_path(backup,c['path']);target.parent.mkdir(parents=True,exist_ok=True)
            shutil.copy2(local_path(destination,c['path']),target)
            if digest(target.read_bytes())!=c['previous_sha256']:raise ValueError('Backup verification failed')
    (backup/'manifest.json').write_text(json.dumps(report,indent=2)+'\n')
    written=[]
    try:
        for c in changes:
            if not c['changed']:continue
            dst=local_path(destination,c['path']);dst.parent.mkdir(parents=True,exist_ok=True)
            written.append(c)
            dst.write_bytes(payload[c['path']])
            if digest(dst.read_bytes())!=c['source_sha256']:raise ValueError('Staged hash mismatch')
    except Exception:
        for c in reversed(written):
            dst=local_path(destination,c['path'])
            if c['previous_sha256'] is None:dst.unlink(missing_ok=True)
            else:shutil.copy2(local_path(backup,c['path']),dst)
        raise
    report['applied']=True;report['backup']=str(backup)
    a.report.write_text(json.dumps(report,indent=2)+'\n')
    print(f'STAGED: {sum(c["changed"] for c in changes)} resources; originals backed up at {backup}')

if __name__=='__main__':main()
