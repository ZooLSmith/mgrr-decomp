"""Assemble cleaned part files (<file>.cpp.partN, written by the cleanup workflow) into
<file>.cpp: the first part's header and #includes, then every part's functions in order.
Checks that each raw function's address line appears exactly once and in raw order before
replacing the raw file; leaves everything untouched on mismatch.

Usage: python tools/assemble_parts.py src/behavior/Behavior.cpp [...]    (or --all)
"""
import glob
import os
import re
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
HEAD = re.compile(r"^// ([0-9A-F]{8})  ", re.M)


def raw_text(rel):
    """Raw baseline from git HEAD (falls back to the working file)."""
    r = subprocess.run(["git", "-C", ROOT, "show", "HEAD:" + rel], capture_output=True)
    return r.stdout.decode("utf-8") if r.returncode == 0 else open(os.path.join(ROOT, rel), encoding="utf-8").read()


def blocks(text):
    """Split preamble text into blank-line separated blocks."""
    return [b.strip("\n") for b in re.split(r"\n\s*\n", text) if b.strip()]


def assemble(rel):
    parts = sorted(glob.glob(os.path.join(ROOT, rel) + ".part*"), key=lambda p: int(p.rsplit("part", 1)[1]))
    if not parts:
        return "no parts"
    texts = [open(p, encoding="utf-8").read() for p in parts]
    first = texts[0]
    m = HEAD.search(first)
    preamble = first[:m.start()] if m else first
    preamble = re.sub(r"^// (\S+) \(part 1/\d+\)", r"// \1", preamble, count=1, flags=re.M)
    body = []
    have = set(preamble.splitlines())
    for k, t in enumerate(texts):
        m = HEAD.search(t)
        if not m:
            continue
        if k > 0:
            # later parts may define helpers (typedefs, inline accessors) before their first
            # function; keep them. Only the part banner and repeated #includes are dropped --
            # parts that share helpers must use distinct names
            extra = []
            for ln in t[:m.start()].splitlines():
                if re.match(r"^// \S+ \(part \d+/\d+\)", ln) or (ln.startswith("#include") and ln in have):
                    continue
                extra.append(ln)
            text = "\n".join(extra).strip("\n")
            if text.strip():
                body.append(text + "\n")
        body.append(t[m.start():].rstrip() + "\n")
    out = preamble.rstrip() + "\n\n" + "\n".join(body)

    want = HEAD.findall(raw_text(rel))
    got = HEAD.findall(out)
    if want != got:
        missing = [a for a in want if a not in got]
        extra = [a for a in got if a not in want]
        return "MISMATCH missing=%s extra=%s order_ok=%s" % (missing[:5], extra[:5], sorted(want) == sorted(got))
    with open(os.path.join(ROOT, rel), "w", encoding="utf-8") as f:
        f.write(out)
    # keep parts until the assembled file compiles: move them to logs/parts_backup
    bk = os.path.join(ROOT, "logs", "parts_backup", os.path.dirname(rel))
    os.makedirs(bk, exist_ok=True)
    for p in parts:
        os.replace(p, os.path.join(bk, os.path.basename(p)))
    return "ok %d functions" % len(got)


def main():
    files = sys.argv[1:]
    if files == ["--all"]:
        files = sorted({os.path.relpath(p.rsplit(".part", 1)[0], ROOT).replace("\\", "/")
                        for p in glob.glob(os.path.join(ROOT, "src", "**", "*.cpp.part*"), recursive=True)})
    for rel in files:
        print(rel, assemble(rel))


if __name__ == "__main__":
    main()
