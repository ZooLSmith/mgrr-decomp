// REFINED
// Trigger::cActSetNextCodec -- trigger action (vftable 0x016AFF68).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActSetNextCodec>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActSetNextCodec.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActSetNextCodec : public cAction<cActSetNextCodec> {
public:
    // vftable (0x016AFF68), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C93910  address of this action type's static descriptor
    virtual cActSetNextCodec *vf04(unsigned char flags); // +0x04  00C93920  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8D000  (empty)
    virtual void vf0C();                         // +0x0C  00C8D010  (empty)
    virtual void vf10();                         // +0x10  00C8D020  (empty)
    virtual void vf14();                         // +0x14  00C8D030  (empty)
    virtual int vf18();                          // +0x18  00C805F0  NEXT_CODEC: checks that the record's codec id is in use; 1 on success
    // +0x1C  00C8D040  inherited Trigger::cAction<Trigger::cActSetNextCodec>::vf1C
    // +0x20  00C8D050  inherited Trigger::cAction<Trigger::cActSetNextCodec>::vf20
};

} // namespace Trigger
