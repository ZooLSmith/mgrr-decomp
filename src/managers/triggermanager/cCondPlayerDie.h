// REFINED
// Trigger::cCondPlayerDie -- trigger condition: the player died (vftable 0x016A920C).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondPlayerDie.cpp.
#pragma once

namespace Trigger {

class cCondition;

// RTTI base: Trigger::cCondition (vftable 0x016A8930). No header models the base yet, so it is not
// derived from here; its fields (+0x04 condition record, +0x08, +0x0C last result) are accessed raw.
class cCondPlayerDie /* : public cCondition */ {
public:
    // vftable (0x016A920C), in slot order (slot = byte offset)
    virtual cCondPlayerDie *vf00(unsigned char flags); // +0x00  00C859B0  scalar deleting destructor
    virtual void vf04();                            // +0x04  00C77C20  inherited
    virtual void vf08();                            // +0x08  00C77C30  inherited
    virtual int vf0C();                             // +0x0C  00C77C40  inherited
    virtual void vf10();                            // +0x10  00C7ABA0  (empty)
    virtual int vf14();                             // +0x14  00C859D0  player hp / state test
    virtual int vf18();                             // +0x18  00C77C60  inherited
    virtual void vf1C(int *record);                 // +0x1C  00C7ABB0  stores the record and its mode (record+0x08)
    virtual int vf20();                             // +0x20  00C77C80  inherited

    // fields (absolute byte offsets)
    int &mode() { return *(int *)((char *)this + 0x10); }                           // +0x10  record+0x08; 1 = test the Pl0000 hp, otherwise the BehaviorAppBase state
};

} // namespace Trigger
