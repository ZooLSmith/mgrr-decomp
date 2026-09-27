// src/unsorted/unit_00E95140.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E95140..00E952D0, 3 functions

#include "types.h"

// 00E95140  FUN_00e95140  size=130  [run]
undefined4 __thiscall FUN_00e95140(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)*param_2)();
  if (cVar1 != '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0x3f800000;
  }
  cVar1 = FUN_00a69130(param_2,&DAT_01662d3c,param_1);
  if (cVar1 != '\0') {
    cVar1 = FUN_00a69130(param_2,&DAT_01662d38,param_1 + 1);
    if (cVar1 != '\0') {
      cVar1 = FUN_00a69130(param_2,&DAT_01662d34,param_1 + 2);
      if (cVar1 != '\0') {
        FUN_00a69130(param_2,&DAT_016d18c0,param_1 + 3);
        return 1;
      }
    }
  }
  return 0;
}

// 00E951D0  FUN_00e951d0  size=55  [run]
void __fastcall FUN_00e951d0(int param_1)

{
  FUN_00ea4380();
  if ((*(int *)(param_1 + 0x4c) != 0) && (*(code **)(param_1 + 0x50) != (code *)0x0)) {
    (**(code **)(param_1 + 0x50))(*(int *)(param_1 + 0x4c),param_1 + 0x2c);
  }
  if ((*(int *)(param_1 + 0x20) != 0) && (*(code **)(param_1 + 0x24) != (code *)0x0)) {
    (**(code **)(param_1 + 0x24))(*(int *)(param_1 + 0x20),param_1);
  }
  return;
}

