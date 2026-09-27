#!/usr/bin/env python3
"""CRI CPK archive extractor (METAL GEAR RISING REVENGEANCE PC and generic CPKs).

Features
  * CPK header + @UTF tables (TOC, ITOC, ETOC, GTOC), including the XOR-scrambled
    variant of @UTF (key starts at 0x5F, multiplied by 0x15 per byte).
  * All @UTF column storage kinds (none/zero, constant, per-row) and value types
    (u8/s8/u16/s16/u32/s32/u64/s64/float/double/string/data).
  * CRILAYLA decompression via a small native helper (tools/native/crilayla.dll,
    built by tools/native/build.bat); falls back to pure Python if unavailable.
  * Multi-CPK extraction where later CPKs (by the order given / numeric order)
    override earlier ones for the same path. Writes MANIFEST.csv.

The input archives are only ever opened read-only.

Usage
  cpk_extract.py info  <file.cpk>                 dump header / TOC summary
  cpk_extract.py list  <file.cpk>                 list entries
  cpk_extract.py extract <out_dir> <cpk...> [--loose GAMEDATA_DIR] [--jobs N] [--skip-existing]
"""
from __future__ import annotations

import argparse
import concurrent.futures as cf
import csv
import ctypes
import os
import re
import shutil
import struct
import sys
import threading
import time
import zlib
from dataclasses import dataclass, field

HERE = os.path.dirname(os.path.abspath(__file__))

# --------------------------------------------------------------------------
# @UTF tables
# --------------------------------------------------------------------------

STORAGE_MASK = 0xF0
TYPE_MASK = 0x0F
STORAGE_NONE = 0x00
STORAGE_ZERO = 0x10
STORAGE_CONSTANT = 0x30
STORAGE_PERROW = 0x50
STORAGE_CONSTANT2 = 0x70  # rarely seen; treated like constant

# type id -> (struct fmt, size)  (big endian)
_TYPES = {
    0x0: (">B", 1), 0x1: (">b", 1),
    0x2: (">H", 2), 0x3: (">h", 2),
    0x4: (">I", 4), 0x5: (">i", 4),
    0x6: (">Q", 8), 0x7: (">q", 8),
    0x8: (">f", 4), 0x9: (">d", 8),
}
TYPE_STRING = 0xA
TYPE_DATA = 0xB


def utf_unscramble(buf: bytes) -> bytes:
    """Undo the CRI @UTF XOR scramble (m=0x655F, t=0x4115 -> low byte: 0x5F, *0x15)."""
    out = bytearray(buf)
    m = 0x5F
    for i in range(len(out)):
        out[i] ^= m
        m = (m * 0x15) & 0xFF
    return bytes(out)


class UTFError(Exception):
    pass


@dataclass
class UTFColumn:
    flags: int
    name: str
    storage: int
    type: int
    const: object = None


@dataclass
class UTFTable:
    name: str
    columns: list
    rows: list  # list[dict]
    encrypted: bool = False

    def get(self, col, row=0, default=None):
        if row >= len(self.rows):
            return default
        return self.rows[row].get(col, default)

    def has(self, col):
        return any(c.name == col for c in self.columns)


