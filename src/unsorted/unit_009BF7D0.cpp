// src/unsorted/unit_009BF7D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009BF7D0..009BF7D0, 1 functions

#include "types.h"

// 009BF7D0  FUN_009bf7d0  size=524  [run]
void __fastcall FUN_009bf7d0(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    iVar3 = FUN_00dd3500(0x608,&DAT_01b7be50);
    if (iVar3 != 0) {
      iVar3 = cMessWindowCtrl::cMessWindowCtrl_21();
      if (iVar3 != 0) {
        *(char **)(iVar3 + 0xc) = "cVRMissionMenuParts";
        FUN_00d29ca0(0x75,9);
        *(undefined4 *)(iVar3 + 0x10) = 0;
      }
      *(int *)(param_1 + 4) = iVar3;
      return;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    return;
  }
  if ((*(char *)(iVar3 + 0x5a4) == '\0') || (*(char *)(iVar3 + 0x5a1) != '\0')) goto LAB_009bf9d0;
  bVar1 = false;
  iVar3 = 0;
  do {
    cVar2 = FUN_00d0d3e0(0xb,iVar3);
    if (cVar2 != '\0') {
      FUN_009bf030(10);
      bVar1 = true;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x15);
  if (bVar1) goto LAB_009bf9d0;
  cVar2 = FUN_00cac9c0(0);
  if (cVar2 == '\0') {
    cVar2 = FUN_00cac9c0(1);
    if (cVar2 == '\0') {
      cVar2 = FUN_00cac7e0(8,0);
      if (cVar2 == '\0') {
        cVar2 = FUN_00cac7e0(0x40000,0);
        if (cVar2 == '\0') {
          cVar2 = FUN_00cac7e0(4,0);
          if (cVar2 == '\0') {
            cVar2 = FUN_00cac7e0(0x80000,0);
            if (cVar2 == '\0') {
              cVar2 = FUN_00cac7e0(1,0);
              if (cVar2 == '\0') {
                cVar2 = FUN_00cac7e0(0x10000,0);
                if (cVar2 == '\0') {
                  cVar2 = FUN_00cac7e0(2,0);
                  if (cVar2 == '\0') {
                    cVar2 = FUN_00cac7e0(0x20000,0);
                    if (cVar2 == '\0') {
                      cVar2 = FUN_00ce12f0(0);
                      if (cVar2 == '\0') {
                        cVar2 = FUN_00ce1360(0);
                        if (cVar2 == '\0') {
                          cVar2 = FUN_00cac960();
                          if (cVar2 == '\0') {
                            cVar2 = FUN_00cac640(0x40,0);
                            if (cVar2 == '\0') {
                              cVar2 = FUN_00cac640(0x80,0);
                              if (cVar2 == '\0') goto LAB_009bf9d0;
                              uVar4 = 7;
                            }
                            else {
                              uVar4 = 6;
                            }
                            goto LAB_009bf9c8;
                          }
                        }
                        uVar4 = 5;
                      }
                      else {
                        uVar4 = 4;
                      }
                      goto LAB_009bf9c8;
                    }
                  }
                  uVar4 = 3;
                  goto LAB_009bf9c8;
                }
              }
              uVar4 = 2;
              goto LAB_009bf9c8;
            }
          }
          uVar4 = 1;
          goto LAB_009bf9c8;
        }
      }
      uVar4 = 0;
    }
    else {
      uVar4 = 9;
    }
  }
  else {
    uVar4 = 8;
  }
LAB_009bf9c8:
  FUN_009bf030(uVar4);
LAB_009bf9d0:
                    /* WARNING: Could not recover jumptable at 0x009bf9da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 4) + 4))();
  return;
}

