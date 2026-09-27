// src/managers/targetmanager/TargetManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "TargetManager.h"

// 00C12530  TargetManager::vf08  size=31  [class]
// Scalar deleting destructor: bit 0 of `flags` frees the object.
undefined4 *TargetManager::vf08(byte flags)
{
    // vftable = TargetManager::vftable (0x016A3124)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return (undefined4 *)this;
}
