// src/unsorted/unit_00FA06C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FA06C0..00FA08F0, 5 functions

#include "mgrr.h"

// 00FA06C0  thunk_FUN_00fa04e0  size=5  [run]
undefined4 __thiscall thunk_FUN_00fa04e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar1 = FUN_00f9ce80(param_1 + 4,param_2);
    if (iVar1 != 0) {
      iVar1 = FUN_00f9cf40(param_1 + 0x14,param_3,*(undefined4 *)(param_1 + 0x24));
      if (iVar1 != 0) {
        iVar1 = FUN_00f9e6d0(param_1 + 0x28,"g_ViewProjMatrix");
        if (iVar1 != 0) {
          iVar1 = FUN_00f9e6d0(param_1 + 0x34,"g_WorldMatrix");
          if (iVar1 != 0) {
            iVar1 = FUN_00f9e6d0(param_1 + 0x40,"g_MatrialColor");
            if (iVar1 != 0) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

// 00FA0740  FUN_00fa0740  size=169  [run]
int __thiscall FUN_00fa0740(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  
  iVar1 = DAT_01f20560;
  if (*(int *)(param_1 + 0x10) == 0) {
    if (param_2 < *(uint *)(param_1 + 0xc)) {
      return param_2 * 0x30 + *(int *)(param_1 + 8);
    }
    return 0;
  }
  if (DAT_01f20560 - *(int *)(param_1 + 0x14) == 1) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar3 = *(int *)(param_1 + 8);
      puVar4 = (uint *)(iVar3 + 0x2c);
      do {
        if (*puVar4 == param_2) {
LAB_00fa07bf:
          return uVar2 * 0x30 + iVar3;
        }
        uVar2 = uVar2 + 1;
        puVar4 = puVar4 + 0xc;
      } while (uVar2 < *(uint *)(param_1 + 0xc));
    }
  }
  else if (((DAT_01f20560 == 0) && (*(int *)(param_1 + 0x14) == -1)) &&
          (uVar2 = 0, *(int *)(param_1 + 0xc) != 0)) {
    iVar3 = *(int *)(param_1 + 8);
    puVar4 = (uint *)(iVar3 + 0x2c);
    do {
      if (*puVar4 == param_2) goto LAB_00fa07bf;
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 0xc;
    } while (uVar2 < *(uint *)(param_1 + 0xc));
  }
  iVar3 = FUN_00f9fb80(param_2,DAT_01f20560);
  if (iVar3 != 0) {
    *(int *)(param_1 + 0x14) = iVar1;
  }
  return iVar3;
}

// 00FA07F0  FUN_00fa07f0  size=93  [run]
void __fastcall FUN_00fa07f0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int local_4;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    local_4 = param_1;
    iVar1 = FUN_00fa0740(0);
    local_4 = 0;
    uVar3 = 0;
    (**(code **)(**(int **)(iVar1 + 4) + 0x48))(*(int **)(iVar1 + 4),0,&local_4);
    piVar2 = *(int **)(param_1 + 0x4c);
    (**(code **)(*DAT_01f206d4 + 0x88))(DAT_01f206d4,piVar2,0,uVar3,0,1);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
  }
  return;
}

// 00FA0850  FUN_00fa0850  size=149  [run]
undefined4 __thiscall FUN_00fa0850(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int unaff_EDI;
  int *piVar2;
  undefined4 uStack_3c;
  undefined4 auStack_8 [2];
  
  *param_2 = 0xffffffff;
  param_2[1] = 0xffffffff;
  param_2[2] = 0x1111111;
  if (*(int *)(param_1 + 4) != 0) {
    piVar2 = *(int **)(param_1 + 4);
    uStack_3c = param_3;
    iVar1 = (**(code **)(*piVar2 + 0x24))(piVar2,0);
    if (iVar1 != 0) {
      auStack_8[0] = 1;
      iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x18))
                        (*(int **)(param_1 + 4),iVar1,&uStack_3c,auStack_8);
      if (((-1 < iVar1) && (4 < unaff_EDI)) && (unaff_EDI < 0xf)) {
        param_2[1] = (int)piVar2 + 0x101;
        *param_2 = 0;
        return 1;
      }
    }
  }
  return 0;
}

// 00FA08F0  FUN_00fa08f0  size=143  [run]
undefined4 __thiscall FUN_00fa08f0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int unaff_EDI;
  int *piVar2;
  undefined4 uStack_3c;
  undefined4 auStack_8 [2];
  
  *param_2 = 0xffffffff;
  param_2[1] = 0xffffffff;
  param_2[2] = 0x1111111;
  if (*(int *)(param_1 + 4) != 0) {
    piVar2 = *(int **)(param_1 + 4);
    uStack_3c = param_3;
    iVar1 = (**(code **)(*piVar2 + 0x24))(piVar2,0);
    if (iVar1 != 0) {
      auStack_8[0] = 1;
      iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x18))
                        (*(int **)(param_1 + 4),iVar1,&uStack_3c,auStack_8);
      if (((-1 < iVar1) && (4 < unaff_EDI)) && (unaff_EDI < 0xf)) {
        *param_2 = 1;
        param_2[1] = piVar2;
        return 1;
      }
    }
  }
  return 0;
}

