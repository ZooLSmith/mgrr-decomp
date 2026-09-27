// REFINED
// Trigger::cActTerminate -- trigger action (vftable 0x016AEF94).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActTerminate>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActTerminate.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActTerminate : public cAction<cActTerminate> {
public:
    // vftable (0x016AEF94), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C91F00  address of this action type's static descriptor
    virtual cActTerminate *vf04(unsigned char flags); // +0x04  00C91F10  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C89F10  (empty)
    virtual void vf0C();                         // +0x0C  00C89F20  (empty)
    virtual void vf10();                         // +0x10  00C89F30  (empty)
    virtual void vf14();                         // +0x14  00C89F40  (empty)
    // +0x18  00C96CB0  inherited Trigger::Act::DEL
    // +0x1C  00C89F50  inherited Trigger::cAction<Trigger::cActTerminate>::vf1C
    // +0x20  00C89F60  inherited Trigger::cAction<Trigger::cActTerminate>::vf20
};

} // namespace Trigger
