// REFINED
// GameStageManagerImplement -- 8-byte object (vftable, heap) created by create(); its instance
// pointer is DAT_01b35d88. It drives the current stage object DAT_01b35d60.
#pragma once
#include "GameStageManager.h"
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct GameStageManagerImplement : public GameStageManager {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual void vf00();                    // 008DFC10 slot 0x0  jumps to vf04
    virtual void vf04();                    // 008DFC40 slot 0x4  empty
    virtual void vf08();                    // 008DFBD0 slot 0x8  FUN_008dfaf0(heap)
    virtual void vf0C();                    // 008DFBE0 slot 0xC  stage->vf04()
    virtual void vf10();                    // 008DFC00 slot 0x10 jumps to vf10_008DC7C0
    virtual undefined4 * vf14(byte flags);  // 008DFCB0 slot 0x14 scalar deleting destructor
    // non-virtual members
    static void vf10_008DC7C0();            // 008DC7C0 deletes the stage object DAT_01b35d60
    static bool create(undefined4 heap);    // 008DFD10 (was the "constructor")

    undefined4 &heap()  { return *(undefined4 *)((char *)this + 0x4); }  // +0x4
};
