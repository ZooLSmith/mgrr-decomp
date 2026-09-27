// REFINED
// Trigger::cActMainTrgActive -- trigger action (vftable 0x016B0B2C).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActMainTrgActive>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActMainTrgActive.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActMainTrgActive : public cAction<cActMainTrgActive> {
public:
    // vftable (0x016B0B2C), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C94D80  address of this action type's static descriptor
    virtual cActMainTrgActive *vf04(unsigned char flags); // +0x04  00C94D90  scalar deleting destructor
    // +0x08  00C8FF70  inherited cAction<cActMainTrgActive>::vf08
    // +0x0C  00C8FF80  inherited cAction<cActMainTrgActive>::vf0C
    // +0x10  00C8FF90  inherited cAction<cActMainTrgActive>::vf10
    // +0x14  00C8FFA0  inherited cAction<cActMainTrgActive>::vf14
    // +0x18  00C818E0  inherited cAction<cActMainTrgActive>::vf18
    // +0x1C  00C8FFB0  inherited cAction<cActMainTrgActive>::vf1C
    // +0x20  00C8FFC0  inherited cAction<cActMainTrgActive>::vf20
};

} // namespace Trigger
