// REFINED
// PhaseReadManagerImplement -- the phase data reader (vftable 0x016BC9EC, 0x4A0 bytes).
// Instance: DAT_01dc51c0, created by phaseManagerStartup() (00D58370).  The data of a phase is
// read into the physical heap "Phase" (0x180000 bytes) embedded at +0x28.
//
// States (+0x8, see vf24): 0 None, 1 StayNoData, 2 ReadStart, 3 ReadWait, 4 StayData,
// 5 ReleaseStart, 6 ReleaseWait, 7 ReadCancelStart, 8 ReadCancelWait.
// Flags (+0x4): bit 0 cancel requested, bit 1 release pending (vf14), bit 2 release requested
// (vf10), bit 3 idle without data (vf18).
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"
#include "PhaseReadManager.h"

struct PhaseReadManagerImplement : public PhaseReadManager {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual void vf00();  // 00D58290 slot 0x0  overrides PhaseReadManager
    virtual int vf04();  // 00D4D530 slot 0x4  overrides PhaseReadManager
    virtual int vf08(int phase, Callback onRead, Callback onRelease, Callback onReleased);  // 00D4D5F0 slot 0x8  overrides PhaseReadManager
    virtual void vf0C();  // 00D4D6C0 slot 0xC  overrides PhaseReadManager
    virtual void vf10();  // 00D4D690 slot 0x10  overrides PhaseReadManager
    virtual uint vf14();  // 00D4D830 slot 0x14  overrides PhaseReadManager
    virtual uint vf18();  // 00D4D550 slot 0x18  overrides PhaseReadManager
    virtual int vf1C();  // 00D446A0 slot 0x1C  overrides PhaseReadManager
    virtual void * vf20();  // 00D4D540 slot 0x20  overrides PhaseReadManager
    virtual void vf24();  // 00D44780 slot 0x24  overrides PhaseReadManager
    virtual undefined4 * vf28(byte flags);  // 00D4D5D0 slot 0x28  overrides PhaseReadManager

    // non-virtual members
    PhaseReadManagerImplement();  // 00D4D4B0
    void updateReleaseStart();     // 00D445E0 (was FUN_00d445e0) state 5
    void updateReleaseWait();      // 00D44620 (was FUN_00d44620) state 6
    void updateReadCancelStart();  // 00D44650 (was FUN_00d44650) state 7 (vf00 inlines it)
    void updateReadStart();        // 00D4D6F0 (was FUN_00d4d6f0) state 2
    void updateReadWait();         // 00D4D760 (was FUN_00d4d760) state 3
    void updateStayData();         // 00D4D7C0 (was FUN_00d4d7c0) state 4
    // 00D58370 (Ghidra: PhaseReadManagerImplement::PhaseReadManagerImplement, auto header:
    // ctor_00D58370) -- really PhaseManager::startup (see its error strings): `this` is the
    // PhaseManager.  Parses PhaseInfo.bxm and creates the reader (DAT_01dc51c0).
    int phaseManagerStartup();  // 00D58370

    // fields
    unsigned int &flags()          { return *(unsigned int *)((char *)this + 0x4); }  // +0x04
    int      &state()              { return *(int *)((char *)this + 0x8); }           // +0x08
    int      &currentPhase()       { return *(int *)((char *)this + 0xC); }           // +0x0C -1: none
    int      &requestedPhase()     { return *(int *)((char *)this + 0x10); }          // +0x10 -1: none
    int      &readHandle()         { return *(int *)((char *)this + 0x14); }          // +0x14 file read request (DAT_01dda840)
    Callback &onRead()             { return *(Callback *)((char *)this + 0x18); }     // +0x18
    Callback &onRelease()          { return *(Callback *)((char *)this + 0x1C); }     // +0x1C
    Callback &onReleased()         { return *(Callback *)((char *)this + 0x20); }     // +0x20
    void     *heap()               { return (char *)this + 0x28; }                    // +0x28 Hw::cHeapPhysical (embedded)
    void    *&data()               { return *(void **)((char *)this + 0x498); }       // +0x498 the loaded data
};
