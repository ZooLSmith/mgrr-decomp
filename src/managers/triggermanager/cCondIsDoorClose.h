// REFINED
// Trigger::cCondIsDoorClose -- trigger condition: true when the named door is closed.
// Refined from RTTI (base: Trigger::cCondition, vftable 0x016A9194) and the raw decompilation
// of src/managers/triggermanager/cCondIsDoorClose.cpp.
#pragma once

namespace Trigger {

class cCondition;

// RTTI base: Trigger::cCondition (vftable 0x016A8930). The base header is not included here to
// keep this header self-contained; the base fields (+0x04 condition record, +0x08, +0x0C) are
// accessed raw in the .cpp.
class cCondIsDoorClose /* : public cCondition */ {
public:
    cCondIsDoorClose();

    // vftable (0x016A9194), in slot order (slot = byte offset)
    virtual cCondIsDoorClose *vf00(unsigned char flags);  // +0x00  00C85850  scalar deleting destructor
    virtual void vf04();                                  // +0x04  00C77C20  not defined in this file: Trigger::cCondPhaseJump::vf04 (Trigger::cCondition default)
    virtual void vf08();                                  // +0x08  00C77C30  not defined in this file: Trigger::cCondPhaseJump::vf08 (Trigger::cCondition default)
    virtual int vf0C();                                   // +0x0C  00C77C40  not defined in this file: Trigger::cCondPhaseJump::vf0C (Trigger::cCondition default)
    virtual void vf10();                                  // +0x10  00C7AA50  (empty)
    virtual int vf14();                                   // +0x14  00C7AA60  evaluate the condition
    virtual int vf18();                                   // +0x18  00C77C60  not defined in this file: Trigger::cCondPhaseJump::vf18 (Trigger::cCondition default)
    virtual void vf1C(int *record);                       // +0x1C  00C7AAA0  stores the trigger record and copies its parameters
    virtual int vf20();                                   // +0x20  00C77C80  not defined in this file: Trigger::cCondition::vf20 (Trigger::cCondition default)

    // fields (absolute byte offsets from the object start)
    char *doorName() { return (char *)this + 0x10; }  // +0x10  door name (copied from record+0x08)
};

} // namespace Trigger
