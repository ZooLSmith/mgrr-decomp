# METAL GEAR RISING: REVENGEANCE — decompilation

Source reconstruction of the 2014 Steam PC build of `METAL GEAR RISING REVENGEANCE.exe`
(PE32, MSVC 2010 / linker 10.0, timestamp `0x52E76F3A`, ImageBase `0x400000`, no PDB).
Internal project name, from strings in the exe: **PRJ_020**
(`D:\project\PRJ_020\p1\common\src\...`, `PRJ_020.pdb`).

## Layout

```
src/            game code (PlatinumGames), one .cpp per reconstructed translation unit
  phase/app/    per-mission phase scripts  (path leaked by __FILE__: src/phase/app/p093.cpp)
  managers/     *Manager singletons         (leaked: src/managers/triggermanager/actions/...)
  system/       sys:: allocators, Mem.cpp   (leaked: src/system/Mem.cpp)
  havok/        game-side Havok glue         (leaked: src/havok/collision/rigidBodyCollision.cpp)
  player/ enemy/ boss/ weapon/ object/ ...   actor classes by id (pl0010, em0010, bm0600 ...)
  unsorted/     game functions whose file could not be determined (unit_<first address>.cpp)
lib/            third-party code, kept apart from the game
  havok/        Havok 2011.3.0 (paths leaked: lib/havok/Source/...)
  wwise/ cri/   Audiokinetic Wwise, CRI middleware
  msvc/         statically linked VS2010 CRT/STL
data/           the game's own data, extracted from GameData/*.cpk (see data/SUMMARY.md)
FILEMAP.csv     every function: address, name, file, and WHY it is in that file
tools/          the pipeline that produced all of the above
```

## How much of this is "original"

There is no debug information. What is recovered from the binary is:

| thing | source | exactness |
|---|---|---|
| function bodies | Ghidra decompiler | semantically the machine code; not the original text |
| class names, vtables, inheritance | MSVC RTTI (3,485 type descriptors, 3,544 vftables) | exact |
| method names | debug / assert strings (`"[Animation::Unit::setAnimation] ..."`) | exact where given |
| virtual methods without a string | `Class::vfXX` (XX = vtable byte offset) | class exact, name placeholder |
| ctors / dtors | functions that store a class's vftable | high |
| file paths | 16 game + ~70 Havok `__FILE__` strings | exact for those files |
| other file paths | class → directory rules + link order (`tools/organize.py`) | **inferred** |

`FILEMAP.csv` column `reason` says which: `__FILE__` (leaked path), `class` (class
namespace), `between` (between two functions of the same file — MSVC keeps a translation
unit contiguous), `callgraph` (tail/head of a neighbouring file, chosen by call links),
`run` (unknown; grouped by address).

## Rebuilding everything

Requires Ghidra 12.1 (`C:\Program Files\Ghidra`), JDK 21, Python 3.

```bat
tools\run_analysis.bat                                 :: import + auto-analysis (~25 min)
tools\run_postprocess.bat -postScript VtableNames.java -postScript NameFromStrings.java
tools\run_postprocess.bat -postScript ExportDecomp.java   :: export/functions.jsonl (~1.5 h)
python tools\organize.py                               :: src/, lib/, FILEMAP.csv
python tools\cpk_extract.py extract                    :: data/
python tools\dat_extract.py index                      :: data/DAT_INDEX.csv
```

On a 16 GB machine run one Ghidra job at a time (`GHIDRA_HEADLESS_MAXMEM=4G`,
`JAVA_TOOL_OPTIONS=-Dcpu.core.limit=6` for the export).