def parse_utf(buf: bytes) -> UTFTable:
    encrypted = False
    if buf[:4] != b"@UTF":
        dec = utf_unscramble(buf[:4])
        if dec != b"@UTF":
            raise UTFError("not an @UTF table (magic %r)" % buf[:4])
        buf = utf_unscramble(buf)
        encrypted = True
    table_size = struct.unpack_from(">I", buf, 4)[0]
    data = buf[8:8 + table_size]
    if len(data) < table_size:
        raise UTFError("truncated @UTF table")
    # header (offsets relative to data == buf+8)
    (_unk, rows_off, strings_off, data_off, name_off,
     ncols, row_len, nrows) = struct.unpack_from(">HHIIIHHI", data, 0)

    def read_str(off):
        p = strings_off + off
        e = data.find(b"\0", p)
        if e < 0:
            e = len(data)
        return data[p:e].decode("utf-8", "replace")

    def read_value(t, pos):
        """return (value, new_pos)"""
        if t in _TYPES:
            fmt, sz = _TYPES[t]
            return struct.unpack_from(fmt, data, pos)[0], pos + sz
        if t == TYPE_STRING:
            off = struct.unpack_from(">I", data, pos)[0]
            return read_str(off), pos + 4
        if t == TYPE_DATA:
            off, sz = struct.unpack_from(">II", data, pos)
            a = data_off + off
            return bytes(data[a:a + sz]), pos + 8
        raise UTFError("unknown @UTF column type 0x%X" % t)

    cols = []
    pos = 24
    for _ in range(ncols):
        flags = data[pos]
        pos += 1
        if flags == 0:
            # some tables pad with a 3-byte gap before the real flags
            flags = data[pos + 3]
            pos += 4
        name_o = struct.unpack_from(">I", data, pos)[0]
        pos += 4
        storage = flags & STORAGE_MASK
        t = flags & TYPE_MASK
        col = UTFColumn(flags, read_str(name_o), storage, t)
        if storage in (STORAGE_CONSTANT, STORAGE_CONSTANT2):
            col.const, pos = read_value(t, pos)
        cols.append(col)

    rows = []
    for r in range(nrows):
        rp = rows_off + r * row_len
        row = {}
        for c in cols:
            if c.storage in (STORAGE_CONSTANT, STORAGE_CONSTANT2):
                row[c.name] = c.const
            elif c.storage == STORAGE_PERROW:
                row[c.name], rp = read_value(c.type, rp)
            else:  # zero / none
                row[c.name] = None
        rows.append(row)
    return UTFTable(_table_name(data, strings_off, name_off), cols, rows, encrypted)


def _table_name(data, strings_off, name_off):
    p = strings_off + name_off
    e = data.find(b"\0", p)
    return data[p:e].decode("utf-8", "replace")


def read_chunk_utf(f, offset, magic):
    """Read a CPK chunk ('CPK ', 'TOC ', 'ITOC', 'ETOC', 'GTOC') at offset -> UTFTable."""
    f.seek(offset)
    hdr = f.read(16)
    if hdr[:4] != magic:
        raise UTFError("expected %r at 0x%X, got %r" % (magic, offset, hdr[:4]))
    size = struct.unpack_from("<Q", hdr, 8)[0]
    return parse_utf(f.read(size))


# --------------------------------------------------------------------------
# CPK
# --------------------------------------------------------------------------

@dataclass
class CPKEntry:
    cpk: str
    path: str          # "dir/file" with forward slashes
    offset: int        # absolute offset in the .cpk
    file_size: int     # stored (possibly compressed) size
    extract_size: int  # final size
    id: int = -1
    crc: int | None = None
    user: str = ""

    @property
    def compressed(self):
        return self.extract_size != self.file_size


@dataclass
class CPK:
    path: str
    header: UTFTable
    toc: UTFTable | None = None
    itoc: UTFTable | None = None
    etoc: UTFTable | None = None
    gtoc: UTFTable | None = None
    entries: list = field(default_factory=list)
    notes: list = field(default_factory=list)


def _i(v):
    return 0 if v is None else int(v)


