// src/unsorted/unit_00D73290.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D73290..00D734B0, 2 functions

#include "types.h"

// 00D73290  FUN_00d73290  size=508  [run]
uint __thiscall
FUN_00d73290(int param_1,uint *param_2,uint *param_3,uint *param_4,undefined4 *param_5,int param_6,
            undefined4 param_7,int param_8)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *(int *)(param_1 + 4);
  if ((iVar2 != 0) && (piVar3 = *(int **)(iVar2 + 4), piVar3 != piVar3 + *(int *)(iVar2 + 8) * 0x6a)
     ) {
    piVar4 = piVar3 + *(int *)(iVar2 + 8) * 0x6a;
    do {
      if (*piVar3 == param_6) {
        puVar1 = (uint *)(piVar3 + param_8 * 0x15 + 1);
        switch(param_7) {
        case 0:
          *param_2 = puVar1[0xd];
          *param_3 = puVar1[0xe];
          *param_4 = 0;
          *param_5 = 2;
          return *puVar1 >> 5 & 1;
        case 1:
          *param_2 = puVar1[5];
          *param_3 = puVar1[6];
          *param_4 = 0;
          *param_5 = 1;
          return *puVar1 >> 2 & 1;
        case 2:
          *param_2 = puVar1[7];
          *param_3 = puVar1[8];
          *param_4 = 0;
          *param_5 = 1;
          return *puVar1 >> 3 & 1;
        case 3:
          *param_2 = puVar1[0xb];
          *param_3 = puVar1[0xc];
          *param_4 = 0;
          *param_5 = 2;
          return *puVar1 >> 6 & 1;
        case 4:
          *param_2 = puVar1[9];
          *param_3 = puVar1[10];
          *param_4 = 0;
          *param_5 = 1;
          return *puVar1 >> 4 & 1;
        case 5:
          *param_2 = puVar1[1];
          *param_3 = puVar1[2];
          *param_4 = 0;
          *param_5 = 2;
          return *puVar1 & 1;
        case 6:
          *param_2 = puVar1[3];
          *param_3 = puVar1[4];
          *param_4 = 0;
          *param_5 = 2;
          return *puVar1 >> 1 & 1;
        case 7:
          *param_2 = puVar1[0xf];
          *param_3 = puVar1[0x10];
          *param_4 = puVar1[0x11];
          *param_5 = 2;
          return *puVar1 >> 7 & 1;
        case 8:
          *param_2 = puVar1[0x12];
          *param_3 = puVar1[0x13];
          *param_4 = puVar1[0x14];
          *param_5 = 2;
          return *puVar1 >> 8 & 1;
        default:
          return 0;
        }
      }
      piVar3 = piVar3 + 0x6a;
    } while (piVar3 != piVar4);
  }
  return 0;
}

// 00D734B0  FUN_00d734b0  size=83  [run]
void __fastcall FUN_00d734b0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 4;
  puVar1 = (undefined4 *)(param_1 + 0x14);
  do {
    puVar1[-3] = 0;
    iVar2 = iVar2 + -1;
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1 = puVar1 + 0x15;
  } while (-1 < iVar2);
  return;
}

