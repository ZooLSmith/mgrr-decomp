// src/hw/cVertexFormatPV.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F9F110..00FA9CB0, 2 functions

#include "mgrr.h"

// 00F9F110  Hw::cVertexFormatPV::vf00  size=87  [class]
undefined4 __fastcall Hw::cVertexFormatPV::vf00(int param_1)

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
                      (DAT_01f206d4,&DAT_016ebf60,(undefined4 *)(param_1 + 4));
    if (-1 < iVar2) {
      uVar3 = FUN_00f96fc0(&DAT_016ebf60);
      *(undefined4 *)(param_1 + 8) = uVar3;
      return 1;
    }
  }
  return 0;
}

// 00FA9CB0  Hw::cVertexFormatPV::vf04  size=53  [class]
undefined4 * __thiscall Hw::cVertexFormatPV::vf04(undefined4 *param_1,byte param_2)

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

