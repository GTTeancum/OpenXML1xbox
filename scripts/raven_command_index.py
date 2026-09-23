"""Raven command records are function/name/return-format/argument-format.

Confirmed at XML1 registration 00099B50 (197 records at 003D0B88), and
XML2 registration 000AEE80 (288 records at 0049A008). The archived scanner
started at the name field and incorrectly used the next record's function.
"""
import re
import struct


def valid_formats(name, result, arguments):
    return (bool(name and (re.fullmatch(r'[A-Za-z_]\w*', name) or name in ('==','!=','<','>','<=','>=')))
            and result in ('n', 'i', 'f', 's', 'w')
            and arguments is not None and re.fullmatch(r'[aifsnwd]*', arguments) is not None)


def commands(xbe):
    def string(va):
        offset = xbe.va_offset(va)
        if offset is None:
            return None
        end = xbe.data.find(b'\0', offset, offset + 160)
        if end < 0:
            return None
        try:
            return xbe.data[offset:end].decode('ascii')
        except UnicodeDecodeError:
            return None

    def code(va):
        return any(s['name'] == '.text' and s['va'] <= va < s['va'] + s['raw_size'] for s in xbe.sections)

    candidates = {}
    for section in xbe.sections:
        if section['name'] not in ('.rdata', '.data'):
            continue
        for offset in range(section['raw'], section['raw'] + section['raw_size'] - 15, 4):
            fn, name_va, ret_va, args_va = struct.unpack_from('<4I', xbe.data, offset)
            if not code(fn):
                continue
            name, result = map(string, (name_va, ret_va))
            args = string(args_va) if args_va else ''
            if not valid_formats(name, result, args):
                continue
            va = xbe.offset_va(offset)
            candidates[va] = dict(name=name, descriptor_va=f'{va:08X}',
                                  name_va=f'{name_va:08X}', return_format=result,
                                  argument_format=args, function_va=f'{fn:08X}')
    selected = []
    for start in sorted(v for v in candidates if v - 16 not in candidates):
        run = []
        address = start
        while address in candidates:
            run.append(dict(candidates[address], table_start_va=f'{start:08X}'))
            address += 16
        if len(run) >= 3:
            selected.extend(run)
    return selected


def correct_archived_rows(rows):
    """Recover preceding function words, leaving missing evidence unresolved.

    The original XBE is needed to fill each table's first function and recover
    any terminal record omitted by the old scanner. Do not invent those values.
    Metadata describing the wrongly associated body is deliberately discarded.
    """
    by_name_field = {int(r['descriptor_va'], 16): r for r in rows}
    result = []
    for row in rows:
        if not valid_formats(row['name'], row['return_format'], row['argument_format']):
            continue
        va = int(row['descriptor_va'], 16)
        previous = by_name_field.get(va - 16)
        result.append(dict(name=row['name'], descriptor_va=f'{va-4:08X}',
                           return_format=row['return_format'], argument_format=row['argument_format'],
                           function_va=previous['function_va'] if previous else None,
                           evidence='preceding word retained by archived scanner' if previous else 'requires original XML2 XBE'))
    return result
