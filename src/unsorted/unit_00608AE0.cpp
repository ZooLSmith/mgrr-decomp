// src/unsorted/unit_00608AE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00608AE0..00608F30, 5 functions

#include "types.h"

// 00608AE0  FUN_00608ae0  size=660  [run]
void __thiscall FUN_00608ae0(int param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  
  *(undefined4 *)(param_1 + 0x13e0) = 0;
  *(undefined4 *)(param_1 + 0x13e4) = 0;
  *(undefined4 *)(param_1 + 0x13e8) = 0;
  *(undefined4 *)(param_1 + 0x13ec) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x13fc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x13f0) = 0;
  *(undefined4 *)(param_1 + 0x13f4) = 0;
  *(undefined4 *)(param_1 + 0x13f8) = 0;
  piVar2 = (int *)FUN_00c13920();
  iVar3 = (**(code **)(*piVar2 + 0x28))(0);
  if ((iVar3 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar5 = &DAT_01b35b90;
    (**(code **)(*piVar2 + 4))(&DAT_01b35b90);
    iVar3 = FUN_00dd6d80(puVar5);
    if (iVar3 != 0) {
      FUN_00a925a0(&uStack_24);
      fVar1 = (float)piVar2[0x11];
      fStack_34 = (float)piVar2[0x10];
      fStack_30 = (float)piVar2[0x11];
      fStack_2c = (float)piVar2[0x12];
      fStack_28 = (float)piVar2[0x13];
      iVar3 = 0;
      fStack_44 = 0.0;
      fStack_40 = 0.0;
      fStack_3c = 0.0;
      fStack_38 = 1.0;
      do {
        iVar4 = FUN_0093e4a0(iVar3);
        if ((iVar4 != 0) && (*(int *)(iVar4 + 0x14) == *(int *)(param_1 + 0x83c))) {
          FUN_0093fc70(&fStack_44);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0xc);
      if ((((fStack_44 != 0.0) || (fStack_40 != 0.0)) || (fStack_3c != 0.0)) || (param_2 == 3)) {
        switch(param_2) {
        case 0:
        case 2:
          fStack_34 = fStack_44;
          fStack_30 = fVar1;
          fStack_28 = fStack_38;
          fStack_2c = fStack_3c;
          break;
        case 1:
          iVar3 = FUN_00a12210(0x700);
          fStack_34 = *(float *)(iVar3 + 0x40);
          fStack_2c = *(float *)(iVar3 + 0x48);
          fStack_28 = *(float *)(iVar3 + 0x4c);
          fStack_30 = fVar1;
          break;
        case 3:
          iVar3 = FUN_00a81330();
          if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
            fStack_34 = 0.0;
            fStack_30 = 0.0;
            fStack_2c = 1.0;
            D3DXVec3TransformNormal(&fStack_34,&fStack_34,iVar3 + 0x10);
            iVar3 = FUN_00a12210(0);
            fStack_34 = fStack_34 * 3.0 + *(float *)(iVar3 + 0x40);
            fStack_30 = (fStack_30 * 3.0 + *(float *)(iVar3 + 0x44)) - 3.0;
            fStack_28 = fStack_18 * -3.0 + fStack_28 * 3.0 + *(float *)(iVar3 + 0x4c);
            fStack_2c = fStack_2c * 3.0 + *(float *)(iVar3 + 0x48);
          }
        }
        *(float *)(param_1 + 0x13e0) = fStack_34;
        *(float *)(param_1 + 0x13e4) = fStack_30;
        *(float *)(param_1 + 0x13e8) = fStack_2c;
        *(float *)(param_1 + 0x13ec) = fStack_28;
        *(undefined4 *)(param_1 + 0x13f0) = uStack_24;
        *(undefined4 *)(param_1 + 0x13f4) = uStack_20;
        *(undefined4 *)(param_1 + 0x13f8) = uStack_1c;
        *(float *)(param_1 + 0x13fc) = fStack_18;
        return;
      }
    }
  }
  return;
}

