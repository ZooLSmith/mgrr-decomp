// REFINED
// Trigger::cCondIsFileExist -- trigger condition on a file name (file exists) (vftable 0x016A93C4).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondIsFileExist.cpp.
#pragma once

namespace Trigger {

class cCondition;

// RTTI base: Trigger::cCondition (vftable 0x016A8930). No header models the base yet, so it is not
// derived from here; its fields (+0x04 condition record, +0x08, +0x0C last result) are accessed raw.
class cCondIsFileExist /* : public cCondition */ {
public:
    cCondIsFileExist();                             // 00C7B150

    // vftable (0x016A93C4), in slot order (slot = byte offset)
    virtual cCondIsFileExist *vf00(unsigned char flags); // +0x00  00C85C90  scalar deleting destructor
    virtual void vf04();                            // +0x04  00C77C20  inherited
    virtual void vf08();                            // +0x08  00C77C30  inherited
    virtual int vf0C();                             // +0x0C  00C77C40  inherited
    virtual void vf10();                            // +0x10  00C7B1A0  (empty)
    virtual int vf14();                             // +0x14  00C7B1B0  always 0
    virtual int vf18();                             // +0x18  00C77C60  inherited
    virtual void vf1C(int *record);                 // +0x1C  00C7B1C0  stores the record and copies 32 bytes of file name (record+0x08)
    virtual int vf20();                             // +0x20  00C77C80  inherited

    // fields (absolute byte offsets)
    unsigned int *fileName() { return (unsigned int *)((char *)this + 0x10); }      // +0x10  char[32] file name, copied as 8 dwords
};

} // namespace Trigger
