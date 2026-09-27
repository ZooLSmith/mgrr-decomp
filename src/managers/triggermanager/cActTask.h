// REFINED
// Trigger::cActTask -- trigger action (vftable 0x016AEF1C).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActTask>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActTask.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActTask : public cAction<cActTask> {
public:
    // vftable (0x016AEF1C), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C91DE0  address of this action type's static descriptor
    virtual cActTask *vf04(unsigned char flags); // +0x04  00C91DF0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C89D30  (empty)
    virtual void vf0C();                         // +0x0C  00C89D40  (empty)
    virtual void vf10();                         // +0x10  00C89D50  (empty)
    virtual void vf14();                         // +0x14  00C89D60  (empty)
    // +0x18  00C7EF00  inherited Trigger::Act::TASK
    // +0x1C  00C89D70  inherited Trigger::cAction<Trigger::cActTask>::vf1C
    // +0x20  00C89D80  inherited Trigger::cAction<Trigger::cActTask>::vf20
};

} // namespace Trigger
