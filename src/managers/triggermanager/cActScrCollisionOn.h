// REFINED
// Trigger::cActScrCollisionOn -- trigger action (vftable 0x016B0170).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActScrCollisionOn>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActScrCollisionOn.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActScrCollisionOn : public cAction<cActScrCollisionOn> {
public:
    // vftable (0x016B0170), in slot order (slot = byte offset)
    virtual void *vf00();                                   // +0x00  00C93C50  address of this action type's static descriptor
    virtual cActScrCollisionOn *vf04(unsigned char flags);  // +0x04  00C93C60  scalar deleting destructor
    virtual void vf08();                                    // +0x08  00C8D820  (empty)
    virtual void vf0C();                                    // +0x0C  00C8D830  (empty)
    virtual void vf10();                                    // +0x10  00C8D840  (empty)
    virtual void vf14();                                    // +0x14  00C8D850  (empty)
    // +0x18  00C80870  inherited vf18
    // +0x1C  00C8D860  inherited cAction<cActScrCollisionOn>::vf1C
    // +0x20  00C8D870  inherited cAction<cActScrCollisionOn>::vf20
};

} // namespace Trigger
