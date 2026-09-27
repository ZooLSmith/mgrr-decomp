// REFINED
// cGIManager -- no RTTI / generated header; reconstructed from cGIManager::setData.
// Holds 0x400 data slots of 0x21 floats (0x84 bytes each) plus a state word pair per slot.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct cGIManager {
    enum { SLOT_COUNT = 0x400, SLOT_FLOATS = 0x21 };
    enum {
        SLOT_USED     = 0x80000000,  // slot holds data
        SLOT_EXTENDED = 0x40000000   // source had type > 1 (floats 0x1F/0x20 are valid)
    };
    // Per-slot state (8 bytes).
    struct SlotState {
        uint flags;     // +0x0 SLOT_USED | SLOT_EXTENDED
        uint id;        // +0x4 id passed to setData
    };
    // Source descriptor passed to setData.
    struct SetDataSource {
        int   field00;      // +0x00
        uint  type;         // +0x04 > 1: entries are 0x21 floats, otherwise 0x1F floats
        int   field08;      // +0x08
        uint  count;        // +0x0C number of entries
        float entries[1];   // +0x10 entry array (variable length)
    };

    // non-virtual members
    // 00F956A0: stores `source->count` entries into free slots (tagged with `id`), adding `offset`
    // (3 floats, optional) to floats 1..3 of each slot.
    void setData(uint id, float *source, float *offset);

    // fields (absolute offsets from object start)
    float     *slotData()    { return (float *)this; }                                  // +0x00000 SLOT_COUNT x SLOT_FLOATS floats
    SlotState *slotStates()  { return (SlotState *)((char *)this + 0x21000); }          // +0x21000 SLOT_COUNT states
    int       &updateCount() { return *(int *)((char *)this + 0x23000); }               // +0x23000 incremented by setData
};
