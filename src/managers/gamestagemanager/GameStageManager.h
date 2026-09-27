// REFINED
// GameStageManager -- interface; the only implementation is GameStageManagerImplement
// (instance pointer DAT_01b35d88).
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct GameStageManager {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual void vf00() = 0;                // slot 0x0
    virtual void vf04() = 0;                // slot 0x4
    virtual void vf08() = 0;                // slot 0x8
    virtual void vf0C() = 0;                // slot 0xC
    virtual void vf10() = 0;                // slot 0x10
    virtual undefined4 * vf14(byte flags);  // 008DFB70 slot 0x14 scalar deleting destructor
};
