// src/managers/datsusettablemanager/DatsuSetTableManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "DatsuSetTableManager.h"

extern DatsuSetTableManager *DAT_01b36a20;  // the DatsuSetTableManager instance

namespace DatsuSetTableManager_p1 {

const unsigned int kImplementVftable = 0x0164F2EC;  // DatsuSetTableManagerImplement::vftable
const unsigned int kVftable          = 0x0164F234;  // DatsuSetTableManager::vftable

}  // namespace DatsuSetTableManager_p1

// 0093BD60  DatsuSetTableManager::vf14  size=31  [class]
// Scalar deleting destructor.
undefined4 *DatsuSetTableManager::vf14(byte flags)
{
    *(unsigned int *)this = DatsuSetTableManager_p1::kVftable;  // vftable = DatsuSetTableManager::vftable
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 0093C000  DatsuSetTableManager::vf0C  size=13  [class]
// Tail call of the instance's vf0C with the same arguments.
void DatsuSetTableManager::vf0C(undefined4 param)
{
    DAT_01b36a20->vf0C(param);
}

// 0093C010  DatsuSetTableManager::vf10  size=13  [class]
// Tail call of the instance's vf10 with the same arguments.
undefined4 DatsuSetTableManager::vf10(int id)
{
    return DAT_01b36a20->vf10(id);
}

// 0093D0B0  DatsuSetTableManager::DatsuSetTableManager  size=30  [class]
// Non-deleting destructor of DatsuSetTableManagerImplement.
void DatsuSetTableManager::destroyAsImplement()
{
    using namespace DatsuSetTableManager_p1;
    *(unsigned int *)this = kImplementVftable;   // vftable = DatsuSetTableManagerImplement::vftable
    FUN_0093c410((int)this);
    FUN_00dd7270((undefined4)((char *)this + 0x8));  /* DatsuSetTableManagerImplement+0x8: lock */
    *(unsigned int *)this = kVftable;            // vftable = DatsuSetTableManager::vftable
}
