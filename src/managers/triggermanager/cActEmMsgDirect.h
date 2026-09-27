// REFINED
// Trigger::cActEmMsgDirect -- trigger action (vftable 0x016AF32C).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActEmMsgDirect>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActEmMsgDirect.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActEmMsgDirect : public cAction<cActEmMsgDirect> {
public:
    // vftable (0x016AF32C), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C92490  address of this action type's static descriptor
    virtual cActEmMsgDirect *vf04(unsigned char flags); // +0x04  00C924A0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8AD70  (empty)
    virtual void vf0C();                         // +0x0C  00C8AD80  (empty)
    virtual void vf10();                         // +0x10  00C7F2F0  resolves messageId / targetNameHash / messageParam
    virtual void vf14();                         // +0x14  00C8ADA0  (empty)
    // +0x18  00C87590  Act::ENM_MSG_2 (actions/TrgActEnmMsg.cpp)
    // +0x1C  00C8ADB0  inherited cAction<cActEmMsgDirect>::vf1C
    // +0x20  00C8ADC0  inherited cAction<cActEmMsgDirect>::vf20

    // fields (absolute byte offsets; +0x04 record() is declared in cAction)
    int &messageId() { return *(int *)((char *)this + 0x8); }                      // +0x08  id of the message named at record+0x08 (FUN_00c15c50, -1 if unknown)
    unsigned int &targetNameHash() { return *(unsigned int *)((char *)this + 0xC); } // +0x0C  hash (FUN_00e03ea0) of the target name at record+0x28
    int &messageParam() { return *(int *)((char *)this + 0x10); }                  // +0x10  record+0x38, only when the record is 0x3C bytes long
};

} // namespace Trigger
