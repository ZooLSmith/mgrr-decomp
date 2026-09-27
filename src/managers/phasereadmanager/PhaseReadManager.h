// REFINED
// PhaseReadManager -- interface of the phase data reader (vftable 0x016BC298).  The only
// implementation is PhaseReadManagerImplement (PhaseReadManagerImplement.h), which loads
// "ph%x/p%03x.dat" into a 1.5 MB physical heap through a small state machine.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct PhaseReadManager {
    // Callbacks passed to vf08 (called without arguments).
    typedef void (__cdecl *Callback)();

    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual void vf00() = 0;  // 00FDB68B slot 0x0  (per-frame update of the state machine)
    virtual int vf04() = 0;  // 00FDB68B slot 0x4  (the phase whose data is loaded, -1: none)
    // vf08: request the data of `phase`; the callbacks run when it is read, when a release
    // starts and when it is released.  Returns 1 when accepted.  ret 0x10
    virtual int vf08(int phase, Callback onRead, Callback onRelease, Callback onReleased) = 0;  // 00FDB68B slot 0x8
    virtual void vf0C() = 0;  // 00FDB68B slot 0xC  (request cancellation: flag bit 0)
    virtual void vf10() = 0;  // 00FDB68B slot 0x10
    virtual uint vf14() = 0;  // 00FDB68B slot 0x14  (flag bit 1)
    virtual uint vf18() = 0;  // 00FDB68B slot 0x18  (flag bit 3: idle without data)
    virtual int vf1C() = 0;  // 00FDB68B slot 0x1C  (1 while reading: state 2 or 3)
    virtual void * vf20() = 0;  // 00FDB68B slot 0x20  (the loaded data)
    virtual void vf24() = 0;  // 00FDB68B slot 0x24  (debug print of the state)
    virtual undefined4 * vf28(byte flags);  // 00D44550 slot 0x28  (scalar deleting destructor)

    // non-virtual members
    // 00D4D560 (Ghidra: PhaseReadManager::PhaseReadManager) -- the destructor of
    // PhaseReadManagerImplement with the PhaseReadManager destructor inlined.
    void implementDestructor();  // 00D4D560
};
