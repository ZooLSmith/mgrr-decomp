// REFINED
// WindManager -- abstract interface of the Havok wind sources (hkpPrevailingWind-like objects added
// to the world as post-simulation listeners) and the wind actions applied to rigid bodies;
// implemented by WindManagerImplement.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct WindManager {
    // One registered wind (0x10 bytes, heap 0x01B35D94).
    struct Wind {
        int    id;                  // +0x0
        void  *wind;                // +0x4  Havok wind object (0x40 bytes); +0x8 is its world listener
        float  resistanceFactor;    // +0x8  (scaled per body in vf0C)
        float  obbFactor;           // +0xC
    };

    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 * vf00(byte flags);  // 008DFDF0 slot 0x0  scalar deleting destructor
    // Creates a wind from `vector` (4 floats) and registers it under `id` (ret 0x10).
    virtual Wind * vf04(int id, float *vector, float resistanceFactor, float obbFactor) = 0;  // 00FDB68B slot 0x4
    // Finds the wind registered under `id` (0 if none).
    virtual Wind * vf08(int id) = 0;  // 00FDB68B slot 0x8
    // Adds a wind action for `wind` on the body `*body` (ret 8).
    virtual void vf0C(Wind *wind, void **body) = 0;  // 00FDB68B slot 0xC
    // vf0C(vf08(id), body) when the wind exists (ret 8).
    virtual void vf10(int id, void **body) = 0;  // 00FDB68B slot 0x10
    // Removes the wind registered under `id`.
    virtual void vf14(int id) = 0;  // 00FDB68B slot 0x14
    virtual void vf18(int unused) = 0;  // 00FDB68B slot 0x18  (ret 4)
    // non-virtual members
    // 008E0740 (FILEMAP: WindManager::WindManager): the body of ~WindManagerImplement
    // (WindManagerImplement::vf00 without the delete).
    void implementDestructor();
};