def open_cpk(path: str) -> CPK:
    with open(path, "rb") as f:
        header = read_chunk_utf(f, 0, b"CPK ")
        cpk = CPK(path, header)
        h = header.rows[0]
        toc_off = h.get("TocOffset")
        content_off = h.get("ContentOffset")
        itoc_off = h.get("ItocOffset")
        etoc_off = h.get("EtocOffset")
        gtoc_off = h.get("GtocOffset")
        align = _i(h.get("Align")) or 1
        name = os.path.basename(path)

        if toc_off:
            cpk.toc = read_chunk_utf(f, toc_off, b"TOC ")
        if itoc_off:
            try:
                cpk.itoc = read_chunk_utf(f, itoc_off, b"ITOC")
            except UTFError as e:
                cpk.notes.append("ITOC: %s" % e)
        if etoc_off:
            try:
                cpk.etoc = read_chunk_utf(f, etoc_off, b"ETOC")
            except UTFError as e:
                cpk.notes.append("ETOC: %s" % e)
        if gtoc_off:
            try:
                cpk.gtoc = read_chunk_utf(f, gtoc_off, b"GTOC")
            except UTFError as e:
                cpk.notes.append("GTOC: %s" % e)

        if cpk.toc is not None:
            # file offsets in the TOC are relative to min(TocOffset, ContentOffset)
            if content_off and toc_off:
                base = min(toc_off, content_off)
            else:
                base = toc_off or content_off or 0
            for r in cpk.toc.rows:
                d = r.get("DirName") or ""
                n = r.get("FileName") or ""
                p = (d + "/" + n) if d else n
                p = p.replace("\\", "/").lstrip("/")
                crc = r.get("CRC")
                cpk.entries.append(CPKEntry(
                    name, p, base + _i(r.get("FileOffset")),
                    _i(r.get("FileSize")), _i(r.get("ExtractSize")),
                    _i(r.get("ID")) if r.get("ID") is not None else -1,
                    int(crc) if crc is not None else None,
                    r.get("UserString") or ""))
        elif cpk.itoc is not None:
            # ID-only archive: DataL (small, u16 sizes) + DataH (large, u32 sizes)
            items = {}
            for key in ("DataL", "DataH"):
                blob = cpk.itoc.get(key)
                if isinstance(blob, bytes) and blob:
                    t = parse_utf(blob)
                    for r in t.rows:
                        fs = _i(r.get("FileSize"))
                        es = r.get("ExtractSize")
                        items[_i(r.get("ID"))] = (fs, _i(es) if es is not None else fs)
            off = content_off
            for fid in sorted(items):
                fs, es = items[fid]
                cpk.entries.append(CPKEntry(name, "%05d.bin" % fid, off, fs, es, fid))
                off += fs
                if off % align:
                    off += align - off % align
        else:
            cpk.notes.append("no TOC/ITOC")
    return cpk


# --------------------------------------------------------------------------
# CRILAYLA
# --------------------------------------------------------------------------

_native = None
_native_lock = threading.Lock()


def _load_native():
    global _native
    with _native_lock:
        if _native is not None:
            return _native or None
        dll = os.path.join(HERE, "native", "crilayla.dll")
        try:
            lib = ctypes.CDLL(dll)
            fn = lib.crilayla_decompress
            fn.argtypes = [ctypes.c_char_p, ctypes.c_size_t, ctypes.c_void_p, ctypes.c_size_t]
            fn.restype = ctypes.c_int
            _native = fn
        except OSError:
            _native = False
        return _native or None


def crilayla_decompress_py(src: bytes) -> bytes:
    """Pure-Python reference implementation (slow; fallback only)."""
    if src[:8] != b"CRILAYLA":
        raise ValueError("not CRILAYLA")
    usize, hoff = struct.unpack_from("<II", src, 8)
    out = bytearray(usize + 0x100)
    out[:0x100] = src[0x10 + hoff:0x10 + hoff + 0x100]
    comp = src[0x10:0x10 + hoff]
    ip = hoff - 1
    op = 0x100 + usize - 1
    pool = 0
    left = 0
    end = 0x100

    def bits(n):
        nonlocal pool, left, ip
        r = 0
        while n:
            if left == 0:
                pool = comp[ip]
                ip -= 1
                left = 8
            take = n if n < left else left
            r = (r << take) | ((pool >> (left - take)) & ((1 << take) - 1))
            left -= take
            n -= take
        return r

    while op >= end:
        if bits(1):
            ref = op + bits(13) + 3
            ln = 3
            for w in (2, 3, 5, 8):
                v = bits(w)
                ln += v
                if v != (1 << w) - 1:
                    break
            else:
                while True:
                    v = bits(8)
                    ln += v
                    if v != 255:
                        break
            for _ in range(ln):
                out[op] = out[ref]
                op -= 1
                ref -= 1
        else:
            out[op] = bits(8)
            op -= 1
    return bytes(out)


