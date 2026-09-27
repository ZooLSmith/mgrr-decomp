// REFINED
// OcclusionManager -- no RTTI; reconstructed from loadVCD. Holds the occlusion volumes of the
// room's "vcd" file: an array of 0x18-byte entries (new[]-style, count stored before it).
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct OcclusionManager {
    undefined4 loadVCD(undefined4 roomNo);  // 00C476E0

    char *&volumes()     { return *(char **)((char *)this + 0x8); }  // +0x8 entries of 0x18 bytes (count at [-4])
    int &volumeCount()   { return *(int *)((char *)this + 0xC); }    // +0xC
};
