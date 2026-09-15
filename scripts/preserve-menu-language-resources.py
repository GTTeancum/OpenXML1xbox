"""Retain original localized menu resources in the authored menu PKGBs.

Copy genuine original declarations, without renaming resources or changing any
localized menu contents. This preserves the existing non-English menus while
the new PC menu localization is developed.
"""
import argparse,hashlib,json
from pathlib import Path
from xml1_packages import read_pkgb,write_pkgb

p=argparse.ArgumentParser(description=__doc__)
p.add_argument('--assets',type=Path,required=True)
p.add_argument('--originals',type=Path,required=True)
p.add_argument('--output-assets',type=Path,required=True)
a=p.parse_args();report={}
for name in ('options','options_controller_xbox'):
 relative=Path('packages/generated/maps/package/menus')/(name+'.pkgb')
 source=a.assets/relative;original=a.originals/relative;output=a.output_assets/relative
 if output.resolve() in (source.resolve(),original.resolve()):raise ValueError('Preserve both input manifests')
 authored=read_pkgb(source.read_bytes());baseline=read_pkgb(original.read_bytes())
 expected='ui/menus/'+name
 for rows in (authored,baseline):
  assert all(r.kind in ('model','xml') and set(dict(r.attributes))=={'filename'} for r in rows)
  assert {dict(r.attributes)['filename'].lower() for r in rows if r.kind=='xml'}=={expected}
 existing={dict(r.attributes)['filename'].lower() for r in authored if r.kind=='model'}
 added=[r for r in baseline if r.kind=='model' and dict(r.attributes)['filename'].lower() not in existing]
 for row in added:
  resource=dict(row.attributes)['filename']
  assert (a.assets/(resource+'.igb')).is_file(),resource
 merged=[r for r in authored if r.kind=='model']+added+[r for r in authored if r.kind=='xml']
 output.parent.mkdir(parents=True,exist_ok=True);output.write_bytes(write_pkgb(merged))
 assert read_pkgb(output.read_bytes())==merged
 report[name]={'added':[dict(r.attributes)['filename'] for r in added],
  'original_sha256':hashlib.sha256(original.read_bytes()).hexdigest(),
  'input_sha256':hashlib.sha256(source.read_bytes()).hexdigest(),
  'output_sha256':hashlib.sha256(output.read_bytes()).hexdigest()}
(a.output_assets/'localized-resources.json').write_text(json.dumps(report,indent=2)+'\n')
print(json.dumps(report,indent=2))
