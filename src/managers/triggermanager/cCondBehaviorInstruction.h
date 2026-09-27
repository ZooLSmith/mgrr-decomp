// REFINED
// Trigger::cCondBehaviorInstruction -- trigger condition: true when vf124 of the object from FUN_00a7c8a0() equals the configured value.
// Refined from RTTI (bases: Trigger::cCondition, vftable 0x016A9284) and the raw decompilation
// of src/managers/triggermanager/cCondBehaviorInstruction.cpp.
#pragma once

namespace Trigger {

// RTTI base: Trigger::cCondition. No refined cCondition header exists, so the base is not
// declared here; its fields (+0x04 record, +0x08, +0x0C) are accessed raw in the .cpp.
class cCondBehaviorInstruction /* : public cCondition */ {
public:
    // vftable (0x016A9284), in slot order (slot = byte offset)
    virtual cCondBehaviorInstruction *vf00(unsigned char flags);  // +0x00  00C85AB0  scalar deleting destructor
    virtual void vf04();                                          // +0x04  00C77C20  inherited Trigger::cCondPhaseJump::vf04
    virtual void vf08();                                          // +0x08  00C77C30  inherited Trigger::cCondPhaseJump::vf08
    virtual int vf0C();                                           // +0x0C  00C7AD10
    virtual void vf10();                                          // +0x10  00C77C50  inherited Trigger::cCondPhaseJump::vf10
    virtual int vf14();                                           // +0x14  00C7AD20
    virtual int vf18();                                           // +0x18  00C77C60  inherited Trigger::cCondPhaseJump::vf18
    virtual void vf1C(int *record);                               // +0x1C  00C7AD80
    virtual int vf20();                                           // +0x20  00C77C80  inherited Trigger::cCondition::vf20

    // fields (absolute offsets from the object start)
    int &targetId() { return *(int *)((char *)this + 0x10); }       // +0x10  record+0x08; -1 = none
    int &instructionId() { return *(int *)((char *)this + 0x14); }  // +0x14  record+0x0C
};

} // namespace Trigger
