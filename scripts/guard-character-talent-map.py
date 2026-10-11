"""Apply/export audited expanded character-map ownership and consumers.

The complete migration includes temporary copies, menu/gameplay iterators,
rank records and native save integration.
Shared template methods keep a retail branch for unrelated objects.
"""
import argparse
from pathlib import Path
from recomp_source import RecompSources
import re
import json
from character_talent_layout import layout, verify_retail

ROOT = Path(__file__).resolve().parents[1]
OLD, NEW = verify_retail(), layout(254)
RANK_ACCESSORS = {0x40db0, 0x480f0, 0x481a0, 0x48270, 0x482b0}
PROGRESSION = {
    # Original stats register, whether it reads root before taking map base,
    # and audited number of record-address expressions.
    0x48140: ('esi', True, 1), 0x482f0: ('ecx', True, 3),
    0x48480: ('ecx', True, 1), 0x48510: ('ebx', False, 5),
    0x487f0: ('edi', True, 1), 0x48860: ('esi', False, 3),
    0x48950: ('edi', False, 4),
}
METHODS = {0xc9b50, 0xcb2b0, 0x13c900, 0x48090, 0x476a0, 0x476e0, 0x478b0,
           0x48c00, 0x49040, 0x48ee0, 0xb3be0, 0x490f0, 0x48c60, 0x48f90,
           0x171bb0, 0xea8e0, 0x48b40, 0x47f80, 0x49280,
           0x48ef0,0x48ce0,0x476c0} | RANK_ACCESSORS | set(PROGRESSION)
DIRECT_CONSUMERS = {
    # Native stats register -> map register; base occurrences, record reads.
    0x5c020: ('eax','edi',1,1), 0xb1ba0: ('edi','esi',1,1),
    0xb1ca0: ('edi','esi',2,2), 0xb2490: ('ebx','edi',1,1),
    0xc6770: ('eax','edi',1,1), 0xd9740: ('eax','edi',1,1),
    0xd99d0: ('eax','edi',1,1), 0xdb0e0: ('eax','edi',1,1),
    0xdb250: ('eax','edi',1,1), 0x167dd0: ('eax','esi',2,2),
    0x18b930: ('eax','esi',1,1),
}
EXTERNAL_METHODS = set(DIRECT_CONSUMERS) | {0xb1f20,0x483c0,0x48690,0x481f0,
    0xaf0f0,0x48d50,0x55bc0,0xaf4e0,0x167c60,0x167d10,0x169200}


def exact(body, before, after, count=1):
    if body.count(before) != count:
        raise ValueError(f'Expected {count} occurrences of {before!r}, got {body.count(before)}')
    return body.replace(before, after)


MARK = "/* XML1 OWNED CHARACTER TALENT MAP */"

def migrate(address, body):
    if MARK not in body:
        body = migrate_unmarked(address, body)
        body = body.replace("{\n", "{\n    " + MARK + "\n", 1)
    if address == 0x49280 and '[TALENT LOAD ACQUIRE]' not in body:
        # The original stream stores byte IDs, and may encounter a package
        # definition that has not registered yet. Trace the actual acquisition
        # result before changing persistence or reference ownership semantics.
        body = exact(body, 'loc_000493A0: ;',
            'loc_000493A0: ;\n'
            '    if (getenv("XML1_TALENT_TRACE")) fprintf(stderr,\n'
            '        "[TALENT LOAD ACQUIRE] stats=%08X id=%u result=%08X\\n",\n'
            '        MEM32(esp+0x18), MEM8(esi+(edi<<4)+0x18), eax);')
    return body

