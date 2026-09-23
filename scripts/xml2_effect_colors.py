"""Translate imported packed RGB endpoints into XML1 native particle curves.

XML1 uses its own quadratic interpolation; retain the authored start/middle/end
colors and both random endpoints. This does not change alpha or resource paths.
"""


def native_curve(start, middle, end):
    # q(0)=start, q(.5)=middle, q(1)=end, normalized to XML1 RGB units.
    # Verified against original XML2 24C70, including channel extraction
    # through 24BF0 and interpolation between its two random endpoints.
    return ((2*start-4*middle+2*end)/255,
            (-3*start+4*middle-end)/255, start/255)


def translate(root):
    changed = 0
    for node in root.iter():
        attrs = {k.lower(): k for k in node.attrib}
        names = [f'{position}color{endpoint}' for endpoint in (1, 2)
                 for position in ('start', 'mid', 'end')]
        if not any(name in attrs for name in names):
            continue
        # An already authored XML1 curve wins; never replace it on re-import.
        if any(name in attrs for name in ('red', 'green', 'blue')):
            continue
        if not all(name in attrs for name in names):
            raise ValueError('Incomplete packed particle colors')
        packed = [int(node.attrib[attrs[name]], 10) for name in names]
        if any(value < 0 or value > 0xffffffff for value in packed):
            raise ValueError('Packed particle color exceeds uint32')
        for channel, shift in (('red', 0), ('green', 8), ('blue', 16)):
            values = [(value >> shift) & 255 for value in packed]
            coefficients = (*native_curve(*values[:3]), *native_curve(*values[3:]))
            node.set(channel, ' '.join(format(value, '.9g') for value in coefficients))
        for name in names:
            del node.attrib[attrs[name]]
        changed += 1
    return changed
