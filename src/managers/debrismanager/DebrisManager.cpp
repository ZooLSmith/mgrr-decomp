// src/managers/debrismanager/DebrisManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "DebrisManager.h"

namespace DebrisManager_p1 {

const unsigned int kImplementVftable = 0x016A71A8;  // DebrisManagerImplement::vftable
const unsigned int kVftable          = 0x016A3868;  // DebrisManager::vftable

// Virtual function at byte offset `offset` of the vftable of `obj`.
template <class Sig> inline Sig vfunc(void *obj, int offset) { return *(Sig *)(*(char **)obj + offset); }

// Releases the sorted array embedded at DebrisManagerImplement+0xC (inlined helper).
inline void releaseSortedArray(char *self)
{
    if (*(int *)(self + 0x10) != 0) {                   /* DebrisManagerImplement+0x10: array data */
        FUN_00c3f310((int)(self + 0xC));                /* DebrisManagerImplement+0xC: sorted array */
        if (*(int *)(self + 0x1C) != 0) {               /* DebrisManagerImplement+0x1C: owns data */
            FUN_00dd48d0(*(int *)(self + 0x10), 0);
            *(int *)(self + 0x1C) = 0;
        }
        *(int *)(self + 0x10) = 0;
        *(int *)(self + 0x14) = 0;                      /* DebrisManagerImplement+0x14: capacity */
    }
}

}  // namespace DebrisManager_p1

// 00C1C580  DebrisManager::vf00  size=31  [class]
// Scalar deleting destructor.
undefined4 *DebrisManager::vf00(byte flags)
{
    *(unsigned int *)this = DebrisManager_p1::kVftable;  // vftable = DebrisManager::vftable
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00C62B00  DebrisManager::DebrisManager  size=129  [class]
// Non-deleting destructor of DebrisManagerImplement.
void DebrisManager::destroyAsImplement()
{
    using namespace DebrisManager_p1;
    char *self = (char *)this;

    *(unsigned int *)this = kImplementVftable;  // vftable = DebrisManagerImplement::vftable
    void *list = *(void **)(self + 0x8);        /* DebrisManagerImplement+0x8: entity list */
    if (list != 0) {
        vfunc<void (__thiscall *)(void *, int)>(list, 0x0)(list, 1);  // list->vf00(1): delete
        *(void **)(self + 0x8) = 0;
    }
    releaseSortedArray(self);
    FUN_00dd7270((undefined4)(self + 0x20));    /* DebrisManagerImplement+0x20: lock */
    releaseSortedArray(self);                   // member destructor of the sorted array
    *(unsigned int *)this = kVftable;           // vftable = DebrisManager::vftable
}
