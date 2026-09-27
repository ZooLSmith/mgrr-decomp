// REFINED
// Trigger::cActResultSetDisp -- trigger action (vftable 0x016AF8B0).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActResultSetDisp>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActResultSetDisp.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActResultSetDisp : public cAction<cActResultSetDisp> {
public:
    // vftable (0x016AF8B0), in slot order (slot = byte offset)
    virtual void *vf00();                                  // +0x00  00C92D40  address of this action type's static descriptor
    virtual cActResultSetDisp *vf04(unsigned char flags);  // +0x04  00C92D50  scalar deleting destructor
    virtual void vf08();                                   // +0x08  00C8BBD0  (empty)
    virtual void vf0C();                                   // +0x0C  00C8BBE0  (empty)
    virtual void vf10();                                   // +0x10  00C8BBF0  (empty)
    virtual void vf14();                                   // +0x14  00C8BC00  (empty)
    // +0x18  00C97190  inherited vf18
    // +0x1C  00C8BC10  inherited cAction<cActResultSetDisp>::vf1C
    // +0x20  00C8BC20  inherited cAction<cActResultSetDisp>::vf20
};

} // namespace Trigger
