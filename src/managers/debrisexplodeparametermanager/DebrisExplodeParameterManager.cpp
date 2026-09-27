// src/managers/debrisexplodeparametermanager/DebrisExplodeParameterManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "DebrisExplodeParameterManager.h"

extern DebrisExplodeParameterManager *DAT_01b36a50;  // the DebrisExplodeParameterManager instance

namespace DebrisExplodeParameterManager_p1 {

const unsigned int kImplementVftable = 0x0164F728;  // DebrisExplodeParameterManagerImplement::vftable
const unsigned int kVftable          = 0x0164F424;  // DebrisExplodeParameterManager::vftable

}  // namespace DebrisExplodeParameterManager_p1

// 0093D990  DebrisExplodeParameterManager::vf1C  size=31  [class]
// Scalar deleting destructor.
undefined4 *DebrisExplodeParameterManager::vf1C(byte flags)
{
    *(unsigned int *)this = DebrisExplodeParameterManager_p1::kVftable;  // vftable = DebrisExplodeParameterManager::vftable
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 0093DEE0  DebrisExplodeParameterManager::vf0C  size=13  [class]
// Tail call of the instance's vf0C with the same arguments.
void DebrisExplodeParameterManager::vf0C(undefined4 param)
{
    DAT_01b36a50->vf0C(param);
}

// 0093DEF0  DebrisExplodeParameterManager::vf10  size=13  [class]
// Tail call of the instance's vf10 with the same arguments.
undefined4 DebrisExplodeParameterManager::vf10(int id)
{
    return DAT_01b36a50->vf10(id);
}

// 0093DF00  DebrisExplodeParameterManager::vf14  size=13  [class]
// Tail call of the instance's vf14 with the same arguments.
undefined4 DebrisExplodeParameterManager::vf14(int id)
{
    return DAT_01b36a50->vf14(id);
}

// 0093DF10  DebrisExplodeParameterManager::vf18  size=13  [class]
// Tail call of the instance's vf18 with the same arguments.
int DebrisExplodeParameterManager::vf18(int id)
{
    return DAT_01b36a50->vf18(id);
}

// 00943EC0  DebrisExplodeParameterManager::DebrisExplodeParameterManager  size=30  [class]
// Non-deleting destructor of DebrisExplodeParameterManagerImplement.
void DebrisExplodeParameterManager::destroyAsImplement()
{
    using namespace DebrisExplodeParameterManager_p1;
    *(unsigned int *)this = kImplementVftable;   // vftable = DebrisExplodeParameterManagerImplement::vftable
    FUN_0093fe30((int)this);
    FUN_00dd7270((undefined4)((char *)this + 0x8));  /* DebrisExplodeParameterManagerImplement+0x8: lock */
    *(unsigned int *)this = kVftable;            // vftable = DebrisExplodeParameterManager::vftable
}
