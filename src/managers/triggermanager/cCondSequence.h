// REFINED
// Trigger::cCondSequence -- trigger condition met when its child conditions become true one
// after another, in order (vftable 0x016A8AD0).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondSequence.cpp.
#pragma once
#include "cCondition.h"

namespace Trigger {

class cCondSequence : public cCondition {
public:
    cCondSequence();                                   // 00C78EC0

    // vftable (0x016A8AD0), in slot order (slot = byte offset)
    virtual cCondSequence *vf00(unsigned char flags);  // +0x00  00C84D10  scalar deleting destructor
    virtual void vf04();                               // +0x04  00C78F30  vf04 on every child
    virtual void vf08();                               // +0x08  00C78F60  vf08 + delete on every child
    // +0x0C  Trigger::Cond::SEQ (conditions/TrgCondSeq.cpp): start
    virtual void vf10();                               // +0x10  00C79000  advance through the children
    virtual int vf14();                                // +0x14  00C79140  sequence completed
    // +0x18  inherited (cCondPhaseJump.cpp)
    // +0x1C  Trigger::Cond::SEQ_2 (conditions/TrgCondSeq.cpp): build the children from the record
    virtual int vf20();                                // +0x20  00C79150  restart every child

    // fields (absolute byte offsets)
    cCondition **children() { return (cCondition **)((char *)this + 0x10); } // +0x10  cCondition *[15]
    int *negate()           { return (int *)((char *)this + 0x4C); }         // +0x4C  int[15]; 1 = child result inverted
    int &current()          { return *(int *)((char *)this + 0x88); }        // +0x88  index of the child being waited on (-1 = done)
    int &childCount()       { return *(int *)((char *)this + 0x8C); }        // +0x8C  number of children
    int &completed()        { return *(int *)((char *)this + 0x90); }        // +0x90  result returned by vf14
};

} // namespace Trigger
