"""Convert XML1 assetsfb.zip to ordered XML2-style PKGBs and loose resources.

The destination must not exist. Source data is read-only. Resource filenames are
preserved. Extract ZIP files first, then FB payloads in archive order; later
payloads replace earlier copies at the same filename.
"""
import argparse
import hashlib
import json
from pathlib import Path, PurePosixPath
import zipfile
from xml1_packages import Resource, read_fb, read_pkgb, write_pkgb

PREFIXES = {'actorskin':'actors/', 'actoranimdb':'actors/', 'effect':'effects/', 'motionpath':'motionpaths/'}
KINDS = {'actorskin','actoranimdb','model','effect','texture','fightstyle','xml','combat_is','script','motionpath','characters','zonexml','nav','xml_resident'}
LANGUAGES = {'eng','fre','ger','ita','spa','pol','rus'}

def safe_path(name):
    name=name.replace('\\','/')
    p=PurePosixPath(name)
    if not name or name.startswith('/') or ':' in name or any(x in ('','.', '..') for x in name.split('/')):
        raise ValueError(f'Unsafe resource path: {name!r}')
    if any(x.endswith((' ','.')) for x in p.parts):
        raise ValueError(f'Unsafe Windows resource path: {name!r}')
    for part in p.parts:
        if any(ord(c)<32 or c in '<>|?*' for c in part):
            raise ValueError(f'Unsafe Windows resource path: {name!r}')
        base=part.split('.')[0].lower()
        if base in {'con','prn','aux','nul'} or (len(base)==4 and base[:3] in {'com','lpt'} and base[3] in '123456789'):
            raise ValueError(f'Reserved Windows resource path: {name!r}')
    return p.as_posix().lower()

def logical_name(name,kind):
    if kind not in KINDS:raise ValueError(f'Unsupported resource type: {kind}')
    if kind=='combat_is':
        if name not in ('on','off'):raise ValueError(f'Unknown combat control: {name}')
        return name
    name=safe_path(name)
    prefix=PREFIXES.get(kind,'')
    if prefix and not name.startswith(prefix):raise ValueError(f'{kind} resource outside {prefix}: {name}')
    name=name[len(prefix):]
    # XML1's motion-path package loader strips the last path component unless
    # it sees .igb (sub_001210E0). A bundle name must retain this extension.
    if kind=='motionpath':return name
    suffix=PurePosixPath(name).suffix
    if not suffix:raise ValueError(f'Resource has no extension: {name}')
    return name[:-len(suffix)]

def convert(source,destination):
    source=Path(source).resolve(); destination=Path(destination).resolve()
    if destination.exists():raise ValueError('Destination already exists; choose a new directory')
    destination.mkdir(parents=True)
    assets={}; replacements=[]; packages=[]
    def put(name,payload,origin):
        name=safe_path(name); digest=hashlib.sha256(payload).hexdigest()
        previous=assets.get(name)
        if previous and previous['sha256']==digest:return name
        if previous:
            replacements.append(dict(path=name,previous=previous,sha256=digest,origin=origin))
        path=destination/name
        path.parent.mkdir(parents=True,exist_ok=True);path.write_bytes(payload)
        assets[name]=dict(sha256=digest,origin=origin)
        return name
    with zipfile.ZipFile(source) as archive:
        entries=[i for i in archive.infolist() if not i.is_dir()]
        names=[safe_path(i.filename) for i in entries]
        if len(set(names))!=len(names):raise ValueError('Duplicate/case-colliding ZIP entries')
        # Standalone resources establish their canonical physical filenames.
        for info in entries:
            if not info.filename.lower().endswith('.fb'):
                put(info.filename,archive.read(info),info.filename)
        for info in entries:
            if not info.filename.lower().endswith('.fb'):continue
            resources=[]; localized=set(); record_count=0
            records=list(read_fb(archive.read(info)))
            for name,kind,payload in records:
                record_count+=1
                if kind=='combat_is':
                    if payload:raise ValueError('Control record contains unexpected payload')
                    output=name
                else:output=put(name,payload,info.filename)
                logical=logical_name(output,kind)
                # A single logical XML resource selects its installed language
                # at runtime; its FB held each language as a separate record.
                suffix=PurePosixPath(name).suffix[1:].lower()
                if suffix in LANGUAGES:
                    key=(kind,logical)
                    if key in localized:continue
                    localized.add(key)
                resources.append(Resource(kind,(('filename',logical),)))
            target=PurePosixPath(safe_path(info.filename)).with_suffix('.pkgb')
            encoded=write_pkgb(resources)
            if read_pkgb(encoded)!=resources:raise ValueError(f'PKGB validation failed: {target}')
            path=destination/target;path.parent.mkdir(parents=True,exist_ok=True)
            if path.exists():raise ValueError(f'Package path collision: {target}')
            path.write_bytes(encoded)
            packages.append(dict(path=str(target),source=info.filename,fb_records=record_count,resources=len(resources),sha256=hashlib.sha256(encoded).hexdigest()))
    report=dict(source=str(source),packages=packages,replacements=replacements,
        extraction_order='standalone ZIP entries, then FB payloads in archive order; last copy wins',
        unique_resource_paths=len(assets),loose_files=len(assets),
        assets=[dict(path=name,**info) for name,info in assets.items()])
    (destination/'loose-build.json').write_text(json.dumps(report,indent=2),encoding='utf-8')
    return report

if __name__=='__main__':
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('archive',type=Path);parser.add_argument('destination',type=Path)
    args=parser.parse_args()
    try:report=convert(args.archive,args.destination)
    except (ValueError,OSError,zipfile.BadZipFile) as error:parser.exit(1,f'Conversion failed: {error}\n')
    print(f"Converted {len(report['packages'])} packages, {report['loose_files']} loose files, {len(report['replacements'])} replacements at original filenames")
