// REFINED
// Trigger::cCondInCamera -- trigger condition: true when a world position projects inside the screen.
// Refined from RTTI (base: Trigger::cCondition, vftable 0x016A8F10) and the raw decompilation
// of src/managers/triggermanager/cCondInCamera.cpp.
#pragma once

namespace Trigger {

class cCondition;

// RTTI base: Trigger::cCondition (vftable 0x016A8930). The base header is not included here to
// keep this header self-contained; the base fields (+0x04 condition record, +0x08, +0x0C) are
// accessed raw in the .cpp.
class cCondInCamera /* : public cCondition */ {
public:
    // vftable (0x016A8F10), in slot order (slot = byte offset)
    virtual cCondInCamera *vf00(unsigned char flags);  // +0x00  00C85330  scalar deleting destructor
    virtual void vf04();                               // +0x04  00C77C20  not defined in this file: Trigger::cCondPhaseJump::vf04 (Trigger::cCondition default)
    virtual void vf08();                               // +0x08  00C77C30  not defined in this file: Trigger::cCondPhaseJump::vf08 (Trigger::cCondition default)
    virtual int vf0C();                                // +0x0C  00C85350  not defined in this file: Trigger::Cond::IN_CAM
    virtual void vf10();                               // +0x10  00C77C50  not defined in this file: Trigger::cCondPhaseJump::vf10 (Trigger::cCondition default)
    virtual int vf14();                                // +0x14  00C7A320  evaluate the condition
    virtual int vf18();                                // +0x18  00C77C60  not defined in this file: Trigger::cCondPhaseJump::vf18 (Trigger::cCondition default)
    virtual void vf1C(int *record);                    // +0x1C  00C7A3B0  stores the trigger record and copies its parameters
    virtual int vf20();                                // +0x20  00C77C80  not defined in this file: Trigger::cCondition::vf20 (Trigger::cCondition default)

    // fields (absolute byte offsets from the object start)
    int &field10() { return *(int *)((char *)this + 0x10); }      // +0x10  ? copied from record+0x08
    int &active() { return *(int *)((char *)this + 0x14); }       // +0x14  ? the test is skipped (false) while this is 0
    float &screenX() { return *(float *)((char *)this + 0x20); }  // +0x20  projected position x (written by FUN_00d9fa80)
    float &screenY() { return *(float *)((char *)this + 0x24); }  // +0x24  projected position y
    float &screenW() { return *(float *)((char *)this + 0x2C); }  // +0x2C  projected position w (in front of the camera when > 0)
    float &worldX() { return *(float *)((char *)this + 0x30); }   // +0x30  world position that is projected (vector at +0x30)
};

} // namespace Trigger
