"""Observe the verified XDK viewport constant outputs, without changing guest state."""
from pathlib import Path
from recomp_source import RecompSources, find_function
index=RecompSources(Path(__file__).resolve().parents[1]/'src/recomp/gen')
p=index.path(0x35D990)
s=p.read_text()
match=find_function(s,0x35D990)
start,end=match.span()
part=s[start:end]
old='    esp = esp + 0x10;\n    esp += 12; return; /* ret 8 */'
new='    if(MEM32(esp + 0x10)==0x0035E4F8u)xml1_graphics_vertex_viewport(MEM32(esp + 0x14), MEM32(esp + 0x18));\n'+old
if new not in part:
 if part.count(old)!=1:raise SystemExit('Native viewport return changed')
 part=part.replace(old,new)
 s=s[:start]+part+s[end:]
declaration='void xml1_graphics_vertex_viewport(uint32_t offset, uint32_t scale);\n'
if declaration not in s:
 match=find_function(s,0x35D990)
 s=s[:match.start()]+declaration+s[match.start():]
if s!=p.read_text():p.write_text(s)
