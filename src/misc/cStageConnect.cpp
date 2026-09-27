// src/misc/cStageConnect.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBF580..00CD8670, 3 functions

#include "types.h"

// 00CBF580  cStageConnect::cStageConnect  size=33  [class]
void __fastcall cStageConnect::cStageConnect(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  return;
}

// 00CC7300  cStageConnect::cStageConnect_2  size=119  [class]
void __fastcall cStageConnect::cStageConnect_2(int param_1)

{
  undefined4 *puVar1;
  
  *(undefined4 *)(param_1 + 0x14) = 1;
  FUN_00983b60();
  FUN_00983cf0();
  FUN_00985da0();
  FUN_00985800();
  FUN_00983de0();
  puVar1 = (undefined4 *)FUN_00dd3500(0x14,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    puVar1[3] = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[4] = 0;
    DAT_018b56fc = 0;
    *(undefined4 **)(param_1 + 0x18) = puVar1;
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

// 00CD8670  cStageConnect::vf00  size=53  [class]
undefined4 * __thiscall cStageConnect::vf00(undefined4 *param_1,byte param_2)

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

