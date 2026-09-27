// src/managers/cgameuimanager/cGameUIManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cGameUIManager.h"

namespace cGameUIManager_p1 {

typedef cGameUIManager::UiArray UiArray;

// Releases an array: clears its count, frees the buffer when owned, then clears data/field04.
inline void releaseArray(UiArray &array)
{
    if (array.data != 0) {
        array.count = 0;
        if (array.ownsData != 0) {
            FUN_00dd48d0(array.data, 0);
            array.ownsData = 0;
        }
        array.data = 0;
        array.field04 = 0;
    }
}

}  // namespace cGameUIManager_p1

// 00CF64C0  cGameUIManager::~cGameUIManager  size=117  [class]
cGameUIManager::~cGameUIManager()
{
    using namespace cGameUIManager_p1;
    // vftable = cGameUIManager::vftable
    releaseArray(array48());
    releaseArray(array34());
    releaseArray(array20());
}

// 00CF6540  cGameUIManager::vf00  size=30  [class]
// Scalar deleting destructor.
undefined4 cGameUIManager::vf00(byte flags)
{
    this->~cGameUIManager();
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4)this;
}

// 00CF6610  cGameUIManager::cGameUIManager  size=178  [class]
cGameUIManager::cGameUIManager()
{
    // vftable = cGameUIManager::vftable
    field10() = 0;
    field14() = 0;
    field18() = 0;
    field1C() = 0;
    array20().data = 0;
    array20().field04 = 0;
    array20().count = 0;
    array20().ownsData = 0;
    array20().field10 = 0;
    array34().data = 0;
    array34().field04 = 0;
    array34().count = 0;
    array34().ownsData = 0;
    array34().field10 = 0;
    array48().data = 0;
    array48().field04 = 0;
    array48().count = 0;
    array48().ownsData = 0;
    array48().field10 = 0;
    FUN_00a7c930((undefined4 *)handle5C());  // ? ECX not shown in the raw output; +0x5C is the only field not stored here
    field60() = 0;
    field98() = 0;
    fieldB0() = 0;
    fieldB4() = 0;
    field64() = 0;
    fieldB8() = 0;
    field68() = 0;
    field6C() = 0;
    scaleBC() = 1.0f;  // 0x3F800000
    field70() = 0;
    field74() = 0;
    field78() = 0;
    field7C() = 0;
    field80() = 0;
    field84() = 0;
    field88() = 0;
    field8C() = 0;
    field90() = 0;
    field94() = 0;
}
