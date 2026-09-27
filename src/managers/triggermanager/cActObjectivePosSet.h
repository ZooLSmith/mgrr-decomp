// REFINED
// Trigger::cActObjectivePosSet -- trigger action (vftable 0x016AFE20).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActObjectivePosSet>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActObjectivePosSet.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActObjectivePosSet : public cAction<cActObjectivePosSet> {
public:
    // vftable (0x016AFE20), in slot order (slot = byte offset)
    virtual void *vf00();                                    // +0x00  00C93710  address of this action type's static descriptor
    virtual cActObjectivePosSet *vf04(unsigned char flags);  // +0x04  00C93720  scalar deleting destructor
    virtual void vf08();                                     // +0x08  00C8CC40  (empty)
    virtual void vf0C();                                     // +0x0C  00C8CC50  (empty)
    virtual void vf10();                                     // +0x10  00C8CC60  (empty)
    virtual void vf14();                                     // +0x14  00C8CC70  (empty)
    // +0x18  00C80390  inherited vf18
    // +0x1C  00C8CC80  inherited cAction<cActObjectivePosSet>::vf1C
    // +0x20  00C8CC90  inherited cAction<cActObjectivePosSet>::vf20
};

} // namespace Trigger
