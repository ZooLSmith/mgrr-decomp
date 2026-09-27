// REFINED
// BattleRegionManager -- abstract interface of the battle region manager (the "_BA%03d" /
// "_ba%03d" region pairs); implemented by BattleRegionManagerImplement.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct BattleRegionManager {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual void vf00(float param_2) = 0;  // 00FDB68B slot 0x0  (Implement: per-frame update, argument = elapsed time)
    virtual void vf04(int param_2) = 0;  // 00FDB68B slot 0x4  (Implement: enables a region)
    virtual void vf08(int param_2) = 0;  // 00FDB68B slot 0x8  (Implement: starts disabling a region)
    virtual bool vf0C(undefined4 param_1) = 0;  // 00FDB68B slot 0xC  (Implement: region enabled?)
    virtual void vf10() = 0;  // 00FDB68B slot 0x10
    virtual undefined4 * vf14(byte flags);  // 00401010 slot 0x14  scalar deleting destructor
};
