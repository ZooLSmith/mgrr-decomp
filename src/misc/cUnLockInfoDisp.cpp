// src/misc/cUnLockInfoDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC1040..00CD9650, 4 functions

#include "types.h"

// 00CC1040  cUnLockInfoDisp::cUnLockInfoDisp  size=316  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cUnLockInfoDisp::cUnLockInfoDisp(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[2] = 0xffffffff;
  param_1[1] = 0;
  if (DAT_01dbf7e8 == 0) {
    _DAT_01dbf878 = 0xffffffff;
    _DAT_01dbf854 = 0;
    DAT_01dbf830 = 0;
    DAT_01dbf80c = 0;
  }
  if (DAT_01dbf7ec == 0) {
    DAT_01dbf87c = 0xffffffff;
    DAT_01dbf858 = 0;
    DAT_01dbf834 = 0;
    DAT_01dbf810 = 0;
  }
  if (DAT_01dbf7f0 == 0) {
    _DAT_01dbf880 = 0xffffffff;
    _DAT_01dbf85c = 0;
    DAT_01dbf838 = 0;
    _DAT_01dbf814 = 0;
  }
  if (DAT_01dbf7f4 == 0) {
    _DAT_01dbf884 = 0xffffffff;
    _DAT_01dbf860 = 0;
    DAT_01dbf83c = 0;
    _DAT_01dbf818 = 0;
  }
  if (DAT_01dbf7f8 == 0) {
    _DAT_01dbf888 = 0xffffffff;
    _DAT_01dbf864 = 0;
    DAT_01dbf840 = 0;
    _DAT_01dbf81c = 0;
  }
  if (DAT_01dbf7fc == 0) {
    _DAT_01dbf88c = 0xffffffff;
    _DAT_01dbf868 = 0;
    DAT_01dbf844 = 0;
    _DAT_01dbf820 = 0;
  }
  if (DAT_01dbf800 == 0) {
    _DAT_01dbf890 = 0xffffffff;
    _DAT_01dbf86c = 0;
    DAT_01dbf848 = 0;
    _DAT_01dbf824 = 0;
  }
  if (DAT_01dbf804 == 0) {
    _DAT_01dbf894 = 0xffffffff;
    _DAT_01dbf870 = 0;
    DAT_01dbf84c = 0;
    _DAT_01dbf828 = 0;
  }
  DAT_01dc1368 = 0;
  if (DAT_01dbf808 == 0) {
    _DAT_01dbf898 = 0xffffffff;
    _DAT_01dbf874 = 0;
    DAT_01dbf850 = 0;
    _DAT_01dbf82c = 0;
  }
  return;
}

// 00CC1180  cUnLockInfoDisp::cUnLockInfoDisp_2  size=33  [class]
void __fastcall cUnLockInfoDisp::cUnLockInfoDisp_2(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  return;
}

// 00CC11B0  FUN_00cc11b0  size=29  [callgraph]
undefined4 FUN_00cc11b0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0xc,&DAT_01b7be50);
  if (iVar1 != 0) {
    uVar2 = cUnLockInfoDisp::cUnLockInfoDisp();
    return uVar2;
  }
  return 0;
}

// 00CD9650  cUnLockInfoDisp::vf00  size=53  [class]
undefined4 * __thiscall cUnLockInfoDisp::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

