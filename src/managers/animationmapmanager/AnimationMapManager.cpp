// src/managers/animationmapmanager/AnimationMapManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "AnimationMapManager.h"

// 008D73D0  AnimationMapManager::vf0C  size=31  [class]
// Scalar deleting destructor.
undefined4 *AnimationMapManager::vf0C(byte flags)
{
    // vftable = AnimationMapManager::vftable (0x0164A254)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 008D9E00  AnimationMapManager::AnimationMapManager  size=30  [class]
// Destructor body of AnimationMapManagerImplement.
void AnimationMapManager::implementDestructor()
{
    // vftable = AnimationMapManagerImplement::vftable (0x0164A368)
    FUN_008d8180((int)this);  // frees every entry and the entry array
    FUN_00dd7270((undefined4)((char *)this + 0x8));  /* AnimationMapManagerImplement+0x8: lock (critical section) */
    // vftable = AnimationMapManager::vftable (0x0164A254)
}
