// REFINED
// Trigger::cCondStpFlag -- trigger condition "stop flag is set" (vftable 0x016A9DDC).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondStpFlag.cpp.
#pragma once
#include "cCondition.h"

namespace Trigger {

class cCondStpFlag : public cCondition {
public:
    // vftable (0x016A9DDC), in slot order (slot = byte offset)
    virtual cCondStpFlag *vf00(unsigned char flags);  // +0x00  00C86560  scalar deleting destructor
    // +0x04..+0x10  inherited (cCondPhaseJump.cpp)
    // +0x14  Trigger::Cond::STP_FLAG (conditions/TrgCondStpFlag.cpp): tests bit of DAT_01bea070
    // +0x18  inherited
    virtual void vf1C(int *record);         // +0x1C  00C7CA90  resolve the flag name hash to a table index
    // +0x20  00C77C80  inherited cCondition::vf20

    // fields (absolute byte offsets)
    unsigned int &flagIndex() { return *(unsigned int *)((char *)this + 0x10); } // +0x10  index into PTR_s_STP_OBJ_018abc20
};

} // namespace Trigger
