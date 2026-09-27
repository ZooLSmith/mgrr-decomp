"""Recover part files from workflow agent transcripts by replaying their Write/Edit tool calls
(in timestamp order). Used once after parts were deleted before being compile-checked.

Usage: python tools/replay_parts.py <workflow transcript dir> <out dir> [substring filter]
"""
import glob
import json
import os
import sys


def main():
    tdir, outdir = sys.argv[1], sys.argv[2]
    filt = sys.argv[3] if len(sys.argv) > 3 else ".part"
    ops = []
    for fn in glob.glob(os.path.join(tdir, "agent-*.jsonl")):
        for line in open(fn, encoding="utf-8"):
            try:
                o = json.loads(line)
            except Exception:
                continue
            msg = o.get("message") or {}
            if msg.get("role") != "assistant":
                continue
            for c in msg.get("content") or []:
                if not isinstance(c, dict) or c.get("type") != "tool_use" or c.get("name") not in ("Write", "Edit"):
                    continue
                inp = c.get("input") or {}
                fp = inp.get("file_path", "")
                if filt not in fp:
                    continue
                ops.append((o.get("timestamp", ""), c["name"], fp, inp))
    ops.sort(key=lambda x: x[0])
    files = {}
    fails = 0
    for ts, name, fp, inp in ops:
        key = os.path.normcase(os.path.normpath(fp))
        if name == "Write":
            files[key] = (fp, inp["content"])
        else:
            if key not in files:
                fails += 1
                continue
            p, t = files[key]
            old, new = inp["old_string"], inp["new_string"]
            if old not in t:
                fails += 1
                continue
            t = t.replace(old, new) if inp.get("replace_all") else t.replace(old, new, 1)
            files[key] = (p, t)
    os.makedirs(outdir, exist_ok=True)
    for key, (fp, t) in files.items():
        out = os.path.join(outdir, os.path.basename(fp))
        with open(out, "w", encoding="utf-8") as f:
            f.write(t)
        print(out, len(t))
    print("ops", len(ops), "failed edits", fails)


if __name__ == "__main__":
    main()
