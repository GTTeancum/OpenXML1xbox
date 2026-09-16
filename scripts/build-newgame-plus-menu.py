"""Author the native pause menu's eighth row; preserve its PKGB resource paths."""
import argparse,re,sys
from pathlib import Path
import xml.etree.ElementTree as ET

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--assets',type=Path,required=True)
    p.add_argument('--output',type=Path,required=True)
    p.add_argument('--writer-root',type=Path,required=True)
    a=p.parse_args()
    if a.assets.resolve()==a.output.resolve() or a.output.exists():
        raise ValueError('Use a new private overlay directory')
    sys.path.insert(0,str(a.writer_root.resolve()))
    from roster_menu_assets import read,encoded
    from menu_igb_graph import field,put
    from xml1_packages import read_pkgb
    resource='ui/menus/menu_pause.igb'
    w=read(a.assets/resource)
    changed=set()
    for i,o in enumerate(w.objects):
        if not hasattr(o,'raw_fields') or w.meta_objects[o.type_index].name!=b'igTransform':continue
        name=field(w,i,2)
        match=re.fullmatch(r'button([1-8])(_back|_highlight)?',str(name))
        if not match:continue
        row=int(match[1]);m=list(field(w,i,8))
        # Eight rows occupy the original seven-row region; footer and logo stay put.
        z=202.18460083007812-(row-1)*(195.35492134094238/7)
        m[14]=z if match[2] else z-8.200653076171875
        if match[2]:m[10]*=6/7
        put(w,i,8,tuple(m));changed.add(name)
    if len(changed)!=24:raise ValueError('Unexpected pause model; retrace anchors')
    target=a.output/resource;target.parent.mkdir(parents=True);target.write_bytes(encoded(w))
    for lang in ('eng','fre','ger'):
        rel=f'ui/menus/pause.{lang}'
        menu=ET.fromstring((a.assets/rel).read_bytes().decode('cp1252'))
        for item in menu:
            if item.get('name') in ('button8_back','button8_highlight','button8'):
                item.attrib.pop('debug',None)
            if item.get('name')=='button8':
                item.set('text','NewGame+');item.set('usecmd','newgameplus')
                item.attrib.pop('desctext2',None)
        (a.output/rel).write_bytes(ET.tostring(menu,encoding='unicode').encode('cp1252'))
    rel='packages/generated/maps/package/menus/pause.pkgb'
    blob=(a.assets/rel).read_bytes();read_pkgb(blob)
    target=a.output/rel;target.parent.mkdir(parents=True);target.write_bytes(blob)
    print('Authored native NewGame+ pause row with unchanged package paths')
if __name__=='__main__':main()
