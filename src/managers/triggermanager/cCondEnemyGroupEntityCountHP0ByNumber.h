// REFINED
// Trigger::cCondEnemyGroupEntityCountHP0ByNumber -- trigger condition: true when the HP-0 entity count of a numbered set in a group compares with a threshold.
// Refined from RTTI (base: Trigger::cCondition, vftable 0x016A9BC0) and the raw decompilation
// of src/managers/triggermanager/cCondEnemyGroupEntityCountHP0ByNumber.cpp.
#pragma once

namespace Trigger {

class cCondition;

// RTTI base: Trigger::cCondition (vftable 0x016A8930). The base header is not included here to
// keep this header self-contained; the base fields (+0x04 condition record, +0x08, +0x0C) are
// accessed raw in the .cpp.
class cCondEnemyGroupEntityCountHP0ByNumber /* : public cCondition */ {
public:
    // vftable (0x016A9BC0), in slot order (slot = byte offset)
    virtual cCondEnemyGroupEntityCountHP0ByNumber *vf00(unsigned char flags);  // +0x00  00C862C0  scalar deleting destructor
    virtual void vf04();                                                       // +0x04  00C77C20  not defined in this file: Trigger::cCondPhaseJump::vf04 (Trigger::cCondition default)
    virtual void vf08();                                                       // +0x08  00C77C30  not defined in this file: Trigger::cCondPhaseJump::vf08 (Trigger::cCondition default)
    virtual int vf0C();                                                        // +0x0C  00C77C40  not defined in this file: Trigger::cCondPhaseJump::vf0C (Trigger::cCondition default)
    virtual void vf10();                                                       // +0x10  00C77C50  not defined in this file: Trigger::cCondPhaseJump::vf10 (Trigger::cCondition default)
    virtual bool vf14();                                                       // +0x14  00C7C3E0  not defined in this file: Trigger::Cond::ENM_GRP_ENTITY_HP0_COUNT
    virtual int vf18();                                                        // +0x18  00C77C60  not defined in this file: Trigger::cCondPhaseJump::vf18 (Trigger::cCondition default)
    virtual void vf1C(int *record);                                            // +0x1C  00C7C4A0  stores the trigger record and copies its parameters
    virtual int vf20();                                                        // +0x20  00C77C80  not defined in this file: Trigger::cCondition::vf20 (Trigger::cCondition default)

    // fields (absolute byte offsets from the object start)
    int &compareOp() { return *(int *)((char *)this + 0x10); }  // +0x10  1 <, 2 <=, 3 ==, 4 >, 5 >= (count OP threshold)
    int &threshold() { return *(int *)((char *)this + 0x14); }  // +0x14  value the count is compared with
    int &groupNo() { return *(int *)((char *)this + 0x18); }    // +0x18  enemy group number (-1 = unset)
    int &enemyNo() { return *(int *)((char *)this + 0x1C); }    // +0x1C  enemy set number inside the group (-1 = unset)
};

} // namespace Trigger
