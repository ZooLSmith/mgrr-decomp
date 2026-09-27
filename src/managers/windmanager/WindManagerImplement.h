// REFINED
// WindManagerImplement -- keeps the registered winds in a lib array (this+4: vftable, data, count;
// slot 0x0 = scalar deleting dtor, slot 0x8 = push_back(&item)).
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"
#include "WindManager.h"

struct WindManagerImplement : public WindManager {
    // lib array of Wind * as seen from here
    struct WindArray {
        void  *vftable;   // +0x0
        Wind **data;      // +0x4
        int    count;     // +0x8
    };

    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 * vf00(byte flags);  // 008E07A0 slot 0x0  overrides WindManager (scalar deleting dtor)
    virtual Wind * vf04(int id, float *vector, float resistanceFactor, float obbFactor);  // 008E02F0 slot 0x4  overrides WindManager
    virtual Wind * vf08(int id);  // 008DFFD0 slot 0x8  overrides WindManager
    virtual void vf0C(Wind *wind, void **body);  // 008E0210 slot 0xC  overrides WindManager
    virtual void vf10(int id, void **body);  // 008DFE40 slot 0x10  overrides WindManager
    virtual void vf14(int id);  // 008E03C0 slot 0x14  overrides WindManager
    virtual void vf18(int unused);  // 008DFE90 slot 0x18  overrides WindManager (empty)

    // fields (absolute offsets from object start)
    WindArray *&winds() { return *(WindArray **)((char *)this + 0x4); }  // +0x04
};
