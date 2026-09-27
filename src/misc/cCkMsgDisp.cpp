// src/misc/cCkMsgDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CF7FE0..00D29A10, 4 functions

#include "mgrr.h"
#include "cCkMsgDisp.h"

// 00CF7FE0  cCkMsgDisp::cCkMsgDisp  size=141  [class]
undefined4 * __fastcall cCkMsgDisp::cCkMsgDisp(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[10] = 0;
  param_1[2] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[3] = 1;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = cUIWorkBase::vftable;
  cUICtrl::cUICtrl();
  param_1[1] = 0;
  param_1[0x78] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7e] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *param_1 = vftable;
  param_1[0x7d] = 0xffffffff;
  param_1[0x7f] = 1;
  return param_1;
}

// 00D0DCF0  cCkMsgDisp::vf00  size=62  [class]
undefined4 * __thiscall cCkMsgDisp::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cUIWorkBase::vftable;
  FUN_00cc7640();
  param_1[0x10] = cUICtrl::vftable;
  FUN_00cc7640();
  *param_1 = cUIWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D0DD30  cCkMsgDisp::vf08  size=126  [class]
void __thiscall cCkMsgDisp::vf08(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[0x78] == 0) {
    FUN_00c1cf50();
    iVar1 = FUN_00c1cfd0();
    if (((iVar1 != 0) && (DAT_01dc1b74 == 5)) && (DAT_01dc3294 == 2)) {
      iVar1 = (**(code **)(*param_1 + 0x14))();
      iVar1 = (-(uint)(iVar1 != 0) & 2) - 1;
      param_1[0x78] = iVar1;
      if (iVar1 == -1) {
        FUN_00dd5650(&DAT_016ba2d4);
      }
    }
  }
  else if ((param_1[0x78] == 1) && (param_1[1] != 0)) {
    FUN_00cf80a0();
    FUN_00ce01f0(param_2);
    return;
  }
  return;
}

// 00D29A10  cCkMsgDisp::vf14  size=119  [class]
undefined4 __fastcall cCkMsgDisp::vf14(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00cc9000(1,6);
  if ((iVar1 != 0) && (iVar1 = FUN_00d1df70(&DAT_01b7be50,iVar1), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 8) = 0x18;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x18) = 1;
    FUN_00d1e000();
  }
  if ((*(int *)(param_1 + 0xb8) != 0) && (*(int *)(param_1 + 0xbc) != 0)) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x63060000;
    *(uint *)(param_1 + 0x208) = (uint)DAT_01dc1418;
    return 1;
  }
  return 0;
}

