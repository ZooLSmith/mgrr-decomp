// src/managers/gamestagemanager/GameStageManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "GameStageManager.h"

namespace GameStageManager_p1 {

const unsigned int kVftable = 0x0164AD68;  // GameStageManager::vftable

}  // namespace GameStageManager_p1

// 008DFB70  GameStageManager::vf14  size=31  [class]
// Scalar deleting destructor.
undefined4 *GameStageManager::vf14(byte flags)
{
    *(unsigned int *)this = GameStageManager_p1::kVftable;  // vftable = GameStageManager::vftable
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}
