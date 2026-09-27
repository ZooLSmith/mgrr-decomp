// src/effect/cEsp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F20660..00F40680, 2 functions

#include "types.h"

// 00F20660  cEsp::FixTexture  size=312  [class]
undefined4
cEsp::FixTexture(int *param_1,uint *param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  int iVar1;
  
  if (1000 < param_3) {
    FUN_00dd5650(&DAT_016da000,&DAT_016d9fd8);
  }
  if (((0xfb < (int)param_3) && ((int)param_3 < 0x120)) &&
     (iVar1 = DAT_01eddb74 + (param_3 - 0xfc) * 0x1c, iVar1 != 0)) {
    *param_1 = iVar1;
    *param_2 = 0;
    return 1;
  }
  if ((param_5 == 0) && (((int)param_3 < 0xfc || (0x11f < (int)param_3)))) {
    iVar1 = Hw::cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>::
            cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>_3();
    if (param_3 - 0xf000 < 0x20) {
      param_5 = *(int *)(iVar1 + -0x3b038 + param_3 * 4);
    }
    else {
      if (1000 < (int)param_3) goto LAB_00f20753;
      param_5 = *(int *)(iVar1 + 0x28 + param_3 * 4);
    }
    if (param_5 == 0) {
LAB_00f20753:
      if (param_6 != 0) {
        FUN_00dd5650(&DAT_016da040,param_3,param_4);
      }
      *param_1 = 0;
      *param_2 = 0;
      return 0;
    }
  }
  if (*(uint *)(param_5 + 0x14) <= param_4) {
    if (param_6 != 0) {
      FUN_00dd5650(&DAT_016da0c8,param_3,param_4);
    }
    *param_1 = 0;
    *param_2 = 0;
    return 0;
  }
  *param_1 = param_5 + 8;
  *param_2 = param_4;
  return 1;
}

// 00F40680  cEsp::vf00  size=72  [class]
undefined4 * __thiscall cEsp::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspBase::vftable;
  FUN_00eaa2b0(param_1);
  if (param_1[4] != 0) {
    FUN_00f123b0(param_1);
  }
  FUN_00ddbbc0();
  FUN_00ec4840();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

