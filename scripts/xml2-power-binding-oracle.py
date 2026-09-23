"""Read-only evidence for XML2's per-character power-slot dispatch.

Addresses apply to the supplied World XBEs; hashes travel with the evidence.
This does not patch game data or assume that a successful decode proves play.
"""
import argparse
import hashlib
import json
import sys
from pathlib import Path

from capstone import Cs, CS_ARCH_X86, CS_MODE_32

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'work/xml2-integration/recovery/xml2-pc'))
from inspect_xbe import Xbe


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--xml1', default=str(ROOT / 'XBOXgame/default.xbe'))
    parser.add_argument('--xml2', required=True)
    parser.add_argument('--out', required=True)
    args = parser.parse_args()
    decoder = Cs(CS_ARCH_X86, CS_MODE_32)
    result = {}
    ranges = {
        'xml1': [('chain_dispatch', 0xED700, 0xED777)],
        'xml2': [('copy_binding', 0xC75D0, 0xC75EB),
                 ('get_binding', 0xC7AC0, 0xC7AE2),
                 ('set_binding', 0xC7B50, 0xC7B80),
                 ('parse_four_bindings', 0xC97FD, 0xC98AD),
                 ('chain_dispatch', 0x110A10, 0x110AEF)],
    }
    for game, blocks in ranges.items():
        xbe = Xbe(getattr(args, game))
        entry = {'path': str(xbe.path), 'sha256': hashlib.sha256(xbe.data).hexdigest(), 'blocks': {}}
        for name, start, end in blocks:
            offset = xbe.va_offset(start)
            if offset is None:
                raise ValueError(f'{game}: unmapped {start:08X}')
            entry['blocks'][name] = [
                f'{i.address:08X}: {i.mnemonic} {i.op_str}'
                for i in decoder.disasm(xbe.data[offset:offset + end - start], start)
            ]
        result[game] = entry
    destination = Path(args.out)
    destination.parent.mkdir(parents=True, exist_ok=True)
    destination.write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
    print(destination)


if __name__ == '__main__':
    main()
