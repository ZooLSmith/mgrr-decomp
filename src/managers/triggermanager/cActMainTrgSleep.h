// REFINED
// Trigger::cActMainTrgSleep -- trigger action (vftable 0x016B0B54).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActMainTrgSleep>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActMainTrgSleep.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActMainTrgSleep : public cAction<cActMainTrgSleep> {
public:
    // vftable (0x016B0B54), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C94DC0  address of this action type's static descriptor
    virtual cActMainTrgSleep *vf04(unsigned char flags); // +0x04  00C94DD0  scalar deleting destructor
    // +0x08  00C90010  inherited cAction<cActMainTrgSleep>::vf08
    // +0x0C  00C90020  inherited cAction<cActMainTrgSleep>::vf0C
    // +0x10  00C90030  inherited cAction<cActMainTrgSleep>::vf10
    // +0x14  00C90040  inherited cAction<cActMainTrgSleep>::vf14
    // +0x18  00C81910  inherited cAction<cActMainTrgSleep>::vf18
    // +0x1C  00C90050  inherited cAction<cActMainTrgSleep>::vf1C
    // +0x20  00C90060  inherited cAction<cActMainTrgSleep>::vf20
};

} // namespace Trigger
