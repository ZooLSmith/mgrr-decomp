// REFINED
// cEnemyInfoManager -- enemy information manager (weak point / NPC info work lists held in
// Hw::cHwLFFreeListTemp<cEnemyInfoManager::_WeakPointWork> / <_NpcInfoWork> free lists).
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct cEnemyInfoManager {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 vf00(byte flags);  // 00988CD0 slot 0x0  scalar deleting destructor
};
