"""Verify that rerunning preparation preserves the prepared source contents."""
import hashlib,pathlib,subprocess,sys
root=pathlib.Path(__file__).resolve().parent.parent
def snapshot():
    files=list((root/'src/recomp/gen').glob('*.c'))+list((root/'src/recomp/gen').glob('*.h'))
    files += [root/'nxdk'/name for name in ['native_imports.inc','imports.inc','kernel-coverage.json','generated-manifest.json','tools/cxbe/Xbe.cpp']]
    return {str(p.relative_to(root)):hashlib.sha256(p.read_bytes()).hexdigest() for p in files}
before=snapshot()
for script in ['generate_graphics.py','prepare.py','generate_kernel.py']:
    subprocess.run([sys.executable,str(root/'nxdk'/script)],cwd=root,check=True)
after=snapshot()
changed=[name for name in sorted(before.keys()|after.keys()) if before.get(name)!=after.get(name)]
if changed:raise SystemExit('Preparation changed already prepared source contents: '+', '.join(changed))
print(f'PASS preparation is content-idempotent across {len(after)} generated/support files')
