// src/managers/clightmanager/cLightManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cLightManager.h"

extern undefined *PTR_s_cLightManager_0189f680;  // class-name record ("cLightManager")

// 00A40BC0  cLightManager::vf00  size=6  [class]
undefined **cLightManager::vf00()
{
    return &PTR_s_cLightManager_0189f680;
}

// 00A40BD0  cLightManager::vf04  size=30  [class]
undefined4 *cLightManager::vf04(byte flags)
{
    ctor_00A36330();  // cObject::cObject_3 (cObject destructor body)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}