def crilayla_decompress(src: bytes) -> bytes:
    usize, hoff = struct.unpack_from("<II", src, 8)
    fn = _load_native()
    if fn is None:
        return crilayla_decompress_py(src)
    dst = ctypes.create_string_buffer(usize + 0x100)
    rc = fn(src, len(src), dst, usize + 0x100)
    if rc != 0:
        raise ValueError("CRILAYLA decompression failed (rc=%d)" % rc)
    return dst.raw


# --------------------------------------------------------------------------
# Extraction
# --------------------------------------------------------------------------

def cpk_sort_key(path):
    m = re.search(r"(\d+)\.cpk$", os.path.basename(path), re.I)
    return (int(m.group(1)) if m else 1 << 30, os.path.basename(path).lower())


def extract_entry(e: CPKEntry, cpk_path: str, out_path: str, fh_cache: dict):
    """Returns (written_size, was_compressed_by_crilayla)."""
    tid = threading.get_ident()
    key = (tid, cpk_path)
    f = fh_cache.get(key)
    if f is None:
        f = open(cpk_path, "rb")
        fh_cache[key] = f
    os.makedirs(os.path.dirname(out_path), exist_ok=True)
    f.seek(e.offset)
    if e.file_size >= 16:
        head = f.read(16)
    else:
        head = f.read(e.file_size)
    if head[:8] == b"CRILAYLA" and e.compressed:
        data = head + f.read(e.file_size - len(head))
        out = crilayla_decompress(data)
        with open(out_path, "wb") as o:
            o.write(out)
        return len(out), True
    # raw copy (streamed)
    remaining = e.file_size - len(head)
    with open(out_path, "wb") as o:
        o.write(head)
        while remaining > 0:
            chunk = f.read(min(remaining, 8 << 20))
            if not chunk:
                raise IOError("unexpected EOF")
            o.write(chunk)
            remaining -= len(chunk)
    return e.file_size, False


