// REFINED
// cPlayerInfoManager -- only its scalar deleting destructor lives in its file; its destructor
// body is that of its Hw::cHwLFFreeListTemp<cPlayerInfoManager::_QTECallAlarmWork> part.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct cPlayerInfoManager {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 vf00(byte flags);  // 00988CF0 slot 0x0 (scalar deleting destructor)
};
