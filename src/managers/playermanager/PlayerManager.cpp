// src/managers/playermanager/PlayerManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "PlayerManager.h"

// 00C13430  PlayerManager::vf00  size=31  [class]
// Scalar deleting destructor: bit 0 of `flags` frees the object.
undefined4 *PlayerManager::vf00(byte flags)
{
    // vftable = PlayerManager::vftable (0x016A3224)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return (undefined4 *)this;
}
