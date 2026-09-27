"""Parse MSVC x86 RTTI straight from the exe: every polymorphic class, its base classes (in
declaration order, with offsets) and its vftables. Writes export/rtti.json.

Layout (x86, absolute pointers):
  vftable[-1]              -> RTTICompleteObjectLocator {sig, offset, cdOffset, pTypeDescriptor, pClassHierarchyDescriptor}
  TypeDescriptor           {pVFTable, spare, char name[]}   name = ".?AVClass@Ns@@"
  ClassHierarchyDescriptor {sig, attributes, numBaseClasses, pBaseClassArray}
  BaseClassDescriptor      {pTypeDescriptor, numContainedBases, PMD{mdisp,pdisp,vdisp}, attributes}

Usage: python tools/rtti.py
"""
import json
import os
import struct
import subprocess

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
EXE = r"E:\SteamLibrary\steamapps\common\METAL GEAR RISING REVENGEANCE\METAL GEAR RISING REVENGEANCE.exe"
UNDNAME = r"C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.44.35207\bin\Hostx64\x64\undname.exe"


class PE:
    def __init__(self, path):
        self.d = open(path, "rb").read()
        pe = struct.unpack_from("<I", self.d, 0x3C)[0]
        opt = pe + 24
        self.base = struct.unpack_from("<I", self.d, opt + 28)[0]
        n = struct.unpack_from("<H", self.d, pe + 6)[0]
        so = struct.unpack_from("<H", self.d, pe + 20)[0]
        self.secs = []
        for i in range(n):
            name, vs, va, rs, ra = struct.unpack_from("<8sIIII", self.d, opt + so + 40 * i)
            ch = struct.unpack_from("<I", self.d, opt + so + 40 * i + 36)[0]
            self.secs.append((name.rstrip(b"\0").decode(), va + self.base, max(vs, rs), ra, rs, ch))

    def off(self, va):
        for name, sva, size, ra, rs, ch in self.secs:
            if sva <= va < sva + size and va - sva < rs:
                return ra + (va - sva)
        return None

    def u32(self, va):
        o = self.off(va)
        return None if o is None else struct.unpack_from("<I", self.d, o)[0]

    def cstr(self, va):
        o = self.off(va)
        if o is None:
            return None
        return self.d[o:self.d.index(b"\0", o)].decode("latin-1")

    def is_exec(self, va):
        return any(sva <= va < sva + size and ch & 0x20000000 for _, sva, size, _, _, ch in self.secs)


def simple_demangle(n):
    """'.?AVFoo@Bar@@' -> 'Bar::Foo' (no templates / anonymous namespaces)."""
    body = n[4:] if n.startswith(".?A") else n
    if body.endswith("@@"):
        body = body[:-2]
    return "::".join(reversed([p for p in body.split("@") if p]))


def undname_batch(names):
    """Demangle type descriptor names; hard ones (templates, anonymous namespaces) via undname."""
    out = {n: simple_demangle(n) for n in names}
    hard = [n for n in names if "?$" in n or "?A0x" in n]
    if hard and os.path.exists(UNDNAME):
        for i in range(0, len(hard), 200):
            chunk = hard[i:i + 200]
            r = subprocess.run([UNDNAME] + ["??_R0" + n[1:] + "@8" for n in chunk],
                               capture_output=True, text=True)
            res = [l[6:].strip().strip('"') for l in r.stdout.splitlines() if l.startswith("is :- ")]
            for n, d in zip(chunk, res):
                d = d.replace(" `RTTI Type Descriptor'", "")
                for kw in ("class ", "struct ", "union ", "enum "):
                    d = d.replace(kw, "")
                out[n] = d.strip()
    return out


def main():
    pe = PE(EXE)
    _, start, size, ra, rs, _ = [s for s in pe.secs if s[0] == ".rdata"][0]
    data = pe.d

    # complete object locators: sig 0, type descriptor named ".?AV"/".?AU"
    col_at = {}
    for o in range(ra, ra + rs - 20, 4):
        sig, offset, cdoff, ptd, pchd = struct.unpack_from("<IIIII", data, o)
        if sig != 0 or ptd < pe.base or pchd < pe.base:
            continue
        name = pe.cstr(ptd + 8)
        if not name or not name.startswith((".?AV", ".?AU")) or pe.u32(pchd) is None:
            continue
        col_at[start + (o - ra)] = (offset, name, pchd)

    # vftables: a COL pointer followed by code pointers, up to the next COL pointer
    vftables = []
    for o in range(ra, ra + rs - 8, 4):
        p = struct.unpack_from("<I", data, o)[0]
        if p not in col_at:
            continue
        vt = start + (o - ra) + 4
        slots, a = [], vt
        while True:
            f = pe.u32(a)
            if f is None or (slots and f in col_at) or not pe.is_exec(f):
                break
            slots.append(f)
            a += 4
        off, name, pchd = col_at[p]
        vftables.append({"vftable": vt, "offset": off, "td": name, "slots": slots})

    # hierarchy
    raw = {}
    alltd = set()
    for off, name, pchd in col_at.values():
        if name in raw:
            continue
        attrs, nb, pbca = pe.u32(pchd + 4), pe.u32(pchd + 8), pe.u32(pchd + 12)
        bases = []
        for i in range(nb or 0):
            pbcd = pe.u32(pbca + 4 * i)
            btd = pe.cstr(pe.u32(pbcd) + 8)
            ncont = pe.u32(pbcd + 4)
            mdisp, pdisp, vdisp, battr = struct.unpack_from("<iiiI", data, pe.off(pbcd + 8))
            alltd.add(btd)
            bases.append((btd, ncont, mdisp, pdisp, vdisp, battr))
        raw[name] = (attrs, bases)
        alltd.add(name)
    dem = undname_batch(sorted(alltd))

    classes = {}
    for name, (attrs, bases) in raw.items():
        classes[name] = {
            "name": dem[name], "td": name, "mi": bool(attrs & 1), "vi": bool(attrs & 2),
            # entry 0 is the class itself; the rest are all (direct and indirect) bases in order
            "bases": [{"name": dem[b[0]], "contained": b[1], "mdisp": b[2], "pdisp": b[3],
                       "vdisp": b[4], "attr": b[5]} for b in bases[1:]],
            "vftables": []}
    for v in vftables:
        classes[v["td"]]["vftables"].append({"va": "%08X" % v["vftable"], "offset": v["offset"],
                                             "slots": ["%08X" % s for s in v["slots"]]})
    out = sorted(classes.values(), key=lambda c: c["name"])
    os.makedirs(os.path.join(ROOT, "export"), exist_ok=True)
    with open(os.path.join(ROOT, "export", "rtti.json"), "w") as f:
        json.dump(out, f, indent=1)
    print("classes", len(out), "vftables", len(vftables),
          "multiple inheritance", sum(c["mi"] for c in out), "virtual inheritance", sum(c["vi"] for c in out))


if __name__ == "__main__":
    main()
