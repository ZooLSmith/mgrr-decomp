// REFINED
// Trigger::cActVrBm6000On -- trigger action (vftable 0x016B09C4).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActVrBm6000On>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActVrBm6000On.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActVrBm6000On : public cAction<cActVrBm6000On> {
public:
    // vftable (0x016B09C4), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C94B80  address of this action type's static descriptor
    virtual cActVrBm6000On *vf04(unsigned char flags); // +0x04  00C94B90  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8F7F0  (empty)
    virtual void vf0C();                         // +0x0C  00C8F800  (empty)
    virtual void vf10();                         // +0x10  00C8F810  (empty)
    virtual void vf14();                         // +0x14  00C8F820  (empty)
    // +0x18  00C889D0  inherited Trigger::Act::VR_LIFT_ON
    // +0x1C  00C8F830  inherited Trigger::cAction<Trigger::cActVrBm6000On>::vf1C
    // +0x20  00C8F840  inherited Trigger::cAction<Trigger::cActVrBm6000On>::vf20
};

} // namespace Trigger
