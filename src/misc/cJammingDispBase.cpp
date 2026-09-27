// src/misc/cJammingDispBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CF65D0..00D251F0, 3 functions

#include "mgrr.h"
#include "cJammingDispBase.h"

// 00CF65D0  cJammingDispBase::vf00  size=62  [class]
undefined4 * __thiscall cJammingDispBase::vf00(undefined4 *param_1,byte param_2)

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

// 00D25170  FUN_00d25170  size=126  [callgraph]
undefined4 __fastcall FUN_00d25170(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00cc9000(2,6);
  if ((iVar1 != 0) && (iVar1 = FUN_00d1df70(&DAT_01b7be50,iVar1), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 8) = 0x16;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x18) = 1;
    FUN_00d1e000();
  }
  if ((*(int *)(param_1 + 0xb8) != 0) && (*(int *)(param_1 + 0xbc) != 0)) {
    *(uint *)(param_1 + 0x1e4) = (uint)*(ushort *)(param_1 + 200);
    *(undefined4 *)(param_1 + 4) = 0;
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20000000;
    return 1;
  }
  return 0;
}

// 00D251F0  cJammingDispBase::vf08  size=110  [class]
void __thiscall cJammingDispBase::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1e0) == 0) {
    FUN_00c1cf50();
    iVar1 = FUN_00c1cfd0();
    if ((iVar1 != 0) && (DAT_01dc1b74 == 5)) {
      iVar1 = FUN_00d25170();
      iVar1 = (-(uint)(iVar1 != 0) & 2) - 1;
      *(int *)(param_1 + 0x1e0) = iVar1;
      if (iVar1 == -1) {
        FUN_00dd5650(&DAT_016bb45c);
      }
    }
  }
  else if ((*(int *)(param_1 + 0x1e0) == 1) && (*(int *)(param_1 + 4) != 0)) {
    FUN_00ce01f0(param_2);
    return;
  }
  return;
}

