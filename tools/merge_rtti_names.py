"""Merge names from Ghidra's RecoverClassesFromRTTI run (logs/rtti_names.csv) into the main
project's names (logs/main_names.csv). Writes logs/merge_renames.csv for ApplyRenames.java.

Rules, in priority order:
  1. names from debug/assert strings (anything that is not a placeholder) are kept;
  2. the recovery's constructor/destructor calls ("X::X", "X::~X") replace my ctor/dtor guesses
     ("X::X_3", "X::~X") and default names -- it traces vftable stores, I only guessed;
  3. a default name (FUN_) takes the recovery's virtual-function name, converted from its
     1-based "vfunctionN" to this project's byte-offset "vfXX";
  4. "X_Constructor_or_Destructor" (undecided) never overrides anything.

Usage: python tools/merge_rtti_names.py
"""
import csv
import os
import re

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
LOGS = os.path.join(ROOT, "logs")


def load(fn):
    return {r["entry"]: r for r in csv.DictReader(open(os.path.join(LOGS, fn), encoding="utf-8"), delimiter="\t")}


def is_default(n):
    return re.match(r"^(thunk_)?FUN_[0-9a-f]+$", n) is not None


def is_placeholder(n, ns):
    leaf = ns.split("::")[-1] if ns else ""
    return (is_default(n) or re.match(r"^(thunk_)?(vf[0-9A-F]+|vfunction\d+)$", n) is not None
            or (leaf and re.match(r"^~?%s(_\d+)?$" % re.escape(leaf), n) is not None)
            or n.startswith("ctor_"))


def main():
    a, b = load("main_names.csv"), load("rtti_names.csv")
    out = []
    for e, rb in b.items():
        ra = a.get(e)
        if ra is None:
            continue
        an, ans, bn, bns = ra["name"], ra["namespace"], rb["name"], rb["namespace"]
        if (an, ans) == (bn, bns) or is_default(bn) or bn.endswith("_Constructor_or_Destructor"):
            continue
        if not is_placeholder(an, ans):
            continue  # rule 1
        bleaf = bns.split("::")[-1] if bns else ""
        if bleaf and bn in (bleaf, "~" + bleaf):
            out.append((e, bns, bn, "ctor/dtor"))  # rule 2
            continue
        m = re.match(r"^vfunction(\d+)$", bn)
        if m and is_default(an):
            out.append((e, bns, "vf%02X" % ((int(m.group(1)) - 1) * 4), "virtual"))  # rule 3
            continue
        if is_default(an) and not bn.startswith("vfunction"):
            out.append((e, bns, bn, "named"))
    with open(os.path.join(LOGS, "merge_renames.csv"), "w", encoding="utf-8", newline="") as f:
        w = csv.writer(f)
        w.writerow(["entry", "namespace", "name", "rule"])
        w.writerows(out)
    import collections
    print(len(out), collections.Counter(r[3] for r in out))


if __name__ == "__main__":
    main()
