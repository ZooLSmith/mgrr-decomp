// REFINED
// EffectResourceManager -- registry of effect resources (eff/eft file pairs keyed by resource id).
// No RTTI, no vftable and no instance: every member is called without `this`, so all are static.
//
// Resource ids used by the free functions in EffectResourceManager.cpp:
//   0x1000 + roomNo    room effects   ("rXXX")
//   0x2000 + phaseNo   phase effects  ("pXXX")
//   0x20000000 + (eventType << 16) + eventNo   event effects (GetNameFromEventNo)
//   0xFFF              "no resource"
#pragma once

struct EffectResourceManager {
    // 00E004B0 -- despite the name (taken from its inlined assertion text), this registers the
    // "eff"/"eft" files of `archive` as resource 0x1000 + roomNo under the name "rXXX".
    // Returns 1 when the archive has no "eff" file, 0 for the invalid id, else SetEffectResource() != 0.
    static int GetNameFromRoomNo(unsigned int roomNo, int *archive);
    // 00E005D0 -- same for phases: resource 0x2000 + phaseNo, name "pXXX".
    static int GetNameFromPhaseNo(unsigned int phaseNo, int *archive);
    // 00E00A60 / 00E00A70 -- incremental-link thunks (jmp) to the two functions above.
    static int thunk_GetNameFromRoomNo(unsigned int roomNo, int *archive);
    static int thunk_GetNameFromPhaseNo(unsigned int phaseNo, int *archive);

    // 00F49E10 -- writes "EVxxxx" (type 0), "Rrrr" "EVxxxx" (type 1) or "Pppp" "EVxxxx" (type 2).
    static void GetNameFromEventNo(char *out, int size, int eventType, unsigned int eventNo);
    // 00F4A100 -- matches `target` against `format` ('*' = hex digit, '+' = decimal digit,
    // '-' = any char); digit runs are accumulated into ids[0..maxIndex]. Returns 1 on match.
    static int CheckGetId(const char *target, const char *format, int *ids, int maxIndex);
    // 00F4B4E0 -- releases every registered resource whose data lies in the given memory range (?)
    static void OnDestroyResource(unsigned int memoryBegin, unsigned int memorySize);
    // 00F4C130 -- registers (or add-refs) resource `resourceId` with its eff/eft data.
    static int SetEffectResource(int resourceId, const char *name, int effData, int eftData);
};
