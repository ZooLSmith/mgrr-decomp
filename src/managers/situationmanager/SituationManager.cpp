// src/managers/situationmanager/SituationManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "SituationManager.h"

namespace SituationManager_p1 {

// SituationManagerImplement fields (this file only sees SituationManager.h)
inline void *Lock(void *self)    { return (char *)self + 0x8; }            // +0x08 CRITICAL_SECTION
inline int *&Units(void *self)   { return *(int **)((char *)self + 0x28); } // +0x28 lib::AllocatedArray<Unit *> *

// virtual call through the vftable slot at byte offset `slot` (ECX = obj)
template <class R, class... A> inline R vcall(const void *obj, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return (*(Fn *)(*(char *const *)obj + slot))(obj, args...);
}

}  // namespace SituationManager_p1

// 00C1A600  SituationManager::vf0C  size=31  [class]
// Scalar deleting destructor: bit 0 of `flags` frees the object.
undefined4 *SituationManager::vf0C(byte flags)
{
    // vftable = SituationManager::vftable (0x016A3780)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return (undefined4 *)this;
}

// 00C60B10  SituationManager::SituationManager  size=118  [class]
// ~SituationManagerImplement with ~SituationManager inlined (see SituationManager.h).
void SituationManager::implementDestructor()
{
    using namespace SituationManager_p1;
    // vftable = SituationManagerImplement::vftable (0x016A70C0)
    if (Units(this) == 0) {
        // ? the binary frees the entries only when the array pointer is null, reading the data
        // pointer and count of the null array (absolute addresses 4 and 8)
        int *entry = *(int **)4;
        if (entry != entry + *(int *)8) {
            do {
                if (*entry != 0) {
                    FUN_00dd4920(*entry);
                }
                entry++;
            } while (entry != *(int **)((char *)Units(this) + 0x4) + *(int *)((char *)Units(this) + 0x8));
        }
    }
    if (Units(this) != 0) {
        vcall<void>(Units(this), 0x0, 1);  // scalar deleting destructor, delete
        Units(this) = 0;
    }
    FUN_00dd7270((undefined4)Lock(this));
    FUN_00dd7270((undefined4)Lock(this));
    // vftable = SituationManager::vftable (0x016A3780)
}
