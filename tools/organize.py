"""Turn export/functions.jsonl into a source tree.

MSVC's linker lays out each object file's functions contiguously in .text, in the order the
.obj files were linked. So the function list in address order is a sequence of translation
units (TUs). This script:

  1. classifies every function (game / havok / crt / cri / wwise / ...) from its name,
     namespace, strings and FID match;
  2. anchors TUs where evidence names a file: leaked __FILE__ paths, and class namespaces
     (RTTI + debug-string names);
  3. grows each anchor over the unnamed functions between anchors of the same file, and
     splits the remainder into units at library/class boundaries;
  4. writes src/<path>.cpp for every unit, with each function's address, provenance and
     decompiled body, plus FILEMAP.csv that says why each function landed where it did.

Usage: python tools/organize.py
"""
import collections
import csv
import json
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
EXPORT = os.path.join(ROOT, "export")
OUT = os.path.join(ROOT, "src")

GAME_SRC_PREFIX = re.compile(r"[a-z]:\\project\\prj_020\\p1\\common\\src\\", re.I)
HAVOK_SRC_PREFIX = re.compile(r"(?:[A-Z]:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\|"
                              r"Y:\\Build\\20111220_200011_StandardPackages\\Source\\)", re.I)


def load_functions():
    funcs = []
    with open(os.path.join(EXPORT, "functions.jsonl"), encoding="utf-8") as f:
        for line in f:
            funcs.append(json.loads(line))
    funcs.sort(key=lambda o: int(o["ea"], 16))
    return funcs


def norm_path(p):
    return p.replace("\\", "/").replace("//", "/")


def file_evidence(fn):
    """Return (path, kind) when the function's own strings name its source file."""
    for s in fn.get("strings", []):
        if GAME_SRC_PREFIX.match(s):
            p = norm_path(GAME_SRC_PREFIX.sub("", s))
            # the leaked paths mix "App" and "app"; the directory on disk was one folder
            p = re.sub(r"^phase/[Aa]pp/", "phase/app/", p)
            return "src/" + p, "__FILE__"
        if HAVOK_SRC_PREFIX.match(s) and s.lower().endswith((".cpp", ".inl", ".h")):
            return "lib/havok/Source/" + norm_path(HAVOK_SRC_PREFIX.sub("", s)), "__FILE__"
    return None


LIB_RULES = [
    # (predicate on (name, ns, strings), library dir)
    (lambda n, ns, s: ns.startswith(("hk", "Hk")) or n.startswith(("hk", "Hk_")), "lib/havok"),
    (lambda n, ns, s: n.lower().startswith(("cri", "adx", "cpk")) or ns.lower().startswith("cri")
        or any(x.startswith(("CRI ", "E20", "W20")) and ":" in x for x in s), "lib/cri"),
    (lambda n, ns, s: ns.startswith("AK") or n.startswith("Ak") or any("Wwise" in x or x.startswith("AK::") for x in s), "lib/wwise"),
    (lambda n, ns, s: n.startswith(("SteamAPI", "SteamUser", "SteamFriends")) or ns.startswith("Steam"), "lib/steam"),
    (lambda n, ns, s: ns == "std" or ns.startswith("std::") or ns.startswith("Concurrency"), "lib/msvc/stl"),
]


def classify(fn):
    name, ns, strs = fn["name"], fn["ns"], fn.get("strings", [])
    if fn.get("src") == "IMPORTED" or fn.get("lib"):
        return "lib/msvc/crt"
    for pred, lib in LIB_RULES:
        try:
            if pred(name, ns, strs):
                return lib
        except Exception:
            pass
    # FID matched CRT names look like _memcpy, __alloca_probe, ___security_init_cookie ...
    if fn.get("src") == "ANALYSIS" and re.match(r"^_{1,3}[a-z]", name) and not ns:
        return "lib/msvc/crt"
    return "game"


def strip_templates(ns):
    out, depth = [], 0
    for ch in ns:
        if ch == "<":
            depth += 1
        elif ch == ">":
            depth -= 1
        elif depth == 0:
            out.append(ch)
    return "".join(out)


