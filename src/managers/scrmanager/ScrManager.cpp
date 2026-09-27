// src/managers/scrmanager/ScrManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "ScrManager.h"

// 00C14270  ScrManager::vf74  size=31  [class]
// Scalar deleting destructor: bit 0 of `flags` frees the object.
undefined4 *ScrManager::vf74(byte flags)
{
    // vftable = ScrManager::vftable (0x016A3304)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return (undefined4 *)this;
}
