// REFINED
// Trigger::cActMoviePlay -- trigger action (vftable 0x016AFB4C).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActMoviePlay>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActMoviePlay.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActMoviePlay : public cAction<cActMoviePlay> {
public:
    // vftable (0x016AFB4C), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C932B0  address of this action type's static descriptor
    virtual cActMoviePlay *vf04(unsigned char flags); // +0x04  00C932C0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8C1A0  (empty)
    virtual void vf0C();                         // +0x0C  00C8C1B0  (empty)
    virtual void vf10();                         // +0x10  00C8C1C0  (empty)
    virtual void vf14();                         // +0x14  00C8C1D0  (empty)
    // +0x18  00C7FED0  inherited cAction<cActMoviePlay>::vf18
    // +0x1C  00C8C1E0  inherited cAction<cActMoviePlay>::vf1C
    // +0x20  00C8C1F0  inherited cAction<cActMoviePlay>::vf20
};

} // namespace Trigger
