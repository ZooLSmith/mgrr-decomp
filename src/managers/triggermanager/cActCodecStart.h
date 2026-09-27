// REFINED
// Trigger::cActCodecStart -- trigger action (vftable 0x016AFD58).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActCodecStart>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActCodecStart.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActCodecStart : public cAction<cActCodecStart> {
public:
    // vftable (0x016AFD58), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C935F0  address of this action type's static descriptor
    virtual cActCodecStart *vf04(unsigned char flags); // +0x04  00C93600  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8C920  (empty)
    virtual void vf0C();                         // +0x0C  00C8C930  (empty)
    virtual void vf10();                         // +0x10  00C8C940  (empty)
    virtual void vf14();                         // +0x14  00C8C950  (empty)
    // +0x18  00C80200  Act::CODEC_START (actions/TrgActCodecStart.cpp)
    // +0x1C  00C8C960  inherited cAction<cActCodecStart>::vf1C
    // +0x20  00C8C970  inherited cAction<cActCodecStart>::vf20
};

} // namespace Trigger
