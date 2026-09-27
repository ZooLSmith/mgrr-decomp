// REFINED
// ScrManager -- abstract interface of the stage-model ("scr") manager (vftable 0x016A3304);
// implemented by ScrManagerImplement, which keeps 8 scr slots.  Parameter lists were taken from
// the implementation (stack cleanup of each override).
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct ScrManager {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual void vf00() = 0;  // 00FDB68B slot 0x0   (Implement: per-frame update of the timer)
    virtual undefined4 vf04() = 0;  // 00FDB68B slot 0x4
    virtual void vf08() = 0;  // 00FDB68B slot 0x8   (Implement: starts the timer)
    virtual void vf0C(int scrId) = 0;  // 00FDB68B slot 0xC   (Implement: releases the slots of scrId)
    virtual void vf10(undefined4 * request) = 0;  // 00FDB68B slot 0x10  (Implement: loads into a free slot)
    virtual void vf14(undefined4 param_2, undefined4 param_3, int scrId) = 0;  // 00FDB68B slot 0x14
    virtual int vf18(int index, int scrId) = 0;  // 00FDB68B slot 0x18  (Implement: entity by index)
    virtual int vf1C(undefined4 nameHash, int scrId) = 0;  // 00FDB68B slot 0x1C  (Implement: entity by name hash)
    virtual int vf20(undefined4 param_2, int scrId) = 0;  // 00FDB68B slot 0x20
    virtual int vf24() = 0;  // 00FDB68B slot 0x24  (Implement: total entity count)
    virtual int * vf28(int * outInfo, int scrId) = 0;  // 00FDB68B slot 0x28
    virtual int vf2C(undefined4 param_2) = 0;  // 00FDB68B slot 0x2C
    virtual undefined4 vf30(undefined4 param_2, int scrId) = 0;  // 00FDB68B slot 0x30
    virtual int vf34(undefined4 param_2) = 0;  // 00FDB68B slot 0x34
    virtual undefined4 vf38(int index) = 0;  // 00FDB68B slot 0x38
    virtual void vf3C(int scrId) = 0;  // 00FDB68B slot 0x3C
    virtual void vf40(undefined4 param_2, undefined4 param_3, int scrId) = 0;  // 00FDB68B slot 0x40
    virtual void vf44(undefined4 param_2, undefined4 param_3) = 0;  // 00FDB68B slot 0x44
    virtual void vf48(undefined4 param_2) = 0;  // 00FDB68B slot 0x48
    virtual undefined4 vf4C(undefined4 param_2, int scrId) = 0;  // 00FDB68B slot 0x4C
    virtual undefined4 vf50(undefined4 param_2) = 0;  // 00FDB68B slot 0x50
    virtual void vf54(undefined4 param_2, undefined4 param_3) = 0;  // 00FDB68B slot 0x54
    virtual void vf58(int scrId, undefined4 param_3) = 0;  // 00FDB68B slot 0x58
    virtual void vf5C(undefined4 param_2, undefined4 param_3) = 0;  // 00FDB68B slot 0x5C
    virtual void vf60(int scrId, undefined4 param_3, undefined4 param_4) = 0;  // 00FDB68B slot 0x60
    virtual void vf64(int scrId, undefined4 param_3, undefined4 param_4) = 0;  // 00FDB68B slot 0x64
    virtual void vf68(undefined4 param_2) = 0;  // 00FDB68B slot 0x68
    virtual void vf6C(undefined4 param_2, undefined4 param_3) = 0;  // 00FDB68B slot 0x6C
    virtual void vf70() = 0;  // 00FDB68B slot 0x70
    virtual undefined4 * vf74(byte flags);  // 00C14270 slot 0x74  scalar deleting destructor
};
