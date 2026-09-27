// src/misc/voiceSubtitleResourceForSnake.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C49CA0..00C49CA0, 1 functions

#include "types.h"

// 00C49CA0  voiceSubtitleResourceForSnake::play  size=551  [class]
void __thiscall voiceSubtitleResourceForSnake::play(int param_1,uint param_2)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int unaff_retaddr;
  undefined *puVar11;
  int iVar12;
  
  if (((param_2 < 0x12) && (*(int *)(param_1 + 8 + param_2 * 4) != 0)) &&
     (iVar3 = (**(code **)(*DAT_01bea100 + 0x28))(0), iVar3 != 0)) {
    piVar4 = (int *)FUN_00a7c8a0();
    if (piVar4 != (int *)0x0) {
      puVar11 = &DAT_01be9db8;
      (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
      iVar3 = FUN_00dd6d80(puVar11);
      if ((iVar3 != 0) && (iVar3 = FUN_00b80980(), iVar3 != 0)) {
        return;
      }
    }
    if ((DAT_01bea094 & 0x20000) == 0) {
      puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x54) + 4);
      if (puVar5 != puVar5 + *(int *)(*(int *)(param_1 + 0x54) + 8)) {
        do {
          iVar3 = thunk_FUN_00e58ed0(*puVar5);
          if (iVar3 == 0) {
            puVar5 = (undefined4 *)FUN_00c3eb90(puVar5);
          }
          else {
            puVar5 = puVar5 + 1;
          }
        } while (puVar5 != (undefined4 *)
                           (*(int *)(*(int *)(param_1 + 0x54) + 4) +
                           *(int *)(*(int *)(param_1 + 0x54) + 8) * 4));
      }
      if (((param_2 == 1) || (param_2 == 2)) ||
         ((param_2 == 3 || (((param_2 == 4 || (param_2 == 5)) || (param_2 == 6)))))) {
        puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x54) + 4);
        if (puVar5 != puVar5 + *(int *)(*(int *)(param_1 + 0x54) + 8)) {
          do {
            iVar3 = thunk_FUN_00e58ed0(*puVar5);
            if (iVar3 != 0) {
              FUN_00e5ca30(*puVar5,0);
            }
            puVar5 = puVar5 + 1;
          } while (puVar5 != (undefined4 *)
                             (*(int *)(*(int *)(param_1 + 0x54) + 4) +
                             *(int *)(*(int *)(param_1 + 0x54) + 8) * 4));
        }
        if (*(int *)(*(int *)(param_1 + 0x54) + 4) != 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x54) + 8) = 0;
        }
      }
      else if (*(int *)(*(int *)(param_1 + 0x54) + 8) != 0) {
        return;
      }
      iVar3 = *(int *)(param_1 + 8 + param_2 * 4);
      iVar1 = *(int *)(iVar3 + 8);
      if (iVar1 != 0) {
        iVar12 = 100;
        do {
          sVar2 = FUN_00dde2d0(0,999);
          iVar9 = 0;
          iVar6 = 0;
          if (0 < iVar1) {
            iVar10 = *(int *)(iVar3 + 4);
            do {
              iVar9 = iVar9 + *(int *)(iVar10 + 0x28);
              if (sVar2 <= iVar9) {
                if (iVar6 != *(int *)(*(int *)(*(int *)(param_1 + 0x50) + 4) + unaff_retaddr * 4)) {
                  *(int *)(*(int *)(*(int *)(param_1 + 0x50) + 4) + unaff_retaddr * 4) = iVar6;
                  uVar8 = FUN_00a7c8a0(0xffffffff,0);
                  FUN_00e5e0c0(iVar10,uVar8);
                  (**(code **)(**(int **)(param_1 + 0x54) + 8))(&stack0x00000000);
                  return;
                }
                break;
              }
              iVar6 = iVar6 + 1;
              iVar10 = iVar10 + 0x30;
            } while (iVar6 < iVar1);
          }
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        if (1 < iVar1) {
          FUN_00dd5650("voiceSubtitleResourceForSnake::play atrandom check failed.");
        }
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x50) + 4) + unaff_retaddr * 4) = 0;
        uVar8 = *(undefined4 *)(iVar3 + 4);
        uVar7 = FUN_00a7c8a0(0xffffffff,0);
        FUN_00e5e0c0(uVar8,uVar7);
      }
    }
  }
  return;
}