// 00608D90  FUN_00608d90  size=57  [run]
void FUN_00608d90(void)

{
  int iVar1;
  char *_Src;
  char local_8 [8];
  
  iVar1 = FUN_00a92f90();
  if (iVar1 != 0) {
    _Src = (char *)FUN_00a95df0(0);
    _strcpy_s(local_8,8,_Src);
    FUN_006086f0(local_8);
  }
  return;
}

// 00608DD0  FUN_00608dd0  size=223  [run]
void __fastcall FUN_00608dd0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  
  *(undefined4 *)(param_1 + 0x5740) = 0;
  *(undefined4 *)(param_1 + 0x5788) = 0;
  *(undefined4 *)(param_1 + 0x5784) = 0;
  *(undefined4 *)(param_1 + 0x5780) = 0;
  *(undefined4 *)(param_1 + 0x577c) = 0;
  *(undefined4 *)(param_1 + 0x5774) = 0;
  *(undefined4 *)(param_1 + 0x5770) = 0;
  *(undefined4 *)(param_1 + 0x576c) = 0;
  *(undefined4 *)(param_1 + 0x5768) = 0;
  *(undefined4 *)(param_1 + 0x5760) = 0;
  *(undefined4 *)(param_1 + 0x575c) = 0;
  *(undefined4 *)(param_1 + 0x5758) = 0;
  *(undefined4 *)(param_1 + 0x5754) = 0;
  *(undefined4 *)(param_1 + 0x578c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5778) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5764) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5750) = 0x3f800000;
  iVar2 = FUN_00a12210(0xffffffff);
  *(ushort *)(iVar2 + 0xa2) = *(ushort *)(iVar2 + 0xa2) & 0xefff;
  iVar2 = FUN_00a12210(0);
  *(ushort *)(iVar2 + 0xa2) = *(ushort *)(iVar2 + 0xa2) & 0xefff;
  iVar2 = FUN_00a12210(0xf00);
  *(ushort *)(iVar2 + 0xa2) = *(ushort *)(iVar2 + 0xa2) & 0xefff;
  puVar1 = *(undefined4 **)(param_1 + 2000);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = &DAT_01b35bdc;
    (**(code **)*puVar1)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      puVar1[0x3b] = 0;
    }
  }
  return;
}

// 00608EB0  FUN_00608eb0  size=126  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00608eb0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  if (*(undefined4 **)(param_1 + 2000) != (undefined4 *)0x0) {
    puVar3 = &DAT_01be9ef4;
    (**(code **)**(undefined4 **)(param_1 + 2000))(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar3);
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
        if (piVar2 != (int *)0x0) {
          puVar3 = &DAT_01b352a0;
          (**(code **)(*piVar2 + 4))(&DAT_01b352a0);
          iVar1 = FUN_00dd6d80(puVar3);
          if (iVar1 != 0) {
            iVar1 = FUN_00d467a0();
            if (iVar1 != 0) {
              piVar2[0x225] = param_2;
            }
          }
        }
      }
    }
  }
  _DAT_01bea9a0 = 1;
  return;
}

// 00608F30  FUN_00608f30  size=120  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00608f30(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  if (*(undefined4 **)(param_1 + 2000) != (undefined4 *)0x0) {
    puVar3 = &DAT_01be9ef4;
    (**(code **)**(undefined4 **)(param_1 + 2000))(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar3);
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
        if (piVar2 != (int *)0x0) {
          puVar3 = &DAT_01b352a0;
          (**(code **)(*piVar2 + 4))(&DAT_01b352a0);
          iVar1 = FUN_00dd6d80(puVar3);
          if (iVar1 != 0) {
            iVar1 = FUN_00d467a0();
            if (iVar1 != 0) {
              piVar2[0x225] = 0;
            }
          }
        }
      }
    }
  }
  _DAT_01bea9a0 = 0;
  return;
}

