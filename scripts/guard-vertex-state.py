"""Observe the verified XDK viewport constant outputs, without changing guest state."""
from pathlib import Path
p=Path(__file__).resolve().parents[1]/'src/recomp/gen/recomp_0095.c'
s=p.read_text()
start=s.index('void sub_0035D990(void)'); end=s.index('void sub_0035DAC0(void)',start)
part=s[start:end]
old='    esp = esp + 0x10;\n    esp += 12; return; /* ret 8 */'
new='    if(MEM32(esp + 0x10)==0x0035E4F8u)xml1_graphics_vertex_viewport(MEM32(esp + 0x14), MEM32(esp + 0x18));\n'+old
if new not in part:
 if part.count(old)!=1:raise SystemExit('Native viewport return changed')
 part=part.replace(old,new)
 s=s[:start]+part+s[end:]
 s=s.replace('void sub_0035D990(void)','void xml1_graphics_vertex_viewport(uint32_t offset, uint32_t scale);\nvoid sub_0035D990(void)',1)
 p.write_text(s)
