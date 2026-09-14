"""Convert editable package XML to binary PKGB, or inspect a PKGB as XML."""
import argparse
from pathlib import Path
import xml.etree.ElementTree as ET
from xml1_packages import Resource,read_pkgb,write_pkgb

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('action',choices=('compile','decompile'))
    p.add_argument('source',type=Path);p.add_argument('output',type=Path)
    args=p.parse_args()
    if args.source.resolve()==args.output.resolve():p.error('Source and output must differ')
    try:
        if args.action=='compile':
            root=ET.parse(args.source).getroot()
            if root.tag!='packagedef' or root.attrib:raise ValueError('Expected packagedef root without attributes')
            resources=[]
            for node in root:
                if len(node) or (node.text and node.text.strip()):raise ValueError('Resource nodes must contain attributes only')
                if 'filename' not in node.attrib:raise ValueError(f'{node.tag} is missing filename')
                resources.append(Resource(node.tag,tuple(node.attrib.items())))
            output=write_pkgb(resources)
            if read_pkgb(output)!=resources:raise ValueError('PKGB round-trip validation failed')
        else:
            root=ET.Element('packagedef')
            for resource in read_pkgb(args.source.read_bytes()):ET.SubElement(root,resource.kind,dict(resource.attributes))
            ET.indent(root);output=ET.tostring(root,encoding='utf-8',xml_declaration=True)+b'\n'
        args.output.parent.mkdir(parents=True,exist_ok=True)
        args.output.write_bytes(output)
    except (ValueError,OSError,ET.ParseError) as error:p.exit(1,f'Package conversion failed: {error}\n')
    print(args.output)
if __name__=='__main__':main()
