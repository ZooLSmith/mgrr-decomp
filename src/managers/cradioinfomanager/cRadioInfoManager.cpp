// src/managers/cradioinfomanager/cRadioInfoManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cRadioInfoManager.h"

// Data referenced by this part
extern undefined *PTR_vftable_0188dd40;  // the global cRadioInfoManager instance (its vftable slot)

namespace cRadioInfoManager_p1 {

const unsigned int kVftable = 0x016528D8;  // cRadioInfoManager::vftable

} // namespace cRadioInfoManager_p1

// 009857E0  cRadioInfoManager::vf00  size=31  [class]
undefined4 *cRadioInfoManager::vf00(byte flags)
{
    // vftable = cRadioInfoManager::vftable (0x016528D8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 015ECAC0  cRadioInfoManager::cRadioInfoManager  size=11  [class]
void cRadioInfoManager::initGlobalInstance()
{
    using namespace cRadioInfoManager_p1;
    // inlined constructor of the global instance: store its vftable
    PTR_vftable_0188dd40 = (undefined *)kVftable;
}
