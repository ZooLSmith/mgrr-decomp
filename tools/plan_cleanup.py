"""Build the work list for the cleanup workflow. Prints JSON to stdout.

Each item is a list of "units" handled by one agent chain:
  - a large file is one item whose units are its chunks (~CHUNK bytes of whole functions),
    processed in sequence;
  - small files (< SMALL bytes, not yet cleaned) are packed together, up to BATCH bytes per
    item, one unit per file, so per-agent overhead is shared.

Usage: python tools/plan_cleanup.py src/player/pl0000 src/managers ... > logs/waveN.json
"""
import json
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
CHUNK = 60_000
SMALL = 20_000
BATCH = 60_000
HEAD = re.compile(r"^// ([0-9A-F]{8})  ", re.M)


def chunks_of(text):
    ms = list(HEAD.finditer(text))
    out, cur, cur_bytes = [], 0, 0
    for k, m in enumerate(ms):
        e = ms[k + 1].start() if k + 1 < len(ms) else len(text)
        size = e - m.start()
        if cur_bytes and cur_bytes + size > CHUNK:
            out.append((ms[cur].group(1), ms[k - 1].group(1), k - cur))
            cur, cur_bytes = k, 0
        cur_bytes += size
    if ms:
        out.append((ms[cur].group(1), ms[-1].group(1), len(ms) - cur))
    return out


def show(plan, i, k=None):
    """Print the work of item i (or only its unit k) for an agent."""
    item = json.load(open(os.path.join(ROOT, plan)))[i]
    units = item["units"] if k is None else [item["units"][k]]
    for u in units:
        part = "%s.part%d" % (u["file"], u["part"])
        print("FILE %s  CHUNK %d/%d  FUNCTIONS %s .. %s (%d)  WRITE %s" % (
            u["file"], u["part"] + 1, u["parts"], u["first"], u["last"], u["count"], part))


def main():
    if len(sys.argv) > 1 and sys.argv[1] == "--show":
        show(sys.argv[2], int(sys.argv[3]), int(sys.argv[4]) if len(sys.argv) > 4 else None)
        return
    if len(sys.argv) > 1 and sys.argv[1] == "--summary":
        items = json.load(open(os.path.join(ROOT, sys.argv[2])))
        print(json.dumps([{"i": n, "name": it["name"], "n": len(it["units"]),
                           "batch": it["name"].startswith("batch:")} for n, it in enumerate(items)],
                         separators=(",", ":")))
        return
    files = []
    for d in sys.argv[1:]:
        if d.endswith(".cpp"):
            paths = [os.path.join(ROOT, d)]
        else:
            paths = [os.path.join(dp, fn) for dp, _, fns in os.walk(os.path.join(ROOT, d)) for fn in sorted(fns)
                     if fn.endswith(".cpp")]
        for p in paths:
            text = open(p, encoding="utf-8").read()
            if "-- cleaned" in text.split("\n", 1)[0] or not HEAD.search(text):
                continue
            files.append((os.path.relpath(p, ROOT).replace("\\", "/"), text))

    items, batch, batch_bytes = [], [], 0
    for rel, text in sorted(files, key=lambda x: x[0]):
        ch = chunks_of(text)
        units = [{"file": rel, "part": k, "parts": len(ch), "first": a, "last": b, "count": n}
                 for k, (a, b, n) in enumerate(ch)]
        if len(text) >= SMALL:
            items.append({"name": rel.split("/")[-1], "bytes": len(text), "units": units})
            continue
        if batch and batch_bytes + len(text) > BATCH:
            items.append({"name": "batch:" + batch[0]["file"].split("/")[-1], "bytes": batch_bytes, "units": batch})
            batch, batch_bytes = [], 0
        batch.extend(units)
        batch_bytes += len(text)
    if batch:
        items.append({"name": "batch:" + batch[0]["file"].split("/")[-1], "bytes": batch_bytes, "units": batch})
    # longest chains first so they start early
    items.sort(key=lambda i: -len(i["units"]) if not i["name"].startswith("batch:") else 0)
    json.dump(items, sys.stdout, separators=(",", ":"))
    sys.stderr.write("files %d items %d units %d bytes %d\n" % (
        len(files), len(items), sum(len(i["units"]) for i in items), sum(i["bytes"] for i in items)))


if __name__ == "__main__":
    main()
