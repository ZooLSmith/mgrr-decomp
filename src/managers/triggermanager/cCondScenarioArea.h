// REFINED
// Trigger::cCondScenarioArea -- trigger condition "player inside a scenario area" (vftable 0x016AA3D0).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondScenarioArea.cpp.
#pragma once
#include "cCondition.h"

namespace Trigger {

class cCondScenarioArea : public cCondition {
public:
    // vftable (0x016AA3D0), in slot order (slot = byte offset)
    virtual cCondScenarioArea *vf00(unsigned char flags);  // +0x00  00C86C90  scalar deleting destructor
    // +0x04..+0x0C  inherited (cCondPhaseJump.cpp)
    virtual void vf10();                    // +0x10  00C7E050  update: clears the hit object
    virtual int vf14();                     // +0x14  00C7E060  area test
    // +0x18  inherited
    virtual void vf1C(int *record);         // +0x1C  00C86CB0  take the record
    // +0x20  00C77C80  inherited cCondition::vf20

    // fields (absolute byte offsets)
    unsigned short &areaId() { return *(unsigned short *)((char *)this + 0x10); } // +0x10  record+0x08
    int &hitObject()         { return *(int *)((char *)this + 0x14); }            // +0x14  DAT_01be8e58 when met
};

} // namespace Trigger
