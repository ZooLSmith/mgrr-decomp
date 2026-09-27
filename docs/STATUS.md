# Status / handoff

_Last updated 2026-09-27._

## Done (committed)

| commit | what |
|---|---|
| `389b993` | baseline: raw Ghidra decompilation, 75,825 functions in src/ + lib/ |
| `b7ef5bc` | compile scaffold: `tools/rtti.py`, `tools/gen_headers.py`, `include/`, `tools/cc.bat`; all headers compile |
| `b0cf210` | pilot readability pass: cParts, cModelBase, cModel, cObj, Behavior, BehaviorAppBase, BehaviorEmBase, src/system (532 functions, all compile, verified) |
| `882ab02` | names: RTTI ctor/dtor merge, canonical virtual-slot names, re-export, cleaned files frozen |
| `26e353b` | trigger actions/conditions split per ID; batched cleanup planner |

Game data: extracted to `data/` (gitignored, `tools/cpk_extract.py`).

## In progress: wave 2 (player pl0000/pl0010 + managers)

- Plan: `logs/wave2.json` (59 items, 691 units, 4.3 MB raw). Show a unit:
  `python tools/plan_cleanup.py --show logs/wave2.json <item> [<unit>]`
- Workflow script: `~/.claude/projects/E--Projects-cpp-mgrr-decomp/<session>/workflows/scripts/mgrr-cleanup-v2-wf_d412116e-592.js`,
  run id `wf_d412116e-592`. Resume in the same session with
  `Workflow({scriptPath, resumeFromRunId: "wf_d412116e-592"})`; in a new session re-run the
  script with the same args (`--summary` below) — part files already written can be kept by
  skipping items whose parts all exist and compile.
- Args: `{"plan": "logs/wave2.json", "items": <output of python tools/plan_cleanup.py --summary logs/wave2.json>}`
- Agents write `src/**/<file>.cpp.partN`. Afterwards:
  1. `python tools/assemble_parts.py --all`  (checks every raw function is present in order; parts are moved to logs/parts_backup)
  2. compile each assembled file: `tools\cc.bat src\...\File.cpp`; fix leftovers
  3. `python tools/gen_headers.py` (also refreshes include/auto/cleaned.h)
  4. commit wave 2

## Cost reference

Pilot: ~3.1M tokens for 533 functions (~8 tokens per byte of raw code). Wave 2 est. ~35M.
The user chose: player + managers only (not the rest of core) for now.

## Not compilable/linkable as a whole yet

Every cleaned file compiles on its own against the scaffold; raw files do not. Linking a
working exe is out of scope so far (see README "How much of this is original").