def cmd_extract(args):
    t0 = time.time()
    out_dir = os.path.abspath(args.out_dir)
    cpks = sorted(args.cpks, key=cpk_sort_key)
    for c in cpks:
        if os.path.abspath(c).lower().startswith(out_dir.lower() + os.sep):
            sys.exit("refusing: cpk inside output dir")
    os.makedirs(out_dir, exist_ok=True)

    print("native CRILAYLA helper:", "yes" if _load_native() else "NO (pure python fallback)")
    archives = []
    for c in cpks:
        cp = open_cpk(c)
        archives.append(cp)
        ncomp = sum(1 for e in cp.entries if e.compressed)
        print("  %-12s entries=%6d compressed=%5d stored=%12d extract=%12d tables=%s%s" % (
            os.path.basename(c), len(cp.entries), ncomp,
            sum(e.file_size for e in cp.entries), sum(e.extract_size for e in cp.entries),
            ",".join(n for n, t in (("TOC", cp.toc), ("ITOC", cp.itoc), ("ETOC", cp.etoc), ("GTOC", cp.gtoc)) if t),
            (" notes=" + "; ".join(cp.notes)) if cp.notes else ""))
    t_parse = time.time() - t0

    # resolve overrides: later cpk wins (case-insensitive paths, Windows FS)
    winner = {}      # key -> entry
    all_entries = []  # (entry, cpk_path)
    cpk_paths = {os.path.basename(a.path): a.path for a in archives}
    for a in archives:
        seen_here = {}
        for e in a.entries:
            k = e.path.lower()
            if k in seen_here:
                print("  WARNING duplicate path inside %s: %s" % (e.cpk, e.path))
            seen_here[k] = e
            all_entries.append(e)
            winner[k] = e  # later overrides
    overridden_by = {}
    for e in all_entries:
        w = winner[e.path.lower()]
        if w is not e:
            overridden_by[id(e)] = w.cpk

    todo = list(winner.values())
    total = len(todo)
    print("unique paths: %d  (total entries %d, overridden %d)" % (total, len(all_entries), len(overridden_by)))

    results = {}
    failures = []
    fh_cache = {}
    lock = threading.Lock()
    done = [0, 0]  # count, bytes
    t1 = time.time()

    def work(e):
        outp = os.path.join(out_dir, *e.path.split("/"))
        if args.skip_existing and os.path.isfile(outp) and os.path.getsize(outp) == e.extract_size:
            return e, e.extract_size, None, "skipped"
        try:
            n, comp = extract_entry(e, cpk_paths[e.cpk], outp, fh_cache)
            return e, n, None, "crilayla" if comp else "raw"
        except Exception as ex:  # noqa
            return e, 0, repr(ex), "error"

    # big files first so the pool stays busy
    todo.sort(key=lambda e: -e.file_size)
    with cf.ThreadPoolExecutor(max_workers=args.jobs) as ex:
        for e, n, err, kind in ex.map(work, todo):
            results[id(e)] = (n, err, kind)
            with lock:
                done[0] += 1
                done[1] += n
                if err or n != e.extract_size:
                    failures.append((e.cpk, e.path, err or "size %d != ExtractSize %d" % (n, e.extract_size)))
                if done[0] % 2000 == 0 or done[0] == total:
                    el = time.time() - t1
                    print("  [%6d/%6d] %8.1f MB  %.1fs  %.1f MB/s" % (
                        done[0], total, done[1] / 1e6, el, done[1] / 1e6 / max(el, 1e-6)), flush=True)
    for f in fh_cache.values():
        f.close()
    t_extract = time.time() - t1

    # manifest
    rows = []
    for e in all_entries:
        r = results.get(id(e))
        status = r[2] if r else "overridden"
        rows.append([e.path, e.cpk, e.offset, e.file_size, e.extract_size,
                     ("%08X" % e.crc) if e.crc is not None else "",
                     overridden_by.get(id(e), ""), status])

    loose_stats = None
    if args.loose:
        loose_stats = add_loose(args.loose, out_dir, rows, args.loose_copy_limit)

    man = os.path.join(out_dir, "MANIFEST.csv")
    with open(man, "w", newline="", encoding="utf-8") as fo:
        w = csv.writer(fo)
        w.writerow(["path", "cpk", "offset", "compressed_size", "size", "crc", "overridden_by", "status"])
        rows.sort(key=lambda r: (r[0].lower(), cpk_sort_key(r[1])))
        w.writerows(rows)

    print()
    print("parse: %.1fs  extract: %.1fs  total: %.1fs" % (t_parse, t_extract, time.time() - t0))
    print("files written: %d  bytes: %d  failures: %d" % (done[0] - len(failures), done[1], len(failures)))
    kinds = {}
    for n, err, kind in results.values():
        kinds[kind] = kinds.get(kind, 0) + 1
    print("by kind:", kinds)
    for fl in failures[:50]:
        print("  FAIL", *fl)
    if overridden_by:
        print("overrides (%d):" % len(overridden_by))
        for e in all_entries:
            if id(e) in overridden_by:
                print("   %s: %s -> %s" % (e.path, e.cpk, overridden_by[id(e)]))
    if loose_stats:
        print("loose:", loose_stats)
    print("manifest:", man)
    return 1 if failures else 0


