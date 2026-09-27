// REFINED
// Trigger::cActDoorLock -- trigger action (vftable 0x016B03FC).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActDoorLock>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActDoorLock.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActDoorLock : public cAction<cActDoorLock> {
public:
    // vftable (0x016B03FC), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C94250  address of this action type's static descriptor
    virtual cActDoorLock *vf04(unsigned char flags); // +0x04  00C94260  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8E170  (empty)
    virtual void vf0C();                         // +0x0C  00C8E180  (empty)
    virtual void vf10();                         // +0x10  00C8E190  (empty)
    virtual void vf14();                         // +0x14  00C8E1A0  (empty)
    // +0x18  00C81010  Act::DOOR_LOCK (actions/TrgActDoorLock.cpp)
    // +0x1C  00C8E1B0  inherited cAction<cActDoorLock>::vf1C
    // +0x20  00C8E1C0  inherited cAction<cActDoorLock>::vf20
};

} // namespace Trigger
