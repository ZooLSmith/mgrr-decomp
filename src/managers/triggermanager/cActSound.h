// REFINED
// Trigger::cActSound -- trigger action (vftable 0x016AF5E0).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActSound>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActSound.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActSound : public cAction<cActSound> {
public:
    // vftable (0x016AF5E0), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C928C0  address of this action type's static descriptor
    virtual cActSound *vf04(unsigned char flags); // +0x04  00C928D0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8B090  (empty)
    virtual void vf0C();                         // +0x0C  00C8B0A0  (empty)
    virtual void vf10();                         // +0x10  00C8B0B0  (empty)
    virtual void vf14();                         // +0x14  00C8B0C0  (empty)
    virtual int vf18();                          // +0x18  00C7F390  SOUND: plays the sound named by the record (+0x08) with the float at record+0x18
    // +0x1C  00C8B0D0  inherited Trigger::cAction<Trigger::cActSound>::vf1C
    // +0x20  00C8B0E0  inherited Trigger::cAction<Trigger::cActSound>::vf20
};

} // namespace Trigger
