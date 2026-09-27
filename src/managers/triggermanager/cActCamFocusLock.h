// REFINED
// Trigger::cActCamFocusLock -- trigger action (vftable 0x016B08FC).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActCamFocusLock>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActCamFocusLock.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActCamFocusLock : public cAction<cActCamFocusLock> {
public:
    // vftable (0x016B08FC), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C94A40  address of this action type's static descriptor
    virtual cActCamFocusLock *vf04(unsigned char flags); // +0x04  00C94A50  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8F570  (empty)
    virtual void vf0C();                         // +0x0C  00C8F580  (empty)
    virtual void vf10();                         // +0x10  00C8F590  (empty)
    virtual void vf14();                         // +0x14  00C8F5A0  (empty)
    // +0x18  00C887A0  inherited vf18 (Trigger::Act::CAM_FOCUS_LOCK)
    // +0x1C  00C8F5B0  inherited Trigger::cAction<Trigger::cActCamFocusLock>::vf1C
    // +0x20  00C8F5C0  inherited Trigger::cAction<Trigger::cActCamFocusLock>::vf20
};

} // namespace Trigger
