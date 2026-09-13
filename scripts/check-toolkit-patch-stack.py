"""Check the complete overlapping patch stack without modifying the checkout."""
from pathlib import Path
import shutil
import subprocess
import sys
import tempfile

root = Path(__file__).resolve().parents[1]
patches = [root / 'patches' / name for name in sys.argv[1:]]
with tempfile.TemporaryDirectory(prefix='xml1-patches-') as scratch:
    target = Path(scratch)
    subprocess.run(['git', 'init', '-q', str(target)], check=True)
    for patch in patches:
        for line in patch.read_text(encoding='utf-8').splitlines():
            if line.startswith('+++ b/'):
                rel = line[6:].split('\t')[0]
                source = root / 'external/xboxrecomp' / rel
                if source.exists():
                    dest = target / rel
                    dest.parent.mkdir(parents=True, exist_ok=True)
                    shutil.copyfile(source, dest)
    for patch in reversed(patches):
        result = subprocess.run(['git', '-C', str(target), 'apply', '--reverse', str(patch)], capture_output=True)
        if result.returncode:
            sys.exit(1)
print('Complete toolkit patch stack already applied (verified in reverse order).')
