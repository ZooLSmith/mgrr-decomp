#!/usr/bin/env python3
"""PlatinumGames DAT archive indexer / extractor (METAL GEAR RISING REVENGEANCE PC).

DAT layout (little endian):
  0x00 'DAT\\0'
  0x04 u32 fileCount
  0x08 u32 fileTableOffset   -> u32 offset[fileCount]
  0x0C u32 extTableOffset    -> char ext[fileCount][4]
  0x10 u32 nameTableOffset   -> u32 nameLen; char name[fileCount][nameLen]
  0x14 u32 sizeTableOffset   -> u32 size[fileCount]
  0x18 u32 hashMapOffset

Usage
  dat_extract.py list  <file.dat>
  dat_extract.py extract <file.dat> <out_dir>
  dat_extract.py index <data_dir> [--out DAT_INDEX.csv] [--summary SUMMARY.md]
      Scans every file under data_dir whose first 4 bytes are 'DAT\\0' (any extension:
      .dat .dtt .eff .evn .eft ...), indexes inner files recursively (nested DATs get
      "outer/inner" container paths) without writing them to disk, and writes a
      per-extension summary with magic statistics.
"""
from __future__ import annotations

import argparse
import collections
import csv
import mmap
import os
import struct
import sys
import time

DAT_MAGIC = b"DAT\0"

# expected magic by extension (spot checks)
EXPECTED_MAGIC = {
    ".dat": b"DAT\0", ".dtt": b"DAT\0", ".eff": b"DAT\0", ".evn": b"DAT\0",
    ".wtp": b"DDS ", ".wmb": b"WMB", ".bxm": (b"BXM\0", b"XML\0"), ".wem": b"RIFF",
    ".wtb": b"WTB\0", ".mot": b"mot\0", ".usm": b"CRID", ".bnk": b"BKHD",
}


class DATError(Exception):
    pass


def parse_dat(buf, base=0, size=None):
    """Parse a DAT at buf[base:base+size]. Returns list of (index, name, ext, abs_offset, size)."""
    if size is None:
        size = len(buf) - base
    if size < 0x1C or bytes(buf[base:base + 4]) != DAT_MAGIC:
        raise DATError("not a DAT")
    cnt, fto, eto, nto, sto, hmo = struct.unpack_from("<6I", buf, base + 4)
    if cnt > 100000:
        raise DATError("absurd fileCount %d" % cnt)
    for o in (fto, eto, nto, sto):
        if cnt and o >= size:
            raise DATError("table offset 0x%X out of range" % o)
    offs = struct.unpack_from("<%dI" % cnt, buf, base + fto) if cnt else ()
    sizes = struct.unpack_from("<%dI" % cnt, buf, base + sto) if cnt else ()
    exts = [bytes(buf[base + eto + 4 * i: base + eto + 4 * i + 4]).split(b"\0")[0].decode("ascii", "replace")
            for i in range(cnt)]
    names = []
    if cnt:
        nlen = struct.unpack_from("<I", buf, base + nto)[0]
        p = base + nto + 4
        for i in range(cnt):
            names.append(bytes(buf[p + i * nlen: p + (i + 1) * nlen]).split(b"\0")[0].decode("utf-8", "replace"))
    out = []
    for i in range(cnt):
        o, s = offs[i], sizes[i]
        if o + s > size:
            raise DATError("entry %d (%s) out of range" % (i, names[i]))
        out.append((i, names[i], exts[i], base + o, s))
    return out


def magic_str(b: bytes) -> str:
    if len(b) == 0:
        return ""
    if all(32 <= c < 127 or c == 0 for c in b):
        return b.decode("ascii").replace("\0", "\\0")
    return "0x" + b.hex().upper()


def index_file(path, rel, writer, stats, max_depth=4):
    fsz = os.path.getsize(path)
    if fsz < 0x1C:
        return 0
    with open(path, "rb") as f:
        mm = mmap.mmap(f.fileno(), 0, access=mmap.ACCESS_READ)
        try:
            return _index_buf(mm, 0, fsz, rel, writer, stats, 0, max_depth)
        finally:
            mm.close()


