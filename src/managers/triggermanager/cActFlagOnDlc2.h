// REFINED
// Trigger::cActFlagOnDlc2 -- trigger action (vftable 0x016B0A64).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActFlagOnDlc2>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActFlagOnDlc2.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActFlagOnDlc2 : public cAction<cActFlagOnDlc2> {
public:
    // vftable (0x016B0A64), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C8FB00  address of this action type's static descriptor
    virtual cActFlagOnDlc2 *vf04(unsigned char flags); // +0x04  00C94C80  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8FB10  (empty)
    virtual void vf0C();                         // +0x0C  00C8FB20  (empty)
    virtual void vf10();                         // +0x10  00C8FB30  (empty)
    virtual void vf14();                         // +0x14  00C8FB40  (empty)
    // +0x18  00C88BD0  inherited cAction<cActFlagOnDlc2>::vf18
    // +0x1C  00C8FB50  inherited cAction<cActFlagOnDlc2>::vf1C
    // +0x20  00C8FB60  inherited cAction<cActFlagOnDlc2>::vf20
};

} // namespace Trigger
