// REFINED
// Trigger::cActVmPlay -- trigger action (vftable 0x016B0080).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActVmPlay>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActVmPlay.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActVmPlay : public cAction<cActVmPlay> {
public:
    // vftable (0x016B0080), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C93AD0  address of this action type's static descriptor
    virtual cActVmPlay *vf04(unsigned char flags); // +0x04  00C93AE0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8D460  (empty)
    virtual void vf0C();                         // +0x0C  00C8D470  (empty)
    virtual void vf10();                         // +0x10  00C8D480  (empty)
    virtual void vf14();                         // +0x14  00C8D490  (empty)
    // +0x18  00C80710  inherited Trigger::Act::VM_PLAY
    // +0x1C  00C8D4A0  inherited Trigger::cAction<Trigger::cActVmPlay>::vf1C
    // +0x20  00C8D4B0  inherited Trigger::cAction<Trigger::cActVmPlay>::vf20
};

} // namespace Trigger
