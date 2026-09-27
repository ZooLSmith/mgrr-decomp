// REFINED
// DebrisExplodeParameterManager -- interface of the "debrisExplodeParameter.bxm" cache. The only
// implementation is DebrisExplodeParameterManagerImplement; the instance pointer is DAT_01b36a50.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct DebrisExplodeParameterManager {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual void vf00() = 0;                          // slot 0x0  removes released parameters
    virtual int vf04(int id, undefined4 param) = 0;   // slot 0x4  loads / references parameter `id`
    virtual void vf08(int id) = 0;                    // slot 0x8  releases parameter `id`
    virtual void vf0C(undefined4 param);              // 0093DEE0 slot 0xC  forwards to the instance
    virtual undefined4 vf10(int id);                  // 0093DEF0 slot 0x10 forwards to the instance
    virtual undefined4 vf14(int id);                  // 0093DF00 slot 0x14 forwards to the instance
    virtual int vf18(int id);                         // 0093DF10 slot 0x18 forwards to the instance
    virtual undefined4 * vf1C(byte flags);            // 0093D990 slot 0x1C scalar deleting destructor
    // non-virtual members
    void destroyAsImplement();                        // 00943EC0 (was the "constructor"): = ~DebrisExplodeParameterManagerImplement
};
