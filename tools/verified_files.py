"""List raw files whose cleanup is complete and verified in a workflow run: every verify agent
of the file's plan item has returned. Prints one path per line.

Usage: python tools/verified_files.py <plan.json> <journal.jsonl>
"""
import collections
import json
import sys


def main():
    plan = json.load(open(sys.argv[1]))
    done = collections.Counter()
    label_of = {}
    for line in open(sys.argv[2], encoding="utf-8"):
        o = json.loads(line)
        if o.get("type") == "started":
            label_of[o.get("key")] = o.get("label", "")
        elif o.get("type") == "result":
            lab = label_of.get(o.get("key"), "")
            if lab.startswith("verify:"):
                done[lab.split(":", 1)[1].split("#")[0]] += 1
    for it in plan:
        name = it["name"]
        batch = name.startswith("batch:")
        label = name if batch else name
        need = 1 if batch or len(it["units"]) == 1 else len(it["units"])
        if done.get(label, 0) >= need:
            for f in sorted({u["file"] for u in it["units"]}):
                print(f)


if __name__ == "__main__":
    main()
