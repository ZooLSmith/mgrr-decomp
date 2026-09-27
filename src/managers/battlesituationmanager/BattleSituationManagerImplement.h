// REFINED
// BattleSituationManagerImplement -- loads "situation.bxm" (root / "situation") into a
// BattleSituationResource and answers per-unit situation queries (vf00 -> FUN_00d73290).
// The single instance is created by FUN_00d76d10 and stored at 0x01DC5264.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"
#include "BattleSituationManager.h"

struct BattleSituationManagerImplement : public BattleSituationManager {
    // BattleSituationResource (8 bytes, allocated from the heap).  `units` is a
    // lib::AllocatedArray<BattleSituationResource::Unit> (0x1A8-byte units); its vftable slot 0x0 is
    // the scalar deleting destructor.
    struct Resource {
        void *heap;             // +0x0
        int  *units;            // +0x4
    };

    // virtual functions, in vftable order (slot = byte offset / 4)
    // Looks up unit `unitId` and returns the values of `situation` (0..8) for the current mode
    // (FUN_009c4bf0); 0 when no resource is loaded.
    virtual undefined4 vf00(float *outValue0, float *outValue1, float *outValue2, int *outKind,
                            int unitId, unsigned int situation);  // 00D76BE0 slot 0x0  overrides BattleSituationManager
    virtual void vf04();  // 00D76B90 slot 0x4  overrides BattleSituationManager (empty)
    virtual void vf08();  // 00D76BA0 slot 0x8  overrides BattleSituationManager (empty)
    virtual undefined4 * vf0C(byte flags);  // 00D76C70 slot 0xC  overrides BattleSituationManager (scalar deleting dtor)
    // non-virtual members
    BattleSituationManagerImplement(void *heap);  // 00D76A90

    // fields (absolute offsets from object start)
    void     *&heap()      { return *(void **)((char *)this + 0x4); }      // +0x04
    Resource *&resource()  { return *(Resource **)((char *)this + 0x8); }  // +0x08
};
