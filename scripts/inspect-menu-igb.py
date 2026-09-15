"""Read serialized Alchemy v6 menu field boundaries; never guesses byte patterns."""
import json
import struct
import sys
from pathlib import Path


def inspect(data):
    def u32(p):
        return struct.unpack_from('<I', data, p)[0]
    def name(p, n):
        return data[p:p+n].split(b'\0')[0].decode('cp1252')
    h = struct.unpack_from('<12I', data)
    assert h[10] == 0xFADA and h[11] & 0xffff == 6, 'Expected little-endian Alchemy v6'
    p = 48
    q = p + h[9]*12
    field_names = []
    for i in range(h[9]):
        n = u32(p+i*12)
        field_names.append(name(q, n)); q += n
    assert q <= p+h[8]
    p += h[8]
    p += u32(p)
    q = p + h[3]*24
    meta = []
    for i in range(h[3]):
        n, count = u32(p+i*24), u32(p+i*24+12)
        title = name(q, n); q += n
        fields = []
        for _ in range(count):
            kind, slot, size = struct.unpack_from('<3H', data, q); q += 6
            fields.append((field_names[kind], slot, size))
        meta.append((title, fields))
    assert q <= p+h[2]
    p += h[2]
    for flag in (0x40000000, 0x10000000):
        if h[11] & flag: p += u32(p)

    def fields_at(p):
        kind, size = u32(p), u32(p+4)
        assert size >= 8 and p+size <= len(data)
        title, fields = meta[kind]
        q = p+8
        result = []
        for field_type, slot, width in fields:
            actual = width + (u32(q) if field_type == 'igStringMetaField' else 0)
            assert q+actual <= p+size, (title, slot, q, actual, p+size)
            result.append({'type': field_type, 'slot': slot, 'offset': q, 'size': actual})
            q += (actual+3)&~3
        return title, result, size

    entries = []
    end = p+h[0]
    for _ in range(h[1]):
        title, fields, size = fields_at(p)
        vals = {f['slot']: int.from_bytes(data[f['offset']:f['offset']+min(4,f['size'])], 'little') for f in fields}
        entries.append({'object': title == 'igObjectDirEntry', 'bytes': vals.get(7,0), 'kind': vals.get(10,0)})
        p += size
    assert p == end
    size, count = u32(p), u32(p+4)
    refs = [dict(entries[struct.unpack_from('<H',data,p+8+i*2)[0]]) for i in range(count)]
    p += size
    if h[11] & 0x80000000: p += 4
    end = p+h[4]
    objects = []
    for i, ref in enumerate(refs):
        if not ref['object']: continue
        title, fields, size = fields_at(p)
        objects.append({'ref':i, 'type':title, 'offset':p, 'size':size, 'fields':fields})
        p += size
    assert p == end
    for ref in refs:
        if ref['object']: continue
        ref['type'] = meta[ref['kind']][0] if ref['kind'] < len(meta) else str(ref['kind'])
        ref['offset'] = p
        assert p+ref['bytes'] <= len(data)
        p += (ref['bytes']+3)&~3
    return {'objects':objects, 'refs':refs, 'parsed_end':p, 'file_bytes':len(data)}


if __name__ == '__main__':
    path = Path(sys.argv[1])
    print(json.dumps(inspect(path.read_bytes()), indent=2))
