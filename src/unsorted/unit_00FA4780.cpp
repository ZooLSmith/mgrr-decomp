// src/unsorted/unit_00FA4780.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FA4780..00FA4780, 1 functions

#include "types.h"

// 00FA4780  FUN_00fa4780  size=367  [run]
undefined4 FUN_00fa4780(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 auStack_68 [14];
  undefined4 uStack_30;
  undefined4 uStack_20;
  undefined4 uStack_14;
  int iStack_c;
  undefined4 *puStack_8;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  piVar1 = (int *)(param_1 + 8);
  FUN_00fa16d0(*(undefined4 *)(param_1 + 8));
  piVar2 = (int *)*piVar1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *piVar1 = 0;
  }
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (DAT_01f206d4 == (int *)0x0) {
    return 0;
  }
  puVar5 = &DAT_01f20668;
  puVar6 = auStack_68;
  for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar4 = 0;
  if (DAT_01f20708 == 2) {
    uVar4 = 2;
  }
  else if (DAT_01f20708 == 4) {
    uVar4 = 4;
  }
  else if (DAT_01f20708 == 8) {
    uVar4 = 8;
  }
  if ((param_2 == 8) || (param_4 == 9)) {
    uStack_30 = 0;
    uVar4 = 0;
  }
  iVar3 = (**(code **)(*DAT_01f206d4 + 0x74))
                    (DAT_01f206d4,param_2,param_3,0x4b,uVar4,uStack_30,0,piVar1,0);
  if (-1 < iVar3) {
    FUN_00fa31c0(*piVar1,0,piVar1,param_2,param_3,1,0x4b,1,param_1,uStack_14);
    if (iStack_c == 4) {
      iVar3 = D3DXCreateTexture(uStack_20,param_2,param_3,1,2,0x4d,0,puStack_8);
      if (iVar3 < 0) {
        return 0;
      }
      FUN_00fa31c0(*puStack_8,9,puStack_8,param_2,param_3,2,0x4d,0,param_1,uStack_14);
    }
    *(int *)(param_1 + 0xc) = param_2;
    *(undefined4 *)(param_1 + 0x10) = param_3;
    *(uint *)(param_1 + 0x14) = -(uint)(param_2 != 8) & DAT_01f20708;
    return 1;
  }
  return 0;
}

