// src/misc/cDamageDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB7530..00CD1AC0, 2 functions

#include "mgrr.h"
#include "cDamageDisp.h"

// 00CB7530  cDamageDisp::cDamageDisp  size=83  [class]
void __fastcall cDamageDisp::cDamageDisp(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  *param_1 = vftable;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[1] = 0;
  }
  if (param_1[3] != 0) {
    FUN_00e5e1b0("bgm_Redout_Exit");
    FUN_00e5e050("core_se_btl_redout_out",0);
    param_1[3] = 0;
  }
  return;
}

// 00CD1AC0  cDamageDisp::vf00  size=104  [class]
undefined4 * __thiscall cDamageDisp::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  *param_1 = vftable;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[1] = 0;
  }
  if (param_1[3] != 0) {
    FUN_00e5e1b0("bgm_Redout_Exit");
    FUN_00e5e050("core_se_btl_redout_out",0);
    param_1[3] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

