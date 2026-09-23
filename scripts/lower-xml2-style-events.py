"""Fit imported XML2 power-style events within XML1's 80-slot manager.

Only flat, inherited sound aliases are lowered: a trigger that references an
alias receives the same ce_sound type and default sound directly. All other
shared and style declarations, paths, and PKGBs remain untouched. Refuse an
import when these equivalent lowerings cannot leave one free native slot.
"""
import argparse
import hashlib
import json
from pathlib import Path
import subprocess
import tempfile
import xml.etree.ElementTree as ET


def decode(driver: Path, source: Path, scratch: Path) -> ET.Element:
    subprocess.run([str(driver), "decode", str(source), str(scratch)], check=True)
    return ET.parse(scratch).getroot()


def direct_events(root: ET.Element) -> list[ET.Element]:
    return [child for child in root if child.tag.lower() == "event"]


def lower(root: ET.Element, shared_count: int, maximum: int) -> list[dict]:
    aliases = []
    for event in direct_events(root):
        attrs = event.attrib
        if (set(attrs) == {"inherit", "name", "sound"}
                and attrs["inherit"].lower() == "sound"
                and len(event) == 0 and not (event.text or "").strip()):
            name = attrs["name"]
            refs = [(node, key) for node in root.iter() for key, value in node.attrib.items()
                    if value == name and node is not event]
            if refs and all(node.tag.lower() == "trigger" and key == "name"
                            for node, key in refs):
                aliases.append((event, refs))

    changed = []
    for event, refs in aliases:
        if shared_count + len(direct_events(root)) <= maximum:
            break
        name, cue = event.get("name"), event.get("sound")
        for trigger, _ in refs:
            trigger.set("name", "sound")
            if trigger.get("sound") is None:
                trigger.set("sound", cue)
        root.remove(event)
        changed.append({"alias": name, "cue": cue, "triggers": len(refs)})

    if shared_count + len(direct_events(root)) > maximum:
        raise ValueError("XML1 event manager still exceeds native capacity after safe sound-alias lowering")
    return changed


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--driver", type=Path, required=True)
    parser.add_argument("--shared", type=Path, required=True)
    parser.add_argument("--source", type=Path, required=True)
    parser.add_argument("--target", type=Path, required=True)
    parser.add_argument("--report", type=Path, required=True)
    args = parser.parse_args()
    source, target = args.source.resolve(), args.target.resolve()
    if source == target:
        raise ValueError("Keep the original XML2 source separate from the lowered output")
    with tempfile.TemporaryDirectory(prefix="xml2-style-") as tmp:
        scratch = Path(tmp)
        shared = decode(args.driver.resolve(), args.shared.resolve(), scratch / "shared.xml")
        style = decode(args.driver.resolve(), source, scratch / "style.xml")
        if shared.tag.lower() != "events" or style.tag.lower() != "powerstyle":
            raise ValueError("Expected shared Events and imported PowerStyle resources")
        base = len(direct_events(shared))
        before = len(direct_events(style))
        # The original manager cycles 0x50 (80) slots. The matching private
        # Bishop run proved that exactly 80 entries register tag 101.
        changed = lower(style, base, 80)
        target.parent.mkdir(parents=True, exist_ok=True)
        if changed:
            xml = scratch / "lowered.xml"
            xml.write_bytes(ET.tostring(style, encoding="utf-8"))
            subprocess.run([str(args.driver.resolve()), "compile", str(xml), str(target)], check=True)
            decoded = decode(args.driver.resolve(), target, scratch / "verify.xml")
            if ET.tostring(decoded, encoding="utf-8") != ET.tostring(style, encoding="utf-8"):
                raise RuntimeError("Compiled XMLB did not preserve the lowered style tree")
        else:
            target.write_bytes(source.read_bytes())
        report = {
            "source_sha256": hashlib.sha256(source.read_bytes()).hexdigest(),
            "output_sha256": hashlib.sha256(target.read_bytes()).hexdigest(),
            "shared_events": base,
            "style_events_before": before,
            "style_events_after": len(direct_events(style)),
            "lowered_aliases": changed,
        }
        args.report.parent.mkdir(parents=True, exist_ok=True)
        args.report.write_text(json.dumps(report, indent=2) + "\n")
        print(json.dumps(report))


if __name__ == "__main__":
    main()
