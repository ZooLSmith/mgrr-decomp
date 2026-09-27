// REFINED
// Trigger::cActAntiqScrReqEnd -- trigger action (vftable 0x016B02D8).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActAntiqScrReqEnd>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActAntiqScrReqEnd.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActAntiqScrReqEnd : public cAction<cActAntiqScrReqEnd> {
public:
    // vftable (0x016B02D8), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C93EB0  address of this action type's static descriptor
    virtual cActAntiqScrReqEnd *vf04(unsigned char flags); // +0x04  00C93EC0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8DDB0  (empty)
    virtual void vf0C();                         // +0x0C  00C8DDC0  (empty)
    virtual void vf10();                         // +0x10  00C8DDD0  (empty)
    virtual void vf14();                         // +0x14  00C8DDE0  (empty)
    // +0x18  00C80C10  inherited vf18 (Trigger::Act::ANTIQ_SCR_REQ_END)
    // +0x1C  00C8DDF0  inherited Trigger::cAction<Trigger::cActAntiqScrReqEnd>::vf1C
    // +0x20  00C8DE00  inherited Trigger::cAction<Trigger::cActAntiqScrReqEnd>::vf20
};

} // namespace Trigger
