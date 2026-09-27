// REFINED
// Trigger::cCondIsFadeEnd -- trigger condition: the fade has ended (vftable 0x016AA308).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondIsFadeEnd.cpp.
#pragma once

namespace Trigger {

class cCondition;

// RTTI base: Trigger::cCondition (vftable 0x016A8930). No header models the base yet, so it is not
// derived from here; its fields (+0x04 condition record, +0x08, +0x0C last result) are accessed raw.
class cCondIsFadeEnd /* : public cCondition */ {
public:
    // vftable (0x016AA308), in slot order (slot = byte offset)
    virtual cCondIsFadeEnd *vf00(unsigned char flags); // +0x00  00C86BA0  scalar deleting destructor
    virtual void vf04();                            // +0x04  00C77C20  inherited
    virtual void vf08();                            // +0x08  00C77C30  inherited
    virtual int vf0C();                             // +0x0C  00C77C40  inherited
    virtual void vf10();                            // +0x10  00C7DE40  (empty)
    virtual int vf14();                             // +0x14  00C7DE50  latches DAT_01dbd914 on first call, then asks FUN_00eb4340
    virtual int vf18();                             // +0x18  00C77C60  inherited
    virtual void vf1C(int *record);                 // +0x1C  00C7DE70  stores the condition record (+0x04)
    virtual int vf20();                             // +0x20  00C77C80  inherited

    // fields (absolute byte offsets)
    int &fadeObject() { return *(int *)((char *)this + 0x10); }                     // +0x10  fade object latched from DAT_01dbd914 (0 until the first vf14)
};

} // namespace Trigger
