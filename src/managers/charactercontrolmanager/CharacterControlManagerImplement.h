// REFINED
// CharacterControlManagerImplement -- owns a lib::Array<CharacterControl*> (+0x4) guarded by a
// critical section (+0x8, used only while +0x20 is non-zero).
#pragma once
#include "CharacterControlManager.h"
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct CharacterControlManagerImplement : public CharacterControlManager {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 * vf00(byte flags);  // 008EA2F0 slot 0x0 (scalar deleting destructor)
    virtual void preUpdate();  // 008E3930 slot 0x4  "TtCHARACTER_CONTROL_PRE_UPDATE"
    virtual void update();  // 008EBB70 slot 0x8  "TtHARACTER_CONTROL_UPDATE"
    virtual void markAllForRemoval();  // 008E3760 slot 0xC
    virtual void removeMarked();  // 008EA360 slot 0x10
    virtual void checkRide();  // 008E37A0 slot 0x14  "TtCHAR_COL_CHECK_RIDE"
    virtual void updateRide(float timeRate);  // 008E6870 slot 0x18  "TtCHAR_COL_UPDATE_RIDE"
    virtual undefined4 createControl();  // 008EA340 slot 0x1C
    virtual void addControl(int control);  // 008EA200 slot 0x20
    virtual undefined4 getControlCount();  // 008EA240 slot 0x24
    virtual undefined4 getControl(int index);  // 008EA270 slot 0x28

    // fields (absolute offsets from object start)
    int *&controls()        { return *(int **)((char *)this + 0x04); }  // +0x04 lib::Array<CharacterControl*> * (vftable, +4 data, +8 count)
    char *lock()            { return (char *)this + 0x08; }             // +0x08 CRITICAL_SECTION (0x18 bytes)
    int &lockEnabled()      { return *(int *)((char *)this + 0x20); }   // +0x20 non-zero: the critical section is initialised
};
