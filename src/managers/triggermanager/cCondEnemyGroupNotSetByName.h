// REFINED
// Trigger::cCondEnemyGroupNotSetByName -- trigger condition: true while a named enemy set of a group is not placed.
// Refined from RTTI (base: Trigger::cCondition, vftable 0x016A9704) and the raw decompilation
// of src/managers/triggermanager/cCondEnemyGroupNotSetByName.cpp.
#pragma once

namespace Trigger {

class cCondition;

// RTTI base: Trigger::cCondition (vftable 0x016A8930). The base header is not included here to
// keep this header self-contained; the base fields (+0x04 condition record, +0x08, +0x0C) are
// accessed raw in the .cpp.
class cCondEnemyGroupNotSetByName /* : public cCondition */ {
public:
    // vftable (0x016A9704), in slot order (slot = byte offset)
    virtual cCondEnemyGroupNotSetByName *vf00(unsigned char flags);  // +0x00  00C86180  scalar deleting destructor
    virtual void vf04();                                             // +0x04  00C77C20  not defined in this file: Trigger::cCondPhaseJump::vf04 (Trigger::cCondition default)
    virtual void vf08();                                             // +0x08  00C77C30  not defined in this file: Trigger::cCondPhaseJump::vf08 (Trigger::cCondition default)
    virtual int vf0C();                                              // +0x0C  00C77C40  not defined in this file: Trigger::cCondPhaseJump::vf0C (Trigger::cCondition default)
    virtual void vf10();                                             // +0x10  00C77C50  not defined in this file: Trigger::cCondPhaseJump::vf10 (Trigger::cCondition default)
    virtual bool vf14();                                             // +0x14  00C7BAA0  evaluate the condition
    virtual int vf18();                                              // +0x18  00C77C60  not defined in this file: Trigger::cCondPhaseJump::vf18 (Trigger::cCondition default)
    virtual void vf1C(int *record);                                  // +0x1C  00C7BAD0  stores the trigger record and copies its parameters
    virtual int vf20();                                              // +0x20  00C77C80  not defined in this file: Trigger::cCondition::vf20 (Trigger::cCondition default)

    // fields (absolute byte offsets from the object start)
    int &groupNo() { return *(int *)((char *)this + 0x10); }        // +0x10  enemy group number
    char *&enemyName() { return *(char **)((char *)this + 0x14); }  // +0x14  enemy set name (points into the trigger record)
};

} // namespace Trigger
