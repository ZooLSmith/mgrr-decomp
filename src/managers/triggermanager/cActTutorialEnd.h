// REFINED
// Trigger::cActTutorialEnd -- trigger action (vftable 0x016AF860).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActTutorialEnd>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActTutorialEnd.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActTutorialEnd : public cAction<cActTutorialEnd> {
public:
    // vftable (0x016AF860), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C92CC0  address of this action type's static descriptor
    virtual cActTutorialEnd *vf04(unsigned char flags); // +0x04  00C92CD0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8BA90  (empty)
    virtual void vf0C();                         // +0x0C  00C8BAA0  (empty)
    virtual void vf10();                         // +0x10  00C8BAB0  (empty)
    virtual void vf14();                         // +0x14  00C8BAC0  (empty)
    // +0x18  00C7F700  inherited Trigger::Act::TUTORIAL_END
    // +0x1C  00C8BAD0  inherited Trigger::cAction<Trigger::cActTutorialEnd>::vf1C
    // +0x20  00C8BAE0  inherited Trigger::cAction<Trigger::cActTutorialEnd>::vf20
};

} // namespace Trigger