def _index_buf(buf, base, size, container, writer, stats, depth, max_depth):
    entries = parse_dat(buf, base, size)
    n = 0
    for i, name, ext, off, s in entries:
        mg = bytes(buf[off:off + 4]) if s >= 4 else bytes(buf[off:off + s])
        e = os.path.splitext(name)[1].lower() or ("." + ext.lower() if ext else "")
        writer.writerow([container, i, name, ext, off - base, s, magic_str(mg), depth])
        stats["inner"][e]["count"] += 1
        stats["inner"][e]["bytes"] += s
        stats["inner"][e]["magic"][magic_str(mg)] += 1
        exp = EXPECTED_MAGIC.get(e)
        if exp is not None and s > 0:
            stats["check"][e]["checked"] += 1
            if not mg.startswith(exp if isinstance(exp, tuple) else (exp,)):
                stats["check"][e]["bad"] += 1
                if len(stats["bad_examples"]) < 200:
                    stats["bad_examples"].append("%s/%s magic=%s" % (container, name, magic_str(mg)))
        n += 1
        if mg == DAT_MAGIC and depth < max_depth:
            try:
                n += _index_buf(buf, off, s, container + "/" + name, writer, stats, depth + 1, max_depth)
                stats["nested"] += 1
            except DATError as ex:
                stats["errors"].append("%s/%s: %s" % (container, name, ex))
    return n


def _new_stats():
    mk = lambda: {"count": 0, "bytes": 0, "magic": collections.Counter()}  # noqa
    return {
        "inner": collections.defaultdict(mk),
        "top": collections.defaultdict(mk),
        "check": collections.defaultdict(lambda: {"checked": 0, "bad": 0}),
        "top_check": collections.defaultdict(lambda: {"checked": 0, "bad": 0}),
        "bad_examples": [], "top_bad_examples": [], "errors": [], "nested": 0,
    }


def cmd_index(args):
    t0 = time.time()
    root = os.path.abspath(args.data_dir)
    out_csv = args.out or os.path.join(root, "DAT_INDEX.csv")
    out_md = args.summary or os.path.join(root, "SUMMARY.md")
    skip = {os.path.abspath(out_csv).lower(), os.path.abspath(out_md).lower(),
            os.path.join(root, "manifest.csv").lower()}
    stats = _new_stats()
    ndat = ninner = 0
    with open(out_csv, "w", newline="", encoding="utf-8") as fo:
        w = csv.writer(fo)
        w.writerow(["container", "index", "name", "ext", "offset", "size", "magic", "depth"])
        for dp, dns, fns in os.walk(root):
            dns.sort()
            for fn in sorted(fns):
                p = os.path.join(dp, fn)
                if p.lower() in skip:
                    continue
                rel = os.path.relpath(p, root).replace("\\", "/")
                sz = os.path.getsize(p)
                with open(p, "rb") as f:
                    mg = f.read(4)
                e = os.path.splitext(fn)[1].lower() or "(none)"
                t = stats["top"][e]
                t["count"] += 1
                t["bytes"] += sz
                t["magic"][magic_str(mg)] += 1
                exp = EXPECTED_MAGIC.get(e)
                if exp is not None and sz > 0:
                    stats["top_check"][e]["checked"] += 1
                    if not mg.startswith(exp if isinstance(exp, tuple) else (exp,)):
                        stats["top_check"][e]["bad"] += 1
                        if len(stats["top_bad_examples"]) < 200:
                            stats["top_bad_examples"].append("%s magic=%s" % (rel, magic_str(mg)))
                if mg == DAT_MAGIC:
                    try:
                        ninner += index_file(p, rel, w, stats)
                        ndat += 1
                    except DATError as ex:
                        stats["errors"].append("%s: %s" % (rel, ex))
    el = time.time() - t0
    write_summary(out_md, root, stats, ndat, ninner, el)
    print("DAT containers: %d  inner entries: %d  nested DATs: %d  errors: %d  time: %.1fs" % (
        ndat, ninner, stats["nested"], len(stats["errors"]), el))
    for e in stats["errors"][:30]:
        print("  ERR", e)
    print("wrote", out_csv, "and", out_md)


