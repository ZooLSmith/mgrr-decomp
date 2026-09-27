"""Generate the declaration scaffold that lets reconstructed .cpp files compile.

  include/ghidra_types.h      decompiler primitive types (undefined4, code, ...) -- hand written
  include/auto/fwd.h          forward declaration of every class and namespace
  include/auto/classes/*.h    one header per class: bases (from RTTI), virtual methods in vftable
                              order, other methods; a class that has a refined header in src/
                              (first line "// REFINED") is just an #include of that header
  include/auto/functions.h    every free function (FUN_xxxxxxxx and named ones)
  include/mgrr.h              umbrella header included by every .cpp -- hand written
  logs/slot_renames.csv       overrides whose name differs from their slot's canonical name

Virtual slots: an override at slot i of a class is the same virtual function as slot i of its
primary base, so every class in a slot's family gets one name and one prototype -- the "root"
declaration. The name is the first real (non-placeholder) name found anywhere in the family,
so a debug-string name recovered for one override names the whole family.

Inputs: logs/main_names.csv (Ghidra names), export/functions.jsonl (prototypes), export/rtti.json.
Usage: python tools/gen_headers.py
"""
import collections
import csv
import json
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))
from organize import class_file  # noqa: E402

AUTO = os.path.join(ROOT, "include", "auto")

# identifiers Ghidra uses in prototypes that are not valid or would collide in C++
KEYWORD_FIX = {"this": "this_", "new": "new_", "delete": "delete_", "class": "class_", "template": "template_",
               "operator": "operator_", "default": "default_", "register": "register_"}

RESERVED_NAMES = re.compile(r"^(operator|`|<|Catch@|Unwind@|_JumpTable|switchD)")
SKIP_FWD = {"type_info", "std", "exception", "bad_alloc"}

PRIMS = {"void", "char", "uchar", "short", "ushort", "int", "uint", "long", "ulong", "longlong", "ulonglong",
         "float", "double", "float10", "bool", "byte", "word", "dword", "qword", "wchar_t", "wchar16", "wchar32",
         "undefined", "undefined1", "undefined2", "undefined3", "undefined4", "undefined5", "undefined6",
         "undefined7", "undefined8", "code", "sbyte", "unsigned int", "unsigned char", "unsigned short",
         "LPVOID", "HANDLE", "HWND", "DWORD", "BOOL", "LPCSTR", "LPSTR", "size_t",
         "unsigned long", "signed char", "__int64", "unsigned __int64"}


def ident(s):
    s = re.sub(r"[^0-9A-Za-z_]", "_", s)
    if s and s[0].isdigit():
        s = "_" + s
    return KEYWORD_FIX.get(s, s)


def split_proto(sig):
    """'int __thiscall Foo::bar(int *param_1,int param_2)' -> (ret, cc, [params])"""
    m = re.match(r"^(.*?)\s*\b(__thiscall|__fastcall|__stdcall|__cdecl|__vectorcall)?\s*[^\s(]*\((.*)\)\s*$", sig)
    if not m:
        return None
    ret, cc, params = m.group(1).strip(), m.group(2) or "", m.group(3).strip()
    ps = [] if params in ("", "void") else split_params(params)
    return ret or "void", cc, ps


def split_params(s):
    out, depth, cur = [], 0, ""
    for ch in s:
        if ch in "(<[":
            depth += 1
        elif ch in ")>]":
            depth -= 1
        if ch == "," and depth == 0:
            out.append(cur.strip())
            cur = ""
        else:
            cur += ch
    if cur.strip():
        out.append(cur.strip())
    return out


def fix_type(t, known):
    """Map a Ghidra type to something the scaffold declares; unknown structs become void."""
    t = re.sub(r"\s+", " ", t).strip()
    base = re.sub(r"[\s\*&]+$", "", t)
    base = re.sub(r"^(const |struct |class |enum |union )", "", base)
    if base in known or base in PRIMS:
        return t
    stars = t[len(t.rstrip("* ")):].replace(" ", "")
    return ("void " + stars) if stars else "undefined4"


