"""Build the work list for the cleanup workflow: files under the given src/ directories, each
split into chunks of whole functions (~CHUNK bytes of raw code). Prints JSON to stdout.

Usage: python tools/plan_cleanup.py src/system src/hw ... > logs/cleanup_items.json
"""
import json
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
CHUNK = 60_000
HEAD = re.compile(r"^// ([0-9A-F]{8})  (\S+)", re.M)


def chunks_of(path):
    text = open(os.path.join(ROOT, path), encoding="utf-8").read()
    starts = [m.start() for m in HEAD.finditer(text)]
    heads = [m.group(1) for m in HEAD.finditer(text)]
    out, cur_start, cur_bytes = [], 0, 0
    for k, s in enumerate(starts):
        e = starts[k + 1] if k + 1 < len(starts) else len(text)
        if cur_bytes and cur_bytes + (e - s) > CHUNK:
            out.append((heads[cur_start], heads[k - 1], k - cur_start))
            cur_start, cur_bytes = k, 0
        cur_bytes += e - s
    if heads:
        out.append((heads[cur_start], heads[-1], len(heads) - cur_start))
    return out, len(text)


def main():
    items = []
    for d in sys.argv[1:]:
        if d.endswith(".cpp"):
            walk = [(os.path.dirname(os.path.join(ROOT, d)), None, [os.path.basename(d)])]
        else:
            walk = os.walk(os.path.join(ROOT, d))
        for dp, _, fns in walk:
            for fn in sorted(fns):
                if not fn.endswith(".cpp"):
                    continue
                rel = os.path.relpath(os.path.join(dp, fn), ROOT).replace("\\", "/")
                ch, size = chunks_of(rel)
                items.append({"file": rel, "bytes": size,
                              "chunks": [{"first": a, "last": b, "count": n} for a, b, n in ch]})
    json.dump(items, sys.stdout, indent=1)
    sys.stderr.write("files %d chunks %d bytes %d\n" % (len(items), sum(len(i["chunks"]) for i in items),
                                                     sum(i["bytes"] for i in items)))


if __name__ == "__main__":
    main()
