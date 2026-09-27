// REFINED
// Trigger::cCondCodecSeqEnd -- trigger condition: true when FUN_00937e00 reports the codec sequence at +0x10 has ended.
// Refined from RTTI (bases: Trigger::cCondition, vftable 0x016A94C8) and the raw decompilation
// of src/managers/triggermanager/cCondCodecSeqEnd.cpp.
#pragma once

namespace Trigger {

// RTTI base: Trigger::cCondition. No refined cCondition header exists, so the base is not
// declared here; its fields (+0x04 record, +0x08, +0x0C) are accessed raw in the .cpp.
class cCondCodecSeqEnd /* : public cCondition */ {
public:
    // vftable (0x016A94C8), in slot order (slot = byte offset)
    virtual cCondCodecSeqEnd *vf00(unsigned char flags);  // +0x00  00C85D10  scalar deleting destructor
    virtual void vf04();                                  // +0x04  00C77C20  inherited Trigger::cCondPhaseJump::vf04
    virtual void vf08();                                  // +0x08  00C77C30  inherited Trigger::cCondPhaseJump::vf08
    virtual int vf0C();                                   // +0x0C  00C77C40  inherited Trigger::cCondPhaseJump::vf0C
    virtual void vf10();                                  // +0x10  00C77C50  inherited Trigger::cCondPhaseJump::vf10
    virtual int vf14();                                   // +0x14  00C7B410
    virtual int vf18();                                   // +0x18  00C77C60  inherited Trigger::cCondPhaseJump::vf18
    virtual void vf1C(int *record);                       // +0x1C  00C7B440
    virtual int vf20();                                   // +0x20  00C77C80  inherited Trigger::cCondition::vf20

    // fields (absolute offsets from the object start)
    int &codecArg0() { return *(int *)((char *)this + 0x10); }  // +0x10  record+0x08
    int &codecArg1() { return *(int *)((char *)this + 0x14); }  // +0x14  record+0x0C
    int &codecArg2() { return *(int *)((char *)this + 0x18); }  // +0x18  record+0x10
    int &codecArg3() { return *(int *)((char *)this + 0x1C); }  // +0x1C  record+0x14
};

} // namespace Trigger
