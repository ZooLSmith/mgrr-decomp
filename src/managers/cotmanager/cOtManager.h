// REFINED
// cOtManager -- the game's ordering-table manager, derived from Hw::cOtManagerBase (no header for
// the Hw classes, so the base is not spelled out here) with an embedded Hw::cRenderTargetInfo.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct cOtManager {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 * vf00(byte flags);  // 00A21040 slot 0x0  overrides Hw::cOtManagerBase (scalar deleting destructor)
    virtual bool vf04(undefined4 param, char otKind);  // 00A21110 slot 0x4  overrides Hw::cOtManagerBase
    // non-virtual members
    cOtManager();  // 00A21000

    // fields (absolute offsets from object start)
    int &disableRange08() { return *(int *)((char *)this + 0x70); }  // +0x70  0: kinds 0x08..0x5E enabled
    int &disableRange1F() { return *(int *)((char *)this + 0x74); }  // +0x74  0: kinds 0x1F..0x36 enabled
    int &disableRange01() { return *(int *)((char *)this + 0x78); }  // +0x78  0: kinds 0x01..0x06 enabled
    int &disableKind48()  { return *(int *)((char *)this + 0x7C); }  // +0x7C  0: kind 0x48 enabled
    int &disableRange47() { return *(int *)((char *)this + 0x80); }  // +0x80  0: kinds 0x47..0x4A enabled
};
