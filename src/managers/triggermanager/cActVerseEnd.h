// REFINED
// Trigger::cActVerseEnd -- trigger action (vftable 0x016AEBB8).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActVerseEnd>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActVerseEnd.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActVerseEnd : public cAction<cActVerseEnd> {
public:
    // vftable (0x016AEBB8), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C91830  address of this action type's static descriptor
    virtual cActVerseEnd *vf04(unsigned char flags); // +0x04  00C91840  scalar deleting destructor
    // +0x08  00C89510  inherited Trigger::cAction<Trigger::cActVerseEnd>::vf08
    // +0x0C  00C89520  inherited Trigger::cAction<Trigger::cActVerseEnd>::vf0C
    // +0x10  00C89530  inherited Trigger::cAction<Trigger::cActVerseEnd>::vf10
    // +0x14  00C89540  inherited Trigger::cAction<Trigger::cActVerseEnd>::vf14
    virtual int vf18();                          // +0x18  00C7EB40  always 0
    // +0x1C  00C89550  inherited Trigger::cAction<Trigger::cActVerseEnd>::vf1C
    // +0x20  00C89560  inherited Trigger::cAction<Trigger::cActVerseEnd>::vf20
};

} // namespace Trigger
