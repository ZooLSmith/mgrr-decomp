// src/misc/cJammingWall.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBB840..00CD52D0, 3 functions

#include "types.h"

// 00CBB840  cJammingWall::cJammingWall  size=33  [class]
void __fastcall cJammingWall::cJammingWall(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  return;
}

// 00CBB870  cJammingWall::cJammingWall_2  size=40  [class]
undefined4 * cJammingWall::cJammingWall_2(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    puVar1[1] = 0;
    DAT_01dc0ecc = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00CD52D0  cJammingWall::vf00  size=53  [class]
undefined4 * __thiscall cJammingWall::vf00(undefined4 *param_1,byte param_2)

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