ACTOR_DIRS = {"pl": "player", "em": "enemy", "bm": "boss", "wp": "weapon", "ba": "object", "bh": "object",
              "bg": "object", "it": "item", "es": "event", "et": "effect", "ef": "effect", "sc": "scene",
              "um": "unit", "esp": "effect/esp"}

# (regex on the outer class name, directory) -- first match wins
KEYWORD_DIRS = [
    (r"^(CAk|Ak|AK$)", "lib/wwise"),
    (r"^Behavior", "src/behavior"),
    (r"^Bounding|Collision|RayCast|Penetrat", "src/collision"),
    (r"^(RigidBody|HkUserData|cHavok|Lthkp|Havok|CharacterControl|Constraint)", "src/havok"),
    (r"^(Camera|cCamera)", "src/camera"),
    (r"Effect|^cEsp|^Esp", "src/effect"),
    (r"^(Sound|Se[A-Z]|Bgm|cSound)", "src/sound"),
    (r"^(Event|cEvent)", "src/event"),
    (r"^Anim", "src/animation"),
    (r"Shader|Texture|^cModel|^Model|Vram|Render|^cGraphic|Light|Fog|Bloom|Blur", "src/graphics"),
    (r"^(cUI|UI|Ui|cUi|Hud|cHud|Menu|cMenu)", "src/ui"),
    (r"^(Save|cSave)", "src/save"),
    (r"^(File|cStrage|Strage|ObjRead|Resource|cXml|Xml|Bxm)", "src/file"),
    (r"^(Pad|Input|cInput|Key)", "src/input"),
    (r"^(Scene|cScene)", "src/scene"),
    (r"^(Battle|Attack|Damage)", "src/battle"),
    (r"^(Zangeki|ZANGEKI)", "src/zangeki"),
    (r"^(VRMission|Vr)", "src/vrmission"),
    (r"^(Task|cTask|Timer)", "src/task"),
    (r"^(Debug|cDebug)", "src/debug"),
]


def class_file(ns):
    """Heuristic file path for a class namespace with no leaked path."""
    # phase/room template instances carry their id in the template argument: cPhase<cP093>
    m = re.search(r"(?:cPhase|cRoom)<c?([PR])([0-9a-f]{3})>", ns, re.I)
    if m:
        return phase_room_file(m.group(1), m.group(2))
    ns = strip_templates(ns)
    # nested classes live in their outer class's file (Foo::Bar::Impl -> Foo/Bar)
    parts = [p for p in ns.split("::") if p and not p.startswith("`")]
    if len(parts) > 2 and not ns.startswith("Trigger::"):
        parts = parts[:2]
    ns = "::".join(parts) or "anon"
    top = parts[0] if parts else "anon"
    if ns.startswith("Trigger::Act::"):
        # matches the leaked managers/triggermanager/actions/TrgActResultSetDisp.cpp naming
        return "src/managers/triggermanager/actions/TrgAct" + ns.split("::")[-1].title().replace("_", "") + ".cpp"
    if ns.startswith("Trigger::Cond::"):
        return "src/managers/triggermanager/conditions/TrgCond" + ns.split("::")[-1].title().replace("_", "") + ".cpp"
    if top == "Trigger":
        return "src/managers/triggermanager/%s.cpp" % "/".join(parts[1:2] or ["Trigger"])
    m = re.match(r"^c?([PR])([0-9a-f]{3})$", top, re.I)
    if m:
        return phase_room_file(m.group(1), m.group(2))
    # actor classes: Em0010, Em0010Weapon, AttackStatePl0010, StateMachineContextPl0010 ...
    m = re.match(r"^(Pl|Em|Bm|Wp|Ba|Bh|Bg|It|Es|Et|Ef|Sc|Um|esp)([0-9a-f]{4})", top, re.I)
    if m:
        d = ACTOR_DIRS[m.group(1).lower()]
        return "src/%s/%s%s/%s.cpp" % (d, m.group(1).lower(), m.group(2).lower(), top)
    m = re.search(r"(Pl|Em)([0-9a-f]{4})$", top)
    if m:
        return "src/%s/%s%s/state/%s.cpp" % (ACTOR_DIRS[m.group(1).lower()], m.group(1).lower(), m.group(2), top)
    m = re.search(r"_(EM|PL|BM)([0-9A-F]{4})", top)
    if m:
        return "src/%s/%s%s/%s.cpp" % (ACTOR_DIRS[m.group(1).lower()], m.group(1).lower(), m.group(2).lower(), top)
    if top in ("lib",):
        return "src/lib/%s.cpp" % "/".join(parts[1:2] or ["lib"])
    if top in ("sys",):
        return "src/system/%s.cpp" % "/".join(parts[1:2] or ["sys"])
    if top in ("Hw", "HW"):
        return "src/hw/%s.cpp" % "/".join(parts[1:2] or ["Hw"])
    base = re.sub(r"Implement$", "", top)
    if base.endswith("Manager"):
        # leaked: managers/triggermanager/...
        return "src/managers/%s/%s.cpp" % (base.lower(), top)
    for rx, d in KEYWORD_DIRS:
        if re.search(rx, top):
            return "%s/%s.cpp" % (d, top)
    return "src/misc/%s.cpp" % top


