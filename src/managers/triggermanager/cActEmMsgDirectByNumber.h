// REFINED
// Trigger::cActEmMsgDirectByNumber -- trigger action (vftable 0x016B0260).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActEmMsgDirectByNumber>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActEmMsgDirectByNumber.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActEmMsgDirectByNumber : public cAction<cActEmMsgDirectByNumber> {
public:
    // vftable (0x016B0260), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C93DF0  address of this action type's static descriptor
    virtual cActEmMsgDirectByNumber *vf04(unsigned char flags); // +0x04  00C93E00  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8DBD0  (empty)
    virtual void vf0C();                         // +0x0C  00C8DBE0  (empty)
    virtual void vf10();                         // +0x10  00C80B80  resolves messageId / messageParam
    virtual void vf14();                         // +0x14  00C8DC00  (empty)
    // +0x18  00C88350  Act::ENM_MSG_3 (actions/TrgActEnmMsg.cpp)
    // +0x1C  00C8DC10  inherited cAction<cActEmMsgDirectByNumber>::vf1C
    // +0x20  00C8DC20  inherited cAction<cActEmMsgDirectByNumber>::vf20

    // fields (absolute byte offsets; +0x04 record() is declared in cAction)
    int &messageId() { return *(int *)((char *)this + 0x8); }                      // +0x08  id of the message named at record+0x08 (FUN_00c15c50, -1 if unknown)
    int &messageParam() { return *(int *)((char *)this + 0xC); }                   // +0x0C  record+0x34, only when the record is 0x38 bytes long
};

} // namespace Trigger
