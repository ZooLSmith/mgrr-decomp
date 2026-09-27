// src/managers/cuidatamanager/cUIDataManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cUIDataManager.h"

namespace cUIDataManager_p1 {

// 00DD4B00 Hw::cHeap::cHeap_4: heap destructor (ECX = the heap object).
inline void destroyHeap(char *heap)
{
    ((void (__fastcall *)(char *))0x00DD4B00)(heap);
}

// 00F972E0 Hw::cTexture::~cTexture (ECX = the texture).
inline void destroyTexture(char *texture)
{
    ((void (__fastcall *)(char *))0x00F972E0)(texture);
}

const unsigned int kMsgCtrlVftable = 0x016B7B1C;  // cMsgCtrl::vftable

}  // namespace cUIDataManager_p1

// 00CE0310  cUIDataManager::~cUIDataManager  size=84  [class]
cUIDataManager::~cUIDataManager()
{
    using namespace cUIDataManager_p1;

    // vftable = cUIDataManager::vftable (0x016B8BF8)
    destroyHeap(heap());
    // Inlined cMsgCtrl destructors, last element first.
    for (int i = kMsgCtrlCount - 1; i >= 0; i--) {
        char *ctrl = msgCtrl(i);
        *(unsigned int *)ctrl = kMsgCtrlVftable;           // vftable = cMsgCtrl::vftable
        FUN_00f972f0((int)(ctrl + 0xC));
        *(int *)(ctrl + 0x4) = 0;
        *(int *)(ctrl + 0x8) = 0;
        *(int *)(ctrl + 0x28) = 0;
        *(unsigned short *)(ctrl + 0x2D) = 0;
        destroyTexture(ctrl + 0xC);                         // embedded Hw::cTexture at +0xC
    }
}

// 00CF72B0  cUIDataManager::vf00  size=30  [class]
// Scalar deleting destructor.
undefined4 cUIDataManager::vf00(byte flags)
{
    this->~cUIDataManager();
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4)this;
}
