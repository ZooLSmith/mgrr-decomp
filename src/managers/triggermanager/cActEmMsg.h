// REFINED
// Trigger::cActEmMsg -- trigger action (vftable 0x016AF2DC).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActEmMsg>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActEmMsg.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActEmMsg : public cAction<cActEmMsg> {
public:
    // vftable (0x016AF2DC), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C92400  address of this action type's static descriptor
    virtual cActEmMsg *vf04(unsigned char flags); // +0x04  00C92410  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8AC30  (empty)
    virtual void vf0C();                         // +0x0C  00C8AC40  (empty)
    virtual void vf10();                         // +0x10  00C7F230  resolves messageId
    virtual void vf14();                         // +0x14  00C8AC60  (empty)
    // +0x18  00C874C0  Act::ENM_MSG (actions/TrgActEnmMsg.cpp)
    // +0x1C  00C8AC70  inherited cAction<cActEmMsg>::vf1C
    // +0x20  00C8AC80  inherited cAction<cActEmMsg>::vf20

    // fields (absolute byte offsets; +0x04 record() is declared in cAction)
    int &messageId() { return *(int *)((char *)this + 0x8); }                      // +0x08  id of the message named at record+0x08 (FUN_00c15c50, -1 if unknown)
};

} // namespace Trigger
