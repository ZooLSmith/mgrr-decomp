// REFINED
// Trigger::cCondNotFlagDlc3 -- trigger condition: flag bit is clear in DAT_018abf98 (DLC3 flags) (vftable 0x016AA5B0).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondNotFlagDlc3.cpp.
#pragma once

namespace Trigger {

class cCondition;

// RTTI base: Trigger::cCondition (vftable 0x016A8930). No header models the base yet, so it is not
// derived from here; its fields (+0x04 condition record, +0x08, +0x0C last result) are accessed raw.
class cCondNotFlagDlc3 /* : public cCondition */ {
public:
    // vftable (0x016AA5B0), in slot order (slot = byte offset)
    virtual cCondNotFlagDlc3 *vf00(unsigned char flags); // +0x00  00C86F90  scalar deleting destructor
    virtual void vf04();                            // +0x04  00C77C20  inherited
    virtual void vf08();                            // +0x08  00C77C30  inherited
    virtual int vf0C();                             // +0x0C  00C77C40  inherited
    virtual void vf10();                            // +0x10  00C77C50  inherited
    virtual bool vf14();                            // +0x14  00C86FB0  flag bit flagNo is 0
    virtual int vf18();                             // +0x18  00C77C60  inherited
    virtual void vf1C(int *record);                 // +0x1C  00C7E890  stores the record and its flag number (record+0x08)
    virtual int vf20();                             // +0x20  00C77C80  inherited

    // fields (absolute byte offsets)
    unsigned int &flagNo() { return *(unsigned int *)((char *)this + 0x10); }       // +0x10  flag bit number (record+0x08): bit 31-(n&31) of word n>>5
};

} // namespace Trigger
