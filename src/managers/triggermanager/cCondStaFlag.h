// REFINED
// Trigger::cCondStaFlag -- trigger condition "scenario-state flag is set" (vftable 0x016A9D60).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondStaFlag.cpp.
#pragma once
#include "cCondition.h"

namespace Trigger {

class cCondStaFlag : public cCondition {
public:
    // vftable (0x016A9D60), in slot order (slot = byte offset)
    virtual cCondStaFlag *vf00(unsigned char flags);  // +0x00  00C86520  scalar deleting destructor
    // +0x04..+0x10  inherited (cCondPhaseJump.cpp)
    // +0x14  Trigger::Cond::STA_FLAG (conditions/TrgCondStaFlag.cpp): tests bit of DAT_01bea060
    // +0x18  inherited
    virtual void vf1C(int *record);         // +0x1C  00C7C920  resolve the flag name hash to a table index
    // +0x20  00C77C80  inherited cCondition::vf20

    // fields (absolute byte offsets)
    unsigned int &flagIndex() { return *(unsigned int *)((char *)this + 0x10); } // +0x10  index into PTR_s_STA_SCENARIO_018abb58
};

} // namespace Trigger
