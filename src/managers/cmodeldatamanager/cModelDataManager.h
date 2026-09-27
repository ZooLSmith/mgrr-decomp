// REFINED
// cModelDataManager -- no RTTI; reconstructed from its one named method. Model data entries are
// 0x1F0-byte slots of a global pool (DAT_0189ef28 / count DAT_0189ef2c), indexed by file id in a
// binary tree rooted at DAT_01b7b398 and guarded by the critical section DAT_01b7b4d0.
#pragma once
#include "ghidra_types.h"
#include "auto/fwd.h"

struct cModelDataManager {
    // non-virtual members
    // 00A19920: returns the model data (entry + 0x10) for `fileId`, creating the entry if needed; 0 on failure.
    static int EntryModelData(unsigned int fileId, undefined4 arg);
};
