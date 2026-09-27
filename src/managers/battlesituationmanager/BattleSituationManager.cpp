// src/managers/battlesituationmanager/BattleSituationManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "BattleSituationManager.h"

namespace BattleSituationManager_p1 {

// virtual call through the vftable slot at byte offset `slot`
template <class R, class... A> inline R vcall(const void *obj, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return (*(Fn *)(*(char *const *)obj + slot))(obj, args...);
}

}  // namespace BattleSituationManager_p1

// 00D72AD0  BattleSituationManager::vf0C  size=31  [class]
// Scalar deleting destructor.
undefined4 *BattleSituationManager::vf0C(byte flags)
{
    // vftable = BattleSituationManager::vftable (0x016C0C98)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00D76C30  BattleSituationManager::BattleSituationManager  size=64  [class]
// Destructor body of BattleSituationManagerImplement: deletes the situation resource.
void BattleSituationManager::implementDestructor()
{
    using namespace BattleSituationManager_p1;
    int **resource = *(int ***)((char *)this + 0x8);  /* BattleSituationManagerImplement+0x8: resource */
    // vftable = BattleSituationManagerImplement::vftable (0x016C0F54)
    if (resource != 0) {
        if (resource[1] != 0) {  /* Resource+0x4: units */
            vcall<void>(resource[1], 0x0, 1);  // scalar deleting destructor
            resource[1] = 0;
        }
        FUN_00dd4920((int)resource);
        *(int ***)((char *)this + 0x8) = 0;  /* BattleSituationManagerImplement+0x8: resource */
    }
    // vftable = BattleSituationManager::vftable (0x016C0C98)
}
