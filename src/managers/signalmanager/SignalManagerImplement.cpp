// src/managers/signalmanager/SignalManagerImplement.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "SignalManagerImplement.h"

extern unsigned char DAT_01b7c168[];  // heap / allocation tag of the signal records
extern int DAT_018bbd58[];            // {signal id, slot capacity} x 0x3D (DAT_018bbd5c = [1])

namespace SignalManagerImplement_p1 {

// number of {id, capacity} pairs in DAT_018bbd58
const int kSignalTableSize = 0x3d;

// virtual call through the vftable slot at byte offset `slot` (ECX = obj)
template <class R, class... A> inline R vcall(const void *obj, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return (*(Fn *)(*(char *const *)obj + slot))(obj, args...);
}

// FUN_00dd3500: allocate `size` bytes from `heap` (functions.h declares it void)
inline void *MemAlloc(unsigned int size, void *heap)
{
    return ((void *(__cdecl *)(unsigned int, void *))FUN_00dd3500)(size, heap);
}

// FUN_00d8a2b0 (__thiscall, ECX = the slot array): reserve `capacity` entries; `heapRef` points
// to the heap to allocate from.
inline void ReserveSlots(void *slotArray, unsigned int capacity, void **heapRef)
{
    ((undefined4 (__thiscall *)(void *, unsigned int, void **))FUN_00d8a2b0)(slotArray, capacity, heapRef);
}

}  // namespace SignalManagerImplement_p1

// 00D8A5C0  SignalManagerImplement::vf04  size=57  [class]
// The Signal record whose id is `id`, or 0.
int *SignalManagerImplement::vf04(int id)
{
    Signal **entry = signals();
    if (entry != entry + signalCount()) {
        Signal **end = entry + signalCount();
        do {
            if ((*entry)->id() == id) {
                return (int *)*entry;
            }
            entry++;
        } while (entry != end);
    }
    return 0;
}

// 00D8A6F0  SignalManagerImplement::vf08  size=30  [class]
// Scalar deleting destructor.
undefined4 *SignalManagerImplement::vf08(byte flags)
{
    implementDestructor();
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return (undefined4 *)this;
}

// 00D8A710  SignalManagerImplement::vf00  size=237  [class]
// The Signal record of `id`; when there is none a new one is allocated, given a slot array
// (lib::AllocatedArray<Slot *>) whose capacity comes from the table at DAT_018bbd58, and
// appended to the signal array.  Returns the new record (0 when the allocation failed; it is
// appended anyway).  Ghidra showed the return value as an unaffected register; the machine code
// returns the pushed record.
int *SignalManagerImplement::vf00(int id)
{
    using namespace SignalManagerImplement_p1;
    void *array = signalArray();
    for (Signal **entry = signals(); entry != signals() + signalCount(); entry++) {
        if ((*entry)->id() == id) {
            return (int *)*entry;
        }
    }
    Signal *signal = (Signal *)MemAlloc(0x30, DAT_01b7c168);
    Signal *pushed;
    if (signal == 0) {
        pushed = 0;
    }
    else {
        unsigned int capacity;
        int i = 0;
        do {
            if (DAT_018bbd58[i * 2] == id) {
                capacity = (unsigned int)DAT_018bbd58[i * 2 + 1];
                goto found;
            }
            i++;
        } while (i < kSignalTableSize);
        capacity = 0;
    found:
        signal->id() = id;
        signal->field20() = 0;
        FUN_00dd7240((undefined4)signal->lock());
        int *slotArray = (int *)MemAlloc(0x18, DAT_01b7c168);
        int *slots = 0;
        if (slotArray != 0) {
            slotArray[1] = 0;
            slotArray[2] = 0;
            slotArray[3] = 0;
            slotArray[0] = 0x016C261C;  // lib::AllocatedArray<Slot *>::vftable
            slotArray[4] = 0;
            slotArray[5] = 0;
            slots = slotArray;
        }
        void *heap = DAT_01b7c168;
        ReserveSlots(slots, capacity, &heap);
        signal->slots() = slots;
        pushed = signal;
    }
    vcall<void>(array, 0x8, &pushed);  // lib::Array<Signal *>::vf08: append
    return (int *)pushed;
}
