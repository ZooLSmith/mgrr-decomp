// REFINED
// cEventInfoManager -- event information manager; a single global instance lives at 0x0188DD28.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct cEventInfoManager {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 * vf00(byte flags);  // 00985770 slot 0x0  scalar deleting destructor
    // non-virtual members
    // 015ECAB0 (FILEMAP: cEventInfoManager::cEventInfoManager): dynamic initializer of the global
    // instance at 0x0188DD28 (its inlined constructor only stores the vftable).
    static void initGlobalInstance();
};
