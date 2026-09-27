// REFINED
// TargetManagerImplement -- 0x24-byte singleton (DAT_01bea108, created by createInstance()) that
// picks lock-on / auto-aim targets from the global target list (FUN_00a7ca30(DAT_01be9a98): a
// { vftable, data, count } array of target-entry pointers) and draws debug markers for them.
//
// Target entry (class of src/unsorted/unit_00A7C870.cpp): +0x24 id, +0x28 flags (bit 1 = ignore),
// +0x2C handle (FUN_00a7c7f0), +0x3C cObj * (FUN_00a7c800), +0x48 Behavior * (FUN_00a7c8a0);
// FUN_00a7c8b0 returns the entry's position (its object's +0x50, or DAT_01be9a50).
//
// Signatures are those of TargetManager.h so that the overrides stay overrides, with one exception:
// vf34 really takes 9 stack arguments (ret 0x24; the base declares none). Stack argument counts that
// the base prototypes do not show: vf38 returns with ret 0xC (two unused extra arguments), vf3C with
// ret 8 (two unused arguments). vf44 stores a float through its undefined4 * argument.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"
#include "TargetManager.h"
#include "Behavior.h"  // TargetManagerImplement.cpp calls Behavior virtuals (vf68 / vf200 / vf204)

struct TargetManagerImplement : public TargetManager {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual void vf00();  // 00C15760 slot 0x0  overrides TargetManager  clears the three "target set" flags
    virtual void vf04();  // 00C15770 slot 0x4  overrides TargetManager  deletes the singleton
    virtual undefined4 * vf08(byte flags);  // 00C157A0 slot 0x8  overrides TargetManager  scalar deleting destructor
    virtual void vf0C();  // 00C26580 slot 0xC  overrides TargetManager  drops targets no longer in the target list
    virtual void vf10();  // 00C26680 slot 0x10  overrides TargetManager  debug print of the target list
    virtual void vf14();  // 00C26760 slot 0x14  overrides TargetManager  debug markers of targets
    virtual undefined4 vf18();  // 00C26AF0 slot 0x18  overrides TargetManager  validated targetEntry0C
    virtual void vf1C(int entry);  // 00C26B60 slot 0x1C  overrides TargetManager  sets targetEntry0C
    virtual undefined4 vf20();  // 00C26BC0 slot 0x20  overrides TargetManager  validated target14
    virtual void vf24(int behavior);  // 00C26C40 slot 0x24  overrides TargetManager  sets target14
    virtual undefined4 vf28();  // 00C26CB0 slot 0x28  overrides TargetManager  validated target1C
    virtual void vf2C(int behavior);  // 00C26D30 slot 0x2C  overrides TargetManager  sets target1C
    virtual undefined4 vf30();  // 00C26DA0 slot 0x30  overrides TargetManager  target list count
    // 00C26DB0 slot 0x34: best target in front of `entry` (smallest yaw delta within range). ret 0x24.
    // (Does not override TargetManager::vf34(), whose Ghidra prototype has no parameters.)
    virtual int vf34(int entry, float yaw, float maxYawDelta, float range, int *excluded, int excludedCount,
                     int unused7, int unused8, int unused9);
    virtual undefined4 vf38(int entry);  // 00C26F40 slot 0x38  overrides TargetManager  (ret 0xC)
    virtual undefined4 vf3C();  // 00C26FC0 slot 0x3C  overrides TargetManager  (ret 8)
    virtual void vf40(int entry);  // 00C157C0 slot 0x40  overrides TargetManager  sets handle08 from the entry
    virtual undefined4 vf44(undefined4 * outAngle);  // 00C27040 slot 0x44  overrides TargetManager  (float out)
    virtual undefined4 vf48();  // 00C157F0 slot 0x48  overrides TargetManager  returns flag04
    virtual void vf4C();  // 00C15800 slot 0x4C  overrides TargetManager  tail call FUN_00a81330(&handle08)
    virtual undefined4 vf50(undefined4 * outNearest, undefined4 * outSecond, int excludedEntry);  // 00C595E0 slot 0x50  overrides TargetManager
    virtual undefined4 vf54(undefined4 * outNearest, undefined4 * outSecond, undefined4 * outThird);  // 00C59850 slot 0x54  overrides TargetManager
    virtual int vf58(int entry, float yaw, float maxYawDelta, float range);  // 00C27130 slot 0x58  overrides TargetManager
    // non-virtual members
    TargetManagerImplement();  // 00C15740
    static void createInstance();  // 00C26530 (was ctor_00C26530 / TargetManagerImplement_2)

    // fields (absolute offsets from the object start)
    int          &flag04()          { return *(int *)((char *)this + 0x04); }           // +0x04 set to 1 by vf40
    unsigned int &handle08()        { return *(unsigned int *)((char *)this + 0x08); }  // +0x08 object handle (FUN_00a7c930/950/960, resolved by FUN_00a81330)
    int          &targetEntry0C()   { return *(int *)((char *)this + 0x0C); }           // +0x0C target entry
    int          &targetEntry0CSet(){ return *(int *)((char *)this + 0x10); }           // +0x10
    int          &target14()        { return *(int *)((char *)this + 0x14); }           // +0x14 Behavior *
    int          &target14Set()     { return *(int *)((char *)this + 0x18); }           // +0x18
    int          &target1C()        { return *(int *)((char *)this + 0x1C); }           // +0x1C Behavior *
    int          &target1CSet()     { return *(int *)((char *)this + 0x20); }           // +0x20
};
