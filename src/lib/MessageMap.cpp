// src/lib/MessageMap.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E965E0..00E966B0, 2 functions

#include "types.h"

// 00E965E0  lib::MessageMap::vf04  size=198  [class]
void __thiscall lib::MessageMap::vf04(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  for (piVar2 = *(int **)(param_1 + 0x14); (piVar2 != (int *)0xffffffff && (piVar2 != (int *)0x0));
      piVar2 = (int *)piVar2[8]) {
    piVar5 = (int *)*piVar2;
    if (piVar5 == param_2) {
      piVar3 = (int *)piVar5[2];
      if (*(char *)((int)piVar3 + 0xd) == '\0') {
        cVar1 = *(char *)(piVar3[1] + 0xd);
        piVar4 = (int *)piVar3[1];
        while (piVar5 = piVar3, cVar1 == '\0') {
          cVar1 = *(char *)(piVar4[1] + 0xd);
          piVar3 = piVar4;
          piVar4 = (int *)piVar4[1];
        }
      }
      else {
        cVar1 = *(char *)(*piVar5 + 0xd);
        piVar3 = (int *)*piVar5;
        while ((cVar1 == '\0' && (piVar5 == (int *)piVar3[2]))) {
          cVar1 = *(char *)(*piVar3 + 0xd);
          piVar5 = piVar3;
          piVar3 = (int *)*piVar3;
        }
        if (*(char *)((int)piVar5 + 0xd) == '\0') {
          piVar5 = piVar3;
        }
      }
      if ((((piVar5 == (int *)0x0) || (*(char *)((int)piVar5 + 0xd) != '\0')) ||
          (piVar5[5] != piVar2[2])) ||
         (((piVar5[6] != piVar2[3] || (piVar5[7] != piVar2[4])) || (piVar5[8] != piVar2[5])))) {
        piVar5 = (int *)0x0;
      }
      *piVar2 = (int)piVar5;
    }
  }
  FUN_00e952d0(param_2);
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = -1;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  return;
}

// 00E966B0  lib::MessageMap::vf00  size=30  [class]
undefined4 __thiscall lib::MessageMap::vf00(undefined4 param_1,byte param_2)

{
  MessageMapBase::MessageMapBase();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

