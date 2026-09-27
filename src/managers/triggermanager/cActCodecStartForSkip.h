// REFINED
// Trigger::cActCodecStartForSkip -- trigger action (vftable 0x016B06CC).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActCodecStartForSkip>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActCodecStartForSkip.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActCodecStartForSkip : public cAction<cActCodecStartForSkip> {
public:
    // vftable (0x016B06CC), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C946D0  address of this action type's static descriptor
    virtual cActCodecStartForSkip *vf04(unsigned char flags); // +0x04  00C946E0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8ECB0  (empty)
    virtual void vf0C();                         // +0x0C  00C8ECC0  (empty)
    virtual void vf10();                         // +0x10  00C8ECD0  (empty)
    virtual void vf14();                         // +0x14  00C8ECE0  (empty)
    // +0x18  00C81420  Act::CODEC_START_FOR_SKIP (actions/TrgActCodecStartForSkip.cpp)
    // +0x1C  00C8ECF0  inherited cAction<cActCodecStartForSkip>::vf1C
    // +0x20  00C8ED00  inherited cAction<cActCodecStartForSkip>::vf20
};

} // namespace Trigger
