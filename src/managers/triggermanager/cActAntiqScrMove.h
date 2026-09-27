// REFINED
// Trigger::cActAntiqScrMove -- trigger action (vftable 0x016B02B0).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActAntiqScrMove>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActAntiqScrMove.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActAntiqScrMove : public cAction<cActAntiqScrMove> {
public:
    // vftable (0x016B02B0), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C93E70  address of this action type's static descriptor
    virtual cActAntiqScrMove *vf04(unsigned char flags); // +0x04  00C93E80  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8DD10  (empty)
    virtual void vf0C();                         // +0x0C  00C8DD20  (empty)
    virtual void vf10();                         // +0x10  00C8DD30  (empty)
    virtual void vf14();                         // +0x14  00C8DD40  (empty)
    // +0x18  00C80BE0  inherited vf18 (Trigger::Act::ANTIQ_SCR_MOVE)
    // +0x1C  00C8DD50  inherited Trigger::cAction<Trigger::cActAntiqScrMove>::vf1C
    // +0x20  00C8DD60  inherited Trigger::cAction<Trigger::cActAntiqScrMove>::vf20
};

} // namespace Trigger
