"""Check shipped roster dependencies against assetsfb.zip plus an overlay.

The development asset tree is deliberately not a source of implicit fallback.
Read compiled herostats when present, just as the loose game does. This catches
test costume declarations shipped without their models and character packages.
"""
import argparse
import json
from pathlib import Path
import struct
import xml.etree.ElementTree as ET
import zipfile
from xml1_packages import read_fb, read_pkgb


def normalized(name):
    name=name.replace('\\','/').lower()
    if name.startswith('/') or ':' in name or any(x in ('', '.', '..') for x in name.split('/')):
        raise ValueError('Invalid asset path: '+name)
    return name


def stats(data):
    if data[:4]!=b'\xb1\x11\0\0':
        return [n.attrib for n in ET.fromstring(data).iter('stats')]
    def word(at):
        return struct.unpack_from('<I',data,at)[0]
    def string(at):
        end=data.index(b'\0',at)
        return data[at:end].decode('latin1')
    result=[]; pending=[8]; visited=set()
    while pending:
        at=pending.pop()
        if at in visited: raise ValueError('Repeated XMLB node')
        visited.add(at)
        name,sibling,child,count=struct.unpack_from('<4I',data,at)
        if string(name).lower()=='stats':
            result.append({string(word(at+16+i*8)):string(word(at+20+i*8)) for i in range(count)})
        pending.extend(x for x in (sibling,child) if x!=0xffffffff)
    return result


def package_files(data,language,available):
    """Resolve character package declarations using the native resource roots."""
    files=set()
    for row in read_pkgb(data):
        name=dict(row.attributes).get('filename','').lower()
        # Sound declarations name a bank event, not a loose resource file.
        if row.kind in ('combat_is','sound'):continue
        prefix={'actorskin':'actors/','actoranimdb':'actors/',
                'effect':'effects/','motionpath':'motionpaths/'}.get(row.kind,'')
        extension={'actorskin':'.igb','actoranimdb':'.igb','model':'.igb',
                   'texture':'.igb','motionpath':'.igb','effect':'.xml',
                   'fightstyle':'.eng','xml_talents':'.xml','xml':'.'+language,
                   'xml_resident':'.'+language,'characters':'.chr',
                   'zonexml':'.xml','nav':'.nav','script':'.py'}.get(row.kind)
        if extension is None:raise ValueError('Unknown package resource type: '+row.kind)
        if row.kind=='motionpath' and name.endswith('.igb'):extension=''
        physical=normalized(prefix+name+extension)
        if row.kind in ('effect','fightstyle','xml','xml_talents','xml_resident'):
            candidates=[prefix+name+suffix for suffix in ('.'+language+'b','.'+language,'.xmlb','.xml')]
            physical=next((p for p in candidates if p in available),physical)
        files.add(physical)
    return files


def audit(archive,overlay):
    available=set(); rosters={}
    with zipfile.ZipFile(archive) as z:
        for entry in z.infolist():
            if entry.is_dir(): continue
            name=normalized(entry.filename)
            if name.endswith('.fb'):
                available.add(name[:-3]+'.pkgb')
                records=read_fb(z.read(entry))
            else:
                available.add(name)
                if name.startswith('data/herostat.'):rosters[name]=z.read(entry)
                continue
            for name,kind,data in records:
                if kind=='combat_is':continue
                name=normalized(name);available.add(name)
                if name.startswith('data/herostat.'):rosters[name]=data
    overlay={normalized(name):data for name,data in overlay.items()}
    for name,data in overlay.items():
        name=normalized(name);available.add(name)
        if name.startswith('data/herostat.'):rosters[name]=data
    problems=[];checked=0
    for language in ('eng','fre','ger'):
        raw=rosters.get('data/herostat.'+language+'b',rosters.get('data/herostat.'+language))
        if raw is None:continue
        for node in stats(raw):
            if node.get('playable','').lower()!='true':continue
            name=node.get('name','');skin=node.get('skin','');checked+=1
            if not skin.isdigit() or len(skin)<3:raise ValueError('Invalid hero skin: '+name)
            skins={skin}|{skin[:-2]+v.zfill(2) for k,v in node.items() if k.startswith('skin_')}
            required={f'actors/{node.get("characteranims","")}.igb'}
            for physical in skins:
                required.add(f'actors/{physical}.igb')
                for suffix in ('','_nc'):
                    required.add(f'packages/generated/characters/{name.lower()}_{physical}{suffix}.pkgb')
            # Follow authored character packages as well as the herostat:
            # a present costume IGB without its HUD/effects is still incomplete.
            for path in list(required):
                if path.lower().endswith('.pkgb') and path.lower() in overlay:
                    required.update(package_files(overlay[path.lower()],language,available))
            def present(path):
                path=path.lower()
                return path in available or (Path(path).suffix in ('.xml','.eng','.fre','.ger','.chr','.nav') and path+'b' in available)
            missing=sorted(p.lower() for p in required if not present(p))
            if missing:problems.append(dict(language=language,character=name,missing=missing))
    return dict(checked=checked,problems=problems)


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--archive',type=Path,required=True)
    p.add_argument('--overlay',type=Path,required=True,help='Release ZIP or files directory')
    p.add_argument('--output',type=Path,required=True)
    a=p.parse_args()
    if a.overlay.is_dir():
        files={str(f.relative_to(a.overlay)):f.read_bytes() for f in a.overlay.rglob('*') if f.is_file()}
    else:
        with zipfile.ZipFile(a.overlay) as z:files={i.filename:z.read(i) for i in z.infolist() if not i.is_dir()}
    result=audit(a.archive,files);a.output.write_text(json.dumps(result,indent=2)+'\n')
    print('Checked',result['checked'],'playable definitions;',len(result['problems']),'incomplete')
    if result['problems']:raise SystemExit(1)


if __name__=='__main__':main()