// 00E952D0  FUN_00e952d0  size=656  [run]
void __thiscall FUN_00e952d0(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar7 = (int *)param_2[2];
  if (*(char *)((int)piVar7 + 0xd) == '\0') {
    if (*(char *)(param_2[1] + 0xd) == '\0') {
      piVar5 = (int *)FUN_00e92cc0(param_2);
      piVar7 = (int *)piVar5[1];
      if (piVar5 != param_2) {
        *(int **)param_2[2] = piVar5;
        piVar5[2] = param_2[2];
        piVar6 = piVar5;
        if (piVar5 != (int *)param_2[1]) {
          piVar6 = (int *)*piVar5;
          if (*(char *)((int)piVar7 + 0xd) == '\0') {
            *piVar7 = (int)piVar6;
          }
          piVar6[2] = (int)piVar7;
          piVar5[1] = param_2[1];
          *(int **)param_2[1] = piVar5;
        }
        if ((int *)*param_1 == param_2) {
          *param_1 = (int)piVar5;
        }
        else {
          iVar3 = *param_2;
          if (*(int **)(iVar3 + 8) == param_2) {
            *(int **)(iVar3 + 8) = piVar5;
          }
          else {
            *(int **)(iVar3 + 4) = piVar5;
          }
        }
        *piVar5 = *param_2;
        iVar3 = piVar5[3];
        *(char *)(piVar5 + 3) = (char)param_2[3];
        *(char *)(param_2 + 3) = (char)iVar3;
        goto LAB_00e953d4;
      }
    }
  }
  else {
    piVar7 = (int *)param_2[1];
  }
  piVar6 = (int *)*param_2;
  if (*(char *)((int)piVar7 + 0xd) == '\0') {
    *piVar7 = (int)piVar6;
  }
  if ((int *)*param_1 == param_2) {
    *param_1 = (int)piVar7;
  }
  else if ((int *)piVar6[2] == param_2) {
    piVar6[2] = (int)piVar7;
  }
  else {
    piVar6[1] = (int)piVar7;
  }
  if ((int *)param_1[2] == param_2) {
    piVar5 = piVar6;
    if (*(char *)((int)piVar7 + 0xd) == '\0') {
      cVar1 = *(char *)(piVar7[2] + 0xd);
      piVar2 = (int *)piVar7[2];
      piVar5 = piVar7;
      while (piVar4 = piVar2, cVar1 == '\0') {
        piVar2 = (int *)piVar4[2];
        cVar1 = *(char *)((int)piVar2 + 0xd);
        piVar5 = piVar4;
      }
    }
    param_1[2] = (int)piVar5;
  }
  if ((int *)param_1[1] == param_2) {
    if (*(char *)((int)piVar7 + 0xd) == '\0') {
      cVar1 = *(char *)(piVar7[1] + 0xd);
      piVar5 = (int *)piVar7[1];
      piVar2 = piVar7;
      while (piVar4 = piVar5, cVar1 == '\0') {
        piVar5 = (int *)piVar4[1];
        cVar1 = *(char *)((int)piVar5 + 0xd);
        piVar2 = piVar4;
      }
      param_1[1] = (int)piVar2;
    }
    else {
      param_1[1] = (int)piVar6;
    }
  }
LAB_00e953d4:
  if ((char)param_2[3] == '\0') {
    if (piVar7 != (int *)*param_1) {
      while (piVar5 = piVar6, (char)piVar7[3] == '\0') {
        piVar6 = (int *)piVar5[2];
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar5[1];
          if ((char)piVar6[3] != '\0') {
            *(undefined1 *)(piVar6 + 3) = 0;
            piVar6 = (int *)piVar5[1];
            *(undefined1 *)(piVar5 + 3) = 1;
            piVar5[1] = piVar6[2];
            if (*(char *)(piVar6[2] + 0xd) == '\0') {
              *(int **)piVar6[2] = piVar5;
            }
            *piVar6 = *piVar5;
            if (piVar5 == (int *)*param_1) {
              *param_1 = (int)piVar6;
            }
            else {
              iVar3 = *piVar5;
              if (piVar5 == *(int **)(iVar3 + 8)) {
                *(int **)(iVar3 + 8) = piVar6;
              }
              else {
                *(int **)(iVar3 + 4) = piVar6;
              }
            }
            piVar6[2] = (int)piVar5;
            *piVar5 = (int)piVar6;
            piVar6 = (int *)piVar5[1];
          }
          if (*(char *)((int)piVar6 + 0xd) == '\0') {
            if ((*(char *)(piVar6[2] + 0xc) != '\0') || (*(char *)(piVar6[1] + 0xc) != '\0')) {
              if (*(char *)(piVar6[1] + 0xc) == '\0') {
                *(undefined1 *)(piVar6[2] + 0xc) = 0;
                *(undefined1 *)(piVar6 + 3) = 1;
                FUN_00e928b0(piVar6);
                piVar6 = (int *)piVar5[1];
              }
              *(char *)(piVar6 + 3) = (char)piVar5[3];
              *(undefined1 *)(piVar5 + 3) = 0;
              *(undefined1 *)(piVar6[1] + 0xc) = 0;
              FUN_00e92860(piVar5);
              *(undefined1 *)(piVar7 + 3) = 0;
              return;
            }
LAB_00e9550a:
            *(undefined1 *)(piVar6 + 3) = 1;
          }
        }
        else {
          if ((char)piVar6[3] != '\0') {
            *(undefined1 *)(piVar6 + 3) = 0;
            piVar6 = (int *)piVar5[2];
            *(undefined1 *)(piVar5 + 3) = 1;
            piVar5[2] = piVar6[1];
            if (*(char *)(piVar6[1] + 0xd) == '\0') {
              *(int **)piVar6[1] = piVar5;
            }
            *piVar6 = *piVar5;
            if (piVar5 == (int *)*param_1) {
              *param_1 = (int)piVar6;
            }
            else {
              iVar3 = *piVar5;
              if (piVar5 == *(int **)(iVar3 + 4)) {
                *(int **)(iVar3 + 4) = piVar6;
              }
              else {
                *(int **)(iVar3 + 8) = piVar6;
              }
            }
            piVar6[1] = (int)piVar5;
            *piVar5 = (int)piVar6;
            piVar6 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar6 + 0xd) == '\0') {
            if ((*(char *)(piVar6[1] + 0xc) == '\0') && (*(char *)(piVar6[2] + 0xc) == '\0'))
            goto LAB_00e9550a;
            if (*(char *)(piVar6[2] + 0xc) == '\0') {
              *(undefined1 *)(piVar6[1] + 0xc) = 0;
              *(undefined1 *)(piVar6 + 3) = 1;
              FUN_00e92860(piVar6);
              piVar6 = (int *)piVar5[2];
            }
            *(char *)(piVar6 + 3) = (char)piVar5[3];
            *(undefined1 *)(piVar5 + 3) = 0;
            *(undefined1 *)(piVar6[2] + 0xc) = 0;
            FUN_00e928b0(piVar5);
            break;
          }
        }
        piVar7 = piVar5;
        piVar6 = (int *)*piVar5;
        if (piVar5 == (int *)*param_1) {
          *(undefined1 *)(piVar5 + 3) = 0;
          return;
        }
      }
    }
    *(undefined1 *)(piVar7 + 3) = 0;
  }
  return;
}

