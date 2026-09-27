// REFINED
// Trigger::cActFlagOffDlc3 -- trigger action (vftable 0x016B0ADC).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActFlagOffDlc3>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActFlagOffDlc3.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActFlagOffDlc3 : public cAction<cActFlagOffDlc3> {
public:
    // vftable (0x016B0ADC), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C8FCE0  address of this action type's static descriptor
    virtual cActFlagOffDlc3 *vf04(unsigned char flags); // +0x04  00C94D10  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8FCF0  (empty)
    virtual void vf0C();                         // +0x0C  00C8FD00  (empty)
    virtual void vf10();                         // +0x10  00C8FD10  (empty)
    virtual void vf14();                         // +0x14  00C8FD20  (empty)
    // +0x18  00C88D50  inherited cAction<cActFlagOffDlc3>::vf18
    // +0x1C  00C8FD30  inherited cAction<cActFlagOffDlc3>::vf1C
    // +0x20  00C8FD40  inherited cAction<cActFlagOffDlc3>::vf20
};

} // namespace Trigger
