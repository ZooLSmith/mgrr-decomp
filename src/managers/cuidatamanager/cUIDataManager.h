// REFINED
// cUIDataManager -- 14 embedded message controllers (cMsgCtrl, 0x74 bytes each, at +0x38) followed
// by an embedded heap object at +0x690 (released with 00DD4B00, Hw::cHeap::cHeap_4).
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct cUIDataManager {
    enum { kMsgCtrlCount = 14, kMsgCtrlSize = 0x74 };

    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 vf00(byte flags);  // 00CF72B0 slot 0x0  scalar deleting destructor
    // non-virtual members
    ~cUIDataManager();  // 00CE0310

    char *msgCtrl(int i) { return (char *)this + 0x38 + i * kMsgCtrlSize; }  // +0x38 cMsgCtrl[14]
    char *heap()         { return (char *)this + 0x690; }                     // +0x690 embedded heap
};
