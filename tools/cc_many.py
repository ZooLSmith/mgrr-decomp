"""Compile-check many files in parallel with tools/cc.bat; prints files with errors and a total.

Usage: python tools/cc_many.py [-j N] <file-list.txt | files...>
"""
import concurrent.futures
import os
import re
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))


def check(rel):
    r = subprocess.run(["cmd", "/c", os.path.join(ROOT, "tools", "cc.bat"), os.path.join(ROOT, rel.replace("/", os.sep))],
                       capture_output=True, text=True, errors="replace")
    errs = [l for l in r.stdout.splitlines() if re.search(r"\berror C\d+", l)]
    return rel, errs


def main():
    args = sys.argv[1:]
    jobs = 8
    if args[:1] == ["-j"]:
        jobs, args = int(args[1]), args[2:]
    files = []
    for a in args:
        if a.endswith(".txt"):
            files += [l.strip() for l in open(a, encoding="utf-8") if l.strip()]
        else:
            files.append(a)
    bad = 0
    with concurrent.futures.ThreadPoolExecutor(jobs) as ex:
        for rel, errs in ex.map(check, files):
            if errs:
                bad += 1
                print("%s: %d errors" % (rel, len(errs)))
                for e in errs[:3]:
                    print("    " + e.strip()[:200])
    print("checked %d files, %d with errors" % (len(files), bad))


if __name__ == "__main__":
    main()
