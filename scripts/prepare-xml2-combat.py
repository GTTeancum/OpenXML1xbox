"""Restore a verified false function boundary in recovered XML2 code.

Original 61BC0 continues through 6208D (RET 16). 61FF8 branches to 62006,
61FC6 branches to 62071, and 61FFE TEST supplies 62000 JNE's flags.
61D48 rejects a repeated hit by jumping directly to 62075, preserving AL=0.
Only the build copy is modified; archived/recovered inputs stay unchanged.
"""
import argparse
from pathlib import Path


def prepare(source):
    start = source.index("void sub_00061BC0(void)")
    end = source.index("    #undef fp_push", start)
    continuation = source.index("void sub_00062000(void)", end)
    tail_start = source.index("loc_00062000: ;", continuation)
    tail_end = source.index("    #undef fp_push", tail_start)
    body = source[start:end]
    tail = source[tail_start:tail_end]
    rejection = "g_seh_ebp = ebp; sub_00062075(); return; /* tail jmp 0x00062075 */"
    if body.count(rejection) != 1:
        raise ValueError("Unexpected combat rejection branch")
    body = body.replace(rejection, "goto loc_00062075; /* original repeated-hit rejection: preserve AL=0 */")
    cookie = "    ecx = MEM32(esp + 0x124);"
    if tail.count(cookie) != 1:
        raise ValueError("Unexpected combat cookie epilogue")
    # This jump enters AFTER the normal return-value load at 62071. Sending
    # rejection through 62071 would incorrectly replace its false result.
    tail = tail.replace(cookie, "loc_00062075: ;\n" + cookie)
    for address in ("00062006", "00062071"):
        old = "{ g_seh_ebp = ebp; sub_" + address + "(); return; }"
        if body.count(old) != 1:
            raise ValueError("Unexpected combat branch: " + address)
        body = body.replace(old, "goto loc_" + address + ";")
    fallthrough = "    g_seh_ebp = ebp; sub_00062000(); return; /* fallthrough 0x00062000 */"
    branch = "if (_flags /* jne: not equal / not zero */) goto loc_00062006;"
    if body.count(fallthrough) != 1 or tail.count(branch) != 1:
        raise ValueError("Unexpected combat continuation/flag branch")
    tail = tail.replace(branch, "if (TEST_NZ(_fa, _fb)) goto loc_00062006; /* original 61FFE TEST -> 62000 JNE */")
    body = body.replace(fallthrough,
        "    /* Original 61BC0 has one frame through 6208D. Preserve its local\n"
        "     * frame and TEST flags across the recovered false boundary. */\n" + tail)
    return source[:start] + body + source[end:]


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("source", type=Path)
    parser.add_argument("output", type=Path)
    args = parser.parse_args()
    args.output.write_text(prepare(args.source.read_text()), encoding="utf-8")
