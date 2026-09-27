// src/managers/cenemyinfomanager/cEnemyInfoManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cEnemyInfoManager.h"

namespace cEnemyInfoManager_p1 {

// __thiscall call of a function (by address) with ECX = self
template <class R, class F, class... A> inline R thiscall(F fn, const void *self, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return ((Fn)fn)(self, args...);
}

}  // namespace cEnemyInfoManager_p1

// 00988CD0  cEnemyInfoManager::vf00  size=30  [class]
// Scalar deleting destructor.
undefined4 cEnemyInfoManager::vf00(byte flags)
{
    using namespace cEnemyInfoManager_p1;
    // destructor body at 0x009888C0
    // (FILEMAP: Hw::cHwLFFreeListTemp<cEnemyInfoManager::_WeakPointWork>::cHwLFFreeListTemp)
    thiscall<void>(0x009888C0u, this);
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4)this;
}
