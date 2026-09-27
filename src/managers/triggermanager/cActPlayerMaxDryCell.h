// REFINED
// Trigger::cActPlayerMaxDryCell -- trigger action (vftable 0x016B0834).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActPlayerMaxDryCell>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActPlayerMaxDryCell.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActPlayerMaxDryCell : public cAction<cActPlayerMaxDryCell> {
public:
    // vftable (0x016B0834), in slot order (slot = byte offset)
    virtual void *vf00();                                     // +0x00  00C94900  address of this action type's static descriptor
    virtual cActPlayerMaxDryCell *vf04(unsigned char flags);  // +0x04  00C94910  scalar deleting destructor
    virtual void vf08();                                      // +0x08  00C8F250  (empty)
    virtual void vf0C();                                      // +0x0C  00C8F260  (empty)
    virtual void vf10();                                      // +0x10  00C8F270  (empty)
    virtual void vf14();                                      // +0x14  00C8F280  (empty)
    // +0x18  00C886D0  inherited vf18
    // +0x1C  00C8F290  inherited cAction<cActPlayerMaxDryCell>::vf1C
    // +0x20  00C8F2A0  inherited cAction<cActPlayerMaxDryCell>::vf20
};

} // namespace Trigger
