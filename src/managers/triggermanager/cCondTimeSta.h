// REFINED
// Trigger::cCondTimeSta -- trigger condition met once a time has run out while any of up to
// eight scenario-state flags is clear (vftable 0x016AA04C).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondTimeSta.cpp.
#pragma once
#include "cCondition.h"

namespace Trigger {

class cCondTimeSta : public cCondition {
public:
    // vftable (0x016AA04C), in slot order (slot = byte offset)
    virtual cCondTimeSta *vf00(unsigned char flags);  // +0x00  00C866C0  scalar deleting destructor
    // +0x04, +0x08  inherited (cCondPhaseJump.cpp)
    virtual int vf0C();                               // +0x0C  00C7D080  start
    // +0x10  Trigger::Cond::STA_FLAG_2 (conditions/TrgCondStaFlag.cpp): update, counts time down
    // +0x14  Trigger::Cond::TIME_STA (conditions/TrgCondTimeSta.cpp): time <= 0
    // +0x18  inherited
    virtual void vf1C(int *record);                   // +0x1C  00C7D170  take the record, resolve the flags
    // +0x20  00C77C80  inherited cCondition::vf20

    // fields (absolute byte offsets)
    int *flagHashes()   { return (int *)((char *)this + 0x10); }     // +0x10  int[8], record+0x08; -1 = unused
    float &time()       { return *(float *)((char *)this + 0x30); }  // +0x30  record+0x28; -1.0 = unset
    int *flagIndices()  { return (int *)((char *)this + 0x34); }     // +0x34  int[8], index into the STA flag table (-1 = unresolved)
    int &anyFlagClear() { return *(int *)((char *)this + 0x54); }    // +0x54  written by STA_FLAG_2
};

} // namespace Trigger
