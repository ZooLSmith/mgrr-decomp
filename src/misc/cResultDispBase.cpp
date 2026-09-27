// src/misc/cResultDispBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D0F310..00D25BD0, 3 functions

#include "mgrr.h"
#include "cResultDispBase.h"

// 00D0F310  cResultDispBase::cResultDispBase  size=18  [class]
undefined4 * __fastcall cResultDispBase::cResultDispBase(undefined4 *param_1)

{
  cCustomObjCtrl::cCustomObjCtrl();
  *param_1 = vftable;
  return param_1;
}

// 00D0F360  cResultDispBase::vf00  size=65  [class]
undefined4 * __thiscall cResultDispBase::vf00(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0x10] + 0xc);
  *param_1 = cCustomObjWorkBase::vftable;
  (*pcVar1)();
  param_1[0x10] = cUICtrl::vftable;
  FUN_00cc7640();
  *param_1 = cUIWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D25BD0  cResultDispBase::vf14  size=218  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall cResultDispBase::vf14(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00d467a0();
  if ((iVar1 == 0) || ((_DAT_01bea098 & 0x80000000) != 0)) {
    iVar1 = FUN_00cc9000(2,0x40);
    if ((iVar1 != 0) &&
       (iVar1 = (**(code **)(*(int *)(param_1 + 0x40) + 8))(&DAT_01b7be50,iVar1,1), iVar1 != 0)) {
      *(undefined4 *)(param_1 + 8) = param_2;
      *(undefined4 *)(param_1 + 0xc) = 1;
      *(undefined4 *)(param_1 + 0x1fc) = 0;
      *(undefined4 *)(param_1 + 0x18) = 1;
      FUN_00d1e000();
    }
  }
  else {
    FUN_00d1fb20(2,0x42,param_2,0,1);
  }
  if ((*(int *)(param_1 + 0xb8) != 0) && (*(int *)(param_1 + 0xbc) != 0)) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20020000;
    iVar1 = FUN_00932720();
    if ((iVar1 == 0xa15) || (iVar1 = FUN_00932720(), iVar1 == 0x430)) {
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x40000000;
    }
    piVar2 = (int *)FUN_00c209f0();
    (**(code **)(*piVar2 + 0x18))();
    return 1;
  }
  return 0;
}

