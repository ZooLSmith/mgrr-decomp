// REFINED
// Trigger::cCondIsNotFileExist -- trigger condition on a file name (file does not exist) (vftable 0x016A93EC).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondIsNotFileExist.cpp.
#pragma once

namespace Trigger {

class cCondition;

// RTTI base: Trigger::cCondition (vftable 0x016A8930). No header models the base yet, so it is not
// derived from here; its fields (+0x04 condition record, +0x08, +0x0C last result) are accessed raw.
class cCondIsNotFileExist /* : public cCondition */ {
public:
    cCondIsNotFileExist();                          // 00C7B1E0

    // vftable (0x016A93EC), in slot order (slot = byte offset)
    virtual cCondIsNotFileExist *vf00(unsigned char flags); // +0x00  00C85CB0  scalar deleting destructor
    virtual void vf04();                            // +0x04  00C77C20  inherited
    virtual void vf08();                            // +0x08  00C77C30  inherited
    virtual int vf0C();                             // +0x0C  00C77C40  inherited
    virtual void vf10();                            // +0x10  00C7B230  (empty)
    virtual int vf14();                             // +0x14  00C7B240  always 0
    virtual int vf18();                             // +0x18  00C77C60  inherited
    virtual void vf1C(int *record);                 // +0x1C  00C7B250  stores the record and copies 32 bytes of file name (record+0x08)
    virtual int vf20();                             // +0x20  00C77C80  inherited

    // fields (absolute byte offsets)
    unsigned int *fileName() { return (unsigned int *)((char *)this + 0x10); }      // +0x10  char[32] file name, copied as 8 dwords
};

} // namespace Trigger
