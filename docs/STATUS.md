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
| `a0ba14b` | wave 2: 644 of 662 files (managers, triggers, pl0010 states) cleaned, verified, all compile |

Game data: extracted to `data/` (gitignored, `tools/cpk_extract.py`).

## Paused: Pl0000.cpp (last file of wave 2)

Paused by the user on 2026-09-28 with `src/player/pl0000/Pl0000.cpp.part0` .. `part16` written
(chunks 1-17 of 22; each part compiles against the current, uncommitted `Pl0000.h`). Not yet
done: chunks 18-22 (`part17` .. `part21`) and the adversarial verification of all 22 parts.

To resume:
1. For each missing chunk k in 17..21 run one rewrite agent with the wave-2 prompt
   (workflow script `mgrr-cleanup-v2-*.js`, `rewriteUnitPrompt(item 0, k)`); its unit:
   `python tools/plan_cleanup.py --show logs/wave2.json 0 <k>`. Chunks run in sequence (they extend Pl0000.h).
2. Run the 22 verifiers (`verifyPrompt(item 0, k)` for k = 0..21, parallel).
3. `python tools/assemble_parts.py src/player/pl0000/Pl0000.cpp`, then `tools\cc.bat` on it, then
   `python tools/gen_headers.py`, then commit Pl0000.cpp + Pl0000.h + include/auto/classes/Pl0000.h.

Everything else in wave 2 (661 of 662 files) is committed (`a0ba14b`, `c4c509a`).

## Cost reference

Pilot: ~3.1M tokens for 533 functions (~8 tokens per byte of raw code). Wave 2 est. ~35M.
The user chose: player + managers only (not the rest of core) for now.

## Not compilable/linkable as a whole yet

Every cleaned file compiles on its own against the scaffold; raw files do not. Linking a
working exe is out of scope so far (see README "How much of this is original").
