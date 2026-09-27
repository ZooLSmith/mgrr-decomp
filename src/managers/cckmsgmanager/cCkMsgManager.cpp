// src/managers/cckmsgmanager/cCkMsgManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCkMsgManager.h"

namespace cCkMsgManager_p1 {

// Releases the storage of a dynamic array (inlined lib array destructor).
inline void releaseArray(cCkMsgManager::DynArray &array)
{
    if (array.data != 0) {
        array.count = 0;
        if (array.ownsMemory != 0) {
            FUN_00dd48d0(array.data, 0);
            array.ownsMemory = 0;
        }
        array.data = 0;
        array.capacity = 0;
    }
}

}  // namespace cCkMsgManager_p1

// 00CF8220  cCkMsgManager::cCkMsgManager  size=185  [class]
cCkMsgManager::cCkMsgManager()
{
    // vftable = cCkMsgManager::vftable (0x016B922C)
    field04() = 0;
    field10() = 0;
    id8C() = -1;
    id90() = -1;
    array94().unk00 = 0;
    array94().data = 0;
    array94().capacity = 0;
    array94().count = 0;
    array94().ownsMemory = 0;
    idA8() = -1;
    arrayAC().unk00 = 0;
    arrayAC().data = 0;
    arrayAC().capacity = 0;
    arrayAC().count = 0;
    arrayAC().ownsMemory = 0;
    for (int channel = 0; channel != 2; channel = channel + 1) {
        channelField08()[channel] = 0;
        ChannelState &state = channelStates()[channel];
        state.values[0] = 0;
        state.values[1] = 0;
        state.values[2] = 0;
        state.values[3] = 0;
        state.values[4] = 0;
        state.flag = 1;
        ChannelWork &work = channelWorks()[channel];
        work.values[0] = 0;
        work.values[1] = 0;
        work.values[2] = 0;
        work.values[3] = 0;
        work.values[4] = 0;
        work.values[5] = 0;
        work.values[6] = 0;
        channelIds()[channel] = -1;
        channelFlags()[channel] = 1;
    }
}

// 00CF82E0  cCkMsgManager::~cCkMsgManager  size=119  [class]
cCkMsgManager::~cCkMsgManager()
{
    using namespace cCkMsgManager_p1;
    // vftable = cCkMsgManager::vftable (0x016B922C)
    releaseArray(arrayAC());
    releaseArray(array94());
}

// 00D0DDB0  cCkMsgManager::vf00  size=30  [class]
// Scalar deleting destructor.
undefined4 cCkMsgManager::vf00(byte flags)
{
    this->~cCkMsgManager();
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4)this;
}
