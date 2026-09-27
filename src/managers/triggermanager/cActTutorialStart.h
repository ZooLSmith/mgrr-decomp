// REFINED
// Trigger::cActTutorialStart -- trigger action (vftable 0x016AF838).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActTutorialStart>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActTutorialStart.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActTutorialStart : public cAction<cActTutorialStart> {
public:
    // vftable (0x016AF838), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C92C80  address of this action type's static descriptor
    virtual cActTutorialStart *vf04(unsigned char flags); // +0x04  00C92C90  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8B9F0  (empty)
    virtual void vf0C();                         // +0x0C  00C8BA00  (empty)
    virtual void vf10();                         // +0x10  00C8BA10  (empty)
    virtual void vf14();                         // +0x14  00C8BA20  (empty)
    // +0x18  00C7F6B0  inherited Trigger::Act::TUTORIAL_START
    // +0x1C  00C8BA30  inherited Trigger::cAction<Trigger::cActTutorialStart>::vf1C
    // +0x20  00C8BA40  inherited Trigger::cAction<Trigger::cActTutorialStart>::vf20
};

} // namespace Trigger
