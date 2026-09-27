// src/managers/scenebgmanager/SceneBgManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "SceneBgManager.h"

namespace SceneBgManager_p1 {

// SceneBgManagerImplement layout (this file only sees SceneBgManager.h; see
// SceneBgManagerImplement.h): 8 SceneBgWork slots of 0x22B8 bytes from +0x8, and the signal
// slot registered for signal 0x3A at +0x115D4.
const int kWorkCount = 8;
const int kWorkSize = 0x22b8;
inline char *Work(void *self, int index) { return (char *)self + 0x8 + index * kWorkSize; }
inline int &EntityDeletedSlot(void *self) { return *(int *)((char *)self + 0x115d4); }  // +0x115D4

// SceneBgWork fields (offsets from the start of a slot)
inline int &WorkField(char *work, int offset) { return *(int *)(work + offset); }

// FUN_00d8a1d0: unregister `slot` from signal `id` (functions.h lists only one parameter)
inline void UnregisterSlot(int id, int slot)
{
    ((void (__cdecl *)(int, int))FUN_00d8a1d0)(id, slot);
}

}  // namespace SceneBgManager_p1

// 00C142A0  SceneBgManager::vf9C  size=31  [class]
// Scalar deleting destructor: bit 0 of `flags` frees the object.
undefined4 *SceneBgManager::vf9C(byte flags)
{
    // vftable = SceneBgManager::vftable (0x016A3384)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return (undefined4 *)this;
}

// 00C5EB00  SceneBgManager::SceneBgManager  size=186  [class]
// ? Not a constructor: the destructor of SceneBgManagerImplement with ~SceneBgManager inlined
// (it writes the SceneBgManagerImplement vftable first).  Unregisters the signal-0x3A slot,
// runs FUN_009350a0 on every SceneBgWork, then destroys the members of each slot, last first.
SceneBgManager::SceneBgManager()
{
    using namespace SceneBgManager_p1;
    // vftable = SceneBgManagerImplement::vftable (0x016A6F7C)
    UnregisterSlot(0x3a, EntityDeletedSlot(this));
    for (int i = 0; i < kWorkCount; i++) {
        FUN_009350a0((int)Work(this, i));
    }
    for (int i = kWorkCount - 1; i >= 0; i--) {
        char *work = Work(this, i);
        // lib::StaticArray<SceneBgWork::LayoutUnit,128> at +0x68 -> lib::Array destructor
        WorkField(work, 0x68) = 0x016A3B18;  // lib::Array<SceneBgWork::LayoutUnit>::vftable
        if (WorkField(work, 0x6c) != 0) {
            WorkField(work, 0x70) = 0;
        }
        WorkField(work, 0x6c) = 0;
        WorkField(work, 0x74) = 0;
        // buffer at +0x38 (+0x3C, +0x40 count, +0x44 owned flag)
        if (WorkField(work, 0x38) != 0) {
            WorkField(work, 0x40) = 0;
            if (WorkField(work, 0x44) != 0) {
                FUN_00dd48d0(WorkField(work, 0x38), 0);
                WorkField(work, 0x44) = 0;
            }
            WorkField(work, 0x38) = 0;
            WorkField(work, 0x3c) = 0;
        }
        // buffer at +0x1C (+0x18 initial value copied to +0x28/+0x2C/+0x30 on reset)
        if (WorkField(work, 0x1c) != 0) {
            if (WorkField(work, 0x1c) != 0) {
                FUN_00dd48d0(WorkField(work, 0x1c), 0);
                WorkField(work, 0x1c) = 0;
            }
            WorkField(work, 0x20) = 0;
            WorkField(work, 0x24) = 0;
            WorkField(work, 0x28) = WorkField(work, 0x18);
            WorkField(work, 0x2c) = WorkField(work, 0x18);
            WorkField(work, 0x30) = WorkField(work, 0x18);
        }
    }
    // vftable = SceneBgManager::vftable (0x016A3384)
}
