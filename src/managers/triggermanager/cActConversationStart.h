// REFINED
// Trigger::cActConversationStart -- trigger action (vftable 0x016AF798).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActConversationStart>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActConversationStart.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActConversationStart : public cAction<cActConversationStart> {
public:
    // vftable (0x016AF798), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C92B80  address of this action type's static descriptor
    virtual cActConversationStart *vf04(unsigned char flags); // +0x04  00C92B90  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8B770  (empty)
    virtual void vf0C();                         // +0x0C  00C8B780  (empty)
    virtual void vf10();                         // +0x10  00C8B790  (empty)
    virtual void vf14();                         // +0x14  00C8B7A0  (empty)
    // +0x18  00C7F630  Act::CONVERSATION_ST (actions/TrgActConversationSt.cpp)
    // +0x1C  00C8B7B0  inherited cAction<cActConversationStart>::vf1C
    // +0x20  00C8B7C0  inherited cAction<cActConversationStart>::vf20
};

} // namespace Trigger
