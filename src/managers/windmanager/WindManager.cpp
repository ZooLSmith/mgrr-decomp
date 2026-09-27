// src/managers/windmanager/WindManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "WindManager.h"

namespace WindManager_p1 {

// Same layout as WindManagerImplement::WindArray (WindManagerImplement.h is not included by this
// file): the lib array of registered winds at WindManagerImplement+0x4.
struct WindArray {
    void               *vftable;  // +0x0  slot 0x0 = scalar deleting destructor
    WindManager::Wind **data;     // +0x4
    int                 count;    // +0x8
};

// virtual call through the vftable slot at byte offset `slot`
template <class R, class... A> inline R vcall(const void *obj, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return (*(Fn *)(*(char *const *)obj + slot))(obj, args...);
}

}  // namespace WindManager_p1

// 008DFDF0  WindManager::vf00  size=31  [class]
// Scalar deleting destructor.
undefined4 *WindManager::vf00(byte flags)
{
    // vftable = WindManager::vftable (0x0164ADA0)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 008E0740  WindManager::WindManager  size=92  [class]
// Destructor body of WindManagerImplement: releases every wind object, then deletes the array.
void WindManager::implementDestructor()
{
    using namespace WindManager_p1;
    WindArray *&winds = *(WindArray **)((char *)this + 0x4);  /* WindManagerImplement+0x4: winds() */

    // vftable = WindManagerImplement::vftable (0x0164ADF8)
    Wind **it = winds->data;
    if (it != it + winds->count) {
        do {
            FUN_010060a0((undefined4 *)(*it)->wind);  // wind->removeReference()
            it = it + 1;
        } while (it != winds->data + winds->count);
    }
    if (winds != 0) {
        vcall<void>(winds, 0x0, 1);  // scalar deleting destructor
        winds = 0;
    }
    // vftable = WindManager::vftable (0x0164ADA0)
}
