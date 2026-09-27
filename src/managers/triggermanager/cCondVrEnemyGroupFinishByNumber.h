// REFINED
// Trigger::cCondVrEnemyGroupFinishByNumber -- trigger condition "VR mission: enemy group
// (set/group numbers) finished" (vftable 0x016AA1F0).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondVrEnemyGroupFinishByNumber.cpp.
#pragma once
#include "cCondition.h"

namespace Trigger {

class cCondVrEnemyGroupFinishByNumber : public cCondition {
public:
    cCondVrEnemyGroupFinishByNumber();                                // 00C7D7B0

    // vftable (0x016AA1F0), in slot order (slot = byte offset)
    virtual cCondVrEnemyGroupFinishByNumber *vf00(unsigned char flags); // +0x00  00C86A50  scalar deleting destructor
    // +0x04..+0x0C  inherited (cCondPhaseJump.cpp)
    virtual void vf10();                                              // +0x10  00C7D7E0  (empty)
    virtual int vf14();                                               // +0x14  00C7D7F0  group finished (bool in the binary)
    // +0x18  inherited
    virtual void vf1C(int *record);                                   // +0x1C  00C7D860  take the record
    virtual int vf20();                                               // +0x20  00C7D880  restart: clears the state

    // fields (absolute byte offsets)
    int &setNo()        { return *(int *)((char *)this + 0x10); }  // +0x10  record+0x08
    int &groupNo()      { return *(int *)((char *)this + 0x14); }  // +0x14  record+0x0C
    int &finishState()  { return *(int *)((char *)this + 0x18); }  // +0x18  result of FUN_00c18d20 (1 = finished)
};

} // namespace Trigger
