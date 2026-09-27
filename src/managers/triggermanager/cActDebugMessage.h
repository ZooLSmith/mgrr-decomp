// REFINED
// Trigger::cActDebugMessage -- trigger action (vftable 0x016AF124).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActDebugMessage>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActDebugMessage.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActDebugMessage : public cAction<cActDebugMessage> {
public:
    // vftable (0x016AF124), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C92180  address of this action type's static descriptor
    virtual cActDebugMessage *vf04(unsigned char flags); // +0x04  00C92190  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8A550  (empty)
    virtual void vf0C();                         // +0x0C  00C8A560  (empty)
    virtual void vf10();                         // +0x10  00C8A570  (empty)
    virtual void vf14();                         // +0x14  00C8A580  (empty)
    virtual int vf18();                          // +0x18  00C7F120  returns 0
    // +0x1C  00C8A590  inherited cAction<cActDebugMessage>::vf1C
    // +0x20  00C8A5A0  inherited cAction<cActDebugMessage>::vf20
};

} // namespace Trigger
