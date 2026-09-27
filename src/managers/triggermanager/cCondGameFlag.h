// REFINED
// Trigger::cCondGameFlag -- trigger condition: game flag condition; vf1C maps the record's name hash to an index of the game flag table.
// Refined from RTTI (base: Trigger::cCondition, vftable 0x016A9414) and the raw decompilation
// of src/managers/triggermanager/cCondGameFlag.cpp.
#pragma once

namespace Trigger {

class cCondition;

// RTTI base: Trigger::cCondition (vftable 0x016A8930). The base header is not included here to
// keep this header self-contained; the base fields (+0x04 condition record, +0x08, +0x0C) are
// accessed raw in the .cpp.
class cCondGameFlag /* : public cCondition */ {
public:
    // vftable (0x016A9414), in slot order (slot = byte offset)
    virtual cCondGameFlag *vf00(unsigned char flags);  // +0x00  00C85CD0  scalar deleting destructor
    virtual void vf04();                               // +0x04  00C77C20  not defined in this file: Trigger::cCondPhaseJump::vf04 (Trigger::cCondition default)
    virtual void vf08();                               // +0x08  00C77C30  not defined in this file: Trigger::cCondPhaseJump::vf08 (Trigger::cCondition default)
    virtual int vf0C();                                // +0x0C  00C77C40  not defined in this file: Trigger::cCondPhaseJump::vf0C (Trigger::cCondition default)
    virtual void vf10();                               // +0x10  00C77C50  not defined in this file: Trigger::cCondPhaseJump::vf10 (Trigger::cCondition default)
    virtual int vf14();                                // +0x14  00C7B2A0  not defined in this file: Trigger::Cond::GAME_FLAG
    virtual int vf18();                                // +0x18  00C77C60  not defined in this file: Trigger::cCondPhaseJump::vf18 (Trigger::cCondition default)
    virtual void vf1C(int *record);                    // +0x1C  00C7B2E0  stores the trigger record and copies its parameters
    virtual int vf20();                                // +0x20  00C77C80  not defined in this file: Trigger::cCondition::vf20 (Trigger::cCondition default)

    // fields (absolute byte offsets from the object start)
    unsigned int &flagIndex() { return *(unsigned int *)((char *)this + 0x10); }  // +0x10  index into the 0x36-entry game flag table
};

} // namespace Trigger
