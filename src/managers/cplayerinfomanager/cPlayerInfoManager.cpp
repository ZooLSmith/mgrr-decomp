// src/managers/cplayerinfomanager/cPlayerInfoManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cPlayerInfoManager.h"

namespace cPlayerInfoManager_p1 {

// __thiscall call of a function (symbol or address) with ECX = self
template <class R, class F, class S, class... A> inline R thiscall(F fn, S self, A... args)
{
    typedef R (__thiscall *Fn)(S, A...);
    return ((Fn)fn)(self, args...);
}

// 00988B70 Hw::cHwLFFreeListTemp<cPlayerInfoManager::_QTECallAlarmWork>::cHwLFFreeListTemp
// (named as a constructor by the decompiler; used here as the destructor body). No header.
const unsigned int kFreeListTempFn = 0x00988B70;

} // namespace cPlayerInfoManager_p1

// 00988CF0  cPlayerInfoManager::vf00  size=30  [class]
undefined4 cPlayerInfoManager::vf00(byte flags)
{
    using namespace cPlayerInfoManager_p1;
    thiscall<void>(kFreeListTempFn, this);  // ECX = this (not shown by the decompiler)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4)this;
}
