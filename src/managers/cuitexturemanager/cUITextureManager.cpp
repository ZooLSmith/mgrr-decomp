// src/managers/cuitexturemanager/cUITextureManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cUITextureManager.h"

// Global cUITextureManager instance at 0x018B571C (fields named by address).
extern undefined *PTR_vftable_018b571c;  // +0x0 vftable
extern undefined4 DAT_018b5724;          // +0x8 base
extern undefined4 DAT_018b5728;          // +0xC buffer
extern undefined4 DAT_018b572c;          // +0x10
extern undefined4 DAT_018b5730;          // +0x14
extern undefined4 DAT_018b5734;          // +0x18
extern undefined4 DAT_018b5738;          // +0x1C
extern undefined4 DAT_018b573c;          // +0x20

namespace cUITextureManager_p1 {

const unsigned int kVftable = 0x016B9EFC;  // cUITextureManager::vftable

}  // namespace cUITextureManager_p1

// 00D0D2D0  cUITextureManager::cUITextureManager  size=74  [class]
// (A destructor: frees the buffer and resets the cursors.)
cUITextureManager::~cUITextureManager()
{
    // vftable = cUITextureManager::vftable (0x016B9EFC)
    if (buffer() != 0) {
        if (buffer() != 0) {
            FUN_00dd48d0(buffer(), 0);
            buffer() = 0;
        }
        field10() = 0;
        field14() = 0;
        cursor18() = base();
        cursor1C() = base();
        cursor20() = base();
    }
}

// 00D0D320  cUITextureManager::vf00  size=94  [class]
// Scalar deleting destructor (destructor body inlined).
undefined4 *cUITextureManager::vf00(byte flags)
{
    this->~cUITextureManager();
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 015F04F0  cUITextureManager::cUITextureManager_2  size=81  [class]
// atexit destructor of the global instance at 0x018B571C (inlined destructor, inner test folded).
void cUITextureManager::destroyGlobalInstance()
{
    PTR_vftable_018b571c = (undefined *)cUITextureManager_p1::kVftable;
    if (DAT_018b5728 != 0) {
        FUN_00dd48d0(DAT_018b5728, 0);
        DAT_018b5728 = 0;
        DAT_018b572c = 0;
        DAT_018b5730 = 0;
        DAT_018b5734 = DAT_018b5724;
        DAT_018b5738 = DAT_018b5724;
        DAT_018b573c = DAT_018b5724;
    }
}
