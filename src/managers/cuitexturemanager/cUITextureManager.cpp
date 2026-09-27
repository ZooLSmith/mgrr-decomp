// src/managers/cuitexturemanager/cUITextureManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D0D2D0..015F04F0, 3 functions

#include "mgrr.h"
#include "cUITextureManager.h"

// 00D0D2D0  cUITextureManager::cUITextureManager  size=74  [class]
void __fastcall cUITextureManager::cUITextureManager(undefined4 *param_1)

{
  *param_1 = vftable;
  if (param_1[3] != 0) {
    if (param_1[3] != 0) {
      FUN_00dd48d0(param_1[3],0);
      param_1[3] = 0;
    }
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = param_1[2];
    param_1[7] = param_1[2];
    param_1[8] = param_1[2];
  }
  return;
}

// 00D0D320  cUITextureManager::vf00  size=94  [class]
undefined4 * __thiscall cUITextureManager::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (param_1[3] != 0) {
    if (param_1[3] != 0) {
      FUN_00dd48d0(param_1[3],0);
      param_1[3] = 0;
    }
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = param_1[2];
    param_1[7] = param_1[2];
    param_1[8] = param_1[2];
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 015F04F0  cUITextureManager::cUITextureManager_2  size=81  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cUITextureManager::cUITextureManager_2(void)

{
  PTR_vftable_018b571c = (undefined *)vftable;
  if (DAT_018b5728 != 0) {
    FUN_00dd48d0(DAT_018b5728,0);
    DAT_018b5728 = 0;
    _DAT_018b572c = 0;
    _DAT_018b5730 = 0;
    _DAT_018b5734 = DAT_018b5724;
    _DAT_018b5738 = DAT_018b5724;
    _DAT_018b573c = DAT_018b5724;
  }
  return;
}

