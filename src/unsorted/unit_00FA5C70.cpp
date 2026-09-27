// src/unsorted/unit_00FA5C70.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FA5C70..00FA5DF0, 5 functions

#include "mgrr.h"

// 00FA5C70  thunk_FUN_00fa45a0  size=5  [run]
void __fastcall thunk_FUN_00fa45a0(int *param_1)

{
  int *piVar1;
  
  if (param_1[1] != 0) {
    FUN_00fa16d0(*param_1);
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *param_1 = 0;
    }
  }
  param_1[1] = 0;
  *param_1 = 0;
  if (param_1[2] != 0) {
    FUN_00dd48d0(param_1[2],0);
    param_1[2] = 0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[9] = 0;
  return;
}

// 00FA5C80  FUN_00fa5c80  size=78  [run]
void __fastcall FUN_00fa5c80(int *param_1)

{
  int *piVar1;
  
  if (param_1[1] != 0) {
    FUN_00fa16d0(*param_1);
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *param_1 = 0;
    }
  }
  param_1[1] = 0;
  *param_1 = 0;
  if (param_1[2] != 0) {
    FUN_00dd48d0(param_1[2],0);
    param_1[2] = 0;
  }
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  return;
}

// 00FA5CD0  FUN_00fa5cd0  size=41  [run]
void __thiscall
FUN_00fa5cd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  FUN_00fa4780(param_1,param_2,param_3,param_4,param_5,param_6,param_1 + 4);
  return;
}

// 00FA5D00  FUN_00fa5d00  size=223  [run]
undefined4 FUN_00fa5d00(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = FUN_00fa95e0(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  uVar4 = -(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 4);
  puVar2 = (uint *)FUN_00dd3580(-(uint)(0xfffffffb < uVar4) | uVar4 + 4,param_2);
  if (puVar2 == (uint *)0x0) {
    DAT_01f20664 = (uint *)0x0;
  }
  else {
    *puVar2 = param_1;
    DAT_01f20664 = puVar2 + 1;
    uVar4 = param_1;
    puVar2 = DAT_01f20664;
    if (-1 < (int)(param_1 - 1)) {
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
    }
    if (DAT_01f20664 != (uint *)0x0) {
      uVar4 = 0;
      if (param_1 != 0) {
        iVar1 = 0;
        do {
          iVar3 = GraphicDevice::CreateOcclusionQuery();
          if (iVar3 == 0) {
            return 0;
          }
          if (((-1 < (int)uVar4) && ((int)uVar4 < DAT_018da4b4)) &&
             (iVar3 = iVar1 + DAT_018da4b0, iVar3 != 0)) {
            *(undefined4 *)(iVar3 + 4) = 0;
            *(undefined2 *)(iVar3 + 8) = 0;
            *(undefined1 *)(iVar3 + 10) = 0;
            *(undefined4 *)(iVar3 + 0xc) = 0;
            *(undefined4 *)(iVar3 + 0x10) = 0;
            *(undefined4 *)(iVar3 + 0x14) = 0;
          }
          uVar4 = uVar4 + 1;
          iVar1 = iVar1 + 0x1c;
        } while (uVar4 < param_1);
      }
      DAT_01f2065c = 0;
      DAT_01f20660 = param_1;
      return 1;
    }
  }
  return 0;
}

// 00FA5DF0  FUN_00fa5df0  size=219  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fa5df0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  FUN_00f9cc10();
  if (DAT_01f20664 != 0) {
    uVar5 = 0;
    iVar3 = DAT_01f20664;
    if (DAT_01f20660 != 0) {
      do {
        iVar1 = *(int *)(iVar3 + uVar5 * 4);
        piVar4 = (int *)(iVar3 + uVar5 * 4);
        if (iVar1 != 0) {
          FUN_00fa16d0(iVar1);
          piVar2 = (int *)*piVar4;
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
            *piVar4 = 0;
          }
          *piVar4 = 0;
          iVar3 = DAT_01f20664;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < DAT_01f20660);
    }
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + -4);
      piVar4 = (int *)(iVar3 + iVar1 * 4);
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        piVar2 = piVar4 + -1;
        piVar4 = piVar4 + -1;
        if (*piVar2 != 0) {
          FUN_00fa16d0(*piVar2);
          piVar2 = (int *)*piVar4;
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
            *piVar4 = 0;
          }
          *piVar4 = 0;
        }
      }
      FUN_00dd4940(iVar3 + -4);
    }
  }
  if ((DAT_018da4b0 != 0) && (DAT_018da4b8 != 0)) {
    FUN_00dd3d90(DAT_018da4b0,0);
  }
  _DAT_018da4a0 = 0;
  _DAT_018da4a4 = 0;
  _DAT_018da4a8 = 0;
  DAT_018da4b8 = 0;
  DAT_018da4b0 = 0;
  DAT_018da4b4 = 0;
  return;
}