def param_decl(p, known):
    if p == "...":
        return p
    m = re.match(r"^(.*?)([A-Za-z_]\w*)$", p)
    # an unnamed parameter ("int", "unsigned long") is all type
    if not m or not m.group(1).strip() or m.group(2) in PRIMS or p in PRIMS:
        return fix_type(p, known)
    return "%s %s" % (fix_type(m.group(1).strip(), known), ident(m.group(2)))


def member_decl(row, known, static=False, name=None, ctor=None):
    p = split_proto(row["signature"])
    name = ident(name or row["name"])
    if not p:
        return ("%s()" % ctor) if ctor else "void %s()" % name
    ret, cc, ps = p
    # Ghidra only materialises `this` (ECX) as the first parameter of __thiscall/__fastcall
    # prototypes; otherwise every listed parameter is a real one and `this` was unused
    if cc in ("__thiscall", "__fastcall") and ps:
        ps = ps[1:]
    args = ", ".join(param_decl(x, known) for x in ps)
    if ctor:
        return "%s(%s)" % (ctor, args)
    return "%s%s %s(%s)" % ("static " if static else "", fix_type(ret, known), name, args)


def norm_types(decl):
    """Parameter types only, with typedef aliases collapsed (undefined4 == uint to the compiler)."""
    d = re.sub(r"\s+\w+(?=[,)])", "", decl)
    for pat, rep in ((r"\b(undefined4|dword|uint)\b", "unsigned int"), (r"\b(undefined1|byte|uchar|undefined)\b", "unsigned char"),
                     (r"\b(undefined2|word|ushort)\b", "unsigned short"), (r"\b(undefined8|qword|ulonglong)\b", "unsigned long long")):
        d = re.sub(pat, rep, d)
    return d


def direct_bases(c):
    """RTTI lists all bases depth-first; a direct base is one not contained in an earlier base."""
    out, i, bs = [], 0, c["bases"]
    while i < len(bs):
        out.append(bs[i]["name"])
        i += 1 + bs[i]["contained"]
    return out


def split_scope(ns):
    parts, depth, cur, i = [], 0, "", 0
    while i < len(ns):
        if ns[i] == "<":
            depth += 1
        elif ns[i] == ">":
            depth -= 1
        if depth == 0 and ns.startswith("::", i):
            parts.append(cur)
            cur = ""
            i += 2
            continue
        cur += ns[i]
        i += 1
    parts.append(cur)
    return parts


def placeholder(n):
    return re.match(r"^(thunk_)?(vf[0-9A-F]+|vfunction\d+|FUN_[0-9a-f]+|_*purecall)$", n) is not None


def key(ea):
    return ea.lower().lstrip("0")


def load():
    rows = list(csv.DictReader(open(os.path.join(ROOT, "logs", "main_names.csv"), encoding="utf-8"), delimiter="\t"))
    rtti = json.load(open(os.path.join(ROOT, "export", "rtti.json")))
    # the decompiler's inferred prototype (first code line of each function) beats Ghidra's stored one
    protos = {}
    with open(os.path.join(ROOT, "export", "functions.jsonl"), encoding="utf-8") as jf:
        for line in jf:
            o = json.loads(line)
            for ln in (o.get("c") or "").splitlines():
                ln = ln.strip()
                if not ln or ln.startswith(("/*", "//", "*")):
                    continue
                if "(" in ln:
                    protos[key(o["ea"])] = ln
                break
    for r in rows:
        r["signature"] = protos.get(key(r["entry"]), r["signature"])
    return rows, rtti


