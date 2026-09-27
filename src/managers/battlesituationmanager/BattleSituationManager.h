// REFINED
// BattleSituationManager -- abstract interface of the battle situation table ("situation.bxm");
// implemented by BattleSituationManagerImplement.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct BattleSituationManager {
    // virtual functions, in vftable order (slot = byte offset / 4)
    // slot 0x0: the machine code takes 6 stack arguments (ret 0x18); see BattleSituationManagerImplement::vf00
    virtual undefined4 vf00(float *outValue0, float *outValue1, float *outValue2, int *outKind,
                            int unitId, unsigned int situation) = 0;  // 00FDB68B slot 0x0
    virtual void vf04() = 0;  // 00FDB68B slot 0x4
    virtual void vf08() = 0;  // 00FDB68B slot 0x8
    virtual undefined4 * vf0C(byte flags);  // 00D72AD0 slot 0xC  scalar deleting destructor
    // non-virtual members
    // 00D76C30 (FILEMAP: BattleSituationManager::BattleSituationManager): the body of
    // ~BattleSituationManagerImplement (same code as BattleSituationManagerImplement::vf0C without the delete).
    void implementDestructor();
};
