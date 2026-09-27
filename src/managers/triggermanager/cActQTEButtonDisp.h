// REFINED
// Trigger::cActQTEButtonDisp -- trigger action (vftable 0x016AF9F0).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActQTEButtonDisp>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActQTEButtonDisp.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActQTEButtonDisp : public cAction<cActQTEButtonDisp> {
public:
    // vftable (0x016AF9F0), in slot order (slot = byte offset)
    virtual void *vf00();                                  // +0x00  00C930B0  address of this action type's static descriptor
    virtual cActQTEButtonDisp *vf04(unsigned char flags);  // +0x04  00C930C0  scalar deleting destructor
    virtual void vf08();                                   // +0x08  00C8C100  (empty)
    virtual void vf0C();                                   // +0x0C  00C8C110  (empty)
    virtual void vf10();                                   // +0x10  00C8C120  (empty)
    virtual void vf14();                                   // +0x14  00C8C130  (empty)
    // +0x18  00C7FC60  inherited vf18
    // +0x1C  00C8C140  inherited cAction<cActQTEButtonDisp>::vf1C
    // +0x20  00C8C150  inherited cAction<cActQTEButtonDisp>::vf20
};

} // namespace Trigger
