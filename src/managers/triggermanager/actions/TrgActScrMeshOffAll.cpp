// src/managers/triggermanager/actions/TrgActScrMeshOffAll.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C81310..00C81310, 1 functions

#include "mgrr.h"

// 00C81310  Trigger::Act::SCR_MESH_OFF_ALL  size=103  [class]
undefined4 __fastcall Trigger::Act::SCR_MESH_OFF_ALL(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    iVar4 = 0;
    piVar2 = (int *)FUN_00c14bb0();
    iVar3 = (**(code **)(*piVar2 + 0x18))(0,*(undefined4 *)(iVar1 + 8));
    while (iVar3 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar2 + 0x20))();
      iVar4 = iVar4 + 1;
      piVar2 = (int *)FUN_00c14bb0();
      iVar3 = (**(code **)(*piVar2 + 0x18))(iVar4,*(undefined4 *)(iVar1 + 8));
    }
    return 1;
  }
  FUN_00dd5650(&DAT_016abd3c);
  return 0;
}

