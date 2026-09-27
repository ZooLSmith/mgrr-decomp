// REFINED
// Trigger::cActReqVrStart -- trigger action (vftable 0x016B07E4).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActReqVrStart>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActReqVrStart.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActReqVrStart : public cAction<cActReqVrStart> {
public:
    // vftable (0x016B07E4), in slot order (slot = byte offset)
    virtual void *vf00();                               // +0x00  00C94880  address of this action type's static descriptor
    virtual cActReqVrStart *vf04(unsigned char flags);  // +0x04  00C94890  scalar deleting destructor
    virtual void vf08();                                // +0x08  00C8F110  (empty)
    virtual void vf0C();                                // +0x0C  00C8F120  (empty)
    virtual void vf10();                                // +0x10  00C8F130  (empty)
    virtual void vf14();                                // +0x14  00C8F140  (empty)
    // +0x18  00C81620  inherited vf18
    // +0x1C  00C8F150  inherited cAction<cActReqVrStart>::vf1C
    // +0x20  00C8F160  inherited cAction<cActReqVrStart>::vf20
};

} // namespace Trigger
