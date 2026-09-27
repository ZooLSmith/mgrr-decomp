// REFINED
// HavokRayCastManager -- no RTTI; reconstructed from set(). The object is the RayCastManager it
// forwards to (ECX of RayCastManager::set); the work pools start at +0x8.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct HavokRayCastManager {
    // Ray-cast request passed to set() (layout from the argument list of RayCastWork::set).
    struct Request {
        int      **handle;     // +0x00 *handle = registered work (0 = none yet)
        undefined4 param04;    // +0x04
        undefined4 pad08[2];   // +0x08
        undefined4 from[4];    // +0x10
        undefined4 to[4];      // +0x20
        undefined4 param30;    // +0x30
        undefined4 param34;    // +0x34
        undefined4 param38;    // +0x38
        undefined4 param3C;    // +0x3C
        char      *name;       // +0x40 used in the "not found work" message
        undefined4 param44;    // +0x44
        int        multiHit;   // +0x48 0 = single-hit work, else multi-hit work
    };

    void set(Request *request);  // 0090F3B0

    void *workPool()  { return (char *)this + 0x8; }  // +0x8 ECX of the Ray*HitWork allocators
};
