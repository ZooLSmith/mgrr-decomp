// REFINED
// Trigger::cActResultSetEndDisp -- trigger action (vftable 0x016AF928).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActResultSetEndDisp>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActResultSetEndDisp.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActResultSetEndDisp : public cAction<cActResultSetEndDisp> {
public:
    // vftable (0x016AF928), in slot order (slot = byte offset)
    virtual void *vf00();                                     // +0x00  00C92F70  address of this action type's static descriptor
    virtual cActResultSetEndDisp *vf04(unsigned char flags);  // +0x04  00C92F80  scalar deleting destructor
    virtual void vf08();                                      // +0x08  00C8BDE0  (empty)
    virtual void vf0C();                                      // +0x0C  00C8BDF0  (empty)
    virtual void vf10();                                      // +0x10  00C8BE00  (empty)
    virtual void vf14();                                      // +0x14  00C8BE10  (empty)
    virtual int vf18();                                       // +0x18  00C7F9C0  run the action; returns 1 on success (takes one unused stack argument)
    // +0x1C  00C8BE20  inherited cAction<cActResultSetEndDisp>::vf1C
    // +0x20  00C8BE30  inherited cAction<cActResultSetEndDisp>::vf20
};

} // namespace Trigger