def _table(d, title):
    lines = ["| ext | count | total bytes | top magics |", "|---|---:|---:|---|"]
    for e, v in sorted(d.items(), key=lambda kv: (-kv[1]["count"], kv[0])):
        mags = ", ".join("`%s`x%d" % (m, c) for m, c in v["magic"].most_common(3))
        lines.append("| %s | %d | %d | %s |" % (e, v["count"], v["bytes"], mags))
    return ["## " + title, ""] + lines + [""]


def write_summary(path, root, stats, ndat, ninner, el):
    top = stats["top"]
    L = ["# MGRR extracted data summary", "",
         "Generated by `tools/dat_extract.py index` over `%s`." % root, "",
         "- Files on disk (excluding MANIFEST/DAT_INDEX/SUMMARY): **%d**, %d bytes" % (
             sum(v["count"] for v in top.values()), sum(v["bytes"] for v in top.values())),
         "- DAT-format containers (any extension, magic `DAT\\0`): **%d**" % ndat,
         "- Inner DAT entries indexed (incl. nested): **%d** (nested DATs: %d)" % (ninner, stats["nested"]),
         "- DAT parse errors: %d" % len(stats["errors"]),
         "- Index time: %.1fs" % el, ""]
    L += _table(top, "Files on disk by extension")
    L += _table(stats["inner"], "Inner files of DAT containers by extension")
    L += ["## Magic spot checks", "", "| scope | ext | expected | checked | mismatched |", "|---|---|---|---:|---:|"]
    for scope, d in (("disk", stats["top_check"]), ("inner", stats["check"])):
        for e, v in sorted(d.items()):
            L.append("| %s | %s | `%s` | %d | %d |" % (scope, e, " or ".join(magic_str(x) for x in (EXPECTED_MAGIC[e] if isinstance(EXPECTED_MAGIC[e], tuple) else (EXPECTED_MAGIC[e],))), v["checked"], v["bad"]))
    L.append("")
    if stats["top_bad_examples"] or stats["bad_examples"]:
        L += ["### Mismatch examples", ""]
        L += ["- " + x for x in (stats["top_bad_examples"][:40] + stats["bad_examples"][:40])]
        L.append("")
    if stats["errors"]:
        L += ["## DAT parse errors", ""] + ["- " + x for x in stats["errors"][:100]] + [""]
    with open(path, "w", encoding="utf-8") as f:
        f.write("\n".join(L))


def cmd_list(args):
    with open(args.dat, "rb") as f:
        buf = f.read()
    for i, name, ext, off, s in parse_dat(buf):
        print("%4d %10X %10d %-6s %-5s %s" % (i, off, s, magic_str(buf[off:off + 4]), ext, name))


def cmd_extract(args):
    with open(args.dat, "rb") as f:
        buf = f.read()
    os.makedirs(args.out_dir, exist_ok=True)
    for i, name, ext, off, s in parse_dat(buf):
        safe = name.replace("\\", "/").lstrip("/")
        if ".." in safe.split("/") or not safe:
            safe = "%04d.%s" % (i, ext or "bin")
        op = os.path.join(args.out_dir, *safe.split("/"))
        os.makedirs(os.path.dirname(op), exist_ok=True)
        with open(op, "wb") as o:
            o.write(buf[off:off + s])
    print("extracted to", args.out_dir)


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sp = ap.add_subparsers(dest="cmd", required=True)
    p = sp.add_parser("list"); p.add_argument("dat"); p.set_defaults(fn=cmd_list)
    p = sp.add_parser("extract"); p.add_argument("dat"); p.add_argument("out_dir"); p.set_defaults(fn=cmd_extract)
    p = sp.add_parser("index"); p.add_argument("data_dir"); p.add_argument("--out"); p.add_argument("--summary")
    p.set_defaults(fn=cmd_index)
    a = ap.parse_args()
    a.fn(a)


if __name__ == "__main__":
    main()
