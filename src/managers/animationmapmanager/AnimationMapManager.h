// REFINED
// AnimationMapManager -- abstract interface of the reference-counted animation map table
// (implementation: AnimationMapManagerImplement).
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct AnimationMapManager {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual void vf00() = 0;  // 00FDB68B slot 0x0  (Implement: frees the released entries)
    virtual int addReference(int param_2, undefined4 param_3) = 0;  // 00FDB68B slot 0x4
    virtual void vf08(int param_2) = 0;  // 00FDB68B slot 0x8  (Implement: releases one reference by id)
    virtual undefined4 * vf0C(byte flags);  // 008D73D0 slot 0xC  scalar deleting destructor
    // non-virtual members
    // 008D9E00 (FILEMAP: AnimationMapManager::AnimationMapManager): the body of
    // ~AnimationMapManagerImplement (same code as AnimationMapManagerImplement::vf0C without the delete).
    void implementDestructor();
};
