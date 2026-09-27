// src/hw/cVertexFormatP.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F9F0B0..00FA9C20, 2 functions

#include "types.h"

// 00F9F0B0  Hw::cVertexFormatP::vf00  size=87  [class]
undefined4 __fastcall Hw::cVertexFormatP::vf00(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (DAT_01f206d4 != (int *)0x0) {
    iVar2 = (**(code **)(*DAT_01f206d4 + 0x158))
                      (DAT_01f206d4,&PTR_016ebf50,(undefined4 *)(param_1 + 4));
    if (-1 < iVar2) {
      uVar3 = FUN_00f96fc0(&PTR_016ebf50);
      *(undefined4 *)(param_1 + 8) = uVar3;
      return 1;
    }
  }
  return 0;
}

// 00FA9C20  Hw::cVertexFormatP::vf04  size=53  [class]
undefined4 * __thiscall Hw::cVertexFormatP::vf04(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  
  *param_1 = cVertexFormat::vftable;
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[1] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

