// src/managers/phasereadmanager/PhaseReadManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "PhaseReadManager.h"

extern unsigned char DAT_01dda840[];  // the file read manager (ECX of FUN_00e9d6a0 / FUN_00e9ef20)

namespace PhaseReadManager_p1 {

// PhaseReadManagerImplement fields (this file only sees PhaseReadManager.h)
inline unsigned int &Flags(void *self) { return *(unsigned int *)((char *)self + 0x4); }  // +0x04
inline int &State(void *self)          { return *(int *)((char *)self + 0x8); }           // +0x08
inline int &CurrentPhase(void *self)   { return *(int *)((char *)self + 0xC); }           // +0x0C
inline int &RequestedPhase(void *self) { return *(int *)((char *)self + 0x10); }          // +0x10
inline int &ReadHandle(void *self)     { return *(int *)((char *)self + 0x14); }          // +0x14
inline int &OnRead(void *self)         { return *(int *)((char *)self + 0x18); }          // +0x18
inline void *Heap(void *self)          { return (char *)self + 0x28; }                    // +0x28 Hw::cHeapPhysical
inline int &Data(void *self)           { return *(int *)((char *)self + 0x498); }         // +0x498

// virtual call through the vftable slot at byte offset `slot` (ECX = obj)
template <class R, class... A> inline R vcall(const void *obj, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return (*(Fn *)(*(char *const *)obj + slot))(obj, args...);
}

// FUN_00e9d6a0 (__thiscall, ECX = DAT_01dda840): cancel / release a file read request
inline void ReleaseRead(int handle)
{
    ((void (__thiscall *)(void *, int))FUN_00e9d6a0)(DAT_01dda840, handle);
}

// FUN_00e9ef20 (__thiscall, ECX = DAT_01dda840): detach `heap` from the file read manager
inline void DetachHeap(void *heap)
{
    ((void (__thiscall *)(void *, void *))FUN_00e9ef20)(DAT_01dda840, heap);
}

// 00DD4B00 Hw::cHeap::cHeap_4 (__thiscall): the heap's destructor
inline void DestroyHeap(void *heap)
{
    ((void (__thiscall *)(void *))0x00DD4B00)(heap);
}

}  // namespace PhaseReadManager_p1

// 00D44550  PhaseReadManager::vf28  size=31  [class]
// Scalar deleting destructor: bit 0 of `flags` frees the object.
undefined4 *PhaseReadManager::vf28(byte flags)
{
    // vftable = PhaseReadManager::vftable (0x016BC298)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return (undefined4 *)this;
}

// 00D4D560  PhaseReadManager::PhaseReadManager  size=98  [class]
// ~PhaseReadManagerImplement with ~PhaseReadManager inlined (see PhaseReadManager.h).
void PhaseReadManager::implementDestructor()
{
    using namespace PhaseReadManager_p1;
    // vftable = PhaseReadManagerImplement::vftable (0x016BC9EC)
    if (ReadHandle(this) != 0) {
        ReleaseRead(ReadHandle(this));
    }
    DetachHeap(Heap(this));
    vcall<void>(Heap(this), 0x8);  // Hw::cHeapPhysical::vf08
    CurrentPhase(this) = -1;
    RequestedPhase(this) = -1;
    ReadHandle(this) = 0;
    OnRead(this) = 0;
    Flags(this) = 0;
    Data(this) = 0;
    State(this) = 0;
    DestroyHeap(Heap(this));
    // vftable = PhaseReadManager::vftable (0x016BC298)
}
