// src/managers/phantommanager/PhantomManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "PhantomManager.h"

// 009002F0  PhantomManager::vf20  size=31  [class]
// Scalar deleting destructor: bit 0 of `flags` frees the object.
undefined4 *PhantomManager::vf20(byte flags)
{
    // vftable = PhantomManager::vftable (0x0164BF14)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return (undefined4 *)this;
}
