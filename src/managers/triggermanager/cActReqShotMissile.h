// REFINED
// Trigger::cActReqShotMissile -- trigger action (vftable 0x016B0350).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActReqShotMissile>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActReqShotMissile.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActReqShotMissile : public cAction<cActReqShotMissile> {
public:
    // vftable (0x016B0350), in slot order (slot = byte offset)
    virtual void *vf00();                                   // +0x00  00C93F70  address of this action type's static descriptor
    virtual cActReqShotMissile *vf04(unsigned char flags);  // +0x04  00C93F80  scalar deleting destructor
    virtual void vf08();                                    // +0x08  00C8DF90  (empty)
    virtual void vf0C();                                    // +0x0C  00C8DFA0  (empty)
    virtual void vf10();                                    // +0x10  00C8DFB0  (empty)
    virtual void vf14();                                    // +0x14  00C8DFC0  (empty)
    // +0x18  00C93FA0  inherited vf18
    // +0x1C  00C8DFD0  inherited cAction<cActReqShotMissile>::vf1C
    // +0x20  00C8DFE0  inherited cAction<cActReqShotMissile>::vf20
};

} // namespace Trigger
