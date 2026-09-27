// REFINED
// Trigger::cCondResetSequence -- trigger condition: child conditions must become true in order (resets on failure) (vftable 0x016AA268).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondResetSequence.cpp.
#pragma once

namespace Trigger {

class cCondition;

// RTTI base: Trigger::cCondition (vftable 0x016A8930). No header models the base yet, so it is not
// derived from here; its fields (+0x04 condition record, +0x08, +0x0C last result) are accessed raw.
class cCondResetSequence /* : public cCondition */ {
public:
    cCondResetSequence();                           // 00C7D950

    // vftable (0x016AA268), in slot order (slot = byte offset)
    virtual cCondResetSequence *vf00(unsigned char flags); // +0x00  00C86AB0  scalar deleting destructor
    virtual void vf04();                            // +0x04  00C7D9A0  forwards vf04 to every child
    virtual void vf08();                            // +0x08  00C7D9D0  vf08 on every child, then deletes it and clears the slot
    virtual int vf0C();                             // +0x0C  00C7DA20  resets the sequence and calls vf0C on the first child
    virtual void vf10();                            // +0x10  00C7DA80  advances the sequence
    virtual int vf14();                             // +0x14  00C7DC10  returns the result (+0x90)
    virtual int vf18();                             // +0x18  00C77C60  inherited
    virtual void vf1C(int *record);                 // +0x1C  00C9CB20  = Trigger::Cond::RSEQ (defined elsewhere)
    virtual int vf20();                             // +0x20  00C7DC20  vf20 on every child; resets the step when all return 1

    // fields (absolute byte offsets)
    int **children() { return (int **)((char *)this + 0x10); }                      // +0x10  child conditions [15]
    int *inverted() { return (int *)((char *)this + 0x4C); }                        // +0x4C  per child: 1 = negate its result [15]
    int &step() { return *(int *)((char *)this + 0x88); }                           // +0x88  index of the child being waited for; -1 when the sequence completed
    int &childCount() { return *(int *)((char *)this + 0x8C); }                     // +0x8C  number of children
    int &result() { return *(int *)((char *)this + 0x90); }                         // +0x90  1 once every child was true in order
};

} // namespace Trigger
