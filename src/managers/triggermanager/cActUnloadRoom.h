// REFINED
// Trigger::cActUnloadRoom -- trigger action (vftable 0x016AF264).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActUnloadRoom>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActUnloadRoom.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActUnloadRoom : public cAction<cActUnloadRoom> {
public:
    // vftable (0x016AF264), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C8AA40  address of this action type's static descriptor
    virtual cActUnloadRoom *vf04(unsigned char flags); // +0x04  00C92350  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8AA50  (empty)
    virtual void vf0C();                         // +0x0C  00C8AA60  (empty)
    virtual void vf10();                         // +0x10  00C8AA70  (empty)
    virtual void vf14();                         // +0x14  00C8AA80  (empty)
    // +0x18  00C7F1F0  inherited Trigger::Act::UnloadRoom
    // +0x1C  00C8AA90  inherited Trigger::cAction<Trigger::cActUnloadRoom>::vf1C
    // +0x20  00C8AAA0  inherited Trigger::cAction<Trigger::cActUnloadRoom>::vf20
};

} // namespace Trigger
