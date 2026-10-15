# 0.9.1b release staging audit

Prepared 2026-10-15 as a GitHub draft, not a published release.

- Rebuilt optimized Release; executable SHA-256: `b07ea647def531a3de51281333d5f398f1c7a17b1512acb91b04a5b797568ee6`.
- Verified the embedded DX8 renderer, GPU preference exports and system-only DLL imports. The standalone EXE needs no adjacent runtime DLLs.
- Downloaded the actual 0.9b ZIP and manifest from GitHub. All 181 file payloads match their manifest; remaining ZIP entries are empty directory records.
- Compared the current player staging with the previous ZIP, September corrected dependency manifest, Bishop staging manifest, and a fresh native extraction plus XMLB conversion. Also compared candidate ISO-resident files directly against the read-only World ISO, excluding byte-identical original movies and audio.
- Included later menu/pause/stash resources, shared talents, character resources and Bishop's native tiers and approved model portrait. Excluded a comments-only mission-script variant: its executable statements match the original.
- Final overlay: 1,772 files, 1,591 additions and seven changed payloads relative to the previous release, zero removed previous file paths. ZIP size 44,783,536 bytes. No saves, user settings, logs, setup markers, original ISO/archive or test fixtures.
- The release builder's archive-plus-overlay roster dependency audit passes without undeclared reliance on local assets. Release roster regression test passes.
- First-run setup using the exact overlay and original assets archive validates 3,986 compiled data files. All 1,772 overlay files survive setup with identical SHA-256 hashes.
- Reconstructed install passes Options/Advanced Options package/model checks in English/French/German, and Bishop's compiled tier/active-power/passive/stock-roster checks.
- Flight ceiling regression passes 72 sustained-ascent scenarios. Prior Storm/Rogue gameplay evidence is recorded in FLIGHT-CEILING-FIX.md; packaged EXE is byte-identical to that tested build.
- ZIP CRC, file inventory and every uncompressed file hash were verified before upload. Release manifest and SHA256SUMS accompany the ZIP.

This is packaging/setup and targeted contract validation, not a new full gameplay or audio acceptance run. HAARP camera issue #16 and cross-machine performance uncertainty are not represented as resolved by this audit.

Private working evidence: `work/release-next/`. Game assets remain excluded from source Git; the reviewed overlay is a release attachment.
