"""Character talent-map layout derived from 48C00/48B40/49040.

The map embeds a byte-keyed tree pool plus four-byte rank records and their
constructed bitmap. This layout does not change CharacterState's other fields.
"""
from talent_registry_layout import tree_pool


def layout(capacity):
    if not 1 <= capacity <= 254:
        raise ValueError('Talent IDs reserve 255; capacity must be 1..254')
    pool = tree_pool(capacity, 16)
    values = 12 + pool['size']
    bitmap = values + 4 * capacity
    words = 4 * ((capacity + 31) // 32)
    return dict(capacity=capacity, pool=pool, values=values,
                constructed=bitmap, words=words, size=bitmap + words)


def verify_retail():
    value = layout(16)
    assert value['pool'] == dict(queue=0x104, head=0x148, tail=0x14c,
        available=0x150, bitmap=0x154, used=0x158, size=0x15c)
    assert (value['values'], value['constructed'], value['size']) == (0x168, 0x1a8, 0x1ac)
    return value


if __name__ == '__main__':
    import json
    verify_retail()
    print(json.dumps(layout(254), indent=2))