def slot_model(rows, rtti, class_names=frozenset()):
    """-> own_virtuals {class: [(slot, root, row)]}, canon {root: (name, proto_row)}, renames"""
    row_at = {key(r["entry"]): r for r in rows}
    prim, pbase = {}, {}
    for c in rtti:
        vt0 = [v for v in c["vftables"] if v["offset"] == 0]
        prim[c["name"]] = [key(ea) for ea in vt0[0]["slots"]] if vt0 else []
        db = direct_bases(c)
        pbase[c["name"]] = db[0] if db and c["bases"][0]["mdisp"] == 0 else None

    def root_of(cls, i):
        while True:
            b = pbase.get(cls)
            if b is None or i >= len(prim.get(b, [])):
                return (cls, i)
            cls = b

    members = collections.defaultdict(list)
    own = collections.defaultdict(list)
    for cls, slots in prim.items():
        b = pbase.get(cls)
        bslots = prim.get(b, []) if b else []
        for i, ea in enumerate(slots):
            if i < len(bslots) and bslots[i] == ea:
                continue  # inherited unchanged
            r = row_at.get(ea)
            if r is None:
                continue
            rt = root_of(cls, i)
            members[rt].append((cls, r))
            own[cls].append((i, rt, r))

    canon, renames = {}, []
    for rt, ms in members.items():
        rcls, i = rt
        rs = [r for _, r in ms]
        is_dtor = any(r["name"].startswith("~") for r in rs)
        names = [r["name"] for r in rs if not placeholder(r["name"]) and not r["name"].startswith("~")
                 and re.sub(r"_\d+$", "", r["name"]) not in class_names | {r["namespace"]}]
        name = re.sub(r"_\d+$", "", names[0]) if names else "vf%02X" % (i * 4)
        # prototype: prefer an implementation that is not a pure-virtual stub
        good = [r for r in rs if "purecall" not in r["name"]] or rs
        canon[rt] = ("~" if is_dtor else name), good[0]
        if not is_dtor:
            for cls, r in ms:
                if r["name"] != name:
                    renames.append((r["entry"].upper(), cls, r["name"], name, "%s+0x%X" % (rcls, i * 4)))
    return own, canon, renames


