// REFINED
// Trigger::cActCodecEndAll -- trigger action (vftable 0x016B058C).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActCodecEndAll>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActCodecEndAll.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActCodecEndAll : public cAction<cActCodecEndAll> {
public:
    // vftable (0x016B058C), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C944D0  address of this action type's static descriptor
    virtual cActCodecEndAll *vf04(unsigned char flags); // +0x04  00C944E0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8E7B0  (empty)
    virtual void vf0C();                         // +0x0C  00C8E7C0  (empty)
    virtual void vf10();                         // +0x10  00C8E7D0  (empty)
    virtual void vf14();                         // +0x14  00C8E7E0  (empty)
    // +0x18  00C81270  Act::CODEC_SEQ_END_ALL (actions/TrgActCodecSeqEndAll.cpp)
    // +0x1C  00C8E7F0  inherited cAction<cActCodecEndAll>::vf1C
    // +0x20  00C8E800  inherited cAction<cActCodecEndAll>::vf20
};

} // namespace Trigger
