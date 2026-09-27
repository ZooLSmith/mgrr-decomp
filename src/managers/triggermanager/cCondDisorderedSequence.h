// REFINED
// Trigger::cCondDisorderedSequence -- trigger condition: true once every child condition has been satisfied, in any order.
// Refined from RTTI (bases: Trigger::cCondition, vftable 0x016A8B54) and the raw decompilation
// of src/managers/triggermanager/cCondDisorderedSequence.cpp.
#pragma once

namespace Trigger {

// RTTI base: Trigger::cCondition. No refined cCondition header exists, so the base is not
// declared here; its fields (+0x04 record, +0x08, +0x0C) are accessed raw in the .cpp.
class cCondDisorderedSequence /* : public cCondition */ {
public:
    cCondDisorderedSequence();

    // vftable (0x016A8B54), in slot order (slot = byte offset)
    virtual cCondDisorderedSequence *vf00(unsigned char flags);  // +0x00  00C84D30  scalar deleting destructor
    virtual void vf04();                                         // +0x04  00C791D0
    virtual void vf08();                                         // +0x08  00C79210
    virtual int vf0C();                                          // +0x0C  00C79250  inherited Trigger::Cond::DSEQ
    virtual void vf10();                                         // +0x10  00C792C0
    virtual int vf14();                                          // +0x14  00C79380
    virtual int vf18();                                          // +0x18  00C77C60  inherited Trigger::cCondPhaseJump::vf18
    virtual void vf1C(int *record);                              // +0x1C  00C9C570  inherited Trigger::Cond::DSEQ_2
    virtual int vf20();                                          // +0x20  00C79390

    // fields (absolute offsets from the object start)
    int *&child(int i) { return ((int **)((char *)this + 0x10))[i]; }                        // +0x10  [15] child conditions (Trigger::cCondition *)
    int &negate(int i) { return ((int *)((char *)this + 0x4C))[i]; }                         // +0x4C  [15] 1 = invert the child result
    unsigned int &childResult(int i) { return ((unsigned int *)((char *)this + 0x88))[i]; }  // +0x88  [15] latched result of each child
    int &childCount() { return *(int *)((char *)this + 0xC4); }                              // +0xC4  number of children
    unsigned int &satisfied() { return *(unsigned int *)((char *)this + 0xC8); }             // +0xC8  AND of all child results
};

} // namespace Trigger
