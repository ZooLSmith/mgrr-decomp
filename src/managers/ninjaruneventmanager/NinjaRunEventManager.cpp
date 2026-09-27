// src/managers/ninjaruneventmanager/NinjaRunEventManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "NinjaRunEventManager.h"

namespace NinjaRunEventManager_p1 {

const unsigned int kImplementVftable = 0x016A710C;  // NinjaRunEventManagerImplement::vftable
const unsigned int kVftable          = 0x016A379C;  // NinjaRunEventManager::vftable

// Global RayCastManager instance (ECX of RayCastManager::getWork).
void *const kRayCastManager = (void *)0x01B35DF8;

// Virtual function at byte offset `offset` of the vftable of `obj`.
template <class Sig> inline Sig vfunc(void *obj, int offset) { return *(Sig *)(*(char **)obj + offset); }

// 00905E50 RayCastManager::getWork(handle) (ECX = the RayCastManager).
inline void rayCastGetWork(void *manager, void *handle)
{
    ((void (__thiscall *)(void *, void *))0x00905E50)(manager, handle);
}

// Inlined body of ~NinjaRunEventManagerImplement (without the final base vftable store).
inline void destroyImplementMembers(char *self)
{
    // call [NinjaRunEventManagerImplement::vftable + 0x2C] = vf2C (00C43450), non-virtual
    FUN_00c43450((int)self);
    void *events = *(void **)(self + 0x8);   /* NinjaRunEventManagerImplement+0x8: event array */
    if (events != 0) {
        vfunc<void (__thiscall *)(void *, int)>(events, 0x0)(events, 1);  // events->vf00(1): delete
        *(void **)(self + 0x8) = 0;
    }
    rayCastGetWork(kRayCastManager, self + 0x14);  /* NinjaRunEventManagerImplement+0x14: ray-cast handle */
    FUN_00905ce0((int *)(self + 0x14));
}

}  // namespace NinjaRunEventManager_p1

// 00C1BA20  NinjaRunEventManager::vf94  size=31  [class]
// Scalar deleting destructor.
undefined4 *NinjaRunEventManager::vf94(byte flags)
{
    *(unsigned int *)this = NinjaRunEventManager_p1::kVftable;  // vftable = NinjaRunEventManager::vftable
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00C629F0  NinjaRunEventManager::NinjaRunEventManager  size=68  [class]
// Non-deleting destructor of NinjaRunEventManagerImplement.
void NinjaRunEventManager::destroyAsImplement()
{
    using namespace NinjaRunEventManager_p1;
    *(unsigned int *)this = kImplementVftable;  // vftable = NinjaRunEventManagerImplement::vftable
    destroyImplementMembers((char *)this);
    *(unsigned int *)this = kVftable;           // vftable = NinjaRunEventManager::vftable
}

// 00C62A40  NinjaRunEventManager::NinjaRunEventManager_2  size=88  [class]
// Scalar deleting destructor of NinjaRunEventManagerImplement (its vf94).
undefined4 *NinjaRunEventManager::deleteAsImplement(byte flags)
{
    using namespace NinjaRunEventManager_p1;
    *(unsigned int *)this = kImplementVftable;  // vftable = NinjaRunEventManagerImplement::vftable
    destroyImplementMembers((char *)this);
    *(unsigned int *)this = kVftable;           // vftable = NinjaRunEventManager::vftable
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}
