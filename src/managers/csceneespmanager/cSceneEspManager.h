// REFINED
// cSceneEspManager -- no RTTI; reconstructed from its one named method.
#pragma once
#include "ghidra_types.h"
#include "auto/fwd.h"

struct cSceneEspManager {
    // non-virtual members
    // 00F41080: time rate for an event effect; 1 while +0x1F8C is set.
    float getEventTimeRate(int esp);

    // fields (absolute offsets from object start)
    int &fixedTimeRate() { return *(int *)((char *)this + 0x1F8C); }  // +0x1F8C non-zero: always 1.0
};
