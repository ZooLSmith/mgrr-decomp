// src/managers/scenariomanager/ScenarioManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "ScenarioManager.h"

// 00A6D440  ScenarioManager::vfA8  size=31  [class]
// Scalar deleting destructor: bit 0 of `flags` frees the object.
undefined4 *ScenarioManager::vfA8(byte flags)
{
    // vftable = ScenarioManager::vftable (0x01662F84)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return (undefined4 *)this;
}