def phase_room_file(kind, num):
    num = num.lower()
    if kind.upper() == "P":
        # leaked: src/phase/app/p093.cpp, DLC phases under src/phase/app/dlc/pc30.cpp
        return "src/phase/app/%sp%s.cpp" % ("dlc/" if num.startswith("c") else "", num)
    return "src/room/%sr%s.cpp" % ("dlc/" if num.startswith("c") else "", num)


def build_units(funcs):
    """Assign each function a unit path, returning list of (path, reason) aligned with funcs."""
    n = len(funcs)
    assign = [None] * n
    reason = [None] * n
    kind = [classify(f) for f in funcs]

    # 0. library region: past the end of game code, a function between two anchors of the
    #    same library belongs to that library (static libs are linked as contiguous blocks)
    lib_idx = [i for i in range(n) if kind[i] != "game"]
    first_crt = next((i for i in lib_idx if kind[i] == "lib/msvc/crt" and int(funcs[i]["ea"], 16) > 0xF00000), None)
    if first_crt is not None:
        prev = None
        for i in range(first_crt, n):
            if kind[i] != "game":
                if prev is not None and kind[prev] == kind[i]:
                    for j in range(prev + 1, i):
                        kind[j] = kind[i]
                prev = i

    # 1. direct evidence
    for i, f in enumerate(funcs):
        ev = file_evidence(f)
        if ev:
            assign[i], reason[i] = ev[0], ev[1]
        elif kind[i] == "game" and f["ns"]:
            assign[i], reason[i] = class_file(f["ns"]), "class"

    # 1b. a class with a function carrying __FILE__ evidence lives in that file
    cls_file = {}
    for i, f in enumerate(funcs):
        if reason[i] == "__FILE__" and f["ns"] and kind[i] == "game":
            cls_file[strip_templates(f["ns"]).split("::")[0]] = assign[i]
    for i, f in enumerate(funcs):
        if reason[i] == "class":
            c = strip_templates(f["ns"]).split("::")[0]
            if c in cls_file:
                assign[i] = cls_file[c]
            if assign[i].startswith("lib/"):
                kind[i] = assign[i].split("/")[0] + "/" + assign[i].split("/")[1]

    # 2. fill gaps whose two nearest anchored neighbours agree (same TU on both sides)
    anchors = [i for i in range(n) if assign[i]]
    for a, b in zip(anchors, anchors[1:]):
        if b - a > 1 and assign[a] == assign[b]:
            for j in range(a + 1, b):
                if kind[j] == kind[a] or kind[a] == "game":
                    assign[j], reason[j] = assign[a], "between"

    # 2b. a run of unassigned game functions between anchor files A (before) and B (after) is
    #     the tail of A followed by the head of B (link order keeps a TU contiguous). Choose
    #     the split point that best agrees with call-graph links to A's and B's functions.
    #     Runs with no links to either side stay unsorted.
    idx_of = {f["ea"]: i for i, f in enumerate(funcs)}
    anchors = [i for i in range(n) if assign[i] and kind[i] == "game"]
    for a, b in zip(anchors, anchors[1:]):
        if b - a <= 1:
            continue
        run = [j for j in range(a + 1, b) if not assign[j] and kind[j] == "game"]
        if not run:
            continue
        fa, fb = assign[a], assign[b]
        scores = []
        for j in run:
            s = 0
            for ea in funcs[j].get("callers", []) + funcs[j].get("callees", []):
                k = idx_of.get(ea)
                if k is None or not assign[k]:
                    continue
                if assign[k] == fa:
                    s += 1
                elif assign[k] == fb:
                    s -= 1
            scores.append(s)
        if not any(scores):
            continue
        # value(k) = sum(scores[:k]) - sum(scores[k:]); pick the k with the best value
        total = sum(scores)
        best_k, best_v, pref = 0, -total, 0
        for k in range(1, len(run) + 1):
            pref += scores[k - 1]
            v = pref - (total - pref)
            if v > best_v:
                best_k, best_v = k, v
        # only claim up to the last linked function on each side; the unlinked middle may be
        # whole TUs of its own
        a_end = max([p for p in range(best_k) if scores[p] > 0], default=-1)
        b_start = min([p for p in range(best_k, len(run)) if scores[p] < 0], default=len(run))
        for pos, j in enumerate(run):
            if pos <= a_end:
                assign[j], reason[j] = fa, "callgraph"
            elif pos >= b_start:
                assign[j], reason[j] = fb, "callgraph"

    # 3. library functions without a file go to a per-library unit chunked by address runs;
    #    remaining game functions go to units named after their first address, split where
    #    an anchored function intervenes.
    cur_path, cur_kind = None, None
    for i, f in enumerate(funcs):
        if assign[i]:
            cur_path, cur_kind = None, None
            continue
        k = kind[i]
        if cur_path is None or cur_kind != k:
            base = "src/unsorted" if k == "game" else k
            cur_path, cur_kind = "%s/unit_%s.cpp" % (base, f["ea"].upper()), k
        assign[i], reason[i] = cur_path, "run"
    return assign, reason, kind


