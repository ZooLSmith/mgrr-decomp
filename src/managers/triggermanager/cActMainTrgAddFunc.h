// REFINED
// Trigger::cActMainTrgAddFunc -- trigger action (vftable 0x016B0BCC).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActMainTrgAddFunc>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActMainTrgAddFunc.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActMainTrgAddFunc : public cAction<cActMainTrgAddFunc> {
public:
    // vftable (0x016B0BCC), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C94E80  address of this action type's static descriptor
    virtual cActMainTrgAddFunc *vf04(unsigned char flags); // +0x04  00C94E90  scalar deleting destructor
    // +0x08  00C901F0  inherited cAction<cActMainTrgAddFunc>::vf08
    // +0x0C  00C90200  inherited cAction<cActMainTrgAddFunc>::vf0C
    // +0x10  00C90210  inherited cAction<cActMainTrgAddFunc>::vf10
    // +0x14  00C90220  inherited cAction<cActMainTrgAddFunc>::vf14
    // +0x18  00C819A0  inherited cAction<cActMainTrgAddFunc>::vf18
    // +0x1C  00C90230  inherited cAction<cActMainTrgAddFunc>::vf1C
    // +0x20  00C90240  inherited cAction<cActMainTrgAddFunc>::vf20
};

} // namespace Trigger
