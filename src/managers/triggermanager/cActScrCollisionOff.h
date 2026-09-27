// REFINED
// Trigger::cActScrCollisionOff -- trigger action (vftable 0x016B0198).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActScrCollisionOff>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActScrCollisionOff.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActScrCollisionOff : public cAction<cActScrCollisionOff> {
public:
    // vftable (0x016B0198), in slot order (slot = byte offset)
    virtual void *vf00();                                    // +0x00  00C93C90  address of this action type's static descriptor
    virtual cActScrCollisionOff *vf04(unsigned char flags);  // +0x04  00C93CA0  scalar deleting destructor
    virtual void vf08();                                     // +0x08  00C8D8C0  (empty)
    virtual void vf0C();                                     // +0x0C  00C8D8D0  (empty)
    virtual void vf10();                                     // +0x10  00C8D8E0  (empty)
    virtual void vf14();                                     // +0x14  00C8D8F0  (empty)
    // +0x18  00C80940  inherited vf18
    // +0x1C  00C8D900  inherited cAction<cActScrCollisionOff>::vf1C
    // +0x20  00C8D910  inherited cAction<cActScrCollisionOff>::vf20
};

} // namespace Trigger
