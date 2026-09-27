// REFINED
// Trigger::cCondEnemyCountHP0ByNumber -- trigger condition: compares the number of enemies at HP 0 with the given set number against a threshold.
// Refined from RTTI (bases: Trigger::cCondition, vftable 0x016A8FB0) and the raw decompilation
// of src/managers/triggermanager/cCondEnemyCountHP0ByNumber.cpp.
#pragma once

namespace Trigger {

// RTTI base: Trigger::cCondition. No refined cCondition header exists, so the base is not
// declared here; its fields (+0x04 record, +0x08, +0x0C) are accessed raw in the .cpp.
class cCondEnemyCountHP0ByNumber /* : public cCondition */ {
public:
    // vftable (0x016A8FB0), in slot order (slot = byte offset)
    virtual cCondEnemyCountHP0ByNumber *vf00(unsigned char flags);  // +0x00  00C85580  scalar deleting destructor
    virtual void vf04();                                            // +0x04  00C77C20  inherited Trigger::cCondPhaseJump::vf04
    virtual void vf08();                                            // +0x08  00C77C30  inherited Trigger::cCondPhaseJump::vf08
    virtual int vf0C();                                             // +0x0C  00C77C40  inherited Trigger::cCondPhaseJump::vf0C
    virtual void vf10();                                            // +0x10  00C77C50  inherited Trigger::cCondPhaseJump::vf10
    virtual int vf14();                                             // +0x14  00C7A650  inherited Trigger::Cond::ENM_HP0_COUNT
    virtual int vf18();                                             // +0x18  00C77C60  inherited Trigger::cCondPhaseJump::vf18
    virtual void vf1C(int *record);                                 // +0x1C  00C7A6F0
    virtual int vf20();                                             // +0x20  00C77C80  inherited Trigger::cCondition::vf20

    // fields (absolute offsets from the object start)
    int &compareOp() { return *(int *)((char *)this + 0x10); }    // +0x10  record+0x08: 1 <, 2 <=, 3 ==, 4 >, 5 >= (count OP threshold)
    int &threshold() { return *(int *)((char *)this + 0x14); }    // +0x14  record+0x0C
    int &enemyNumber() { return *(int *)((char *)this + 0x18); }  // +0x18  record+0x10
};

} // namespace Trigger
