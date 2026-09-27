// src/managers/triggermanager/actions/TrgActScrColiOff.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C80940..00C80940, 1 functions

#include "mgrr.h"

// 00C80940  Trigger::Act::SCR_COLI_OFF  size=195  [class]
int __fastcall Trigger::Act::SCR_COLI_OFF(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  int iVar6;
  int local_4;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar6 = 0;
  if (iVar1 == 0) {
    local_4 = param_1;
    FUN_00dd5650(&DAT_016ab86c);
    return 0;
  }
  iVar5 = 0;
  local_4 = 0;
  piVar2 = (int *)FUN_00c14bb0();
  iVar3 = (**(code **)(*piVar2 + 0x28))(&local_4,*(undefined4 *)(iVar1 + 8));
  if (iVar3 != 0) {
    if (0 < unaff_ESI) {
      do {
        piVar2 = *(int **)(iVar3 + iVar6 * 4);
        if (((piVar2 != (int *)0x0) && (iVar4 = (**(code **)(*piVar2 + 8))(), iVar4 != 0)) &&
           (iVar4 = (**(code **)(**(int **)(iVar3 + iVar6 * 4) + 0xe0))(0,iVar1 + 0xc,0,0),
           iVar4 != 0)) {
          iVar5 = 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < unaff_ESI);
      if (iVar5 != 0) {
        return iVar5;
      }
    }
    FUN_00dd5650(&DAT_016ab828,iVar1 + 0xc);
    return 0;
  }
  FUN_00dd5650(&DAT_016ab7e8,*(undefined4 *)(iVar1 + 8));
  return 0;
}

