// REFINED
// DatsuSetTableManager -- interface of the "datsuSetTable.bxm" table cache. The only
// implementation is DatsuSetTableManagerImplement; the instance pointer is DAT_01b36a20.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct DatsuSetTableManager {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual void vf00() = 0;                          // slot 0x0  removes released tables
    virtual int vf04(int id, undefined4 param) = 0;   // slot 0x4  loads / references table `id`
    virtual void vf08(int id) = 0;                    // slot 0x8  releases table `id`
    virtual void vf0C(undefined4 param);              // 0093C000 slot 0xC  forwards to the instance
    virtual undefined4 vf10(int id);                  // 0093C010 slot 0x10 forwards to the instance
    virtual undefined4 * vf14(byte flags);            // 0093BD60 slot 0x14 scalar deleting destructor
    // non-virtual members
    void destroyAsImplement();                        // 0093D0B0 (was the "constructor"): = ~DatsuSetTableManagerImplement
};
