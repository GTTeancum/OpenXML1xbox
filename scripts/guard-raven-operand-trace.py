"""Install opt-in, read-only native operand/actor diagnostics after generation."""
from pathlib import Path
from recomp_source import RecompSources, find_function
root=Path(__file__).resolve().parents[1]
hooks={'event':{
    '000D2903':'xml1_raven_trace_projectile(esi, MEM32(edi), eax);',
    '000CDC10':'xml1_raven_trace_parse(ecx, MEM32(esp + 4), MEM32(esp + 8));',
    '000CDE90':'xml1_raven_trace_apply(ecx, MEM32(esp + 4), 0);',
    '000CFDC0':'xml1_raven_trace_apply(ecx, MEM32(esp + 4), 1);',
    '000CFCA9':'xml1_raven_trace_copy(esi, eax, 0);',
    '000CFCE3':'xml1_raven_trace_copy(esi, eax, 1);',
    '000CF610':'xml1_raven_trace_lifetime(ecx, 0);',
    '000CFBF0':'xml1_raven_trace_lifetime(ecx, 1);',
    '000CEDD0':'xml1_raven_trace_lifetime(ecx, 2);',
    '000CFE50':'xml1_raven_trace_lifetime(ecx, 3);',
    '000CF3DF':'xml1_raven_trace_damage(0, edi, ebp, esi);',
    '000CFE33':'xml1_raven_trace_damage(1, edi, esi, MEM32(esp + 0x10));',
},'attack':{
    '00059DF8':'xml1_raven_trace_blast_area_candidate(MEM32(esp + 0x6C), eax, esp + 0x70);',
    '0005A03C':'xml1_raven_trace_blast_area_call(eax, edi, MEM32(esp + 0x20));',
    '0005C690':'xml1_raven_trace_hit_gate(ebp, esi);',
    '0005AA10':'xml1_raven_trace_damage(2, 0, MEM32(esp + 4), MEM32(esp + 8));',
    '0005BA90':'xml1_raven_trace_damage(3, 0, MEM32(esp + 4), MEM32(esp + 8));',
    '0005C990':'xml1_raven_trace_hit(0, ebx, edi, esi, esp + 0x38, MEM32(esp + 0x24));',
    '0005C9A4':'xml1_raven_trace_hit(1, ebx, edi, esi, esp + 0x38, MEM32(esp + 0x24));',
},'actor-rank':{
    '00040DCF':'xml1_raven_trace_rank(esi - 0x30, MEM32(esp + 8), eax);',
    '00040DDC':'xml1_raven_trace_rank(esi - 0x30, MEM32(esp + 8), 0x3FFFFFFFu);',
},'actor-dispatch':{
    '00032E96':'xml1_raven_trace_blast_attack_dispatch(esi, MEM32(esp + 0x34), eax);',
},'hit-delivery':{
    '00093A70':'xml1_raven_trace_blast_delivery(ecx, 0, 2);',
    '00093AD0':'xml1_raven_trace_blast_delivery(MEM32(esp + 4), ecx, 0);',
    '00093AE2':'xml1_raven_trace_blast_delivery(MEM32(esp + 4), ecx, 1);',
    '00093AF4':'xml1_raven_trace_blast_delivery(MEM32(esp + 4), 0, 3);',
    '00093BE0':'xml1_raven_trace_blast_area_result(ecx, MEM32(esp + 4), 0);',
    '00093C32':'xml1_raven_trace_blast_area_result(esi, edi, 1);',
    '00093C39':'xml1_raven_trace_blast_area_result(esi, edi, 2);',
},'attack-gate':{
    '0001C07F':'xml1_raven_trace_blast_attack_gate(esi, eax);',
},'prototype':{
    '000ECFA6':'xml1_raven_trace_prototype_slot(esi, MEM32(esp + 0x28), eax, MEM32(esp + 0x24));',
    '000ECFD0':'xml1_raven_trace_prototype_map(esi, MEM32(esp + 0x28), esp + 4, MEM32(esp + 0x24), 0);',
    # After E4DA0 resolves a successful manager lookup, ECF70 still has its
    # 20h locals and saved ESI: original return/name are at +24/+28.
    '000ECFC9':'xml1_raven_trace_prototype(esi, MEM32(esp + 0x28), eax, MEM32(esp + 0x24));',
},'talent-name':{
    '000B4DCD':'xml1_raven_trace_talent_name(esi - 4, MEM32(esp + 0x28), MEM8(esi + eax + 0x1C58));',
}}
# Validate all boundaries before writing any file. Regeneration failures
# must not leave only part of the diagnostic installed.
index=RecompSources(root/'src/recomp/gen')
pending={}
# D0460 contains a merged blast tail also emitted at other entry points.
# Resolve the owning function explicitly, never an ambiguous instruction label.
path=index.path(0xD0460)
source=path.read_text()
match=find_function(source,0xD0460)
body=match[0]
blast_hooks={
    '000D0521':'xml1_raven_trace_blast(0, ebp, MEM32(edi), 0, 0, 0);',
    '000D05F6':'xml1_raven_trace_blast(1, ebp, MEM32(edi), ebx, 0, 0);',
    '000D0651':'xml1_raven_trace_blast(2, ebp, MEM32(edi), ebx, 0, 1);',
    '000D07A4':'xml1_raven_trace_blast(3, ebp, MEM32(edi), 0, esp + 0x18, MEM8(esp + 0x13));',
    '000D0A48':'xml1_raven_trace_blast(4, ebp, MEM32(edi), 0, esp + 0x38, MEM8(esp + 0x13));\n    xml1_raven_trace_blast_area_begin(ebp, MEM32(edi));',
    '000D0A75':'xml1_raven_trace_blast_area_end();\n    xml1_raven_trace_blast_attack_begin(ebp, MEM32(edi));',
    '000D0ABE':'xml1_raven_trace_blast_attack_end();',
}
for address,call in blast_hooks.items():
    marker=f'loc_{address}: ;\n'
    if body.count(marker)!=1:raise SystemExit('Blast diagnostic boundary changed: '+address)
    for line in call.splitlines():
        line=line.strip()
        start=body.index(marker)+len(marker)
        end=body.find('\nloc_',start)
        section=body[start:end if end!=-1 else len(body)]
        if '    '+line+'\n' not in section:
            body=body.replace(marker,marker+'    '+line+'\n',1)
source=source[:match.start()]+body+source[match.end():]
include='#include "diagnostics/raven_operand_trace.h"\n'
if include not in source:source=include+source
pending[path]=source
changes={address:call for group in hooks.values() for address,call in group.items()}
for path,entries in index.grouped_labels(changes).items():
    source=pending.get(path,path.read_text())
    for address,call in entries.items():
        marker=f'loc_{address}: ;\n'
        replacement=marker+'    '+call+'\n'
        if source.count(marker)!=1:raise SystemExit('Native operand boundary changed: '+address)
        start=source.index(marker)+len(marker)
        end=source.find('\nloc_',start)
        if '    '+call+'\n' in source[start:end if end!=-1 else len(source)]:continue
        source=source.replace(marker,replacement,1)
    include='#include "diagnostics/raven_operand_trace.h"\n'
    if include not in source:source=include+source
    pending[path]=source
for path,source in pending.items():
    if path.read_text()!=source:path.write_text(source)
print('Installed opt-in Raven operand trace')
