// REFINED
// Trigger::cActRadioInfoEnd -- trigger action (vftable 0x016AF770).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActRadioInfoEnd>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActRadioInfoEnd.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActRadioInfoEnd : public cAction<cActRadioInfoEnd> {
public:
    // vftable (0x016AF770), in slot order (slot = byte offset)
    virtual void *vf00();                                 // +0x00  00C92B40  address of this action type's static descriptor
    virtual cActRadioInfoEnd *vf04(unsigned char flags);  // +0x04  00C92B50  scalar deleting destructor
    virtual void vf08();                                  // +0x08  00C8B6D0  (empty)
    virtual void vf0C();                                  // +0x0C  00C8B6E0  (empty)
    virtual void vf10();                                  // +0x10  00C8B6F0  (empty)
    virtual void vf14();                                  // +0x14  00C8B700  (empty)
    // +0x18  00C7F610  inherited vf18
    // +0x1C  00C8B710  inherited cAction<cActRadioInfoEnd>::vf1C
    // +0x20  00C8B720  inherited cAction<cActRadioInfoEnd>::vf20
};

} // namespace Trigger
