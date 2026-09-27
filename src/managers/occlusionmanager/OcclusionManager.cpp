// src/managers/occlusionmanager/OcclusionManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C476E0..00C476E0, 1 functions

#include "mgrr.h"

// 00C476E0  OcclusionManager::loadVCD  size=322  [class]
undefined4 __thiscall OcclusionManager::loadVCD(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 8) + -4);
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  iVar2 = FUN_00a4c830(param_2);
  if (((iVar2 != 0) && (iVar2 = FUN_00de3560(), iVar2 != 0)) &&
     (pcVar3 = (char *)FUN_00de44b0(&DAT_016a68ec,0), pcVar3 != (char *)0x0)) {
    if (((*pcVar3 == 'V') && (pcVar3[1] == 'C')) && ((pcVar3[2] == 'D' && (pcVar3[3] == '\0')))) {
      if (*(int *)(pcVar3 + 4) == 4) {
        uVar1 = *(uint *)(pcVar3 + 8);
        *(uint *)(param_1 + 0xc) = uVar1;
        if (0 < (int)uVar1) {
          uVar5 = -(uint)((int)((ulonglong)uVar1 * 0x18 >> 0x20) != 0) |
                  (uint)((ulonglong)uVar1 * 0x18);
          puVar4 = (uint *)FUN_00dd3580(-(uint)(0xfffffffb < uVar5) | uVar5 + 4,PTR_DAT_018a9b88);
          if (puVar4 == (uint *)0x0) {
            puVar6 = (uint *)0x0;
          }
          else {
            puVar6 = puVar4 + 1;
            *puVar4 = uVar1;
            FUN_00401040(puVar6,0x18,uVar1,&LAB_00c1e010);
          }
          piVar7 = (int *)(pcVar3 + 0xc);
          iVar2 = 0;
          *(uint **)(param_1 + 8) = puVar6;
          if (0 < *(int *)(param_1 + 0xc)) {
            do {
              FUN_00c1e0b0(piVar7,0);
              piVar7 = (int *)((int)piVar7 + *piVar7);
              iVar2 = iVar2 + 1;
            } while (iVar2 < *(int *)(param_1 + 0xc));
          }
        }
        return 1;
      }
      FUN_00dd5650(&DAT_016a68b4,param_2);
      return 0;
    }
    FUN_00dd5650(&DAT_016a687c,param_2);
  }
  return 0;
}

