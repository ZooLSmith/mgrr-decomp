// REFINED
// Trigger::cActJammingDispStart -- trigger action (vftable 0x016AFEA0).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActJammingDispStart>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActJammingDispStart.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActJammingDispStart : public cAction<cActJammingDispStart> {
public:
    // vftable (0x016AFEA0), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C937D0  address of this action type's static descriptor
    virtual cActJammingDispStart *vf04(unsigned char flags); // +0x04  00C937E0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8CCE0  (empty)
    virtual void vf0C();                         // +0x0C  00C8CCF0  (empty)
    virtual void vf10();                         // +0x10  00C8CD00  (empty)
    virtual void vf14();                         // +0x14  00C8CD10  (empty)
    virtual int vf18();                          // +0x18  00C804E0  execute (one unused stack argument); returns 1 on success, 0 otherwise
    // +0x1C  00C8CD20  inherited cAction<cActJammingDispStart>::vf1C
    // +0x20  00C8CD30  inherited cAction<cActJammingDispStart>::vf20
};

} // namespace Trigger