CLEAN_RE = [
    (re.compile(r"\n{3,}"), "\n\n"),
]


def render(fn, reason):
    c = fn.get("c") or "/* decompilation failed: %s */\n" % fn.get("error", "?")
    for rx, rep in CLEAN_RE:
        c = rx.sub(rep, c)
    head = "// %s  %s%s  size=%d  [%s]" % (
        fn["ea"].upper(), (fn["ns"] + "::") if fn["ns"] else "", fn["name"], fn["size"], reason)
    return head + "\n" + c.strip() + "\n"


def main():
    funcs = load_functions()
    assign, reason, kind = build_units(funcs)
    units = collections.OrderedDict()
    for i, f in enumerate(funcs):
        units.setdefault(assign[i], []).append(i)

    with open(os.path.join(ROOT, "FILEMAP.csv"), "w", encoding="utf-8", newline="") as fm:
        cw = csv.writer(fm)
        cw.writerow(["ea", "name", "file", "reason", "kind"])
        for i, f in enumerate(funcs):
            cw.writerow([f["ea"].upper(), ((f["ns"] + "::") if f["ns"] else "") + f["name"],
                         assign[i], reason[i], kind[i]])

    for path, idxs in units.items():
        full = os.path.join(ROOT, path.replace("/", os.sep))
        os.makedirs(os.path.dirname(full), exist_ok=True)
        with open(full, "w", encoding="utf-8") as out:
            lo, hi = funcs[idxs[0]]["ea"].upper(), funcs[idxs[-1]]["ea"].upper()
            out.write("// %s\n// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), %s..%s, %d functions\n\n"
                      % (path, lo, hi, len(idxs)))
            out.write('#include "types.h"\n\n')
            for i in idxs:
                out.write(render(funcs[i], reason[i]))
                out.write("\n")
    stats = collections.Counter(reason)
    print("functions", len(funcs), "units", len(units), dict(stats))
    print(collections.Counter(kind))


if __name__ == "__main__":
    sys.exit(main())
