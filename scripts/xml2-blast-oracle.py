"""Record the original XML1/XML2 blast event parser and activation paths.

This is read-only source-XBE evidence for imported Bishop Bombardment; it
does not rewrite game data or assert that the observed power works in play.
"""
import argparse
import hashlib
import json
import struct
import sys
from pathlib import Path

from capstone import Cs, CS_ARCH_X86, CS_MODE_32

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "work/xml2-integration/recovery/xml2-pc"))
from inspect_xbe import Xbe


def source_block(path, string_va, xref, parser_start, parser_end,
                 activate_start, activate_end):
    xbe = Xbe(str(path))
    data = xbe.data
    decoded = Cs(CS_ARCH_X86, CS_MODE_32)
    string_offset = xbe.va_offset(string_va)
    assert string_offset is not None
    assert data[string_offset:string_offset + 12].lower() == b"enemynumber\0"
    xref_offset = xbe.va_offset(xref)
    assert xref_offset is not None
    assert data[xref_offset:xref_offset + 4] == struct.pack("<I", string_va)

    def instructions(start, end):
        offset = xbe.va_offset(start)
        assert offset is not None and end > start
        return [f"{item.address:08X}: {item.mnemonic} {item.op_str}"
                for item in decoded.disasm(data[offset:offset + end - start], start)]

    return {"path": str(path), "sha256": hashlib.sha256(data).hexdigest(),
            "enemynumber_string": f"{string_va:08X}",
            "string_xref": f"{xref:08X}",
            "parser": instructions(parser_start, parser_end),
            "activation": instructions(activate_start, activate_end)}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xml1", type=Path, default=ROOT / "XBOXgame/default.xbe")
    parser.add_argument("--xml2", type=Path, required=True)
    parser.add_argument("--out", type=Path, required=True)
    args = parser.parse_args()
    report = {
        "scope": "original event parser and blast activation; gameplay remains separately required",
        "xml1": source_block(args.xml1, 0x3D5D28, 0xD042A,
                             0xD0429, 0xD0455, 0xD0460, 0xD06AC),
        "xml2": source_block(args.xml2, 0x4A03E4, 0xEC9E3,
                             0xEC9E2, 0xECA23, 0xECA40, 0xECBB2),
    }
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text(json.dumps(report, indent=2) + "\n", encoding="utf-8")
    print(args.out)


if __name__ == "__main__":
    main()
