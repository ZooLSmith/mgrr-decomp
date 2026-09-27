// REFINED
// SituationManager -- interface of the situation (AI sense) manager (vftable 0x016A3780).  The
// only implementation is SituationManagerImplement (SituationManagerImplement.h): vf04 / vf08
// queue a situation Unit, vf00 (the per-frame update) resolves the queued units and runs the
// enemies' "dashSense" / "touchSense" checks against the player.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct SituationManager {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual void vf00() = 0;  // 00FDB68B slot 0x0  (per-frame update)
    // vf04: queue a Unit of `kind` whose id comes from the entity `source` (0: none).  ret 0xC
    virtual int vf04(int kind, int source, const float *vector) = 0;  // 00FDB68B slot 0x4
    // vf08: queue a Unit of `kind` with the given id.  ret 0xC
    virtual int vf08(int kind, int id, const float *vector) = 0;  // 00FDB68B slot 0x8
    virtual undefined4 * vf0C(byte flags);  // 00C1A600 slot 0xC  (scalar deleting destructor)

    // non-virtual members
    // 00C60B10 (Ghidra: SituationManager::SituationManager) -- the destructor of
    // SituationManagerImplement with the SituationManager destructor inlined.
    void implementDestructor();  // 00C60B10
};
