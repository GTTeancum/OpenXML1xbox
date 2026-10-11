"""Locate generated guest functions by address, independent of file placement.

The entry label is retained when a function receives a descriptive C name.
Only generated void(void) bodies are indexed; declarations and host helpers
are excluded. Duplicate addresses are errors, never first-match wins.
"""
from pathlib import Path
import re

FUNCTION = re.compile(
    r'^void (?P<name>[A-Za-z_]\w*)\(void\)[ \t]*\n?\{(?:[^\n]*\}|.*?^\})', re.M | re.S)
ENTRY = re.compile(r'^loc_([0-9A-Fa-f]{8}):', re.M)
LEGACY = re.compile(r'sub_([0-9A-Fa-f]{8})$')
TOKENS = re.compile(r'//[^\n]*|/\*.*?\*/|"(?:\\.|[^"\\])*"|\x27(?:\\.|[^\x27\\])*\x27|\b[A-Za-z_]\w*', re.S)


def rename_identifiers(text, names):
    """Rename C identifiers while retaining literal/comment evidence verbatim."""
    return TOKENS.sub(lambda m: names.get(m[0], m[0]), text)


def address_of(match):
    legacy = LEGACY.fullmatch(match['name'])
    entry = ENTRY.search(match[0])
    if legacy:
        address = int(legacy[1], 16)
        if entry and int(entry[1], 16) != address:
            raise ValueError(f'Entry label disagrees with {match["name"]}')
        return address
    return int(entry[1], 16) if entry else None


def find_function(source, address):
    matches = [m for m in FUNCTION.finditer(source) if address_of(m) == address]
    if len(matches) != 1:
        raise ValueError(f'Expected one guest function at {address:08X}, found {len(matches)}')
    return matches[0]


class RecompSources:
    def __init__(self, root):
        self.root = Path(root)
        self.functions = {}
        self.labels = {}
        self.legacy_names = {}
        for path in sorted(self.root.rglob('*.c')):
            for match in FUNCTION.finditer(path.read_text()):
                address = address_of(match)
                if address is None:
                    continue
                if address in self.functions:
                    raise ValueError(f'Duplicate guest address {address:08X}: '
                                     f'{self.functions[address]} and {path}')
                self.functions[address] = path
                if not LEGACY.fullmatch(match['name']):
                    self.legacy_names[match['name']] = f'sub_{address:08X}'
                for label in ENTRY.finditer(match[0]):
                    target = int(label[1], 16)
                    self.labels.setdefault(target, []).append((path, address))

    def path(self, address):
        try:
            return self.functions[address]
        except KeyError:
            raise ValueError(f'Missing generated guest function {address:08X}') from None

    def grouped(self, addresses):
        groups = {}
        for address in addresses:
            groups.setdefault(self.path(address), []).append(address)
        return groups

    def label_path(self, address):
        """Resolve an instruction boundary, which need not be a function entry."""
        try:
            owners = self.labels[address]
            if len(owners) != 1:
                raise ValueError(f'Ambiguous guest label {address:08X}: {owners}')
            return owners[0][0]
        except KeyError:
            raise ValueError(f'Missing guest label {address:08X}') from None

    def grouped_labels(self, changes):
        """Group address-keyed changes by current owning file, retaining payloads."""
        groups = {}
        for address, change in changes.items():
            value = int(address, 16) if isinstance(address, str) else address
            groups.setdefault(self.label_path(value), {})[address] = change
        return groups

    def paths(self):
        return sorted(set(self.functions.values()))

    def canonical_read(self, path):
        """Give instruction guards a stable address-spelled view, in memory only."""
        return rename_identifiers(Path(path).read_text(), self.legacy_names)

    def restore_names(self, text):
        """Preserve descriptive names when a canonical guard result is written."""
        return rename_identifiers(text, {old:new for new,old in self.legacy_names.items()})
