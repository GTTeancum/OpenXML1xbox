"""Audit native menu PKGB declarations, original resource paths and IGB Model properties."""
import argparse,hashlib,json,struct,sys
from pathlib import Path
import xml.etree.ElementTree as ET
from xml1_packages import read_pkgb
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('--assets',type=Path,required=True)
p.add_argument('--writer-root',type=Path,required=True)
p.add_argument('--output',type=Path,required=True)
p.add_argument('--menus',nargs='+',default=['options','options_controller_xbox'])
p.add_argument('--languages',nargs='+',default=['eng','fre','ger'],choices=['eng','fre','ger'])
a=p.parse_args();root=a.assets.resolve();sys.path.insert(0,str(a.writer_root.resolve()))
from igb_format.igb_reader import IGBReader
from igb_format.igb_writer import from_reader

def resource_file(resource,suffix):
 target=(root/(resource+suffix)).resolve()
 if not target.is_relative_to(root):raise ValueError('Resource escapes the asset root: '+resource)
 if not target.is_file():raise ValueError('Missing declared resource: '+str(target))
 return target

def digest(path):return hashlib.sha256(path.read_bytes()).hexdigest()
report={}
for name in a.menus:
 pkg=resource_file('packages/generated/maps/package/menus/'+name,'.pkgb')
 rows=read_pkgb(pkg.read_bytes());models=set();xmls=set()
 for row in rows:
  attrs=dict(row.attributes)
  if set(attrs)!={'filename'} or row.kind not in ['model','xml']:raise ValueError('Unexpected native menu PKGB declaration')
  (models if row.kind=='model' else xmls).add(attrs['filename'].lower())
 for model in models:resource_file(model,'.igb')
 expected='ui/menus/'+name
 if xmls!={expected}:raise ValueError('Menu must retain its own PKGB association: '+name)
 languages={}
 for language in a.languages:
  menu_path=resource_file(expected,'.'+language)
  raw=menu_path.read_bytes()
  try: decoded=raw.decode('utf-8')
  except UnicodeDecodeError: decoded=raw.decode('cp1252')
  menu=ET.fromstring(decoded)
  controller=menu.get('controllerModel')
  if controller and controller.lower() not in models:raise ValueError('Undeclared controllerModel: '+controller)
  layout='ui/menus/'+menu.get('igb','').lower()
  if layout not in models:raise ValueError(f'{name}.{language}: layout {layout} absent from its PKGB')
  for item in menu.findall('item'):
   if item.get('hide')=='true':continue
   for attr in ['model','focusmodel']:
    value=item.get(attr)
    if value and value.lower() not in models:raise ValueError('Undeclared '+attr+': '+value)
  layout_path=resource_file(layout,'.igb');reader=IGBReader(str(layout_path));reader.read();w=from_reader(reader)
  # The XML1 menu collector uses a 128-pointer stack array (148A80).
  # Bound the authored shared layout before native loading can overrun it.
  if layout=='ui/menus/x2m_options':
   transforms=sum(hasattr(o,'raw_fields') and w.meta_objects[o.type_index].name==b'igTransform' for o in w.objects)
   if transforms>128:raise ValueError(f'{layout}: {transforms} transforms exceed native menu capacity 128')
  def field(j,slot):return next(v for k,v,t in w.objects[j].raw_fields if k==slot)
  properties=[];native_overrides=[]
  for j,o in enumerate(w.objects):
   if not hasattr(o,'raw_fields') or w.meta_objects[o.type_index].name!=b'igHashedUserInfo':continue
   props=field(j,8)
   if props<0:continue
   memory=field(props,4)
   if memory<0:continue
   named={field(field(prop,2),2):field(field(prop,3),2)
          for prop, in struct.iter_unpack('<i',w.objects[memory].data)}
   for prop, in struct.iter_unpack('<i',w.objects[memory].data):
    if field(field(prop,2),2)!='Model':continue
    value=field(field(prop,3),2);resource=value.lower()
    # Original OPTIONS_CONTROLLER_MENU initialization reads controllerModel,
    # finds item "controller" (17F898), and assigns its model at 17F8C1.
    # The original IGB's m_invis placeholder is therefore replaced by this
    # explicit, already-validated resource; it is not a runtime path alias.
    if menu.get('type')=='OPTIONS_CONTROLLER_MENU' and named.get('ItemName')=='controller' and controller:
     native_overrides.append({'item':'controller','placeholder':value,'model':controller})
     continue
    if '/' not in resource:resource='ui/models/'+resource
    if resource not in models:raise ValueError('Undeclared IGB Model: '+value)
    properties.append(value)
  languages[language]={'menu_sha256':digest(menu_path),'layout':layout,'layout_sha256':digest(layout_path),'igb_model_properties':len(properties),'native_model_overrides':native_overrides}
 report[name]={'package_sha256':digest(pkg),'models':sorted(models),'menu':expected,'languages':languages}

a.output.parent.mkdir(parents=True,exist_ok=True);a.output.write_text(json.dumps(report,indent=2)+'\n')
print('PASS',', '.join(report),'PKGB paths, menu associations and serialized model declarations')
