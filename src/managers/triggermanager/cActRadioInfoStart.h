// REFINED
// Trigger::cActRadioInfoStart -- trigger action (vftable 0x016AF748).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActRadioInfoStart>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActRadioInfoStart.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActRadioInfoStart : public cAction<cActRadioInfoStart> {
public:
    // vftable (0x016AF748), in slot order (slot = byte offset)
    virtual void *vf00();                                   // +0x00  00C92B00  address of this action type's static descriptor
    virtual cActRadioInfoStart *vf04(unsigned char flags);  // +0x04  00C92B10  scalar deleting destructor
    virtual void vf08();                                    // +0x08  00C8B630  (empty)
    virtual void vf0C();                                    // +0x0C  00C8B640  (empty)
    virtual void vf10();                                    // +0x10  00C8B650  (empty)
    virtual void vf14();                                    // +0x14  00C8B660  (empty)
    // +0x18  00C7F5F0  inherited vf18
    // +0x1C  00C8B670  inherited cAction<cActRadioInfoStart>::vf1C
    // +0x20  00C8B680  inherited cAction<cActRadioInfoStart>::vf20
};

} // namespace Trigger
