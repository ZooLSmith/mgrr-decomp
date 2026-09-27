// REFINED
// Trigger::cActItemDelInstallation -- trigger action (vftable 0x016B06F4).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActItemDelInstallation>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActItemDelInstallation.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActItemDelInstallation : public cAction<cActItemDelInstallation> {
public:
    // vftable (0x016B06F4), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C94710  address of this action type's static descriptor
    virtual cActItemDelInstallation *vf04(unsigned char flags); // +0x04  00C94720  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8ED50  (empty)
    virtual void vf0C();                         // +0x0C  00C8ED60  (empty)
    virtual void vf10();                         // +0x10  00C8ED70  (empty)
    virtual void vf14();                         // +0x14  00C8ED80  (empty)
    // +0x18  00C814A0  inherited cAction<cActItemDelInstallation>::vf18
    // +0x1C  00C8ED90  inherited cAction<cActItemDelInstallation>::vf1C
    // +0x20  00C8EDA0  inherited cAction<cActItemDelInstallation>::vf20
};

} // namespace Trigger
