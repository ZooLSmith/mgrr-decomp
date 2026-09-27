// src/managers/triggermanager/actions/TrgActAreacollision.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F330..00C7F330, 1 functions

#include "mgrr.h"

// 00C7F330  Trigger::Act::AreaCollision  size=82  [class]
int __fastcall Trigger::Act::AreaCollision(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aaaf8);
    return 0;
  }
  piVar2 = (int *)FUN_00a6e640();
  iVar3 = (**(code **)(*piVar2 + 0x50))(*(undefined2 *)(iVar1 + 8),1);
  if (iVar3 == 0) {
    piVar2 = (int *)FUN_00a6e640();
    iVar3 = (**(code **)(*piVar2 + 100))
                      (*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),
                       *(undefined4 *)(iVar1 + 0x10));
  }
  return iVar3;
}

