"""Write build/adpcm-fixture.bin for dsound-mixer-test from the disc's own banks.

The expected samples come from zsnd-reference.py's decoder, which matches
ffmpeg's adpcm_ima_xbox sample for sample. Usage:
  make-adpcm-fixture.py <sounds/zsds directory> [out]
"""
import struct, sys
from pathlib import Path

root = Path(sys.argv[1])
out = Path(sys.argv[2] if len(sys.argv) > 2 else "build/adpcm-fixture.bin")
# Reuse the reference definitions without running its command line.
source = Path(__file__).with_name("zsnd-reference.py").read_text(encoding="utf-8")
namespace = {"__name__": "zsnd_reference_lib"}
exec(source.split("p=argparse.ArgumentParser")[0], namespace)
Bank, decode = namespace["Bank"], namespace["decode_xbadpcm"]

records = []
for name in ("menus/menu_flip", "menus/menu_accept", "music/menu_c"):
    for bank in namespace["banks"](root):
        idx = bank.index_of(name)
        if idx is None or idx >= len(bank.sound_sample):
            continue
        file_index, flags, _ = bank.samples[bank.sound_sample[idx]]
        off, size, _, _ = bank.files[file_index]
        channels = 2 if flags & 2 else 1
        blocks = min(size // (36 * channels), 400)
        data = bank.d[off:off + blocks * 36 * channels]
        pcm = decode(data, channels)
        frames = b"".join(struct.pack("<" + "h" * channels, *(int(c[i]) for c in pcm)) for i in range(blocks * 64))
        records.append(struct.pack("<II", channels, blocks) + data + frames)
        print(f"{name}: {channels} channel(s), {blocks} blocks from {bank.path.name}")
        break
if not records:
    raise SystemExit("no reference sounds found")
out.parent.mkdir(parents=True, exist_ok=True)
out.write_bytes(b"".join(records))
