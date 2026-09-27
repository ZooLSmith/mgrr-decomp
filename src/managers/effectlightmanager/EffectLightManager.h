// REFINED
// EffectLightManager -- no RTTI; reconstructed from setEffectLight. A work array of up to 128
// effect lights (0x60 bytes each) filled concurrently (InterlockedIncrement on the count).
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct EffectLightManager {
    enum { kMaxLights = 0x80, kLightSize = 0x60 };

    undefined4 setEffectLight(void *light);  // 00EC7070  copies a 0x60-byte light into the work
    undefined4 setEffectLight_2();           // 00EC70E0  reserves a light and resets it (FUN_00ec6fa0)

    char *light(int i)        { return (char *)this + i * kLightSize; }   // +0x0    light[128]; +0x2C = type
    long &lightCount()        { return *(long *)((char *)this + 0x3000); } // +0x3000
};
