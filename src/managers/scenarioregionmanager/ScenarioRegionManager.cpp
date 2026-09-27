// src/managers/scenarioregionmanager/ScenarioRegionManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "ScenarioRegionManager.h"

// 00A6D410  ScenarioRegionManager::vf00  size=31  [class]
// Scalar deleting destructor: bit 0 of `flags` frees the object.
undefined4 *ScenarioRegionManager::vf00(byte flags)
{
    // vftable = ScenarioRegionManager::vftable (0x01662EF4)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return (undefined4 *)this;
}
