// REFINED
// Trigger::cActCodecEnd -- trigger action (vftable 0x016B0288).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActCodecEnd>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActCodecEnd.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActCodecEnd : public cAction<cActCodecEnd> {
public:
    // vftable (0x016B0288), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C93E30  address of this action type's static descriptor
    virtual cActCodecEnd *vf04(unsigned char flags); // +0x04  00C93E40  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8DC70  (empty)
    virtual void vf0C();                         // +0x0C  00C8DC80  (empty)
    virtual void vf10();                         // +0x10  00C8DC90  (empty)
    virtual void vf14();                         // +0x14  00C8DCA0  (empty)
    // +0x18  00C80BB0  Act::CODEC_SEQ_END (actions/TrgActCodecSeqEnd.cpp)
    // +0x1C  00C8DCB0  inherited cAction<cActCodecEnd>::vf1C
    // +0x20  00C8DCC0  inherited cAction<cActCodecEnd>::vf20
};

} // namespace Trigger
