// REFINED
// EffectAttrDataManager -- no RTTI; reconstructed from searchCallData. Three-level table of
// effect-attribute call data: attribute sets (keyed by the call's +0x2C "Call%04x" id), each with
// attribute entries (keyed by the call's +0x28 attribute) and a default "all attributes" entry,
// each entry holding sub-entries keyed by the call's +0x44.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct EffectAttrDataManager {
    // Sub-entry of an attribute entry (0x18 bytes).
    struct CallData {
        undefined4 unk00[4];  // +0x0
        int        key;       // +0x10 compared with call+0x44
        undefined4 unk14;     // +0x14
    };
    // Attribute entry (0x28 bytes).
    struct AttrEntry {
        undefined4   unk00[7];   // +0x0
        CallData    *calls;      // +0x1C
        unsigned int callCount;  // +0x20
        int          attribute;  // +0x24 compared with call+0x28
    };
    // Attribute set (0x1C bytes).
    struct AttrSet {
        AttrEntry   *entries;       // +0x0
        AttrEntry   *allAttributes; // +0x4 used when no entry matches
        unsigned int entryCount;    // +0x8
        int          callId;        // +0xC compared with call+0x2C
        undefined4   unk10;         // +0x10
        float        interval;      // +0x14 0 = no rate limit
        float        timer;         // +0x18 reset to 0 when a search passes
    };

    int searchCallData(int call);  // 009E5FD0

    AttrSet *&sets()            { return *(AttrSet **)((char *)this + 0x0); }      // +0x0
    unsigned int &setCount()    { return *(unsigned int *)((char *)this + 0x4); }  // +0x4
};
