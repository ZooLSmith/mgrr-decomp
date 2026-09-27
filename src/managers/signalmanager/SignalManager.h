// REFINED
// SignalManager -- interface of the signal registry (vftable 0x016C25B8).  The only
// implementation is SignalManagerImplement (SignalManagerImplement.h), which owns an array of
// Signal records (0x30 bytes each), one per signal id.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct SignalManager {
    // One signal record (0x30 bytes, allocated from DAT_01b7c168).  Not an RTTI class.
    struct Signal {
        int   &id()          { return *(int *)((char *)this + 0x0); }    // +0x00 signal id
        void  *lock()        { return (char *)this + 0x8; }              // +0x08 lock object (FUN_00dd7240 / FUN_00dd7270)
        int   &field20()     { return *(int *)((char *)this + 0x20); }   // +0x20 ? (0 on creation)
        int  *&slots()       { return *(int **)((char *)this + 0x28); }  // +0x28 lib::AllocatedArray<Slot *> *
    };

    // virtual functions, in vftable order (slot = byte offset / 4)
    // vf00: the Signal record of `id`, created (with the slot capacity listed for `id` in the
    // table at DAT_018bbd58) when it does not exist yet.  ret 4
    virtual int * vf00(int id) = 0;  // 00FDB68B slot 0x0
    // vf04: the Signal record of `id`, or 0.  ret 4
    virtual int * vf04(int id) = 0;  // 00FDB68B slot 0x4
    virtual undefined4 * vf08(byte flags);  // 00D897D0 slot 0x8  (scalar deleting destructor)

    // non-virtual members
    // 00D8A650 (Ghidra: SignalManager::SignalManager) -- the destructor of SignalManagerImplement
    // with the SignalManager destructor inlined: frees every Signal, then resets the array.
    void implementDestructor();  // 00D8A650
};
