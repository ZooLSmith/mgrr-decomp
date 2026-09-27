// REFINED
// Trigger::cCondAnd -- trigger condition that is true when all of its child conditions are
// (each optionally inverted) (vftable 0x016A8BD8, object size 0x8C).
// Refined from RTTI (bases: Trigger::cCondition, vftable 0x016A8930) and the raw decompilation
// of src/managers/triggermanager/cCondAnd.cpp.
#pragma once

namespace Trigger {

class cCondition;

// RTTI base: Trigger::cCondition (vftable 0x016A8930). The base header is not included here to
// keep this header self-contained; base fields (+0x04 record, +0x08, +0x0C) are accessed raw.
class cCondAnd /* : public cCondition */ {
public:
    cCondAnd();                                          // 00C793F0

    // vftable (0x016A8BD8), in slot order (slot = byte offset)
    virtual cCondAnd *vf00(unsigned char flags);         // +0x00  00C84D50  scalar deleting destructor
    virtual void vf04();                                 // +0x04  00C79420  forwards vf04 to every child
    virtual void vf08();                                 // +0x08  00C79450  forwards vf08 to every child, then deletes it
    virtual int vf0C();                                  // +0x0C  00C79490  Trigger::Cond::AND (TrgCondAnd.cpp)
    virtual void vf10();                                 // +0x10  00C79500  forwards vf10 to every child
    virtual int vf14();                                  // +0x14  00C79530  evaluate: 1 when every (inverted) child is true
    virtual int vf18();                                  // +0x18  00C77C60  inherited Trigger::cCondPhaseJump::vf18 (cCondition base)
    virtual void vf1C(int *record);                      // +0x1C  00C9C5E0  Trigger::Cond::AND_2 (TrgCondAnd.cpp)
    virtual int vf20();                                  // +0x20  00C79590  0 when any child's vf20 returns 0

    // fields (absolute byte offsets); +0x04/+0x08/+0x0C belong to Trigger::cCondition
    int **children()   { return (int **)((char *)this + 0x10); }   // +0x10  child conditions [15]
    int  *inverted()   { return (int *)((char *)this + 0x4C); }    // +0x4C  per child: 1 = invert its vf14 result [15]
    int  &childCount() { return *(int *)((char *)this + 0x88); }   // +0x88  (-1 after construction)
};

} // namespace Trigger
