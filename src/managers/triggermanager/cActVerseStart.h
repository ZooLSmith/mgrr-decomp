// REFINED
// Trigger::cActVerseStart -- trigger action (vftable 0x016AEB90).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActVerseStart>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActVerseStart.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActVerseStart : public cAction<cActVerseStart> {
public:
    // vftable (0x016AEB90), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C917F0  address of this action type's static descriptor
    virtual cActVerseStart *vf04(unsigned char flags); // +0x04  00C91800  scalar deleting destructor
    // +0x08  00C89470  inherited Trigger::cAction<Trigger::cActVerseStart>::vf08
    // +0x0C  00C89480  inherited Trigger::cAction<Trigger::cActVerseStart>::vf0C
    // +0x10  00C89490  inherited Trigger::cAction<Trigger::cActVerseStart>::vf10
    // +0x14  00C894A0  inherited Trigger::cAction<Trigger::cActVerseStart>::vf14
    virtual int vf18();                          // +0x18  00C7EB30  always 0
    // +0x1C  00C894B0  inherited Trigger::cAction<Trigger::cActVerseStart>::vf1C
    // +0x20  00C894C0  inherited Trigger::cAction<Trigger::cActVerseStart>::vf20
};

} // namespace Trigger
