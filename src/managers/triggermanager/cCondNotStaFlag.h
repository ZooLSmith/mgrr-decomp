// REFINED
// Trigger::cCondNotStaFlag -- trigger condition: named flag of the STA_* flag table (0x018ABB58) is clear (vftable 0x016A9DB4).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondNotStaFlag.cpp.
#pragma once

namespace Trigger {

class cCondition;

// RTTI base: Trigger::cCondition (vftable 0x016A8930). No header models the base yet, so it is not
// derived from here; its fields (+0x04 condition record, +0x08, +0x0C last result) are accessed raw.
class cCondNotStaFlag /* : public cCondition */ {
public:
    // vftable (0x016A9DB4), in slot order (slot = byte offset)
    virtual cCondNotStaFlag *vf00(unsigned char flags); // +0x00  00C86540  scalar deleting destructor
    virtual void vf04();                            // +0x04  00C77C20  inherited
    virtual void vf08();                            // +0x08  00C77C30  inherited
    virtual int vf0C();                             // +0x0C  00C77C40  inherited
    virtual void vf10();                            // +0x10  00C77C50  inherited
    virtual int vf14();                             // +0x14  00C7C990  = Trigger::Cond::NOT_GAME_FLAG_2 (defined elsewhere)
    virtual int vf18();                             // +0x18  00C77C60  inherited
    virtual void vf1C(int *record);                 // +0x1C  00C7C9E0  stores the record and looks up its name hash in the flag table
    virtual int vf20();                             // +0x20  00C77C80  inherited

    // fields (absolute byte offsets)
    unsigned int &flagIndex() { return *(unsigned int *)((char *)this + 0x10); }    // +0x10  index of the flag whose name hash equals record+0x08 (0..0x18)
};

} // namespace Trigger
