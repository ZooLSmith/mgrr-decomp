// REFINED
// Trigger::cActVrGoalPoint -- trigger action (vftable 0x016B05B4).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActVrGoalPoint>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActVrGoalPoint.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActVrGoalPoint : public cAction<cActVrGoalPoint> {
public:
    // vftable (0x016B05B4), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C94510  address of this action type's static descriptor
    virtual cActVrGoalPoint *vf04(unsigned char flags); // +0x04  00C94520  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8E850  (empty)
    virtual void vf0C();                         // +0x0C  00C8E860  (empty)
    virtual void vf10();                         // +0x10  00C8E870  (empty)
    virtual void vf14();                         // +0x14  00C8E880  (empty)
    // +0x18  00C97B10  inherited Trigger::Act::VR_GOAL_POINT
    // +0x1C  00C8E890  inherited Trigger::cAction<Trigger::cActVrGoalPoint>::vf1C
    // +0x20  00C8E8A0  inherited Trigger::cAction<Trigger::cActVrGoalPoint>::vf20
};

} // namespace Trigger
