// src/managers/battleparametermanager/BattleParameterManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "BattleParameterManager.h"

// 00D72800  BattleParameterManager::vf0C  size=31  [class]
// Scalar deleting destructor.
undefined4 *BattleParameterManager::vf0C(byte flags)
{
    // vftable = BattleParameterManager::vftable (0x016C0C24)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00D76170  BattleParameterManager::BattleParameterManager  size=30  [class]
// Destructor body of BattleParameterManagerImplement.
void BattleParameterManager::implementDestructor()
{
    // vftable = BattleParameterManagerImplement::vftable (0x016C0EEC)
    FUN_00d73210((int)this);  // frees every entry and the entry array
    FUN_00dd7270((undefined4)((char *)this + 0x8));  /* BattleParameterManagerImplement+0x8: lock (critical section) */
    // vftable = BattleParameterManager::vftable (0x016C0C24)
}
