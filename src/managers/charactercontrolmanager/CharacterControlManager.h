// REFINED
// CharacterControlManager -- abstract interface of the manager that owns every CharacterControl
// (character collision / ride control). The only implementation is CharacterControlManagerImplement.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct CharacterControlManager {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 * vf00(byte flags);  // 008E08D0 slot 0x0 (scalar deleting destructor)
    virtual void preUpdate() = 0;  // 00FDB68B slot 0x4
    virtual void update() = 0;  // 00FDB68B slot 0x8
    virtual void markAllForRemoval() = 0;  // 00FDB68B slot 0xC
    virtual void removeMarked() = 0;  // 00FDB68B slot 0x10
    virtual void checkRide() = 0;  // 00FDB68B slot 0x14
    virtual void updateRide(float timeRate) = 0;  // 00FDB68B slot 0x18
    virtual undefined4 createControl() = 0;  // 00FDB68B slot 0x1C
    virtual void addControl(int control) = 0;  // 00FDB68B slot 0x20 (the implementation passes &control)
    virtual undefined4 getControlCount() = 0;  // 00FDB68B slot 0x24
    virtual undefined4 getControl(int index) = 0;  // 00FDB68B slot 0x28
    // non-virtual members
    void dtor_008EA2B0();  // 008EA2B0  CharacterControlManagerImplement destructor (base dtor inlined)
};
