// REFINED
// cObjReadManager -- no RTTI; reconstructed from its two named methods. Tracks one synchronous
// object-file load ("hook"): getDataAtSet arms it, updateHookLoading polls it every frame until
// the files are resident or 300 frames have passed. The instance lives at 0x01B7B364.
#pragma once
#include "ghidra_types.h"
#include "auto/fwd.h"

struct cObjReadManager {
    // non-virtual members
    // 00A01170: nonzero when the files of object `id` are resident (loads them if needed).
    undefined4 getDataAtSet(unsigned int *out, unsigned int id, unsigned int param);
    // 00A04670: `this` in ECX, no stack arguments (Ghidra: __fastcall with param_1 = this).
    void updateHookLoading();

    // fields
    unsigned int &hookId()         { return *(unsigned int *)((char *)this + 0x0); }  // +0x0  0xFFFFFFFF = idle
    unsigned int &hookParam()      { return *(unsigned int *)((char *)this + 0x4); }  // +0x4
    unsigned int &hookWaitFrames() { return *(unsigned int *)((char *)this + 0x8); }  // +0x8  timeout after 300
};
