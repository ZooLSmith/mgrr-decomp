// REFINED
// Trigger::cActConversationEnd -- trigger action (vftable 0x016AF7C0).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActConversationEnd>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActConversationEnd.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActConversationEnd : public cAction<cActConversationEnd> {
public:
    // vftable (0x016AF7C0), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C92BC0  address of this action type's static descriptor
    virtual cActConversationEnd *vf04(unsigned char flags); // +0x04  00C92BD0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8B810  (empty)
    virtual void vf0C();                         // +0x0C  00C8B820  (empty)
    virtual void vf10();                         // +0x10  00C8B830  (empty)
    virtual void vf14();                         // +0x14  00C8B840  (empty)
    // +0x18  00C7F650  Act::CONVERSATION_ED (actions/TrgActConversationEd.cpp)
    // +0x1C  00C8B850  inherited cAction<cActConversationEnd>::vf1C
    // +0x20  00C8B860  inherited cAction<cActConversationEnd>::vf20
};

} // namespace Trigger
