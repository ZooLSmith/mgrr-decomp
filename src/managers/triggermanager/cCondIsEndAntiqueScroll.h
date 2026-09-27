// REFINED
// Trigger::cCondIsEndAntiqueScroll -- trigger condition: the antique-scroll display has ended (vftable 0x016AA1A0).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondIsEndAntiqueScroll.cpp.
#pragma once

namespace Trigger {

class cCondition;

// RTTI base: Trigger::cCondition (vftable 0x016A8930). No header models the base yet, so it is not
// derived from here; its fields (+0x04 condition record, +0x08, +0x0C last result) are accessed raw.
class cCondIsEndAntiqueScroll /* : public cCondition */ {
public:
    // vftable (0x016AA1A0), in slot order (slot = byte offset)
    virtual cCondIsEndAntiqueScroll *vf00(unsigned char flags); // +0x00  00C86A10  scalar deleting destructor
    virtual void vf04();                            // +0x04  00C77C20  inherited
    virtual void vf08();                            // +0x08  00C77C30  inherited
    virtual int vf0C();                             // +0x0C  00C77C40  inherited
    virtual void vf10();                            // +0x10  00C7D710  (empty)
    virtual bool vf14();                            // +0x14  00C7D720  FUN_00a55810 on object 0x01BE9980
    virtual int vf18();                             // +0x18  00C77C60  inherited
    virtual void vf1C(int *record);                 // +0x1C  00C7D740  stores the condition record (+0x04)
    virtual int vf20();                             // +0x20  00C77C80  inherited
};

} // namespace Trigger
