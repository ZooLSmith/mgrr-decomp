// REFINED
// Trigger::cActSceneMovie -- trigger action (vftable 0x016AFC40).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActSceneMovie>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActSceneMovie.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActSceneMovie : public cAction<cActSceneMovie> {
public:
    // vftable (0x016AFC40), in slot order (slot = byte offset)
    virtual void *vf00();                               // +0x00  00C93430  address of this action type's static descriptor
    virtual cActSceneMovie *vf04(unsigned char flags);  // +0x04  00C93440  scalar deleting destructor
    virtual void vf08();                                // +0x08  00C8C4C0  (empty)
    virtual void vf0C();                                // +0x0C  00C8C4D0  (empty)
    virtual void vf10();                                // +0x10  00C8C4E0  (empty)
    virtual void vf14();                                // +0x14  00C8C4F0  (empty)
    // +0x18  00C7FFF0  inherited vf18
    // +0x1C  00C8C500  inherited cAction<cActSceneMovie>::vf1C
    // +0x20  00C8C510  inherited cAction<cActSceneMovie>::vf20
};

} // namespace Trigger
