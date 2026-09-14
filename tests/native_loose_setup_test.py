"""Exercise the same native extraction/setup core linked into the game, without GUI."""
from pathlib import Path
import ctypes,subprocess,tempfile,unittest,zipfile
EXE=Path(__file__).resolve().parents[1]/'build/optimized/Release/loose-extract-driver.exe'
class NativeSetupTests(unittest.TestCase):
    def invoke(self,*args,success=True):
        r=subprocess.run([str(EXE),*map(str,args)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0 if success else 1,r.stdout+r.stderr)
        return r
    def test_first_repeat_preserves_edits(self):
        with tempfile.TemporaryDirectory() as t:
            root=Path(t);(root/'z').mkdir()
            archive=root/'z/assetsfb.zip'
            with zipfile.ZipFile(archive,'w',zipfile.ZIP_DEFLATED) as z:z.writestr('data/test.xml','original')
            original=archive.read_bytes()
            self.invoke('--setup',root)
            self.assertEqual((root/'data/test.xml').read_text(),'original')
            self.assertTrue((root/'.xml1-loose-ready').is_file())
            self.assertFalse(list(root.glob('.loose-setup-*')))
            self.assertEqual(archive.read_bytes(),original)
            self.assertFalse((root/'.xml1-loose-setup.lock').exists())
            (root/'data/test.xml').write_text('user mod')
            archive.unlink() # A completed installation must not need the archive.
            self.invoke('--setup',root)
            self.assertEqual((root/'data/test.xml').read_text(),'user mod')
    def test_existing_files_and_failure_cleanup(self):
        with tempfile.TemporaryDirectory() as t:
            root=Path(t);(root/'z').mkdir();(root/'data').mkdir();(root/'data/test.xml').write_text('user mod')
            with zipfile.ZipFile(root/'z/assetsfb.zip','w') as z:z.writestr('data/test.xml','original')
            self.invoke('--setup',root)
            self.assertEqual((root/'data/test.xml').read_text(),'user mod')
        with tempfile.TemporaryDirectory() as t:
            root=Path(t);(root/'z').mkdir()
            with zipfile.ZipFile(root/'z/assetsfb.zip','w') as z:z.writestr('../escape','bad')
            self.invoke('--setup',root,success=False)
            self.assertFalse((root/'.xml1-loose-ready').exists());self.assertFalse(list(root.glob('.loose-setup-*')))
    def test_cancel_and_invalid_zip(self):
        with tempfile.TemporaryDirectory() as t:
            root=Path(t);archive=root/'input.zip'
            with zipfile.ZipFile(archive,'w') as z:z.writestr('data/a','a');z.writestr('data/b','b')
            r=self.invoke(archive,root/'out','--cancel',success=False)
            self.assertIn('cancelled',r.stderr)
            self.assertFalse((root/'out/data/b').exists())
            archive.write_bytes(b'broken')
            self.invoke(archive,root/'bad',success=False)
    def test_concurrent_setup_is_rejected_and_retry_succeeds(self):
        with tempfile.TemporaryDirectory() as t:
            root=Path(t);(root/'z').mkdir()
            with zipfile.ZipFile(root/'z/assetsfb.zip','w') as z:z.writestr('data/a','a')
            kernel=ctypes.WinDLL('kernel32',use_last_error=True)
            kernel.CreateFileW.argtypes=[ctypes.c_wchar_p,ctypes.c_uint32,ctypes.c_uint32,ctypes.c_void_p,ctypes.c_uint32,ctypes.c_uint32,ctypes.c_void_p]
            kernel.CreateFileW.restype=ctypes.c_void_p
            kernel.CloseHandle.argtypes=[ctypes.c_void_p]
            handle=kernel.CreateFileW(str(root/'.xml1-loose-setup.lock'),0xc0000000,0,None,4,0x04000100,None)
            self.assertNotEqual(handle,ctypes.c_void_p(-1).value)
            try:
                result=self.invoke('--setup',root,success=False)
                self.assertIn('Close any other game setup',result.stderr)
                self.assertFalse((root/'.xml1-loose-ready').exists())
                self.assertFalse((root/'data/a').exists())
            finally:kernel.CloseHandle(handle)
            self.invoke('--setup',root)
            self.assertEqual((root/'data/a').read_text(),'a')
if __name__=='__main__':unittest.main()
