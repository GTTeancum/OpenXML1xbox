"""Read/write the binary packagedef subset used by Raven PKGB manifests.

Offsets are absolute little-endian uint32s. The format was inspected against
XML2's installed Packages/generated files; resources stay in manifest order.
"""
from dataclasses import dataclass
import struct

END = 0xffffffff

@dataclass(frozen=True)
class Resource:
    kind: str
    attributes: tuple[tuple[str, str], ...]


def read_pkgb(data: bytes) -> list[Resource]:
    def words(offset, count):
        if offset < 0 or offset + count*4 > len(data):
            raise ValueError(f'Truncated PKGB record at {offset:#x}')
        return struct.unpack_from(f'<{count}I', data, offset)
    def string(offset):
        if offset >= len(data):
            raise ValueError(f'Invalid PKGB string offset {offset:#x}')
        end = data.find(b'\0', offset)
        if end < 0:
            raise ValueError('Unterminated PKGB string')
        return data[offset:end].decode('ascii')
    if words(0, 2) != (0x11b1, 1):
        raise ValueError('Unsupported PKGB header')
    name, sibling, child, count = words(8, 4)
    if string(name) != 'packagedef' or sibling != END or count:
        raise ValueError('Expected a single packagedef root without attributes')
    result, visited = [], {8}
    while child != END:
        if child in visited:
            raise ValueError('Cycle in PKGB records')
        visited.add(child)
        name, sibling, nested, count = words(child, 4)
        if nested != END:
            raise ValueError('Nested package resource nodes are unsupported')
        fields = words(child+16, count*2)
        attrs = tuple((string(fields[i]), string(fields[i+1])) for i in range(0,len(fields),2))
        result.append(Resource(string(name), attrs))
        child = sibling
    return result


def write_pkgb(resources: list[Resource]) -> bytes:
    offsets, at = [], 24
    for resource in resources:
        offsets.append(at)
        at += 16 + 8*len(resource.attributes)
    strings, pool = {}, bytearray()
    def intern(value):
        if '\0' in value:
            raise ValueError('Embedded NUL in PKGB string')
        if value not in strings:
            strings[value] = at + len(pool)
            pool.extend(value.encode('ascii')+b'\0')
        return strings[value]
    root = intern('packagedef')
    records = bytearray(struct.pack('<6I',0x11b1,1,root,END,offsets[0] if offsets else END,0))
    for index,resource in enumerate(resources):
        name = intern(resource.kind)
        fields = [(intern(k),intern(v)) for k,v in resource.attributes]
        records.extend(struct.pack('<4I',name,offsets[index+1] if index+1<len(offsets) else END,END,len(fields)))
        for pair in fields:
            records.extend(struct.pack('<2I',*pair))
    return bytes(records+pool)


def read_fb(data: bytes):
    """Yield (physical filename, resource type, payload) from XML1 FB records."""
    at = 0
    while at < len(data):
        if len(data)-at < 196:
            raise ValueError(f'Truncated FB header at {at:#x}')
        header = data[at:at+196]
        name, kind = (field.split(b'\0',1)[0].decode('ascii') for field in (header[:128],header[128:192]))
        size, = struct.unpack_from('<I', header, 192)
        end = at+196+size
        if end > len(data):
            raise ValueError(f'Truncated FB resource {name}')
        if not name or not kind:
            raise ValueError('Empty FB resource name/type')
        yield name,kind,data[at+196:end]
        at = end
