"""Author native dummy menu resources without changing extracted originals."""
import copy
import struct
import tempfile
from pathlib import Path
from menu_igb_graph import field, put, memory, refs, transfer_graph


def read(path):
    from igb_format.igb_reader import IGBReader
    from igb_format.igb_writer import from_reader
    r = IGBReader(str(path)); r.read()
    return from_reader(r)


def encoded(w):
    # The existing writer has a file API. Re-read each result before returning
    # bytes to the fixture's planned-file manifest.
    with tempfile.TemporaryDirectory(prefix='xml1-igb-') as temp:
        p = Path(temp)/'authored.igb'
        w.write(str(p))
        check = read(p)
        assert len(check.objects) == len(w.objects)
        return p.read_bytes()


def menu_animations(source, resource_name, idle_source):
    w = read(source)
    db = next(i for i,o in enumerate(w.objects) if hasattr(o,'raw_fields') and
              w.meta_objects[o.type_index].name == b'igAnimationDatabase')
    animation_list = field(w, db, 6)
    storage = field(w, animation_list, 4)
    indices = refs(w, storage)
    named = {field(w, i, 2): i for i in indices}
    missing = [n for n in ('menu_idle', 'menu_action', 'menu_goodbye') if n not in named]
    idle = named.get('idle')
    if missing and idle is None:
        inherited = read(idle_source)
        inherited_idle = next(i for i,o in enumerate(inherited.objects) if hasattr(o,'raw_fields') and
            inherited.meta_objects[o.type_index].name == b'igAnimation' and field(inherited,i,2)=='idle')
        idle = transfer_graph(w, inherited, inherited_idle)
    for name in ('menu_idle', 'menu_action', 'menu_goodbye'):
        if name in named:
            continue
        # New animation records share the immutable tracks and binding data of
        # the NPC's own idle. No foreign skeleton or runtime alias is involved.
        index = len(w.objects)
        w.objects.append(copy.deepcopy(w.objects[idle]))
        w.ref_info.append(copy.deepcopy(w.ref_info[idle]))
        w.index_map.append(w.index_map[idle])
        put(w, index, 2, name)
        indices.append(index)
    memory(w, storage, struct.pack('<'+'i'*len(indices), *indices))
    put(w, animation_list, 2, len(indices))
    put(w, animation_list, 3, len(indices))
    put(w, db, 2, resource_name)
    return encoded(w)


def selection_portrait(template, npc_portrait, skin):
    w, source = read(template), read(npc_portrait)
    image = next(i for i,o in enumerate(source.objects) if hasattr(o,'raw_fields') and
                 source.meta_objects[o.type_index].name == b'igImage')
    copied_image = transfer_graph(w, source, image)
    for i,o in enumerate(w.objects):
        if not hasattr(o,'raw_fields'): continue
        kind = w.meta_objects[o.type_index].name
        if kind == b'igTextureAttr': put(w, i, 12, copied_image)
        for slot,value,t in list(o.raw_fields):
            if t.short_name == b'String' and value == template.stem:
                put(w, i, slot, skin)
    return encoded(w)
