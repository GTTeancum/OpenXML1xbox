"""Compare compiled node graphs to an independent ElementTree source parse."""
import argparse, re, struct, xml.etree.ElementTree as ET
from pathlib import Path
EXT={'.xml','.eng','.fre','.ger','.ita','.spa','.pol','.rus','.chr','.nav','.boy'}
p=argparse.ArgumentParser();p.add_argument('--source',type=Path,required=True);p.add_argument('--compiled',type=Path,required=True);a=p.parse_args()
def binary(data):
 assert struct.unpack_from('<2I',data)==(0x11b1,1)
 visited=set()
 def string(offset):return data[offset:data.index(0,offset)].decode('latin1')
 def nodes(offset):
  result=[]
  while offset!=0xffffffff:
   assert offset not in visited;visited.add(offset)
   name,sibling,child,count=struct.unpack_from('<4I',data,offset)
   attrs=[(string(k),string(v)) for k,v in struct.iter_unpack('<2I',data[offset+16:offset+16+8*count])]
   result.append((string(name),attrs,nodes(child)));offset=sibling
  return result
 return nodes(8) if len(data)>8 else []
def element(n):return n.tag,list(n.attrib.items()),[element(c) for c in n]
count=0
for path in a.source.rglob('*'):
 if not path.is_file() or path.suffix.lower() not in EXT:continue
 text=path.read_bytes().decode('latin1')
 # Raven uses literal bytes in quoted values. Escape them for the independent
 # standards-compliant parser; do not interpret retail '&amp;' as an entity.
 def escape(m):return m[0][0]+m[0][1:-1].replace('&','&amp;').replace('<','&lt;').replace('>','&gt;').replace('\r','&#13;').replace('\n','&#10;').replace('\t','&#9;')+m[0][-1]
 text=re.sub(r""""[^"]*"|'[^']*'""",escape,text)
 text=re.sub(r'<\?.*?\?>','',text,flags=re.S)
 root=ET.fromstring('<test_document>'+text+'</test_document>')
 for n in root.iter():
  assert (n.text or '').strip() in ('','/>') and (n.tail or '').strip() in ('','/>'),path
 target=a.compiled/path.relative_to(a.source);target=Path(str(target)+'b')
 assert [element(n) for n in root]==binary(target.read_bytes()),path
 count+=1
print('PASS independent element/attribute/order comparison for',count,'files')
