"""Read-only XML1/XML2 XBE evidence for per-recipient area-hit records."""
from pathlib import Path
import argparse
import hashlib
import struct
from capstone import Cs, CS_ARCH_X86, CS_MODE_32


def code(path, start, end):
    data = path.read_bytes()
    if data[:4] != b"XBEH":
        raise ValueError(f"Not an XBE: {path}")
    base = struct.unpack_from("<I", data, 0x104)[0]
    count, table = struct.unpack_from("<II", data, 0x11C)
    for index in range(count):
        _, va, _, raw, size, _ = struct.unpack_from(
            "<6I", data, table - base + index * 56
        )
        if va <= start and end <= va + size:
            begin = raw + start - va
            return data[begin:begin + end - start], hashlib.sha256(data).hexdigest()
    raise ValueError(f"Code range {start:08X}..{end:08X} missing from {path}")


def listing(path, start, end):
    raw, digest = code(path, start, end)
    return list(Cs(CS_ARCH_X86, CS_MODE_32).disasm(raw, start)), digest


def require(instructions, address, mnemonic, operand):
    found = next((item for item in instructions if item.address == address), None)
    if not found or found.mnemonic != mnemonic or found.op_str != operand:
        actual = None if found is None else (found.mnemonic, found.op_str)
        raise AssertionError(f"{address:08X}: expected {mnemonic} {operand}, got {actual}")


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--xml1", type=Path, default=Path("XBOXgame/default.xbe"))
    parser.add_argument("--xml2", type=Path,
                        default=Path(r"Z:\Programming\!archived\X-Men Legends II\default.xbe"))
    args = parser.parse_args()
    one, hash_one = listing(args.xml1, 0x5BCDF, 0x5BD21)
    two, hash_two = listing(args.xml2, 0x5E6CE, 0x5E73D)
    one_recipient, _ = listing(args.xml1, 0x5C666, 0x5C675)
    two_recipient, _ = listing(args.xml2, 0x61C96, 0x61CA8)
    require(one, 0x5BD16, "push", "esi")
    require(one, 0x5BD1E, "call", "dword ptr [edx + 0x50]")
    require(two, 0x5E6D6, "lea", "ecx, [esp + 0x74]")
    require(two, 0x5E6DA, "call", "0x438a0")
    require(two, 0x5E737, "push", "eax")
    require(two, 0x5E73A, "call", "dword ptr [edx + 0x64]")
    require(one_recipient, 0x5C66F, "mov", "word ptr [esi + 8], 0")
    require(two_recipient, 0x61C9F, "mov", "dword ptr [esi + 4], 0")
    print(f"XML1 {hash_one}: shared record ESI reaches recipient; structural branch zeros record+8")
    print(f"XML2 {hash_two}: stack+74 copy reaches recipient; structural branch zeros only that copy+4")


if __name__ == "__main__":
    main()
