// src/managers/signalmanager/SignalManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "SignalManager.h"

namespace SignalManager_p1 {

// SignalManagerImplement fields (this file only sees SignalManager.h)
typedef SignalManager::Signal Signal;
inline void *&ArrayVftable(void *self) { return *(void **)((char *)self + 0x4); }    // +0x04 lib::Array<Signal *>
inline Signal **&Signals(void *self)   { return *(Signal ***)((char *)self + 0x8); } // +0x08 data
inline int &SignalCount(void *self)    { return *(int *)((char *)self + 0xC); }      // +0x0C count
inline int &SignalCapacity(void *self) { return *(int *)((char *)self + 0x10); }     // +0x10 capacity

// virtual call through the vftable slot at byte offset `slot` (ECX = obj)
template <class R, class... A> inline R vcall(const void *obj, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return (*(Fn *)(*(char *const *)obj + slot))(obj, args...);
}

}  // namespace SignalManager_p1

// 00D897D0  SignalManager::vf08  size=31  [class]
// Scalar deleting destructor: bit 0 of `flags` frees the object.
undefined4 *SignalManager::vf08(byte flags)
{
    // vftable = SignalManager::vftable (0x016C25B8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return (undefined4 *)this;
}

// 00D8A650  SignalManager::SignalManager  size=152  [class]
// ~SignalManagerImplement with ~SignalManager inlined (see SignalManager.h).
void SignalManager::implementDestructor()
{
    using namespace SignalManager_p1;
    Signal **entry = Signals(this);
    // vftable = SignalManagerImplement::vftable (0x016C2638)
    if (entry != entry + SignalCount(this)) {
        do {
            Signal *signal = *entry;
            if (signal != 0) {
                FUN_00d89f20((int)signal);
                if (signal->slots() != 0) {
                    vcall<void>(signal->slots(), 0x0, 1);  // scalar deleting destructor, delete
                    signal->slots() = 0;
                }
                FUN_00dd7270((undefined4)signal->lock());
                FUN_00dd7270((undefined4)signal->lock());
                FUN_00dd4920((int)signal);
            }
            entry++;
        } while (entry != Signals(this) + SignalCount(this));
    }
    if (Signals(this) != 0) {
        SignalCount(this) = 0;
    }
    ArrayVftable(this) = (void *)0x016C25E4;  // lib::Array<Signal *>::vftable
    if (Signals(this) != 0) {
        SignalCount(this) = 0;
    }
    Signals(this) = 0;
    SignalCapacity(this) = 0;
    // vftable = SignalManager::vftable (0x016C25B8)
}
