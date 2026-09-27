// src/managers/ceventinfomanager/cEventInfoManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cEventInfoManager.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
extern void *PTR_vftable_0188dd28;  // vftable pointer of the global cEventInfoManager instance (0x0188DD28)

// 00985770  cEventInfoManager::vf00  size=31  [class]
// Scalar deleting destructor.
undefined4 *cEventInfoManager::vf00(byte flags)
{
    // vftable = cEventInfoManager::vftable (0x016528A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 015ECAB0  cEventInfoManager::cEventInfoManager  size=11  [class]
void cEventInfoManager::initGlobalInstance()
{
    PTR_vftable_0188dd28 = (void *)0x016528A8;  // instance vftable = cEventInfoManager::vftable
}
