// REFINED
// Trigger::cActVrMistake -- trigger action (vftable 0x016B0474).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActVrMistake>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActVrMistake.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActVrMistake : public cAction<cActVrMistake> {
public:
    // vftable (0x016B0474), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C94310  address of this action type's static descriptor
    virtual cActVrMistake *vf04(unsigned char flags); // +0x04  00C94320  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8E350  (empty)
    virtual void vf0C();                         // +0x0C  00C8E360  (empty)
    virtual void vf10();                         // +0x10  00C8E370  (empty)
    virtual void vf14();                         // +0x14  00C8E380  (empty)
    // +0x18  00C810E0  inherited Trigger::Act::VR_MISTAKE
    // +0x1C  00C8E390  inherited Trigger::cAction<Trigger::cActVrMistake>::vf1C
    // +0x20  00C8E3A0  inherited Trigger::cAction<Trigger::cActVrMistake>::vf20
};

} // namespace Trigger