def migrate_unmarked(address, body):
    if address in (0x55bc0,0xaf4e0,0x167c60,0x167d10,0x169200):
        # These enumerate talents without a keyed B3BE0 lookup. Resolve both
        # iterator construction AND its end-comparison owner identity. The
        # 167D10 team-menu path otherwise traverses zeroed inline map storage.
        base={0x55bc0:('edi','eax'),0xaf4e0:('ecx','eax'),
              0x167c60:('esi','esi'),0x167d10:('esi','esi'),
              0x169200:('esi','eax')}[address]
        dest,source=base
        body=exact(body,f'{dest} = {source} + 0x30;',
            f'{dest} = xml1_character_talent_map_resolve({source}+0x30u);')
        body=exact(body,'eax = eax + 0x30;',
            'eax = xml1_character_talent_map_resolve(eax+0x30u);')
        if address in (0x167c60,0x167d10):
            body=exact(body,'eax = MEM32(esi + 0x34);',
                'eax = MEM32(xml1_character_talent_map_resolve(esi+0x30u)+4);')
        return body
    if address in DIRECT_CONSUMERS:
        source,dest,bases,reads=DIRECT_CONSUMERS[address]
        body=exact(body,f'{dest} = {source} + 0x30;',
            f'{dest} = xml1_character_talent_map_resolve({source}+0x30u);',bases)
        roots={0xb1ba0:('eax','edi',1),0xb1ca0:('edx','edi',2),
               0xd99d0:('ecx','eax',1),0x18b930:('ecx','eax',1)}
        if address in roots:
            reg,base,n=roots[address]
            body=exact(body,f'{reg} = MEM32({base} + 0x34);',
                f'{reg} = MEM32(xml1_character_talent_map_resolve({base}+0x30u)+4);',n)
        body=exact(body,f'{dest} + eax * 4 + 0x168',
            f'{dest} + eax*4 + (xml1_character_talent_map_contains({dest})?0x141cu:0x168u)',reads)
        return body
    if address == 0xb1f20:
        # Here this is CharacterDef: embedded stats starts at +4, so the map
        # starts at +34 and its root at +38 (not the stats-relative offsets).
        body=exact(body,'eax = MEM32(esi + 0x38);',
            'eax = MEM32(xml1_character_talent_map_resolve(esi+0x34u)+4);',2)
        body=exact(body,'ebx = esi + 0x34;','ebx = xml1_character_talent_map_resolve(esi+0x34u);')
        body=exact(body,'ebp = esi + 0x34;','ebp = xml1_character_talent_map_resolve(esi+0x34u);',2)
        return exact(body,'ebp + edx * 4 + 0x168',
            'ebp + edx*4 + (xml1_character_talent_map_contains(ebp)?0x141cu:0x168u)')
    if address in (0x48ef0,0xaf0f0):
        return exact(body,'MEM32(edi) = 0x3CAD98;',
            'MEM32(xml1_character_talent_map_resolve(edi)) = 0x3CAD98;')
    if address in (0x481f0,0x48ce0,0x483c0,0x48690,0x476c0):
        if address==0x476c0:
            return exact(body,'eax = MEM32(ecx + 0x194);',
                'eax = MEM32(xml1_character_talent_map_resolve(ecx+0x30u)+'
                '(xml1_character_talent_map_contains(xml1_character_talent_map_resolve(ecx+0x30u))?0x1418u:0x164u));')
        source='edi' if address==0x48ce0 else 'ecx'
        body=exact(body,f'esi = {source} + 0x30;',
            f'esi = xml1_character_talent_map_resolve({source}+0x30u);')
        if address!=0x48ce0:
            body=exact(body,'eax = MEM32(ecx + 0x34);',
                'eax = MEM32(xml1_character_talent_map_resolve(ecx+0x30u)+4);')
        if address in (0x483c0,0x48690):
            index='edi' if address==0x483c0 else 'eax'
            body=exact(body,f'esi + {index} * 4 + 0x168',
                f'esi + {index}*4 + (xml1_character_talent_map_contains(esi)?0x141cu:0x168u)',
                2 if address==0x483c0 else 1)
        return body
    if address==0x48d50:
        body=exact(body,'ecx = edi + 0x30;','ecx = _character_map;')
        body=exact(body,'esi = edi + 0x30;','esi = _character_map;')
        body=exact(body,'ecx = MEM32(edi + 0x34);','ecx = MEM32(_character_map+4);')
        old='_fa = (uint32_t)(MEM32(edi + 0x194)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;'
        body=exact(body,old,
            '_fa = MEM32(_character_map+(_character_expanded?0x1418u:0x164u)); _fb = _character_expanded?254u:16u;',2)
        # Both branches acquire a new reference before insertion. Fail before
        # acquisition when exhausted; never leak a reference on a skipped row.
        for label in ('loc_00048DF5: ;','loc_00048E77: ;'):
            body=exact(body,label,label+'\n'
                '    if (MEM32(_character_map+(_character_expanded?0x1418u:0x164u))>=(_character_expanded?254u:16u)) '
                '{ fputs("Character talent declaration exceeds map capacity\\n",stderr); abort(); }')
        return body.replace('{\n','{\n'
            '    const uint32_t _character_map=xml1_character_talent_map_resolve(ecx+0x30u);\n'
            '    const int _character_expanded=xml1_character_talent_map_contains(_character_map);\n',1)
    if address in PROGRESSION:
        register,root,count=PROGRESSION[address]
        body=exact(body,f'esi = {register} + 0x30;','esi = _character_map;')
        if root:
            body=exact(body,f'eax = MEM32({register} + 0x34);','eax = MEM32(_character_map+4);')
        pattern=r'esi \+ (eax|ebp|edi|ecx) \* 4 \+ 0x168'
        body,n=re.subn(pattern,r'esi + \1 * 4 + _character_values',body)
        if n!=count:raise ValueError(f'{address:08X}: expected {count} record addresses, got {n}')
        if address==0x48510:
            body=exact(body,'eax = MEM32(ebx + 0x194);',
                'eax = MEM32(_character_map+(_character_expanded?0x1418u:0x164u));')
        return body.replace('{\n','{\n'
            '    const uint32_t _character_map=xml1_character_talent_map_resolve(ecx+0x30u);\n'
            '    const int _character_expanded=xml1_character_talent_map_contains(_character_map);\n'
            '    const uint32_t _character_values=_character_expanded?0x141cu:0x168u;\n',1)
    if address == 0x48b40:
        body=exact(body,'eax = esi + ecx * 4 + 0x168;',
                   'eax = esi + ecx * 4 + (_character_expanded?0x141cu:0x168u);')
        body=exact(body,'eax = esi + eax * 4 + 0x1A8;',
                   'eax = esi + eax * 4 + (_character_expanded?0x1814u:0x1a8u);')
        return body.replace('{\n','{\n'
            '    ecx=xml1_character_talent_map_resolve(ecx);\n'
            '    const int _character_expanded=xml1_character_talent_map_contains(ecx);\n'
            '    if (MEM32(ecx+(_character_expanded?0x1418u:0x164u))>=(_character_expanded?254u:16u)) '
            '{ fputs("Character talent map full\\n",stderr); abort(); }\n',1)
    if address == 0x47f80:
        for before,after in {
            'MEM8(ebx + 0x194)':'MEM8(_character_map+(_character_expanded?0x1418u:0x164u))',
            'eax = MEM32(ebx + 0x34);':'eax = MEM32(_character_map+4);',
            'edi = ebx + 0x30;':'edi = _character_map;',
            'ecx = edi + esi * 4 + 0x168;':'ecx = edi + esi*4 + (_character_expanded?0x141cu:0x168u);',
        }.items():body=exact(body,before,after)
        return body.replace('{\n','{\n'
            '    const uint32_t _character_map=xml1_character_talent_map_resolve(ecx+0x30u);\n'
            '    const int _character_expanded=xml1_character_talent_map_contains(_character_map);\n',1)
    if address == 0x49280:
        for before,after in {
            'esi = edi + 0x30;':'esi = _character_map;',
            'loc_000492B2: ;':'loc_000492B2: ;\n'
                '    _temporary_original=esp+0x1cu;\n'
                '    _temporary=xml1_character_talent_map_resolve(_temporary_original);',
            'MEM32(esp + 0x1C) = 0x3CAD98;':'MEM32(_temporary) = 0x3CAD98;',
            'MEM32(ecx + 0x158) = ebx;':'MEM32(ecx+(_character_expanded?0x140cu:0x158u)) = ebx;',
            'MEM32(ecx + 0x154) = ebx;':'memset((void*)XBOX_PTR(ecx+(_character_expanded?0x13ecu:0x154u)),0,_character_expanded?32u:4u);',
            'ecx = esi + 0x168;':'ecx = esi+(_character_expanded?0x141cu:0x168u);',
            'loc_0004930B: ;':'loc_0004930B: ;\n'
                '    if (MEM8(esp+0x12u)>(_character_expanded?254u:16u)) '
                '{ fputs("Invalid saved talent count\\n",stderr); abort(); }',
            'ecx = MEM32(esp + 0x20);':'ecx = MEM32(_temporary+4);',
            'eax = MEM32(esp + edx + 0x2C);':'eax = MEM32(_temporary+edx+0x10);',
            'ecx = esp + ecx + 0x34;':'ecx = _temporary+ecx+0x18;',
            'loc_00049461: ;':'loc_00049461: ;\n'
                '    if (_character_expanded) xml1_character_talent_map_retire(_temporary_original);',
        }.items():body=exact(body,before,after)
        first,rest=body.split('loc_000492B2: ;',1)
        rest=exact(rest,'ecx = esp + 0x20;','ecx = _temporary;',2)
        body=first+'loc_000492B2: ;'+rest
        return body.replace('{\n','{\n'
            '    uint32_t _temporary=0,_temporary_original=0;\n'
            '    const uint32_t _character_map=xml1_character_talent_map_resolve(ecx+0x30u);\n'
            '    const int _character_expanded=xml1_character_talent_map_contains(_character_map);\n',1)
    if address in (0x171bb0, 0xea8e0):
        return body # Native iterators use unchanged sixteen-byte tree nodes.
    if address == 0x48c60:
        body=exact(body,'eax = MEM32(ecx + 0x34);','eax = MEM32(_character_map+4);')
        body=exact(body,'esi = ecx + 0x30;','esi = _character_map;')
        body=exact(body,'MEM32(ecx + 0x158) = eax;',
                   'MEM32(ecx + (_character_expanded?0x140cu:0x158u)) = eax;')
        body=exact(body,'MEM32(ecx + 0x154) = eax;',
                   'memset((void*)XBOX_PTR(ecx+(_character_expanded?0x13ecu:0x154u)),0,_character_expanded?32u:4u);')
        body=exact(body,'ecx = esi + 0x168;',
                   'ecx = esi + (_character_expanded?0x141cu:0x168u);')
        return body.replace('{\n','{\n'
            '    const uint32_t _character_map=xml1_character_talent_map_resolve(ecx+0x30u);\n'
            '    const int _character_expanded=xml1_character_talent_map_contains(_character_map);\n',1)
    if address == 0x48f90:
        # All callers are destruction: scalar-deleting destructor 49020,
        # actor teardown B2DC0, AF160 stack temporary, and unwind cleanups.
        # Reset alone uses 48C60, which retains ownership for subsequent use.
        body=exact(body,'ecx = esi + 0x198;',
                   'ecx = _character_map + (_character_expanded?0x141cu:0x168u);')
        body=exact(body,'loc_00049003: ;','loc_00049003: ;\n'
                   '    if (_character_expanded) xml1_character_talent_map_retire(_character_original);')
        return body.replace('{\n','{\n'
            '    const uint32_t _character_original=ecx+0x30u;\n'
            '    const uint32_t _character_map=xml1_character_talent_map_resolve(_character_original);\n'
            '    const int _character_expanded=xml1_character_talent_map_contains(_character_map);\n',1)
    if address == 0x490f0:
        body=exact(body,'esi = ebp + 0x30;','esi = _character_map;')
        body=exact(body,'loc_00049132: ;','loc_00049132: ;\n'
                   '    _temporary_original=esp+0x10u;\n'
                   '    _temporary=xml1_character_talent_map_resolve(_temporary_original);')
        changes={
            'MEM32(esp + 0x10) = 0x3CAD98;':'MEM32(_temporary) = 0x3CAD98;',
            'eax = MEM32(ebx + 0x34);':'eax = MEM32(_source_map+4);',
            'ecx = MEM32(ebx + 0x38);':'ecx = MEM32(_source_map+8);',
            'edx = ebx + 0x3C;':'edx = _source_map+12;',
            'eax = ebx + 0x198;':'eax = _source_map+_character_values;',
            'ecx = esi + 0x168;':'ecx = esi+_character_values;',
            'ecx = MEM32(esp + 0x14);':'ecx = MEM32(_temporary+4);',
            'eax = MEM32(esp + edx + 0x20);':'eax = MEM32(_temporary+edx+0x10);',
            'ecx = esp + ecx + 0x28;':'ecx = _temporary+ecx+0x18;',
        }
        for before,after in changes.items():body=exact(body,before,after)
        # Keep the first constructor's inline stack identity, and only redirect
        # the two later iterator calls once the temporary owner exists.
        first,rest=body.split('loc_00049132: ;',1)
        rest=exact(rest,'ecx = esp + 0x14;','ecx = _temporary;',2)
        body=first+'loc_00049132: ;'+rest
        body=exact(body,'loc_00049257: ;','loc_00049257: ;\n'
                   '    if (_character_expanded) xml1_character_talent_map_retire(_temporary_original);')
        return body.replace('{\n','{\n'
            '    uint32_t _temporary=0,_temporary_original=0;\n'
            '    const uint32_t _character_map=xml1_character_talent_map_resolve(ecx+0x30u);\n'
            '    const uint32_t _source_map=xml1_character_talent_map_resolve(MEM32(esp+4)+0x30u);\n'
            '    const int _character_expanded=xml1_character_talent_map_contains(_character_map);\n'
            '    const uint32_t _character_values=_character_expanded?0x141cu:0x168u;\n'
            '    if (_character_expanded!=xml1_character_talent_map_contains(_source_map)) '
            '{ fputs("Mixed character stats copy\\n",stderr); abort(); }\n',1)
    if address == 0x48ee0:
        # Native temporary-map cleanup clears constructed values after its
        # caller has released references. Retire that exact embedded owner
        # only after the native callback returns (it consumes the guest ret).
        before='    ecx = ecx + 0x168;'
        tail='    g_seh_ebp = ebp; sub_000476E0(); return; /* tail jmp 0x000476E0 */'
        assert body.count(before)==body.count(tail)==1
        body=body.replace(before,
            '    ecx = _character_map + (_character_expanded ? 0x141cu : 0x168u);')
        body=body.replace(tail,
            '    g_seh_ebp = ebp; sub_000476E0();\n'
            '    if (_character_expanded) xml1_character_talent_map_retire(_character_original);\n'
            '    return; /* native tail call consumed the guest return address */')
        return body.replace('{\n','{\n'
            '    const uint32_t _character_original=ecx;\n'
            '    const uint32_t _character_map=xml1_character_talent_map_resolve(ecx);\n'
            '    const int _character_expanded=xml1_character_talent_map_contains(_character_map);\n',1)
    if address == 0xb3be0:
        # Tree search is layout independent: nodes remain sixteen bytes.
        return body
    if address in RANK_ACCESSORS:
        if 'XML1 SIX BIT TALENT RECORD' not in body:
            raise ValueError('Rank-record guard must run before map migration')
        replacements = {
            'eax = MEM32(ecx + 0x34);': 'eax = MEM32(_character_map + 4);',
            'esi = ecx + 0x30;': 'esi = _character_map;',
            'esi + eax * 4 + 0x168': 'esi + eax * 4 + _character_values',
        }
        for before, after in replacements.items():
            if body.count(before) != 1:
                raise ValueError(f'{address:08X}: expected one {before}')
            body = body.replace(before, after)
        # Trace keeps the original character identity, never an external map
        # interpreted as a CharacterState pointer.
        body = body.replace('xml1_raven_trace_rank(esi - 0x30,',
                            'xml1_raven_trace_rank(_character_original,')
        prefix = ('    const uint32_t _character_original=ecx;\n'
                  '    const uint32_t _character_map=xml1_character_talent_map_resolve(ecx+0x30u);\n'
                  '    const uint32_t _character_values=xml1_character_talent_map_contains(_character_map)?0x141cu:0x168u;\n')
        return body.replace('{\n','{\n'+prefix,1)
    if address == 0x476a0:
        if 'XML1 SIX BIT TALENT RECORD' not in body:
            raise ValueError('Rank-record guard must run before map migration')
        return body
    if address in (0x476e0, 0x478b0):
        # The same literal 0x10 also occurs in the bit-scan algorithm. Change
        # only its capacity comparisons, never the sixteen-bit scan step.
        body = body.replace('(uint32_t)(0x10) & 0xFFFFFFFFu',
            '(uint32_t)(_character_expanded ? 254u : 16u) & 0xFFFFFFFFu')
        body = body.replace('+ 0x40)', '+ (_character_expanded ? 1016u : 64u))')
        body = body.replace('+ 0x40;', '+ (_character_expanded ? 1016u : 64u);')
        if address == 0x476e0:
            assert body.count('    MEM32(esi) = 0;') == 1
            body = body.replace('    MEM32(esi) = 0;',
                '    memset((void*)XBOX_PTR(esi),0,_character_expanded ? 32u : 4u);')
        else:
            mark = 'loc_000479A5: ;\n'
            assert body.count(mark) == 1
            body = body.replace(mark, mark+
                '    if (_character_expanded) memcpy((void*)XBOX_PTR(ebx+1016u),(const void*)XBOX_PTR(edi+1016u),32u);\n')
        prefix='    const int _character_expanded=xml1_character_talent_map_contains(ecx);\n'
        if address == 0x478b0:
            prefix += ('    if (_character_expanded != xml1_character_talent_map_contains(MEM32(esp+4))) '
                       '{ fputs("Mixed character rank-array copy\\n",stderr); abort(); }\n')
        return body.replace('{\n','{\n'+prefix,1)
    mapping = {OLD['pool'][k]: NEW['pool'][k] for k in OLD['pool'] if k != 'size'}
    mapping.update({0x10: NEW['capacity'], 0xf: NEW['capacity'] - 1})
    if address in (0x48c00, 0x49040):
        mapping.update({OLD['values']: NEW['values'], OLD['constructed']: NEW['constructed']})
    if address == 0x49040:
        mapping.update({0x41: NEW['pool']['queue']//4, 0x11: NEW['capacity']+1,
                        0x44: 4*(NEW['capacity']+1), 0x48: 4*(NEW['capacity']+2),
                        0x4c: 4*(NEW['capacity']+3), 0x40: 4*NEW['capacity']})
        copy='    MEM32(edx + 0x154) = ecx;'
        assert body.count(copy)==1
        body=body.replace(copy,
            '    if (_character_expanded) memcpy((void*)XBOX_PTR(edx+0x%X),(const void*)XBOX_PTR(eax+0x%X),%u);\n'
            '    else MEM32(edx+0x154)=ecx;' % (NEW['pool']['bitmap'],NEW['pool']['bitmap'],NEW['words']))
    if address == 0x48090:
        # This native copy splits the node array, free queue, queue counters,
        # one-word bitmap and count. Expand copy spans AND all bitmap words.
        mapping.update({0x41: NEW['pool']['queue'] // 4, 0x11: NEW['capacity'] + 1,
                        0x44: 4 * (NEW['capacity'] + 1),
                        0x48: 4 * (NEW['capacity'] + 2),
                        0x4c: 4 * (NEW['capacity'] + 3)})
        first = '    ecx = MEM32(ebp + 0x154);'
        write = '    MEM32(eax + 0x154) = ecx;'
        assert body.count(first) == body.count(write) == 1
        body = body.replace(first, '    /* Bitmap copied after register restoration below. */')
        body = body.replace(write,
            '    if (_character_expanded) memcpy((void*)XBOX_PTR(eax + 0x%X), (const void*)XBOX_PTR(ebp + 0x%X), %u);\n'
            '    else MEM32(eax + 0x154) = MEM32(ebp + 0x154);' %
            (NEW['pool']['bitmap'], NEW['pool']['bitmap'], NEW['words']))
    def replace(match):
        value = int(match[0], 16)
        if value not in mapping:
            return match[0]
        return f'(_character_expanded ? 0x{mapping[value]:X}u : {match[0]}u)'
    # Do not rewrite original disassembly comments or the already-expanded
    # bitmap copy statement. The source remains useful for instruction audits.
    lines = []
    for line in body.splitlines():
        if 'memcpy((void*)XBOX_PTR' in line:
            lines.append(line)
            continue
        pieces = re.split(r'(/\*.*?\*/)', line)
        lines.append(''.join(p if p.startswith('/*') else re.sub(r'0x[0-9A-F]+\b', replace, p) for p in pieces))
    body = '\n'.join(lines)
    prefix=''
    if address in (0x48c00, 0x49040):
        if address==0x49040:
            prefix+='    MEM32(esp+4)=xml1_character_talent_map_resolve(MEM32(esp+4));\n'
            prefix+='    if (xml1_character_talent_map_contains(MEM32(esp+4))) ecx=xml1_character_talent_map_create(ecx);\n'
        else:
            prefix+='    ecx=xml1_character_talent_map_create(ecx);\n'
    prefix += '    const int _character_expanded=xml1_character_talent_map_contains(ecx);\n'
    if address == 0x48090:
        prefix += ('    if (_character_expanded != xml1_character_talent_map_contains(MEM32(esp+4))) '
                   '{ fputs("Mixed character-map pool copy\\n",stderr); abort(); }\n')
    return body.replace('{\n', '{\n' + prefix, 1)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--fixture-output', type=Path)
    parser.add_argument('--apply', action='store_true')
    parser.add_argument('--candidate-dir', type=Path,
        help='Write whole candidate source files for isolated compilation')
    parser.add_argument('--generated-dir',type=Path,default=ROOT/'src/recomp/gen')
    args = parser.parse_args()
    methods = {}
    candidates = {}
    index=RecompSources(args.generated_dir)
    for path in index.paths():
        source=index.canonical_read(path)
        candidate=source
        for match in re.finditer(r'void sub_([0-9A-F]{8})\(void\)\n\{.*?\n\}', source, re.S):
            address = int(match[1], 16)
            if address in METHODS | EXTERNAL_METHODS:
                methods[address] = migrate(address, match[0])
                candidate=exact(candidate,match[0],methods[address])
        if candidate!=source:
            if '#include "engine/progression/character_talent_map_guest.h"' not in candidate:
                candidate=exact(candidate,'#include "recomp_funcs.h"',
                    '#include "recomp_funcs.h"\n#include "engine/progression/character_talent_map_guest.h"')
            candidates[path.relative_to(index.root).as_posix()]=index.restore_names(candidate)
    if set(methods) != METHODS | EXTERNAL_METHODS:
        raise ValueError('Missing native character-map pool method')
    if args.fixture_output:
        args.fixture_output.parent.mkdir(parents=True, exist_ok=True)
        args.fixture_output.write_text(''.join(f'void sub_{a:08X}(void);\n' for a in sorted(METHODS))+
                                       '\n'.join(methods[a] for a in sorted(METHODS)))
    if args.apply:
        for name,source in candidates.items():
            (index.root/name).write_text(source)
    if args.candidate_dir:
        args.candidate_dir.mkdir(parents=True,exist_ok=True)
        for name,source in candidates.items():
            path=args.candidate_dir/name
            path.parent.mkdir(parents=True,exist_ok=True)
            if not path.exists() or path.read_text()!=source:path.write_text(source)
        (args.candidate_dir/'manifest.json').write_text(json.dumps({
            'methods':[f'{a:08X}' for a in sorted(methods)],'files':sorted(candidates)},indent=2))
    print(f'Audited {len(methods)} character-map methods; {len(candidates)} files changed; apply={args.apply}.')


if __name__ == '__main__':
    main()
