// src/managers/battleregionmanager/BattleRegionManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "BattleRegionManager.h"

// 00401010  BattleRegionManager::vf14  size=31  [class]
// Scalar deleting destructor.
undefined4 *BattleRegionManager::vf14(byte flags)
{
    // vftable = BattleRegionManager::vftable (0x0163B4E0)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}
