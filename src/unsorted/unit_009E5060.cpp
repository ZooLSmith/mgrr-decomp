// src/unsorted/unit_009E5060.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009E5060..009E5060, 1 functions

#include "mgrr.h"

// 009E5060  FUN_009e5060  size=412  [run]
undefined4 __thiscall FUN_009e5060(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  
  for (iVar5 = param_1[1]; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x454)) {
    if ((((*(uint *)(iVar5 + 0x30) & 0xc0000000) == 0) &&
        ((*(uint *)(param_2 + 0x30) & 0xc0000000) == 0)) &&
       (iVar3 = FUN_00a7c9b0(param_2 + 0x8c), iVar3 == 0)) {
      puVar6 = (uint *)(param_2 + 0x470);
      uVar4 = 0;
      do {
        if ((*puVar6 & *(uint *)((iVar5 - param_2) + (int)puVar6)) != 0) {
          return 0;
        }
        uVar4 = uVar4 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar4 < 8);
    }
  }
  piVar2 = (int *)*param_1;
joined_r0x009e50c3:
  do {
    if (piVar2 == (int *)0x0) {
      if (*(int *)(param_2 + 0x458) != 0) {
        if (param_1[1] != 0) {
          *(int *)(param_1[1] + 0x450) = param_2;
          *(int *)(param_2 + 0x454) = param_1[1];
        }
        param_1[2] = param_1[2] + 1;
        param_1[1] = param_2;
        return 1;
      }
      if (*param_1 != 0) {
        *(int *)(*param_1 + 0x450) = param_2;
        *(int *)(param_2 + 0x454) = *param_1;
      }
      param_1[2] = param_1[2] + 1;
      *param_1 = param_2;
      return 1;
    }
    if ((((piVar2[0xc] & 0xc0000000U) == 0) && ((*(uint *)(param_2 + 0x30) & 0xc0000000) == 0)) &&
       (iVar5 = FUN_00a7c9b0(param_2 + 0x8c), iVar5 == 0)) {
      puVar6 = (uint *)(param_2 + 0x470);
      uVar4 = 0;
      do {
        if ((*puVar6 & *(uint *)(((int)piVar2 - param_2) + (int)puVar6)) != 0) {
          piVar2[0xc] = piVar2[0xc] | 0x80000000;
          if (piVar2[0x117] != 0) {
            (**(code **)(*piVar2 + 0x24))();
            piVar2[0x117] = 0;
          }
          iVar5 = piVar2[0x114];
          piVar1 = (int *)piVar2[0x115];
          if (iVar5 != 0) {
            *(int **)(iVar5 + 0x454) = piVar1;
            piVar2[0x114] = 0;
          }
          if (piVar1 != (int *)0x0) {
            piVar1[0x114] = iVar5;
            piVar2[0x115] = 0;
          }
          if (piVar2 == (int *)*param_1) {
            *param_1 = (int)piVar1;
          }
          if (piVar2 == (int *)param_1[1]) {
            param_1[1] = (int)piVar1;
          }
          if (param_1[2] < 1) {
            FUN_009cca90(piVar2,&DAT_0165ad94);
            piVar2 = piVar1;
          }
          else {
            param_1[2] = param_1[2] + -1;
            piVar2 = piVar1;
          }
          goto joined_r0x009e50c3;
        }
        uVar4 = uVar4 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar4 < 8);
    }
    piVar2 = (int *)piVar2[0x115];
  } while( true );
}

