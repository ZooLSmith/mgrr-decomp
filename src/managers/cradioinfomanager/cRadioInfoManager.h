// REFINED
// cRadioInfoManager -- vftable 0x016528D8. The single instance is a global at 0x0188DD40 whose
// constructor the compiler inlined into its dynamic initialiser (initGlobalInstance below).
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct cRadioInfoManager {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 * vf00(byte flags);  // 009857E0 slot 0x0 (scalar deleting destructor)
    // non-virtual members
    static void initGlobalInstance();  // 015ECAC0 (decompiled as cRadioInfoManager::cRadioInfoManager)
};
