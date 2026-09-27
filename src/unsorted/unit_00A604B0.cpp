// src/unsorted/unit_00A604B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A604B0..00A60770, 3 functions

#include "types.h"

// 00A604B0  FUN_00a604b0  size=435  [run]
undefined4 __thiscall
FUN_00a604b0(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  float10 fVar9;
  float10 fVar10;
  int local_b0 [16];
  undefined4 local_70 [27];
  int local_4;
  
  if (*(uint *)(param_1 + 0x1c) <= param_2) {
    return 0;
  }
  puVar6 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x24) + 4) + param_2 * 0x70);
  puVar7 = local_70;
  for (iVar2 = 0x1c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  piVar3 = *(int **)(local_4 + 4);
  iVar2 = 0;
  if (piVar3 != piVar3 + *(int *)(local_4 + 8) * 0x29) {
    piVar8 = local_b0;
    do {
      if ((((piVar3[0x27] == 6) && (*piVar3 == param_4)) && (param_5 % piVar3[6] == 0)) &&
         (iVar2 < 0x10)) {
        if (piVar8 != (int *)0x0) {
          *piVar8 = (int)piVar3;
        }
        iVar2 = iVar2 + 1;
        piVar8 = piVar8 + 1;
      }
      piVar3 = piVar3 + 0x29;
    } while (piVar3 != (int *)(*(int *)(local_4 + 8) * 0xa4 + *(int *)(local_4 + 4)));
    if (iVar2 != 0) {
      fVar9 = (float10)FUN_00dde300(0,0x42c80000);
      fVar10 = (float10)0;
      piVar3 = *(int **)(local_4 + 4);
      piVar8 = piVar3 + *(int *)(local_4 + 8) * 0x29;
      do {
        if (piVar3 == piVar8) {
          return 0;
        }
        if ((piVar3[0x27] != 6) && (*piVar3 == param_3)) {
          switch(piVar3[0x27]) {
          case 0:
            iVar5 = 0;
            break;
          case 1:
            iVar5 = 10;
            break;
          case 2:
            iVar5 = 0xb;
            break;
          case 3:
            iVar5 = 0xc;
            break;
          case 4:
            iVar5 = 0x16;
            break;
          case 5:
            iVar5 = 0x17;
            break;
          default:
            goto switchD_00a605c6_default;
          }
          bVar1 = false;
          for (piVar4 = local_b0; piVar4 != local_b0 + iVar2; piVar4 = piVar4 + 1) {
            if (param_6 != 1) {
LAB_00a6063e:
              return *(undefined4 *)(*piVar4 + 0x1c + (piVar3[0x28] + iVar5) * 4);
            }
            fVar10 = fVar10 + (float10)*(float *)(*piVar4 + 0x14);
            if (fVar9 <= fVar10) {
              bVar1 = true;
            }
            if (bVar1) goto LAB_00a6063e;
          }
        }
switchD_00a605c6_default:
        piVar3 = piVar3 + 0x29;
      } while( true );
    }
  }
  return 0;
}

// 00A60680  FUN_00a60680  size=230  [run]
undefined4 __thiscall FUN_00a60680(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 local_70 [27];
  int local_4;
  
  if (((param_2 != (int *)0x0) && (iVar4 = *(int *)(param_1 + 0x24), iVar4 != 0)) &&
     (puVar5 = *(undefined4 **)(iVar4 + 4), puVar5 != puVar5 + *(int *)(iVar4 + 8) * 0x1c)) {
    do {
      puVar6 = puVar5;
      puVar8 = local_70;
      for (iVar4 = 0x1c; iVar2 = local_4, iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      if ((local_4 != 0) &&
         (piVar7 = *(int **)(local_4 + 4), piVar7 != piVar7 + *(int *)(local_4 + 8) * 0x29)) {
        do {
          piVar3 = (int *)param_2[1];
          piVar1 = piVar3 + param_2[2];
          if (piVar3 != piVar1) {
            do {
              if (*piVar3 == *piVar7) break;
              piVar3 = piVar3 + 1;
            } while (piVar3 != piVar1);
          }
          if (piVar3 == (int *)(param_2[1] + param_2[2] * 4)) {
            (**(code **)(*param_2 + 8))(piVar7);
          }
          piVar7 = piVar7 + 0x29;
        } while (piVar7 != (int *)(*(int *)(iVar2 + 8) * 0xa4 + *(int *)(iVar2 + 4)));
      }
      puVar5 = puVar5 + 0x1c;
    } while (puVar5 != (undefined4 *)
                       (*(int *)(*(int *)(param_1 + 0x24) + 8) * 0x70 +
                       *(int *)(*(int *)(param_1 + 0x24) + 4)));
  }
  return 0;
}

// 00A60770  FUN_00a60770  size=288  [run]
undefined4 FUN_00a60770(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 local_c [4];
  undefined1 local_8 [8];
  
  if (param_1 == 0) {
    return 0;
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  if (iVar6 != iVar6 + *(int *)(*(int *)(param_1 + 0xc) + 8) * 4) {
    do {
      FUN_00a7c940(iVar6);
      iVar4 = FUN_00a81330();
      if (iVar4 != 0) {
        FUN_00a805f0();
      }
      iVar4 = *(int *)(*(int *)(param_1 + 0x10) + 4);
      if (iVar4 != iVar4 + *(int *)(*(int *)(param_1 + 0x10) + 8) * 4) {
        do {
          FUN_00a7c940(iVar4);
          FUN_00a7c940(local_8);
          iVar5 = FUN_00a7c990(local_c);
          if (iVar5 != 0) {
            iVar1 = *(int *)(param_1 + 0x10);
            uVar2 = *(uint *)(iVar1 + 8);
            iVar3 = *(int *)(iVar1 + 4);
            iVar5 = iVar3 + uVar2 * 4;
            if ((((iVar4 != iVar5) && (iVar3 != 0)) && (uVar2 != 0)) &&
               ((uint)(iVar4 - iVar3 >> 2) < uVar2)) {
              while (iVar4 != iVar5 + -4) {
                iVar4 = iVar4 + 4;
                FUN_00a7c960(iVar4);
              }
              *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -1;
            }
            break;
          }
          iVar4 = iVar4 + 4;
        } while (iVar4 != *(int *)(*(int *)(param_1 + 0x10) + 4) +
                          *(int *)(*(int *)(param_1 + 0x10) + 8) * 4);
      }
      iVar6 = iVar6 + 4;
    } while (iVar6 != *(int *)(*(int *)(param_1 + 0xc) + 4) +
                      *(int *)(*(int *)(param_1 + 0xc) + 8) * 4);
  }
  if (*(int *)(*(int *)(param_1 + 0xc) + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 8) = 0;
  }
  return 1;
}

