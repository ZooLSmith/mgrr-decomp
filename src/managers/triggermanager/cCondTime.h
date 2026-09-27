// REFINED
// Trigger::cCondTime -- trigger condition met after a time has elapsed (vftable 0x016A8A80).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondTime.cpp.
#pragma once
#include "cCondition.h"

namespace Trigger {

class cCondTime : public cCondition {
public:
    cCondTime();                                   // 00C78CC0

    // vftable (0x016A8A80), in slot order (slot = byte offset)
    virtual cCondTime *vf00(unsigned char flags);  // +0x00  00C84CA0  scalar deleting destructor
    // +0x04, +0x08  inherited (cCondPhaseJump.cpp)
    virtual int vf0C();                            // +0x0C  00C78D30  start the countdown
    virtual void vf10();                           // +0x10  00C78D60  count down by the frame time
    virtual int vf14();                            // +0x14  00C78D90  countdown elapsed
    // +0x18  inherited
    virtual void vf1C(int *record);                // +0x1C  00C84CC0  take the record
    virtual int vf20();                            // +0x20  00C78DC0  restart the countdown

    // fields (absolute byte offsets)
    float &duration()   { return *(float *)((char *)this + 0x10); }  // +0x10  record+0x08; -1.0 = unset
    float &remaining()  { return *(float *)((char *)this + 0x14); }  // +0x14  time left
};

} // namespace Trigger
