// REFINED
// Trigger::cActFlagOnDlc3 -- trigger action (vftable 0x016B0AB4).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActFlagOnDlc3>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActFlagOnDlc3.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActFlagOnDlc3 : public cAction<cActFlagOnDlc3> {
public:
    // vftable (0x016B0AB4), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C8FC40  address of this action type's static descriptor
    virtual cActFlagOnDlc3 *vf04(unsigned char flags); // +0x04  00C94CE0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8FC50  (empty)
    virtual void vf0C();                         // +0x0C  00C8FC60  (empty)
    virtual void vf10();                         // +0x10  00C8FC70  (empty)
    virtual void vf14();                         // +0x14  00C8FC80  (empty)
    // +0x18  00C88CD0  inherited cAction<cActFlagOnDlc3>::vf18
    // +0x1C  00C8FC90  inherited cAction<cActFlagOnDlc3>::vf1C
    // +0x20  00C8FCA0  inherited cAction<cActFlagOnDlc3>::vf20
};

} // namespace Trigger