def add_loose(gamedata, out_dir, rows, copy_limit):
    gamedata = os.path.abspath(gamedata)
    stats = {"copied": 0, "copied_bytes": 0, "listed": 0, "listed_bytes": 0}
    # always copy shader files
    for n in ("shader.dat", "shader2.dat", "shadereff.dat"):
        src = os.path.join(gamedata, n)
        if os.path.isfile(src):
            dst = os.path.join(out_dir, n)
            shutil.copyfile(src, dst)  # copy only; source untouched
            sz = os.path.getsize(src)
            stats["copied"] += 1
            stats["copied_bytes"] += sz
            rows.append([n, "loose", 0, sz, sz, "", "", "copied"])
    dirs = [d for d in os.listdir(gamedata)
            if os.path.isdir(os.path.join(gamedata, d)) and (d.lower() == "sound" or d.lower().startswith("movie"))]
    files = []
    for d in sorted(dirs):
        for root, _, fns in os.walk(os.path.join(gamedata, d)):
            for fn in sorted(fns):
                p = os.path.join(root, fn)
                files.append((os.path.relpath(p, gamedata).replace("\\", "/"), p, os.path.getsize(p)))
    total = sum(s for _, _, s in files)
    do_copy = total < copy_limit
    stats["loose_dirs"] = dirs
    stats["loose_dirs_total_bytes"] = total
    stats["loose_dirs_copied"] = do_copy
    for rel, p, sz in files:
        if do_copy:
            dst = os.path.join(out_dir, *rel.split("/"))
            os.makedirs(os.path.dirname(dst), exist_ok=True)
            shutil.copyfile(p, dst)
            stats["copied"] += 1
            stats["copied_bytes"] += sz
        else:
            stats["listed"] += 1
            stats["listed_bytes"] += sz
        rows.append([rel, "loose", 0, sz, sz, "", "", "copied" if do_copy else "listed"])
    return stats


def cmd_info(args):
    cp = open_cpk(args.cpk)
    print("== CPK header (encrypted=%s) ==" % cp.header.encrypted)
    for c in cp.header.columns:
        v = cp.header.rows[0][c.name]
        if isinstance(v, bytes):
            v = "<data %d bytes>" % len(v)
        print("  %-24s flags=%02X  %r" % (c.name, c.flags, v))
    for nm in ("toc", "itoc", "etoc", "gtoc"):
        t = getattr(cp, nm)
        if t is None:
            continue
        print("== %s: table=%r rows=%d encrypted=%s ==" % (nm.upper(), t.name, len(t.rows), t.encrypted))
        for c in t.columns:
            print("  col %-20s flags=%02X const=%r" % (c.name, c.flags,
                  c.const if not isinstance(c.const, bytes) else "<data>"))
        for r in t.rows[:3]:
            print("   ", {k: (v if not isinstance(v, bytes) else "<data %d>" % len(v)) for k, v in r.items()})
    print("entries:", len(cp.entries), "notes:", cp.notes)


def cmd_list(args):
    cp = open_cpk(args.cpk)
    for e in cp.entries:
        print("%10X %10d %10d %s" % (e.offset, e.file_size, e.extract_size, e.path))


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sp = ap.add_subparsers(dest="cmd", required=True)
    p = sp.add_parser("info"); p.add_argument("cpk"); p.set_defaults(fn=cmd_info)
    p = sp.add_parser("list"); p.add_argument("cpk"); p.set_defaults(fn=cmd_list)
    p = sp.add_parser("extract")
    p.add_argument("out_dir")
    p.add_argument("cpks", nargs="+")
    p.add_argument("--loose", help="GameData dir: copy shader*.dat, list/copy sound/ movie*/")
    p.add_argument("--loose-copy-limit", type=int, default=6 * 1024 ** 3,
                   help="copy sound/movie dirs only if their total is below this many bytes (default 6 GiB)")
    p.add_argument("--jobs", type=int, default=6)
    p.add_argument("--skip-existing", action="store_true")
    p.set_defaults(fn=cmd_extract)
    args = ap.parse_args()
    sys.exit(args.fn(args) or 0)


if __name__ == "__main__":
    main()
