// REFINED
// cLightManager -- cObject-derived light manager; only its two cObject virtuals live in its file.
#pragma once
#include "cObject.h"
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct cLightManager : public cObject {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined ** vf00();  // 00A40BC0 slot 0x0  overrides cObject (returns the class-name record)
    virtual undefined4 * vf04(byte flags);  // 00A40BD0 slot 0x4  overrides cObject (scalar deleting destructor)
};
