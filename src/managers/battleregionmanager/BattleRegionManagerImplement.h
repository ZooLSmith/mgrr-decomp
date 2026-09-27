// REFINED
// BattleRegionManagerImplement -- enables / disables battle regions.  A region number N maps to
// the two named regions "_BA%03d" and "_ba%03d" of the region object returned by FUN_00c14bb0,
// and to the effects N*5+0x5F (enabled) / N*5+0x60 (disabling).  Regions being disabled are kept
// in a Unit list with a countdown; vf00 disables them when it expires.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"
#include "BattleRegionManager.h"
#include "cEspControler.h"

struct BattleRegionManagerImplement : public BattleRegionManager {
    // Element of lib::Array<BattleRegionManagerImplement::Unit> (8 bytes).
    struct Unit {
        int   regionNo;         // +0x0
        float timer;            // +0x4  seconds left before the region is disabled
    };
    // lib::Array<Unit> header; vftable slot 0x0 = scalar deleting destructor, slot 0x8 = push_back(const Unit *).
    struct UnitArray {
        void         *vftable;  // +0x0
        Unit         *data;     // +0x4
        unsigned int  count;    // +0x8
    };

    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual void vf00(float elapsed);  // 00401980 slot 0x0  overrides BattleRegionManager (counts down, disables expired regions)
    virtual void vf04(int regionNo);  // 00401DE0 slot 0x4  overrides BattleRegionManager (enables a region)
    virtual void vf08(int regionNo);  // 00401EB0 slot 0x8  overrides BattleRegionManager (starts disabling a region)
    virtual bool vf0C(undefined4 regionNo);  // 00401470 slot 0xC  overrides BattleRegionManager (region enabled?)
    virtual void vf10();  // 00401100 slot 0x10  overrides BattleRegionManager (empty)
    virtual undefined4 * vf14(byte flags);  // 004024C0 slot 0x14  overrides BattleRegionManager (scalar deleting dtor)
    // non-virtual members
    ~BattleRegionManagerImplement();  // 004024A0

    // fields (absolute offsets from object start)
    UnitArray     *&units()        { return *(UnitArray **)((char *)this + 0x4); }  // +0x04
    cEspControler *espControler()  { return (cEspControler *)((char *)this + 0x10); } // +0x10 embedded
};
