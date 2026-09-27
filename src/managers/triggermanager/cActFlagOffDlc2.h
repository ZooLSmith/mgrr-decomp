// REFINED
// Trigger::cActFlagOffDlc2 -- trigger action (vftable 0x016B0A8C).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActFlagOffDlc2>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActFlagOffDlc2.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActFlagOffDlc2 : public cAction<cActFlagOffDlc2> {
public:
    // vftable (0x016B0A8C), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C8FBA0  address of this action type's static descriptor
    virtual cActFlagOffDlc2 *vf04(unsigned char flags); // +0x04  00C94CB0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8FBB0  (empty)
    virtual void vf0C();                         // +0x0C  00C8FBC0  (empty)
    virtual void vf10();                         // +0x10  00C8FBD0  (empty)
    virtual void vf14();                         // +0x14  00C8FBE0  (empty)
    // +0x18  00C88C50  inherited cAction<cActFlagOffDlc2>::vf18
    // +0x1C  00C8FBF0  inherited cAction<cActFlagOffDlc2>::vf1C
    // +0x20  00C8FC00  inherited cAction<cActFlagOffDlc2>::vf20
};

} // namespace Trigger
