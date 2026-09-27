// src/managers/gameworkmanager/GameWorkManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "GameWorkManager.h"

namespace GameWorkManager_p1 {

const unsigned int kVftable = 0x016A3474;  // GameWorkManager::vftable

}  // namespace GameWorkManager_p1

// 00C14DA0  GameWorkManager::vf00  size=31  [class]
// Scalar deleting destructor.
undefined4 *GameWorkManager::vf00(byte flags)
{
    *(unsigned int *)this = GameWorkManager_p1::kVftable;  // vftable = GameWorkManager::vftable
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}
