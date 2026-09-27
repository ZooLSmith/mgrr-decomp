// src/misc/cDamageDispBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CEB590..00D22750, 3 functions

#include "types.h"

// 00CEB590  cDamageDispBase::vf00  size=62  [class]
undefined4 * __thiscall cDamageDispBase::vf00(undefined4 *param_1,byte param_2)

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

// 00D226C0  FUN_00d226c0  size=132  [callgraph]
undefined4 __fastcall FUN_00d226c0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00cc9000(2,0x18);
  if ((iVar1 != 0) && (iVar1 = FUN_00d1df70(&DAT_01b7be50,iVar1), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 8) = 2;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x18) = 1;
    FUN_00d1e000();
  }
  if ((*(int *)(param_1 + 0xb8) != 0) && (*(int *)(param_1 + 0xbc) != 0)) {
    *(uint *)(param_1 + 0x1e4) = (uint)*(ushort *)(param_1 + 0xda);
    *(uint *)(param_1 + 0x1e8) = (uint)*(ushort *)(param_1 + 0x17a);
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x28000000;
    return 1;
  }
  return 0;
}

// 00D22750  cDamageDispBase::vf08  size=351  [class]
void __thiscall cDamageDispBase::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_EDX;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x1e0) == 0) {
    FUN_00c1cf50();
    iVar1 = FUN_00c1cfd0();
    if ((iVar1 != 0) && (DAT_01dc1b74 == 5)) {
      iVar1 = FUN_00d226c0();
      iVar1 = (-(uint)(iVar1 != 0) & 2) - 1;
      *(int *)(param_1 + 0x1e0) = iVar1;
      if (iVar1 == -1) {
        FUN_00dd5650(&DAT_016bb3f0);
      }
    }
    FUN_00cdeec0();
    return;
  }
  if (*(int *)(param_1 + 0x1e0) == 1) {
    if ((DAT_01bea094 & 0x20000) == 0) {
      if (*(int *)(param_1 + 4) != 0) {
        if (((DAT_01bea060 & 0x1000) == 0) && (-1 < (char)DAT_01bea060)) {
          FUN_00cab140(*(undefined4 *)(param_1 + 0x1e4),1);
          FUN_00cab140(*(undefined4 *)(param_1 + 0x1e8),1);
          uVar2 = extraout_EDX;
        }
        else {
          if ((*(uint *)(param_1 + 0x1e4) < *(uint *)(param_1 + 0xc0)) &&
             (iVar1 = *(uint *)(param_1 + 0x1e4) * 0x400 + *(int *)(param_1 + 0xbc), iVar1 != 0)) {
            *(undefined4 *)(iVar1 + 0x3b0) = 0;
          }
          if ((*(uint *)(param_1 + 0x1e8) < *(uint *)(param_1 + 0xc0)) &&
             (iVar1 = *(uint *)(param_1 + 0x1e8) * 0x400 + *(int *)(param_1 + 0xbc), iVar1 != 0)) {
            *(undefined4 *)(iVar1 + 0x3b0) = 0;
          }
          uVar2 = 1;
        }
        FUN_00cdf240(4,uVar2);
        FUN_00ce01f0(param_2);
      }
    }
    else {
      if ((*(uint *)(param_1 + 0x1e4) < *(uint *)(param_1 + 0xc0)) &&
         (iVar1 = *(uint *)(param_1 + 0x1e4) * 0x400 + *(int *)(param_1 + 0xbc), iVar1 != 0)) {
        *(undefined4 *)(iVar1 + 0x3b0) = 0;
      }
      if ((*(uint *)(param_1 + 0x1e8) < *(uint *)(param_1 + 0xc0)) &&
         (iVar1 = *(uint *)(param_1 + 0x1e8) * 0x400 + *(int *)(param_1 + 0xbc), iVar1 != 0)) {
        *(undefined4 *)(iVar1 + 0x3b0) = 0;
        return;
      }
    }
  }
  return;
}

