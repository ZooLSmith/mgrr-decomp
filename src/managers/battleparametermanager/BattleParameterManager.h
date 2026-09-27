// REFINED
// BattleParameterManager -- abstract interface of the reference-counted battle parameter table
// (implementation: BattleParameterManagerImplement).
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct BattleParameterManager {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual void vf00() = 0;  // 00FDB68B slot 0x0  (Implement: frees the released entries)
    virtual undefined addReference() = 0;  // 00FDB68B slot 0x4
    virtual void vf08(int param_2) = 0;  // 00FDB68B slot 0x8  (Implement: releases one reference by id)
    virtual undefined4 * vf0C(byte flags);  // 00D72800 slot 0xC  scalar deleting destructor
    // non-virtual members
    // 00D76170 (FILEMAP: BattleParameterManager::BattleParameterManager): the body of
    // ~BattleParameterManagerImplement (same code as BattleParameterManagerImplement::vf0C without the delete).
    void implementDestructor();
};
