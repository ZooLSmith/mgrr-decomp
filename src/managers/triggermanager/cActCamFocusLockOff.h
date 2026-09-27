// REFINED
// Trigger::cActCamFocusLockOff -- trigger action (vftable 0x016B0924).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActCamFocusLockOff>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActCamFocusLockOff.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActCamFocusLockOff : public cAction<cActCamFocusLockOff> {
public:
    // vftable (0x016B0924), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C94A80  address of this action type's static descriptor
    virtual cActCamFocusLockOff *vf04(unsigned char flags); // +0x04  00C94A90  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8F610  (empty)
    virtual void vf0C();                         // +0x0C  00C8F620  (empty)
    virtual void vf10();                         // +0x10  00C8F630  (empty)
    virtual void vf14();                         // +0x14  00C8F640  (empty)
    // +0x18  00C888E0  Act::CAM_FOCUS_LOCK_OFF (actions/TrgActCamFocusLockOff.cpp)
    // +0x1C  00C8F650  inherited cAction<cActCamFocusLockOff>::vf1C
    // +0x20  00C8F660  inherited cAction<cActCamFocusLockOff>::vf20
};

} // namespace Trigger