def main():
    rows, rtti = load()
    rtti_by_name = {c["name"]: c for c in rtti}

    by_ns = collections.defaultdict(list)
    for r in rows:
        if r["namespace"] and not RESERVED_NAMES.match(r["name"]):
            by_ns[r["namespace"]].append(r)
    # classes: RTTI classes, or namespaces owning __thiscall / vfXX functions
    is_class = set(rtti_by_name)
    for ns, fs in by_ns.items():
        if any(f["callconv"] == "__thiscall" or re.match(r"^(thunk_)?vf[0-9A-F]+$", f["name"]) for f in fs):
            is_class.add(ns)
    scopes = set()
    for ns in list(by_ns) + list(is_class):
        parts = split_scope(ns)
        for i in range(1, len(parts)):
            scopes.add("::".join(parts[:i]))
    # only names fwd.h actually declares (top-level, non-template) may appear in prototypes
    known = {n for n in (is_class | scopes) if "::" not in n and "<" not in n and "`" not in n and n not in SKIP_FWD}

    own, canon, renames = slot_model(rows, rtti, frozenset(is_class))
    with open(os.path.join(ROOT, "logs", "slot_renames.csv"), "w", encoding="utf-8", newline="") as sf:
        w = csv.writer(sf)
        w.writerow(["entry", "class", "old", "new", "root_slot"])
        w.writerows(renames)

    os.makedirs(os.path.join(AUTO, "classes"), exist_ok=True)
    with open(os.path.join(AUTO, "fwd.h"), "w", encoding="utf-8") as f:
        f.write("// generated by tools/gen_headers.py -- forward declarations\n#pragma once\n\n")
        for ns in sorted(known):
            f.write(("struct %s;\n" if ns in is_class else "namespace %s {}\n") % ident(ns))

    n_classes = 0
    for ns in sorted(known & is_class):
        fs = by_ns.get(ns, [])
        path = os.path.join(AUTO, "classes", ident(ns) + ".h")
        refined = os.path.join(ROOT, class_file(ns).replace(".cpp", ".h").replace("/", os.sep))
        with open(path, "w", encoding="utf-8") as h:
            h.write("// generated by tools/gen_headers.py from RTTI + Ghidra prototypes\n#pragma once\n")
            if os.path.exists(refined) and open(refined, encoding="utf-8").readline().startswith("// REFINED"):
                h.write('#include "%s"\n' % os.path.relpath(refined, os.path.dirname(path)).replace("\\", "/"))
                continue
            c = rtti_by_name.get(ns)
            direct = [b for b in (direct_bases(c) if c else []) if b in known]
            for b in direct:
                h.write('#include "%s.h"\n' % ident(b))
            h.write('#include "../../ghidra_types.h"\n#include "../fwd.h"\n\n')
            h.write("struct %s%s {\n" % (ident(ns), (" : " + ", ".join("public " + ident(b) for b in direct)) if direct else ""))
            declared, virt_eas = set(), set()
            ov = sorted(own.get(ns, []), key=lambda x: x[0])
            if ov:
                h.write("    // virtual functions, in vftable order (slot = byte offset / 4)\n")
            for i, rt, r in ov:
                virt_eas.add(key(r["entry"]))
                cname, prow = canon[rt]
                decl = ("virtual ~%s()" % ident(ns)) if cname == "~" else "virtual " + member_decl(prow, known, name=cname)
                if "purecall" in r["name"]:
                    decl += " = 0"
                vname = "~" if cname == "~" else ident(cname)
                if vname in declared:
                    continue
                if c and c["mi"] and rt[0] != ns:
                    continue  # override resolution across secondary bases is not modelled yet
                declared.add(vname)
                h.write("    %s;  // %s slot 0x%X%s\n" % (decl, r["entry"].upper(), i * 4,
                                                        "" if rt[0] == ns else "  overrides " + rt[0]))
            other = [r for r in fs if key(r["entry"]) not in virt_eas]
            if other:
                h.write("    // non-virtual members\n")
            for r in other:
                if r["name"] == ns or re.match(r"^%s_\d+$" % re.escape(ns), r["name"]):
                    decl = member_decl(r, known, ctor=ident(ns))
                elif r["name"].startswith("~"):
                    decl = "~%s()" % ident(ns)
                else:
                    decl = member_decl(r, known, static=r["callconv"] not in ("__thiscall", "__fastcall"))
                # members are deduplicated by name (Ghidra names are unique; clashes are artefacts)
                is_ctor = decl.startswith(ident(ns) + "(")
                mname = "~" if decl.startswith("~") else ("()ctor" + norm_types(decl) if is_ctor else re.search(r"(\w+)\(", decl).group(1))
                if mname in declared:
                    if decl.startswith("~"):
                        continue
                    if is_ctor:
                        # a second ctor with the same parameters (e.g. a base-object variant)
                        decl = "void ctor_%s%s" % (r["entry"].upper(), decl[len(ident(ns)):])
                    else:
                        decl = re.sub(r"(\w+)\(", r"\1_%s(" % r["entry"].upper(), decl, count=1)
                    mname = re.search(r"(\w+)\(", decl).group(1)
                declared.add(mname)
                h.write("    %s;  // %s\n" % (decl, r["entry"].upper()))
            h.write("};\n")
        n_classes += 1

    seen = set()
    with open(os.path.join(AUTO, "functions.h"), "w", encoding="utf-8") as f:
        f.write("// generated by tools/gen_headers.py -- free functions\n#pragma once\n"
                '#include "../ghidra_types.h"\n#include "fwd.h"\n\n')
        for r in rows:
            if r["namespace"] or RESERVED_NAMES.match(r["name"]) or r["name"].startswith("~"):
                continue
            nm = ident(r["name"])
            if nm in seen or nm in known:
                continue
            seen.add(nm)
            p = split_proto(r["signature"])
            if not p:
                continue
            ret, cc, ps = p
            # __thiscall is only legal on members: a free function using it is a method of a class
            # nobody has identified yet; declare it plainly and keep the convention in the comment
            this_call = cc == "__thiscall"
            f.write("%s %s%s(%s);  // %s%s\n" % (fix_type(ret, known), "" if this_call or not cc else cc + " ", nm,
                                                 ", ".join(param_decl(x, known) for x in ps) or "void",
                                                 r["entry"].upper(), " __thiscall" if this_call else ""))
    print("class headers", n_classes, "free functions", len(seen), "slot renames", len(renames))


if __name__ == "__main__":
    main()
