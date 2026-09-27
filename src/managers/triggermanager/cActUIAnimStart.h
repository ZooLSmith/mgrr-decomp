// REFINED
// Trigger::cActUIAnimStart -- trigger action (vftable 0x016AFF40).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActUIAnimStart>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActUIAnimStart.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActUIAnimStart : public cAction<cActUIAnimStart> {
public:
    // vftable (0x016AFF40), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C938D0  address of this action type's static descriptor
    virtual cActUIAnimStart *vf04(unsigned char flags); // +0x04  00C938E0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8CF60  (empty)
    virtual void vf0C();                         // +0x0C  00C8CF70  (empty)
    virtual void vf10();                         // +0x10  00C8CF80  (empty)
    virtual void vf14();                         // +0x14  00C8CF90  (empty)
    // +0x18  00C805C0  inherited Trigger::Act::TRIGGER_UIANIM_START
    // +0x1C  00C8CFA0  inherited Trigger::cAction<Trigger::cActUIAnimStart>::vf1C
    // +0x20  00C8CFB0  inherited Trigger::cAction<Trigger::cActUIAnimStart>::vf20
};

} // namespace Trigger
