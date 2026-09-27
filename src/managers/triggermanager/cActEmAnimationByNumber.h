// REFINED
// Trigger::cActEmAnimationByNumber -- trigger action (vftable 0x016B03AC).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActEmAnimationByNumber>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActEmAnimationByNumber.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActEmAnimationByNumber : public cAction<cActEmAnimationByNumber> {
public:
    // vftable (0x016B03AC), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C941D0  address of this action type's static descriptor
    virtual cActEmAnimationByNumber *vf04(unsigned char flags); // +0x04  00C941E0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8E030  (empty)
    virtual void vf0C();                         // +0x0C  00C8E040  (empty)
    virtual void vf10();                         // +0x10  00C8E050  (empty)
    virtual void vf14();                         // +0x14  00C8E060  (empty)
    virtual int vf18();                          // +0x18  00C80CC0  plays a motion on the enemy selected by the record
    // +0x1C  00C8E070  inherited cAction<cActEmAnimationByNumber>::vf1C
    // +0x20  00C8E080  inherited cAction<cActEmAnimationByNumber>::vf20
};

} // namespace Trigger
