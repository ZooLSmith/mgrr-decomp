// REFINED
// Trigger::cCondPlayerEnergyGaugeState -- trigger condition: the player energy gauge is in the named colour state (vftable 0x016A934C).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondPlayerEnergyGaugeState.cpp.
#pragma once

namespace Trigger {

class cCondition;

// RTTI base: Trigger::cCondition (vftable 0x016A8930). No header models the base yet, so it is not
// derived from here; its fields (+0x04 condition record, +0x08, +0x0C last result) are accessed raw.
class cCondPlayerEnergyGaugeState /* : public cCondition */ {
public:
    // vftable (0x016A934C), in slot order (slot = byte offset)
    virtual cCondPlayerEnergyGaugeState *vf00(unsigned char flags); // +0x00  00C85B50  scalar deleting destructor
    virtual void vf04();                            // +0x04  00C77C20  inherited
    virtual void vf08();                            // +0x08  00C77C30  inherited
    virtual int vf0C();                             // +0x0C  00C77C40  inherited
    virtual void vf10();                            // +0x10  00C7B050  (empty)
    virtual int vf14();                             // +0x14  00C85B70  gauge colour test ("b"/"B", "y"/"Y", "r"/"R")
    virtual int vf18();                             // +0x18  00C77C60  inherited
    virtual void vf1C(int *record);                 // +0x1C  00C7B060  stores the record and its colour name hash (record+0x08)
    virtual int vf20();                             // +0x20  00C77C80  inherited

    // fields (absolute byte offsets)
    unsigned int &colorHash() { return *(unsigned int *)((char *)this + 0x10); }    // +0x10  FUN_00e03ea0 hash of the colour name (record+0x08)
};

} // namespace Trigger
